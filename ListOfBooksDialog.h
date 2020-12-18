#pragma once


// Диалоговое окно ListOfBooksDialog

class ListOfBooksDialog : public CDialogEx
{
	DECLARE_DYNAMIC(ListOfBooksDialog)

public:
	ListOfBooksDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~ListOfBooksDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_LIST_OF_BKS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
