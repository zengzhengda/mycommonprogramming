#pragma once


// CAddendPage �Ի���

class CAddendPage : public CPropertyPage
{
	DECLARE_DYNAMIC(CAddendPage)

public:
	CAddendPage();
	virtual ~CAddendPage();

// �Ի�������
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
