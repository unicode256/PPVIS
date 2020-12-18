#pragma once


// Диалоговое окно CreateNoteDialog

class CreateNoteDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CreateNoteDialog)

public:
	CreateNoteDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CreateNoteDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CR_NOTE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
