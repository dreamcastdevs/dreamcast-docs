// enroldoc.cpp : implementation of the CEnrollDoc class
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
#include "enroll.h"
#include "sectset.h"
#include "coursset.h"
#include "enroldoc.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEnrollDoc

IMPLEMENT_DYNCREATE(CEnrollDoc, CDocument)

BEGIN_MESSAGE_MAP(CEnrollDoc, CDocument)
	//{{AFX_MSG_MAP(CEnrollDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEnrollDoc construction/destruction

CEnrollDoc::CEnrollDoc()
{
	// TODO: add one-time construction code here
}

CEnrollDoc::~CEnrollDoc()
{
}

BOOL CEnrollDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CEnrollDoc diagnostics

#ifdef _DEBUG
void CEnrollDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEnrollDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEnrollDoc commands
