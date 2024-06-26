// UnternehmensartDlg.cpp : implementation file
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
#include "UnternehmensartDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CUnternehmensartDlg dialog


CUnternehmensartDlg::CUnternehmensartDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CUnternehmensartDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CUnternehmensartDlg)
	m_Unternehmensart1 = _T("");
	m_Unternehmensart2 = _T("");
	m_Steuernummer = _T("");
	//}}AFX_DATA_INIT
}


void CUnternehmensartDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CUnternehmensartDlg)
	DDX_Text(pDX, IDC_UNTERNEHMENSART1, m_Unternehmensart1);
	DDV_MaxChars(pDX, m_Unternehmensart1, 40);
	DDX_Text(pDX, IDC_UNTERNEHMENSART2, m_Unternehmensart2);
	DDV_MaxChars(pDX, m_Unternehmensart2, 40);
	DDX_Text(pDX, IDC_STEUERNUMMER, m_Steuernummer);
	DDV_MaxChars(pDX, m_Steuernummer, 20);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CUnternehmensartDlg, CDialog)
	//{{AFX_MSG_MAP(CUnternehmensartDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CUnternehmensartDlg message handlers
