// StudDlg.cpp : implementation file
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (C) 1992-1998 Microsoft Corporation
// All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

#include "stdafx.h"
#include "StudDlg.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStudentPage property page

// IMPLEMENT_DYNCREATE(CStudentPage, CPropertyPage)

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CStudentPage::CStudentPage() : CPropertyPage(CStudentPage::IDD)
{
	//{{AFX_DATA_INIT(CStudentPage)
	//}}AFX_DATA_INIT
}

CStudentPage::~CStudentPage()
{
}

void CStudentPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CStudentPage)
	//}}AFX_DATA_MAP
}

BOOL CStudentPage::OnInitDialog()
{
	CPropertyPage::OnInitDialog();

	SetModified(TRUE);  // allow the APPLY button to become active

	return TRUE;
}


BEGIN_MESSAGE_MAP(CStudentPage, CPropertyPage)
	//{{AFX_MSG_MAP(CStudentPage)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStudentPage message handlers
