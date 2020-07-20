// NeuesKonto.cpp : implementation file
//
// Diese Datei ist Bestandteil von EasyCash&Tax, der freien E�R-Fibu
//
// Copyleft (GPLv3) 2020  Thomas Mielke
// 
// Dies ist freie Software; Sie d�rfen sie unter den Bedingungen der 
// GNU General Public License, wie von der Free Software Foundation 
// ver�ffentlicht, weiterverteilen und/oder modifizieren; entweder gem�� 
// Version 3 der Lizenz oder (nach Ihrer Option) jeder sp�teren Version.
//
// Diese Software wird in der Hoffnung weiterverbreitet, dass sie n�tzlich 
// sein wird, jedoch OHNE IRGENDEINE GARANTIE, auch ohne die implizierte 
// Garantie der MARKTREIFE oder der VERWENDBARKEIT F�R EINEN BESTIMMTEN ZWECK.
// Mehr Details finden Sie in der GNU Lesser General Public License.
//
// Sie sollten eine Kopie der GNU General Public License Version 3 zusammen mit 
// dieser Software erhalten haben; falls nicht, schreiben Sie an die Free 
// Software Foundation, Inc., 51 Franklin St, 5th Floor, Boston, MA 02110, USA. 

#include "stdafx.h"
#include "easycash.h"
#include "NeuesKonto.h"
#include "ECTIFace\XMLite.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNeuesKonto dialog


CNeuesKonto::CNeuesKonto(CWnd* pParent /*=NULL*/)
	: CDialog(CNeuesKonto::IDD, pParent)
	, m_unterkategorie(_T(""))
{
	//{{AFX_DATA_INIT(CNeuesKonto)
	m_konto = _T("");
	m_formularname = _T("");
	m_kategorie = _T("");
	//}}AFX_DATA_INIT

	m_aendern = FALSE;
}


void CNeuesKonto::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNeuesKonto)
	DDX_Control(pDX, IDC_FELDZUWEISUNG, m_feldzuweisung);
	DDX_Text(pDX, IDC_KONTO, m_konto);
	DDX_Text(pDX, IDC_FORMULARNAME, m_formularname);
	DDX_Text(pDX, IDC_KATEGORIE, m_kategorie);
	//}}AFX_DATA_MAP
	DDX_Text(pDX, IDC_UNTERKATEGORIE, m_unterkategorie);
	DDV_MaxChars(pDX, m_unterkategorie, 70);
}


BEGIN_MESSAGE_MAP(CNeuesKonto, CDialog)
	//{{AFX_MSG_MAP(CNeuesKonto)
	ON_BN_CLICKED(IDC_UEBERTRAGEN, OnUebertragen)
	ON_BN_CLICKED(IDC_FELDZUWEISUNG_LOESCHEN, OnFeldzuweisungLoeschen)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNeuesKonto message handlers

BOOL CNeuesKonto::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	if (m_aendern)
	{
		SetWindowText("E/�-Kontoname �ndern");
		SetDlgItemText(IDC_HINWEIS, "Hinweis: die �nderung des Kontonamens hat keinen Effekt auf die Kontennamen in den einzelnen Buchungen. Diese m�ssen ggf. manuell ge�ndert werden.");
	}

	// ComboBox aus Formulardatei aufbauen
	m_feldzuweisung.ResetContent();
	XDoc xmldoc;
	xmldoc.LoadFile(m_formulardatei);
	LPXNode xml = xmldoc.GetRoot();
	if (xml)
	{
		LPXNode felder = NULL;
		felder = xml->Find("felder");
		if (felder)
		{
			LPXNode child;
			for(int i = 0; i < felder->GetChildCount(); i++)
			{
				child = felder->GetChild(i);
				if (!stricmp(child->GetAttrValue("typ"), (LPCSTR)m_kategorie))	// Nur Felder der richtigen Kategorei (Einn. oder Ausg.)
				{
					CString csFeldname;
					if (child->GetAttrValue("veraltet") && !stricmp(child->GetAttrValue("veraltet"), "ja"))	// keine veralteten Felder zur Zuweisung zulassen
					{
						csFeldname = "VERALTET: ";
					}
					csFeldname += (CString)"Feld " + child->GetAttrValue("id") + ": " + child->GetChildValue("name");
					m_feldzuweisung.AddString(csFeldname);
					if (m_feldID == atoi(child->GetAttrValue("id"))) 
						m_feldzuweisung.SetCurSel(m_feldzuweisung.GetCount()-1);
				}
			}
		}
	}

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CNeuesKonto::OnOK() 
{
	char buffer[1000];
	m_feldzuweisung.GetLBText(m_feldzuweisung.GetCurSel(), buffer);
	if (!strncmp(buffer, "VERALTET: ", 10))
		m_feldID = atoi(buffer+15);
	else
		m_feldID = atoi(buffer+5);

	if (m_feldID == 66 && strstr(buffer, "Vorsteuerbetr�ge"))
		if (AfxMessageBox("Diejenigen Ausgaben, bei denen ein MWSt.-Satz angegeben wurde, werden automatisch in Feld 66 ber�cksichtigt. Es sollte lediglich ein Konto 'VST-Betr�ge separat' dem Feld zugewiesen sein f�r Sonderf�lle, wo reine Vorsteuer verbucht werden muss. Soll das Feld wirklich verkn�pft werden?", MB_YESNO) != IDYES)
			return;
	
	CDialog::OnOK();
}

void CNeuesKonto::OnUebertragen() 
{
	char buffer[1000];
	m_feldzuweisung.GetLBText(m_feldzuweisung.GetCurSel(), buffer);
	char *cp = buffer+5;
	while (isdigit(*cp))
		cp++;
	if (*cp++ != ':') return;
	if (*cp++ != ' ') return;
	m_konto = cp;
	UpdateData(FALSE);	
}

void CNeuesKonto::OnFeldzuweisungLoeschen() 
{	
	m_feldzuweisung.SetCurSel(-1);	
}
