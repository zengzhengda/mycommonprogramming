// AddendPage.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCTest1.h"
#include "AddendPage.h"
#include "afxdialogex.h"


// CAddendPage �Ի���

IMPLEMENT_DYNAMIC(CAddendPage, CPropertyPage)

CAddendPage::CAddendPage()
	: CPropertyPage(CAddendPage::IDD)
{

}

CAddendPage::~CAddendPage()
{
}

void CAddendPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAddendPage, CPropertyPage)
END_MESSAGE_MAP()


// CAddendPage ��Ϣ�������
