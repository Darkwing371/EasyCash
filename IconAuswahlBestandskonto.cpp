// IconAuswahlBestandskonto.cpp : implementation file
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
#include "IconAuswahlBestandskonto.h"
#include "AnfangssaldoDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CIconAuswahlBestandskonto dialog


CIconAuswahlBestandskonto::CIconAuswahlBestandskonto(CEasyCashView* pParent /*=NULL*/)
	: CIconAuswahl(IDD_ICONAUSWAHL_BESTANDSKONTO, pParent)
{
	//{{AFX_DATA_INIT(CIconAuswahlBestandskonto)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CIconAuswahlBestandskonto::DoDataExchange(CDataExchange* pDX)
{
	CIconAuswahl::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CIconAuswahlBestandskonto)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CIconAuswahlBestandskonto, CIconAuswahl)
	//{{AFX_MSG_MAP(CIconAuswahlBestandskonto)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

void CIconAuswahlBestandskonto::InitDialog()
{
	if (m_nModus == 1) // Auswahl-Modus mit der Option zu �ndern
	{
		SetDlgItemText(IDOK, "Sel. anzeigen");
		SetDlgItemText(IDCANCEL, "Alle anzeigen");
	}
	CIconAuswahl::InitDialog();
}

/////////////////////////////////////////////////////////////////////////////
// CIconAuswahlBestandskonto message handlers



/////////////////////////////////////////////////////////////////////////////
// CIconAuswahlMandant virtuals

static IconInfo Icons[] = {
	"cash",
	"bar",
	"Kasse",
	"Bank f�r Sozialwirtschaft",
	"Citibank",
	"comdirect bank",
	"Commerzbank AG",
	"Deutsche Apotheker- und �rztebank",
	"Deutsche Bank AG",
	"Direkt Anlage Bank",
	"Dresdner Bank",
	"Volks- und Raiffeisenbanken",
	"HypoVereinsbank / Bank Austria",
	"ING Diba",
	"NetBank",
	"NIBC Direct",
	"Noa Bank",
	"Norisbank",
	"Postbank",
	"PSD-Bank",
	"Santander Consumer Bank",
	"SEB",
	"Sparda",
	"Raiffeisenbank (�sterreich)",
	"Immo-Bank / Volksbank",
	"Sparkasse",
	"BAWAG",
	"Credit Suisse",
	"WIR Bank",
	"Bank COOP",
	"UBS",
	"MasterCard",
	"VISA",
	"PayPal",
	"PayPal blau",
	"PayPal gr�n",
	"PayPal rot",
	"PayPal orange",
	"PayPal pink",
	"PayPal grau",
	"Sparschwein",
	"Aktenordner",
	"Schatulle",
	"Kreditkarte",
	"Gesch�ft",
	"Privat",
	"Tastatur",
	"Abacus",
	"Onlinebanking",
	// 36 neue Icons von Herbert Held
	"GEFA-Bank",
	"Barclays-Bank",
	"1822direkt",
	"Deniz-Bank",
	"Creditplus-Bank",
	"Agar-Bank",
	"Ethikbank",
	"DKB",
	"Targo-Bank",
	"W�stenrot",
	"Skatbank",
	"IKANO",
	"Fidor",
	"Rabo-Bank",
	"Moneyou",
	"GarantiBank",
	"Oyak",
	"Audi-Bank",
	"VW-Bank",
	"BMW-Bank",
	"IW-Bank",
	"Ziaatbank",
	"VTB",
	"Bank of Scotland",
	"GE-Capital",
	"ING DiBa (v2)",
	"PrivatBank",
	"SWK",
	"Triodos-Bank",
	"Bank11",
	"Crediteurope",
	"Merkur-Bank",
	"Degussa Bank",
	"Umweltbank",
	"DHB-Bank",
	"Cortal Consors",
	"cronbank",
	"smava",
	"ABK",
	"Naspa",
	"NordFinanz Bank",
	"National-Bank",
	"KD-Bank",
	"Bank 1 Saar",
	"LevoBank",
	"Haspa",
	"Bankhaus August Lenz",
	"Bankhaus Gebr. Martin",
	"MKB-Bank",
	"BBBank",
	"GSL-Bank",
	"BerlinerBank",
	"Aktivbank",
	"ICICI Bank",
	"IKBdirekt",
	"MLP",
	"American Express",
	// 6 bitcoinbezogene Icons
	"Bitcoin",
	"Lightning",
	"BTCPay Server",
	"Bitcart",
	"Lipa",
	"Opago",
	// FinTechs
	"Wise",
	"Revolut"
};

IconInfo* CIconAuswahlBestandskonto::GetIcons()
{
	return Icons;
}

int CIconAuswahlBestandskonto::GetIconCount()
{
	return sizeof(Icons)/sizeof(Icons[0]);
}

void CIconAuswahlBestandskonto::Neu()
{

}

BOOL CIconAuswahlBestandskonto::ChooseProperty(CString &csProperty)
{
	CAnfangssaldoDlg dlg(this);
	dlg.m_csAnfangssaldo = csProperty;
	if (dlg.DoModal() == IDOK)
	{
		csProperty = dlg.m_csAnfangssaldo;
		return TRUE;
	}
	else
		return FALSE;

}

void CIconAuswahlBestandskonto::Umbenennen(int nElement)
{

}

void CIconAuswahlBestandskonto::Loeschen(int nElement)
{

}

int CIconAuswahlBestandskonto::IconAuswahl()
{
	// Icon w�hlen
	CIconAuswahlBestandskonto dlgIcon(m_pParent);
	dlgIcon.DoModal();

	return dlgIcon.m_nSelected;
}
