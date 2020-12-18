// ListOfCollectionsDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "ListOfCollectionsDialog.h"
#include "afxdialogex.h"


// Диалоговое окно ListOfCollectionsDialog

IMPLEMENT_DYNAMIC(ListOfCollectionsDialog, CDialogEx)

ListOfCollectionsDialog::ListOfCollectionsDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_LIST_OF_COLL, pParent)
{

}

ListOfCollectionsDialog::~ListOfCollectionsDialog()
{
}

void ListOfCollectionsDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ListOfCollectionsDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений ListOfCollectionsDialog
