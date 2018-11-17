#pragma once
#include "stdafx.h"

namespace Select
{
	// ѡ��һ���ļ��У�������·��
	CString SelectFolder(CWnd* wnd = NULL);
	// ѡ��һ���ļ������ش򿪵��ļ�
	CFile* SelectFile(UINT nOpenFlag = CFile::modeCreate | CFile::modeReadWrite | CFile::modeNoTruncate);

}

// ѡ��һ���ļ��У�������·��
CString Select::SelectFolder(CWnd* wnd /* =NULL */)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	CString Path;
	TCHAR BUFFER[MAX_PATH];
	TCHAR FULLPATH[MAX_PATH];
	ZeroMemory(BUFFER, sizeof(BUFFER));
	ZeroMemory(FULLPATH, sizeof(BUFFER));
	BROWSEINFO folder;
	folder.hwndOwner = *wnd;
	folder.lpszTitle = _T("��ѡ��һ���ļ���");
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


// ѡ��һ���ļ������ش򿪵��ļ�
CFile* Select::SelectFile(UINT nOpenFlg /* = CFile::modeCreate | CFile::modeReadWrite | CFile::modeNoTruncate */)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	CFileDialog dlg(true);
	CFile* file = new CFile();
	if (dlg.DoModal() == IDOK)
	{
		file->Open(dlg.GetPathName(), nOpenFlg);
	}
	return file;
}
