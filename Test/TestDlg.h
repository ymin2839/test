#pragma once

class CTestDlg : public CDialogEx
{
public:
	CTestDlg(CWnd* pParent = nullptr);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);

protected:
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
};
