#include "pch.h"
#include "framework.h"
#include "Test.h"
#include "TestDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CTestDlg::CTestDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TEST_DIALOG, pParent)
{
}

void CTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CTestDlg, CDialogEx)
	ON_WM_TIMER()
END_MESSAGE_MAP()

BOOL CTestDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	SetTimer(100, 2000, NULL);
	SetTimer(100, 5000, NULL);

	return TRUE;
}


void CTestDlg::OnTimer(UINT_PTR nIDEvent)
{
	if (nIDEvent == 100)
	{
		AfxMessageBox(L"hihi");
	}
}