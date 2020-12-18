// BookReadingDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "BookReadingDialog.h"
#include "afxdialogex.h"


// Диалоговое окно BookReadingDialog

IMPLEMENT_DYNAMIC(BookReadingDialog, CDialogEx)

BookReadingDialog::BookReadingDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

BookReadingDialog::~BookReadingDialog()
{
}

void BookReadingDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(BookReadingDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений BookReadingDialog
