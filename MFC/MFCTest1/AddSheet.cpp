// AddSheet.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCTest1.h"
#include "AddSheet.h"


// CAddSheet

IMPLEMENT_DYNAMIC(CAddSheet, CPropertySheet)

CAddSheet::CAddSheet(UINT nIDCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(nIDCaption, pParentWnd, iSelectPage)
{
	AddPage(&m_summandPage);
	AddPage(&m_addendPage);
	AddPage(&m_addPage);
}

CAddSheet::CAddSheet(LPCTSTR pszCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(pszCaption, pParentWnd, iSelectPage)
{
	AddPage(&m_summandPage);
	AddPage(&m_addendPage);
	AddPage(&m_addPage);
}

CAddSheet::~CAddSheet()
{
}


BEGIN_MESSAGE_MAP(CAddSheet, CPropertySheet)
END_MESSAGE_MAP()


// CAddSheet ��Ϣ�������
