#pragma once
#include <afxcview.h>
class CFolderTree :
	public CTreeView
{
public:
	CFolderTree();
	~CFolderTree();
protected:
	DECLARE_DYNCREATE(CFolderTree)
	DECLARE_MESSAGE_MAP()
public:
//	virtual BOOL Create(DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	// GetTreeCtrl()的封装方法
	CTreeCtrl& GetTree();
};

