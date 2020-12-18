#pragma once
#include <string>


// Диалоговое окно EntryDialog

class EntryDialog : public CDialogEx
{
	DECLARE_DYNAMIC(EntryDialog)

private:
	std::string login;
	std::string pass;
public:
	EntryDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~EntryDialog();
	std::string getLogin();
	std::string getPass();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ENTRY_DIALOG };
#endif

public:
	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
