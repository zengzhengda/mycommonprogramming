// SummandPage.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCTest1.h"
#include "SummandPage.h"
#include "afxdialogex.h"


// CSummandPage �Ի���

IMPLEMENT_DYNAMIC(CSummandPage, CPropertyPage)

CSummandPage::CSummandPage()
	: CPropertyPage(CSummandPage::IDD)
{

}

CSummandPage::~CSummandPage()
{
}

void CSummandPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSummandPage, CPropertyPage)
END_MESSAGE_MAP()


// CSummandPage ��Ϣ�������


BOOL CSummandPage::OnSetActive()
{
	// TODO: �ڴ����ר�ô����/����û���

	//��ȡ������
	CPropertySheet* psheet =(CPropertySheet*) GetParent();
	//�������Ա�ֻ�С���һ����ť��
	psheet->SetWizardButtons(PSWIZB_NEXT);

	return CPropertyPage::OnSetActive();
}
