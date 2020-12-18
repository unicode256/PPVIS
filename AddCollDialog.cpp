// AddCollDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "AddCollDialog.h"
#include "afxdialogex.h"


// Диалоговое окно AddCollDialog

IMPLEMENT_DYNAMIC(AddCollDialog, CDialogEx)

AddCollDialog::AddCollDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

AddCollDialog::~AddCollDialog()
{
}

void AddCollDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(AddCollDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &AddCollDialog::OnBnClickedButton1)
END_MESSAGE_MAP()


// Обработчики сообщений AddCollDialog


void AddCollDialog::OnBnClickedButton1()
{
	// TODO: добавьте свой код обработчика уведомлений
}
