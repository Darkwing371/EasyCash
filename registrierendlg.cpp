// RegistrierenDlg.cpp : implementation file
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
#include "RegistrierenDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// RegistrierenDlg dialog


RegistrierenDlg::RegistrierenDlg(CWnd* pParent /*=NULL*/)
	: CDialog(RegistrierenDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(RegistrierenDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void RegistrierenDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(RegistrierenDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(RegistrierenDlg, CDialog)
	//{{AFX_MSG_MAP(RegistrierenDlg)
	ON_BN_CLICKED(IDC_EMAIL, OnEmail)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// RegistrierenDlg message handlers

void RegistrierenDlg::OnEmail() 
{
	int n = (int)ShellExecute(m_hWnd, "open", "mailto:thomas@mielke.software?subject=EasyCash-Registrierung-Spende&body=Betrag:%20%20EUR%0a%0aGew�hlte%20Option%20(1-4):%201%0a%0a%0aWenn%20Registriercode%20schon%20vorhanden:%0aNur%20Rechnung%20schicken%20(J/N)?%20N%20%0a%0aRechnungsadresse:%0a%0a%0a", 
		NULL, ".", SW_SHOWNORMAL);
	if (n <= 32)
	{
		AfxMessageBox("Es gab ein kleines Problem mit dem E-Mail Programm auf diesem Rechner.", MB_ICONSTOP);
	}
	else
	{
		AfxMessageBox("Die Spenden-Registrierung sollte jetzt im E-Mail-Programm ge�ffnet worden sein. (Wenn nicht, bitte das Mail-Programm manuell starten und Eine E-Mail an thomas@mielke.software mit Betreff 'EasyCash-Registrierung-Spende' und Betrag sowie Rechnungsadresse im Mailtext angeben.) Nach dem Absenden sollte der Code in wenigen Tagen eintreffen.", MB_ICONINFORMATION);
	}
}

BOOL RegistrierenDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	SetDlgItemText(IDC_BANK, GLOBAL_BANK);
	SetDlgItemText(IDC_BLZ, GLOBAL_BLZ);
	SetDlgItemText(IDC_KONTO, GLOBAL_KONTO);
	SetDlgItemText(IDC_BIC, GLOBAL_BIC);
	SetDlgItemText(IDC_IBAN, GLOBAL_IBAN);
		
	return TRUE;
}
