#pragma once


// Диалоговое окно AskBookDialog

class AskBookDialog : public CDialogEx
{
	DECLARE_DYNAMIC(AskBookDialog)

public:
	AskBookDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~AskBookDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ASK_BOOK };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
