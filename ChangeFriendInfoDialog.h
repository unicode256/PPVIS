#pragma once


// Диалоговое окно ChangeFriendInfoDialog

class ChangeFriendInfoDialog : public CDialogEx
{
	DECLARE_DYNAMIC(ChangeFriendInfoDialog)

public:
	ChangeFriendInfoDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~ChangeFriendInfoDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CHANFE_FR_INFO };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
