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
//	// TODO: �ڴ����ר�ô����/����û���
//	CTreeCtrl &m_tree = GetTreeCtrl();
//	return CTreeView::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
//}


// GetTreeCtrl()�ķ�װ����
CTreeCtrl& CFolderTree::GetTree()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	// TODO: �ڴ˴����� return ���
	return GetTreeCtrl();
}
