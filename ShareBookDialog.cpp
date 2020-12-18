// ShareBookDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "ShareBookDialog.h"
#include "afxdialogex.h"


// Диалоговое окно ShareBookDialog

IMPLEMENT_DYNAMIC(ShareBookDialog, CDialogEx)

ShareBookDialog::ShareBookDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_SHARE, pParent)
{

}

ShareBookDialog::~ShareBookDialog()
{
}

void ShareBookDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ShareBookDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений ShareBookDialog
