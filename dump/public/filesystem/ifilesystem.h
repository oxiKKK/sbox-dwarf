
//
// public/filesystem/ifilesystem.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 54
//	classes: 15
//	structs: 4
//

// <00103A54> ../public/filesystem/ifilesystem.h:206
void FileSystemStatistics::FileSystemStatistics()
{
} /* size: 0 */

// <00103A38> ../public/filesystem/ifilesystem.h:206
inline void FileSystemStatistics::FileSystemStatistics()
{
} /* size: 0 */

// <000957D5> ../public/filesystem/ifilesystem.h:206
// member variables: 5
// struct size: 20
struct FileSystemStatistics {
	CInterlockedUInt nReads __attribute__((__aligned__(4))); /* 0 4 */
	CInterlockedUInt nWrites __attribute__((__aligned__(4))); /* 4 4 */
	CInterlockedUInt nBytesRead __attribute__((__aligned__(4))); /* 8 4 */
	CInterlockedUInt nBytesWritten __attribute__((__aligned__(4))); /* 12 4 */
	CInterlockedUInt nSeeks __attribute__((__aligned__(4))); /* 16 4 */
} __attribute__((__aligned__(4)));

// <001258C3> ../public/filesystem/ifilesystem.h:218
// member functions: 20
// member variables: 5
// vtable entries: 2
// class size: 32
class IMemoryMappedFile {
	void IMemoryMappedFile(IMemoryMappedFile* , const IMemoryMappedFile& );
	int ()(void) * * _vptr.IMemoryMappedFile; /* 0 8 */
	/* ../public/filesystem/ifilesystem.h:221 */
	void IMemoryMappedFile(IMemoryMappedFile* );
	/* ../public/filesystem/ifilesystem.h:229 */
	virtual void ~IMemoryMappedFile(IMemoryMappedFile* );
	/* ../public/filesystem/ifilesystem.h:231 */
	uint32 AddRef(IMemoryMappedFile* );
	/* ../public/filesystem/ifilesystem.h:236 */
	uint32 Release(IMemoryMappedFile* );
	/* ../public/filesystem/ifilesystem.h:248 */
	const void* GetMappedMemory(const IMemoryMappedFile* );
	/* ../public/filesystem/ifilesystem.h:249 */
	size_t GetMappedSize(const IMemoryMappedFile* );
	/* ../public/filesystem/ifilesystem.h:250 */
	MemoryMappedFileFlags_t GetFlags(const IMemoryMappedFile* );
	/* ../public/filesystem/ifilesystem.h:252 */
	virtual bool WriteToContents(IMemoryMappedFile* , size_t, const void* , size_t);
protected:
	/* ../public/filesystem/ifilesystem.h:255 */
	virtual void ReachedZeroReferences(IMemoryMappedFile* );
	void * m_pMappedMemory; /* 8 8 */
	size_t m_nMappedSize; /* 16 8 */
	MemoryMappedFileFlags_t m_nFlags; /* 24 4 */
	CInterlockedUInt m_nRefCount __attribute__((__aligned__(4))); /* 28 4 */
	void IMemoryMappedFile(class IMemoryMappedFile *, const class IMemoryMappedFile  &); /* linkage=_ZN17IMemoryMappedFileC4ERKS_ */
	void IMemoryMappedFile(class IMemoryMappedFile *); /* linkage=_ZN17IMemoryMappedFileC4Ev */
	virtual void ~IMemoryMappedFile(class IMemoryMappedFile *); /* linkage=_ZN17IMemoryMappedFileD4Ev */
	uint32 AddRef(class IMemoryMappedFile *); /* linkage=_ZN17IMemoryMappedFile6AddRefEv */
	uint32 Release(class IMemoryMappedFile *); /* linkage=_ZN17IMemoryMappedFile7ReleaseEv */
	const void  * GetMappedMemory(const class IMemoryMappedFile  *); /* linkage=_ZNK17IMemoryMappedFile15GetMappedMemoryEv */
	size_t GetMappedSize(const class IMemoryMappedFile  *); /* linkage=_ZNK17IMemoryMappedFile13GetMappedSizeEv */
	enum MemoryMappedFileFlags_t GetFlags(const class IMemoryMappedFile  *); /* linkage=_ZNK17IMemoryMappedFile8GetFlagsEv */
	virtual bool WriteToContents(class IMemoryMappedFile *, size_t, const void  *, size_t); /* linkage=_ZN17IMemoryMappedFile15WriteToContentsEmPKvm */
	virtual void ReachedZeroReferences(class IMemoryMappedFile *); /* linkage=_ZN17IMemoryMappedFile21ReachedZeroReferencesEv */
} __attribute__((__aligned__(8)));

// <06DAC159> ../../public/filesystem/ifilesystem.h:218
// member functions: 20
// member variables: 5
// vtable entries: 2
// class size: 32
class IMemoryMappedFile {
	void IMemoryMappedFile(IMemoryMappedFile* , const IMemoryMappedFile& );
	int ()(void) * * _vptr.IMemoryMappedFile; /* 0 8 */
	/* ../../public/filesystem/ifilesystem.h:221 */
	void IMemoryMappedFile(IMemoryMappedFile* );
	/* ../../public/filesystem/ifilesystem.h:229 */
	virtual void ~IMemoryMappedFile(IMemoryMappedFile* );
	/* ../../public/filesystem/ifilesystem.h:231 */
	uint32 AddRef(IMemoryMappedFile* );
	/* ../../public/filesystem/ifilesystem.h:236 */
	uint32 Release(IMemoryMappedFile* );
	/* ../../public/filesystem/ifilesystem.h:248 */
	const void* GetMappedMemory(const IMemoryMappedFile* );
	/* ../../public/filesystem/ifilesystem.h:249 */
	size_t GetMappedSize(const IMemoryMappedFile* );
	/* ../../public/filesystem/ifilesystem.h:250 */
	MemoryMappedFileFlags_t GetFlags(const IMemoryMappedFile* );
	/* ../../public/filesystem/ifilesystem.h:252 */
	virtual bool WriteToContents(IMemoryMappedFile* , size_t, const void* , size_t);
protected:
	/* ../../public/filesystem/ifilesystem.h:255 */
	virtual void ReachedZeroReferences(IMemoryMappedFile* );
	void * m_pMappedMemory; /* 8 8 */
	size_t m_nMappedSize; /* 16 8 */
	MemoryMappedFileFlags_t m_nFlags; /* 24 4 */
	CInterlockedUInt m_nRefCount __attribute__((__aligned__(4))); /* 28 4 */
	void IMemoryMappedFile(class IMemoryMappedFile *, const class IMemoryMappedFile  &); /* linkage=_ZN17IMemoryMappedFileC4ERKS_ */
	void IMemoryMappedFile(class IMemoryMappedFile *); /* linkage=_ZN17IMemoryMappedFileC4Ev */
	virtual void ~IMemoryMappedFile(class IMemoryMappedFile *); /* linkage=_ZN17IMemoryMappedFileD4Ev */
	uint32 AddRef(class IMemoryMappedFile *); /* linkage=_ZN17IMemoryMappedFile6AddRefEv */
	uint32 Release(class IMemoryMappedFile *); /* linkage=_ZN17IMemoryMappedFile7ReleaseEv */
	const void  * GetMappedMemory(const class IMemoryMappedFile  *); /* linkage=_ZNK17IMemoryMappedFile15GetMappedMemoryEv */
	size_t GetMappedSize(const class IMemoryMappedFile  *); /* linkage=_ZNK17IMemoryMappedFile13GetMappedSizeEv */
	enum MemoryMappedFileFlags_t GetFlags(const class IMemoryMappedFile  *); /* linkage=_ZNK17IMemoryMappedFile8GetFlagsEv */
	virtual bool WriteToContents(class IMemoryMappedFile *, size_t, const void  *, size_t); /* linkage=_ZN17IMemoryMappedFile15WriteToContentsEmPKvm */
	virtual void ReachedZeroReferences(class IMemoryMappedFile *); /* linkage=_ZN17IMemoryMappedFile21ReachedZeroReferencesEv */
} __attribute__((__aligned__(8)));

// <0023A0DA> ../public/filesystem/ifilesystem.h:221
void IMemoryMappedFile::IMemoryMappedFile()
{
} /* size: 0 */

// <0023A0C1> ../public/filesystem/ifilesystem.h:221
inline void IMemoryMappedFile::IMemoryMappedFile()
{
} /* size: 0 */

// <024E7390> ../public/filesystem/ifilesystem.h:229
void IMemoryMappedFile::~IMemoryMappedFile()
{
} /* size: 0 */

// <024E7360> ../public/filesystem/ifilesystem.h:229
inline void IMemoryMappedFile::~IMemoryMappedFile()
{
} /* size: 0 */

// <0023A061> ../public/filesystem/ifilesystem.h:231
inline void IMemoryMappedFile::AddRef()
{
} /* size: 0 */

// <024E7312> ../public/filesystem/ifilesystem.h:236
// variables: 3
inline void IMemoryMappedFile::Release()
{
	const char   __FUNCTION__; // 16951
	uint32 nRefsRemaining; // 239
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
	}
} /* size: 0, variables: 2 */

// <00345143> ../public/filesystem/ifilesystem.h:236
// variables: 3
inline void IMemoryMappedFile::Release()
{
	const char   __FUNCTION__; // 55597
	uint32 nRefsRemaining; // 239
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
	}
} /* size: 0, variables: 2 */

// <003281DC> ../public/filesystem/ifilesystem.h:236
// variables: 3
inline void IMemoryMappedFile::Release()
{
	const char   __FUNCTION__; // 38131
	uint32 nRefsRemaining; // 239
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
	}
} /* size: 0, variables: 2 */

// <0023A013> ../public/filesystem/ifilesystem.h:236
// variables: 3
inline void IMemoryMappedFile::Release()
{
	const char   __FUNCTION__; // 25309
	uint32 nRefsRemaining; // 239
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
	}
} /* size: 0, variables: 2 */

// <00063422> ../public/filesystem/ifilesystem.h:236
// variables: 3
inline void IMemoryMappedFile::Release()
{
	const char   __FUNCTION__; // 19572
	uint32 nRefsRemaining; // 239
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
	}
} /* size: 0, variables: 2 */

// <024E72F4> ../public/filesystem/ifilesystem.h:248
inline const void* IMemoryMappedFile::GetMappedMemory()
{
} /* size: 0 */

// <00239FDC> ../public/filesystem/ifilesystem.h:249
inline void IMemoryMappedFile::GetMappedSize()
{
} /* size: 0 */

// <00239FC3> ../public/filesystem/ifilesystem.h:250
inline void IMemoryMappedFile::GetFlags()
{
} /* size: 0 */

// <024D9DA4> ../public/filesystem/ifilesystem.h:264
// member functions: 13
// member variables: 2
// vtable entries: 2
// class size: 40
class CMemoryMappedFileSection : public IMemoryMappedFile {
public:
	/* class IMemoryMappedFile <ancestor>; */ /* 0 32 */
	/* ../public/filesystem/ifilesystem.h:267 */
	void CMemoryMappedFileSection(CMemoryMappedFileSection* );
	/* ../public/filesystem/ifilesystem.h:271 */
	virtual void ~CMemoryMappedFileSection(CMemoryMappedFileSection* );
	/* ../public/filesystem/ifilesystem.h:276 */
	bool MapSubsection(CMemoryMappedFileSection* , IMemoryMappedFile* , size_t, size_t);
	/* ../public/filesystem/ifilesystem.h:291 */
	void Unmap(CMemoryMappedFileSection* );
	/* ../public/filesystem/ifilesystem.h:303 */
	virtual bool WriteToContents(CMemoryMappedFileSection* , size_t, const void* , size_t);
	/* ../public/filesystem/ifilesystem.h:312 */
	virtual void ReachedZeroReferences(CMemoryMappedFileSection* );
private:
	IMemoryMappedFile * m_pParentFile; /* 32 8 */
	void CMemoryMappedFileSection(class CMemoryMappedFileSection *); /* linkage=_ZN24CMemoryMappedFileSectionC4Ev */
	virtual void ~CMemoryMappedFileSection(class CMemoryMappedFileSection *); /* linkage=_ZN24CMemoryMappedFileSectionD4Ev */
	bool MapSubsection(class CMemoryMappedFileSection *, class IMemoryMappedFile *, size_t, size_t); /* linkage=_ZN24CMemoryMappedFileSection13MapSubsectionEP17IMemoryMappedFilemm */
	void Unmap(class CMemoryMappedFileSection *); /* linkage=_ZN24CMemoryMappedFileSection5UnmapEv */
	/* <241dc2> ../public/filesystem/ifilesystem.h:303 */
	virtual bool WriteToContents(class CMemoryMappedFileSection *, size_t, const void  *, size_t); /* linkage=_ZN24CMemoryMappedFileSection15WriteToContentsEmPKvm */
	virtual void ReachedZeroReferences(class CMemoryMappedFileSection *); /* linkage=_ZN24CMemoryMappedFileSection21ReachedZeroReferencesEv */
	void CMemoryMappedFileSection(class CMemoryMappedFileSection *, const class CMemoryMappedFileSection  &); /* linkage=_ZN24CMemoryMappedFileSectionC4ERKS_ */
} __attribute__((__aligned__(8)));

// <0020CC5A> ../public/filesystem/ifilesystem.h:264
// member functions: 14
// member variables: 2
// vtable entries: 2
// class size: 40
class CMemoryMappedFileSection : public IMemoryMappedFile {
public:
	/* class IMemoryMappedFile <ancestor>; */ /* 0 32 */
	void CMemoryMappedFileSection(CMemoryMappedFileSection* , const CMemoryMappedFileSection& );
	/* ../public/filesystem/ifilesystem.h:267 */
	void CMemoryMappedFileSection(CMemoryMappedFileSection* );
	/* ../public/filesystem/ifilesystem.h:271 */
	virtual void ~CMemoryMappedFileSection(CMemoryMappedFileSection* );
	/* ../public/filesystem/ifilesystem.h:276 */
	bool MapSubsection(CMemoryMappedFileSection* , IMemoryMappedFile* , size_t, size_t);
	/* ../public/filesystem/ifilesystem.h:291 */
	void Unmap(CMemoryMappedFileSection* );
	/* ../public/filesystem/ifilesystem.h:303 */
	virtual bool WriteToContents(CMemoryMappedFileSection* , size_t, const void* , size_t);
	/* ../public/filesystem/ifilesystem.h:312 */
	virtual void ReachedZeroReferences(CMemoryMappedFileSection* );
private:
	IMemoryMappedFile * m_pParentFile; /* 32 8 */
	void CMemoryMappedFileSection(class CMemoryMappedFileSection *); /* linkage=_ZN24CMemoryMappedFileSectionC4Ev */
	virtual void ~CMemoryMappedFileSection(class CMemoryMappedFileSection *); /* linkage=_ZN24CMemoryMappedFileSectionD4Ev */
	bool MapSubsection(class CMemoryMappedFileSection *, class IMemoryMappedFile *, size_t, size_t); /* linkage=_ZN24CMemoryMappedFileSection13MapSubsectionEP17IMemoryMappedFilemm */
	void Unmap(class CMemoryMappedFileSection *); /* linkage=_ZN24CMemoryMappedFileSection5UnmapEv */
	/* <241dc2> ../public/filesystem/ifilesystem.h:303 */
	virtual bool WriteToContents(class CMemoryMappedFileSection *, size_t, const void  *, size_t); /* linkage=_ZN24CMemoryMappedFileSection15WriteToContentsEmPKvm */
	virtual void ReachedZeroReferences(class CMemoryMappedFileSection *); /* linkage=_ZN24CMemoryMappedFileSection21ReachedZeroReferencesEv */
	void CMemoryMappedFileSection(class CMemoryMappedFileSection *, const class CMemoryMappedFileSection  &); /* linkage=_ZN24CMemoryMappedFileSectionC4ERKS_ */
} __attribute__((__aligned__(8)));

// <00239FAC> ../public/filesystem/ifilesystem.h:267
void CMemoryMappedFileSection::CMemoryMappedFileSection()
{
} /* size: 0 */

// <00239F93> ../public/filesystem/ifilesystem.h:267
inline void CMemoryMappedFileSection::CMemoryMappedFileSection()
{
} /* size: 0 */

// <024E72DD> ../public/filesystem/ifilesystem.h:271
void CMemoryMappedFileSection::~CMemoryMappedFileSection()
{
} /* size: 0 */

// <024E72AD> ../public/filesystem/ifilesystem.h:271
inline void CMemoryMappedFileSection::~CMemoryMappedFileSection()
{
} /* size: 0 */

// <00239E25> ../public/filesystem/ifilesystem.h:271
// function calls: 6
void CMemoryMappedFileSection::~CMemoryMappedFileSection()
{
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 238
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 239
	IMemoryMappedFile::Release(); // 236
	IMemoryMappedFile::Release(); // 295
	CMemoryMappedFileSection::Unmap(); // 273
} /* size: 96, inline expansions: 6 (140 bytes) */

// <00239C01> ../public/filesystem/ifilesystem.h:271
// function calls: 8
void CMemoryMappedFileSection::~CMemoryMappedFileSection()
{
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 238
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 239
	IMemoryMappedFile::Release(); // 236
	IMemoryMappedFile::Release(); // 295
	CMemoryMappedFileSection::Unmap(); // 273
	IMemoryMappedFile::~IMemoryMappedFile(); // 274
	CMemoryMappedFileSection::~CMemoryMappedFileSection(); // 274
} /* size: 146, inline expansions: 8 (244 bytes) */

// <00239BA8> ../public/filesystem/ifilesystem.h:276
inline void CMemoryMappedFileSection::MapSubsection(IMemoryMappedFile* pParentFile, size_t nOffset, size_t nSize)
{
} /* size: 0 */

// <024E7295> ../public/filesystem/ifilesystem.h:291
void CMemoryMappedFileSection::Unmap()
{
} /* size: 0 */

// <00239B8F> ../public/filesystem/ifilesystem.h:291
inline void CMemoryMappedFileSection::Unmap()
{
} /* size: 0 */

// <024E7256> ../public/filesystem/ifilesystem.h:303
void CMemoryMappedFileSection::WriteToContents(size_t nOffset, const void* pSource, size_t nWriteCount)
{
} /* size: 0 */

// <00241DC2> ../public/filesystem/ifilesystem.h:303
// function calls: 3
void CMemoryMappedFileSection::WriteToContents(size_t nOffset, const void* pSource, size_t nWriteCount)
{
	IMemoryMappedFile::GetMappedMemory(); // 307
	IMemoryMappedFile::GetMappedMemory(); // 307
	CMemoryMappedFileSection::WriteToContents(
			size_t nOffset,
			const void* pSource,
			size_t nWriteCount);  // 307
} /* size: 140, inline expansions: 3 (50 bytes) */

// <00239B4F> ../public/filesystem/ifilesystem.h:303
inline void CMemoryMappedFileSection::WriteToContents(size_t nOffset, const void* pSource, size_t nWriteCount)
{
} /* size: 0 */

// <024E723E> ../public/filesystem/ifilesystem.h:312
void CMemoryMappedFileSection::ReachedZeroReferences()
{
} /* size: 0 */

// <002399D3> ../public/filesystem/ifilesystem.h:312
// function calls: 6
void CMemoryMappedFileSection::ReachedZeroReferences()
{
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 238
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 239
	IMemoryMappedFile::Release(); // 236
	IMemoryMappedFile::Release(); // 295
	CMemoryMappedFileSection::Unmap(); // 312
} /* size: 142, inline expansions: 6 (229 bytes) */

// <024E7227> ../public/filesystem/ifilesystem.h:318
void CMemoryMappedFileSection_SelfDelete::~CMemoryMappedFileSection_SelfDelete()
{
} /* size: 0 */

// <024E71F2> ../public/filesystem/ifilesystem.h:318
inline void CMemoryMappedFileSection_SelfDelete::~CMemoryMappedFileSection_SelfDelete()
{
} /* size: 0 */

// <00239840> ../public/filesystem/ifilesystem.h:318
// function calls: 7
void CMemoryMappedFileSection_SelfDelete::~CMemoryMappedFileSection_SelfDelete()
{
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 238
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 239
	IMemoryMappedFile::Release(); // 236
	IMemoryMappedFile::Release(); // 295
	CMemoryMappedFileSection::Unmap(); // 273
	CMemoryMappedFileSection::~CMemoryMappedFileSection(); // 318
} /* size: 96, inline expansions: 7 (212 bytes) */

// <002395FE> ../public/filesystem/ifilesystem.h:318
// function calls: 9
void CMemoryMappedFileSection_SelfDelete::~CMemoryMappedFileSection_SelfDelete()
{
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 238
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 239
	IMemoryMappedFile::Release(); // 236
	IMemoryMappedFile::Release(); // 295
	CMemoryMappedFileSection::Unmap(); // 273
	IMemoryMappedFile::~IMemoryMappedFile(); // 274
	CMemoryMappedFileSection::~CMemoryMappedFileSection(); // 318
	CMemoryMappedFileSection_SelfDelete::~CMemoryMappedFileSection_SelfDelete(); // 318
} /* size: 146, inline expansions: 9 (325 bytes) */

// <00229DDB> ../public/filesystem/ifilesystem.h:318
void CMemoryMappedFileSection_SelfDelete::CMemoryMappedFileSection_SelfDelete()
{
} /* size: 0 */

// <00229DBE> ../public/filesystem/ifilesystem.h:318
inline void CMemoryMappedFileSection_SelfDelete::CMemoryMappedFileSection_SelfDelete()
{
} /* size: 0 */

// <024D9D43> ../public/filesystem/ifilesystem.h:318
// member functions: 7
// member variable: 1
// vtable entry: 1
// class size: 40
class CMemoryMappedFileSection_SelfDelete : public CMemoryMappedFileSection {
public:
	/* class CMemoryMappedFileSection <ancestor>; */ /* 0 40 */
	/* ../public/filesystem/ifilesystem.h:321 */
	virtual void ReachedZeroReferences(CMemoryMappedFileSection_SelfDelete* );
	virtual void ~CMemoryMappedFileSection_SelfDelete(CMemoryMappedFileSection_SelfDelete* );
	virtual void ReachedZeroReferences(class CMemoryMappedFileSection_SelfDelete *); /* linkage=_ZN35CMemoryMappedFileSection_SelfDelete21ReachedZeroReferencesEv */
	virtual void ~CMemoryMappedFileSection_SelfDelete(class CMemoryMappedFileSection_SelfDelete *); /* linkage=_ZN35CMemoryMappedFileSection_SelfDeleteD4Ev */
	void CMemoryMappedFileSection_SelfDelete(class CMemoryMappedFileSection_SelfDelete *, class CMemoryMappedFileSection_SelfDelete &); /* linkage=_ZN35CMemoryMappedFileSection_SelfDeleteC4EOS_ */
	void CMemoryMappedFileSection_SelfDelete(class CMemoryMappedFileSection_SelfDelete *, const class CMemoryMappedFileSection_SelfDelete  &); /* linkage=_ZN35CMemoryMappedFileSection_SelfDeleteC4ERKS_ */
	void CMemoryMappedFileSection_SelfDelete(class CMemoryMappedFileSection_SelfDelete *); /* linkage=_ZN35CMemoryMappedFileSection_SelfDeleteC4Ev */
} __attribute__((__aligned__(8)));

// <024E71DA> ../public/filesystem/ifilesystem.h:321
void CMemoryMappedFileSection_SelfDelete::ReachedZeroReferences()
{
} /* size: 0 */

// <0023945A> ../public/filesystem/ifilesystem.h:321
// function calls: 6
void CMemoryMappedFileSection_SelfDelete::ReachedZeroReferences()
{
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 238
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 239
	IMemoryMappedFile::Release(); // 236
	IMemoryMappedFile::Release(); // 295
	CMemoryMappedFileSection::Unmap(); // 321
} /* size: 134, inline expansions: 6 (205 bytes) */

// <00095866> ../public/filesystem/ifilesystem.h:375
// member variable: 1
// struct size: 4
struct SearchPathStateHandle_t__ {
	int unused; /* 0 4 */
};

// <000CE221> ../public/filesystem/ifilesystem.h:403
void IBaseFileSystem::IBaseFileSystem()
{
} /* size: 0 */

// <000CE204> ../public/filesystem/ifilesystem.h:403
inline void IBaseFileSystem::IBaseFileSystem()
{
} /* size: 0 */

// <00077570> ../public/filesystem/ifilesystem.h:403
// member functions: 50
// member variable: 1
// vtable entries: 20
// class size: 8
class IBaseFileSystem {
	void ~IBaseFileSystem(IBaseFileSystem* );
	void IBaseFileSystem(IBaseFileSystem* , IBaseFileSystem& );
	void IBaseFileSystem(IBaseFileSystem* , const IBaseFileSystem& );
	void IBaseFileSystem(IBaseFileSystem* );
	int ()(void) * * _vptr.IBaseFileSystem; /* 0 8 */
	/* ../public/filesystem/ifilesystem.h:406 */
	virtual int Read(IBaseFileSystem* , void* , int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:407 */
	virtual int Write(IBaseFileSystem* , const void* , int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:410 */
	virtual FileHandle_t Open(IBaseFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:411 */
	virtual void Close(IBaseFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:414 */
	virtual void Seek(IBaseFileSystem* , FileHandle_t, int64, FileSystemSeek_t);
	/* ../public/filesystem/ifilesystem.h:415 */
	virtual int64 Tell(IBaseFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:416 */
	virtual int64 Size(IBaseFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:417 */
	virtual int64 Size(IBaseFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:419 */
	virtual void Flush(IBaseFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:420 */
	virtual bool Precache(IBaseFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:422 */
	virtual bool FileExists(IBaseFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:423 */
	virtual bool IsFileWritable(IBaseFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:424 */
	virtual bool SetFileWritable(IBaseFileSystem* , const char* , bool, const char* );
	/* ../public/filesystem/ifilesystem.h:426 */
	virtual int64 GetFileTime(IBaseFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:431 */
	virtual bool ReadFile(IBaseFileSystem* , const char* , const char* , CUtlBuffer& , int, int, FSAllocFunc_t);
	/* ../public/filesystem/ifilesystem.h:432 */
	virtual bool WriteFile(IBaseFileSystem* , const char* , const char* , const CUtlBuffer& );
	/* ../public/filesystem/ifilesystem.h:433 */
	virtual bool UnzipFile(IBaseFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:435 */
	virtual bool CopyAFile(IBaseFileSystem* , const char* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:443 */
	virtual IMemoryMappedFile* CreateMemoryMap(IBaseFileSystem* , FileHandle_t, MemoryMappedFileFlags_t);
	/* ../public/filesystem/ifilesystem.h:444 */
	virtual IMemoryMappedFile* CreateMemoryMap(IBaseFileSystem* , const char* , const char* , MemoryMappedFileFlags_t);
	void ~IBaseFileSystem(class IBaseFileSystem *); /* linkage=_ZN15IBaseFileSystemD4Ev */
	void IBaseFileSystem(class IBaseFileSystem *, class IBaseFileSystem &); /* linkage=_ZN15IBaseFileSystemC4EOS_ */
	void IBaseFileSystem(class IBaseFileSystem *, const class IBaseFileSystem  &); /* linkage=_ZN15IBaseFileSystemC4ERKS_ */
	void IBaseFileSystem(class IBaseFileSystem *); /* linkage=_ZN15IBaseFileSystemC4Ev */
	virtual int Read(class IBaseFileSystem *, void *, int, FileHandle_t); /* linkage=_ZN15IBaseFileSystem4ReadEPviS0_ */
	virtual int Write(class IBaseFileSystem *, const void  *, int, FileHandle_t); /* linkage=_ZN15IBaseFileSystem5WriteEPKviPv */
	virtual FileHandle_t Open(class IBaseFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem4OpenEPKcS1_S1_ */
	virtual void Close(class IBaseFileSystem *, FileHandle_t); /* linkage=_ZN15IBaseFileSystem5CloseEPv */
	virtual void Seek(class IBaseFileSystem *, FileHandle_t, int64, enum FileSystemSeek_t); /* linkage=_ZN15IBaseFileSystem4SeekEPvx16FileSystemSeek_t */
	virtual int64 Tell(class IBaseFileSystem *, FileHandle_t); /* linkage=_ZN15IBaseFileSystem4TellEPv */
	virtual int64 Size(class IBaseFileSystem *, FileHandle_t); /* linkage=_ZN15IBaseFileSystem4SizeEPv */
	virtual int64 Size(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem4SizeEPKcS1_ */
	virtual void Flush(class IBaseFileSystem *, FileHandle_t); /* linkage=_ZN15IBaseFileSystem5FlushEPv */
	virtual bool Precache(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem8PrecacheEPKcS1_ */
	virtual bool FileExists(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem10FileExistsEPKcS1_ */
	virtual bool IsFileWritable(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem14IsFileWritableEPKcS1_ */
	virtual bool SetFileWritable(class IBaseFileSystem *, const char  *, bool, const char  *); /* linkage=_ZN15IBaseFileSystem15SetFileWritableEPKcbS1_ */
	virtual int64 GetFileTime(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem11GetFileTimeEPKcS1_ */
	virtual bool ReadFile(class IBaseFileSystem *, const char  *, const char  *, class CUtlBuffer &, int, int, FSAllocFunc_t); /* linkage=_ZN15IBaseFileSystem8ReadFileEPKcS1_R10CUtlBufferiiPFPvS1_jE */
	virtual bool WriteFile(class IBaseFileSystem *, const char  *, const char  *, const class CUtlBuffer  &); /* linkage=_ZN15IBaseFileSystem9WriteFileEPKcS1_RK10CUtlBuffer */
	virtual bool UnzipFile(class IBaseFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem9UnzipFileEPKcS1_S1_ */
	virtual bool CopyAFile(class IBaseFileSystem *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN15IBaseFileSystem9CopyAFileEPKcS1_S1_b */
	virtual class IMemoryMappedFile * CreateMemoryMap(class IBaseFileSystem *, FileHandle_t, enum MemoryMappedFileFlags_t); /* linkage=_ZN15IBaseFileSystem15CreateMemoryMapEPv23MemoryMappedFileFlags_t */
	virtual class IMemoryMappedFile * CreateMemoryMap(class IBaseFileSystem *, const char  *, const char  *, enum MemoryMappedFileFlags_t); /* linkage=_ZN15IBaseFileSystem15CreateMemoryMapEPKcS1_23MemoryMappedFileFlags_t */
	class IBaseFileSystem & operator=(class IBaseFileSystem *, class IBaseFileSystem &); /* linkage=_ZN15IBaseFileSystemaSEOS_ */
	class IBaseFileSystem & operator=(class IBaseFileSystem *, const class IBaseFileSystem  &); /* linkage=_ZN15IBaseFileSystemaSERKS_ */
};

// <06DA657C> ../../public/filesystem/ifilesystem.h:403
// member functions: 50
// member variable: 1
// vtable entries: 20
// class size: 8
class IBaseFileSystem {
	void ~IBaseFileSystem(IBaseFileSystem* );
	void IBaseFileSystem(IBaseFileSystem* , IBaseFileSystem& );
	void IBaseFileSystem(IBaseFileSystem* , const IBaseFileSystem& );
	void IBaseFileSystem(IBaseFileSystem* );
	int ()(void) * * _vptr.IBaseFileSystem; /* 0 8 */
	/* ../../public/filesystem/ifilesystem.h:406 */
	virtual int Read(IBaseFileSystem* , void* , int, FileHandle_t);
	/* ../../public/filesystem/ifilesystem.h:407 */
	virtual int Write(IBaseFileSystem* , const void* , int, FileHandle_t);
	/* ../../public/filesystem/ifilesystem.h:410 */
	virtual FileHandle_t Open(IBaseFileSystem* , const char* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:411 */
	virtual void Close(IBaseFileSystem* , FileHandle_t);
	/* ../../public/filesystem/ifilesystem.h:414 */
	virtual void Seek(IBaseFileSystem* , FileHandle_t, int64, FileSystemSeek_t);
	/* ../../public/filesystem/ifilesystem.h:415 */
	virtual int64 Tell(IBaseFileSystem* , FileHandle_t);
	/* ../../public/filesystem/ifilesystem.h:416 */
	virtual int64 Size(IBaseFileSystem* , FileHandle_t);
	/* ../../public/filesystem/ifilesystem.h:417 */
	virtual int64 Size(IBaseFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:419 */
	virtual void Flush(IBaseFileSystem* , FileHandle_t);
	/* ../../public/filesystem/ifilesystem.h:420 */
	virtual bool Precache(IBaseFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:422 */
	virtual bool FileExists(IBaseFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:423 */
	virtual bool IsFileWritable(IBaseFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:424 */
	virtual bool SetFileWritable(IBaseFileSystem* , const char* , bool, const char* );
	/* ../../public/filesystem/ifilesystem.h:426 */
	virtual int64 GetFileTime(IBaseFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:431 */
	virtual bool ReadFile(IBaseFileSystem* , const char* , const char* , CUtlBuffer& , int, int, FSAllocFunc_t);
	/* ../../public/filesystem/ifilesystem.h:432 */
	virtual bool WriteFile(IBaseFileSystem* , const char* , const char* , const CUtlBuffer& );
	/* ../../public/filesystem/ifilesystem.h:433 */
	virtual bool UnzipFile(IBaseFileSystem* , const char* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:435 */
	virtual bool CopyAFile(IBaseFileSystem* , const char* , const char* , const char* , bool);
	/* ../../public/filesystem/ifilesystem.h:443 */
	virtual IMemoryMappedFile* CreateMemoryMap(IBaseFileSystem* , FileHandle_t, MemoryMappedFileFlags_t);
	/* ../../public/filesystem/ifilesystem.h:444 */
	virtual IMemoryMappedFile* CreateMemoryMap(IBaseFileSystem* , const char* , const char* , MemoryMappedFileFlags_t);
	void ~IBaseFileSystem(class IBaseFileSystem *); /* linkage=_ZN15IBaseFileSystemD4Ev */
	void IBaseFileSystem(class IBaseFileSystem *, class IBaseFileSystem &); /* linkage=_ZN15IBaseFileSystemC4EOS_ */
	void IBaseFileSystem(class IBaseFileSystem *, const class IBaseFileSystem  &); /* linkage=_ZN15IBaseFileSystemC4ERKS_ */
	void IBaseFileSystem(class IBaseFileSystem *); /* linkage=_ZN15IBaseFileSystemC4Ev */
	virtual int Read(class IBaseFileSystem *, void *, int, FileHandle_t); /* linkage=_ZN15IBaseFileSystem4ReadEPviS0_ */
	virtual int Write(class IBaseFileSystem *, const void  *, int, FileHandle_t); /* linkage=_ZN15IBaseFileSystem5WriteEPKviPv */
	virtual FileHandle_t Open(class IBaseFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem4OpenEPKcS1_S1_ */
	virtual void Close(class IBaseFileSystem *, FileHandle_t); /* linkage=_ZN15IBaseFileSystem5CloseEPv */
	virtual void Seek(class IBaseFileSystem *, FileHandle_t, int64, enum FileSystemSeek_t); /* linkage=_ZN15IBaseFileSystem4SeekEPvx16FileSystemSeek_t */
	virtual int64 Tell(class IBaseFileSystem *, FileHandle_t); /* linkage=_ZN15IBaseFileSystem4TellEPv */
	virtual int64 Size(class IBaseFileSystem *, FileHandle_t); /* linkage=_ZN15IBaseFileSystem4SizeEPv */
	virtual int64 Size(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem4SizeEPKcS1_ */
	virtual void Flush(class IBaseFileSystem *, FileHandle_t); /* linkage=_ZN15IBaseFileSystem5FlushEPv */
	virtual bool Precache(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem8PrecacheEPKcS1_ */
	virtual bool FileExists(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem10FileExistsEPKcS1_ */
	virtual bool IsFileWritable(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem14IsFileWritableEPKcS1_ */
	virtual bool SetFileWritable(class IBaseFileSystem *, const char  *, bool, const char  *); /* linkage=_ZN15IBaseFileSystem15SetFileWritableEPKcbS1_ */
	virtual int64 GetFileTime(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem11GetFileTimeEPKcS1_ */
	virtual bool ReadFile(class IBaseFileSystem *, const char  *, const char  *, class CUtlBuffer &, int, int, FSAllocFunc_t); /* linkage=_ZN15IBaseFileSystem8ReadFileEPKcS1_R10CUtlBufferiiPFPvS1_jE */
	virtual bool WriteFile(class IBaseFileSystem *, const char  *, const char  *, const class CUtlBuffer  &); /* linkage=_ZN15IBaseFileSystem9WriteFileEPKcS1_RK10CUtlBuffer */
	virtual bool UnzipFile(class IBaseFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem9UnzipFileEPKcS1_S1_ */
	virtual bool CopyAFile(class IBaseFileSystem *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN15IBaseFileSystem9CopyAFileEPKcS1_S1_b */
	virtual class IMemoryMappedFile * CreateMemoryMap(class IBaseFileSystem *, FileHandle_t, enum MemoryMappedFileFlags_t); /* linkage=_ZN15IBaseFileSystem15CreateMemoryMapEPv23MemoryMappedFileFlags_t */
	virtual class IMemoryMappedFile * CreateMemoryMap(class IBaseFileSystem *, const char  *, const char  *, enum MemoryMappedFileFlags_t); /* linkage=_ZN15IBaseFileSystem15CreateMemoryMapEPKcS1_23MemoryMappedFileFlags_t */
	class IBaseFileSystem & operator=(class IBaseFileSystem *, class IBaseFileSystem &); /* linkage=_ZN15IBaseFileSystemaSEOS_ */
	class IBaseFileSystem & operator=(class IBaseFileSystem *, const class IBaseFileSystem  &); /* linkage=_ZN15IBaseFileSystemaSERKS_ */
};

// <0001D196> ../public/filesystem/ifilesystem.h:403
// member functions: 52
// member variable: 1
// vtable entries: 20
// class size: 8
class IBaseFileSystem {
	IBaseFileSystem& operator=(IBaseFileSystem* , IBaseFileSystem& );
	IBaseFileSystem& operator=(IBaseFileSystem* , const IBaseFileSystem& );
	void ~IBaseFileSystem(IBaseFileSystem* );
	void IBaseFileSystem(IBaseFileSystem* , IBaseFileSystem& );
	void IBaseFileSystem(IBaseFileSystem* , const IBaseFileSystem& );
	void IBaseFileSystem(IBaseFileSystem* );
	int ()(void) * * _vptr.IBaseFileSystem; /* 0 8 */
	/* ../public/filesystem/ifilesystem.h:406 */
	virtual int Read(IBaseFileSystem* , void* , int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:407 */
	virtual int Write(IBaseFileSystem* , const void* , int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:410 */
	virtual FileHandle_t Open(IBaseFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:411 */
	virtual void Close(IBaseFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:414 */
	virtual void Seek(IBaseFileSystem* , FileHandle_t, int64, FileSystemSeek_t);
	/* ../public/filesystem/ifilesystem.h:415 */
	virtual int64 Tell(IBaseFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:416 */
	virtual int64 Size(IBaseFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:417 */
	virtual int64 Size(IBaseFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:419 */
	virtual void Flush(IBaseFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:420 */
	virtual bool Precache(IBaseFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:422 */
	virtual bool FileExists(IBaseFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:423 */
	virtual bool IsFileWritable(IBaseFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:424 */
	virtual bool SetFileWritable(IBaseFileSystem* , const char* , bool, const char* );
	/* ../public/filesystem/ifilesystem.h:426 */
	virtual int64 GetFileTime(IBaseFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:431 */
	virtual bool ReadFile(IBaseFileSystem* , const char* , const char* , CUtlBuffer& , int, int, FSAllocFunc_t);
	/* ../public/filesystem/ifilesystem.h:432 */
	virtual bool WriteFile(IBaseFileSystem* , const char* , const char* , const CUtlBuffer& );
	/* ../public/filesystem/ifilesystem.h:433 */
	virtual bool UnzipFile(IBaseFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:435 */
	virtual bool CopyAFile(IBaseFileSystem* , const char* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:443 */
	virtual IMemoryMappedFile* CreateMemoryMap(IBaseFileSystem* , FileHandle_t, MemoryMappedFileFlags_t);
	/* ../public/filesystem/ifilesystem.h:444 */
	virtual IMemoryMappedFile* CreateMemoryMap(IBaseFileSystem* , const char* , const char* , MemoryMappedFileFlags_t);
	void ~IBaseFileSystem(class IBaseFileSystem *); /* linkage=_ZN15IBaseFileSystemD4Ev */
	void IBaseFileSystem(class IBaseFileSystem *, class IBaseFileSystem &); /* linkage=_ZN15IBaseFileSystemC4EOS_ */
	void IBaseFileSystem(class IBaseFileSystem *, const class IBaseFileSystem  &); /* linkage=_ZN15IBaseFileSystemC4ERKS_ */
	void IBaseFileSystem(class IBaseFileSystem *); /* linkage=_ZN15IBaseFileSystemC4Ev */
	virtual int Read(class IBaseFileSystem *, void *, int, FileHandle_t); /* linkage=_ZN15IBaseFileSystem4ReadEPviS0_ */
	virtual int Write(class IBaseFileSystem *, const void  *, int, FileHandle_t); /* linkage=_ZN15IBaseFileSystem5WriteEPKviPv */
	virtual FileHandle_t Open(class IBaseFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem4OpenEPKcS1_S1_ */
	virtual void Close(class IBaseFileSystem *, FileHandle_t); /* linkage=_ZN15IBaseFileSystem5CloseEPv */
	virtual void Seek(class IBaseFileSystem *, FileHandle_t, int64, enum FileSystemSeek_t); /* linkage=_ZN15IBaseFileSystem4SeekEPvx16FileSystemSeek_t */
	virtual int64 Tell(class IBaseFileSystem *, FileHandle_t); /* linkage=_ZN15IBaseFileSystem4TellEPv */
	virtual int64 Size(class IBaseFileSystem *, FileHandle_t); /* linkage=_ZN15IBaseFileSystem4SizeEPv */
	virtual int64 Size(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem4SizeEPKcS1_ */
	virtual void Flush(class IBaseFileSystem *, FileHandle_t); /* linkage=_ZN15IBaseFileSystem5FlushEPv */
	virtual bool Precache(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem8PrecacheEPKcS1_ */
	virtual bool FileExists(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem10FileExistsEPKcS1_ */
	virtual bool IsFileWritable(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem14IsFileWritableEPKcS1_ */
	virtual bool SetFileWritable(class IBaseFileSystem *, const char  *, bool, const char  *); /* linkage=_ZN15IBaseFileSystem15SetFileWritableEPKcbS1_ */
	virtual int64 GetFileTime(class IBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem11GetFileTimeEPKcS1_ */
	virtual bool ReadFile(class IBaseFileSystem *, const char  *, const char  *, class CUtlBuffer &, int, int, FSAllocFunc_t); /* linkage=_ZN15IBaseFileSystem8ReadFileEPKcS1_R10CUtlBufferiiPFPvS1_jE */
	virtual bool WriteFile(class IBaseFileSystem *, const char  *, const char  *, const class CUtlBuffer  &); /* linkage=_ZN15IBaseFileSystem9WriteFileEPKcS1_RK10CUtlBuffer */
	virtual bool UnzipFile(class IBaseFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN15IBaseFileSystem9UnzipFileEPKcS1_S1_ */
	virtual bool CopyAFile(class IBaseFileSystem *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN15IBaseFileSystem9CopyAFileEPKcS1_S1_b */
	virtual class IMemoryMappedFile * CreateMemoryMap(class IBaseFileSystem *, FileHandle_t, enum MemoryMappedFileFlags_t); /* linkage=_ZN15IBaseFileSystem15CreateMemoryMapEPv23MemoryMappedFileFlags_t */
	virtual class IMemoryMappedFile * CreateMemoryMap(class IBaseFileSystem *, const char  *, const char  *, enum MemoryMappedFileFlags_t); /* linkage=_ZN15IBaseFileSystem15CreateMemoryMapEPKcS1_23MemoryMappedFileFlags_t */
	class IBaseFileSystem & operator=(class IBaseFileSystem *, class IBaseFileSystem &); /* linkage=_ZN15IBaseFileSystemaSEOS_ */
	class IBaseFileSystem & operator=(class IBaseFileSystem *, const class IBaseFileSystem  &); /* linkage=_ZN15IBaseFileSystemaSERKS_ */
};

// <000CE1ED> ../public/filesystem/ifilesystem.h:451
void IFileSystem::IFileSystem()
{
} /* size: 0 */

// <000CE1D0> ../public/filesystem/ifilesystem.h:451
inline void IFileSystem::IFileSystem()
{
} /* size: 0 */

// <000761D9> ../public/filesystem/ifilesystem.h:451
// member functions: 200
// member variables: 2
// vtable entries: 91
// class size: 16
class IFileSystem : public IAppSystem, public IBaseFileSystem {
	/* ../public/filesystem/ifilesystem.h:665 */
	enum KeyValuesPreloadType_t {
		TYPE_VMT = 0,
		TYPE_SOUNDEMITTER = 1,
		TYPE_SOUNDSCAPE = 2,
		TYPE_SOUNDOPERATORS = 3,
		NUM_PRELOAD_TYPES = 4,
	};
	/* ../public/filesystem/ifilesystem.h:742 */
	enum AccesLogWriteResult_t {
		ACCESS_LOG_WRITE_NO_LOG = 0,
		ACCESS_LOG_WRITE_FAILED = 1,
		ACCESS_LOG_WRITE_SUCCESS = 2,
	};
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	/* class IBaseFileSystem <ancestor>; */ /* 8 8 */
	void ~IFileSystem(IFileSystem* );
	void IFileSystem(IFileSystem* , IFileSystem& );
	void IFileSystem(IFileSystem* , const IFileSystem& );
	void IFileSystem(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:464 */
	virtual void AddSearchPath(IFileSystem* , const char* , const char* , SearchPathAdd_t, SearchPathPriority_t, CUtlStringToken);
	/* ../public/filesystem/ifilesystem.h:465 */
	virtual bool RemoveSearchPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:467 */
	virtual SearchPathStateHandle_t SaveSearchPathState(const IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:468 */
	virtual void RestoreSearchPathState(IFileSystem* , SearchPathStateHandle_t);
	/* ../public/filesystem/ifilesystem.h:469 */
	virtual void DestroySearchPathState(IFileSystem* , SearchPathStateHandle_t);
	/* ../public/filesystem/ifilesystem.h:472 */
	virtual void RemoveAllSearchPaths(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:475 */
	virtual void RemoveSearchPaths(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:481 */
	virtual void MarkPathIDByRequestOnly(IFileSystem* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:483 */
	virtual bool IsFileInReadOnlySearchPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:484 */
	virtual void SetSearchPathReadOnly(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:487 */
	virtual const char* RelativePathToFullPath(IFileSystem* , const char* , const char* , CBufferString* , PathTypeFilter_t);
	/* ../public/filesystem/ifilesystem.h:492 */
	virtual bool RelativePathToFullWritePath(IFileSystem* , const char* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:496 */
	virtual bool GetSearchPath(IFileSystem* , const char* , GetSearchPathTypes_t, CBufferString* , int);
	/* ../public/filesystem/ifilesystem.h:497 */
	bool GetSearchPath(IFileSystem* , const char* , CBufferString* , int);
	/* ../public/filesystem/ifilesystem.h:503 */
	bool GetSearchPathHead(IFileSystem* , const char* , CBufferString* , GetSearchPathTypes_t);
	/* ../public/filesystem/ifilesystem.h:509 */
	bool HasSearchPath(IFileSystem* , const char* , GetSearchPathTypes_t);
	/* ../public/filesystem/ifilesystem.h:515 */
	virtual CUtlStringToken GetMergeTokenForPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:517 */
	virtual int GetMergedPaths(IFileSystem* , CUtlStringToken, CBufferString* );
	/* ../public/filesystem/ifilesystem.h:524 */
	virtual bool RemoveFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:527 */
	virtual bool RenameFile(IFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:530 */
	virtual bool CreateDirHierarchy(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:533 */
	virtual bool CreateDirHierarchyForFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:536 */
	virtual bool IsDirectory(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:538 */
	virtual void FileTimeToString(IFileSystem* , int64, CBufferString* );
	/* ../public/filesystem/ifilesystem.h:544 */
	virtual void SetBufferSize(IFileSystem* , FileHandle_t, unsigned int);
	/* ../public/filesystem/ifilesystem.h:546 */
	virtual bool IsOk(IFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:548 */
	virtual bool EndOfFile(IFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:550 */
	virtual char* ReadLine(IFileSystem* , char* , int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:555 */
	virtual int FPrintf(IFileSystem* , FileHandle_t, const char* , ...);
	/* ../public/filesystem/ifilesystem.h:563 */
	virtual PlatModule_t LoadModule(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:564 */
	virtual void UnloadModule(IFileSystem* , PlatModule_t);
	/* ../public/filesystem/ifilesystem.h:571 */
	virtual const char* FindFirst(IFileSystem* , const char* , FileFindHandle_t* );
	/* ../public/filesystem/ifilesystem.h:572 */
	virtual const char* FindNext(IFileSystem* , FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:573 */
	virtual bool FindIsDirectory(IFileSystem* , const FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:574 */
	virtual void FindClose(IFileSystem* , FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:577 */
	virtual const char* FindFirstEx(IFileSystem* , const char* , const char* , FileFindHandle_t* );
	/* ../public/filesystem/ifilesystem.h:585 */
	virtual void FindFileAbsoluteList(IFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:593 */
	virtual bool FullPathToRelativePath(IFileSystem* , const char* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:596 */
	virtual bool GetCurrentDirectory(IFileSystem* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:602 */
	virtual FileNameHandle_t FindOrAddFileName(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:603 */
	virtual bool String(IFileSystem* , const FileNameHandle_t& , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:611 */
	virtual WaitForResourcesHandle_t WaitForResources(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:615 */
	virtual bool GetWaitForResourcesProgress(IFileSystem* , WaitForResourcesHandle_t, float* , bool* );
	/* ../public/filesystem/ifilesystem.h:617 */
	virtual void CancelWaitForResources(IFileSystem* , WaitForResourcesHandle_t);
	/* ../public/filesystem/ifilesystem.h:621 */
	virtual int HintResourceNeed(IFileSystem* , const char* , int);
	/* ../public/filesystem/ifilesystem.h:623 */
	virtual bool IsFileImmediatelyAvailable(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:626 */
	virtual void GetLocalCopy(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:633 */
	virtual void PrintOpenedFiles(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:634 */
	virtual void PrintSearchPaths(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:637 */
	virtual void SetWarningFunc(IFileSystem* , void (*)(const char* , ...));
	/* ../public/filesystem/ifilesystem.h:638 */
	virtual void SetWarningLevel(IFileSystem* , FileWarningLevel_t);
	/* ../public/filesystem/ifilesystem.h:639 */
	virtual void AddLoggingFunc(IFileSystem* , void (*)(const char* , const char* ));
	/* ../public/filesystem/ifilesystem.h:640 */
	virtual void RemoveLoggingFunc(IFileSystem* , FileSystemLoggingFunc_t);
	/* ../public/filesystem/ifilesystem.h:643 */
	virtual const FileSystemStatistics* GetFilesystemStatistics(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:649 */
	virtual FileHandle_t OpenEx(IFileSystem* , const char* , const char* , unsigned int, const char* );
	/* ../public/filesystem/ifilesystem.h:652 */
	virtual int ReadEx(IFileSystem* , void* , int, int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:653 */
	virtual int ReadFileEx(IFileSystem* , const char* , const char* , void** , bool, bool, int, int, FSAllocFunc_t);
	/* ../public/filesystem/ifilesystem.h:655 */
	virtual FileNameHandle_t FindFileName(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:676 */
	virtual KeyValues* LoadKeyValues(IFileSystem* , KeyValuesPreloadType_t, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:677 */
	virtual bool LoadKeyValues(IFileSystem* , KeyValues& , KeyValuesPreloadType_t, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:679 */
	virtual bool GetFileTypeForFullPath(IFileSystem* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:683 */
	virtual bool ReadToBuffer(IFileSystem* , FileHandle_t, CUtlBuffer& , int, FSAllocFunc_t);
	/* ../public/filesystem/ifilesystem.h:688 */
	virtual bool GetOptimalIOConstraints(IFileSystem* , FileHandle_t, unsigned int* , unsigned int* , unsigned int* );
	/* ../public/filesystem/ifilesystem.h:690 */
	virtual void* AllocOptimalReadBuffer(IFileSystem* , FileHandle_t, unsigned int, unsigned int);
	/* ../public/filesystem/ifilesystem.h:691 */
	virtual void FreeOptimalReadBuffer(IFileSystem* , void* );
	/* ../public/filesystem/ifilesystem.h:693 */
	virtual int GetPathIndex(IFileSystem* , const FileNameHandle_t& );
	/* ../public/filesystem/ifilesystem.h:694 */
	virtual int64 GetPathTime(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:696 */
	virtual int GetSearchPathID(IFileSystem* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:698 */
	virtual bool AddVPKFile(IFileSystem* , const char* , const char* , SearchPathAdd_t);
	/* ../public/filesystem/ifilesystem.h:699 */
	virtual void RemoveVPKFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:700 */
	virtual bool IsVPKFileLoaded(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:705 */
	virtual void SetIODelayAlarm(IFileSystem* , float);
	/* ../public/filesystem/ifilesystem.h:708 */
	virtual bool DeleteDirectory(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:711 */
	virtual bool DeleteDirectoryAndContents_R(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:719 */
	virtual bool IsPathInvalidForFilesystem(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:721 */
	virtual void GetAvailableDrives(IFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/filesystem/ifilesystem.h:727 */
	virtual CUtlString ReadLine(IFileSystem* , FileHandle_t, bool);
	/* ../public/filesystem/ifilesystem.h:730 */
	virtual void GetSearchPathsForPathID(const IFileSystem* , const char* , GetSearchPathTypes_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/filesystem/ifilesystem.h:734 */
	virtual bool MarkContentCorrupt(IFileSystem* , bool, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:737 */
	virtual void SetContentCorruptionReportingEnabled(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:740 */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:748 */
	virtual AccesLogWriteResult_t WriteFileAccessLog(IFileSystem* , const char* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:754 */
	virtual void ResetProjectPaths(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:755 */
	virtual void AddProjectPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:756 */
	virtual void AddCloudPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:758 */
	virtual const char* GetModPath(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:759 */
	virtual const char* GetSymLink(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:760 */
	virtual void AddSymLink(IFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:761 */
	virtual void RemoveSymLink(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:762 */
	virtual void ClearSymLinks(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:763 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* GetSymLinkReloadQueue(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:764 */
	virtual bool GetSearchPath(IFileSystem* , int, CUtlString* , CUtlString* );
	/* ../public/filesystem/ifilesystem.h:765 */
	virtual bool SplitFullPath(IFileSystem* , const char* , CBufferString* , CBufferString* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:766 */
	virtual bool GetSearchPathArgs(IFileSystem* , const char* , CBufferString* );
	void ~IFileSystem(class IFileSystem *); /* linkage=_ZN11IFileSystemD4Ev */
	void IFileSystem(class IFileSystem *, class IFileSystem &); /* linkage=_ZN11IFileSystemC4EOS_ */
	void IFileSystem(class IFileSystem *, const class IFileSystem  &); /* linkage=_ZN11IFileSystemC4ERKS_ */
	void IFileSystem(class IFileSystem *); /* linkage=_ZN11IFileSystemC4Ev */
	virtual void AddSearchPath(class IFileSystem *, const char  *, const char  *, enum SearchPathAdd_t, enum SearchPathPriority_t, class CUtlStringToken); /* linkage=_ZN11IFileSystem13AddSearchPathEPKcS1_15SearchPathAdd_t20SearchPathPriority_t15CUtlStringToken */
	virtual bool RemoveSearchPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem16RemoveSearchPathEPKcS1_ */
	virtual SearchPathStateHandle_t SaveSearchPathState(const class IFileSystem  *, const char  *); /* linkage=_ZNK11IFileSystem19SaveSearchPathStateEPKc */
	virtual void RestoreSearchPathState(class IFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN11IFileSystem22RestoreSearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void DestroySearchPathState(class IFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN11IFileSystem22DestroySearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void RemoveAllSearchPaths(class IFileSystem *); /* linkage=_ZN11IFileSystem20RemoveAllSearchPathsEv */
	virtual void RemoveSearchPaths(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem17RemoveSearchPathsEPKc */
	virtual void MarkPathIDByRequestOnly(class IFileSystem *, const char  *, bool); /* linkage=_ZN11IFileSystem23MarkPathIDByRequestOnlyEPKcb */
	virtual bool IsFileInReadOnlySearchPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem26IsFileInReadOnlySearchPathEPKcS1_ */
	virtual void SetSearchPathReadOnly(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem21SetSearchPathReadOnlyEPKcS1_b */
	virtual const char  * RelativePathToFullPath(class IFileSystem *, const char  *, const char  *, class CBufferString *, enum PathTypeFilter_t); /* linkage=_ZN11IFileSystem22RelativePathToFullPathEPKcS1_P13CBufferString16PathTypeFilter_t */
	virtual bool RelativePathToFullWritePath(class IFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem27RelativePathToFullWritePathEPKcS1_P13CBufferString */
	virtual bool GetSearchPath(class IFileSystem *, const char  *, enum GetSearchPathTypes_t, class CBufferString *, int); /* linkage=_ZN11IFileSystem13GetSearchPathEPKc20GetSearchPathTypes_tP13CBufferStringi */
	bool GetSearchPath(class IFileSystem *, const char  *, class CBufferString *, int); /* linkage=_ZN11IFileSystem13GetSearchPathEPKcP13CBufferStringi */
	bool GetSearchPathHead(class IFileSystem *, const char  *, class CBufferString *, enum GetSearchPathTypes_t); /* linkage=_ZN11IFileSystem17GetSearchPathHeadEPKcP13CBufferString20GetSearchPathTypes_t */
	bool HasSearchPath(class IFileSystem *, const char  *, enum GetSearchPathTypes_t); /* linkage=_ZN11IFileSystem13HasSearchPathEPKc20GetSearchPathTypes_t */
	virtual class CUtlStringToken GetMergeTokenForPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem20GetMergeTokenForPathEPKcS1_ */
	virtual int GetMergedPaths(class IFileSystem *, class CUtlStringToken, class CBufferString *); /* linkage=_ZN11IFileSystem14GetMergedPathsE15CUtlStringTokenP13CBufferString */
	virtual bool RemoveFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10RemoveFileEPKcS1_ */
	virtual bool RenameFile(class IFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10RenameFileEPKcS1_S1_ */
	virtual bool CreateDirHierarchy(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem18CreateDirHierarchyEPKcS1_ */
	virtual bool CreateDirHierarchyForFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem25CreateDirHierarchyForFileEPKcS1_ */
	virtual bool IsDirectory(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem11IsDirectoryEPKcS1_ */
	virtual void FileTimeToString(class IFileSystem *, int64, class CBufferString *); /* linkage=_ZN11IFileSystem16FileTimeToStringExP13CBufferString */
	virtual void SetBufferSize(class IFileSystem *, FileHandle_t, unsigned int); /* linkage=_ZN11IFileSystem13SetBufferSizeEPvj */
	virtual bool IsOk(class IFileSystem *, FileHandle_t); /* linkage=_ZN11IFileSystem4IsOkEPv */
	virtual bool EndOfFile(class IFileSystem *, FileHandle_t); /* linkage=_ZN11IFileSystem9EndOfFileEPv */
	virtual char * ReadLine(class IFileSystem *, char *, int, FileHandle_t); /* linkage=_ZN11IFileSystem8ReadLineEPciPv */
	virtual int FPrintf(class IFileSystem *, FileHandle_t, const char  *, ...); /* linkage=_ZN11IFileSystem7FPrintfEPvPKcz */
	virtual PlatModule_t LoadModule(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem10LoadModuleEPKcS1_b */
	virtual void UnloadModule(class IFileSystem *, PlatModule_t); /* linkage=_ZN11IFileSystem12UnloadModuleEP13_PlatModule_t */
	virtual const char  * FindFirst(class IFileSystem *, const char  *, class FileFindHandle_t *); /* linkage=_ZN11IFileSystem9FindFirstEPKcP16FileFindHandle_t */
	virtual const char  * FindNext(class IFileSystem *, class FileFindHandle_t &); /* linkage=_ZN11IFileSystem8FindNextER16FileFindHandle_t */
	virtual bool FindIsDirectory(class IFileSystem *, const class FileFindHandle_t  &); /* linkage=_ZN11IFileSystem15FindIsDirectoryERK16FileFindHandle_t */
	virtual void FindClose(class IFileSystem *, class FileFindHandle_t &); /* linkage=_ZN11IFileSystem9FindCloseER16FileFindHandle_t */
	virtual const char  * FindFirstEx(class IFileSystem *, const char  *, const char  *, class FileFindHandle_t *); /* linkage=_ZN11IFileSystem11FindFirstExEPKcS1_P16FileFindHandle_t */
	virtual void FindFileAbsoluteList(class IFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const char  *, const char  *); /* linkage=_ZN11IFileSystem20FindFileAbsoluteListER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPKcS7_ */
	virtual bool FullPathToRelativePath(class IFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem22FullPathToRelativePathEPKcS1_P13CBufferString */
	virtual bool GetCurrentDirectory(class IFileSystem *, class CBufferString *); /* linkage=_ZN11IFileSystem19GetCurrentDirectoryEP13CBufferString */
	virtual FileNameHandle_t FindOrAddFileName(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem17FindOrAddFileNameEPKc */
	virtual bool String(class IFileSystem *, const FileNameHandle_t  &, class CBufferString *); /* linkage=_ZN11IFileSystem6StringERKjP13CBufferString */
	virtual WaitForResourcesHandle_t WaitForResources(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem16WaitForResourcesEPKc */
	virtual bool GetWaitForResourcesProgress(class IFileSystem *, WaitForResourcesHandle_t, float *, bool *); /* linkage=_ZN11IFileSystem27GetWaitForResourcesProgressEiPfPb */
	virtual void CancelWaitForResources(class IFileSystem *, WaitForResourcesHandle_t); /* linkage=_ZN11IFileSystem22CancelWaitForResourcesEi */
	virtual int HintResourceNeed(class IFileSystem *, const char  *, int); /* linkage=_ZN11IFileSystem16HintResourceNeedEPKci */
	virtual bool IsFileImmediatelyAvailable(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem26IsFileImmediatelyAvailableEPKc */
	virtual void GetLocalCopy(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem12GetLocalCopyEPKc */
	virtual void PrintOpenedFiles(class IFileSystem *); /* linkage=_ZN11IFileSystem16PrintOpenedFilesEv */
	virtual void PrintSearchPaths(class IFileSystem *); /* linkage=_ZN11IFileSystem16PrintSearchPathsEv */
	virtual void SetWarningFunc(class IFileSystem *, void (*)(const char  *, ...)); /* linkage=_ZN11IFileSystem14SetWarningFuncEPFvPKczE */
	virtual void SetWarningLevel(class IFileSystem *, enum FileWarningLevel_t); /* linkage=_ZN11IFileSystem15SetWarningLevelE18FileWarningLevel_t */
	virtual void AddLoggingFunc(class IFileSystem *, void (*)(const char  *, const char  *)); /* linkage=_ZN11IFileSystem14AddLoggingFuncEPFvPKcS1_E */
	virtual void RemoveLoggingFunc(class IFileSystem *, FileSystemLoggingFunc_t); /* linkage=_ZN11IFileSystem17RemoveLoggingFuncEPFvPKcS1_E */
	virtual const class FileSystemStatistics  * GetFilesystemStatistics(class IFileSystem *); /* linkage=_ZN11IFileSystem23GetFilesystemStatisticsEv */
	virtual FileHandle_t OpenEx(class IFileSystem *, const char  *, const char  *, unsigned int, const char  *); /* linkage=_ZN11IFileSystem6OpenExEPKcS1_jS1_ */
	virtual int ReadEx(class IFileSystem *, void *, int, int, FileHandle_t); /* linkage=_ZN11IFileSystem6ReadExEPviiS0_ */
	virtual int ReadFileEx(class IFileSystem *, const char  *, const char  *, void * *, bool, bool, int, int, FSAllocFunc_t); /* linkage=_ZN11IFileSystem10ReadFileExEPKcS1_PPvbbiiPFS2_S1_jE */
	virtual FileNameHandle_t FindFileName(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem12FindFileNameEPKc */
	virtual class KeyValues * LoadKeyValues(class IFileSystem *, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN11IFileSystem13LoadKeyValuesENS_22KeyValuesPreloadType_tEPKcS2_ */
	virtual bool LoadKeyValues(class IFileSystem *, class KeyValues &, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN11IFileSystem13LoadKeyValuesER9KeyValuesNS_22KeyValuesPreloadType_tEPKcS4_ */
	virtual bool GetFileTypeForFullPath(class IFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem22GetFileTypeForFullPathEPKcP13CBufferString */
	virtual bool ReadToBuffer(class IFileSystem *, FileHandle_t, class CUtlBuffer &, int, FSAllocFunc_t); /* linkage=_ZN11IFileSystem12ReadToBufferEPvR10CUtlBufferiPFS0_PKcjE */
	virtual bool GetOptimalIOConstraints(class IFileSystem *, FileHandle_t, unsigned int *, unsigned int *, unsigned int *); /* linkage=_ZN11IFileSystem23GetOptimalIOConstraintsEPvPjS1_S1_ */
	virtual void * AllocOptimalReadBuffer(class IFileSystem *, FileHandle_t, unsigned int, unsigned int); /* linkage=_ZN11IFileSystem22AllocOptimalReadBufferEPvjj */
	virtual void FreeOptimalReadBuffer(class IFileSystem *, void *); /* linkage=_ZN11IFileSystem21FreeOptimalReadBufferEPv */
	virtual int GetPathIndex(class IFileSystem *, const FileNameHandle_t  &); /* linkage=_ZN11IFileSystem12GetPathIndexERKj */
	virtual int64 GetPathTime(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem11GetPathTimeEPKcS1_ */
	virtual int GetSearchPathID(class IFileSystem *, class CBufferString *); /* linkage=_ZN11IFileSystem15GetSearchPathIDEP13CBufferString */
	virtual bool AddVPKFile(class IFileSystem *, const char  *, const char  *, enum SearchPathAdd_t); /* linkage=_ZN11IFileSystem10AddVPKFileEPKcS1_15SearchPathAdd_t */
	virtual void RemoveVPKFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem13RemoveVPKFileEPKcS1_ */
	virtual bool IsVPKFileLoaded(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem15IsVPKFileLoadedEPKc */
	virtual void SetIODelayAlarm(class IFileSystem *, float); /* linkage=_ZN11IFileSystem15SetIODelayAlarmEf */
	virtual bool DeleteDirectory(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem15DeleteDirectoryEPKcS1_ */
	virtual bool DeleteDirectoryAndContents_R(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem28DeleteDirectoryAndContents_REPKcS1_b */
	virtual bool IsPathInvalidForFilesystem(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem26IsPathInvalidForFilesystemEPKc */
	virtual void GetAvailableDrives(class IFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN11IFileSystem18GetAvailableDrivesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	virtual class CUtlString ReadLine(class IFileSystem *, FileHandle_t, bool); /* linkage=_ZN11IFileSystem8ReadLineEPvb */
	virtual void GetSearchPathsForPathID(const class IFileSystem  *, const char  *, enum GetSearchPathTypes_t, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZNK11IFileSystem23GetSearchPathsForPathIDEPKc20GetSearchPathTypes_tR10CUtlVectorI10CUtlString10CUtlMemoryIS4_iEE */
	virtual bool MarkContentCorrupt(class IFileSystem *, bool, const char  *, const char  *); /* linkage=_ZN11IFileSystem18MarkContentCorruptEbPKcS1_ */
	virtual void SetContentCorruptionReportingEnabled(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem36SetContentCorruptionReportingEnabledEb */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem41SuppressAsyncFileRequestFlushOnPathChangeEb */
	virtual enum AccesLogWriteResult_t WriteFileAccessLog(class IFileSystem *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem18WriteFileAccessLogEPKcS1_S1_b */
	virtual void ResetProjectPaths(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem17ResetProjectPathsEb */
	virtual void AddProjectPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem14AddProjectPathEPKcS1_ */
	virtual void AddCloudPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem12AddCloudPathEPKcS1_ */
	virtual const char  * GetModPath(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem10GetModPathEPKc */
	virtual const char  * GetSymLink(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10GetSymLinkEPKcS1_ */
	virtual void AddSymLink(class IFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10AddSymLinkEPKcS1_S1_ */
	virtual void RemoveSymLink(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem13RemoveSymLinkEPKcS1_ */
	virtual void ClearSymLinks(class IFileSystem *); /* linkage=_ZN11IFileSystem13ClearSymLinksEv */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > * GetSymLinkReloadQueue(class IFileSystem *); /* linkage=_ZN11IFileSystem21GetSymLinkReloadQueueEv */
	virtual bool GetSearchPath(class IFileSystem *, int, class CUtlString *, class CUtlString *); /* linkage=_ZN11IFileSystem13GetSearchPathEiP10CUtlStringS1_ */
	virtual bool SplitFullPath(class IFileSystem *, const char  *, class CBufferString *, class CBufferString *, class CBufferString *); /* linkage=_ZN11IFileSystem13SplitFullPathEPKcP13CBufferStringS3_S3_ */
	virtual bool GetSearchPathArgs(class IFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem17GetSearchPathArgsEPKcP13CBufferString */
	unsigned int GetOptimalReadSize<unsigned int>(class IFileSystem *, FileHandle_t, unsigned int); /* linkage=_ZN11IFileSystem18GetOptimalReadSizeIjEET_PvS1_ */
	int GetOptimalReadSize<int>(class IFileSystem *, FileHandle_t, int); /* linkage=_ZN11IFileSystem18GetOptimalReadSizeIiEET_PvS1_ */
	class IFileSystem & operator=(class IFileSystem *, class IFileSystem &); /* linkage=_ZN11IFileSystemaSEOS_ */
	class IFileSystem & operator=(class IFileSystem *, const class IFileSystem  &); /* linkage=_ZN11IFileSystemaSERKS_ */
};

// <06DA51EA> ../../public/filesystem/ifilesystem.h:451
// member functions: 200
// member variables: 2
// vtable entries: 91
// class size: 16
class IFileSystem : public IAppSystem, public IBaseFileSystem {
	/* ../../public/filesystem/ifilesystem.h:665 */
	enum KeyValuesPreloadType_t {
		TYPE_VMT = 0,
		TYPE_SOUNDEMITTER = 1,
		TYPE_SOUNDSCAPE = 2,
		TYPE_SOUNDOPERATORS = 3,
		NUM_PRELOAD_TYPES = 4,
	};
	/* ../../public/filesystem/ifilesystem.h:742 */
	enum AccesLogWriteResult_t {
		ACCESS_LOG_WRITE_NO_LOG = 0,
		ACCESS_LOG_WRITE_FAILED = 1,
		ACCESS_LOG_WRITE_SUCCESS = 2,
	};
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	/* class IBaseFileSystem <ancestor>; */ /* 8 8 */
	void ~IFileSystem(IFileSystem* );
	void IFileSystem(IFileSystem* , IFileSystem& );
	void IFileSystem(IFileSystem* , const IFileSystem& );
	void IFileSystem(IFileSystem* );
	/* ../../public/filesystem/ifilesystem.h:464 */
	virtual void AddSearchPath(IFileSystem* , const char* , const char* , SearchPathAdd_t, SearchPathPriority_t, CUtlStringToken);
	/* ../../public/filesystem/ifilesystem.h:465 */
	virtual bool RemoveSearchPath(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:467 */
	virtual SearchPathStateHandle_t SaveSearchPathState(const IFileSystem* , const char* );
	/* ../../public/filesystem/ifilesystem.h:468 */
	virtual void RestoreSearchPathState(IFileSystem* , SearchPathStateHandle_t);
	/* ../../public/filesystem/ifilesystem.h:469 */
	virtual void DestroySearchPathState(IFileSystem* , SearchPathStateHandle_t);
	/* ../../public/filesystem/ifilesystem.h:472 */
	virtual void RemoveAllSearchPaths(IFileSystem* );
	/* ../../public/filesystem/ifilesystem.h:475 */
	virtual void RemoveSearchPaths(IFileSystem* , const char* );
	/* ../../public/filesystem/ifilesystem.h:481 */
	virtual void MarkPathIDByRequestOnly(IFileSystem* , const char* , bool);
	/* ../../public/filesystem/ifilesystem.h:483 */
	virtual bool IsFileInReadOnlySearchPath(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:484 */
	virtual void SetSearchPathReadOnly(IFileSystem* , const char* , const char* , bool);
	/* ../../public/filesystem/ifilesystem.h:487 */
	virtual const char* RelativePathToFullPath(IFileSystem* , const char* , const char* , CBufferString* , PathTypeFilter_t);
	/* ../../public/filesystem/ifilesystem.h:492 */
	virtual bool RelativePathToFullWritePath(IFileSystem* , const char* , const char* , CBufferString* );
	/* ../../public/filesystem/ifilesystem.h:496 */
	virtual bool GetSearchPath(IFileSystem* , const char* , GetSearchPathTypes_t, CBufferString* , int);
	/* ../../public/filesystem/ifilesystem.h:497 */
	bool GetSearchPath(IFileSystem* , const char* , CBufferString* , int);
	/* ../../public/filesystem/ifilesystem.h:503 */
	bool GetSearchPathHead(IFileSystem* , const char* , CBufferString* , GetSearchPathTypes_t);
	/* ../../public/filesystem/ifilesystem.h:509 */
	bool HasSearchPath(IFileSystem* , const char* , GetSearchPathTypes_t);
	/* ../../public/filesystem/ifilesystem.h:515 */
	virtual CUtlStringToken GetMergeTokenForPath(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:517 */
	virtual int GetMergedPaths(IFileSystem* , CUtlStringToken, CBufferString* );
	/* ../../public/filesystem/ifilesystem.h:524 */
	virtual bool RemoveFile(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:527 */
	virtual bool RenameFile(IFileSystem* , const char* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:530 */
	virtual bool CreateDirHierarchy(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:533 */
	virtual bool CreateDirHierarchyForFile(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:536 */
	virtual bool IsDirectory(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:538 */
	virtual void FileTimeToString(IFileSystem* , int64, CBufferString* );
	/* ../../public/filesystem/ifilesystem.h:544 */
	virtual void SetBufferSize(IFileSystem* , FileHandle_t, unsigned int);
	/* ../../public/filesystem/ifilesystem.h:546 */
	virtual bool IsOk(IFileSystem* , FileHandle_t);
	/* ../../public/filesystem/ifilesystem.h:548 */
	virtual bool EndOfFile(IFileSystem* , FileHandle_t);
	/* ../../public/filesystem/ifilesystem.h:550 */
	virtual char* ReadLine(IFileSystem* , char* , int, FileHandle_t);
	/* ../../public/filesystem/ifilesystem.h:555 */
	virtual int FPrintf(IFileSystem* , FileHandle_t, const char* , ...);
	/* ../../public/filesystem/ifilesystem.h:563 */
	virtual PlatModule_t LoadModule(IFileSystem* , const char* , const char* , bool);
	/* ../../public/filesystem/ifilesystem.h:564 */
	virtual void UnloadModule(IFileSystem* , PlatModule_t);
	/* ../../public/filesystem/ifilesystem.h:571 */
	virtual const char* FindFirst(IFileSystem* , const char* , FileFindHandle_t* );
	/* ../../public/filesystem/ifilesystem.h:572 */
	virtual const char* FindNext(IFileSystem* , FileFindHandle_t& );
	/* ../../public/filesystem/ifilesystem.h:573 */
	virtual bool FindIsDirectory(IFileSystem* , const FileFindHandle_t& );
	/* ../../public/filesystem/ifilesystem.h:574 */
	virtual void FindClose(IFileSystem* , FileFindHandle_t& );
	/* ../../public/filesystem/ifilesystem.h:577 */
	virtual const char* FindFirstEx(IFileSystem* , const char* , const char* , FileFindHandle_t* );
	/* ../../public/filesystem/ifilesystem.h:585 */
	virtual void FindFileAbsoluteList(IFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:593 */
	virtual bool FullPathToRelativePath(IFileSystem* , const char* , const char* , CBufferString* );
	/* ../../public/filesystem/ifilesystem.h:596 */
	virtual bool GetCurrentDirectory(IFileSystem* , CBufferString* );
	/* ../../public/filesystem/ifilesystem.h:602 */
	virtual FileNameHandle_t FindOrAddFileName(IFileSystem* , const char* );
	/* ../../public/filesystem/ifilesystem.h:603 */
	virtual bool String(IFileSystem* , const FileNameHandle_t& , CBufferString* );
	/* ../../public/filesystem/ifilesystem.h:611 */
	virtual WaitForResourcesHandle_t WaitForResources(IFileSystem* , const char* );
	/* ../../public/filesystem/ifilesystem.h:615 */
	virtual bool GetWaitForResourcesProgress(IFileSystem* , WaitForResourcesHandle_t, float* , bool* );
	/* ../../public/filesystem/ifilesystem.h:617 */
	virtual void CancelWaitForResources(IFileSystem* , WaitForResourcesHandle_t);
	/* ../../public/filesystem/ifilesystem.h:621 */
	virtual int HintResourceNeed(IFileSystem* , const char* , int);
	/* ../../public/filesystem/ifilesystem.h:623 */
	virtual bool IsFileImmediatelyAvailable(IFileSystem* , const char* );
	/* ../../public/filesystem/ifilesystem.h:626 */
	virtual void GetLocalCopy(IFileSystem* , const char* );
	/* ../../public/filesystem/ifilesystem.h:633 */
	virtual void PrintOpenedFiles(IFileSystem* );
	/* ../../public/filesystem/ifilesystem.h:634 */
	virtual void PrintSearchPaths(IFileSystem* );
	/* ../../public/filesystem/ifilesystem.h:637 */
	virtual void SetWarningFunc(IFileSystem* , void (*)(const char* , ...));
	/* ../../public/filesystem/ifilesystem.h:638 */
	virtual void SetWarningLevel(IFileSystem* , FileWarningLevel_t);
	/* ../../public/filesystem/ifilesystem.h:639 */
	virtual void AddLoggingFunc(IFileSystem* , void (*)(const char* , const char* ));
	/* ../../public/filesystem/ifilesystem.h:640 */
	virtual void RemoveLoggingFunc(IFileSystem* , FileSystemLoggingFunc_t);
	/* ../../public/filesystem/ifilesystem.h:643 */
	virtual const FileSystemStatistics* GetFilesystemStatistics(IFileSystem* );
	/* ../../public/filesystem/ifilesystem.h:649 */
	virtual FileHandle_t OpenEx(IFileSystem* , const char* , const char* , unsigned int, const char* );
	/* ../../public/filesystem/ifilesystem.h:652 */
	virtual int ReadEx(IFileSystem* , void* , int, int, FileHandle_t);
	/* ../../public/filesystem/ifilesystem.h:653 */
	virtual int ReadFileEx(IFileSystem* , const char* , const char* , void** , bool, bool, int, int, FSAllocFunc_t);
	/* ../../public/filesystem/ifilesystem.h:655 */
	virtual FileNameHandle_t FindFileName(IFileSystem* , const char* );
	/* ../../public/filesystem/ifilesystem.h:676 */
	virtual KeyValues* LoadKeyValues(IFileSystem* , KeyValuesPreloadType_t, const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:677 */
	virtual bool LoadKeyValues(IFileSystem* , KeyValues& , KeyValuesPreloadType_t, const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:679 */
	virtual bool GetFileTypeForFullPath(IFileSystem* , const char* , CBufferString* );
	/* ../../public/filesystem/ifilesystem.h:683 */
	virtual bool ReadToBuffer(IFileSystem* , FileHandle_t, CUtlBuffer& , int, FSAllocFunc_t);
	/* ../../public/filesystem/ifilesystem.h:688 */
	virtual bool GetOptimalIOConstraints(IFileSystem* , FileHandle_t, unsigned int* , unsigned int* , unsigned int* );
	/* ../../public/filesystem/ifilesystem.h:690 */
	virtual void* AllocOptimalReadBuffer(IFileSystem* , FileHandle_t, unsigned int, unsigned int);
	/* ../../public/filesystem/ifilesystem.h:691 */
	virtual void FreeOptimalReadBuffer(IFileSystem* , void* );
	/* ../../public/filesystem/ifilesystem.h:693 */
	virtual int GetPathIndex(IFileSystem* , const FileNameHandle_t& );
	/* ../../public/filesystem/ifilesystem.h:694 */
	virtual int64 GetPathTime(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:696 */
	virtual int GetSearchPathID(IFileSystem* , CBufferString* );
	/* ../../public/filesystem/ifilesystem.h:698 */
	virtual bool AddVPKFile(IFileSystem* , const char* , const char* , SearchPathAdd_t);
	/* ../../public/filesystem/ifilesystem.h:699 */
	virtual void RemoveVPKFile(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:700 */
	virtual bool IsVPKFileLoaded(IFileSystem* , const char* );
	/* ../../public/filesystem/ifilesystem.h:705 */
	virtual void SetIODelayAlarm(IFileSystem* , float);
	/* ../../public/filesystem/ifilesystem.h:708 */
	virtual bool DeleteDirectory(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:711 */
	virtual bool DeleteDirectoryAndContents_R(IFileSystem* , const char* , const char* , bool);
	/* ../../public/filesystem/ifilesystem.h:719 */
	virtual bool IsPathInvalidForFilesystem(IFileSystem* , const char* );
	/* ../../public/filesystem/ifilesystem.h:721 */
	virtual void GetAvailableDrives(IFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../../public/filesystem/ifilesystem.h:727 */
	virtual CUtlString ReadLine(IFileSystem* , FileHandle_t, bool);
	/* ../../public/filesystem/ifilesystem.h:730 */
	virtual void GetSearchPathsForPathID(const IFileSystem* , const char* , GetSearchPathTypes_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../../public/filesystem/ifilesystem.h:734 */
	virtual bool MarkContentCorrupt(IFileSystem* , bool, const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:737 */
	virtual void SetContentCorruptionReportingEnabled(IFileSystem* , bool);
	/* ../../public/filesystem/ifilesystem.h:740 */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(IFileSystem* , bool);
	/* ../../public/filesystem/ifilesystem.h:748 */
	virtual AccesLogWriteResult_t WriteFileAccessLog(IFileSystem* , const char* , const char* , const char* , bool);
	/* ../../public/filesystem/ifilesystem.h:754 */
	virtual void ResetProjectPaths(IFileSystem* , bool);
	/* ../../public/filesystem/ifilesystem.h:755 */
	virtual void AddProjectPath(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:756 */
	virtual void AddCloudPath(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:758 */
	virtual const char* GetModPath(IFileSystem* , const char* );
	/* ../../public/filesystem/ifilesystem.h:759 */
	virtual const char* GetSymLink(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:760 */
	virtual void AddSymLink(IFileSystem* , const char* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:761 */
	virtual void RemoveSymLink(IFileSystem* , const char* , const char* );
	/* ../../public/filesystem/ifilesystem.h:762 */
	virtual void ClearSymLinks(IFileSystem* );
	/* ../../public/filesystem/ifilesystem.h:763 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* GetSymLinkReloadQueue(IFileSystem* );
	/* ../../public/filesystem/ifilesystem.h:764 */
	virtual bool GetSearchPath(IFileSystem* , int, CUtlString* , CUtlString* );
	/* ../../public/filesystem/ifilesystem.h:765 */
	virtual bool SplitFullPath(IFileSystem* , const char* , CBufferString* , CBufferString* , CBufferString* );
	/* ../../public/filesystem/ifilesystem.h:766 */
	virtual bool GetSearchPathArgs(IFileSystem* , const char* , CBufferString* );
	void ~IFileSystem(class IFileSystem *); /* linkage=_ZN11IFileSystemD4Ev */
	void IFileSystem(class IFileSystem *, class IFileSystem &); /* linkage=_ZN11IFileSystemC4EOS_ */
	void IFileSystem(class IFileSystem *, const class IFileSystem  &); /* linkage=_ZN11IFileSystemC4ERKS_ */
	void IFileSystem(class IFileSystem *); /* linkage=_ZN11IFileSystemC4Ev */
	virtual void AddSearchPath(class IFileSystem *, const char  *, const char  *, enum SearchPathAdd_t, enum SearchPathPriority_t, class CUtlStringToken); /* linkage=_ZN11IFileSystem13AddSearchPathEPKcS1_15SearchPathAdd_t20SearchPathPriority_t15CUtlStringToken */
	virtual bool RemoveSearchPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem16RemoveSearchPathEPKcS1_ */
	virtual SearchPathStateHandle_t SaveSearchPathState(const class IFileSystem  *, const char  *); /* linkage=_ZNK11IFileSystem19SaveSearchPathStateEPKc */
	virtual void RestoreSearchPathState(class IFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN11IFileSystem22RestoreSearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void DestroySearchPathState(class IFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN11IFileSystem22DestroySearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void RemoveAllSearchPaths(class IFileSystem *); /* linkage=_ZN11IFileSystem20RemoveAllSearchPathsEv */
	virtual void RemoveSearchPaths(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem17RemoveSearchPathsEPKc */
	virtual void MarkPathIDByRequestOnly(class IFileSystem *, const char  *, bool); /* linkage=_ZN11IFileSystem23MarkPathIDByRequestOnlyEPKcb */
	virtual bool IsFileInReadOnlySearchPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem26IsFileInReadOnlySearchPathEPKcS1_ */
	virtual void SetSearchPathReadOnly(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem21SetSearchPathReadOnlyEPKcS1_b */
	virtual const char  * RelativePathToFullPath(class IFileSystem *, const char  *, const char  *, class CBufferString *, enum PathTypeFilter_t); /* linkage=_ZN11IFileSystem22RelativePathToFullPathEPKcS1_P13CBufferString16PathTypeFilter_t */
	virtual bool RelativePathToFullWritePath(class IFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem27RelativePathToFullWritePathEPKcS1_P13CBufferString */
	virtual bool GetSearchPath(class IFileSystem *, const char  *, enum GetSearchPathTypes_t, class CBufferString *, int); /* linkage=_ZN11IFileSystem13GetSearchPathEPKc20GetSearchPathTypes_tP13CBufferStringi */
	bool GetSearchPath(class IFileSystem *, const char  *, class CBufferString *, int); /* linkage=_ZN11IFileSystem13GetSearchPathEPKcP13CBufferStringi */
	bool GetSearchPathHead(class IFileSystem *, const char  *, class CBufferString *, enum GetSearchPathTypes_t); /* linkage=_ZN11IFileSystem17GetSearchPathHeadEPKcP13CBufferString20GetSearchPathTypes_t */
	bool HasSearchPath(class IFileSystem *, const char  *, enum GetSearchPathTypes_t); /* linkage=_ZN11IFileSystem13HasSearchPathEPKc20GetSearchPathTypes_t */
	virtual class CUtlStringToken GetMergeTokenForPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem20GetMergeTokenForPathEPKcS1_ */
	virtual int GetMergedPaths(class IFileSystem *, class CUtlStringToken, class CBufferString *); /* linkage=_ZN11IFileSystem14GetMergedPathsE15CUtlStringTokenP13CBufferString */
	virtual bool RemoveFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10RemoveFileEPKcS1_ */
	virtual bool RenameFile(class IFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10RenameFileEPKcS1_S1_ */
	virtual bool CreateDirHierarchy(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem18CreateDirHierarchyEPKcS1_ */
	virtual bool CreateDirHierarchyForFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem25CreateDirHierarchyForFileEPKcS1_ */
	virtual bool IsDirectory(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem11IsDirectoryEPKcS1_ */
	virtual void FileTimeToString(class IFileSystem *, int64, class CBufferString *); /* linkage=_ZN11IFileSystem16FileTimeToStringExP13CBufferString */
	virtual void SetBufferSize(class IFileSystem *, FileHandle_t, unsigned int); /* linkage=_ZN11IFileSystem13SetBufferSizeEPvj */
	virtual bool IsOk(class IFileSystem *, FileHandle_t); /* linkage=_ZN11IFileSystem4IsOkEPv */
	virtual bool EndOfFile(class IFileSystem *, FileHandle_t); /* linkage=_ZN11IFileSystem9EndOfFileEPv */
	virtual char * ReadLine(class IFileSystem *, char *, int, FileHandle_t); /* linkage=_ZN11IFileSystem8ReadLineEPciPv */
	virtual int FPrintf(class IFileSystem *, FileHandle_t, const char  *, ...); /* linkage=_ZN11IFileSystem7FPrintfEPvPKcz */
	virtual PlatModule_t LoadModule(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem10LoadModuleEPKcS1_b */
	virtual void UnloadModule(class IFileSystem *, PlatModule_t); /* linkage=_ZN11IFileSystem12UnloadModuleEP13_PlatModule_t */
	virtual const char  * FindFirst(class IFileSystem *, const char  *, class FileFindHandle_t *); /* linkage=_ZN11IFileSystem9FindFirstEPKcP16FileFindHandle_t */
	virtual const char  * FindNext(class IFileSystem *, class FileFindHandle_t &); /* linkage=_ZN11IFileSystem8FindNextER16FileFindHandle_t */
	virtual bool FindIsDirectory(class IFileSystem *, const class FileFindHandle_t  &); /* linkage=_ZN11IFileSystem15FindIsDirectoryERK16FileFindHandle_t */
	virtual void FindClose(class IFileSystem *, class FileFindHandle_t &); /* linkage=_ZN11IFileSystem9FindCloseER16FileFindHandle_t */
	virtual const char  * FindFirstEx(class IFileSystem *, const char  *, const char  *, class FileFindHandle_t *); /* linkage=_ZN11IFileSystem11FindFirstExEPKcS1_P16FileFindHandle_t */
	virtual void FindFileAbsoluteList(class IFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const char  *, const char  *); /* linkage=_ZN11IFileSystem20FindFileAbsoluteListER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPKcS7_ */
	virtual bool FullPathToRelativePath(class IFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem22FullPathToRelativePathEPKcS1_P13CBufferString */
	virtual bool GetCurrentDirectory(class IFileSystem *, class CBufferString *); /* linkage=_ZN11IFileSystem19GetCurrentDirectoryEP13CBufferString */
	virtual FileNameHandle_t FindOrAddFileName(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem17FindOrAddFileNameEPKc */
	virtual bool String(class IFileSystem *, const FileNameHandle_t  &, class CBufferString *); /* linkage=_ZN11IFileSystem6StringERKjP13CBufferString */
	virtual WaitForResourcesHandle_t WaitForResources(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem16WaitForResourcesEPKc */
	virtual bool GetWaitForResourcesProgress(class IFileSystem *, WaitForResourcesHandle_t, float *, bool *); /* linkage=_ZN11IFileSystem27GetWaitForResourcesProgressEiPfPb */
	virtual void CancelWaitForResources(class IFileSystem *, WaitForResourcesHandle_t); /* linkage=_ZN11IFileSystem22CancelWaitForResourcesEi */
	virtual int HintResourceNeed(class IFileSystem *, const char  *, int); /* linkage=_ZN11IFileSystem16HintResourceNeedEPKci */
	virtual bool IsFileImmediatelyAvailable(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem26IsFileImmediatelyAvailableEPKc */
	virtual void GetLocalCopy(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem12GetLocalCopyEPKc */
	virtual void PrintOpenedFiles(class IFileSystem *); /* linkage=_ZN11IFileSystem16PrintOpenedFilesEv */
	virtual void PrintSearchPaths(class IFileSystem *); /* linkage=_ZN11IFileSystem16PrintSearchPathsEv */
	virtual void SetWarningFunc(class IFileSystem *, void (*)(const char  *, ...)); /* linkage=_ZN11IFileSystem14SetWarningFuncEPFvPKczE */
	virtual void SetWarningLevel(class IFileSystem *, enum FileWarningLevel_t); /* linkage=_ZN11IFileSystem15SetWarningLevelE18FileWarningLevel_t */
	virtual void AddLoggingFunc(class IFileSystem *, void (*)(const char  *, const char  *)); /* linkage=_ZN11IFileSystem14AddLoggingFuncEPFvPKcS1_E */
	virtual void RemoveLoggingFunc(class IFileSystem *, FileSystemLoggingFunc_t); /* linkage=_ZN11IFileSystem17RemoveLoggingFuncEPFvPKcS1_E */
	virtual const class FileSystemStatistics  * GetFilesystemStatistics(class IFileSystem *); /* linkage=_ZN11IFileSystem23GetFilesystemStatisticsEv */
	virtual FileHandle_t OpenEx(class IFileSystem *, const char  *, const char  *, unsigned int, const char  *); /* linkage=_ZN11IFileSystem6OpenExEPKcS1_jS1_ */
	virtual int ReadEx(class IFileSystem *, void *, int, int, FileHandle_t); /* linkage=_ZN11IFileSystem6ReadExEPviiS0_ */
	virtual int ReadFileEx(class IFileSystem *, const char  *, const char  *, void * *, bool, bool, int, int, FSAllocFunc_t); /* linkage=_ZN11IFileSystem10ReadFileExEPKcS1_PPvbbiiPFS2_S1_jE */
	virtual FileNameHandle_t FindFileName(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem12FindFileNameEPKc */
	virtual class KeyValues * LoadKeyValues(class IFileSystem *, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN11IFileSystem13LoadKeyValuesENS_22KeyValuesPreloadType_tEPKcS2_ */
	virtual bool LoadKeyValues(class IFileSystem *, class KeyValues &, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN11IFileSystem13LoadKeyValuesER9KeyValuesNS_22KeyValuesPreloadType_tEPKcS4_ */
	virtual bool GetFileTypeForFullPath(class IFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem22GetFileTypeForFullPathEPKcP13CBufferString */
	virtual bool ReadToBuffer(class IFileSystem *, FileHandle_t, class CUtlBuffer &, int, FSAllocFunc_t); /* linkage=_ZN11IFileSystem12ReadToBufferEPvR10CUtlBufferiPFS0_PKcjE */
	virtual bool GetOptimalIOConstraints(class IFileSystem *, FileHandle_t, unsigned int *, unsigned int *, unsigned int *); /* linkage=_ZN11IFileSystem23GetOptimalIOConstraintsEPvPjS1_S1_ */
	virtual void * AllocOptimalReadBuffer(class IFileSystem *, FileHandle_t, unsigned int, unsigned int); /* linkage=_ZN11IFileSystem22AllocOptimalReadBufferEPvjj */
	virtual void FreeOptimalReadBuffer(class IFileSystem *, void *); /* linkage=_ZN11IFileSystem21FreeOptimalReadBufferEPv */
	virtual int GetPathIndex(class IFileSystem *, const FileNameHandle_t  &); /* linkage=_ZN11IFileSystem12GetPathIndexERKj */
	virtual int64 GetPathTime(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem11GetPathTimeEPKcS1_ */
	virtual int GetSearchPathID(class IFileSystem *, class CBufferString *); /* linkage=_ZN11IFileSystem15GetSearchPathIDEP13CBufferString */
	virtual bool AddVPKFile(class IFileSystem *, const char  *, const char  *, enum SearchPathAdd_t); /* linkage=_ZN11IFileSystem10AddVPKFileEPKcS1_15SearchPathAdd_t */
	virtual void RemoveVPKFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem13RemoveVPKFileEPKcS1_ */
	virtual bool IsVPKFileLoaded(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem15IsVPKFileLoadedEPKc */
	virtual void SetIODelayAlarm(class IFileSystem *, float); /* linkage=_ZN11IFileSystem15SetIODelayAlarmEf */
	virtual bool DeleteDirectory(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem15DeleteDirectoryEPKcS1_ */
	virtual bool DeleteDirectoryAndContents_R(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem28DeleteDirectoryAndContents_REPKcS1_b */
	virtual bool IsPathInvalidForFilesystem(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem26IsPathInvalidForFilesystemEPKc */
	virtual void GetAvailableDrives(class IFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN11IFileSystem18GetAvailableDrivesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	virtual class CUtlString ReadLine(class IFileSystem *, FileHandle_t, bool); /* linkage=_ZN11IFileSystem8ReadLineEPvb */
	virtual void GetSearchPathsForPathID(const class IFileSystem  *, const char  *, enum GetSearchPathTypes_t, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZNK11IFileSystem23GetSearchPathsForPathIDEPKc20GetSearchPathTypes_tR10CUtlVectorI10CUtlString10CUtlMemoryIS4_iEE */
	virtual bool MarkContentCorrupt(class IFileSystem *, bool, const char  *, const char  *); /* linkage=_ZN11IFileSystem18MarkContentCorruptEbPKcS1_ */
	virtual void SetContentCorruptionReportingEnabled(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem36SetContentCorruptionReportingEnabledEb */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem41SuppressAsyncFileRequestFlushOnPathChangeEb */
	virtual enum AccesLogWriteResult_t WriteFileAccessLog(class IFileSystem *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem18WriteFileAccessLogEPKcS1_S1_b */
	virtual void ResetProjectPaths(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem17ResetProjectPathsEb */
	virtual void AddProjectPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem14AddProjectPathEPKcS1_ */
	virtual void AddCloudPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem12AddCloudPathEPKcS1_ */
	virtual const char  * GetModPath(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem10GetModPathEPKc */
	virtual const char  * GetSymLink(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10GetSymLinkEPKcS1_ */
	virtual void AddSymLink(class IFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10AddSymLinkEPKcS1_S1_ */
	virtual void RemoveSymLink(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem13RemoveSymLinkEPKcS1_ */
	virtual void ClearSymLinks(class IFileSystem *); /* linkage=_ZN11IFileSystem13ClearSymLinksEv */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > * GetSymLinkReloadQueue(class IFileSystem *); /* linkage=_ZN11IFileSystem21GetSymLinkReloadQueueEv */
	virtual bool GetSearchPath(class IFileSystem *, int, class CUtlString *, class CUtlString *); /* linkage=_ZN11IFileSystem13GetSearchPathEiP10CUtlStringS1_ */
	virtual bool SplitFullPath(class IFileSystem *, const char  *, class CBufferString *, class CBufferString *, class CBufferString *); /* linkage=_ZN11IFileSystem13SplitFullPathEPKcP13CBufferStringS3_S3_ */
	virtual bool GetSearchPathArgs(class IFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem17GetSearchPathArgsEPKcP13CBufferString */
	unsigned int GetOptimalReadSize<unsigned int>(class IFileSystem *, FileHandle_t, unsigned int); /* linkage=_ZN11IFileSystem18GetOptimalReadSizeIjEET_PvS1_ */
	int GetOptimalReadSize<int>(class IFileSystem *, FileHandle_t, int); /* linkage=_ZN11IFileSystem18GetOptimalReadSizeIiEET_PvS1_ */
	class IFileSystem & operator=(class IFileSystem *, class IFileSystem &); /* linkage=_ZN11IFileSystemaSEOS_ */
	class IFileSystem & operator=(class IFileSystem *, const class IFileSystem  &); /* linkage=_ZN11IFileSystemaSERKS_ */
};

// <001F10A4> ../public/filesystem/ifilesystem.h:451
// member functions: 201
// member variables: 2
// vtable entries: 91
// class size: 16
class IFileSystem : public IAppSystem, public IBaseFileSystem {
	/* ../public/filesystem/ifilesystem.h:665 */
	enum KeyValuesPreloadType_t {
		TYPE_VMT = 0,
		TYPE_SOUNDEMITTER = 1,
		TYPE_SOUNDSCAPE = 2,
		TYPE_SOUNDOPERATORS = 3,
		NUM_PRELOAD_TYPES = 4,
	};
	/* ../public/filesystem/ifilesystem.h:742 */
	enum AccesLogWriteResult_t {
		ACCESS_LOG_WRITE_NO_LOG = 0,
		ACCESS_LOG_WRITE_FAILED = 1,
		ACCESS_LOG_WRITE_SUCCESS = 2,
	};
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	/* class IBaseFileSystem <ancestor>; */ /* 8 8 */
	void ~IFileSystem(IFileSystem* );
	void IFileSystem(IFileSystem* , IFileSystem& );
	void IFileSystem(IFileSystem* , const IFileSystem& );
	void IFileSystem(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:464 */
	virtual void AddSearchPath(IFileSystem* , const char* , const char* , SearchPathAdd_t, SearchPathPriority_t, CUtlStringToken);
	/* ../public/filesystem/ifilesystem.h:465 */
	virtual bool RemoveSearchPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:467 */
	virtual SearchPathStateHandle_t SaveSearchPathState(const IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:468 */
	virtual void RestoreSearchPathState(IFileSystem* , SearchPathStateHandle_t);
	/* ../public/filesystem/ifilesystem.h:469 */
	virtual void DestroySearchPathState(IFileSystem* , SearchPathStateHandle_t);
	/* ../public/filesystem/ifilesystem.h:472 */
	virtual void RemoveAllSearchPaths(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:475 */
	virtual void RemoveSearchPaths(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:481 */
	virtual void MarkPathIDByRequestOnly(IFileSystem* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:483 */
	virtual bool IsFileInReadOnlySearchPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:484 */
	virtual void SetSearchPathReadOnly(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:487 */
	virtual const char* RelativePathToFullPath(IFileSystem* , const char* , const char* , CBufferString* , PathTypeFilter_t);
	/* ../public/filesystem/ifilesystem.h:492 */
	virtual bool RelativePathToFullWritePath(IFileSystem* , const char* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:496 */
	virtual bool GetSearchPath(IFileSystem* , const char* , GetSearchPathTypes_t, CBufferString* , int);
	/* ../public/filesystem/ifilesystem.h:497 */
	bool GetSearchPath(IFileSystem* , const char* , CBufferString* , int);
	/* ../public/filesystem/ifilesystem.h:503 */
	bool GetSearchPathHead(IFileSystem* , const char* , CBufferString* , GetSearchPathTypes_t);
	/* ../public/filesystem/ifilesystem.h:509 */
	bool HasSearchPath(IFileSystem* , const char* , GetSearchPathTypes_t);
	/* ../public/filesystem/ifilesystem.h:515 */
	virtual CUtlStringToken GetMergeTokenForPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:517 */
	virtual int GetMergedPaths(IFileSystem* , CUtlStringToken, CBufferString* );
	/* ../public/filesystem/ifilesystem.h:524 */
	virtual bool RemoveFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:527 */
	virtual bool RenameFile(IFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:530 */
	virtual bool CreateDirHierarchy(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:533 */
	virtual bool CreateDirHierarchyForFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:536 */
	virtual bool IsDirectory(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:538 */
	virtual void FileTimeToString(IFileSystem* , int64, CBufferString* );
	/* ../public/filesystem/ifilesystem.h:544 */
	virtual void SetBufferSize(IFileSystem* , FileHandle_t, unsigned int);
	/* ../public/filesystem/ifilesystem.h:546 */
	virtual bool IsOk(IFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:548 */
	virtual bool EndOfFile(IFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:550 */
	virtual char* ReadLine(IFileSystem* , char* , int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:555 */
	virtual int FPrintf(IFileSystem* , FileHandle_t, const char* , ...);
	/* ../public/filesystem/ifilesystem.h:563 */
	virtual PlatModule_t LoadModule(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:564 */
	virtual void UnloadModule(IFileSystem* , PlatModule_t);
	/* ../public/filesystem/ifilesystem.h:571 */
	virtual const char* FindFirst(IFileSystem* , const char* , FileFindHandle_t* );
	/* ../public/filesystem/ifilesystem.h:572 */
	virtual const char* FindNext(IFileSystem* , FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:573 */
	virtual bool FindIsDirectory(IFileSystem* , const FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:574 */
	virtual void FindClose(IFileSystem* , FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:577 */
	virtual const char* FindFirstEx(IFileSystem* , const char* , const char* , FileFindHandle_t* );
	/* ../public/filesystem/ifilesystem.h:585 */
	virtual void FindFileAbsoluteList(IFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:593 */
	virtual bool FullPathToRelativePath(IFileSystem* , const char* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:596 */
	virtual bool GetCurrentDirectory(IFileSystem* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:602 */
	virtual FileNameHandle_t FindOrAddFileName(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:603 */
	virtual bool String(IFileSystem* , const FileNameHandle_t& , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:611 */
	virtual WaitForResourcesHandle_t WaitForResources(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:615 */
	virtual bool GetWaitForResourcesProgress(IFileSystem* , WaitForResourcesHandle_t, float* , bool* );
	/* ../public/filesystem/ifilesystem.h:617 */
	virtual void CancelWaitForResources(IFileSystem* , WaitForResourcesHandle_t);
	/* ../public/filesystem/ifilesystem.h:621 */
	virtual int HintResourceNeed(IFileSystem* , const char* , int);
	/* ../public/filesystem/ifilesystem.h:623 */
	virtual bool IsFileImmediatelyAvailable(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:626 */
	virtual void GetLocalCopy(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:633 */
	virtual void PrintOpenedFiles(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:634 */
	virtual void PrintSearchPaths(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:637 */
	virtual void SetWarningFunc(IFileSystem* , void (*)(const char* , ...));
	/* ../public/filesystem/ifilesystem.h:638 */
	virtual void SetWarningLevel(IFileSystem* , FileWarningLevel_t);
	/* ../public/filesystem/ifilesystem.h:639 */
	virtual void AddLoggingFunc(IFileSystem* , void (*)(const char* , const char* ));
	/* ../public/filesystem/ifilesystem.h:640 */
	virtual void RemoveLoggingFunc(IFileSystem* , FileSystemLoggingFunc_t);
	/* ../public/filesystem/ifilesystem.h:643 */
	virtual const FileSystemStatistics* GetFilesystemStatistics(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:649 */
	virtual FileHandle_t OpenEx(IFileSystem* , const char* , const char* , unsigned int, const char* );
	/* ../public/filesystem/ifilesystem.h:652 */
	virtual int ReadEx(IFileSystem* , void* , int, int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:653 */
	virtual int ReadFileEx(IFileSystem* , const char* , const char* , void** , bool, bool, int, int, FSAllocFunc_t);
	/* ../public/filesystem/ifilesystem.h:655 */
	virtual FileNameHandle_t FindFileName(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:676 */
	virtual KeyValues* LoadKeyValues(IFileSystem* , KeyValuesPreloadType_t, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:677 */
	virtual bool LoadKeyValues(IFileSystem* , KeyValues& , KeyValuesPreloadType_t, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:679 */
	virtual bool GetFileTypeForFullPath(IFileSystem* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:683 */
	virtual bool ReadToBuffer(IFileSystem* , FileHandle_t, CUtlBuffer& , int, FSAllocFunc_t);
	/* ../public/filesystem/ifilesystem.h:688 */
	virtual bool GetOptimalIOConstraints(IFileSystem* , FileHandle_t, unsigned int* , unsigned int* , unsigned int* );
	/* ../public/filesystem/ifilesystem.h:690 */
	virtual void* AllocOptimalReadBuffer(IFileSystem* , FileHandle_t, unsigned int, unsigned int);
	/* ../public/filesystem/ifilesystem.h:691 */
	virtual void FreeOptimalReadBuffer(IFileSystem* , void* );
	/* ../public/filesystem/ifilesystem.h:693 */
	virtual int GetPathIndex(IFileSystem* , const FileNameHandle_t& );
	/* ../public/filesystem/ifilesystem.h:694 */
	virtual int64 GetPathTime(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:696 */
	virtual int GetSearchPathID(IFileSystem* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:698 */
	virtual bool AddVPKFile(IFileSystem* , const char* , const char* , SearchPathAdd_t);
	/* ../public/filesystem/ifilesystem.h:699 */
	virtual void RemoveVPKFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:700 */
	virtual bool IsVPKFileLoaded(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:705 */
	virtual void SetIODelayAlarm(IFileSystem* , float);
	/* ../public/filesystem/ifilesystem.h:708 */
	virtual bool DeleteDirectory(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:711 */
	virtual bool DeleteDirectoryAndContents_R(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:719 */
	virtual bool IsPathInvalidForFilesystem(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:721 */
	virtual void GetAvailableDrives(IFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/filesystem/ifilesystem.h:727 */
	virtual CUtlString ReadLine(IFileSystem* , FileHandle_t, bool);
	/* ../public/filesystem/ifilesystem.h:730 */
	virtual void GetSearchPathsForPathID(const IFileSystem* , const char* , GetSearchPathTypes_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/filesystem/ifilesystem.h:734 */
	virtual bool MarkContentCorrupt(IFileSystem* , bool, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:737 */
	virtual void SetContentCorruptionReportingEnabled(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:740 */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:748 */
	virtual AccesLogWriteResult_t WriteFileAccessLog(IFileSystem* , const char* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:754 */
	virtual void ResetProjectPaths(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:755 */
	virtual void AddProjectPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:756 */
	virtual void AddCloudPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:758 */
	virtual const char* GetModPath(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:759 */
	virtual const char* GetSymLink(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:760 */
	virtual void AddSymLink(IFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:761 */
	virtual void RemoveSymLink(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:762 */
	virtual void ClearSymLinks(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:763 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* GetSymLinkReloadQueue(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:764 */
	virtual bool GetSearchPath(IFileSystem* , int, CUtlString* , CUtlString* );
	/* ../public/filesystem/ifilesystem.h:765 */
	virtual bool SplitFullPath(IFileSystem* , const char* , CBufferString* , CBufferString* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:766 */
	virtual bool GetSearchPathArgs(IFileSystem* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:841 */
	unsigned int GetOptimalReadSize<unsigned int>(IFileSystem* , FileHandle_t, unsigned int);
	void ~IFileSystem(class IFileSystem *); /* linkage=_ZN11IFileSystemD4Ev */
	void IFileSystem(class IFileSystem *, class IFileSystem &); /* linkage=_ZN11IFileSystemC4EOS_ */
	void IFileSystem(class IFileSystem *, const class IFileSystem  &); /* linkage=_ZN11IFileSystemC4ERKS_ */
	void IFileSystem(class IFileSystem *); /* linkage=_ZN11IFileSystemC4Ev */
	virtual void AddSearchPath(class IFileSystem *, const char  *, const char  *, enum SearchPathAdd_t, enum SearchPathPriority_t, class CUtlStringToken); /* linkage=_ZN11IFileSystem13AddSearchPathEPKcS1_15SearchPathAdd_t20SearchPathPriority_t15CUtlStringToken */
	virtual bool RemoveSearchPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem16RemoveSearchPathEPKcS1_ */
	virtual SearchPathStateHandle_t SaveSearchPathState(const class IFileSystem  *, const char  *); /* linkage=_ZNK11IFileSystem19SaveSearchPathStateEPKc */
	virtual void RestoreSearchPathState(class IFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN11IFileSystem22RestoreSearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void DestroySearchPathState(class IFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN11IFileSystem22DestroySearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void RemoveAllSearchPaths(class IFileSystem *); /* linkage=_ZN11IFileSystem20RemoveAllSearchPathsEv */
	virtual void RemoveSearchPaths(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem17RemoveSearchPathsEPKc */
	virtual void MarkPathIDByRequestOnly(class IFileSystem *, const char  *, bool); /* linkage=_ZN11IFileSystem23MarkPathIDByRequestOnlyEPKcb */
	virtual bool IsFileInReadOnlySearchPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem26IsFileInReadOnlySearchPathEPKcS1_ */
	virtual void SetSearchPathReadOnly(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem21SetSearchPathReadOnlyEPKcS1_b */
	virtual const char  * RelativePathToFullPath(class IFileSystem *, const char  *, const char  *, class CBufferString *, enum PathTypeFilter_t); /* linkage=_ZN11IFileSystem22RelativePathToFullPathEPKcS1_P13CBufferString16PathTypeFilter_t */
	virtual bool RelativePathToFullWritePath(class IFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem27RelativePathToFullWritePathEPKcS1_P13CBufferString */
	virtual bool GetSearchPath(class IFileSystem *, const char  *, enum GetSearchPathTypes_t, class CBufferString *, int); /* linkage=_ZN11IFileSystem13GetSearchPathEPKc20GetSearchPathTypes_tP13CBufferStringi */
	bool GetSearchPath(class IFileSystem *, const char  *, class CBufferString *, int); /* linkage=_ZN11IFileSystem13GetSearchPathEPKcP13CBufferStringi */
	bool GetSearchPathHead(class IFileSystem *, const char  *, class CBufferString *, enum GetSearchPathTypes_t); /* linkage=_ZN11IFileSystem17GetSearchPathHeadEPKcP13CBufferString20GetSearchPathTypes_t */
	bool HasSearchPath(class IFileSystem *, const char  *, enum GetSearchPathTypes_t); /* linkage=_ZN11IFileSystem13HasSearchPathEPKc20GetSearchPathTypes_t */
	virtual class CUtlStringToken GetMergeTokenForPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem20GetMergeTokenForPathEPKcS1_ */
	virtual int GetMergedPaths(class IFileSystem *, class CUtlStringToken, class CBufferString *); /* linkage=_ZN11IFileSystem14GetMergedPathsE15CUtlStringTokenP13CBufferString */
	virtual bool RemoveFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10RemoveFileEPKcS1_ */
	virtual bool RenameFile(class IFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10RenameFileEPKcS1_S1_ */
	virtual bool CreateDirHierarchy(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem18CreateDirHierarchyEPKcS1_ */
	virtual bool CreateDirHierarchyForFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem25CreateDirHierarchyForFileEPKcS1_ */
	virtual bool IsDirectory(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem11IsDirectoryEPKcS1_ */
	virtual void FileTimeToString(class IFileSystem *, int64, class CBufferString *); /* linkage=_ZN11IFileSystem16FileTimeToStringExP13CBufferString */
	virtual void SetBufferSize(class IFileSystem *, FileHandle_t, unsigned int); /* linkage=_ZN11IFileSystem13SetBufferSizeEPvj */
	virtual bool IsOk(class IFileSystem *, FileHandle_t); /* linkage=_ZN11IFileSystem4IsOkEPv */
	virtual bool EndOfFile(class IFileSystem *, FileHandle_t); /* linkage=_ZN11IFileSystem9EndOfFileEPv */
	virtual char * ReadLine(class IFileSystem *, char *, int, FileHandle_t); /* linkage=_ZN11IFileSystem8ReadLineEPciPv */
	virtual int FPrintf(class IFileSystem *, FileHandle_t, const char  *, ...); /* linkage=_ZN11IFileSystem7FPrintfEPvPKcz */
	virtual PlatModule_t LoadModule(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem10LoadModuleEPKcS1_b */
	virtual void UnloadModule(class IFileSystem *, PlatModule_t); /* linkage=_ZN11IFileSystem12UnloadModuleEP13_PlatModule_t */
	virtual const char  * FindFirst(class IFileSystem *, const char  *, class FileFindHandle_t *); /* linkage=_ZN11IFileSystem9FindFirstEPKcP16FileFindHandle_t */
	virtual const char  * FindNext(class IFileSystem *, class FileFindHandle_t &); /* linkage=_ZN11IFileSystem8FindNextER16FileFindHandle_t */
	virtual bool FindIsDirectory(class IFileSystem *, const class FileFindHandle_t  &); /* linkage=_ZN11IFileSystem15FindIsDirectoryERK16FileFindHandle_t */
	virtual void FindClose(class IFileSystem *, class FileFindHandle_t &); /* linkage=_ZN11IFileSystem9FindCloseER16FileFindHandle_t */
	virtual const char  * FindFirstEx(class IFileSystem *, const char  *, const char  *, class FileFindHandle_t *); /* linkage=_ZN11IFileSystem11FindFirstExEPKcS1_P16FileFindHandle_t */
	virtual void FindFileAbsoluteList(class IFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const char  *, const char  *); /* linkage=_ZN11IFileSystem20FindFileAbsoluteListER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPKcS7_ */
	virtual bool FullPathToRelativePath(class IFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem22FullPathToRelativePathEPKcS1_P13CBufferString */
	virtual bool GetCurrentDirectory(class IFileSystem *, class CBufferString *); /* linkage=_ZN11IFileSystem19GetCurrentDirectoryEP13CBufferString */
	virtual FileNameHandle_t FindOrAddFileName(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem17FindOrAddFileNameEPKc */
	virtual bool String(class IFileSystem *, const FileNameHandle_t  &, class CBufferString *); /* linkage=_ZN11IFileSystem6StringERKjP13CBufferString */
	virtual WaitForResourcesHandle_t WaitForResources(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem16WaitForResourcesEPKc */
	virtual bool GetWaitForResourcesProgress(class IFileSystem *, WaitForResourcesHandle_t, float *, bool *); /* linkage=_ZN11IFileSystem27GetWaitForResourcesProgressEiPfPb */
	virtual void CancelWaitForResources(class IFileSystem *, WaitForResourcesHandle_t); /* linkage=_ZN11IFileSystem22CancelWaitForResourcesEi */
	virtual int HintResourceNeed(class IFileSystem *, const char  *, int); /* linkage=_ZN11IFileSystem16HintResourceNeedEPKci */
	virtual bool IsFileImmediatelyAvailable(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem26IsFileImmediatelyAvailableEPKc */
	virtual void GetLocalCopy(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem12GetLocalCopyEPKc */
	virtual void PrintOpenedFiles(class IFileSystem *); /* linkage=_ZN11IFileSystem16PrintOpenedFilesEv */
	virtual void PrintSearchPaths(class IFileSystem *); /* linkage=_ZN11IFileSystem16PrintSearchPathsEv */
	virtual void SetWarningFunc(class IFileSystem *, void (*)(const char  *, ...)); /* linkage=_ZN11IFileSystem14SetWarningFuncEPFvPKczE */
	virtual void SetWarningLevel(class IFileSystem *, enum FileWarningLevel_t); /* linkage=_ZN11IFileSystem15SetWarningLevelE18FileWarningLevel_t */
	virtual void AddLoggingFunc(class IFileSystem *, void (*)(const char  *, const char  *)); /* linkage=_ZN11IFileSystem14AddLoggingFuncEPFvPKcS1_E */
	virtual void RemoveLoggingFunc(class IFileSystem *, FileSystemLoggingFunc_t); /* linkage=_ZN11IFileSystem17RemoveLoggingFuncEPFvPKcS1_E */
	virtual const class FileSystemStatistics  * GetFilesystemStatistics(class IFileSystem *); /* linkage=_ZN11IFileSystem23GetFilesystemStatisticsEv */
	virtual FileHandle_t OpenEx(class IFileSystem *, const char  *, const char  *, unsigned int, const char  *); /* linkage=_ZN11IFileSystem6OpenExEPKcS1_jS1_ */
	virtual int ReadEx(class IFileSystem *, void *, int, int, FileHandle_t); /* linkage=_ZN11IFileSystem6ReadExEPviiS0_ */
	virtual int ReadFileEx(class IFileSystem *, const char  *, const char  *, void * *, bool, bool, int, int, FSAllocFunc_t); /* linkage=_ZN11IFileSystem10ReadFileExEPKcS1_PPvbbiiPFS2_S1_jE */
	virtual FileNameHandle_t FindFileName(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem12FindFileNameEPKc */
	virtual class KeyValues * LoadKeyValues(class IFileSystem *, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN11IFileSystem13LoadKeyValuesENS_22KeyValuesPreloadType_tEPKcS2_ */
	virtual bool LoadKeyValues(class IFileSystem *, class KeyValues &, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN11IFileSystem13LoadKeyValuesER9KeyValuesNS_22KeyValuesPreloadType_tEPKcS4_ */
	virtual bool GetFileTypeForFullPath(class IFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem22GetFileTypeForFullPathEPKcP13CBufferString */
	virtual bool ReadToBuffer(class IFileSystem *, FileHandle_t, class CUtlBuffer &, int, FSAllocFunc_t); /* linkage=_ZN11IFileSystem12ReadToBufferEPvR10CUtlBufferiPFS0_PKcjE */
	virtual bool GetOptimalIOConstraints(class IFileSystem *, FileHandle_t, unsigned int *, unsigned int *, unsigned int *); /* linkage=_ZN11IFileSystem23GetOptimalIOConstraintsEPvPjS1_S1_ */
	virtual void * AllocOptimalReadBuffer(class IFileSystem *, FileHandle_t, unsigned int, unsigned int); /* linkage=_ZN11IFileSystem22AllocOptimalReadBufferEPvjj */
	virtual void FreeOptimalReadBuffer(class IFileSystem *, void *); /* linkage=_ZN11IFileSystem21FreeOptimalReadBufferEPv */
	virtual int GetPathIndex(class IFileSystem *, const FileNameHandle_t  &); /* linkage=_ZN11IFileSystem12GetPathIndexERKj */
	virtual int64 GetPathTime(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem11GetPathTimeEPKcS1_ */
	virtual int GetSearchPathID(class IFileSystem *, class CBufferString *); /* linkage=_ZN11IFileSystem15GetSearchPathIDEP13CBufferString */
	virtual bool AddVPKFile(class IFileSystem *, const char  *, const char  *, enum SearchPathAdd_t); /* linkage=_ZN11IFileSystem10AddVPKFileEPKcS1_15SearchPathAdd_t */
	virtual void RemoveVPKFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem13RemoveVPKFileEPKcS1_ */
	virtual bool IsVPKFileLoaded(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem15IsVPKFileLoadedEPKc */
	virtual void SetIODelayAlarm(class IFileSystem *, float); /* linkage=_ZN11IFileSystem15SetIODelayAlarmEf */
	virtual bool DeleteDirectory(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem15DeleteDirectoryEPKcS1_ */
	virtual bool DeleteDirectoryAndContents_R(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem28DeleteDirectoryAndContents_REPKcS1_b */
	virtual bool IsPathInvalidForFilesystem(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem26IsPathInvalidForFilesystemEPKc */
	virtual void GetAvailableDrives(class IFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN11IFileSystem18GetAvailableDrivesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	virtual class CUtlString ReadLine(class IFileSystem *, FileHandle_t, bool); /* linkage=_ZN11IFileSystem8ReadLineEPvb */
	virtual void GetSearchPathsForPathID(const class IFileSystem  *, const char  *, enum GetSearchPathTypes_t, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZNK11IFileSystem23GetSearchPathsForPathIDEPKc20GetSearchPathTypes_tR10CUtlVectorI10CUtlString10CUtlMemoryIS4_iEE */
	virtual bool MarkContentCorrupt(class IFileSystem *, bool, const char  *, const char  *); /* linkage=_ZN11IFileSystem18MarkContentCorruptEbPKcS1_ */
	virtual void SetContentCorruptionReportingEnabled(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem36SetContentCorruptionReportingEnabledEb */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem41SuppressAsyncFileRequestFlushOnPathChangeEb */
	virtual enum AccesLogWriteResult_t WriteFileAccessLog(class IFileSystem *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem18WriteFileAccessLogEPKcS1_S1_b */
	virtual void ResetProjectPaths(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem17ResetProjectPathsEb */
	virtual void AddProjectPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem14AddProjectPathEPKcS1_ */
	virtual void AddCloudPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem12AddCloudPathEPKcS1_ */
	virtual const char  * GetModPath(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem10GetModPathEPKc */
	virtual const char  * GetSymLink(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10GetSymLinkEPKcS1_ */
	virtual void AddSymLink(class IFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10AddSymLinkEPKcS1_S1_ */
	virtual void RemoveSymLink(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem13RemoveSymLinkEPKcS1_ */
	virtual void ClearSymLinks(class IFileSystem *); /* linkage=_ZN11IFileSystem13ClearSymLinksEv */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > * GetSymLinkReloadQueue(class IFileSystem *); /* linkage=_ZN11IFileSystem21GetSymLinkReloadQueueEv */
	virtual bool GetSearchPath(class IFileSystem *, int, class CUtlString *, class CUtlString *); /* linkage=_ZN11IFileSystem13GetSearchPathEiP10CUtlStringS1_ */
	virtual bool SplitFullPath(class IFileSystem *, const char  *, class CBufferString *, class CBufferString *, class CBufferString *); /* linkage=_ZN11IFileSystem13SplitFullPathEPKcP13CBufferStringS3_S3_ */
	virtual bool GetSearchPathArgs(class IFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem17GetSearchPathArgsEPKcP13CBufferString */
	unsigned int GetOptimalReadSize<unsigned int>(class IFileSystem *, FileHandle_t, unsigned int); /* linkage=_ZN11IFileSystem18GetOptimalReadSizeIjEET_PvS1_ */
	int GetOptimalReadSize<int>(class IFileSystem *, FileHandle_t, int); /* linkage=_ZN11IFileSystem18GetOptimalReadSizeIiEET_PvS1_ */
	class IFileSystem & operator=(class IFileSystem *, class IFileSystem &); /* linkage=_ZN11IFileSystemaSEOS_ */
	class IFileSystem & operator=(class IFileSystem *, const class IFileSystem  &); /* linkage=_ZN11IFileSystemaSERKS_ */
};

// <00011A35> ../public/filesystem/ifilesystem.h:451
// member functions: 201
// member variables: 2
// vtable entries: 91
// class size: 16
class IFileSystem : public IAppSystem, public IBaseFileSystem {
	/* ../public/filesystem/ifilesystem.h:665 */
	enum KeyValuesPreloadType_t {
		TYPE_VMT = 0,
		TYPE_SOUNDEMITTER = 1,
		TYPE_SOUNDSCAPE = 2,
		TYPE_SOUNDOPERATORS = 3,
		NUM_PRELOAD_TYPES = 4,
	};
	/* ../public/filesystem/ifilesystem.h:742 */
	enum AccesLogWriteResult_t {
		ACCESS_LOG_WRITE_NO_LOG = 0,
		ACCESS_LOG_WRITE_FAILED = 1,
		ACCESS_LOG_WRITE_SUCCESS = 2,
	};
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	/* class IBaseFileSystem <ancestor>; */ /* 8 8 */
	void ~IFileSystem(IFileSystem* );
	void IFileSystem(IFileSystem* , IFileSystem& );
	void IFileSystem(IFileSystem* , const IFileSystem& );
	void IFileSystem(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:464 */
	virtual void AddSearchPath(IFileSystem* , const char* , const char* , SearchPathAdd_t, SearchPathPriority_t, CUtlStringToken);
	/* ../public/filesystem/ifilesystem.h:465 */
	virtual bool RemoveSearchPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:467 */
	virtual SearchPathStateHandle_t SaveSearchPathState(const IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:468 */
	virtual void RestoreSearchPathState(IFileSystem* , SearchPathStateHandle_t);
	/* ../public/filesystem/ifilesystem.h:469 */
	virtual void DestroySearchPathState(IFileSystem* , SearchPathStateHandle_t);
	/* ../public/filesystem/ifilesystem.h:472 */
	virtual void RemoveAllSearchPaths(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:475 */
	virtual void RemoveSearchPaths(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:481 */
	virtual void MarkPathIDByRequestOnly(IFileSystem* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:483 */
	virtual bool IsFileInReadOnlySearchPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:484 */
	virtual void SetSearchPathReadOnly(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:487 */
	virtual const char* RelativePathToFullPath(IFileSystem* , const char* , const char* , CBufferString* , PathTypeFilter_t);
	/* ../public/filesystem/ifilesystem.h:492 */
	virtual bool RelativePathToFullWritePath(IFileSystem* , const char* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:496 */
	virtual bool GetSearchPath(IFileSystem* , const char* , GetSearchPathTypes_t, CBufferString* , int);
	/* ../public/filesystem/ifilesystem.h:497 */
	bool GetSearchPath(IFileSystem* , const char* , CBufferString* , int);
	/* ../public/filesystem/ifilesystem.h:503 */
	bool GetSearchPathHead(IFileSystem* , const char* , CBufferString* , GetSearchPathTypes_t);
	/* ../public/filesystem/ifilesystem.h:509 */
	bool HasSearchPath(IFileSystem* , const char* , GetSearchPathTypes_t);
	/* ../public/filesystem/ifilesystem.h:515 */
	virtual CUtlStringToken GetMergeTokenForPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:517 */
	virtual int GetMergedPaths(IFileSystem* , CUtlStringToken, CBufferString* );
	/* ../public/filesystem/ifilesystem.h:524 */
	virtual bool RemoveFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:527 */
	virtual bool RenameFile(IFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:530 */
	virtual bool CreateDirHierarchy(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:533 */
	virtual bool CreateDirHierarchyForFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:536 */
	virtual bool IsDirectory(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:538 */
	virtual void FileTimeToString(IFileSystem* , int64, CBufferString* );
	/* ../public/filesystem/ifilesystem.h:544 */
	virtual void SetBufferSize(IFileSystem* , FileHandle_t, unsigned int);
	/* ../public/filesystem/ifilesystem.h:546 */
	virtual bool IsOk(IFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:548 */
	virtual bool EndOfFile(IFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:550 */
	virtual char* ReadLine(IFileSystem* , char* , int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:555 */
	virtual int FPrintf(IFileSystem* , FileHandle_t, const char* , ...);
	/* ../public/filesystem/ifilesystem.h:563 */
	virtual PlatModule_t LoadModule(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:564 */
	virtual void UnloadModule(IFileSystem* , PlatModule_t);
	/* ../public/filesystem/ifilesystem.h:571 */
	virtual const char* FindFirst(IFileSystem* , const char* , FileFindHandle_t* );
	/* ../public/filesystem/ifilesystem.h:572 */
	virtual const char* FindNext(IFileSystem* , FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:573 */
	virtual bool FindIsDirectory(IFileSystem* , const FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:574 */
	virtual void FindClose(IFileSystem* , FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:577 */
	virtual const char* FindFirstEx(IFileSystem* , const char* , const char* , FileFindHandle_t* );
	/* ../public/filesystem/ifilesystem.h:585 */
	virtual void FindFileAbsoluteList(IFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:593 */
	virtual bool FullPathToRelativePath(IFileSystem* , const char* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:596 */
	virtual bool GetCurrentDirectory(IFileSystem* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:602 */
	virtual FileNameHandle_t FindOrAddFileName(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:603 */
	virtual bool String(IFileSystem* , const FileNameHandle_t& , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:611 */
	virtual WaitForResourcesHandle_t WaitForResources(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:615 */
	virtual bool GetWaitForResourcesProgress(IFileSystem* , WaitForResourcesHandle_t, float* , bool* );
	/* ../public/filesystem/ifilesystem.h:617 */
	virtual void CancelWaitForResources(IFileSystem* , WaitForResourcesHandle_t);
	/* ../public/filesystem/ifilesystem.h:621 */
	virtual int HintResourceNeed(IFileSystem* , const char* , int);
	/* ../public/filesystem/ifilesystem.h:623 */
	virtual bool IsFileImmediatelyAvailable(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:626 */
	virtual void GetLocalCopy(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:633 */
	virtual void PrintOpenedFiles(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:634 */
	virtual void PrintSearchPaths(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:637 */
	virtual void SetWarningFunc(IFileSystem* , void (*)(const char* , ...));
	/* ../public/filesystem/ifilesystem.h:638 */
	virtual void SetWarningLevel(IFileSystem* , FileWarningLevel_t);
	/* ../public/filesystem/ifilesystem.h:639 */
	virtual void AddLoggingFunc(IFileSystem* , void (*)(const char* , const char* ));
	/* ../public/filesystem/ifilesystem.h:640 */
	virtual void RemoveLoggingFunc(IFileSystem* , FileSystemLoggingFunc_t);
	/* ../public/filesystem/ifilesystem.h:643 */
	virtual const FileSystemStatistics* GetFilesystemStatistics(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:649 */
	virtual FileHandle_t OpenEx(IFileSystem* , const char* , const char* , unsigned int, const char* );
	/* ../public/filesystem/ifilesystem.h:652 */
	virtual int ReadEx(IFileSystem* , void* , int, int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:653 */
	virtual int ReadFileEx(IFileSystem* , const char* , const char* , void** , bool, bool, int, int, FSAllocFunc_t);
	/* ../public/filesystem/ifilesystem.h:655 */
	virtual FileNameHandle_t FindFileName(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:676 */
	virtual KeyValues* LoadKeyValues(IFileSystem* , KeyValuesPreloadType_t, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:677 */
	virtual bool LoadKeyValues(IFileSystem* , KeyValues& , KeyValuesPreloadType_t, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:679 */
	virtual bool GetFileTypeForFullPath(IFileSystem* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:683 */
	virtual bool ReadToBuffer(IFileSystem* , FileHandle_t, CUtlBuffer& , int, FSAllocFunc_t);
	/* ../public/filesystem/ifilesystem.h:688 */
	virtual bool GetOptimalIOConstraints(IFileSystem* , FileHandle_t, unsigned int* , unsigned int* , unsigned int* );
	/* ../public/filesystem/ifilesystem.h:690 */
	virtual void* AllocOptimalReadBuffer(IFileSystem* , FileHandle_t, unsigned int, unsigned int);
	/* ../public/filesystem/ifilesystem.h:691 */
	virtual void FreeOptimalReadBuffer(IFileSystem* , void* );
	/* ../public/filesystem/ifilesystem.h:693 */
	virtual int GetPathIndex(IFileSystem* , const FileNameHandle_t& );
	/* ../public/filesystem/ifilesystem.h:694 */
	virtual int64 GetPathTime(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:696 */
	virtual int GetSearchPathID(IFileSystem* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:698 */
	virtual bool AddVPKFile(IFileSystem* , const char* , const char* , SearchPathAdd_t);
	/* ../public/filesystem/ifilesystem.h:699 */
	virtual void RemoveVPKFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:700 */
	virtual bool IsVPKFileLoaded(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:705 */
	virtual void SetIODelayAlarm(IFileSystem* , float);
	/* ../public/filesystem/ifilesystem.h:708 */
	virtual bool DeleteDirectory(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:711 */
	virtual bool DeleteDirectoryAndContents_R(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:719 */
	virtual bool IsPathInvalidForFilesystem(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:721 */
	virtual void GetAvailableDrives(IFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/filesystem/ifilesystem.h:727 */
	virtual CUtlString ReadLine(IFileSystem* , FileHandle_t, bool);
	/* ../public/filesystem/ifilesystem.h:730 */
	virtual void GetSearchPathsForPathID(const IFileSystem* , const char* , GetSearchPathTypes_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/filesystem/ifilesystem.h:734 */
	virtual bool MarkContentCorrupt(IFileSystem* , bool, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:737 */
	virtual void SetContentCorruptionReportingEnabled(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:740 */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:748 */
	virtual AccesLogWriteResult_t WriteFileAccessLog(IFileSystem* , const char* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:754 */
	virtual void ResetProjectPaths(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:755 */
	virtual void AddProjectPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:756 */
	virtual void AddCloudPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:758 */
	virtual const char* GetModPath(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:759 */
	virtual const char* GetSymLink(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:760 */
	virtual void AddSymLink(IFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:761 */
	virtual void RemoveSymLink(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:762 */
	virtual void ClearSymLinks(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:763 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* GetSymLinkReloadQueue(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:764 */
	virtual bool GetSearchPath(IFileSystem* , int, CUtlString* , CUtlString* );
	/* ../public/filesystem/ifilesystem.h:765 */
	virtual bool SplitFullPath(IFileSystem* , const char* , CBufferString* , CBufferString* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:766 */
	virtual bool GetSearchPathArgs(IFileSystem* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:841 */
	int GetOptimalReadSize<int>(IFileSystem* , FileHandle_t, int);
	void ~IFileSystem(class IFileSystem *); /* linkage=_ZN11IFileSystemD4Ev */
	void IFileSystem(class IFileSystem *, class IFileSystem &); /* linkage=_ZN11IFileSystemC4EOS_ */
	void IFileSystem(class IFileSystem *, const class IFileSystem  &); /* linkage=_ZN11IFileSystemC4ERKS_ */
	void IFileSystem(class IFileSystem *); /* linkage=_ZN11IFileSystemC4Ev */
	virtual void AddSearchPath(class IFileSystem *, const char  *, const char  *, enum SearchPathAdd_t, enum SearchPathPriority_t, class CUtlStringToken); /* linkage=_ZN11IFileSystem13AddSearchPathEPKcS1_15SearchPathAdd_t20SearchPathPriority_t15CUtlStringToken */
	virtual bool RemoveSearchPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem16RemoveSearchPathEPKcS1_ */
	virtual SearchPathStateHandle_t SaveSearchPathState(const class IFileSystem  *, const char  *); /* linkage=_ZNK11IFileSystem19SaveSearchPathStateEPKc */
	virtual void RestoreSearchPathState(class IFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN11IFileSystem22RestoreSearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void DestroySearchPathState(class IFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN11IFileSystem22DestroySearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void RemoveAllSearchPaths(class IFileSystem *); /* linkage=_ZN11IFileSystem20RemoveAllSearchPathsEv */
	virtual void RemoveSearchPaths(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem17RemoveSearchPathsEPKc */
	virtual void MarkPathIDByRequestOnly(class IFileSystem *, const char  *, bool); /* linkage=_ZN11IFileSystem23MarkPathIDByRequestOnlyEPKcb */
	virtual bool IsFileInReadOnlySearchPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem26IsFileInReadOnlySearchPathEPKcS1_ */
	virtual void SetSearchPathReadOnly(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem21SetSearchPathReadOnlyEPKcS1_b */
	virtual const char  * RelativePathToFullPath(class IFileSystem *, const char  *, const char  *, class CBufferString *, enum PathTypeFilter_t); /* linkage=_ZN11IFileSystem22RelativePathToFullPathEPKcS1_P13CBufferString16PathTypeFilter_t */
	virtual bool RelativePathToFullWritePath(class IFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem27RelativePathToFullWritePathEPKcS1_P13CBufferString */
	virtual bool GetSearchPath(class IFileSystem *, const char  *, enum GetSearchPathTypes_t, class CBufferString *, int); /* linkage=_ZN11IFileSystem13GetSearchPathEPKc20GetSearchPathTypes_tP13CBufferStringi */
	bool GetSearchPath(class IFileSystem *, const char  *, class CBufferString *, int); /* linkage=_ZN11IFileSystem13GetSearchPathEPKcP13CBufferStringi */
	bool GetSearchPathHead(class IFileSystem *, const char  *, class CBufferString *, enum GetSearchPathTypes_t); /* linkage=_ZN11IFileSystem17GetSearchPathHeadEPKcP13CBufferString20GetSearchPathTypes_t */
	bool HasSearchPath(class IFileSystem *, const char  *, enum GetSearchPathTypes_t); /* linkage=_ZN11IFileSystem13HasSearchPathEPKc20GetSearchPathTypes_t */
	virtual class CUtlStringToken GetMergeTokenForPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem20GetMergeTokenForPathEPKcS1_ */
	virtual int GetMergedPaths(class IFileSystem *, class CUtlStringToken, class CBufferString *); /* linkage=_ZN11IFileSystem14GetMergedPathsE15CUtlStringTokenP13CBufferString */
	virtual bool RemoveFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10RemoveFileEPKcS1_ */
	virtual bool RenameFile(class IFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10RenameFileEPKcS1_S1_ */
	virtual bool CreateDirHierarchy(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem18CreateDirHierarchyEPKcS1_ */
	virtual bool CreateDirHierarchyForFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem25CreateDirHierarchyForFileEPKcS1_ */
	virtual bool IsDirectory(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem11IsDirectoryEPKcS1_ */
	virtual void FileTimeToString(class IFileSystem *, int64, class CBufferString *); /* linkage=_ZN11IFileSystem16FileTimeToStringExP13CBufferString */
	virtual void SetBufferSize(class IFileSystem *, FileHandle_t, unsigned int); /* linkage=_ZN11IFileSystem13SetBufferSizeEPvj */
	virtual bool IsOk(class IFileSystem *, FileHandle_t); /* linkage=_ZN11IFileSystem4IsOkEPv */
	virtual bool EndOfFile(class IFileSystem *, FileHandle_t); /* linkage=_ZN11IFileSystem9EndOfFileEPv */
	virtual char * ReadLine(class IFileSystem *, char *, int, FileHandle_t); /* linkage=_ZN11IFileSystem8ReadLineEPciPv */
	virtual int FPrintf(class IFileSystem *, FileHandle_t, const char  *, ...); /* linkage=_ZN11IFileSystem7FPrintfEPvPKcz */
	virtual PlatModule_t LoadModule(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem10LoadModuleEPKcS1_b */
	virtual void UnloadModule(class IFileSystem *, PlatModule_t); /* linkage=_ZN11IFileSystem12UnloadModuleEP13_PlatModule_t */
	virtual const char  * FindFirst(class IFileSystem *, const char  *, class FileFindHandle_t *); /* linkage=_ZN11IFileSystem9FindFirstEPKcP16FileFindHandle_t */
	virtual const char  * FindNext(class IFileSystem *, class FileFindHandle_t &); /* linkage=_ZN11IFileSystem8FindNextER16FileFindHandle_t */
	virtual bool FindIsDirectory(class IFileSystem *, const class FileFindHandle_t  &); /* linkage=_ZN11IFileSystem15FindIsDirectoryERK16FileFindHandle_t */
	virtual void FindClose(class IFileSystem *, class FileFindHandle_t &); /* linkage=_ZN11IFileSystem9FindCloseER16FileFindHandle_t */
	virtual const char  * FindFirstEx(class IFileSystem *, const char  *, const char  *, class FileFindHandle_t *); /* linkage=_ZN11IFileSystem11FindFirstExEPKcS1_P16FileFindHandle_t */
	virtual void FindFileAbsoluteList(class IFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const char  *, const char  *); /* linkage=_ZN11IFileSystem20FindFileAbsoluteListER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPKcS7_ */
	virtual bool FullPathToRelativePath(class IFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem22FullPathToRelativePathEPKcS1_P13CBufferString */
	virtual bool GetCurrentDirectory(class IFileSystem *, class CBufferString *); /* linkage=_ZN11IFileSystem19GetCurrentDirectoryEP13CBufferString */
	virtual FileNameHandle_t FindOrAddFileName(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem17FindOrAddFileNameEPKc */
	virtual bool String(class IFileSystem *, const FileNameHandle_t  &, class CBufferString *); /* linkage=_ZN11IFileSystem6StringERKjP13CBufferString */
	virtual WaitForResourcesHandle_t WaitForResources(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem16WaitForResourcesEPKc */
	virtual bool GetWaitForResourcesProgress(class IFileSystem *, WaitForResourcesHandle_t, float *, bool *); /* linkage=_ZN11IFileSystem27GetWaitForResourcesProgressEiPfPb */
	virtual void CancelWaitForResources(class IFileSystem *, WaitForResourcesHandle_t); /* linkage=_ZN11IFileSystem22CancelWaitForResourcesEi */
	virtual int HintResourceNeed(class IFileSystem *, const char  *, int); /* linkage=_ZN11IFileSystem16HintResourceNeedEPKci */
	virtual bool IsFileImmediatelyAvailable(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem26IsFileImmediatelyAvailableEPKc */
	virtual void GetLocalCopy(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem12GetLocalCopyEPKc */
	virtual void PrintOpenedFiles(class IFileSystem *); /* linkage=_ZN11IFileSystem16PrintOpenedFilesEv */
	virtual void PrintSearchPaths(class IFileSystem *); /* linkage=_ZN11IFileSystem16PrintSearchPathsEv */
	virtual void SetWarningFunc(class IFileSystem *, void (*)(const char  *, ...)); /* linkage=_ZN11IFileSystem14SetWarningFuncEPFvPKczE */
	virtual void SetWarningLevel(class IFileSystem *, enum FileWarningLevel_t); /* linkage=_ZN11IFileSystem15SetWarningLevelE18FileWarningLevel_t */
	virtual void AddLoggingFunc(class IFileSystem *, void (*)(const char  *, const char  *)); /* linkage=_ZN11IFileSystem14AddLoggingFuncEPFvPKcS1_E */
	virtual void RemoveLoggingFunc(class IFileSystem *, FileSystemLoggingFunc_t); /* linkage=_ZN11IFileSystem17RemoveLoggingFuncEPFvPKcS1_E */
	virtual const class FileSystemStatistics  * GetFilesystemStatistics(class IFileSystem *); /* linkage=_ZN11IFileSystem23GetFilesystemStatisticsEv */
	virtual FileHandle_t OpenEx(class IFileSystem *, const char  *, const char  *, unsigned int, const char  *); /* linkage=_ZN11IFileSystem6OpenExEPKcS1_jS1_ */
	virtual int ReadEx(class IFileSystem *, void *, int, int, FileHandle_t); /* linkage=_ZN11IFileSystem6ReadExEPviiS0_ */
	virtual int ReadFileEx(class IFileSystem *, const char  *, const char  *, void * *, bool, bool, int, int, FSAllocFunc_t); /* linkage=_ZN11IFileSystem10ReadFileExEPKcS1_PPvbbiiPFS2_S1_jE */
	virtual FileNameHandle_t FindFileName(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem12FindFileNameEPKc */
	virtual class KeyValues * LoadKeyValues(class IFileSystem *, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN11IFileSystem13LoadKeyValuesENS_22KeyValuesPreloadType_tEPKcS2_ */
	virtual bool LoadKeyValues(class IFileSystem *, class KeyValues &, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN11IFileSystem13LoadKeyValuesER9KeyValuesNS_22KeyValuesPreloadType_tEPKcS4_ */
	virtual bool GetFileTypeForFullPath(class IFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem22GetFileTypeForFullPathEPKcP13CBufferString */
	virtual bool ReadToBuffer(class IFileSystem *, FileHandle_t, class CUtlBuffer &, int, FSAllocFunc_t); /* linkage=_ZN11IFileSystem12ReadToBufferEPvR10CUtlBufferiPFS0_PKcjE */
	virtual bool GetOptimalIOConstraints(class IFileSystem *, FileHandle_t, unsigned int *, unsigned int *, unsigned int *); /* linkage=_ZN11IFileSystem23GetOptimalIOConstraintsEPvPjS1_S1_ */
	virtual void * AllocOptimalReadBuffer(class IFileSystem *, FileHandle_t, unsigned int, unsigned int); /* linkage=_ZN11IFileSystem22AllocOptimalReadBufferEPvjj */
	virtual void FreeOptimalReadBuffer(class IFileSystem *, void *); /* linkage=_ZN11IFileSystem21FreeOptimalReadBufferEPv */
	virtual int GetPathIndex(class IFileSystem *, const FileNameHandle_t  &); /* linkage=_ZN11IFileSystem12GetPathIndexERKj */
	virtual int64 GetPathTime(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem11GetPathTimeEPKcS1_ */
	virtual int GetSearchPathID(class IFileSystem *, class CBufferString *); /* linkage=_ZN11IFileSystem15GetSearchPathIDEP13CBufferString */
	virtual bool AddVPKFile(class IFileSystem *, const char  *, const char  *, enum SearchPathAdd_t); /* linkage=_ZN11IFileSystem10AddVPKFileEPKcS1_15SearchPathAdd_t */
	virtual void RemoveVPKFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem13RemoveVPKFileEPKcS1_ */
	virtual bool IsVPKFileLoaded(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem15IsVPKFileLoadedEPKc */
	virtual void SetIODelayAlarm(class IFileSystem *, float); /* linkage=_ZN11IFileSystem15SetIODelayAlarmEf */
	virtual bool DeleteDirectory(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem15DeleteDirectoryEPKcS1_ */
	virtual bool DeleteDirectoryAndContents_R(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem28DeleteDirectoryAndContents_REPKcS1_b */
	virtual bool IsPathInvalidForFilesystem(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem26IsPathInvalidForFilesystemEPKc */
	virtual void GetAvailableDrives(class IFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN11IFileSystem18GetAvailableDrivesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	virtual class CUtlString ReadLine(class IFileSystem *, FileHandle_t, bool); /* linkage=_ZN11IFileSystem8ReadLineEPvb */
	virtual void GetSearchPathsForPathID(const class IFileSystem  *, const char  *, enum GetSearchPathTypes_t, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZNK11IFileSystem23GetSearchPathsForPathIDEPKc20GetSearchPathTypes_tR10CUtlVectorI10CUtlString10CUtlMemoryIS4_iEE */
	virtual bool MarkContentCorrupt(class IFileSystem *, bool, const char  *, const char  *); /* linkage=_ZN11IFileSystem18MarkContentCorruptEbPKcS1_ */
	virtual void SetContentCorruptionReportingEnabled(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem36SetContentCorruptionReportingEnabledEb */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem41SuppressAsyncFileRequestFlushOnPathChangeEb */
	virtual enum AccesLogWriteResult_t WriteFileAccessLog(class IFileSystem *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem18WriteFileAccessLogEPKcS1_S1_b */
	virtual void ResetProjectPaths(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem17ResetProjectPathsEb */
	virtual void AddProjectPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem14AddProjectPathEPKcS1_ */
	virtual void AddCloudPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem12AddCloudPathEPKcS1_ */
	virtual const char  * GetModPath(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem10GetModPathEPKc */
	virtual const char  * GetSymLink(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10GetSymLinkEPKcS1_ */
	virtual void AddSymLink(class IFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10AddSymLinkEPKcS1_S1_ */
	virtual void RemoveSymLink(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem13RemoveSymLinkEPKcS1_ */
	virtual void ClearSymLinks(class IFileSystem *); /* linkage=_ZN11IFileSystem13ClearSymLinksEv */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > * GetSymLinkReloadQueue(class IFileSystem *); /* linkage=_ZN11IFileSystem21GetSymLinkReloadQueueEv */
	virtual bool GetSearchPath(class IFileSystem *, int, class CUtlString *, class CUtlString *); /* linkage=_ZN11IFileSystem13GetSearchPathEiP10CUtlStringS1_ */
	virtual bool SplitFullPath(class IFileSystem *, const char  *, class CBufferString *, class CBufferString *, class CBufferString *); /* linkage=_ZN11IFileSystem13SplitFullPathEPKcP13CBufferStringS3_S3_ */
	virtual bool GetSearchPathArgs(class IFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem17GetSearchPathArgsEPKcP13CBufferString */
	unsigned int GetOptimalReadSize<unsigned int>(class IFileSystem *, FileHandle_t, unsigned int); /* linkage=_ZN11IFileSystem18GetOptimalReadSizeIjEET_PvS1_ */
	int GetOptimalReadSize<int>(class IFileSystem *, FileHandle_t, int); /* linkage=_ZN11IFileSystem18GetOptimalReadSizeIiEET_PvS1_ */
	class IFileSystem & operator=(class IFileSystem *, class IFileSystem &); /* linkage=_ZN11IFileSystemaSEOS_ */
	class IFileSystem & operator=(class IFileSystem *, const class IFileSystem  &); /* linkage=_ZN11IFileSystemaSERKS_ */
};

// <0001BDB8> ../public/filesystem/ifilesystem.h:451
// member functions: 202
// member variables: 2
// vtable entries: 91
// class size: 16
class IFileSystem : public IAppSystem, public IBaseFileSystem {
	/* ../public/filesystem/ifilesystem.h:665 */
	enum KeyValuesPreloadType_t {
		TYPE_VMT = 0,
		TYPE_SOUNDEMITTER = 1,
		TYPE_SOUNDSCAPE = 2,
		TYPE_SOUNDOPERATORS = 3,
		NUM_PRELOAD_TYPES = 4,
	};
	/* ../public/filesystem/ifilesystem.h:742 */
	enum AccesLogWriteResult_t {
		ACCESS_LOG_WRITE_NO_LOG = 0,
		ACCESS_LOG_WRITE_FAILED = 1,
		ACCESS_LOG_WRITE_SUCCESS = 2,
	};
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	/* class IBaseFileSystem <ancestor>; */ /* 8 8 */
	IFileSystem& operator=(IFileSystem* , IFileSystem& );
	IFileSystem& operator=(IFileSystem* , const IFileSystem& );
	void ~IFileSystem(IFileSystem* );
	void IFileSystem(IFileSystem* , IFileSystem& );
	void IFileSystem(IFileSystem* , const IFileSystem& );
	void IFileSystem(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:464 */
	virtual void AddSearchPath(IFileSystem* , const char* , const char* , SearchPathAdd_t, SearchPathPriority_t, CUtlStringToken);
	/* ../public/filesystem/ifilesystem.h:465 */
	virtual bool RemoveSearchPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:467 */
	virtual SearchPathStateHandle_t SaveSearchPathState(const IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:468 */
	virtual void RestoreSearchPathState(IFileSystem* , SearchPathStateHandle_t);
	/* ../public/filesystem/ifilesystem.h:469 */
	virtual void DestroySearchPathState(IFileSystem* , SearchPathStateHandle_t);
	/* ../public/filesystem/ifilesystem.h:472 */
	virtual void RemoveAllSearchPaths(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:475 */
	virtual void RemoveSearchPaths(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:481 */
	virtual void MarkPathIDByRequestOnly(IFileSystem* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:483 */
	virtual bool IsFileInReadOnlySearchPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:484 */
	virtual void SetSearchPathReadOnly(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:487 */
	virtual const char* RelativePathToFullPath(IFileSystem* , const char* , const char* , CBufferString* , PathTypeFilter_t);
	/* ../public/filesystem/ifilesystem.h:492 */
	virtual bool RelativePathToFullWritePath(IFileSystem* , const char* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:496 */
	virtual bool GetSearchPath(IFileSystem* , const char* , GetSearchPathTypes_t, CBufferString* , int);
	/* ../public/filesystem/ifilesystem.h:497 */
	bool GetSearchPath(IFileSystem* , const char* , CBufferString* , int);
	/* ../public/filesystem/ifilesystem.h:503 */
	bool GetSearchPathHead(IFileSystem* , const char* , CBufferString* , GetSearchPathTypes_t);
	/* ../public/filesystem/ifilesystem.h:509 */
	bool HasSearchPath(IFileSystem* , const char* , GetSearchPathTypes_t);
	/* ../public/filesystem/ifilesystem.h:515 */
	virtual CUtlStringToken GetMergeTokenForPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:517 */
	virtual int GetMergedPaths(IFileSystem* , CUtlStringToken, CBufferString* );
	/* ../public/filesystem/ifilesystem.h:524 */
	virtual bool RemoveFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:527 */
	virtual bool RenameFile(IFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:530 */
	virtual bool CreateDirHierarchy(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:533 */
	virtual bool CreateDirHierarchyForFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:536 */
	virtual bool IsDirectory(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:538 */
	virtual void FileTimeToString(IFileSystem* , int64, CBufferString* );
	/* ../public/filesystem/ifilesystem.h:544 */
	virtual void SetBufferSize(IFileSystem* , FileHandle_t, unsigned int);
	/* ../public/filesystem/ifilesystem.h:546 */
	virtual bool IsOk(IFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:548 */
	virtual bool EndOfFile(IFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:550 */
	virtual char* ReadLine(IFileSystem* , char* , int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:555 */
	virtual int FPrintf(IFileSystem* , FileHandle_t, const char* , ...);
	/* ../public/filesystem/ifilesystem.h:563 */
	virtual PlatModule_t LoadModule(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:564 */
	virtual void UnloadModule(IFileSystem* , PlatModule_t);
	/* ../public/filesystem/ifilesystem.h:571 */
	virtual const char* FindFirst(IFileSystem* , const char* , FileFindHandle_t* );
	/* ../public/filesystem/ifilesystem.h:572 */
	virtual const char* FindNext(IFileSystem* , FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:573 */
	virtual bool FindIsDirectory(IFileSystem* , const FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:574 */
	virtual void FindClose(IFileSystem* , FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:577 */
	virtual const char* FindFirstEx(IFileSystem* , const char* , const char* , FileFindHandle_t* );
	/* ../public/filesystem/ifilesystem.h:585 */
	virtual void FindFileAbsoluteList(IFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:593 */
	virtual bool FullPathToRelativePath(IFileSystem* , const char* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:596 */
	virtual bool GetCurrentDirectory(IFileSystem* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:602 */
	virtual FileNameHandle_t FindOrAddFileName(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:603 */
	virtual bool String(IFileSystem* , const FileNameHandle_t& , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:611 */
	virtual WaitForResourcesHandle_t WaitForResources(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:615 */
	virtual bool GetWaitForResourcesProgress(IFileSystem* , WaitForResourcesHandle_t, float* , bool* );
	/* ../public/filesystem/ifilesystem.h:617 */
	virtual void CancelWaitForResources(IFileSystem* , WaitForResourcesHandle_t);
	/* ../public/filesystem/ifilesystem.h:621 */
	virtual int HintResourceNeed(IFileSystem* , const char* , int);
	/* ../public/filesystem/ifilesystem.h:623 */
	virtual bool IsFileImmediatelyAvailable(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:626 */
	virtual void GetLocalCopy(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:633 */
	virtual void PrintOpenedFiles(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:634 */
	virtual void PrintSearchPaths(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:637 */
	virtual void SetWarningFunc(IFileSystem* , void (*)(const char* , ...));
	/* ../public/filesystem/ifilesystem.h:638 */
	virtual void SetWarningLevel(IFileSystem* , FileWarningLevel_t);
	/* ../public/filesystem/ifilesystem.h:639 */
	virtual void AddLoggingFunc(IFileSystem* , void (*)(const char* , const char* ));
	/* ../public/filesystem/ifilesystem.h:640 */
	virtual void RemoveLoggingFunc(IFileSystem* , FileSystemLoggingFunc_t);
	/* ../public/filesystem/ifilesystem.h:643 */
	virtual const FileSystemStatistics* GetFilesystemStatistics(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:649 */
	virtual FileHandle_t OpenEx(IFileSystem* , const char* , const char* , unsigned int, const char* );
	/* ../public/filesystem/ifilesystem.h:652 */
	virtual int ReadEx(IFileSystem* , void* , int, int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:653 */
	virtual int ReadFileEx(IFileSystem* , const char* , const char* , void** , bool, bool, int, int, FSAllocFunc_t);
	/* ../public/filesystem/ifilesystem.h:655 */
	virtual FileNameHandle_t FindFileName(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:676 */
	virtual KeyValues* LoadKeyValues(IFileSystem* , KeyValuesPreloadType_t, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:677 */
	virtual bool LoadKeyValues(IFileSystem* , KeyValues& , KeyValuesPreloadType_t, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:679 */
	virtual bool GetFileTypeForFullPath(IFileSystem* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:683 */
	virtual bool ReadToBuffer(IFileSystem* , FileHandle_t, CUtlBuffer& , int, FSAllocFunc_t);
	/* ../public/filesystem/ifilesystem.h:688 */
	virtual bool GetOptimalIOConstraints(IFileSystem* , FileHandle_t, unsigned int* , unsigned int* , unsigned int* );
	/* ../public/filesystem/ifilesystem.h:690 */
	virtual void* AllocOptimalReadBuffer(IFileSystem* , FileHandle_t, unsigned int, unsigned int);
	/* ../public/filesystem/ifilesystem.h:691 */
	virtual void FreeOptimalReadBuffer(IFileSystem* , void* );
	/* ../public/filesystem/ifilesystem.h:693 */
	virtual int GetPathIndex(IFileSystem* , const FileNameHandle_t& );
	/* ../public/filesystem/ifilesystem.h:694 */
	virtual int64 GetPathTime(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:696 */
	virtual int GetSearchPathID(IFileSystem* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:698 */
	virtual bool AddVPKFile(IFileSystem* , const char* , const char* , SearchPathAdd_t);
	/* ../public/filesystem/ifilesystem.h:699 */
	virtual void RemoveVPKFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:700 */
	virtual bool IsVPKFileLoaded(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:705 */
	virtual void SetIODelayAlarm(IFileSystem* , float);
	/* ../public/filesystem/ifilesystem.h:708 */
	virtual bool DeleteDirectory(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:711 */
	virtual bool DeleteDirectoryAndContents_R(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:719 */
	virtual bool IsPathInvalidForFilesystem(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:721 */
	virtual void GetAvailableDrives(IFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/filesystem/ifilesystem.h:727 */
	virtual CUtlString ReadLine(IFileSystem* , FileHandle_t, bool);
	/* ../public/filesystem/ifilesystem.h:730 */
	virtual void GetSearchPathsForPathID(const IFileSystem* , const char* , GetSearchPathTypes_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/filesystem/ifilesystem.h:734 */
	virtual bool MarkContentCorrupt(IFileSystem* , bool, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:737 */
	virtual void SetContentCorruptionReportingEnabled(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:740 */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:748 */
	virtual AccesLogWriteResult_t WriteFileAccessLog(IFileSystem* , const char* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:754 */
	virtual void ResetProjectPaths(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:755 */
	virtual void AddProjectPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:756 */
	virtual void AddCloudPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:758 */
	virtual const char* GetModPath(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:759 */
	virtual const char* GetSymLink(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:760 */
	virtual void AddSymLink(IFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:761 */
	virtual void RemoveSymLink(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:762 */
	virtual void ClearSymLinks(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:763 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* GetSymLinkReloadQueue(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:764 */
	virtual bool GetSearchPath(IFileSystem* , int, CUtlString* , CUtlString* );
	/* ../public/filesystem/ifilesystem.h:765 */
	virtual bool SplitFullPath(IFileSystem* , const char* , CBufferString* , CBufferString* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:766 */
	virtual bool GetSearchPathArgs(IFileSystem* , const char* , CBufferString* );
	void ~IFileSystem(class IFileSystem *); /* linkage=_ZN11IFileSystemD4Ev */
	void IFileSystem(class IFileSystem *, class IFileSystem &); /* linkage=_ZN11IFileSystemC4EOS_ */
	void IFileSystem(class IFileSystem *, const class IFileSystem  &); /* linkage=_ZN11IFileSystemC4ERKS_ */
	void IFileSystem(class IFileSystem *); /* linkage=_ZN11IFileSystemC4Ev */
	virtual void AddSearchPath(class IFileSystem *, const char  *, const char  *, enum SearchPathAdd_t, enum SearchPathPriority_t, class CUtlStringToken); /* linkage=_ZN11IFileSystem13AddSearchPathEPKcS1_15SearchPathAdd_t20SearchPathPriority_t15CUtlStringToken */
	virtual bool RemoveSearchPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem16RemoveSearchPathEPKcS1_ */
	virtual SearchPathStateHandle_t SaveSearchPathState(const class IFileSystem  *, const char  *); /* linkage=_ZNK11IFileSystem19SaveSearchPathStateEPKc */
	virtual void RestoreSearchPathState(class IFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN11IFileSystem22RestoreSearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void DestroySearchPathState(class IFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN11IFileSystem22DestroySearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void RemoveAllSearchPaths(class IFileSystem *); /* linkage=_ZN11IFileSystem20RemoveAllSearchPathsEv */
	virtual void RemoveSearchPaths(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem17RemoveSearchPathsEPKc */
	virtual void MarkPathIDByRequestOnly(class IFileSystem *, const char  *, bool); /* linkage=_ZN11IFileSystem23MarkPathIDByRequestOnlyEPKcb */
	virtual bool IsFileInReadOnlySearchPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem26IsFileInReadOnlySearchPathEPKcS1_ */
	virtual void SetSearchPathReadOnly(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem21SetSearchPathReadOnlyEPKcS1_b */
	virtual const char  * RelativePathToFullPath(class IFileSystem *, const char  *, const char  *, class CBufferString *, enum PathTypeFilter_t); /* linkage=_ZN11IFileSystem22RelativePathToFullPathEPKcS1_P13CBufferString16PathTypeFilter_t */
	virtual bool RelativePathToFullWritePath(class IFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem27RelativePathToFullWritePathEPKcS1_P13CBufferString */
	virtual bool GetSearchPath(class IFileSystem *, const char  *, enum GetSearchPathTypes_t, class CBufferString *, int); /* linkage=_ZN11IFileSystem13GetSearchPathEPKc20GetSearchPathTypes_tP13CBufferStringi */
	bool GetSearchPath(class IFileSystem *, const char  *, class CBufferString *, int); /* linkage=_ZN11IFileSystem13GetSearchPathEPKcP13CBufferStringi */
	bool GetSearchPathHead(class IFileSystem *, const char  *, class CBufferString *, enum GetSearchPathTypes_t); /* linkage=_ZN11IFileSystem17GetSearchPathHeadEPKcP13CBufferString20GetSearchPathTypes_t */
	bool HasSearchPath(class IFileSystem *, const char  *, enum GetSearchPathTypes_t); /* linkage=_ZN11IFileSystem13HasSearchPathEPKc20GetSearchPathTypes_t */
	virtual class CUtlStringToken GetMergeTokenForPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem20GetMergeTokenForPathEPKcS1_ */
	virtual int GetMergedPaths(class IFileSystem *, class CUtlStringToken, class CBufferString *); /* linkage=_ZN11IFileSystem14GetMergedPathsE15CUtlStringTokenP13CBufferString */
	virtual bool RemoveFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10RemoveFileEPKcS1_ */
	virtual bool RenameFile(class IFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10RenameFileEPKcS1_S1_ */
	virtual bool CreateDirHierarchy(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem18CreateDirHierarchyEPKcS1_ */
	virtual bool CreateDirHierarchyForFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem25CreateDirHierarchyForFileEPKcS1_ */
	virtual bool IsDirectory(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem11IsDirectoryEPKcS1_ */
	virtual void FileTimeToString(class IFileSystem *, int64, class CBufferString *); /* linkage=_ZN11IFileSystem16FileTimeToStringExP13CBufferString */
	virtual void SetBufferSize(class IFileSystem *, FileHandle_t, unsigned int); /* linkage=_ZN11IFileSystem13SetBufferSizeEPvj */
	virtual bool IsOk(class IFileSystem *, FileHandle_t); /* linkage=_ZN11IFileSystem4IsOkEPv */
	virtual bool EndOfFile(class IFileSystem *, FileHandle_t); /* linkage=_ZN11IFileSystem9EndOfFileEPv */
	virtual char * ReadLine(class IFileSystem *, char *, int, FileHandle_t); /* linkage=_ZN11IFileSystem8ReadLineEPciPv */
	virtual int FPrintf(class IFileSystem *, FileHandle_t, const char  *, ...); /* linkage=_ZN11IFileSystem7FPrintfEPvPKcz */
	virtual PlatModule_t LoadModule(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem10LoadModuleEPKcS1_b */
	virtual void UnloadModule(class IFileSystem *, PlatModule_t); /* linkage=_ZN11IFileSystem12UnloadModuleEP13_PlatModule_t */
	virtual const char  * FindFirst(class IFileSystem *, const char  *, class FileFindHandle_t *); /* linkage=_ZN11IFileSystem9FindFirstEPKcP16FileFindHandle_t */
	virtual const char  * FindNext(class IFileSystem *, class FileFindHandle_t &); /* linkage=_ZN11IFileSystem8FindNextER16FileFindHandle_t */
	virtual bool FindIsDirectory(class IFileSystem *, const class FileFindHandle_t  &); /* linkage=_ZN11IFileSystem15FindIsDirectoryERK16FileFindHandle_t */
	virtual void FindClose(class IFileSystem *, class FileFindHandle_t &); /* linkage=_ZN11IFileSystem9FindCloseER16FileFindHandle_t */
	virtual const char  * FindFirstEx(class IFileSystem *, const char  *, const char  *, class FileFindHandle_t *); /* linkage=_ZN11IFileSystem11FindFirstExEPKcS1_P16FileFindHandle_t */
	virtual void FindFileAbsoluteList(class IFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const char  *, const char  *); /* linkage=_ZN11IFileSystem20FindFileAbsoluteListER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPKcS7_ */
	virtual bool FullPathToRelativePath(class IFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem22FullPathToRelativePathEPKcS1_P13CBufferString */
	virtual bool GetCurrentDirectory(class IFileSystem *, class CBufferString *); /* linkage=_ZN11IFileSystem19GetCurrentDirectoryEP13CBufferString */
	virtual FileNameHandle_t FindOrAddFileName(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem17FindOrAddFileNameEPKc */
	virtual bool String(class IFileSystem *, const FileNameHandle_t  &, class CBufferString *); /* linkage=_ZN11IFileSystem6StringERKjP13CBufferString */
	virtual WaitForResourcesHandle_t WaitForResources(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem16WaitForResourcesEPKc */
	virtual bool GetWaitForResourcesProgress(class IFileSystem *, WaitForResourcesHandle_t, float *, bool *); /* linkage=_ZN11IFileSystem27GetWaitForResourcesProgressEiPfPb */
	virtual void CancelWaitForResources(class IFileSystem *, WaitForResourcesHandle_t); /* linkage=_ZN11IFileSystem22CancelWaitForResourcesEi */
	virtual int HintResourceNeed(class IFileSystem *, const char  *, int); /* linkage=_ZN11IFileSystem16HintResourceNeedEPKci */
	virtual bool IsFileImmediatelyAvailable(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem26IsFileImmediatelyAvailableEPKc */
	virtual void GetLocalCopy(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem12GetLocalCopyEPKc */
	virtual void PrintOpenedFiles(class IFileSystem *); /* linkage=_ZN11IFileSystem16PrintOpenedFilesEv */
	virtual void PrintSearchPaths(class IFileSystem *); /* linkage=_ZN11IFileSystem16PrintSearchPathsEv */
	virtual void SetWarningFunc(class IFileSystem *, void (*)(const char  *, ...)); /* linkage=_ZN11IFileSystem14SetWarningFuncEPFvPKczE */
	virtual void SetWarningLevel(class IFileSystem *, enum FileWarningLevel_t); /* linkage=_ZN11IFileSystem15SetWarningLevelE18FileWarningLevel_t */
	virtual void AddLoggingFunc(class IFileSystem *, void (*)(const char  *, const char  *)); /* linkage=_ZN11IFileSystem14AddLoggingFuncEPFvPKcS1_E */
	virtual void RemoveLoggingFunc(class IFileSystem *, FileSystemLoggingFunc_t); /* linkage=_ZN11IFileSystem17RemoveLoggingFuncEPFvPKcS1_E */
	virtual const class FileSystemStatistics  * GetFilesystemStatistics(class IFileSystem *); /* linkage=_ZN11IFileSystem23GetFilesystemStatisticsEv */
	virtual FileHandle_t OpenEx(class IFileSystem *, const char  *, const char  *, unsigned int, const char  *); /* linkage=_ZN11IFileSystem6OpenExEPKcS1_jS1_ */
	virtual int ReadEx(class IFileSystem *, void *, int, int, FileHandle_t); /* linkage=_ZN11IFileSystem6ReadExEPviiS0_ */
	virtual int ReadFileEx(class IFileSystem *, const char  *, const char  *, void * *, bool, bool, int, int, FSAllocFunc_t); /* linkage=_ZN11IFileSystem10ReadFileExEPKcS1_PPvbbiiPFS2_S1_jE */
	virtual FileNameHandle_t FindFileName(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem12FindFileNameEPKc */
	virtual class KeyValues * LoadKeyValues(class IFileSystem *, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN11IFileSystem13LoadKeyValuesENS_22KeyValuesPreloadType_tEPKcS2_ */
	virtual bool LoadKeyValues(class IFileSystem *, class KeyValues &, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN11IFileSystem13LoadKeyValuesER9KeyValuesNS_22KeyValuesPreloadType_tEPKcS4_ */
	virtual bool GetFileTypeForFullPath(class IFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem22GetFileTypeForFullPathEPKcP13CBufferString */
	virtual bool ReadToBuffer(class IFileSystem *, FileHandle_t, class CUtlBuffer &, int, FSAllocFunc_t); /* linkage=_ZN11IFileSystem12ReadToBufferEPvR10CUtlBufferiPFS0_PKcjE */
	virtual bool GetOptimalIOConstraints(class IFileSystem *, FileHandle_t, unsigned int *, unsigned int *, unsigned int *); /* linkage=_ZN11IFileSystem23GetOptimalIOConstraintsEPvPjS1_S1_ */
	virtual void * AllocOptimalReadBuffer(class IFileSystem *, FileHandle_t, unsigned int, unsigned int); /* linkage=_ZN11IFileSystem22AllocOptimalReadBufferEPvjj */
	virtual void FreeOptimalReadBuffer(class IFileSystem *, void *); /* linkage=_ZN11IFileSystem21FreeOptimalReadBufferEPv */
	virtual int GetPathIndex(class IFileSystem *, const FileNameHandle_t  &); /* linkage=_ZN11IFileSystem12GetPathIndexERKj */
	virtual int64 GetPathTime(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem11GetPathTimeEPKcS1_ */
	virtual int GetSearchPathID(class IFileSystem *, class CBufferString *); /* linkage=_ZN11IFileSystem15GetSearchPathIDEP13CBufferString */
	virtual bool AddVPKFile(class IFileSystem *, const char  *, const char  *, enum SearchPathAdd_t); /* linkage=_ZN11IFileSystem10AddVPKFileEPKcS1_15SearchPathAdd_t */
	virtual void RemoveVPKFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem13RemoveVPKFileEPKcS1_ */
	virtual bool IsVPKFileLoaded(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem15IsVPKFileLoadedEPKc */
	virtual void SetIODelayAlarm(class IFileSystem *, float); /* linkage=_ZN11IFileSystem15SetIODelayAlarmEf */
	virtual bool DeleteDirectory(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem15DeleteDirectoryEPKcS1_ */
	virtual bool DeleteDirectoryAndContents_R(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem28DeleteDirectoryAndContents_REPKcS1_b */
	virtual bool IsPathInvalidForFilesystem(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem26IsPathInvalidForFilesystemEPKc */
	virtual void GetAvailableDrives(class IFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN11IFileSystem18GetAvailableDrivesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	virtual class CUtlString ReadLine(class IFileSystem *, FileHandle_t, bool); /* linkage=_ZN11IFileSystem8ReadLineEPvb */
	virtual void GetSearchPathsForPathID(const class IFileSystem  *, const char  *, enum GetSearchPathTypes_t, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZNK11IFileSystem23GetSearchPathsForPathIDEPKc20GetSearchPathTypes_tR10CUtlVectorI10CUtlString10CUtlMemoryIS4_iEE */
	virtual bool MarkContentCorrupt(class IFileSystem *, bool, const char  *, const char  *); /* linkage=_ZN11IFileSystem18MarkContentCorruptEbPKcS1_ */
	virtual void SetContentCorruptionReportingEnabled(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem36SetContentCorruptionReportingEnabledEb */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem41SuppressAsyncFileRequestFlushOnPathChangeEb */
	virtual enum AccesLogWriteResult_t WriteFileAccessLog(class IFileSystem *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem18WriteFileAccessLogEPKcS1_S1_b */
	virtual void ResetProjectPaths(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem17ResetProjectPathsEb */
	virtual void AddProjectPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem14AddProjectPathEPKcS1_ */
	virtual void AddCloudPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem12AddCloudPathEPKcS1_ */
	virtual const char  * GetModPath(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem10GetModPathEPKc */
	virtual const char  * GetSymLink(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10GetSymLinkEPKcS1_ */
	virtual void AddSymLink(class IFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10AddSymLinkEPKcS1_S1_ */
	virtual void RemoveSymLink(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem13RemoveSymLinkEPKcS1_ */
	virtual void ClearSymLinks(class IFileSystem *); /* linkage=_ZN11IFileSystem13ClearSymLinksEv */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > * GetSymLinkReloadQueue(class IFileSystem *); /* linkage=_ZN11IFileSystem21GetSymLinkReloadQueueEv */
	virtual bool GetSearchPath(class IFileSystem *, int, class CUtlString *, class CUtlString *); /* linkage=_ZN11IFileSystem13GetSearchPathEiP10CUtlStringS1_ */
	virtual bool SplitFullPath(class IFileSystem *, const char  *, class CBufferString *, class CBufferString *, class CBufferString *); /* linkage=_ZN11IFileSystem13SplitFullPathEPKcP13CBufferStringS3_S3_ */
	virtual bool GetSearchPathArgs(class IFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem17GetSearchPathArgsEPKcP13CBufferString */
	unsigned int GetOptimalReadSize<unsigned int>(class IFileSystem *, FileHandle_t, unsigned int); /* linkage=_ZN11IFileSystem18GetOptimalReadSizeIjEET_PvS1_ */
	int GetOptimalReadSize<int>(class IFileSystem *, FileHandle_t, int); /* linkage=_ZN11IFileSystem18GetOptimalReadSizeIiEET_PvS1_ */
	class IFileSystem & operator=(class IFileSystem *, class IFileSystem &); /* linkage=_ZN11IFileSystemaSEOS_ */
	class IFileSystem & operator=(class IFileSystem *, const class IFileSystem  &); /* linkage=_ZN11IFileSystemaSERKS_ */
};

// <0006DB20> ../public/filesystem/ifilesystem.h:451
// member functions: 203
// member variables: 2
// vtable entries: 91
// class size: 16
class IFileSystem : public IAppSystem, public IBaseFileSystem {
	/* ../public/filesystem/ifilesystem.h:665 */
	enum KeyValuesPreloadType_t {
		TYPE_VMT = 0,
		TYPE_SOUNDEMITTER = 1,
		TYPE_SOUNDSCAPE = 2,
		TYPE_SOUNDOPERATORS = 3,
		NUM_PRELOAD_TYPES = 4,
	};
	/* ../public/filesystem/ifilesystem.h:742 */
	enum AccesLogWriteResult_t {
		ACCESS_LOG_WRITE_NO_LOG = 0,
		ACCESS_LOG_WRITE_FAILED = 1,
		ACCESS_LOG_WRITE_SUCCESS = 2,
	};
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	/* class IBaseFileSystem <ancestor>; */ /* 8 8 */
	IFileSystem& operator=(IFileSystem* , IFileSystem& );
	IFileSystem& operator=(IFileSystem* , const IFileSystem& );
	void ~IFileSystem(IFileSystem* );
	void IFileSystem(IFileSystem* , IFileSystem& );
	void IFileSystem(IFileSystem* , const IFileSystem& );
	void IFileSystem(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:464 */
	virtual void AddSearchPath(IFileSystem* , const char* , const char* , SearchPathAdd_t, SearchPathPriority_t, CUtlStringToken);
	/* ../public/filesystem/ifilesystem.h:465 */
	virtual bool RemoveSearchPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:467 */
	virtual SearchPathStateHandle_t SaveSearchPathState(const IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:468 */
	virtual void RestoreSearchPathState(IFileSystem* , SearchPathStateHandle_t);
	/* ../public/filesystem/ifilesystem.h:469 */
	virtual void DestroySearchPathState(IFileSystem* , SearchPathStateHandle_t);
	/* ../public/filesystem/ifilesystem.h:472 */
	virtual void RemoveAllSearchPaths(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:475 */
	virtual void RemoveSearchPaths(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:481 */
	virtual void MarkPathIDByRequestOnly(IFileSystem* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:483 */
	virtual bool IsFileInReadOnlySearchPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:484 */
	virtual void SetSearchPathReadOnly(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:487 */
	virtual const char* RelativePathToFullPath(IFileSystem* , const char* , const char* , CBufferString* , PathTypeFilter_t);
	/* ../public/filesystem/ifilesystem.h:492 */
	virtual bool RelativePathToFullWritePath(IFileSystem* , const char* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:496 */
	virtual bool GetSearchPath(IFileSystem* , const char* , GetSearchPathTypes_t, CBufferString* , int);
	/* ../public/filesystem/ifilesystem.h:497 */
	bool GetSearchPath(IFileSystem* , const char* , CBufferString* , int);
	/* ../public/filesystem/ifilesystem.h:503 */
	bool GetSearchPathHead(IFileSystem* , const char* , CBufferString* , GetSearchPathTypes_t);
	/* ../public/filesystem/ifilesystem.h:509 */
	bool HasSearchPath(IFileSystem* , const char* , GetSearchPathTypes_t);
	/* ../public/filesystem/ifilesystem.h:515 */
	virtual CUtlStringToken GetMergeTokenForPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:517 */
	virtual int GetMergedPaths(IFileSystem* , CUtlStringToken, CBufferString* );
	/* ../public/filesystem/ifilesystem.h:524 */
	virtual bool RemoveFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:527 */
	virtual bool RenameFile(IFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:530 */
	virtual bool CreateDirHierarchy(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:533 */
	virtual bool CreateDirHierarchyForFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:536 */
	virtual bool IsDirectory(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:538 */
	virtual void FileTimeToString(IFileSystem* , int64, CBufferString* );
	/* ../public/filesystem/ifilesystem.h:544 */
	virtual void SetBufferSize(IFileSystem* , FileHandle_t, unsigned int);
	/* ../public/filesystem/ifilesystem.h:546 */
	virtual bool IsOk(IFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:548 */
	virtual bool EndOfFile(IFileSystem* , FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:550 */
	virtual char* ReadLine(IFileSystem* , char* , int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:555 */
	virtual int FPrintf(IFileSystem* , FileHandle_t, const char* , ...);
	/* ../public/filesystem/ifilesystem.h:563 */
	virtual PlatModule_t LoadModule(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:564 */
	virtual void UnloadModule(IFileSystem* , PlatModule_t);
	/* ../public/filesystem/ifilesystem.h:571 */
	virtual const char* FindFirst(IFileSystem* , const char* , FileFindHandle_t* );
	/* ../public/filesystem/ifilesystem.h:572 */
	virtual const char* FindNext(IFileSystem* , FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:573 */
	virtual bool FindIsDirectory(IFileSystem* , const FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:574 */
	virtual void FindClose(IFileSystem* , FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:577 */
	virtual const char* FindFirstEx(IFileSystem* , const char* , const char* , FileFindHandle_t* );
	/* ../public/filesystem/ifilesystem.h:585 */
	virtual void FindFileAbsoluteList(IFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:593 */
	virtual bool FullPathToRelativePath(IFileSystem* , const char* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:596 */
	virtual bool GetCurrentDirectory(IFileSystem* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:602 */
	virtual FileNameHandle_t FindOrAddFileName(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:603 */
	virtual bool String(IFileSystem* , const FileNameHandle_t& , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:611 */
	virtual WaitForResourcesHandle_t WaitForResources(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:615 */
	virtual bool GetWaitForResourcesProgress(IFileSystem* , WaitForResourcesHandle_t, float* , bool* );
	/* ../public/filesystem/ifilesystem.h:617 */
	virtual void CancelWaitForResources(IFileSystem* , WaitForResourcesHandle_t);
	/* ../public/filesystem/ifilesystem.h:621 */
	virtual int HintResourceNeed(IFileSystem* , const char* , int);
	/* ../public/filesystem/ifilesystem.h:623 */
	virtual bool IsFileImmediatelyAvailable(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:626 */
	virtual void GetLocalCopy(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:633 */
	virtual void PrintOpenedFiles(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:634 */
	virtual void PrintSearchPaths(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:637 */
	virtual void SetWarningFunc(IFileSystem* , void (*)(const char* , ...));
	/* ../public/filesystem/ifilesystem.h:638 */
	virtual void SetWarningLevel(IFileSystem* , FileWarningLevel_t);
	/* ../public/filesystem/ifilesystem.h:639 */
	virtual void AddLoggingFunc(IFileSystem* , void (*)(const char* , const char* ));
	/* ../public/filesystem/ifilesystem.h:640 */
	virtual void RemoveLoggingFunc(IFileSystem* , FileSystemLoggingFunc_t);
	/* ../public/filesystem/ifilesystem.h:643 */
	virtual const FileSystemStatistics* GetFilesystemStatistics(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:649 */
	virtual FileHandle_t OpenEx(IFileSystem* , const char* , const char* , unsigned int, const char* );
	/* ../public/filesystem/ifilesystem.h:652 */
	virtual int ReadEx(IFileSystem* , void* , int, int, FileHandle_t);
	/* ../public/filesystem/ifilesystem.h:653 */
	virtual int ReadFileEx(IFileSystem* , const char* , const char* , void** , bool, bool, int, int, FSAllocFunc_t);
	/* ../public/filesystem/ifilesystem.h:655 */
	virtual FileNameHandle_t FindFileName(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:676 */
	virtual KeyValues* LoadKeyValues(IFileSystem* , KeyValuesPreloadType_t, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:677 */
	virtual bool LoadKeyValues(IFileSystem* , KeyValues& , KeyValuesPreloadType_t, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:679 */
	virtual bool GetFileTypeForFullPath(IFileSystem* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:683 */
	virtual bool ReadToBuffer(IFileSystem* , FileHandle_t, CUtlBuffer& , int, FSAllocFunc_t);
	/* ../public/filesystem/ifilesystem.h:688 */
	virtual bool GetOptimalIOConstraints(IFileSystem* , FileHandle_t, unsigned int* , unsigned int* , unsigned int* );
	/* ../public/filesystem/ifilesystem.h:690 */
	virtual void* AllocOptimalReadBuffer(IFileSystem* , FileHandle_t, unsigned int, unsigned int);
	/* ../public/filesystem/ifilesystem.h:691 */
	virtual void FreeOptimalReadBuffer(IFileSystem* , void* );
	/* ../public/filesystem/ifilesystem.h:693 */
	virtual int GetPathIndex(IFileSystem* , const FileNameHandle_t& );
	/* ../public/filesystem/ifilesystem.h:694 */
	virtual int64 GetPathTime(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:696 */
	virtual int GetSearchPathID(IFileSystem* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:698 */
	virtual bool AddVPKFile(IFileSystem* , const char* , const char* , SearchPathAdd_t);
	/* ../public/filesystem/ifilesystem.h:699 */
	virtual void RemoveVPKFile(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:700 */
	virtual bool IsVPKFileLoaded(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:705 */
	virtual void SetIODelayAlarm(IFileSystem* , float);
	/* ../public/filesystem/ifilesystem.h:708 */
	virtual bool DeleteDirectory(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:711 */
	virtual bool DeleteDirectoryAndContents_R(IFileSystem* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:719 */
	virtual bool IsPathInvalidForFilesystem(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:721 */
	virtual void GetAvailableDrives(IFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/filesystem/ifilesystem.h:727 */
	virtual CUtlString ReadLine(IFileSystem* , FileHandle_t, bool);
	/* ../public/filesystem/ifilesystem.h:730 */
	virtual void GetSearchPathsForPathID(const IFileSystem* , const char* , GetSearchPathTypes_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/filesystem/ifilesystem.h:734 */
	virtual bool MarkContentCorrupt(IFileSystem* , bool, const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:737 */
	virtual void SetContentCorruptionReportingEnabled(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:740 */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:748 */
	virtual AccesLogWriteResult_t WriteFileAccessLog(IFileSystem* , const char* , const char* , const char* , bool);
	/* ../public/filesystem/ifilesystem.h:754 */
	virtual void ResetProjectPaths(IFileSystem* , bool);
	/* ../public/filesystem/ifilesystem.h:755 */
	virtual void AddProjectPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:756 */
	virtual void AddCloudPath(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:758 */
	virtual const char* GetModPath(IFileSystem* , const char* );
	/* ../public/filesystem/ifilesystem.h:759 */
	virtual const char* GetSymLink(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:760 */
	virtual void AddSymLink(IFileSystem* , const char* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:761 */
	virtual void RemoveSymLink(IFileSystem* , const char* , const char* );
	/* ../public/filesystem/ifilesystem.h:762 */
	virtual void ClearSymLinks(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:763 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* GetSymLinkReloadQueue(IFileSystem* );
	/* ../public/filesystem/ifilesystem.h:764 */
	virtual bool GetSearchPath(IFileSystem* , int, CUtlString* , CUtlString* );
	/* ../public/filesystem/ifilesystem.h:765 */
	virtual bool SplitFullPath(IFileSystem* , const char* , CBufferString* , CBufferString* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:766 */
	virtual bool GetSearchPathArgs(IFileSystem* , const char* , CBufferString* );
	/* ../public/filesystem/ifilesystem.h:841 */
	int GetOptimalReadSize<int>(IFileSystem* , FileHandle_t, int);
	void ~IFileSystem(class IFileSystem *); /* linkage=_ZN11IFileSystemD4Ev */
	void IFileSystem(class IFileSystem *, class IFileSystem &); /* linkage=_ZN11IFileSystemC4EOS_ */
	void IFileSystem(class IFileSystem *, const class IFileSystem  &); /* linkage=_ZN11IFileSystemC4ERKS_ */
	void IFileSystem(class IFileSystem *); /* linkage=_ZN11IFileSystemC4Ev */
	virtual void AddSearchPath(class IFileSystem *, const char  *, const char  *, enum SearchPathAdd_t, enum SearchPathPriority_t, class CUtlStringToken); /* linkage=_ZN11IFileSystem13AddSearchPathEPKcS1_15SearchPathAdd_t20SearchPathPriority_t15CUtlStringToken */
	virtual bool RemoveSearchPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem16RemoveSearchPathEPKcS1_ */
	virtual SearchPathStateHandle_t SaveSearchPathState(const class IFileSystem  *, const char  *); /* linkage=_ZNK11IFileSystem19SaveSearchPathStateEPKc */
	virtual void RestoreSearchPathState(class IFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN11IFileSystem22RestoreSearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void DestroySearchPathState(class IFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN11IFileSystem22DestroySearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void RemoveAllSearchPaths(class IFileSystem *); /* linkage=_ZN11IFileSystem20RemoveAllSearchPathsEv */
	virtual void RemoveSearchPaths(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem17RemoveSearchPathsEPKc */
	virtual void MarkPathIDByRequestOnly(class IFileSystem *, const char  *, bool); /* linkage=_ZN11IFileSystem23MarkPathIDByRequestOnlyEPKcb */
	virtual bool IsFileInReadOnlySearchPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem26IsFileInReadOnlySearchPathEPKcS1_ */
	virtual void SetSearchPathReadOnly(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem21SetSearchPathReadOnlyEPKcS1_b */
	virtual const char  * RelativePathToFullPath(class IFileSystem *, const char  *, const char  *, class CBufferString *, enum PathTypeFilter_t); /* linkage=_ZN11IFileSystem22RelativePathToFullPathEPKcS1_P13CBufferString16PathTypeFilter_t */
	virtual bool RelativePathToFullWritePath(class IFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem27RelativePathToFullWritePathEPKcS1_P13CBufferString */
	virtual bool GetSearchPath(class IFileSystem *, const char  *, enum GetSearchPathTypes_t, class CBufferString *, int); /* linkage=_ZN11IFileSystem13GetSearchPathEPKc20GetSearchPathTypes_tP13CBufferStringi */
	bool GetSearchPath(class IFileSystem *, const char  *, class CBufferString *, int); /* linkage=_ZN11IFileSystem13GetSearchPathEPKcP13CBufferStringi */
	bool GetSearchPathHead(class IFileSystem *, const char  *, class CBufferString *, enum GetSearchPathTypes_t); /* linkage=_ZN11IFileSystem17GetSearchPathHeadEPKcP13CBufferString20GetSearchPathTypes_t */
	bool HasSearchPath(class IFileSystem *, const char  *, enum GetSearchPathTypes_t); /* linkage=_ZN11IFileSystem13HasSearchPathEPKc20GetSearchPathTypes_t */
	virtual class CUtlStringToken GetMergeTokenForPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem20GetMergeTokenForPathEPKcS1_ */
	virtual int GetMergedPaths(class IFileSystem *, class CUtlStringToken, class CBufferString *); /* linkage=_ZN11IFileSystem14GetMergedPathsE15CUtlStringTokenP13CBufferString */
	virtual bool RemoveFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10RemoveFileEPKcS1_ */
	virtual bool RenameFile(class IFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10RenameFileEPKcS1_S1_ */
	virtual bool CreateDirHierarchy(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem18CreateDirHierarchyEPKcS1_ */
	virtual bool CreateDirHierarchyForFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem25CreateDirHierarchyForFileEPKcS1_ */
	virtual bool IsDirectory(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem11IsDirectoryEPKcS1_ */
	virtual void FileTimeToString(class IFileSystem *, int64, class CBufferString *); /* linkage=_ZN11IFileSystem16FileTimeToStringExP13CBufferString */
	virtual void SetBufferSize(class IFileSystem *, FileHandle_t, unsigned int); /* linkage=_ZN11IFileSystem13SetBufferSizeEPvj */
	virtual bool IsOk(class IFileSystem *, FileHandle_t); /* linkage=_ZN11IFileSystem4IsOkEPv */
	virtual bool EndOfFile(class IFileSystem *, FileHandle_t); /* linkage=_ZN11IFileSystem9EndOfFileEPv */
	virtual char * ReadLine(class IFileSystem *, char *, int, FileHandle_t); /* linkage=_ZN11IFileSystem8ReadLineEPciPv */
	virtual int FPrintf(class IFileSystem *, FileHandle_t, const char  *, ...); /* linkage=_ZN11IFileSystem7FPrintfEPvPKcz */
	virtual PlatModule_t LoadModule(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem10LoadModuleEPKcS1_b */
	virtual void UnloadModule(class IFileSystem *, PlatModule_t); /* linkage=_ZN11IFileSystem12UnloadModuleEP13_PlatModule_t */
	virtual const char  * FindFirst(class IFileSystem *, const char  *, class FileFindHandle_t *); /* linkage=_ZN11IFileSystem9FindFirstEPKcP16FileFindHandle_t */
	virtual const char  * FindNext(class IFileSystem *, class FileFindHandle_t &); /* linkage=_ZN11IFileSystem8FindNextER16FileFindHandle_t */
	virtual bool FindIsDirectory(class IFileSystem *, const class FileFindHandle_t  &); /* linkage=_ZN11IFileSystem15FindIsDirectoryERK16FileFindHandle_t */
	virtual void FindClose(class IFileSystem *, class FileFindHandle_t &); /* linkage=_ZN11IFileSystem9FindCloseER16FileFindHandle_t */
	virtual const char  * FindFirstEx(class IFileSystem *, const char  *, const char  *, class FileFindHandle_t *); /* linkage=_ZN11IFileSystem11FindFirstExEPKcS1_P16FileFindHandle_t */
	virtual void FindFileAbsoluteList(class IFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const char  *, const char  *); /* linkage=_ZN11IFileSystem20FindFileAbsoluteListER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPKcS7_ */
	virtual bool FullPathToRelativePath(class IFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem22FullPathToRelativePathEPKcS1_P13CBufferString */
	virtual bool GetCurrentDirectory(class IFileSystem *, class CBufferString *); /* linkage=_ZN11IFileSystem19GetCurrentDirectoryEP13CBufferString */
	virtual FileNameHandle_t FindOrAddFileName(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem17FindOrAddFileNameEPKc */
	virtual bool String(class IFileSystem *, const FileNameHandle_t  &, class CBufferString *); /* linkage=_ZN11IFileSystem6StringERKjP13CBufferString */
	virtual WaitForResourcesHandle_t WaitForResources(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem16WaitForResourcesEPKc */
	virtual bool GetWaitForResourcesProgress(class IFileSystem *, WaitForResourcesHandle_t, float *, bool *); /* linkage=_ZN11IFileSystem27GetWaitForResourcesProgressEiPfPb */
	virtual void CancelWaitForResources(class IFileSystem *, WaitForResourcesHandle_t); /* linkage=_ZN11IFileSystem22CancelWaitForResourcesEi */
	virtual int HintResourceNeed(class IFileSystem *, const char  *, int); /* linkage=_ZN11IFileSystem16HintResourceNeedEPKci */
	virtual bool IsFileImmediatelyAvailable(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem26IsFileImmediatelyAvailableEPKc */
	virtual void GetLocalCopy(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem12GetLocalCopyEPKc */
	virtual void PrintOpenedFiles(class IFileSystem *); /* linkage=_ZN11IFileSystem16PrintOpenedFilesEv */
	virtual void PrintSearchPaths(class IFileSystem *); /* linkage=_ZN11IFileSystem16PrintSearchPathsEv */
	virtual void SetWarningFunc(class IFileSystem *, void (*)(const char  *, ...)); /* linkage=_ZN11IFileSystem14SetWarningFuncEPFvPKczE */
	virtual void SetWarningLevel(class IFileSystem *, enum FileWarningLevel_t); /* linkage=_ZN11IFileSystem15SetWarningLevelE18FileWarningLevel_t */
	virtual void AddLoggingFunc(class IFileSystem *, void (*)(const char  *, const char  *)); /* linkage=_ZN11IFileSystem14AddLoggingFuncEPFvPKcS1_E */
	virtual void RemoveLoggingFunc(class IFileSystem *, FileSystemLoggingFunc_t); /* linkage=_ZN11IFileSystem17RemoveLoggingFuncEPFvPKcS1_E */
	virtual const class FileSystemStatistics  * GetFilesystemStatistics(class IFileSystem *); /* linkage=_ZN11IFileSystem23GetFilesystemStatisticsEv */
	virtual FileHandle_t OpenEx(class IFileSystem *, const char  *, const char  *, unsigned int, const char  *); /* linkage=_ZN11IFileSystem6OpenExEPKcS1_jS1_ */
	virtual int ReadEx(class IFileSystem *, void *, int, int, FileHandle_t); /* linkage=_ZN11IFileSystem6ReadExEPviiS0_ */
	virtual int ReadFileEx(class IFileSystem *, const char  *, const char  *, void * *, bool, bool, int, int, FSAllocFunc_t); /* linkage=_ZN11IFileSystem10ReadFileExEPKcS1_PPvbbiiPFS2_S1_jE */
	virtual FileNameHandle_t FindFileName(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem12FindFileNameEPKc */
	virtual class KeyValues * LoadKeyValues(class IFileSystem *, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN11IFileSystem13LoadKeyValuesENS_22KeyValuesPreloadType_tEPKcS2_ */
	virtual bool LoadKeyValues(class IFileSystem *, class KeyValues &, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN11IFileSystem13LoadKeyValuesER9KeyValuesNS_22KeyValuesPreloadType_tEPKcS4_ */
	virtual bool GetFileTypeForFullPath(class IFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem22GetFileTypeForFullPathEPKcP13CBufferString */
	virtual bool ReadToBuffer(class IFileSystem *, FileHandle_t, class CUtlBuffer &, int, FSAllocFunc_t); /* linkage=_ZN11IFileSystem12ReadToBufferEPvR10CUtlBufferiPFS0_PKcjE */
	virtual bool GetOptimalIOConstraints(class IFileSystem *, FileHandle_t, unsigned int *, unsigned int *, unsigned int *); /* linkage=_ZN11IFileSystem23GetOptimalIOConstraintsEPvPjS1_S1_ */
	virtual void * AllocOptimalReadBuffer(class IFileSystem *, FileHandle_t, unsigned int, unsigned int); /* linkage=_ZN11IFileSystem22AllocOptimalReadBufferEPvjj */
	virtual void FreeOptimalReadBuffer(class IFileSystem *, void *); /* linkage=_ZN11IFileSystem21FreeOptimalReadBufferEPv */
	virtual int GetPathIndex(class IFileSystem *, const FileNameHandle_t  &); /* linkage=_ZN11IFileSystem12GetPathIndexERKj */
	virtual int64 GetPathTime(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem11GetPathTimeEPKcS1_ */
	virtual int GetSearchPathID(class IFileSystem *, class CBufferString *); /* linkage=_ZN11IFileSystem15GetSearchPathIDEP13CBufferString */
	virtual bool AddVPKFile(class IFileSystem *, const char  *, const char  *, enum SearchPathAdd_t); /* linkage=_ZN11IFileSystem10AddVPKFileEPKcS1_15SearchPathAdd_t */
	virtual void RemoveVPKFile(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem13RemoveVPKFileEPKcS1_ */
	virtual bool IsVPKFileLoaded(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem15IsVPKFileLoadedEPKc */
	virtual void SetIODelayAlarm(class IFileSystem *, float); /* linkage=_ZN11IFileSystem15SetIODelayAlarmEf */
	virtual bool DeleteDirectory(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem15DeleteDirectoryEPKcS1_ */
	virtual bool DeleteDirectoryAndContents_R(class IFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem28DeleteDirectoryAndContents_REPKcS1_b */
	virtual bool IsPathInvalidForFilesystem(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem26IsPathInvalidForFilesystemEPKc */
	virtual void GetAvailableDrives(class IFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN11IFileSystem18GetAvailableDrivesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	virtual class CUtlString ReadLine(class IFileSystem *, FileHandle_t, bool); /* linkage=_ZN11IFileSystem8ReadLineEPvb */
	virtual void GetSearchPathsForPathID(const class IFileSystem  *, const char  *, enum GetSearchPathTypes_t, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZNK11IFileSystem23GetSearchPathsForPathIDEPKc20GetSearchPathTypes_tR10CUtlVectorI10CUtlString10CUtlMemoryIS4_iEE */
	virtual bool MarkContentCorrupt(class IFileSystem *, bool, const char  *, const char  *); /* linkage=_ZN11IFileSystem18MarkContentCorruptEbPKcS1_ */
	virtual void SetContentCorruptionReportingEnabled(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem36SetContentCorruptionReportingEnabledEb */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem41SuppressAsyncFileRequestFlushOnPathChangeEb */
	virtual enum AccesLogWriteResult_t WriteFileAccessLog(class IFileSystem *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN11IFileSystem18WriteFileAccessLogEPKcS1_S1_b */
	virtual void ResetProjectPaths(class IFileSystem *, bool); /* linkage=_ZN11IFileSystem17ResetProjectPathsEb */
	virtual void AddProjectPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem14AddProjectPathEPKcS1_ */
	virtual void AddCloudPath(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem12AddCloudPathEPKcS1_ */
	virtual const char  * GetModPath(class IFileSystem *, const char  *); /* linkage=_ZN11IFileSystem10GetModPathEPKc */
	virtual const char  * GetSymLink(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10GetSymLinkEPKcS1_ */
	virtual void AddSymLink(class IFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN11IFileSystem10AddSymLinkEPKcS1_S1_ */
	virtual void RemoveSymLink(class IFileSystem *, const char  *, const char  *); /* linkage=_ZN11IFileSystem13RemoveSymLinkEPKcS1_ */
	virtual void ClearSymLinks(class IFileSystem *); /* linkage=_ZN11IFileSystem13ClearSymLinksEv */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > * GetSymLinkReloadQueue(class IFileSystem *); /* linkage=_ZN11IFileSystem21GetSymLinkReloadQueueEv */
	virtual bool GetSearchPath(class IFileSystem *, int, class CUtlString *, class CUtlString *); /* linkage=_ZN11IFileSystem13GetSearchPathEiP10CUtlStringS1_ */
	virtual bool SplitFullPath(class IFileSystem *, const char  *, class CBufferString *, class CBufferString *, class CBufferString *); /* linkage=_ZN11IFileSystem13SplitFullPathEPKcP13CBufferStringS3_S3_ */
	virtual bool GetSearchPathArgs(class IFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN11IFileSystem17GetSearchPathArgsEPKcP13CBufferString */
	unsigned int GetOptimalReadSize<unsigned int>(class IFileSystem *, FileHandle_t, unsigned int); /* linkage=_ZN11IFileSystem18GetOptimalReadSizeIjEET_PvS1_ */
	int GetOptimalReadSize<int>(class IFileSystem *, FileHandle_t, int); /* linkage=_ZN11IFileSystem18GetOptimalReadSizeIiEET_PvS1_ */
	class IFileSystem & operator=(class IFileSystem *, class IFileSystem &); /* linkage=_ZN11IFileSystemaSEOS_ */
	class IFileSystem & operator=(class IFileSystem *, const class IFileSystem  &); /* linkage=_ZN11IFileSystemaSERKS_ */
};

// <01353DC7> ../public/filesystem/ifilesystem.h:497
inline void IFileSystem::GetSearchPath(const char* pathID, CBufferString* pPath, int nMaxElements)
{
} /* size: 0 */

// <00EA519D> ../public/filesystem/ifilesystem.h:769
// member functions: 4
// class size: 1
class CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard {
	/* ../public/filesystem/ifilesystem.h:772 */
	void CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard(CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard* );
	/* ../public/filesystem/ifilesystem.h:777 */
	void ~CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard(CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard* );
	void CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard(class CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard *); /* linkage=_ZN52CSuppressAsyncFileRequestFlushOnPathChangeScopeGuardC4Ev */
	void ~CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard(class CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard *); /* linkage=_ZN52CSuppressAsyncFileRequestFlushOnPathChangeScopeGuardD4Ev */
};

// <00F427C0> ../public/filesystem/ifilesystem.h:772
void CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard::CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard()
{
} /* size: 0 */

// <00F427A7> ../public/filesystem/ifilesystem.h:772
inline void CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard::CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard()
{
} /* size: 0 */

// <00F42790> ../public/filesystem/ifilesystem.h:777
void CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard::~CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard()
{
} /* size: 0 */

// <00F42777> ../public/filesystem/ifilesystem.h:777
inline void CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard::~CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard()
{
} /* size: 0 */

// <000958E4> ../public/filesystem/ifilesystem.h:785
// member functions: 7
// member variables: 2
// struct size: 16
struct FileFindHandle_t {
	/* ../public/filesystem/ifilesystem.h:787 */
	void FileFindHandle_t(FileFindHandle_t* );
	/* ../public/filesystem/ifilesystem.h:794 */
	void ~FileFindHandle_t(FileFindHandle_t* );
	/* ../public/filesystem/ifilesystem.h:804 */
	FileFindHandle_t& operator=(FileFindHandle_t* , FileSystemInvalidFindHandle_t);
	/* ../public/filesystem/ifilesystem.h:811 */
	bool operator==(const FileFindHandle_t* , FileSystemInvalidFindHandle_t);
	/* ../public/filesystem/ifilesystem.h:816 */
	bool operator!=(const FileFindHandle_t* , FileSystemInvalidFindHandle_t);
	IFileSystem * m_pFileSystem; /* 0 8 */
	intp m_nFindDataIndex; /* 8 8 */
private:
	/* ../public/filesystem/ifilesystem.h:827 */
	void FileFindHandle_t(FileFindHandle_t* , const FileFindHandle_t& );
	/* ../public/filesystem/ifilesystem.h:828 */
	FileFindHandle_t& operator=(FileFindHandle_t* , const FileHandle_t& );
};

// <06DAB864> ../../public/filesystem/ifilesystem.h:785
// member functions: 7
// member variables: 2
// struct size: 16
struct FileFindHandle_t {
	/* ../../public/filesystem/ifilesystem.h:787 */
	void FileFindHandle_t(FileFindHandle_t* );
	/* ../../public/filesystem/ifilesystem.h:794 */
	void ~FileFindHandle_t(FileFindHandle_t* );
	/* ../../public/filesystem/ifilesystem.h:804 */
	FileFindHandle_t& operator=(FileFindHandle_t* , FileSystemInvalidFindHandle_t);
	/* ../../public/filesystem/ifilesystem.h:811 */
	bool operator==(const FileFindHandle_t* , FileSystemInvalidFindHandle_t);
	/* ../../public/filesystem/ifilesystem.h:816 */
	bool operator!=(const FileFindHandle_t* , FileSystemInvalidFindHandle_t);
	IFileSystem * m_pFileSystem; /* 0 8 */
	intp m_nFindDataIndex; /* 8 8 */
private:
	/* ../../public/filesystem/ifilesystem.h:827 */
	void FileFindHandle_t(FileFindHandle_t* , const FileFindHandle_t& );
	/* ../../public/filesystem/ifilesystem.h:828 */
	FileFindHandle_t& operator=(FileFindHandle_t* , const FileHandle_t& );
};

// <06812807> ../public/filesystem/ifilesystem.h:787
void FileFindHandle_t::FileFindHandle_t()
{
} /* size: 0 */

// <068127EE> ../public/filesystem/ifilesystem.h:787
inline void FileFindHandle_t::FileFindHandle_t()
{
} /* size: 0 */

// <068127D7> ../public/filesystem/ifilesystem.h:794
void FileFindHandle_t::~FileFindHandle_t()
{
} /* size: 0 */

// <068127BE> ../public/filesystem/ifilesystem.h:794
inline void FileFindHandle_t::~FileFindHandle_t()
{
} /* size: 0 */

// <001064C5> ../public/filesystem/ifilesystem.h:804
inline void FileFindHandle_t::operator=(FileSystemInvalidFindHandle_t nInvalidHandle)
{
} /* size: 0 */

// <001064A7> ../public/filesystem/ifilesystem.h:811
inline void FileFindHandle_t::operator==(FileSystemInvalidFindHandle_t)
{
} /* size: 0 */

// <00202F7D> ../public/filesystem/ifilesystem.h:841
// variable: 1
inline void GetOptimalReadSize<unsigned IFileSystem::int>(FileHandle_t hFile, unsigned int nLogicalSize)
{
	uint align; // 843
} /* size: 0, variables: 1 */

// <0004B65F> ../public/filesystem/ifilesystem.h:841
// variable: 1
inline void IFileSystem::GetOptimalReadSize<int>(FileHandle_t hFile, int nLogicalSize)
{
	uint align; // 843
} /* size: 0, variables: 1 */

