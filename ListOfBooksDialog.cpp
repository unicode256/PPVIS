// ListOfBooksDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "ListOfBooksDialog.h"
#include "afxdialogex.h"


// Диалоговое окно ListOfBooksDialog

IMPLEMENT_DYNAMIC(ListOfBooksDialog, CDialogEx)

ListOfBooksDialog::ListOfBooksDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_LIST_OF_BKS, pParent)
{

}

ListOfBooksDialog::~ListOfBooksDialog()
{
}

void ListOfBooksDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ListOfBooksDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений ListOfBooksDialog
