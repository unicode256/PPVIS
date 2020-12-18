// UserSettingsDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "UserSettingsDialog.h"
#include "afxdialogex.h"


// Диалоговое окно UserSettingsDialog

IMPLEMENT_DYNAMIC(UserSettingsDialog, CDialogEx)

UserSettingsDialog::UserSettingsDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_PROFILE_SETTINGS, pParent)
{

}

UserSettingsDialog::~UserSettingsDialog()
{
}

void UserSettingsDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(UserSettingsDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений UserSettingsDialog
