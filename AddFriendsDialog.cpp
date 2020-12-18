// AddFriendsDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "AddFriendsDialog.h"
#include "afxdialogex.h"


// Диалоговое окно AddFriendsDialog

IMPLEMENT_DYNAMIC(AddFriendsDialog, CDialogEx)

AddFriendsDialog::AddFriendsDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_ADD_NEW_FR, pParent)
{

}

AddFriendsDialog::~AddFriendsDialog()
{
}

void AddFriendsDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(AddFriendsDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений AddFriendsDialog
