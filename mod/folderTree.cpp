#include "stdafx.h"
#include "folderTree.h"

IMPLEMENT_DYNCREATE(CFolderTree, CTreeView)

BEGIN_MESSAGE_MAP(CFolderTree, CTreeView)
END_MESSAGE_MAP()


CFolderTree::CFolderTree()
{
}


CFolderTree::~CFolderTree()
{
}


//BOOL CFolderTree::Create(DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
//{
//	// TODO: 在此添加专用代码和/或调用基类
//	CTreeCtrl &m_tree = GetTreeCtrl();
//	return CTreeView::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
//}


// GetTreeCtrl()的封装方法
CTreeCtrl& CFolderTree::GetTree()
{
	// TODO: 在此处添加实现代码.
	// TODO: 在此处插入 return 语句
	return GetTreeCtrl();
}
