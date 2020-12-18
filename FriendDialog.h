#pragma once


// Диалоговое окно FriendDialog

class FriendDialog : public CDialogEx
{
	DECLARE_DYNAMIC(FriendDialog)

public:
	FriendDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~FriendDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
