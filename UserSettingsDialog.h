#pragma once


// Диалоговое окно UserSettingsDialog

class UserSettingsDialog : public CDialogEx
{
	DECLARE_DYNAMIC(UserSettingsDialog)

public:
	UserSettingsDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~UserSettingsDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_PROFILE_SETTINGS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
