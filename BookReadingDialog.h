#pragma once


// Диалоговое окно BookReadingDialog

class BookReadingDialog : public CDialogEx
{
	DECLARE_DYNAMIC(BookReadingDialog)

public:
	BookReadingDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~BookReadingDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
