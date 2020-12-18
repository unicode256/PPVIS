#pragma once


// Диалоговое окно ChangeCollectionDialog

class ChangeCollectionDialog : public CDialogEx
{
	DECLARE_DYNAMIC(ChangeCollectionDialog)

public:
	ChangeCollectionDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~ChangeCollectionDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_COLL_PARAMS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
