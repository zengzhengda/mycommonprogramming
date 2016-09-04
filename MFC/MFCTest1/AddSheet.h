#pragma once

#include "SummandPage.h"
#include "AddendPage.h"
#include "AddPage.h"


// CAddSheet

class CAddSheet : public CPropertySheet
{
	DECLARE_DYNAMIC(CAddSheet)
	
public:
	CAddSheet(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CAddSheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	virtual ~CAddSheet();
private:
	CSummandPage m_summandPage;
	CAddendPage m_addendPage; 
	CAddPage m_addPage;
protected:
	DECLARE_MESSAGE_MAP()
};


