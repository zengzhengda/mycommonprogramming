#pragma once


// CAddPage �Ի���

class CAddPage : public CPropertyPage
{
	DECLARE_DYNAMIC(CAddPage)

public:
	CAddPage();
	virtual ~CAddPage();

// �Ի�������
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnSetActive();
	virtual BOOL OnWizardFinish();
};
