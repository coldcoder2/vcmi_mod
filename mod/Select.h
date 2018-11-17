#pragma once
#include "stdafx.h"

namespace Select
{
	// 选择一个文件夹，返回其路径
	CString SelectFolder(CWnd* wnd = NULL);
	// 选择一个文件，返回打开的文件
	CFile* SelectFile(UINT nOpenFlag = CFile::modeCreate | CFile::modeReadWrite | CFile::modeNoTruncate);

}

// 选择一个文件夹，返回其路径
CString Select::SelectFolder(CWnd* wnd /* =NULL */)
{
	// TODO: 在此处添加实现代码.
	CString Path;
	TCHAR BUFFER[MAX_PATH];
	TCHAR FULLPATH[MAX_PATH];
	ZeroMemory(BUFFER, sizeof(BUFFER));
	ZeroMemory(FULLPATH, sizeof(BUFFER));
	BROWSEINFO folder;
	folder.hwndOwner = *wnd;
	folder.lpszTitle = _T("请选择一个文件夹");
	folder.iImage = 0;
	folder.lParam = 0;
	folder.lpfn = NULL;
	folder.ulFlags = NULL;
	folder.pidlRoot = NULL;
	folder.pszDisplayName = BUFFER;
	ITEMIDLIST *pid = ::SHBrowseForFolder(&folder);
	::SHGetPathFromIDList(pid, FULLPATH);
	Path = FULLPATH;
	return Path;
}


// 选择一个文件，返回打开的文件
CFile* Select::SelectFile(UINT nOpenFlg /* = CFile::modeCreate | CFile::modeReadWrite | CFile::modeNoTruncate */)
{
	// TODO: 在此处添加实现代码.
	CFileDialog dlg(true);
	CFile* file = new CFile();
	if (dlg.DoModal() == IDOK)
	{
		file->Open(dlg.GetPathName(), nOpenFlg);
	}
	return file;
}
