// IconAuswahlBetrieb.cpp : implementation file
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
#include "IconAuswahlBetrieb.h"
#include "UnternehmensartDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CIconAuswahlBetrieb dialog


CIconAuswahlBetrieb::CIconAuswahlBetrieb(CEasyCashView* pParent /*=NULL*/)
	: CIconAuswahl(IDD_ICONAUSWAHL_BETRIEB, pParent)
{
	//{{AFX_DATA_INIT(CIconAuswahlBetrieb)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CIconAuswahlBetrieb::DoDataExchange(CDataExchange* pDX)
{
	CIconAuswahl::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CIconAuswahlBetrieb)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CIconAuswahlBetrieb, CIconAuswahl)
	//{{AFX_MSG_MAP(CIconAuswahlBetrieb)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

void CIconAuswahlBetrieb::InitDialog()
{
	if (m_nModus == 1) // Auswahl-Modus mit der Option zu �ndern
	{
		SetDlgItemText(IDOK, "Sel. anzeigen");
		SetDlgItemText(IDCANCEL, "Alle anzeigen");
	}
	CIconAuswahl::InitDialog();
}

/////////////////////////////////////////////////////////////////////////////
// CIconAuswahlBetrieb message handlers



/////////////////////////////////////////////////////////////////////////////
// CIconAuswahlMandant virtuals

static IconInfo Icons[] = {
	"Standard",
	"Einkaufst�te", 
	"Kiste",
	"Glas",
	"Zettel",
	"F�ller",
	"Bleistift",
	"Tresor",
	"Schreibmaschine",
	"Notizblock",
	"CD",
	"Festplatte",
	"Maus",
	"Computer",
	"Notebook",
	"Platine",
	"Wassermann",
	"Schaf",
	"Krebs", 
	"Sch�tze", 
	"Skorpion",
	"Drache",
	"M�bel",
	"Tor",
	"Obst",
	"Brot",
	"K�se",
	"Kreuz",
	"Geschenk",
	"Kranz",
	"Kosmetik",
	"Schuh", 
	"Handy",
	"Uhr",
	"Kaktus",
	"Kerze",
	"Wecker",
	"Zauberei",
	"B�geleisen",
	"Video",
	"Medikament",
	"Ente",
	"Spielzeug",
	"Mikrofon",
	"Keyboard",
	"Trommel",
	"Lautsprecher",
	"Hund",
	"Sch�del",
	"Vogel",
	"Fisch",
	"Internet",
	"Ausrufungszeichen",
	"H�tchen",
	"Leuchtturm",
	"Pinsel",
	"Ziegel",
	"Teppichmesser",
	"�lkanne",
	"Tr�ger",
	"Zange",
	"Globus",
	"Qualle",
	"Schwamm",
	"Mond",
	"Rakete",
	"Trepanation",
	"B�r",
	"Papierkrieg",
	"Solar"
};

IconInfo* CIconAuswahlBetrieb::GetIcons()
{
	return Icons;
}

int CIconAuswahlBetrieb::GetIconCount()
{
	return sizeof(Icons)/sizeof(Icons[0]);
}

void CIconAuswahlBetrieb::Neu()
{
 
}

BOOL CIconAuswahlBetrieb::ChooseProperty(CString &csProperty)
{
	CUnternehmensartDlg dlg(this);
	int nPos;
	if ((nPos = csProperty.Find("\t")) < 0)
		dlg.m_Unternehmensart1 = csProperty;
	else	// Unternehmensart1, Unternehmensart2 (Rechtsform) und Steuernummer sind durch Tabs getrennt
	{
		int nPos2;
		dlg.m_Unternehmensart1 = csProperty.Left(nPos);
		if ((nPos2 = csProperty.Find("\t", nPos+1)) < 0)
			dlg.m_Unternehmensart2 = csProperty.Mid(nPos+1);
		else
		{
			dlg.m_Unternehmensart2 = csProperty.Mid(nPos+1, nPos2 - nPos - 1);
			dlg.m_Steuernummer = csProperty.Mid(nPos2+1);
		}
	}

	if (dlg.DoModal() == IDOK)
	{
		csProperty = dlg.m_Unternehmensart1 + "\t" + dlg.m_Unternehmensart2 + "\t" + dlg.m_Steuernummer;
		return TRUE;
	}
	else
		return FALSE;
}

void CIconAuswahlBetrieb::Umbenennen(int nElement)
{
	
}

void CIconAuswahlBetrieb::Loeschen(int nElement)
{
	
}

int CIconAuswahlBetrieb::IconAuswahl()
{
	// Icon w�hlen
	CIconAuswahlBetrieb dlgIcon(m_pParent);
	dlgIcon.DoModal();		

	return dlgIcon.m_nSelected;
}