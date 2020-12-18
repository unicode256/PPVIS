// FriendDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "FriendDialog.h"
#include "afxdialogex.h"


// Диалоговое окно FriendDialog

IMPLEMENT_DYNAMIC(FriendDialog, CDialogEx)

FriendDialog::FriendDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

FriendDialog::~FriendDialog()
{
}

void FriendDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(FriendDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений FriendDialog
