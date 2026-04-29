
//
// public/tier0/utlbufferstrider.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	class: 1
//

// <030DDC3C> ../public/tier0/utlbufferstrider.h:12
// member functions: 24
// member variables: 3
// class size: 24
class CBufferStrider {
	/* ../public/tier0/utlbufferstrider.h:15 */
	void CBufferStrider(CBufferStrider* , void* , int);
	/* ../public/tier0/utlbufferstrider.h:25 */
	char* StrideString(CBufferStrider* );
	/* ../public/tier0/utlbufferstrider.h:26 */
	char* StrideString(CBufferStrider* , const void* );
	/* ../public/tier0/utlbufferstrider.h:27 */
	CLockedResource<char> WriteString(CBufferStrider* , const char* );
	/* ../public/tier0/utlbufferstrider.h:29 */
	uint8* Get(CBufferStrider* );
	/* ../public/tier0/utlbufferstrider.h:30 */
	int GetRemainingBufferSize(const CBufferStrider* );
	/* ../public/tier0/utlbufferstrider.h:31 */
	void Set(CBufferStrider* , void* , int);
	/* ../public/tier0/utlbufferstrider.h:32 */
	void Align(CBufferStrider* , uint);
protected:
	/* ../public/tier0/utlbufferstrider.h:35 */
	void Validate(CBufferStrider* , int);
	uint8 * m_pBuffer; /* 0 8 */
	uint8 * m_pInitialBuffer; /* 8 8 */
	int m_nBufferSize; /* 16 4 */
	/* ../public/tier0/utlbufferstrider.h:47 */
	DebugLineSegment2D_t* Stride<DebugLineSegment2D_t>(CBufferStrider* , int);
	/* ../public/tier0/utlbufferstrider.h:47 */
	DebugLineSegment3D_t* Stride<DebugLineSegment3D_t>(CBufferStrider* , int);
	/* ../public/tier0/utlbufferstrider.h:47 */
	DebugOverlaySnapshotHeader_t* Stride<DebugOverlaySnapshotHeader_t>(CBufferStrider* , int);
	void CBufferStrider(class CBufferStrider *, void *, int); /* linkage=_ZN14CBufferStriderC4EPvi */
	char * StrideString(class CBufferStrider *); /* linkage=_ZN14CBufferStrider12StrideStringEv */
	char * StrideString(class CBufferStrider *, const void  *); /* linkage=_ZN14CBufferStrider12StrideStringEPKv */
	class CLockedResource<char> WriteString(class CBufferStrider *, const char  *); /* linkage=_ZN14CBufferStrider11WriteStringEPKc */
	uint8 * Get(class CBufferStrider *); /* linkage=_ZN14CBufferStrider3GetEv */
	int GetRemainingBufferSize(const class CBufferStrider  *); /* linkage=_ZNK14CBufferStrider22GetRemainingBufferSizeEv */
	void Set(class CBufferStrider *, void *, int); /* linkage=_ZN14CBufferStrider3SetEPvi */
	void Align(class CBufferStrider *, uint); /* linkage=_ZN14CBufferStrider5AlignEj */
	void Validate(class CBufferStrider *, int); /* linkage=_ZN14CBufferStrider8ValidateEi */
	class DebugLineSegment2D_t * Stride<DebugLineSegment2D_t>(class CBufferStrider *, int); /* linkage=_ZN14CBufferStrider6StrideI20DebugLineSegment2D_tEEPT_i */
	class DebugLineSegment3D_t * Stride<DebugLineSegment3D_t>(class CBufferStrider *, int); /* linkage=_ZN14CBufferStrider6StrideI20DebugLineSegment3D_tEEPT_i */
	class DebugOverlaySnapshotHeader_t * Stride<DebugOverlaySnapshotHeader_t>(class CBufferStrider *, int); /* linkage=_ZN14CBufferStrider6StrideI28DebugOverlaySnapshotHeader_tEEPT_i */
};

// <03176F92> ../public/tier0/utlbufferstrider.h:29
inline void CBufferStrider::Get()
{
} /* size: 0 */

// <03183274> ../public/tier0/utlbufferstrider.h:35
void CBufferStrider::Validate()
{
	{
	}
} /* size: 32 */

// <03176F44> ../public/tier0/utlbufferstrider.h:35
// variables: 2
inline void CBufferStrider::Validate(int nAmountToValidate)
{
	const char   __FUNCTION__; // 38811
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 37
	}
} /* size: 0, variables: 1 */

// <03126AD5> ../public/tier0/utlbufferstrider.h:47
// variables: 2
inline void CBufferStrider::Stride<DebugOverlaySnapshotHeader_t>(int nCount)
{
	uint nAlignMask; // 50
	DebugOverlaySnapshotHeader_t* p; // 52
} /* size: 0, variables: 2 */

// <0312688E> ../public/tier0/utlbufferstrider.h:47
// variables: 2
inline void CBufferStrider::Stride<DebugLineSegment3D_t>(int nCount)
{
	uint nAlignMask; // 50
	DebugLineSegment3D_t* p; // 52
} /* size: 0, variables: 2 */

// <03126819> ../public/tier0/utlbufferstrider.h:47
// variables: 2
inline void CBufferStrider::Stride<DebugLineSegment2D_t>(int nCount)
{
	uint nAlignMask; // 50
	DebugLineSegment2D_t* p; // 52
} /* size: 0, variables: 2 */

// <03176F23> ../public/tier0/utlbufferstrider.h:140
void CBufferStrider::CBufferStrider(void* pBuffer, int nBufferSize)
{
} /* size: 0 */

// <03176EEF> ../public/tier0/utlbufferstrider.h:140
inline void CBufferStrider::CBufferStrider(void* pBuffer, int nBufferSize)
{
} /* size: 0 */

