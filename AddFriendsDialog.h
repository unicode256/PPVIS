#pragma once


// Диалоговое окно AddFriendsDialog

class AddFriendsDialog : public CDialogEx
{
	DECLARE_DYNAMIC(AddFriendsDialog)

public:
	AddFriendsDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~AddFriendsDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ADD_NEW_FR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
