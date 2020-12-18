// CreateNoteDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "CreateNoteDialog.h"
#include "afxdialogex.h"


// Диалоговое окно CreateNoteDialog

IMPLEMENT_DYNAMIC(CreateNoteDialog, CDialogEx)

CreateNoteDialog::CreateNoteDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_CR_NOTE, pParent)
{

}

CreateNoteDialog::~CreateNoteDialog()
{
}

void CreateNoteDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CreateNoteDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений CreateNoteDialog
