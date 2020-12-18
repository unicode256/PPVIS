// MainDialog.cpp: файл реализации
//

#include "pch.h"
#include "PPVIS2.h"
#include "MainDialog.h"
#include "afxdialogex.h"


// Диалоговое окно MainDialog

IMPLEMENT_DYNAMIC(MainDialog, CDialogEx)

MainDialog::MainDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MAIN_DIALOG, pParent)
{

}

MainDialog::~MainDialog()
{
}

void MainDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

int MainDialog::getOperation() {
	return operationID;
}

BEGIN_MESSAGE_MAP(MainDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_SHOW_LB, &MainDialog::OnBnClickedButtonShowLb)
	ON_BN_CLICKED(IDC_BUTTON_SHOW_FR, &MainDialog::OnBnClickedButtonShowFr)
	ON_BN_CLICKED(IDC_BUTTON_SHARE_BK, &MainDialog::OnBnClickedButtonShareBk)
	ON_BN_CLICKED(IDC_BUTTON_BUY_BK, &MainDialog::OnBnClickedButtonBuyBk)
END_MESSAGE_MAP()


// Обработчики сообщений MainDialog

void MainDialog::OnBnClickedOk()
{
	UpdateData();
	CDialogEx::OnOK();
}


BOOL MainDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();;

	return TRUE;  // return TRUE unless you set the focus to a control
				  // Исключение: страница свойств OCX должна возвращать значение FALSE
}

void MainDialog::OnBnClickedButtonShowLb()
{
	// TODO: добавьте свой код обработчика уведомлений
}


void MainDialog::OnBnClickedButtonShowFr()
{
	// TODO: добавьте свой код обработчика уведомлений
}


void MainDialog::OnBnClickedButtonShareBk()
{
	// TODO: добавьте свой код обработчика уведомлений
}


void MainDialog::OnBnClickedButtonBuyBk()
{
	// TODO: добавьте свой код обработчика уведомлений
}
