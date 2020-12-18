#pragma once


// Диалоговое окно MainDialog

class MainDialog : public CDialogEx
{
	DECLARE_DYNAMIC(MainDialog)

public:
	MainDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~MainDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAIN_DIALOG };
#endif
public: 
	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonShowLb();
	afx_msg void OnBnClickedButtonShowFr();
	afx_msg void OnBnClickedButtonShareBk();
	afx_msg void OnBnClickedButtonBuyBk();
};
