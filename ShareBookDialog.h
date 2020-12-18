#pragma once


// Диалоговое окно ShareBookDialog

class ShareBookDialog : public CDialogEx
{
	DECLARE_DYNAMIC(ShareBookDialog)

public:
	ShareBookDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~ShareBookDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SHARE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
