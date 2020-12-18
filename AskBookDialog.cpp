// AskBookDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "AskBookDialog.h"
#include "afxdialogex.h"


// Диалоговое окно AskBookDialog

IMPLEMENT_DYNAMIC(AskBookDialog, CDialogEx)

AskBookDialog::AskBookDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_ASK_BOOK, pParent)
{

}

AskBookDialog::~AskBookDialog()
{
}

void AskBookDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(AskBookDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений AskBookDialog
