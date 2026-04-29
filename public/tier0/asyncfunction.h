
//
// public/tier0/asyncfunction.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 9
//	classes: 3
//

// <001DE285> ../public/tier0/asyncfunction.h:12
void AsyncFunctionHandle_t::AsyncFunctionHandle_t()
{
} /* size: 0 */

// <001DE26C> ../public/tier0/asyncfunction.h:12
inline void AsyncFunctionHandle_t::AsyncFunctionHandle_t()
{
} /* size: 0 */

// <001DE250> ../public/tier0/asyncfunction.h:12
void AsyncFunctionHandle_t::AsyncFunctionHandle_t(int32 value)
{
} /* size: 0 */

// <001DE22B> ../public/tier0/asyncfunction.h:12
inline void AsyncFunctionHandle_t::AsyncFunctionHandle_t(int32 value)
{
} /* size: 0 */

// <001DE212> ../public/tier0/asyncfunction.h:12
inline void AsyncFunctionHandle_t::GetRaw()
{
} /* size: 0 */

// <00625BF1> ../public/tier0/asyncfunction.h:12
// member functions: 30
// member variable: 1
// static member variables: 2
// class size: 4
class AsyncFunctionHandle_t {
	static const enum TypeSafeIntCheckFlag_t CheckValue; /* 0 0 */
	static const bool IS_TYPESAFE_INTEGER = 1; /* 0 0 */
	/* ../public/tier0/asyncfunction.h:12 */
	const char* GetTypeName(void);
	/* ../public/tier0/asyncfunction.h:12 */
	void AsyncFunctionHandle_t(AsyncFunctionHandle_t* );
	/* ../public/tier0/asyncfunction.h:12 */
	void AsyncFunctionHandle_t(AsyncFunctionHandle_t* , int32);
	/* ../public/tier0/asyncfunction.h:12 */
	void SetRaw(AsyncFunctionHandle_t* , int32);
	/* ../public/tier0/asyncfunction.h:12 */
	int32 GetRaw(const AsyncFunctionHandle_t* );
	/* ../public/tier0/asyncfunction.h:12 */
	int32& GetRawRef(AsyncFunctionHandle_t* );
	/* ../public/tier0/asyncfunction.h:12 */
	const int32& GetRawRef(const AsyncFunctionHandle_t* );
	/* ../public/tier0/asyncfunction.h:12 */
	int32* GetRawPtrForWrite(AsyncFunctionHandle_t* );
	/* ../public/tier0/asyncfunction.h:12 */
	bool operator==(const AsyncFunctionHandle_t* , const AsyncFunctionHandle_t& );
	/* ../public/tier0/asyncfunction.h:12 */
	strong_ordering operator<=>(const AsyncFunctionHandle_t* , const AsyncFunctionHandle_t& );
	/* ../public/tier0/asyncfunction.h:12 */
	AsyncFunctionHandle_t& operator++(AsyncFunctionHandle_t* );
	/* ../public/tier0/asyncfunction.h:12 */
	AsyncFunctionHandle_t operator++(AsyncFunctionHandle_t* , int);
	/* ../public/tier0/asyncfunction.h:12 */
	AsyncFunctionHandle_t& operator--(AsyncFunctionHandle_t* );
	/* ../public/tier0/asyncfunction.h:12 */
	AsyncFunctionHandle_t operator--(AsyncFunctionHandle_t* , int);
private:
	int32 m_Value; /* 0 4 */
	/* ../public/tier0/asyncfunction.h:12 */
	AsyncFunctionHandle_t& operator=(AsyncFunctionHandle_t* , int32);
	const char  * GetTypeName(void); /* linkage=_ZN21AsyncFunctionHandle_t11GetTypeNameEv */
	void AsyncFunctionHandle_t(class AsyncFunctionHandle_t *); /* linkage=_ZN21AsyncFunctionHandle_tC4Ev */
	void AsyncFunctionHandle_t(class AsyncFunctionHandle_t *, int32); /* linkage=_ZN21AsyncFunctionHandle_tC4Ei */
	void SetRaw(class AsyncFunctionHandle_t *, int32); /* linkage=_ZN21AsyncFunctionHandle_t6SetRawEi */
	int32 GetRaw(const class AsyncFunctionHandle_t  *); /* linkage=_ZNK21AsyncFunctionHandle_t6GetRawEv */
	int32 & GetRawRef(class AsyncFunctionHandle_t *); /* linkage=_ZN21AsyncFunctionHandle_t9GetRawRefEv */
	const int32  & GetRawRef(const class AsyncFunctionHandle_t  *); /* linkage=_ZNK21AsyncFunctionHandle_t9GetRawRefEv */
	int32 * GetRawPtrForWrite(class AsyncFunctionHandle_t *); /* linkage=_ZN21AsyncFunctionHandle_t17GetRawPtrForWriteEv */
	bool operator==(const class AsyncFunctionHandle_t  *, const class AsyncFunctionHandle_t  &); /* linkage=_ZNK21AsyncFunctionHandle_teqERKS_ */
	class strong_ordering operator<=>(const class AsyncFunctionHandle_t  *, const class AsyncFunctionHandle_t  &); /* linkage=_ZNK21AsyncFunctionHandle_tssERKS_ */
	class AsyncFunctionHandle_t & operator++(class AsyncFunctionHandle_t *); /* linkage=_ZN21AsyncFunctionHandle_tppEv */
	class AsyncFunctionHandle_t operator++(class AsyncFunctionHandle_t *, int); /* linkage=_ZN21AsyncFunctionHandle_tppEi */
	class AsyncFunctionHandle_t & operator--(class AsyncFunctionHandle_t *); /* linkage=_ZN21AsyncFunctionHandle_tmmEv */
	class AsyncFunctionHandle_t operator--(class AsyncFunctionHandle_t *, int); /* linkage=_ZN21AsyncFunctionHandle_tmmEi */
	class AsyncFunctionHandle_t & operator=(class AsyncFunctionHandle_t *, int32); /* linkage=_ZN21AsyncFunctionHandle_taSEi */
};

// <001D13FA> ../public/tier0/asyncfunction.h:17
void IAsyncScheduledFunctions::IAsyncScheduledFunctions()
{
} /* size: 0 */

// <001D13DE> ../public/tier0/asyncfunction.h:17
inline void IAsyncScheduledFunctions::IAsyncScheduledFunctions()
{
} /* size: 0 */

// <00625E48> ../public/tier0/asyncfunction.h:17
// member functions: 14
// member variable: 1
// vtable entries: 5
// class size: 8
class IAsyncScheduledFunctions {
	int ()(void) * * _vptr.IAsyncScheduledFunctions; /* 0 8 */
	/* ../public/tier0/asyncfunction.h:20 */
	virtual void ~IAsyncScheduledFunctions(IAsyncScheduledFunctions* );
	/* ../public/tier0/asyncfunction.h:22 */
	virtual void Init(IAsyncScheduledFunctions* );
	/* ../public/tier0/asyncfunction.h:25 */
	virtual void Shutdown(IAsyncScheduledFunctions* );
	/* ../public/tier0/asyncfunction.h:30 */
	virtual AsyncFunctionHandle_t RegisterScheduledFunction(IAsyncScheduledFunctions* , const CUtlDelegate<float()>& , double);
	/* ../public/tier0/asyncfunction.h:33 */
	virtual bool RescheduleFunction(IAsyncScheduledFunctions* , AsyncFunctionHandle_t, double);
	/* ../public/tier0/asyncfunction.h:36 */
	virtual void UnregisterScheduledFunction(IAsyncScheduledFunctions* , AsyncFunctionHandle_t);
	void IAsyncScheduledFunctions(class IAsyncScheduledFunctions *, const class IAsyncScheduledFunctions  &); /* linkage=_ZN24IAsyncScheduledFunctionsC4ERKS_ */
	void IAsyncScheduledFunctions(class IAsyncScheduledFunctions *); /* linkage=_ZN24IAsyncScheduledFunctionsC4Ev */
	virtual void ~IAsyncScheduledFunctions(class IAsyncScheduledFunctions *); /* linkage=_ZN24IAsyncScheduledFunctionsD4Ev */
	virtual void Init(class IAsyncScheduledFunctions *); /* linkage=_ZN24IAsyncScheduledFunctions4InitEv */
	virtual void Shutdown(class IAsyncScheduledFunctions *); /* linkage=_ZN24IAsyncScheduledFunctions8ShutdownEv */
	virtual class AsyncFunctionHandle_t RegisterScheduledFunction(class IAsyncScheduledFunctions *, const class CUtlDelegate<float()>  &, double); /* linkage=_ZN24IAsyncScheduledFunctions25RegisterScheduledFunctionERK12CUtlDelegateIFfvEEd */
	virtual bool RescheduleFunction(class IAsyncScheduledFunctions *, class AsyncFunctionHandle_t, double); /* linkage=_ZN24IAsyncScheduledFunctions18RescheduleFunctionE21AsyncFunctionHandle_td */
	virtual void UnregisterScheduledFunction(class IAsyncScheduledFunctions *, class AsyncFunctionHandle_t); /* linkage=_ZN24IAsyncScheduledFunctions27UnregisterScheduledFunctionE21AsyncFunctionHandle_t */
};

// <001B3539> ../public/tier0/asyncfunction.h:17
// member functions: 16
// member variable: 1
// vtable entries: 5
// class size: 8
class IAsyncScheduledFunctions {
	void IAsyncScheduledFunctions(IAsyncScheduledFunctions* , const IAsyncScheduledFunctions& );
	void IAsyncScheduledFunctions(IAsyncScheduledFunctions* );
	int ()(void) * * _vptr.IAsyncScheduledFunctions; /* 0 8 */
	/* ../public/tier0/asyncfunction.h:20 */
	virtual void ~IAsyncScheduledFunctions(IAsyncScheduledFunctions* );
	/* ../public/tier0/asyncfunction.h:22 */
	virtual void Init(IAsyncScheduledFunctions* );
	/* ../public/tier0/asyncfunction.h:25 */
	virtual void Shutdown(IAsyncScheduledFunctions* );
	/* ../public/tier0/asyncfunction.h:30 */
	virtual AsyncFunctionHandle_t RegisterScheduledFunction(IAsyncScheduledFunctions* , const CUtlDelegate<float()>& , double);
	/* ../public/tier0/asyncfunction.h:33 */
	virtual bool RescheduleFunction(IAsyncScheduledFunctions* , AsyncFunctionHandle_t, double);
	/* ../public/tier0/asyncfunction.h:36 */
	virtual void UnregisterScheduledFunction(IAsyncScheduledFunctions* , AsyncFunctionHandle_t);
	void IAsyncScheduledFunctions(class IAsyncScheduledFunctions *, const class IAsyncScheduledFunctions  &); /* linkage=_ZN24IAsyncScheduledFunctionsC4ERKS_ */
	void IAsyncScheduledFunctions(class IAsyncScheduledFunctions *); /* linkage=_ZN24IAsyncScheduledFunctionsC4Ev */
	virtual void ~IAsyncScheduledFunctions(class IAsyncScheduledFunctions *); /* linkage=_ZN24IAsyncScheduledFunctionsD4Ev */
	virtual void Init(class IAsyncScheduledFunctions *); /* linkage=_ZN24IAsyncScheduledFunctions4InitEv */
	virtual void Shutdown(class IAsyncScheduledFunctions *); /* linkage=_ZN24IAsyncScheduledFunctions8ShutdownEv */
	virtual class AsyncFunctionHandle_t RegisterScheduledFunction(class IAsyncScheduledFunctions *, const class CUtlDelegate<float()>  &, double); /* linkage=_ZN24IAsyncScheduledFunctions25RegisterScheduledFunctionERK12CUtlDelegateIFfvEEd */
	virtual bool RescheduleFunction(class IAsyncScheduledFunctions *, class AsyncFunctionHandle_t, double); /* linkage=_ZN24IAsyncScheduledFunctions18RescheduleFunctionE21AsyncFunctionHandle_td */
	virtual void UnregisterScheduledFunction(class IAsyncScheduledFunctions *, class AsyncFunctionHandle_t); /* linkage=_ZN24IAsyncScheduledFunctions27UnregisterScheduledFunctionE21AsyncFunctionHandle_t */
};

// <001DE1FB> ../public/tier0/asyncfunction.h:20
void IAsyncScheduledFunctions::~IAsyncScheduledFunctions()
{
} /* size: 0 */

// <001DE1CB> ../public/tier0/asyncfunction.h:20
inline void IAsyncScheduledFunctions::~IAsyncScheduledFunctions()
{
} /* size: 0 */

