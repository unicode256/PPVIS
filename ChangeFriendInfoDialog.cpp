// ChangeFriendInfoDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "ChangeFriendInfoDialog.h"
#include "afxdialogex.h"


// Диалоговое окно ChangeFriendInfoDialog

IMPLEMENT_DYNAMIC(ChangeFriendInfoDialog, CDialogEx)

ChangeFriendInfoDialog::ChangeFriendInfoDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_CHANFE_FR_INFO, pParent)
{

}

ChangeFriendInfoDialog::~ChangeFriendInfoDialog()
{
}

void ChangeFriendInfoDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ChangeFriendInfoDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений ChangeFriendInfoDialog
