#pragma once


// Диалоговое окно AddCollDialog

class AddCollDialog : public CDialogEx
{
	DECLARE_DYNAMIC(AddCollDialog)

public:
	AddCollDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~AddCollDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
