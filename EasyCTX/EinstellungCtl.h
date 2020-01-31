#if !defined(AFX_EINSTELLUNGCTL_H__09F74220_7C47_4E2D_ADDC_19E235DD1BF3__INCLUDED_)
#define AFX_EINSTELLUNGCTL_H__09F74220_7C47_4E2D_ADDC_19E235DD1BF3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// EinstellungCtl.h : Declaration of the CEinstellungCtrl ActiveX Control class.
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

/////////////////////////////////////////////////////////////////////////////
// CEinstellungCtrl : See EinstellungCtl.cpp for implementation.

class CEinstellungCtrl : public COleControl
{
	DECLARE_DYNCREATE(CEinstellungCtrl)

// Constructor
public:
	CEinstellungCtrl();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEinstellungCtrl)
	public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();
	//}}AFX_VIRTUAL

// Implementation
protected:
	~CEinstellungCtrl();

	DECLARE_OLECREATE_EX(CEinstellungCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CEinstellungCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CEinstellungCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CEinstellungCtrl)		// Type name and misc status

// Message maps
	//{{AFX_MSG(CEinstellungCtrl)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	//{{AFX_DISPATCH(CEinstellungCtrl)
	afx_msg BSTR HoleEinstellung(LPCTSTR ID);
	afx_msg void SpeichereEinstellung(LPCTSTR ID, LPCTSTR Wert);
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	//{{AFX_EVENT(CEinstellungCtrl)
	//}}AFX_EVENT
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	//{{AFX_DISP_ID(CEinstellungCtrl)
	dispidHoleEinstellung = 1L,
	dispidSpeichereEinstellung = 2L,
	//}}AFX_DISP_ID
	};
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EINSTELLUNGCTL_H__09F74220_7C47_4E2D_ADDC_19E235DD1BF3__INCLUDED)
