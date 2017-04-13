#ifndef __RDORESLT_H__
#define __RDORESLT_H__

// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CrdoColumns;

/////////////////////////////////////////////////////////////////////////////
// CrdoResultset wrapper class

class CrdoResultset : public COleDispatchDriver
{
public:
	CrdoResultset() {}      // Calls COleDispatchDriver default constructor
	CrdoResultset(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CrdoResultset(const CrdoResultset& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetBookmark();
	void SetBookmark(const VARIANT& newValue);
	CrdoColumns GetRdoColumns();
	BOOL GetBof();
	BOOL GetBookmarkable();
	BOOL GetEof();
	BOOL GetLockEdits();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	BOOL GetTransactions();
	long GetType();
	long GetRowCount();
	BOOL GetUpdatable();
	BOOL GetRestartable();
	long GetEditMode();
	float GetPercentPosition();
	void SetPercentPosition(float newValue);
	long GetHStmt();
	long GetAbsolutePosition();
	void SetAbsolutePosition(long nNewValue);
	BOOL GetStillExecuting();
	VARIANT GetLastModified();
	long GetBatchSize();
	void SetBatchSize(long nNewValue);
	short GetUpdateOperation();
	void SetUpdateOperation(short nNewValue);
	short GetUpdateCriteria();
	void SetUpdateCriteria(short nNewValue);
	void AddNew();
	void Close();
	void Delete();
	void Edit();
	void MoveFirst();
	void MoveLast(const VARIANT& Options);
	void MoveNext();
	void MovePrevious();
	void Update();
	void Requery(const VARIANT& Options);
	void Move(long Rows, const VARIANT& Start);
	BOOL MoreResults();
	void Cancel();
	void CancelUpdate();
	VARIANT GetRows(const VARIANT& NumRows);
	void BatchUpdate(const VARIANT& SingleRow, const VARIANT& Force);
	void CancelBatch(const VARIANT& SingleRow);
	LPDISPATCH GetActiveConnection();
	void SetRefActiveConnection(LPDISPATCH newValue);
	long GetBatchCollisionCount();
	VARIANT GetBatchCollisionRows();
	long GetLockType();
	void SetLockType(long nNewValue);
	long GetStatus();
	void SetStatus(long nNewValue);
	CString GetClipString(long NumRows, const VARIANT& ColumnDelimiter, const VARIANT& RowDelimiter, const VARIANT& NullExpr);
	void Resync();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // __RDORESLT_H__
