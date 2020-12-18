// ChangeCollectionDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "ChangeCollectionDialog.h"
#include "afxdialogex.h"


// Диалоговое окно ChangeCollectionDialog

IMPLEMENT_DYNAMIC(ChangeCollectionDialog, CDialogEx)

ChangeCollectionDialog::ChangeCollectionDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_COLL_PARAMS, pParent)
{

}

ChangeCollectionDialog::~ChangeCollectionDialog()
{
}

void ChangeCollectionDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ChangeCollectionDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений ChangeCollectionDialog
