
//
// public/tier0/utlbinaryblock.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 12
//	classes: 3
//

// <05D4CE42> ../public/tier0/utlbinaryblock.h:19
void CUtlBinaryBlock::~CUtlBinaryBlock()
{
} /* size: 0 */

// <05D4CE26> ../public/tier0/utlbinaryblock.h:19
inline void CUtlBinaryBlock::~CUtlBinaryBlock()
{
} /* size: 0 */

// <00033A48> ../public/tier0/utlbinaryblock.h:19
// member functions: 47
// member variables: 2
// class size: 24
class CUtlBinaryBlock {
	/* ../public/tier0/utlbinaryblock.h:22 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , int, int);
	/* ../public/tier0/utlbinaryblock.h:25 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , void* , int, int);
	/* ../public/tier0/utlbinaryblock.h:26 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , const void* , int);
	/* ../public/tier0/utlbinaryblock.h:27 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , const CUtlBinaryBlock& );
	/* ../public/tier0/utlbinaryblock.h:33 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , CUtlBinaryBlock& );
	/* ../public/tier0/utlbinaryblock.h:42 */
	void Get(const CUtlBinaryBlock* , void* , int);
	/* ../public/tier0/utlbinaryblock.h:43 */
	void Set(CUtlBinaryBlock* , const void* , int);
	/* ../public/tier0/utlbinaryblock.h:44 */
	const void* Get(const CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:45 */
	void* Get(CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:47 */
	unsigned char& operator[](CUtlBinaryBlock* , int);
	/* ../public/tier0/utlbinaryblock.h:48 */
	const unsigned char& operator[](const CUtlBinaryBlock* , int);
	/* ../public/tier0/utlbinaryblock.h:50 */
	int Length(const CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:51 */
	void SetLength(CUtlBinaryBlock* , int);
	/* ../public/tier0/utlbinaryblock.h:52 */
	bool IsEmpty(const CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:53 */
	void Clear(CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:54 */
	void Purge(CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:56 */
	bool IsReadOnly(const CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:57 */
	bool IsExternalMemory(const CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:60 */
	void AimAtExternalMemory(CUtlBinaryBlock* , void* , uint);
	/* ../public/tier0/utlbinaryblock.h:63 */
	void AssumeExternalMemory(CUtlBinaryBlock* , void* , uint);
	/* ../public/tier0/utlbinaryblock.h:65 */
	CUtlBinaryBlock& operator=(CUtlBinaryBlock* , const CUtlBinaryBlock& );
	/* ../public/tier0/utlbinaryblock.h:66 */
	CUtlBinaryBlock& operator=(CUtlBinaryBlock* , CUtlBinaryBlock& );
	/* ../public/tier0/utlbinaryblock.h:69 */
	bool operator==(const CUtlBinaryBlock* , const CUtlBinaryBlock& );
private:
	CUtlMemory<unsigned char, int> m_Memory; /* 0 16 */
	int m_nActualLength; /* 16 4 */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, int, int); /* linkage=_ZN15CUtlBinaryBlockC4Eii */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, void *, int, int); /* linkage=_ZN15CUtlBinaryBlockC4EPvii */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, const void  *, int); /* linkage=_ZN15CUtlBinaryBlockC4EPKvi */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, const class CUtlBinaryBlock  &); /* linkage=_ZN15CUtlBinaryBlockC4ERKS_ */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, class CUtlBinaryBlock &); /* linkage=_ZN15CUtlBinaryBlockC4EOS_ */
	void Get(const class CUtlBinaryBlock  *, void *, int); /* linkage=_ZNK15CUtlBinaryBlock3GetEPvi */
	void Set(class CUtlBinaryBlock *, const void  *, int); /* linkage=_ZN15CUtlBinaryBlock3SetEPKvi */
	const void  * Get(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock3GetEv */
	void * Get(class CUtlBinaryBlock *); /* linkage=_ZN15CUtlBinaryBlock3GetEv */
	unsigned char & operator[](class CUtlBinaryBlock *, int); /* linkage=_ZN15CUtlBinaryBlockixEi */
	const unsigned char  & operator[](const class CUtlBinaryBlock  *, int); /* linkage=_ZNK15CUtlBinaryBlockixEi */
	int Length(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock6LengthEv */
	void SetLength(class CUtlBinaryBlock *, int); /* linkage=_ZN15CUtlBinaryBlock9SetLengthEi */
	bool IsEmpty(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock7IsEmptyEv */
	void Clear(class CUtlBinaryBlock *); /* linkage=_ZN15CUtlBinaryBlock5ClearEv */
	void Purge(class CUtlBinaryBlock *); /* linkage=_ZN15CUtlBinaryBlock5PurgeEv */
	bool IsReadOnly(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock10IsReadOnlyEv */
	bool IsExternalMemory(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock16IsExternalMemoryEv */
	void AimAtExternalMemory(class CUtlBinaryBlock *, void *, uint); /* linkage=_ZN15CUtlBinaryBlock19AimAtExternalMemoryEPvj */
	void AssumeExternalMemory(class CUtlBinaryBlock *, void *, uint); /* linkage=_ZN15CUtlBinaryBlock20AssumeExternalMemoryEPvj */
	class CUtlBinaryBlock & operator=(class CUtlBinaryBlock *, const class CUtlBinaryBlock  &); /* linkage=_ZN15CUtlBinaryBlockaSERKS_ */
	class CUtlBinaryBlock & operator=(class CUtlBinaryBlock *, class CUtlBinaryBlock &); /* linkage=_ZN15CUtlBinaryBlockaSEOS_ */
	bool operator==(const class CUtlBinaryBlock  *, const class CUtlBinaryBlock  &); /* linkage=_ZNK15CUtlBinaryBlockeqERKS_ */
	void ~CUtlBinaryBlock(class CUtlBinaryBlock *); /* linkage=_ZN15CUtlBinaryBlockD4Ev */
};

// <00E05E88> ../public/tier0/utlbinaryblock.h:19
// member functions: 48
// member variables: 2
// class size: 24
class CUtlBinaryBlock {
	/* ../public/tier0/utlbinaryblock.h:22 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , int, int);
	/* ../public/tier0/utlbinaryblock.h:25 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , void* , int, int);
	/* ../public/tier0/utlbinaryblock.h:26 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , const void* , int);
	/* ../public/tier0/utlbinaryblock.h:27 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , const CUtlBinaryBlock& );
	/* ../public/tier0/utlbinaryblock.h:33 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , CUtlBinaryBlock& );
	/* ../public/tier0/utlbinaryblock.h:42 */
	void Get(const CUtlBinaryBlock* , void* , int);
	/* ../public/tier0/utlbinaryblock.h:43 */
	void Set(CUtlBinaryBlock* , const void* , int);
	/* ../public/tier0/utlbinaryblock.h:44 */
	const void* Get(const CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:45 */
	void* Get(CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:47 */
	unsigned char& operator[](CUtlBinaryBlock* , int);
	/* ../public/tier0/utlbinaryblock.h:48 */
	const unsigned char& operator[](const CUtlBinaryBlock* , int);
	/* ../public/tier0/utlbinaryblock.h:50 */
	int Length(const CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:51 */
	void SetLength(CUtlBinaryBlock* , int);
	/* ../public/tier0/utlbinaryblock.h:52 */
	bool IsEmpty(const CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:53 */
	void Clear(CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:54 */
	void Purge(CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:56 */
	bool IsReadOnly(const CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:57 */
	bool IsExternalMemory(const CUtlBinaryBlock* );
	/* ../public/tier0/utlbinaryblock.h:60 */
	void AimAtExternalMemory(CUtlBinaryBlock* , void* , uint);
	/* ../public/tier0/utlbinaryblock.h:63 */
	void AssumeExternalMemory(CUtlBinaryBlock* , void* , uint);
	/* ../public/tier0/utlbinaryblock.h:65 */
	CUtlBinaryBlock& operator=(CUtlBinaryBlock* , const CUtlBinaryBlock& );
	/* ../public/tier0/utlbinaryblock.h:66 */
	CUtlBinaryBlock& operator=(CUtlBinaryBlock* , CUtlBinaryBlock& );
	/* ../public/tier0/utlbinaryblock.h:69 */
	bool operator==(const CUtlBinaryBlock* , const CUtlBinaryBlock& );
private:
	CUtlMemory<unsigned char, int> m_Memory; /* 0 16 */
	int m_nActualLength; /* 16 4 */
	void ~CUtlBinaryBlock(CUtlBinaryBlock* );
	void CUtlBinaryBlock(class CUtlBinaryBlock *, int, int); /* linkage=_ZN15CUtlBinaryBlockC4Eii */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, void *, int, int); /* linkage=_ZN15CUtlBinaryBlockC4EPvii */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, const void  *, int); /* linkage=_ZN15CUtlBinaryBlockC4EPKvi */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, const class CUtlBinaryBlock  &); /* linkage=_ZN15CUtlBinaryBlockC4ERKS_ */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, class CUtlBinaryBlock &); /* linkage=_ZN15CUtlBinaryBlockC4EOS_ */
	void Get(const class CUtlBinaryBlock  *, void *, int); /* linkage=_ZNK15CUtlBinaryBlock3GetEPvi */
	void Set(class CUtlBinaryBlock *, const void  *, int); /* linkage=_ZN15CUtlBinaryBlock3SetEPKvi */
	const void  * Get(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock3GetEv */
	void * Get(class CUtlBinaryBlock *); /* linkage=_ZN15CUtlBinaryBlock3GetEv */
	unsigned char & operator[](class CUtlBinaryBlock *, int); /* linkage=_ZN15CUtlBinaryBlockixEi */
	const unsigned char  & operator[](const class CUtlBinaryBlock  *, int); /* linkage=_ZNK15CUtlBinaryBlockixEi */
	int Length(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock6LengthEv */
	void SetLength(class CUtlBinaryBlock *, int); /* linkage=_ZN15CUtlBinaryBlock9SetLengthEi */
	bool IsEmpty(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock7IsEmptyEv */
	void Clear(class CUtlBinaryBlock *); /* linkage=_ZN15CUtlBinaryBlock5ClearEv */
	void Purge(class CUtlBinaryBlock *); /* linkage=_ZN15CUtlBinaryBlock5PurgeEv */
	bool IsReadOnly(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock10IsReadOnlyEv */
	bool IsExternalMemory(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock16IsExternalMemoryEv */
	void AimAtExternalMemory(class CUtlBinaryBlock *, void *, uint); /* linkage=_ZN15CUtlBinaryBlock19AimAtExternalMemoryEPvj */
	void AssumeExternalMemory(class CUtlBinaryBlock *, void *, uint); /* linkage=_ZN15CUtlBinaryBlock20AssumeExternalMemoryEPvj */
	class CUtlBinaryBlock & operator=(class CUtlBinaryBlock *, const class CUtlBinaryBlock  &); /* linkage=_ZN15CUtlBinaryBlockaSERKS_ */
	class CUtlBinaryBlock & operator=(class CUtlBinaryBlock *, class CUtlBinaryBlock &); /* linkage=_ZN15CUtlBinaryBlockaSEOS_ */
	bool operator==(const class CUtlBinaryBlock  *, const class CUtlBinaryBlock  &); /* linkage=_ZNK15CUtlBinaryBlockeqERKS_ */
	void ~CUtlBinaryBlock(class CUtlBinaryBlock *); /* linkage=_ZN15CUtlBinaryBlockD4Ev */
};

// <057FBACD> ../../public/tier0/utlbinaryblock.h:19
// member functions: 47
// member variables: 2
// class size: 24
class CUtlBinaryBlock {
	/* ../../public/tier0/utlbinaryblock.h:22 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , int, int);
	/* ../../public/tier0/utlbinaryblock.h:25 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , void* , int, int);
	/* ../../public/tier0/utlbinaryblock.h:26 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , const void* , int);
	/* ../../public/tier0/utlbinaryblock.h:27 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , const CUtlBinaryBlock& );
	/* ../../public/tier0/utlbinaryblock.h:33 */
	void CUtlBinaryBlock(CUtlBinaryBlock* , CUtlBinaryBlock& );
	/* ../../public/tier0/utlbinaryblock.h:42 */
	void Get(const CUtlBinaryBlock* , void* , int);
	/* ../../public/tier0/utlbinaryblock.h:43 */
	void Set(CUtlBinaryBlock* , const void* , int);
	/* ../../public/tier0/utlbinaryblock.h:44 */
	const void* Get(const CUtlBinaryBlock* );
	/* ../../public/tier0/utlbinaryblock.h:45 */
	void* Get(CUtlBinaryBlock* );
	/* ../../public/tier0/utlbinaryblock.h:47 */
	unsigned char& operator[](CUtlBinaryBlock* , int);
	/* ../../public/tier0/utlbinaryblock.h:48 */
	const unsigned char& operator[](const CUtlBinaryBlock* , int);
	/* ../../public/tier0/utlbinaryblock.h:50 */
	int Length(const CUtlBinaryBlock* );
	/* ../../public/tier0/utlbinaryblock.h:51 */
	void SetLength(CUtlBinaryBlock* , int);
	/* ../../public/tier0/utlbinaryblock.h:52 */
	bool IsEmpty(const CUtlBinaryBlock* );
	/* ../../public/tier0/utlbinaryblock.h:53 */
	void Clear(CUtlBinaryBlock* );
	/* ../../public/tier0/utlbinaryblock.h:54 */
	void Purge(CUtlBinaryBlock* );
	/* ../../public/tier0/utlbinaryblock.h:56 */
	bool IsReadOnly(const CUtlBinaryBlock* );
	/* ../../public/tier0/utlbinaryblock.h:57 */
	bool IsExternalMemory(const CUtlBinaryBlock* );
	/* ../../public/tier0/utlbinaryblock.h:60 */
	void AimAtExternalMemory(CUtlBinaryBlock* , void* , uint);
	/* ../../public/tier0/utlbinaryblock.h:63 */
	void AssumeExternalMemory(CUtlBinaryBlock* , void* , uint);
	/* ../../public/tier0/utlbinaryblock.h:65 */
	CUtlBinaryBlock& operator=(CUtlBinaryBlock* , const CUtlBinaryBlock& );
	/* ../../public/tier0/utlbinaryblock.h:66 */
	CUtlBinaryBlock& operator=(CUtlBinaryBlock* , CUtlBinaryBlock& );
	/* ../../public/tier0/utlbinaryblock.h:69 */
	bool operator==(const CUtlBinaryBlock* , const CUtlBinaryBlock& );
private:
	CUtlMemory<unsigned char, int> m_Memory; /* 0 16 */
	int m_nActualLength; /* 16 4 */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, int, int); /* linkage=_ZN15CUtlBinaryBlockC4Eii */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, void *, int, int); /* linkage=_ZN15CUtlBinaryBlockC4EPvii */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, const void  *, int); /* linkage=_ZN15CUtlBinaryBlockC4EPKvi */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, const class CUtlBinaryBlock  &); /* linkage=_ZN15CUtlBinaryBlockC4ERKS_ */
	void CUtlBinaryBlock(class CUtlBinaryBlock *, class CUtlBinaryBlock &); /* linkage=_ZN15CUtlBinaryBlockC4EOS_ */
	void Get(const class CUtlBinaryBlock  *, void *, int); /* linkage=_ZNK15CUtlBinaryBlock3GetEPvi */
	void Set(class CUtlBinaryBlock *, const void  *, int); /* linkage=_ZN15CUtlBinaryBlock3SetEPKvi */
	const void  * Get(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock3GetEv */
	void * Get(class CUtlBinaryBlock *); /* linkage=_ZN15CUtlBinaryBlock3GetEv */
	unsigned char & operator[](class CUtlBinaryBlock *, int); /* linkage=_ZN15CUtlBinaryBlockixEi */
	const unsigned char  & operator[](const class CUtlBinaryBlock  *, int); /* linkage=_ZNK15CUtlBinaryBlockixEi */
	int Length(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock6LengthEv */
	void SetLength(class CUtlBinaryBlock *, int); /* linkage=_ZN15CUtlBinaryBlock9SetLengthEi */
	bool IsEmpty(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock7IsEmptyEv */
	void Clear(class CUtlBinaryBlock *); /* linkage=_ZN15CUtlBinaryBlock5ClearEv */
	void Purge(class CUtlBinaryBlock *); /* linkage=_ZN15CUtlBinaryBlock5PurgeEv */
	bool IsReadOnly(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock10IsReadOnlyEv */
	bool IsExternalMemory(const class CUtlBinaryBlock  *); /* linkage=_ZNK15CUtlBinaryBlock16IsExternalMemoryEv */
	void AimAtExternalMemory(class CUtlBinaryBlock *, void *, uint); /* linkage=_ZN15CUtlBinaryBlock19AimAtExternalMemoryEPvj */
	void AssumeExternalMemory(class CUtlBinaryBlock *, void *, uint); /* linkage=_ZN15CUtlBinaryBlock20AssumeExternalMemoryEPvj */
	class CUtlBinaryBlock & operator=(class CUtlBinaryBlock *, const class CUtlBinaryBlock  &); /* linkage=_ZN15CUtlBinaryBlockaSERKS_ */
	class CUtlBinaryBlock & operator=(class CUtlBinaryBlock *, class CUtlBinaryBlock &); /* linkage=_ZN15CUtlBinaryBlockaSEOS_ */
	bool operator==(const class CUtlBinaryBlock  *, const class CUtlBinaryBlock  &); /* linkage=_ZNK15CUtlBinaryBlockeqERKS_ */
	void ~CUtlBinaryBlock(class CUtlBinaryBlock *); /* linkage=_ZN15CUtlBinaryBlockD4Ev */
};

// <05D54426> ../public/tier0/utlbinaryblock.h:80
void CUtlBinaryBlock::CUtlBinaryBlock(int growSize, int initSize)
{
} /* size: 0 */

// <05D543F2> ../public/tier0/utlbinaryblock.h:80
inline void CUtlBinaryBlock::CUtlBinaryBlock(int growSize, int initSize)
{
} /* size: 0 */

// <05D543D2> ../public/tier0/utlbinaryblock.h:100
inline const void* CUtlBinaryBlock::Get()
{
} /* size: 0 */

// <025DE74F> ../public/tier0/utlbinaryblock.h:105
inline void* CUtlBinaryBlock::Get()
{
} /* size: 0 */

// <041C168D> ../public/tier0/utlbinaryblock.h:110
inline void CUtlBinaryBlock::Length()
{
} /* size: 0 */

// <0557CE47> ../public/tier0/utlbinaryblock.h:125
inline void CUtlBinaryBlock::IsReadOnly()
{
} /* size: 0 */

// <0557CE2B> ../public/tier0/utlbinaryblock.h:130
inline void CUtlBinaryBlock::IsExternalMemory()
{
} /* size: 0 */

// <05D5439A> ../public/tier0/utlbinaryblock.h:140
inline void CUtlBinaryBlock::Clear()
{
} /* size: 0 */

// <05D54366> ../public/tier0/utlbinaryblock.h:151
inline void CUtlBinaryBlock::AimAtExternalMemory(void* pExternalMemory, uint nExternalMemorySize)
{
} /* size: 0 */

// <0557CDF7> ../public/tier0/utlbinaryblock.h:156
inline void CUtlBinaryBlock::AssumeExternalMemory(void* pExternalMemory, uint nExternalMemorySize)
{
} /* size: 0 */

