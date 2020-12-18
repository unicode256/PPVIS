#pragma once


// Диалоговое окно ListOfCollectionsDialog

class ListOfCollectionsDialog : public CDialogEx
{
	DECLARE_DYNAMIC(ListOfCollectionsDialog)

public:
	ListOfCollectionsDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~ListOfCollectionsDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_LIST_OF_COLL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
