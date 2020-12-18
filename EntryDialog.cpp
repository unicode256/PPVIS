// EntryDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "EntryDialog.h"
#include "afxdialogex.h"


// Диалоговое окно EntryDialog

IMPLEMENT_DYNAMIC(EntryDialog, CDialogEx)

EntryDialog::EntryDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ENTRY_DIALOG, pParent)
{

}

EntryDialog::~EntryDialog()
{
}

void EntryDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}



BEGIN_MESSAGE_MAP(EntryDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений EntryDialog

void EntryDialog::OnBnClickedOk()
{
	UpdateData();
	CDialogEx::OnOK();
}


BOOL EntryDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();;

	return TRUE;  // return TRUE unless you set the focus to a control
				  // Исключение: страница свойств OCX должна возвращать значение FALSE
}