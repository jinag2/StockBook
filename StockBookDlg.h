
// StockBookDlg.h : header file
//

#pragma once


// CStockBookDlg dialog
class CStockBookDlg : public CBCGPDialog
{
// Construction
public:
	CStockBookDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_STOCKBOOK_DIALOG };
#endif

protected:
	void DoDataExchange(CDataExchange* pDX) override;	// DDX/DDV support
	BOOL OnInitDialog() override;

	DECLARE_MESSAGE_MAP()

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
};
