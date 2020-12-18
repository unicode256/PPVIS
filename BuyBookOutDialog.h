#pragma once


// Диалоговое окно BuyBookOutDialog

class BuyBookOutDialog : public CDialogEx
{
	DECLARE_DYNAMIC(BuyBookOutDialog)

public:
	BuyBookOutDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~BuyBookOutDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_BUY_OUT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
