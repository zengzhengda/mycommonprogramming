
// MFCTest1Dlg.h : ͷ�ļ�
//
#include "TipDlg.h"

#pragma once


// CMFCTest1Dlg �Ի���
class CMFCTest1Dlg : public CDialogEx
{
private:
	TipDlg *m_pTipDlg;
// ����
public:
	CMFCTest1Dlg(CWnd* pParent = NULL);	// ��׼���캯��
	~CMFCTest1Dlg();
// �Ի�������
	enum { IDD = IDD_MFCTEST1_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	double m_add1;
	double m_add2;
	double m_sum;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedInstructButton();
};
