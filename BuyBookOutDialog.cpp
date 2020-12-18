// BuyBookOutDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "BuyBookOutDialog.h"
#include "afxdialogex.h"


// Диалоговое окно BuyBookOutDialog

IMPLEMENT_DYNAMIC(BuyBookOutDialog, CDialogEx)

BuyBookOutDialog::BuyBookOutDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_BUY_OUT, pParent)
{

}

BuyBookOutDialog::~BuyBookOutDialog()
{
}

void BuyBookOutDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(BuyBookOutDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений BuyBookOutDialog
