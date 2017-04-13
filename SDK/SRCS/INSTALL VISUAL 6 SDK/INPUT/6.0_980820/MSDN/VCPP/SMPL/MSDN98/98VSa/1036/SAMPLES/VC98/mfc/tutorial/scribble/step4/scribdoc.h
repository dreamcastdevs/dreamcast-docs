// ScribDoc.h : interface of the CScribbleDoc class
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
/////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////
// class CStroke
//
// A stroke is a series of connected points in the scribble drawing.
// A scribble document may have multiple strokes.

class CStroke : public CObject
{
public:
	CStroke(UINT nPenWidth);

protected:
	CStroke();
	DECLARE_SERIAL(CStroke)

// Attributes
protected:
	UINT                   m_nPenWidth;    // one pen width applies to entire stroke
public:
	CArray<CPoint,CPoint>  m_pointArray;   // series of connected points
	CRect               m_rectBounding; // smallest rect that surrounds all
										// of the points in the stroke
public:
	CRect& GetBoundingRect() { return m_rectBounding; }

// Operations
public:
	BOOL DrawStroke(CDC* pDC);
	void FinishStroke();

public:
	virtual void Serialize(CArchive& ar);
};



class CScribbleDoc : public CDocument
{
protected: // create from serialization only
	CScribbleDoc();
	DECLARE_DYNCREATE(CScribbleDoc)

// Attributes
protected:
	// The document keeps track of the current pen width on
	// behalf of all views. We'd like the user interface of
	// Scribble to be such that if the user chooses the Draw
	// Thick Line command, it will apply to all views, not just
	// the view that currently has the focus.

	UINT            m_nPenWidth;        // current user-selected pen width
	BOOL            m_bThickPen;        // TRUE if current pen is thick
	UINT            m_nThinWidth;
	UINT            m_nThickWidth;
	CPen            m_penCur;           // pen created according to
										// user-selected pen style (width)
public:
	CTypedPtrList<CObList,CStroke*>     m_strokeList;
	CPen*           GetCurrentPen() { return &m_penCur; }

protected:
	CSize           m_sizeDoc;
public:
	CSize GetDocSize() { return m_sizeDoc; }

// Operations
public:
	CStroke* NewStroke();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CScribbleDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	virtual void DeleteContents();
	//}}AFX_VIRTUAL

// Implementation
protected:
	void ReplacePen();

public:
	virtual ~CScribbleDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	void            InitDocument();

// Generated message map functions
protected:
	//{{AFX_MSG(CScribbleDoc)
	afx_msg void OnEditClearAll();
	afx_msg void OnPenThickOrThin();
	afx_msg void OnUpdateEditClearAll(CCmdUI* pCmdUI);
	afx_msg void OnUpdatePenThickOrThin(CCmdUI* pCmdUI);
	afx_msg void OnPenWidths();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
