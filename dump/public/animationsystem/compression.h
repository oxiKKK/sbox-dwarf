
//
// public/animationsystem/compression.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 863
//	classes: 101
//	struct: 1
//

// <00201F74> ../public/animationsystem/compression.h:34
// member functions: 2
// member variables: 4
// struct size: 8
struct DecodeContainer_t {
	int16 m_nLocalDecoder; /* 0 2 */
	int16 m_nFieldType; /* 2 2 */
	uint16 m_nCount; /* 4 2 */
	uint16 m_nSize; /* 6 2 */
	/* ../public/animationsystem/compression.h:40 */
	const uint16* pElements(const DecodeContainer_t* );
	/* ../public/animationsystem/compression.h:44 */
	const void* pData(const DecodeContainer_t* );
};

// <025DB48D> ../public/animationsystem/compression.h:40
inline void DecodeContainer_t::pElements()
{
} /* size: 0 */

// <025DB46F> ../public/animationsystem/compression.h:44
inline const void* DecodeContainer_t::pData()
{
} /* size: 0 */

// <025DAF98> ../public/animationsystem/compression.h:54
void ICompressorService::ICompressorService()
{
} /* size: 0 */

// <025DAF7B> ../public/animationsystem/compression.h:54
inline void ICompressorService::ICompressorService()
{
} /* size: 0 */

// <0020ECF1> ../public/animationsystem/compression.h:54
// member functions: 22
// member variable: 1
// vtable entries: 8
// class size: 8
class ICompressorService {
	void ICompressorService(ICompressorService* , const ICompressorService& );
	void ICompressorService(ICompressorService* );
	int ()(void) * * _vptr.ICompressorService; /* 0 8 */
	/* ../public/animationsystem/compression.h:58 */
	virtual const char* GetName(const ICompressorService* );
	/* ../public/animationsystem/compression.h:60 */
	virtual const int GetFieldType(const ICompressorService* );
	/* ../public/animationsystem/compression.h:62 */
	virtual const int GetFlags(const ICompressorService* );
	/* ../public/animationsystem/compression.h:64 */
	virtual bool DecodeFrame(const ICompressorService* , const DecodeContainer_t* , int, void* );
	/* ../public/animationsystem/compression.h:66 */
	virtual int DecodeSize(const ICompressorService* , const DecodeContainer_t* );
	/* ../public/animationsystem/compression.h:68 */
	virtual void DeswizzleAndBlendContainer(const ICompressorService* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:70 */
	virtual void DeswizzleContainer(const ICompressorService* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:72 */
	virtual ICompressorService* Instantiate(const ICompressorService* );
	/* ../public/animationsystem/compression.h:75 */
	virtual void ~ICompressorService(ICompressorService* );
	void ICompressorService(class ICompressorService *, const class ICompressorService  &); /* linkage=_ZN18ICompressorServiceC4ERKS_ */
	void ICompressorService(class ICompressorService *); /* linkage=_ZN18ICompressorServiceC4Ev */
	virtual const char  * GetName(const class ICompressorService  *); /* linkage=_ZNK18ICompressorService7GetNameEv */
	virtual const int  GetFieldType(const class ICompressorService  *); /* linkage=_ZNK18ICompressorService12GetFieldTypeEv */
	virtual const int  GetFlags(const class ICompressorService  *); /* linkage=_ZNK18ICompressorService8GetFlagsEv */
	virtual bool DecodeFrame(const class ICompressorService  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK18ICompressorService11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class ICompressorService  *, const class DecodeContainer_t  *); /* linkage=_ZNK18ICompressorService10DecodeSizeEPK17DecodeContainer_t */
	virtual void DeswizzleAndBlendContainer(const class ICompressorService  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK18ICompressorService26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvS8_iPKc */
	virtual void DeswizzleContainer(const class ICompressorService  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK18ICompressorService18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual class ICompressorService * Instantiate(const class ICompressorService  *); /* linkage=_ZNK18ICompressorService11InstantiateEv */
	virtual void ~ICompressorService(class ICompressorService *); /* linkage=_ZN18ICompressorServiceD4Ev */
};

// <00900EBF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:54
// member functions: 22
// member variable: 1
// vtable entries: 8
// class size: 8
class ICompressorService {
	void ICompressorService(ICompressorService* , const ICompressorService& );
	void ICompressorService(ICompressorService* );
	int ()(void) * * _vptr.ICompressorService; /* 0 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:58 */
	virtual const char* GetName(const ICompressorService* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:60 */
	virtual const int GetFieldType(const ICompressorService* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:62 */
	virtual const int GetFlags(const ICompressorService* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:64 */
	virtual bool DecodeFrame(const ICompressorService* , const DecodeContainer_t* , int, void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:66 */
	virtual int DecodeSize(const ICompressorService* , const DecodeContainer_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:68 */
	virtual void DeswizzleAndBlendContainer(const ICompressorService* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:70 */
	virtual void DeswizzleContainer(const ICompressorService* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:72 */
	virtual ICompressorService* Instantiate(const ICompressorService* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:75 */
	virtual void ~ICompressorService(ICompressorService* );
	void ICompressorService(class ICompressorService *, const class ICompressorService  &); /* linkage=_ZN18ICompressorServiceC4ERKS_ */
	void ICompressorService(class ICompressorService *); /* linkage=_ZN18ICompressorServiceC4Ev */
	virtual const char  * GetName(const class ICompressorService  *); /* linkage=_ZNK18ICompressorService7GetNameEv */
	virtual const int  GetFieldType(const class ICompressorService  *); /* linkage=_ZNK18ICompressorService12GetFieldTypeEv */
	virtual const int  GetFlags(const class ICompressorService  *); /* linkage=_ZNK18ICompressorService8GetFlagsEv */
	virtual bool DecodeFrame(const class ICompressorService  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK18ICompressorService11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class ICompressorService  *, const class DecodeContainer_t  *); /* linkage=_ZNK18ICompressorService10DecodeSizeEPK17DecodeContainer_t */
	virtual void DeswizzleAndBlendContainer(const class ICompressorService  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK18ICompressorService26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvS8_iPKc */
	virtual void DeswizzleContainer(const class ICompressorService  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK18ICompressorService18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual class ICompressorService * Instantiate(const class ICompressorService  *); /* linkage=_ZNK18ICompressorService11InstantiateEv */
	virtual void ~ICompressorService(class ICompressorService *); /* linkage=_ZN18ICompressorServiceD4Ev */
};

// <025DB458> ../public/animationsystem/compression.h:75
void ICompressorService::~ICompressorService()
{
} /* size: 0 */

// <025DB428> ../public/animationsystem/compression.h:75
inline void ICompressorService::~ICompressorService()
{
} /* size: 0 */

// <00BA5D20> ../public/animationsystem/compression.h:84
// member functions: 22
// member variables: 3
// static member variables: 2
// class size: 24
class CAnimCompressorRegistry {
	/* ../public/animationsystem/compression.h:88 */
	void RegisterAnimCompressors(void);
	/* ../public/animationsystem/compression.h:106 */
	const ICompressorService* FindCompressor(const char* );
	/* ../public/animationsystem/compression.h:118 */
	const int GetDecoderIndex(const char* );
	/* ../public/animationsystem/compression.h:132 */
	const ICompressorService* GetCompressor(int);
	/* ../public/animationsystem/compression.h:144 */
	void WriteAnimCompressors(CAnimData* );
	/* ../public/animationsystem/compression.h:148 */
	void CAnimCompressorRegistry(CAnimCompressorRegistry* , const char* , ICompressorService* );
private:
	/* ../public/animationsystem/compression.h:165 */
	void CAnimCompressorRegistry(CAnimCompressorRegistry* );
	CAnimCompressorRegistry * m_pNext; /* 0 8 */
	static class CAnimCompressorRegistry * sm_pFirst; /* 0 0 */
	static class CAnimCompressorRegistry * sm_pPrev; /* 0 0 */
	ICompressorService * m_pService; /* 8 8 */
	const char * m_pServiceName; /* 16 8 */
	/* ../public/animationsystem/compression.h:91 */
	void AllocAnimCompressors<Vector4D>(CUtlVector<CCompressedAnim<Vector4D>*, CUtlMemory<CCompressedAnim<Vector4D>*, int> >& , int);
	/* ../public/animationsystem/compression.h:91 */
	void AllocAnimCompressors<Vector2D>(CUtlVector<CCompressedAnim<Vector2D>*, CUtlMemory<CCompressedAnim<Vector2D>*, int> >& , int);
	/* ../public/animationsystem/compression.h:91 */
	void AllocAnimCompressors<Color>(CUtlVector<CCompressedAnim<Color>*, CUtlMemory<CCompressedAnim<Color>*, int> >& , int);
	/* ../public/animationsystem/compression.h:91 */
	void AllocAnimCompressors<bool>(CUtlVector<CCompressedAnim<bool>*, CUtlMemory<CCompressedAnim<bool>*, int> >& , int);
	/* ../public/animationsystem/compression.h:91 */
	void AllocAnimCompressors<int>(CUtlVector<CCompressedAnim<int>*, CUtlMemory<CCompressedAnim<int>*, int> >& , int);
	/* ../public/animationsystem/compression.h:91 */
	void AllocAnimCompressors<Quaternion>(CUtlVector<CCompressedAnim<Quaternion>*, CUtlMemory<CCompressedAnim<Quaternion>*, int> >& , int);
	/* ../public/animationsystem/compression.h:91 */
	void AllocAnimCompressors<Vector>(CUtlVector<CCompressedAnim<Vector>*, CUtlMemory<CCompressedAnim<Vector>*, int> >& , int);
	/* ../public/animationsystem/compression.h:91 */
	void AllocAnimCompressors<float>(CUtlVector<CCompressedAnim<float>*, CUtlMemory<CCompressedAnim<float>*, int> >& , int);
	void RegisterAnimCompressors(void); /* linkage=_ZN23CAnimCompressorRegistry23RegisterAnimCompressorsEv */
	const class ICompressorService  * FindCompressor(const char  *); /* linkage=_ZN23CAnimCompressorRegistry14FindCompressorEPKc */
	/* <25e0c9b> ../public/animationsystem/compression.h:118 */
	const int  GetDecoderIndex(const char  *); /* linkage=_ZN23CAnimCompressorRegistry15GetDecoderIndexEPKc */
	const class ICompressorService  * GetCompressor(int); /* linkage=_ZN23CAnimCompressorRegistry13GetCompressorEi */
	void WriteAnimCompressors(class CAnimData *); /* linkage=_ZN23CAnimCompressorRegistry20WriteAnimCompressorsEP9CAnimData */
	void CAnimCompressorRegistry(class CAnimCompressorRegistry *, const char  *, class ICompressorService *); /* linkage=_ZN23CAnimCompressorRegistryC4EPKcP18ICompressorService */
	void CAnimCompressorRegistry(class CAnimCompressorRegistry *); /* linkage=_ZN23CAnimCompressorRegistryC4Ev */
};

// <02573763> ../public/animationsystem/compression.h:84
// member functions: 14
// member variables: 3
// static member variables: 2
// class size: 24
class CAnimCompressorRegistry {
	/* ../public/animationsystem/compression.h:88 */
	void RegisterAnimCompressors(void);
	/* ../public/animationsystem/compression.h:106 */
	const ICompressorService* FindCompressor(const char* );
	/* ../public/animationsystem/compression.h:118 */
	const int GetDecoderIndex(const char* );
	/* ../public/animationsystem/compression.h:132 */
	const ICompressorService* GetCompressor(int);
	/* ../public/animationsystem/compression.h:144 */
	void WriteAnimCompressors(CAnimData* );
	/* ../public/animationsystem/compression.h:148 */
	void CAnimCompressorRegistry(CAnimCompressorRegistry* , const char* , ICompressorService* );
private:
	/* ../public/animationsystem/compression.h:165 */
	void CAnimCompressorRegistry(CAnimCompressorRegistry* );
	CAnimCompressorRegistry * m_pNext; /* 0 8 */
	static class CAnimCompressorRegistry * sm_pFirst; /* 0 0 */
	static class CAnimCompressorRegistry * sm_pPrev; /* 0 0 */
	ICompressorService * m_pService; /* 8 8 */
	const char * m_pServiceName; /* 16 8 */
	void RegisterAnimCompressors(void); /* linkage=_ZN23CAnimCompressorRegistry23RegisterAnimCompressorsEv */
	const class ICompressorService  * FindCompressor(const char  *); /* linkage=_ZN23CAnimCompressorRegistry14FindCompressorEPKc */
	/* <25e0c9b> ../public/animationsystem/compression.h:118 */
	const int  GetDecoderIndex(const char  *); /* linkage=_ZN23CAnimCompressorRegistry15GetDecoderIndexEPKc */
	const class ICompressorService  * GetCompressor(int); /* linkage=_ZN23CAnimCompressorRegistry13GetCompressorEi */
	void WriteAnimCompressors(class CAnimData *); /* linkage=_ZN23CAnimCompressorRegistry20WriteAnimCompressorsEP9CAnimData */
	void CAnimCompressorRegistry(class CAnimCompressorRegistry *, const char  *, class ICompressorService *); /* linkage=_ZN23CAnimCompressorRegistryC4EPKcP18ICompressorService */
	void CAnimCompressorRegistry(class CAnimCompressorRegistry *); /* linkage=_ZN23CAnimCompressorRegistryC4Ev */
};

// <00C6375B> ../public/animationsystem/compression.h:91
// variables: 4
inline void AllocAnimCompressors<float>(CUtlVector<CCompressedAnim<float>*, CUtlMemory<CCompressedAnim<float>*, int> >& compressor, int nType)
{
	const char   __FUNCTION__; // 22195
	bool bAlloced; // 93
	{
		CAnimCompressorRegistry* pRegistry; // 94
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 103
	}
} /* size: 0, variables: 2 */

// <00C63606> ../public/animationsystem/compression.h:91
// variables: 4
inline void AllocAnimCompressors<Vector>(CUtlVector<CCompressedAnim<Vector>*, CUtlMemory<CCompressedAnim<Vector>*, int> >& compressor, int nType)
{
	const char   __FUNCTION__; // 22195
	bool bAlloced; // 93
	{
		CAnimCompressorRegistry* pRegistry; // 94
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 103
	}
} /* size: 0, variables: 2 */

// <00C634B1> ../public/animationsystem/compression.h:91
// variables: 4
inline void AllocAnimCompressors<Quaternion>(CUtlVector<CCompressedAnim<Quaternion>*, CUtlMemory<CCompressedAnim<Quaternion>*, int> >& compressor, int nType)
{
	const char   __FUNCTION__; // 22195
	bool bAlloced; // 93
	{
		CAnimCompressorRegistry* pRegistry; // 94
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 103
	}
} /* size: 0, variables: 2 */

// <00C6335C> ../public/animationsystem/compression.h:91
// variables: 4
inline void AllocAnimCompressors<int>(CUtlVector<CCompressedAnim<int>*, CUtlMemory<CCompressedAnim<int>*, int> >& compressor, int nType)
{
	const char   __FUNCTION__; // 22195
	bool bAlloced; // 93
	{
		CAnimCompressorRegistry* pRegistry; // 94
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 103
	}
} /* size: 0, variables: 2 */

// <00C63207> ../public/animationsystem/compression.h:91
// variables: 4
inline void AllocAnimCompressors<bool>(CUtlVector<CCompressedAnim<bool>*, CUtlMemory<CCompressedAnim<bool>*, int> >& compressor, int nType)
{
	const char   __FUNCTION__; // 22195
	bool bAlloced; // 93
	{
		CAnimCompressorRegistry* pRegistry; // 94
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 103
	}
} /* size: 0, variables: 2 */

// <00C630B2> ../public/animationsystem/compression.h:91
// variables: 4
inline void AllocAnimCompressors<Color>(CUtlVector<CCompressedAnim<Color>*, CUtlMemory<CCompressedAnim<Color>*, int> >& compressor, int nType)
{
	const char   __FUNCTION__; // 22195
	bool bAlloced; // 93
	{
		CAnimCompressorRegistry* pRegistry; // 94
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 103
	}
} /* size: 0, variables: 2 */

// <00C62F5D> ../public/animationsystem/compression.h:91
// variables: 4
inline void AllocAnimCompressors<Vector2D>(CUtlVector<CCompressedAnim<Vector2D>*, CUtlMemory<CCompressedAnim<Vector2D>*, int> >& compressor, int nType)
{
	const char   __FUNCTION__; // 22195
	bool bAlloced; // 93
	{
		CAnimCompressorRegistry* pRegistry; // 94
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 103
	}
} /* size: 0, variables: 2 */

// <00C62E08> ../public/animationsystem/compression.h:91
// variables: 4
inline void AllocAnimCompressors<Vector4D>(CUtlVector<CCompressedAnim<Vector4D>*, CUtlMemory<CCompressedAnim<Vector4D>*, int> >& compressor, int nType)
{
	const char   __FUNCTION__; // 22195
	bool bAlloced; // 93
	{
		CAnimCompressorRegistry* pRegistry; // 94
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 103
	}
} /* size: 0, variables: 2 */

// <025DB402> ../public/animationsystem/compression.h:106
// variable: 1
inline void FindCompressor(const char* szName)
{
	{
		CAnimCompressorRegistry* pRegistry; // 108
	}
} /* size: 0 */

// <025E0C9B> ../public/animationsystem/compression.h:118
// variables: 2
// function call: 1
void GetDecoderIndex(const char* szName)
{
	int nIndex; // 120
	{
		CAnimCompressorRegistry* pRegistry; // 121
	}
	{
	}
	GetDecoderIndex(const char* szName); // 118
} /* size: 112, variables: 1, inline expansions: 1 (17 bytes) */

// <025DB38D> ../public/animationsystem/compression.h:118
// variables: 4
inline void GetDecoderIndex(const char* szName)
{
	int nIndex; // 120
	const char   __FUNCTION__; // 20851
	{
		CAnimCompressorRegistry* pRegistry; // 121
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 128
	}
} /* size: 0, variables: 2 */

// <00D18DD2> ../public/animationsystem/compression.h:118
// variables: 4
inline void GetDecoderIndex(const char* szName)
{
	int nIndex; // 120
	const char   __FUNCTION__; // 22060
	{
		CAnimCompressorRegistry* pRegistry; // 121
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 128
	}
} /* size: 0, variables: 2 */

// <00D18DAF> ../public/animationsystem/compression.h:132
// variable: 1
inline void GetCompressor(int nIndex)
{
	CAnimCompressorRegistry* pRegistry; // 134
} /* size: 0, variables: 1 */

// <025DB352> ../public/animationsystem/compression.h:148
void CAnimCompressorRegistry::CAnimCompressorRegistry(const char* pServiceName, ICompressorService* pService)
{
} /* size: 73 */

// <025DB321> ../public/animationsystem/compression.h:148
inline void CAnimCompressorRegistry::CAnimCompressorRegistry(const char* pServiceName, ICompressorService* pService)
{
} /* size: 0 */

// <002377FF> ../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<Vector> {
private:
	/* ../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<Vector>* );
	/* ../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<Vector>* , float);
	/* ../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<Vector>* , Vector);
	/* ../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<Vector>* , Quaternion);
	/* ../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<Vector>* , int);
	/* ../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<Vector>* , bool);
	/* ../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<Vector>* , Color);
	/* ../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<Vector>* , Vector2D);
	/* ../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<Vector>* , Vector4D);
	/* ../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<Vector>* );
	/* ../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<Vector>* , int, CUtlVector<Vector, CUtlMemory<Vector, int> >& , const Vector& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<Vector>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* ../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<Vector>* );
	/* ../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<Vector>* );
	CUtlVector<CCompressedAnim<Vector>*, CUtlMemory<CCompressedAnim<Vector>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<Vector> *); /* linkage=_ZN11CCompressorI6VectorEC4Ev */
	void CCompressor(class CCompressor<Vector> *, float); /* linkage=_ZN11CCompressorI6VectorEC4Ef */
	void CCompressor(class CCompressor<Vector> *, class Vector); /* linkage=_ZN11CCompressorI6VectorEC4ES0_ */
	void CCompressor(class CCompressor<Vector> *, class Quaternion); /* linkage=_ZN11CCompressorI6VectorEC4E10Quaternion */
	void CCompressor(class CCompressor<Vector> *, int); /* linkage=_ZN11CCompressorI6VectorEC4Ei */
	void CCompressor(class CCompressor<Vector> *, bool); /* linkage=_ZN11CCompressorI6VectorEC4Eb */
	void CCompressor(class CCompressor<Vector> *, class Color); /* linkage=_ZN11CCompressorI6VectorEC4E5Color */
	void CCompressor(class CCompressor<Vector> *, class Vector2D); /* linkage=_ZN11CCompressorI6VectorEC4E8Vector2D */
	void CCompressor(class CCompressor<Vector> *, class Vector4D); /* linkage=_ZN11CCompressorI6VectorEC4E8Vector4D */
	void ~CCompressor(class CCompressor<Vector> *); /* linkage=_ZN11CCompressorI6VectorED4Ev */
	void AddArray(class CCompressor<Vector> *, int, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, const class Vector  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorI6VectorE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<Vector> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorI6VectorE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS4_iEE */
	void CollapseContainers(class CCompressor<Vector> *); /* linkage=_ZN11CCompressorI6VectorE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<Vector> *); /* linkage=_ZN11CCompressorI6VectorE16DeleteContainersEv */
};

// <00239125> ../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<Quaternion> {
private:
	/* ../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<Quaternion>* );
	/* ../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<Quaternion>* , float);
	/* ../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<Quaternion>* , Vector);
	/* ../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<Quaternion>* , Quaternion);
	/* ../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<Quaternion>* , int);
	/* ../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<Quaternion>* , bool);
	/* ../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<Quaternion>* , Color);
	/* ../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<Quaternion>* , Vector2D);
	/* ../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<Quaternion>* , Vector4D);
	/* ../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<Quaternion>* );
	/* ../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<Quaternion>* , int, CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& , const Quaternion& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<Quaternion>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* ../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<Quaternion>* );
	/* ../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<Quaternion>* );
	CUtlVector<CCompressedAnim<Quaternion>*, CUtlMemory<CCompressedAnim<Quaternion>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<Quaternion> *); /* linkage=_ZN11CCompressorI10QuaternionEC4Ev */
	void CCompressor(class CCompressor<Quaternion> *, float); /* linkage=_ZN11CCompressorI10QuaternionEC4Ef */
	void CCompressor(class CCompressor<Quaternion> *, class Vector); /* linkage=_ZN11CCompressorI10QuaternionEC4E6Vector */
	void CCompressor(class CCompressor<Quaternion> *, class Quaternion); /* linkage=_ZN11CCompressorI10QuaternionEC4ES0_ */
	void CCompressor(class CCompressor<Quaternion> *, int); /* linkage=_ZN11CCompressorI10QuaternionEC4Ei */
	void CCompressor(class CCompressor<Quaternion> *, bool); /* linkage=_ZN11CCompressorI10QuaternionEC4Eb */
	void CCompressor(class CCompressor<Quaternion> *, class Color); /* linkage=_ZN11CCompressorI10QuaternionEC4E5Color */
	void CCompressor(class CCompressor<Quaternion> *, class Vector2D); /* linkage=_ZN11CCompressorI10QuaternionEC4E8Vector2D */
	void CCompressor(class CCompressor<Quaternion> *, class Vector4D); /* linkage=_ZN11CCompressorI10QuaternionEC4E8Vector4D */
	void ~CCompressor(class CCompressor<Quaternion> *); /* linkage=_ZN11CCompressorI10QuaternionED4Ev */
	void AddArray(class CCompressor<Quaternion> *, int, class CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > &, const class Quaternion  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorI10QuaternionE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<Quaternion> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorI10QuaternionE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS4_iEE */
	void CollapseContainers(class CCompressor<Quaternion> *); /* linkage=_ZN11CCompressorI10QuaternionE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<Quaternion> *); /* linkage=_ZN11CCompressorI10QuaternionE16DeleteContainersEv */
};

// <0023AA4B> ../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<int> {
private:
	/* ../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<int>* );
	/* ../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<int>* , float);
	/* ../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<int>* , Vector);
	/* ../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<int>* , Quaternion);
	/* ../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<int>* , int);
	/* ../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<int>* , bool);
	/* ../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<int>* , Color);
	/* ../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<int>* , Vector2D);
	/* ../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<int>* , Vector4D);
	/* ../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<int>* );
	/* ../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<int>* , int, CUtlVector<int, CUtlMemory<int, int> >& , const int& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<int>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* ../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<int>* );
	/* ../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<int>* );
	CUtlVector<CCompressedAnim<int>*, CUtlMemory<CCompressedAnim<int>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<int> *); /* linkage=_ZN11CCompressorIiEC4Ev */
	void CCompressor(class CCompressor<int> *, float); /* linkage=_ZN11CCompressorIiEC4Ef */
	void CCompressor(class CCompressor<int> *, class Vector); /* linkage=_ZN11CCompressorIiEC4E6Vector */
	void CCompressor(class CCompressor<int> *, class Quaternion); /* linkage=_ZN11CCompressorIiEC4E10Quaternion */
	void CCompressor(class CCompressor<int> *, int); /* linkage=_ZN11CCompressorIiEC4Ei */
	void CCompressor(class CCompressor<int> *, bool); /* linkage=_ZN11CCompressorIiEC4Eb */
	void CCompressor(class CCompressor<int> *, class Color); /* linkage=_ZN11CCompressorIiEC4E5Color */
	void CCompressor(class CCompressor<int> *, class Vector2D); /* linkage=_ZN11CCompressorIiEC4E8Vector2D */
	void CCompressor(class CCompressor<int> *, class Vector4D); /* linkage=_ZN11CCompressorIiEC4E8Vector4D */
	void ~CCompressor(class CCompressor<int> *); /* linkage=_ZN11CCompressorIiED4Ev */
	void AddArray(class CCompressor<int> *, int, class CUtlVector<int, CUtlMemory<int, int> > &, const int  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorIiE8AddArrayEiR10CUtlVectorIi10CUtlMemoryIiiEERKi20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<int> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorIiE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS3_iEE */
	void CollapseContainers(class CCompressor<int> *); /* linkage=_ZN11CCompressorIiE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<int> *); /* linkage=_ZN11CCompressorIiE16DeleteContainersEv */
};

// <0023C371> ../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<bool> {
private:
	/* ../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<bool>* );
	/* ../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<bool>* , float);
	/* ../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<bool>* , Vector);
	/* ../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<bool>* , Quaternion);
	/* ../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<bool>* , int);
	/* ../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<bool>* , bool);
	/* ../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<bool>* , Color);
	/* ../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<bool>* , Vector2D);
	/* ../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<bool>* , Vector4D);
	/* ../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<bool>* );
	/* ../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<bool>* , int, CUtlVector<bool, CUtlMemory<bool, int> >& , const bool& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<bool>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* ../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<bool>* );
	/* ../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<bool>* );
	CUtlVector<CCompressedAnim<bool>*, CUtlMemory<CCompressedAnim<bool>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<bool> *); /* linkage=_ZN11CCompressorIbEC4Ev */
	void CCompressor(class CCompressor<bool> *, float); /* linkage=_ZN11CCompressorIbEC4Ef */
	void CCompressor(class CCompressor<bool> *, class Vector); /* linkage=_ZN11CCompressorIbEC4E6Vector */
	void CCompressor(class CCompressor<bool> *, class Quaternion); /* linkage=_ZN11CCompressorIbEC4E10Quaternion */
	void CCompressor(class CCompressor<bool> *, int); /* linkage=_ZN11CCompressorIbEC4Ei */
	void CCompressor(class CCompressor<bool> *, bool); /* linkage=_ZN11CCompressorIbEC4Eb */
	void CCompressor(class CCompressor<bool> *, class Color); /* linkage=_ZN11CCompressorIbEC4E5Color */
	void CCompressor(class CCompressor<bool> *, class Vector2D); /* linkage=_ZN11CCompressorIbEC4E8Vector2D */
	void CCompressor(class CCompressor<bool> *, class Vector4D); /* linkage=_ZN11CCompressorIbEC4E8Vector4D */
	void ~CCompressor(class CCompressor<bool> *); /* linkage=_ZN11CCompressorIbED4Ev */
	void AddArray(class CCompressor<bool> *, int, class CUtlVector<bool, CUtlMemory<bool, int> > &, const bool  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorIbE8AddArrayEiR10CUtlVectorIb10CUtlMemoryIbiEERKb20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<bool> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorIbE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS3_iEE */
	void CollapseContainers(class CCompressor<bool> *); /* linkage=_ZN11CCompressorIbE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<bool> *); /* linkage=_ZN11CCompressorIbE16DeleteContainersEv */
};

// <0023DC97> ../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<Color> {
private:
	/* ../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<Color>* );
	/* ../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<Color>* , float);
	/* ../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<Color>* , Vector);
	/* ../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<Color>* , Quaternion);
	/* ../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<Color>* , int);
	/* ../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<Color>* , bool);
	/* ../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<Color>* , Color);
	/* ../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<Color>* , Vector2D);
	/* ../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<Color>* , Vector4D);
	/* ../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<Color>* );
	/* ../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<Color>* , int, CUtlVector<Color, CUtlMemory<Color, int> >& , const Color& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<Color>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* ../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<Color>* );
	/* ../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<Color>* );
	CUtlVector<CCompressedAnim<Color>*, CUtlMemory<CCompressedAnim<Color>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<Color> *); /* linkage=_ZN11CCompressorI5ColorEC4Ev */
	void CCompressor(class CCompressor<Color> *, float); /* linkage=_ZN11CCompressorI5ColorEC4Ef */
	void CCompressor(class CCompressor<Color> *, class Vector); /* linkage=_ZN11CCompressorI5ColorEC4E6Vector */
	void CCompressor(class CCompressor<Color> *, class Quaternion); /* linkage=_ZN11CCompressorI5ColorEC4E10Quaternion */
	void CCompressor(class CCompressor<Color> *, int); /* linkage=_ZN11CCompressorI5ColorEC4Ei */
	void CCompressor(class CCompressor<Color> *, bool); /* linkage=_ZN11CCompressorI5ColorEC4Eb */
	void CCompressor(class CCompressor<Color> *, class Color); /* linkage=_ZN11CCompressorI5ColorEC4ES0_ */
	void CCompressor(class CCompressor<Color> *, class Vector2D); /* linkage=_ZN11CCompressorI5ColorEC4E8Vector2D */
	void CCompressor(class CCompressor<Color> *, class Vector4D); /* linkage=_ZN11CCompressorI5ColorEC4E8Vector4D */
	void ~CCompressor(class CCompressor<Color> *); /* linkage=_ZN11CCompressorI5ColorED4Ev */
	void AddArray(class CCompressor<Color> *, int, class CUtlVector<Color, CUtlMemory<Color, int> > &, const class Color  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorI5ColorE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<Color> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorI5ColorE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS4_iEE */
	void CollapseContainers(class CCompressor<Color> *); /* linkage=_ZN11CCompressorI5ColorE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<Color> *); /* linkage=_ZN11CCompressorI5ColorE16DeleteContainersEv */
};

// <0023F5BD> ../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<Vector2D> {
private:
	/* ../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<Vector2D>* );
	/* ../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<Vector2D>* , float);
	/* ../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<Vector2D>* , Vector);
	/* ../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<Vector2D>* , Quaternion);
	/* ../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<Vector2D>* , int);
	/* ../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<Vector2D>* , bool);
	/* ../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<Vector2D>* , Color);
	/* ../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<Vector2D>* , Vector2D);
	/* ../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<Vector2D>* , Vector4D);
	/* ../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<Vector2D>* );
	/* ../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<Vector2D>* , int, CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& , const Vector2D& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<Vector2D>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* ../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<Vector2D>* );
	/* ../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<Vector2D>* );
	CUtlVector<CCompressedAnim<Vector2D>*, CUtlMemory<CCompressedAnim<Vector2D>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<Vector2D> *); /* linkage=_ZN11CCompressorI8Vector2DEC4Ev */
	void CCompressor(class CCompressor<Vector2D> *, float); /* linkage=_ZN11CCompressorI8Vector2DEC4Ef */
	void CCompressor(class CCompressor<Vector2D> *, class Vector); /* linkage=_ZN11CCompressorI8Vector2DEC4E6Vector */
	void CCompressor(class CCompressor<Vector2D> *, class Quaternion); /* linkage=_ZN11CCompressorI8Vector2DEC4E10Quaternion */
	void CCompressor(class CCompressor<Vector2D> *, int); /* linkage=_ZN11CCompressorI8Vector2DEC4Ei */
	void CCompressor(class CCompressor<Vector2D> *, bool); /* linkage=_ZN11CCompressorI8Vector2DEC4Eb */
	void CCompressor(class CCompressor<Vector2D> *, class Color); /* linkage=_ZN11CCompressorI8Vector2DEC4E5Color */
	void CCompressor(class CCompressor<Vector2D> *, class Vector2D); /* linkage=_ZN11CCompressorI8Vector2DEC4ES0_ */
	void CCompressor(class CCompressor<Vector2D> *, class Vector4D); /* linkage=_ZN11CCompressorI8Vector2DEC4E8Vector4D */
	void ~CCompressor(class CCompressor<Vector2D> *); /* linkage=_ZN11CCompressorI8Vector2DED4Ev */
	void AddArray(class CCompressor<Vector2D> *, int, class CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > &, const class Vector2D  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorI8Vector2DE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<Vector2D> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorI8Vector2DE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS4_iEE */
	void CollapseContainers(class CCompressor<Vector2D> *); /* linkage=_ZN11CCompressorI8Vector2DE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<Vector2D> *); /* linkage=_ZN11CCompressorI8Vector2DE16DeleteContainersEv */
};

// <00240EE3> ../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<Vector4D> {
private:
	/* ../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<Vector4D>* );
	/* ../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<Vector4D>* , float);
	/* ../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<Vector4D>* , Vector);
	/* ../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<Vector4D>* , Quaternion);
	/* ../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<Vector4D>* , int);
	/* ../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<Vector4D>* , bool);
	/* ../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<Vector4D>* , Color);
	/* ../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<Vector4D>* , Vector2D);
	/* ../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<Vector4D>* , Vector4D);
	/* ../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<Vector4D>* );
	/* ../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<Vector4D>* , int, CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& , const Vector4D& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<Vector4D>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* ../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<Vector4D>* );
	/* ../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<Vector4D>* );
	CUtlVector<CCompressedAnim<Vector4D>*, CUtlMemory<CCompressedAnim<Vector4D>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<Vector4D> *); /* linkage=_ZN11CCompressorI8Vector4DEC4Ev */
	void CCompressor(class CCompressor<Vector4D> *, float); /* linkage=_ZN11CCompressorI8Vector4DEC4Ef */
	void CCompressor(class CCompressor<Vector4D> *, class Vector); /* linkage=_ZN11CCompressorI8Vector4DEC4E6Vector */
	void CCompressor(class CCompressor<Vector4D> *, class Quaternion); /* linkage=_ZN11CCompressorI8Vector4DEC4E10Quaternion */
	void CCompressor(class CCompressor<Vector4D> *, int); /* linkage=_ZN11CCompressorI8Vector4DEC4Ei */
	void CCompressor(class CCompressor<Vector4D> *, bool); /* linkage=_ZN11CCompressorI8Vector4DEC4Eb */
	void CCompressor(class CCompressor<Vector4D> *, class Color); /* linkage=_ZN11CCompressorI8Vector4DEC4E5Color */
	void CCompressor(class CCompressor<Vector4D> *, class Vector2D); /* linkage=_ZN11CCompressorI8Vector4DEC4E8Vector2D */
	void CCompressor(class CCompressor<Vector4D> *, class Vector4D); /* linkage=_ZN11CCompressorI8Vector4DEC4ES0_ */
	void ~CCompressor(class CCompressor<Vector4D> *); /* linkage=_ZN11CCompressorI8Vector4DED4Ev */
	void AddArray(class CCompressor<Vector4D> *, int, class CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > &, const class Vector4D  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorI8Vector4DE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<Vector4D> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorI8Vector4DE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS4_iEE */
	void CollapseContainers(class CCompressor<Vector4D> *); /* linkage=_ZN11CCompressorI8Vector4DE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<Vector4D> *); /* linkage=_ZN11CCompressorI8Vector4DE16DeleteContainersEv */
};

// <0092EA16> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<float> {
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<float>* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<float>* , Vector);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<float>* , Quaternion);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<float>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<float>* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<float>* , Color);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<float>* , Vector2D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<float>* , Vector4D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<float>* , int, CUtlVector<float, CUtlMemory<float, int> >& , const float& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<float>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<float>* );
	CUtlVector<CCompressedAnim<float>*, CUtlMemory<CCompressedAnim<float>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<float> *); /* linkage=_ZN11CCompressorIfEC4Ev */
	void CCompressor(class CCompressor<float> *, float); /* linkage=_ZN11CCompressorIfEC4Ef */
	void CCompressor(class CCompressor<float> *, class Vector); /* linkage=_ZN11CCompressorIfEC4E6Vector */
	void CCompressor(class CCompressor<float> *, class Quaternion); /* linkage=_ZN11CCompressorIfEC4E10Quaternion */
	void CCompressor(class CCompressor<float> *, int); /* linkage=_ZN11CCompressorIfEC4Ei */
	void CCompressor(class CCompressor<float> *, bool); /* linkage=_ZN11CCompressorIfEC4Eb */
	void CCompressor(class CCompressor<float> *, class Color); /* linkage=_ZN11CCompressorIfEC4E5Color */
	void CCompressor(class CCompressor<float> *, class Vector2D); /* linkage=_ZN11CCompressorIfEC4E8Vector2D */
	void CCompressor(class CCompressor<float> *, class Vector4D); /* linkage=_ZN11CCompressorIfEC4E8Vector4D */
	void ~CCompressor(class CCompressor<float> *); /* linkage=_ZN11CCompressorIfED4Ev */
	void AddArray(class CCompressor<float> *, int, class CUtlVector<float, CUtlMemory<float, int> > &, const float  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorIfE8AddArrayEiR10CUtlVectorIf10CUtlMemoryIfiEERKf20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<float> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorIfE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS3_iEE */
	void CollapseContainers(class CCompressor<float> *); /* linkage=_ZN11CCompressorIfE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<float> *); /* linkage=_ZN11CCompressorIfE16DeleteContainersEv */
};

// <0093035C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<Vector> {
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<Vector>* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<Vector>* , Vector);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<Vector>* , Quaternion);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<Vector>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<Vector>* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<Vector>* , Color);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<Vector>* , Vector2D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<Vector>* , Vector4D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<Vector>* , int, CUtlVector<Vector, CUtlMemory<Vector, int> >& , const Vector& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<Vector>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<Vector>* );
	CUtlVector<CCompressedAnim<Vector>*, CUtlMemory<CCompressedAnim<Vector>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<Vector> *); /* linkage=_ZN11CCompressorI6VectorEC4Ev */
	void CCompressor(class CCompressor<Vector> *, float); /* linkage=_ZN11CCompressorI6VectorEC4Ef */
	void CCompressor(class CCompressor<Vector> *, class Vector); /* linkage=_ZN11CCompressorI6VectorEC4ES0_ */
	void CCompressor(class CCompressor<Vector> *, class Quaternion); /* linkage=_ZN11CCompressorI6VectorEC4E10Quaternion */
	void CCompressor(class CCompressor<Vector> *, int); /* linkage=_ZN11CCompressorI6VectorEC4Ei */
	void CCompressor(class CCompressor<Vector> *, bool); /* linkage=_ZN11CCompressorI6VectorEC4Eb */
	void CCompressor(class CCompressor<Vector> *, class Color); /* linkage=_ZN11CCompressorI6VectorEC4E5Color */
	void CCompressor(class CCompressor<Vector> *, class Vector2D); /* linkage=_ZN11CCompressorI6VectorEC4E8Vector2D */
	void CCompressor(class CCompressor<Vector> *, class Vector4D); /* linkage=_ZN11CCompressorI6VectorEC4E8Vector4D */
	void ~CCompressor(class CCompressor<Vector> *); /* linkage=_ZN11CCompressorI6VectorED4Ev */
	void AddArray(class CCompressor<Vector> *, int, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, const class Vector  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorI6VectorE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<Vector> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorI6VectorE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS4_iEE */
	void CollapseContainers(class CCompressor<Vector> *); /* linkage=_ZN11CCompressorI6VectorE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<Vector> *); /* linkage=_ZN11CCompressorI6VectorE16DeleteContainersEv */
};

// <00931CA2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<Quaternion> {
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<Quaternion>* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<Quaternion>* , Vector);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<Quaternion>* , Quaternion);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<Quaternion>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<Quaternion>* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<Quaternion>* , Color);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<Quaternion>* , Vector2D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<Quaternion>* , Vector4D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<Quaternion>* , int, CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& , const Quaternion& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<Quaternion>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<Quaternion>* );
	CUtlVector<CCompressedAnim<Quaternion>*, CUtlMemory<CCompressedAnim<Quaternion>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<Quaternion> *); /* linkage=_ZN11CCompressorI10QuaternionEC4Ev */
	void CCompressor(class CCompressor<Quaternion> *, float); /* linkage=_ZN11CCompressorI10QuaternionEC4Ef */
	void CCompressor(class CCompressor<Quaternion> *, class Vector); /* linkage=_ZN11CCompressorI10QuaternionEC4E6Vector */
	void CCompressor(class CCompressor<Quaternion> *, class Quaternion); /* linkage=_ZN11CCompressorI10QuaternionEC4ES0_ */
	void CCompressor(class CCompressor<Quaternion> *, int); /* linkage=_ZN11CCompressorI10QuaternionEC4Ei */
	void CCompressor(class CCompressor<Quaternion> *, bool); /* linkage=_ZN11CCompressorI10QuaternionEC4Eb */
	void CCompressor(class CCompressor<Quaternion> *, class Color); /* linkage=_ZN11CCompressorI10QuaternionEC4E5Color */
	void CCompressor(class CCompressor<Quaternion> *, class Vector2D); /* linkage=_ZN11CCompressorI10QuaternionEC4E8Vector2D */
	void CCompressor(class CCompressor<Quaternion> *, class Vector4D); /* linkage=_ZN11CCompressorI10QuaternionEC4E8Vector4D */
	void ~CCompressor(class CCompressor<Quaternion> *); /* linkage=_ZN11CCompressorI10QuaternionED4Ev */
	void AddArray(class CCompressor<Quaternion> *, int, class CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > &, const class Quaternion  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorI10QuaternionE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<Quaternion> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorI10QuaternionE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS4_iEE */
	void CollapseContainers(class CCompressor<Quaternion> *); /* linkage=_ZN11CCompressorI10QuaternionE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<Quaternion> *); /* linkage=_ZN11CCompressorI10QuaternionE16DeleteContainersEv */
};

// <009335E8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<int> {
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<int>* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<int>* , Vector);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<int>* , Quaternion);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<int>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<int>* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<int>* , Color);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<int>* , Vector2D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<int>* , Vector4D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<int>* , int, CUtlVector<int, CUtlMemory<int, int> >& , const int& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<int>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<int>* );
	CUtlVector<CCompressedAnim<int>*, CUtlMemory<CCompressedAnim<int>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<int> *); /* linkage=_ZN11CCompressorIiEC4Ev */
	void CCompressor(class CCompressor<int> *, float); /* linkage=_ZN11CCompressorIiEC4Ef */
	void CCompressor(class CCompressor<int> *, class Vector); /* linkage=_ZN11CCompressorIiEC4E6Vector */
	void CCompressor(class CCompressor<int> *, class Quaternion); /* linkage=_ZN11CCompressorIiEC4E10Quaternion */
	void CCompressor(class CCompressor<int> *, int); /* linkage=_ZN11CCompressorIiEC4Ei */
	void CCompressor(class CCompressor<int> *, bool); /* linkage=_ZN11CCompressorIiEC4Eb */
	void CCompressor(class CCompressor<int> *, class Color); /* linkage=_ZN11CCompressorIiEC4E5Color */
	void CCompressor(class CCompressor<int> *, class Vector2D); /* linkage=_ZN11CCompressorIiEC4E8Vector2D */
	void CCompressor(class CCompressor<int> *, class Vector4D); /* linkage=_ZN11CCompressorIiEC4E8Vector4D */
	void ~CCompressor(class CCompressor<int> *); /* linkage=_ZN11CCompressorIiED4Ev */
	void AddArray(class CCompressor<int> *, int, class CUtlVector<int, CUtlMemory<int, int> > &, const int  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorIiE8AddArrayEiR10CUtlVectorIi10CUtlMemoryIiiEERKi20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<int> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorIiE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS3_iEE */
	void CollapseContainers(class CCompressor<int> *); /* linkage=_ZN11CCompressorIiE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<int> *); /* linkage=_ZN11CCompressorIiE16DeleteContainersEv */
};

// <00934F2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<bool> {
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<bool>* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<bool>* , Vector);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<bool>* , Quaternion);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<bool>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<bool>* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<bool>* , Color);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<bool>* , Vector2D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<bool>* , Vector4D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<bool>* , int, CUtlVector<bool, CUtlMemory<bool, int> >& , const bool& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<bool>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<bool>* );
	CUtlVector<CCompressedAnim<bool>*, CUtlMemory<CCompressedAnim<bool>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<bool> *); /* linkage=_ZN11CCompressorIbEC4Ev */
	void CCompressor(class CCompressor<bool> *, float); /* linkage=_ZN11CCompressorIbEC4Ef */
	void CCompressor(class CCompressor<bool> *, class Vector); /* linkage=_ZN11CCompressorIbEC4E6Vector */
	void CCompressor(class CCompressor<bool> *, class Quaternion); /* linkage=_ZN11CCompressorIbEC4E10Quaternion */
	void CCompressor(class CCompressor<bool> *, int); /* linkage=_ZN11CCompressorIbEC4Ei */
	void CCompressor(class CCompressor<bool> *, bool); /* linkage=_ZN11CCompressorIbEC4Eb */
	void CCompressor(class CCompressor<bool> *, class Color); /* linkage=_ZN11CCompressorIbEC4E5Color */
	void CCompressor(class CCompressor<bool> *, class Vector2D); /* linkage=_ZN11CCompressorIbEC4E8Vector2D */
	void CCompressor(class CCompressor<bool> *, class Vector4D); /* linkage=_ZN11CCompressorIbEC4E8Vector4D */
	void ~CCompressor(class CCompressor<bool> *); /* linkage=_ZN11CCompressorIbED4Ev */
	void AddArray(class CCompressor<bool> *, int, class CUtlVector<bool, CUtlMemory<bool, int> > &, const bool  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorIbE8AddArrayEiR10CUtlVectorIb10CUtlMemoryIbiEERKb20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<bool> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorIbE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS3_iEE */
	void CollapseContainers(class CCompressor<bool> *); /* linkage=_ZN11CCompressorIbE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<bool> *); /* linkage=_ZN11CCompressorIbE16DeleteContainersEv */
};

// <00936874> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<Color> {
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<Color>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<Color>* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<Color>* , Vector);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<Color>* , Quaternion);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<Color>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<Color>* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<Color>* , Color);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<Color>* , Vector2D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<Color>* , Vector4D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<Color>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<Color>* , int, CUtlVector<Color, CUtlMemory<Color, int> >& , const Color& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<Color>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<Color>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<Color>* );
	CUtlVector<CCompressedAnim<Color>*, CUtlMemory<CCompressedAnim<Color>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<Color> *); /* linkage=_ZN11CCompressorI5ColorEC4Ev */
	void CCompressor(class CCompressor<Color> *, float); /* linkage=_ZN11CCompressorI5ColorEC4Ef */
	void CCompressor(class CCompressor<Color> *, class Vector); /* linkage=_ZN11CCompressorI5ColorEC4E6Vector */
	void CCompressor(class CCompressor<Color> *, class Quaternion); /* linkage=_ZN11CCompressorI5ColorEC4E10Quaternion */
	void CCompressor(class CCompressor<Color> *, int); /* linkage=_ZN11CCompressorI5ColorEC4Ei */
	void CCompressor(class CCompressor<Color> *, bool); /* linkage=_ZN11CCompressorI5ColorEC4Eb */
	void CCompressor(class CCompressor<Color> *, class Color); /* linkage=_ZN11CCompressorI5ColorEC4ES0_ */
	void CCompressor(class CCompressor<Color> *, class Vector2D); /* linkage=_ZN11CCompressorI5ColorEC4E8Vector2D */
	void CCompressor(class CCompressor<Color> *, class Vector4D); /* linkage=_ZN11CCompressorI5ColorEC4E8Vector4D */
	void ~CCompressor(class CCompressor<Color> *); /* linkage=_ZN11CCompressorI5ColorED4Ev */
	void AddArray(class CCompressor<Color> *, int, class CUtlVector<Color, CUtlMemory<Color, int> > &, const class Color  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorI5ColorE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<Color> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorI5ColorE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS4_iEE */
	void CollapseContainers(class CCompressor<Color> *); /* linkage=_ZN11CCompressorI5ColorE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<Color> *); /* linkage=_ZN11CCompressorI5ColorE16DeleteContainersEv */
};

// <009381BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<Vector2D> {
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<Vector2D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<Vector2D>* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<Vector2D>* , Vector);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<Vector2D>* , Quaternion);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<Vector2D>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<Vector2D>* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<Vector2D>* , Color);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<Vector2D>* , Vector2D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<Vector2D>* , Vector4D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<Vector2D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<Vector2D>* , int, CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& , const Vector2D& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<Vector2D>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<Vector2D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<Vector2D>* );
	CUtlVector<CCompressedAnim<Vector2D>*, CUtlMemory<CCompressedAnim<Vector2D>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<Vector2D> *); /* linkage=_ZN11CCompressorI8Vector2DEC4Ev */
	void CCompressor(class CCompressor<Vector2D> *, float); /* linkage=_ZN11CCompressorI8Vector2DEC4Ef */
	void CCompressor(class CCompressor<Vector2D> *, class Vector); /* linkage=_ZN11CCompressorI8Vector2DEC4E6Vector */
	void CCompressor(class CCompressor<Vector2D> *, class Quaternion); /* linkage=_ZN11CCompressorI8Vector2DEC4E10Quaternion */
	void CCompressor(class CCompressor<Vector2D> *, int); /* linkage=_ZN11CCompressorI8Vector2DEC4Ei */
	void CCompressor(class CCompressor<Vector2D> *, bool); /* linkage=_ZN11CCompressorI8Vector2DEC4Eb */
	void CCompressor(class CCompressor<Vector2D> *, class Color); /* linkage=_ZN11CCompressorI8Vector2DEC4E5Color */
	void CCompressor(class CCompressor<Vector2D> *, class Vector2D); /* linkage=_ZN11CCompressorI8Vector2DEC4ES0_ */
	void CCompressor(class CCompressor<Vector2D> *, class Vector4D); /* linkage=_ZN11CCompressorI8Vector2DEC4E8Vector4D */
	void ~CCompressor(class CCompressor<Vector2D> *); /* linkage=_ZN11CCompressorI8Vector2DED4Ev */
	void AddArray(class CCompressor<Vector2D> *, int, class CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > &, const class Vector2D  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorI8Vector2DE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<Vector2D> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorI8Vector2DE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS4_iEE */
	void CollapseContainers(class CCompressor<Vector2D> *); /* linkage=_ZN11CCompressorI8Vector2DE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<Vector2D> *); /* linkage=_ZN11CCompressorI8Vector2DE16DeleteContainersEv */
};

// <00939B00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<Vector4D> {
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<Vector4D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<Vector4D>* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<Vector4D>* , Vector);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<Vector4D>* , Quaternion);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<Vector4D>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<Vector4D>* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<Vector4D>* , Color);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<Vector4D>* , Vector2D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<Vector4D>* , Vector4D);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<Vector4D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<Vector4D>* , int, CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& , const Vector4D& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<Vector4D>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<Vector4D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<Vector4D>* );
	CUtlVector<CCompressedAnim<Vector4D>*, CUtlMemory<CCompressedAnim<Vector4D>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<Vector4D> *); /* linkage=_ZN11CCompressorI8Vector4DEC4Ev */
	void CCompressor(class CCompressor<Vector4D> *, float); /* linkage=_ZN11CCompressorI8Vector4DEC4Ef */
	void CCompressor(class CCompressor<Vector4D> *, class Vector); /* linkage=_ZN11CCompressorI8Vector4DEC4E6Vector */
	void CCompressor(class CCompressor<Vector4D> *, class Quaternion); /* linkage=_ZN11CCompressorI8Vector4DEC4E10Quaternion */
	void CCompressor(class CCompressor<Vector4D> *, int); /* linkage=_ZN11CCompressorI8Vector4DEC4Ei */
	void CCompressor(class CCompressor<Vector4D> *, bool); /* linkage=_ZN11CCompressorI8Vector4DEC4Eb */
	void CCompressor(class CCompressor<Vector4D> *, class Color); /* linkage=_ZN11CCompressorI8Vector4DEC4E5Color */
	void CCompressor(class CCompressor<Vector4D> *, class Vector2D); /* linkage=_ZN11CCompressorI8Vector4DEC4E8Vector2D */
	void CCompressor(class CCompressor<Vector4D> *, class Vector4D); /* linkage=_ZN11CCompressorI8Vector4DEC4ES0_ */
	void ~CCompressor(class CCompressor<Vector4D> *); /* linkage=_ZN11CCompressorI8Vector4DED4Ev */
	void AddArray(class CCompressor<Vector4D> *, int, class CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > &, const class Vector4D  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorI8Vector4DE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<Vector4D> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorI8Vector4DE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS4_iEE */
	void CollapseContainers(class CCompressor<Vector4D> *); /* linkage=_ZN11CCompressorI8Vector4DE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<Vector4D> *); /* linkage=_ZN11CCompressorI8Vector4DE16DeleteContainersEv */
};

// <00BAC3B4> ../public/animationsystem/compression.h:204
// member functions: 28
// member variables: 2
// class size: 64
class CCompressor<float> {
private:
	/* ../public/animationsystem/compression.h:207 */
	void CCompressor(CCompressor<float>* );
	/* ../public/animationsystem/compression.h:209 */
	void CCompressor(CCompressor<float>* , float);
	/* ../public/animationsystem/compression.h:214 */
	void CCompressor(CCompressor<float>* , Vector);
	/* ../public/animationsystem/compression.h:219 */
	void CCompressor(CCompressor<float>* , Quaternion);
	/* ../public/animationsystem/compression.h:224 */
	void CCompressor(CCompressor<float>* , int);
	/* ../public/animationsystem/compression.h:229 */
	void CCompressor(CCompressor<float>* , bool);
	/* ../public/animationsystem/compression.h:234 */
	void CCompressor(CCompressor<float>* , Color);
	/* ../public/animationsystem/compression.h:239 */
	void CCompressor(CCompressor<float>* , Vector2D);
	/* ../public/animationsystem/compression.h:244 */
	void CCompressor(CCompressor<float>* , Vector4D);
	/* ../public/animationsystem/compression.h:249 */
	void ~CCompressor(CCompressor<float>* );
	/* ../public/animationsystem/compression.h:254 */
	void AddArray(CCompressor<float>* , int, CUtlVector<float, CUtlMemory<float, int> >& , const float& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:276 */
	int AppendContainers(CCompressor<float>* , CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& );
	/* ../public/animationsystem/compression.h:289 */
	void CollapseContainers(CCompressor<float>* );
	/* ../public/animationsystem/compression.h:301 */
	void DeleteContainers(CCompressor<float>* );
	CUtlVector<CCompressedAnim<float>*, CUtlMemory<CCompressedAnim<float>*, int> > m_compressors; /* 0 32 */
	CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > m_containers; /* 32 32 */
	void CCompressor(class CCompressor<float> *); /* linkage=_ZN11CCompressorIfEC4Ev */
	void CCompressor(class CCompressor<float> *, float); /* linkage=_ZN11CCompressorIfEC4Ef */
	void CCompressor(class CCompressor<float> *, class Vector); /* linkage=_ZN11CCompressorIfEC4E6Vector */
	void CCompressor(class CCompressor<float> *, class Quaternion); /* linkage=_ZN11CCompressorIfEC4E10Quaternion */
	void CCompressor(class CCompressor<float> *, int); /* linkage=_ZN11CCompressorIfEC4Ei */
	void CCompressor(class CCompressor<float> *, bool); /* linkage=_ZN11CCompressorIfEC4Eb */
	void CCompressor(class CCompressor<float> *, class Color); /* linkage=_ZN11CCompressorIfEC4E5Color */
	void CCompressor(class CCompressor<float> *, class Vector2D); /* linkage=_ZN11CCompressorIfEC4E8Vector2D */
	void CCompressor(class CCompressor<float> *, class Vector4D); /* linkage=_ZN11CCompressorIfEC4E8Vector4D */
	void ~CCompressor(class CCompressor<float> *); /* linkage=_ZN11CCompressorIfED4Ev */
	void AddArray(class CCompressor<float> *, int, class CUtlVector<float, CUtlMemory<float, int> > &, const float  &, enum AnimCompressEnable_t); /* linkage=_ZN11CCompressorIfE8AddArrayEiR10CUtlVectorIf10CUtlMemoryIfiEERKf20AnimCompressEnable_t */
	int AppendContainers(class CCompressor<float> *, class CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > &); /* linkage=_ZN11CCompressorIfE16AppendContainersER10CUtlVectorIP15CUtlBinaryBlock10CUtlMemoryIS3_iEE */
	void CollapseContainers(class CCompressor<float> *); /* linkage=_ZN11CCompressorIfE18CollapseContainersEv */
	void DeleteContainers(class CCompressor<float> *); /* linkage=_ZN11CCompressorIfE16DeleteContainersEv */
};

// <00C8045B> ../public/animationsystem/compression.h:209
// variable: 1
// function calls: 25
void CCompressor<float>::CCompressor(float arg)
{
	CUtlMemory<CCompressedAnim<float>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressedAnim<float>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressedAnim<float>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressedAnim<float>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressedAnim<float>::CUtlVector(); // 210
	CUtlMemory<CUtlBinaryBlock::ValidateGrowSize(); // 475
	CUtlMemory<CUtlBinaryBlock::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlBinaryBlock::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlBinaryBlock::CUtlVector(); // 210
	{
		CAnimCompressorRegistry* pRegistry; // 94
		CUtlMemory<CCompressedAnim<float>::NumAllocated(); // 1247
		CUtlMemory<CCompressedAnim<float>::Base(); // 112
		CUtlVectorBase<CCompressedAnim<float>::Base(); // 368
		CUtlVectorBase<CCompressedAnim<float>::ResetDbgInfo(); // 824
		CUtlMemory<CCompressedAnim<float>::IsGrowable(); // 823
		CUtlMemory<CCompressedAnim<float>::IsExternallyAllocated(); // 859
		CUtlMemory<CCompressedAnim<float>::IsExternallyAllocated(); // 861
		CUtlMemory<CCompressedAnim<float>::Grow(
			int num);  // 806
		CUtlVectorBase<CCompressedAnim<float>::GrowMemory(
				int num);  // 1249
		Construct<CCompressedAnim<float>*, CCompressedAnim<float>*>(CCompressedAnim<float>** pMemory); // 1252
		CUtlMemory<CCompressedAnim<float>::operator[](
				int i);  // 602
		CUtlVectorBase<CCompressedAnim<float>::Element(
			int i);  // 1252
		CUtlVectorBase<CCompressedAnim<float>::AddToTail(
				CCompressedAnim<float> *& src);  // 98
	}
	{
	}
	AllocAnimCompressors<float>(CUtlVector<CCompressedAnim<float>*, CUtlMemory<CCompressedAnim<float>*, int> >& compressor,
					int nType);  // 91
	AllocAnimCompressors<float>(CUtlVector<CCompressedAnim<float>*, CUtlMemory<CCompressedAnim<float>*, int> >& compressor,
					int nType);  // 211
} /* size: 480, inline expansions: 12 (492 bytes) */

// <00C80436> ../public/animationsystem/compression.h:209
inline void CCompressor<float>::CCompressor(float arg)
{
} /* size: 0 */

// <00C7FE37> ../public/animationsystem/compression.h:214
// variable: 1
// function calls: 25
void CCompressor<Vector>::CCompressor(Vector arg)
{
	CUtlMemory<CCompressedAnim<Vector>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressedAnim<Vector>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressedAnim<Vector>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressedAnim<Vector>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressedAnim<Vector>::CUtlVector(); // 215
	CUtlMemory<CUtlBinaryBlock::ValidateGrowSize(); // 475
	CUtlMemory<CUtlBinaryBlock::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlBinaryBlock::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlBinaryBlock::CUtlVector(); // 215
	{
		CAnimCompressorRegistry* pRegistry; // 94
		CUtlMemory<CCompressedAnim<Vector>::NumAllocated(); // 1247
		CUtlMemory<CCompressedAnim<Vector>::Base(); // 112
		CUtlVectorBase<CCompressedAnim<Vector>::Base(); // 368
		CUtlVectorBase<CCompressedAnim<Vector>::ResetDbgInfo(); // 824
		CUtlMemory<CCompressedAnim<Vector>::IsGrowable(); // 823
		CUtlMemory<CCompressedAnim<Vector>::IsExternallyAllocated(); // 859
		CUtlMemory<CCompressedAnim<Vector>::IsExternallyAllocated(); // 861
		CUtlMemory<CCompressedAnim<Vector>::Grow(
			int num);  // 806
		CUtlVectorBase<CCompressedAnim<Vector>::GrowMemory(
				int num);  // 1249
		Construct<CCompressedAnim<Vector>*, CCompressedAnim<Vector>*>(CCompressedAnim<Vector>** pMemory); // 1252
		CUtlMemory<CCompressedAnim<Vector>::operator[](
				int i);  // 602
		CUtlVectorBase<CCompressedAnim<Vector>::Element(
			int i);  // 1252
		CUtlVectorBase<CCompressedAnim<Vector>::AddToTail(
				CCompressedAnim<Vector> *& src);  // 98
	}
	{
	}
	AllocAnimCompressors<Vector>(CUtlVector<CCompressedAnim<Vector>*, CUtlMemory<CCompressedAnim<Vector>*, int> >& compressor,
					int nType);  // 91
	AllocAnimCompressors<Vector>(CUtlVector<CCompressedAnim<Vector>*, CUtlMemory<CCompressedAnim<Vector>*, int> >& compressor,
					int nType);  // 216
} /* size: 512, inline expansions: 12 (514 bytes) */

// <00C7FE12> ../public/animationsystem/compression.h:214
inline void CCompressor<Vector>::CCompressor(Vector arg)
{
} /* size: 0 */

// <00C7F811> ../public/animationsystem/compression.h:219
// variable: 1
// function calls: 25
void CCompressor<Quaternion>::CCompressor(Quaternion arg)
{
	CUtlMemory<CCompressedAnim<Quaternion>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressedAnim<Quaternion>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressedAnim<Quaternion>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressedAnim<Quaternion>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressedAnim<Quaternion>::CUtlVector(); // 220
	CUtlMemory<CUtlBinaryBlock::ValidateGrowSize(); // 475
	CUtlMemory<CUtlBinaryBlock::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlBinaryBlock::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlBinaryBlock::CUtlVector(); // 220
	{
		CAnimCompressorRegistry* pRegistry; // 94
		CUtlMemory<CCompressedAnim<Quaternion>::NumAllocated(); // 1247
		CUtlMemory<CCompressedAnim<Quaternion>::Base(); // 112
		CUtlVectorBase<CCompressedAnim<Quaternion>::Base(); // 368
		CUtlVectorBase<CCompressedAnim<Quaternion>::ResetDbgInfo(); // 824
		CUtlMemory<CCompressedAnim<Quaternion>::IsGrowable(); // 823
		CUtlMemory<CCompressedAnim<Quaternion>::IsExternallyAllocated(); // 859
		CUtlMemory<CCompressedAnim<Quaternion>::IsExternallyAllocated(); // 861
		CUtlMemory<CCompressedAnim<Quaternion>::Grow(
			int num);  // 806
		CUtlVectorBase<CCompressedAnim<Quaternion>::GrowMemory(
				int num);  // 1249
		Construct<CCompressedAnim<Quaternion>*, CCompressedAnim<Quaternion>*>(CCompressedAnim<Quaternion>** pMemory); // 1252
		CUtlMemory<CCompressedAnim<Quaternion>::operator[](
				int i);  // 602
		CUtlVectorBase<CCompressedAnim<Quaternion>::Element(
			int i);  // 1252
		CUtlVectorBase<CCompressedAnim<Quaternion>::AddToTail(
				CCompressedAnim<Quaternion> *& src);  // 98
	}
	{
	}
	AllocAnimCompressors<Quaternion>(CUtlVector<CCompressedAnim<Quaternion>*, CUtlMemory<CCompressedAnim<Quaternion>*, int> >& compressor,
					int nType);  // 91
	AllocAnimCompressors<Quaternion>(CUtlVector<CCompressedAnim<Quaternion>*, CUtlMemory<CCompressedAnim<Quaternion>*, int> >& compressor,
					int nType);  // 221
} /* size: 480, inline expansions: 12 (492 bytes) */

// <00C7F7EC> ../public/animationsystem/compression.h:219
inline void CCompressor<Quaternion>::CCompressor(Quaternion arg)
{
} /* size: 0 */

// <00C7F1EB> ../public/animationsystem/compression.h:224
// variable: 1
// function calls: 25
void CCompressor<int>::CCompressor(int arg)
{
	CUtlMemory<CCompressedAnim<int>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressedAnim<int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressedAnim<int>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressedAnim<int>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressedAnim<int>::CUtlVector(); // 225
	CUtlMemory<CUtlBinaryBlock::ValidateGrowSize(); // 475
	CUtlMemory<CUtlBinaryBlock::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlBinaryBlock::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlBinaryBlock::CUtlVector(); // 225
	{
		CAnimCompressorRegistry* pRegistry; // 94
		CUtlMemory<CCompressedAnim<int>::NumAllocated(); // 1247
		CUtlMemory<CCompressedAnim<int>::Base(); // 112
		CUtlVectorBase<CCompressedAnim<int>::Base(); // 368
		CUtlVectorBase<CCompressedAnim<int>::ResetDbgInfo(); // 824
		CUtlMemory<CCompressedAnim<int>::IsGrowable(); // 823
		CUtlMemory<CCompressedAnim<int>::IsExternallyAllocated(); // 859
		CUtlMemory<CCompressedAnim<int>::IsExternallyAllocated(); // 861
		CUtlMemory<CCompressedAnim<int>::Grow(
			int num);  // 806
		CUtlVectorBase<CCompressedAnim<int>::GrowMemory(
				int num);  // 1249
		Construct<CCompressedAnim<int>*, CCompressedAnim<int>*>(CCompressedAnim<int>** pMemory); // 1252
		CUtlMemory<CCompressedAnim<int>::operator[](
				int i);  // 602
		CUtlVectorBase<CCompressedAnim<int>::Element(
			int i);  // 1252
		CUtlVectorBase<CCompressedAnim<int>::AddToTail(
				CCompressedAnim<int> *& src);  // 98
	}
	{
	}
	AllocAnimCompressors<int>(CUtlVector<CCompressedAnim<int>*, CUtlMemory<CCompressedAnim<int>*, int> >& compressor,
					int nType);  // 91
	AllocAnimCompressors<int>(CUtlVector<CCompressedAnim<int>*, CUtlMemory<CCompressedAnim<int>*, int> >& compressor,
					int nType);  // 226
} /* size: 480, inline expansions: 12 (492 bytes) */

// <00C7F1C6> ../public/animationsystem/compression.h:224
inline void CCompressor<int>::CCompressor(int arg)
{
} /* size: 0 */

// <00C7EBC5> ../public/animationsystem/compression.h:229
// variable: 1
// function calls: 25
void CCompressor<bool>::CCompressor(bool arg)
{
	CUtlMemory<CCompressedAnim<bool>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressedAnim<bool>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressedAnim<bool>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressedAnim<bool>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressedAnim<bool>::CUtlVector(); // 230
	CUtlMemory<CUtlBinaryBlock::ValidateGrowSize(); // 475
	CUtlMemory<CUtlBinaryBlock::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlBinaryBlock::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlBinaryBlock::CUtlVector(); // 230
	{
		CAnimCompressorRegistry* pRegistry; // 94
		CUtlMemory<CCompressedAnim<bool>::NumAllocated(); // 1247
		CUtlMemory<CCompressedAnim<bool>::Base(); // 112
		CUtlVectorBase<CCompressedAnim<bool>::Base(); // 368
		CUtlVectorBase<CCompressedAnim<bool>::ResetDbgInfo(); // 824
		CUtlMemory<CCompressedAnim<bool>::IsGrowable(); // 823
		CUtlMemory<CCompressedAnim<bool>::IsExternallyAllocated(); // 859
		CUtlMemory<CCompressedAnim<bool>::IsExternallyAllocated(); // 861
		CUtlMemory<CCompressedAnim<bool>::Grow(
			int num);  // 806
		CUtlVectorBase<CCompressedAnim<bool>::GrowMemory(
				int num);  // 1249
		Construct<CCompressedAnim<bool>*, CCompressedAnim<bool>*>(CCompressedAnim<bool>** pMemory); // 1252
		CUtlMemory<CCompressedAnim<bool>::operator[](
				int i);  // 602
		CUtlVectorBase<CCompressedAnim<bool>::Element(
			int i);  // 1252
		CUtlVectorBase<CCompressedAnim<bool>::AddToTail(
				CCompressedAnim<bool> *& src);  // 98
	}
	{
	}
	AllocAnimCompressors<bool>(CUtlVector<CCompressedAnim<bool>*, CUtlMemory<CCompressedAnim<bool>*, int> >& compressor,
					int nType);  // 91
	AllocAnimCompressors<bool>(CUtlVector<CCompressedAnim<bool>*, CUtlMemory<CCompressedAnim<bool>*, int> >& compressor,
					int nType);  // 231
} /* size: 480, inline expansions: 12 (492 bytes) */

// <00C7EBA0> ../public/animationsystem/compression.h:229
inline void CCompressor<bool>::CCompressor(bool arg)
{
} /* size: 0 */

// <00C7E59F> ../public/animationsystem/compression.h:234
// variable: 1
// function calls: 25
void CCompressor<Color>::CCompressor(Color arg)
{
	CUtlMemory<CCompressedAnim<Color>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressedAnim<Color>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressedAnim<Color>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressedAnim<Color>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressedAnim<Color>::CUtlVector(); // 235
	CUtlMemory<CUtlBinaryBlock::ValidateGrowSize(); // 475
	CUtlMemory<CUtlBinaryBlock::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlBinaryBlock::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlBinaryBlock::CUtlVector(); // 235
	{
		CAnimCompressorRegistry* pRegistry; // 94
		CUtlMemory<CCompressedAnim<Color>::NumAllocated(); // 1247
		CUtlMemory<CCompressedAnim<Color>::Base(); // 112
		CUtlVectorBase<CCompressedAnim<Color>::Base(); // 368
		CUtlVectorBase<CCompressedAnim<Color>::ResetDbgInfo(); // 824
		CUtlMemory<CCompressedAnim<Color>::IsGrowable(); // 823
		CUtlMemory<CCompressedAnim<Color>::IsExternallyAllocated(); // 859
		CUtlMemory<CCompressedAnim<Color>::IsExternallyAllocated(); // 861
		CUtlMemory<CCompressedAnim<Color>::Grow(
			int num);  // 806
		CUtlVectorBase<CCompressedAnim<Color>::GrowMemory(
				int num);  // 1249
		Construct<CCompressedAnim<Color>*, CCompressedAnim<Color>*>(CCompressedAnim<Color>** pMemory); // 1252
		CUtlMemory<CCompressedAnim<Color>::operator[](
				int i);  // 602
		CUtlVectorBase<CCompressedAnim<Color>::Element(
			int i);  // 1252
		CUtlVectorBase<CCompressedAnim<Color>::AddToTail(
				CCompressedAnim<Color> *& src);  // 98
	}
	{
	}
	AllocAnimCompressors<Color>(CUtlVector<CCompressedAnim<Color>*, CUtlMemory<CCompressedAnim<Color>*, int> >& compressor,
					int nType);  // 91
	AllocAnimCompressors<Color>(CUtlVector<CCompressedAnim<Color>*, CUtlMemory<CCompressedAnim<Color>*, int> >& compressor,
					int nType);  // 236
} /* size: 480, inline expansions: 12 (492 bytes) */

// <00C7E57A> ../public/animationsystem/compression.h:234
inline void CCompressor<Color>::CCompressor(Color arg)
{
} /* size: 0 */

// <00C7DF79> ../public/animationsystem/compression.h:239
// variable: 1
// function calls: 25
void CCompressor<Vector2D>::CCompressor(Vector2D arg)
{
	CUtlMemory<CCompressedAnim<Vector2D>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressedAnim<Vector2D>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressedAnim<Vector2D>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressedAnim<Vector2D>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressedAnim<Vector2D>::CUtlVector(); // 240
	CUtlMemory<CUtlBinaryBlock::ValidateGrowSize(); // 475
	CUtlMemory<CUtlBinaryBlock::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlBinaryBlock::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlBinaryBlock::CUtlVector(); // 240
	{
		CAnimCompressorRegistry* pRegistry; // 94
		CUtlMemory<CCompressedAnim<Vector2D>::NumAllocated(); // 1247
		CUtlMemory<CCompressedAnim<Vector2D>::Base(); // 112
		CUtlVectorBase<CCompressedAnim<Vector2D>::Base(); // 368
		CUtlVectorBase<CCompressedAnim<Vector2D>::ResetDbgInfo(); // 824
		CUtlMemory<CCompressedAnim<Vector2D>::IsGrowable(); // 823
		CUtlMemory<CCompressedAnim<Vector2D>::IsExternallyAllocated(); // 859
		CUtlMemory<CCompressedAnim<Vector2D>::IsExternallyAllocated(); // 861
		CUtlMemory<CCompressedAnim<Vector2D>::Grow(
			int num);  // 806
		CUtlVectorBase<CCompressedAnim<Vector2D>::GrowMemory(
				int num);  // 1249
		Construct<CCompressedAnim<Vector2D>*, CCompressedAnim<Vector2D>*>(CCompressedAnim<Vector2D>** pMemory); // 1252
		CUtlMemory<CCompressedAnim<Vector2D>::operator[](
				int i);  // 602
		CUtlVectorBase<CCompressedAnim<Vector2D>::Element(
			int i);  // 1252
		CUtlVectorBase<CCompressedAnim<Vector2D>::AddToTail(
				CCompressedAnim<Vector2D> *& src);  // 98
	}
	{
	}
	AllocAnimCompressors<Vector2D>(CUtlVector<CCompressedAnim<Vector2D>*, CUtlMemory<CCompressedAnim<Vector2D>*, int> >& compressor,
					int nType);  // 91
	AllocAnimCompressors<Vector2D>(CUtlVector<CCompressedAnim<Vector2D>*, CUtlMemory<CCompressedAnim<Vector2D>*, int> >& compressor,
					int nType);  // 241
} /* size: 480, inline expansions: 12 (492 bytes) */

// <00C7DF54> ../public/animationsystem/compression.h:239
inline void CCompressor<Vector2D>::CCompressor(Vector2D arg)
{
} /* size: 0 */

// <00C7D953> ../public/animationsystem/compression.h:244
// variable: 1
// function calls: 25
void CCompressor<Vector4D>::CCompressor(Vector4D arg)
{
	CUtlMemory<CCompressedAnim<Vector4D>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressedAnim<Vector4D>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressedAnim<Vector4D>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressedAnim<Vector4D>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressedAnim<Vector4D>::CUtlVector(); // 245
	CUtlMemory<CUtlBinaryBlock::ValidateGrowSize(); // 475
	CUtlMemory<CUtlBinaryBlock::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlBinaryBlock::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlBinaryBlock::CUtlVector(); // 245
	{
		CAnimCompressorRegistry* pRegistry; // 94
		CUtlMemory<CCompressedAnim<Vector4D>::NumAllocated(); // 1247
		CUtlMemory<CCompressedAnim<Vector4D>::Base(); // 112
		CUtlVectorBase<CCompressedAnim<Vector4D>::Base(); // 368
		CUtlVectorBase<CCompressedAnim<Vector4D>::ResetDbgInfo(); // 824
		CUtlMemory<CCompressedAnim<Vector4D>::IsGrowable(); // 823
		CUtlMemory<CCompressedAnim<Vector4D>::IsExternallyAllocated(); // 859
		CUtlMemory<CCompressedAnim<Vector4D>::IsExternallyAllocated(); // 861
		CUtlMemory<CCompressedAnim<Vector4D>::Grow(
			int num);  // 806
		CUtlVectorBase<CCompressedAnim<Vector4D>::GrowMemory(
				int num);  // 1249
		Construct<CCompressedAnim<Vector4D>*, CCompressedAnim<Vector4D>*>(CCompressedAnim<Vector4D>** pMemory); // 1252
		CUtlMemory<CCompressedAnim<Vector4D>::operator[](
				int i);  // 602
		CUtlVectorBase<CCompressedAnim<Vector4D>::Element(
			int i);  // 1252
		CUtlVectorBase<CCompressedAnim<Vector4D>::AddToTail(
				CCompressedAnim<Vector4D> *& src);  // 98
	}
	{
	}
	AllocAnimCompressors<Vector4D>(CUtlVector<CCompressedAnim<Vector4D>*, CUtlMemory<CCompressedAnim<Vector4D>*, int> >& compressor,
					int nType);  // 91
	AllocAnimCompressors<Vector4D>(CUtlVector<CCompressedAnim<Vector4D>*, CUtlMemory<CCompressedAnim<Vector4D>*, int> >& compressor,
					int nType);  // 246
} /* size: 480, inline expansions: 12 (492 bytes) */

// <00C7D92E> ../public/animationsystem/compression.h:244
inline void CCompressor<Vector4D>::CCompressor(Vector4D arg)
{
} /* size: 0 */

// <00C7C8DF> ../public/animationsystem/compression.h:254
// variables: 5
// function calls: 65
void CCompressor<float>::AddArray(int nElement, CUtlVector<float, CUtlMemory<float, int> >& data, const float& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21871
	CUtlBinaryBlock* pContainer; // 256
	bool bFoundCompressor; // 257
	{
		int k; // 258
		CUtlVectorBase<CCompressedAnim<float>::Count(); // 258
		CUtlMemory<CCompressedAnim<float>::operator[](
				int i);  // 588
		CUtlVectorBase<CCompressedAnim<float>::operator[](
				int i);  // 260
		CUtlMemory<CCompressedAnim<float>::operator[](
				int i);  // 588
		CUtlVectorBase<CCompressedAnim<float>::operator[](
				int i);  // 262
		CUtlMemory<int, int>::NumAllocated(); // 1196
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 598
		CUtlMemory<float, int>::NumAllocated(); // 1196
		CUtlMemory<float, int>::operator[](
				int i);  // 602
		CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
			int i);  // 1201
		CopyConstruct<float>(float* pMemory,
					const float& src);  // 1201
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
				const float& src);  // 599
		CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::NumAllocated(); // 1143
		CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
			int i);  // 1148
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1479
		Construct<CUtlVector<float> >(CUtlVector<float, CUtlMemory<float, int> >* pMemory); // 1148
		CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Base(); // 112
		Base(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 368
		ResetDbgInfo(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 824
		GrowMemory(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 600
		CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
				int i);  // 601
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
		CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
		CUtlMemory<float, int>::Base(); // 113
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
		CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<CAnimationDecodeOp>(const CAnimationDecodeOp* pFrom,
							const CAnimationDecodeOp* pFromEnd,
							CAnimationDecodeOp* pTo);  // 173
		UtlTraitsCopyRange<float>(const float* pFrom,
						const float* pFromEnd,
						float* pTo);  // 574
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
				const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
				const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
		CUtlVector<float, CUtlMemory<float, int> >::operator=(
				const CUtlVector<float, CUtlMemory<float, int> >& src);  // 601
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 603
		CCompressedAnim<float>::AddArray(
			int nElement,
			CUtlVector<float, CUtlMemory<float, int> >& data,
			const float& reference);  // 262
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 268
	}
	CUtlMemory<CUtlBinaryBlock::NumAllocated(); // 1196
	CUtlMemory<CUtlBinaryBlock::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlBinaryBlock::Element(
		int i);  // 1201
	CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
					CUtlBinaryBlock* const& src);  // 1201
	CUtlMemory<CUtlBinaryBlock::Base(); // 112
	CUtlVectorBase<CUtlBinaryBlock::Base(); // 368
	CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CUtlBinaryBlock::AddToTail(
			CUtlBinaryBlock* const& src);  // 272
} /* size: 578, variables: 3, inline expansions: 9 (121 bytes) */

// <00C7B8DA> ../public/animationsystem/compression.h:254
// variables: 5
// function calls: 68
void CCompressor<Vector>::AddArray(int nElement, CUtlVector<Vector, CUtlMemory<Vector, int> >& data, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21871
	CUtlBinaryBlock* pContainer; // 256
	bool bFoundCompressor; // 257
	{
		int k; // 258
		CUtlVectorBase<CCompressedAnim<Vector>::Count(); // 258
		CUtlMemory<CCompressedAnim<Vector>::operator[](
				int i);  // 588
		CUtlVectorBase<CCompressedAnim<Vector>::operator[](
				int i);  // 260
		CUtlMemory<CCompressedAnim<Vector>::operator[](
				int i);  // 588
		CUtlVectorBase<CCompressedAnim<Vector>::operator[](
				int i);  // 262
		CUtlMemory<int, int>::NumAllocated(); // 1196
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 598
		CUtlMemory<Vector, int>::NumAllocated(); // 1196
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 599
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::NumAllocated(); // 1143
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Base(); // 112
		Base(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 368
		ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 824
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::IsGrowable(); // 823
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
				int num);  // 1145
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int i);  // 1148
		CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
		CUtlMemory<Vector, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1479
		Construct<CUtlVector<Vector> >(CUtlVector<Vector, CUtlMemory<Vector, int> >* pMemory); // 1148
		AddToTail(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 600
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
				int i);  // 601
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
		CUtlMemory<Vector, int>::Base(); // 113
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
		Vector::operator=(
				const Vector& vOther);  // 209
		UtlTraitsCopyRange<Vector>(const Vector* pFrom,
						const Vector* pFromEnd,
						Vector* pTo);  // 200
		UtlTraitsCopyRange<Vector>(const Vector* pFrom,
						const Vector* pFromEnd,
						Vector* pTo);  // 574
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
				const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
				const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
		CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
				const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 601
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 603
		CCompressedAnim<Vector>::AddArray(
			int nElement,
			CUtlVector<Vector, CUtlMemory<Vector, int> >& data,
			const Vector& reference);  // 262
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 268
	}
	CUtlMemory<CUtlBinaryBlock::NumAllocated(); // 1196
	CUtlMemory<CUtlBinaryBlock::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlBinaryBlock::Element(
		int i);  // 1201
	CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
					CUtlBinaryBlock* const& src);  // 1201
	CUtlMemory<CUtlBinaryBlock::Base(); // 112
	CUtlVectorBase<CUtlBinaryBlock::Base(); // 368
	CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CUtlBinaryBlock::AddToTail(
			CUtlBinaryBlock* const& src);  // 272
} /* size: 769, variables: 3, inline expansions: 9 (123 bytes) */

// <00C7A8AE> ../public/animationsystem/compression.h:254
// variables: 5
// function calls: 69
void CCompressor<Quaternion>::AddArray(int nElement, CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& data, const Quaternion& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21871
	CUtlBinaryBlock* pContainer; // 256
	bool bFoundCompressor; // 257
	{
		int k; // 258
		CUtlVectorBase<CCompressedAnim<Quaternion>::Count(); // 258
		CUtlMemory<CCompressedAnim<Quaternion>::operator[](
				int i);  // 588
		CUtlVectorBase<CCompressedAnim<Quaternion>::operator[](
				int i);  // 260
		CUtlMemory<CCompressedAnim<Quaternion>::operator[](
				int i);  // 588
		CUtlVectorBase<CCompressedAnim<Quaternion>::operator[](
				int i);  // 262
		CUtlMemory<int, int>::NumAllocated(); // 1196
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 598
		CUtlMemory<Quaternion, int>::NumAllocated(); // 1196
		CUtlMemory<Quaternion, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Element(
			int i);  // 1201
		CopyConstruct<Quaternion>(Quaternion* pMemory,
						const Quaternion& src);  // 1201
		CUtlMemory<Quaternion, int>::Base(); // 112
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Base(); // 368
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::AddToTail(
				const Quaternion& src);  // 599
		CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::NumAllocated(); // 1143
		CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Base(); // 112
		Base(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 368
		ResetDbgInfo(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 824
		CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::IsGrowable(); // 823
		CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
				int num);  // 1145
		CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
			int i);  // 1148
		CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
		CUtlMemory<Quaternion, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 1479
		Construct<CUtlVector<Quaternion> >(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >* pMemory); // 1148
		AddToTail(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 600
		CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
				int i);  // 601
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 573
		CUtlMemory<Quaternion, int>::Base(); // 112
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Base(); // 102
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::begin(); // 574
		CUtlMemory<Quaternion, int>::Base(); // 113
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Base(); // 105
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 105
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<CAnimationDecodeOp>(const CAnimationDecodeOp* pFrom,
							const CAnimationDecodeOp* pFromEnd,
							CAnimationDecodeOp* pTo);  // 173
		UtlTraitsCopyRange<Quaternion>(const Quaternion* pFrom,
						const Quaternion* pFromEnd,
						Quaternion* pTo);  // 574
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator=(
				const CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >& other);  // 565
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator=(
				const CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >& other);  // 452
		CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::operator=(
				const CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& src);  // 601
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 603
		CCompressedAnim<Quaternion>::AddArray(
			int nElement,
			CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& data,
			const Quaternion& reference);  // 262
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 268
	}
	CUtlMemory<CUtlBinaryBlock::NumAllocated(); // 1196
	CUtlMemory<CUtlBinaryBlock::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlBinaryBlock::Element(
		int i);  // 1201
	CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
					CUtlBinaryBlock* const& src);  // 1201
	CUtlMemory<CUtlBinaryBlock::Base(); // 112
	CUtlVectorBase<CUtlBinaryBlock::Base(); // 368
	CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CUtlBinaryBlock::AddToTail(
			CUtlBinaryBlock* const& src);  // 272
} /* size: 769, variables: 3, inline expansions: 9 (155 bytes) */

// <00C7A6F6> ../public/animationsystem/compression.h:276
// variables: 2
inline void CCompressor<float>::AppendContainers(CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list)
{
	int nCount; // 283
	{
		int k; // 279
	}
} /* size: 0, variables: 1 */

// <00C7A6B6> ../public/animationsystem/compression.h:276
// variables: 2
inline void CCompressor<Vector>::AppendContainers(CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list)
{
	int nCount; // 283
	{
		int k; // 279
	}
} /* size: 0, variables: 1 */

// <00C7A676> ../public/animationsystem/compression.h:276
// variables: 2
inline void CCompressor<Quaternion>::AppendContainers(CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list)
{
	int nCount; // 283
	{
		int k; // 279
	}
} /* size: 0, variables: 1 */

// <00C7A636> ../public/animationsystem/compression.h:276
// variables: 2
inline void CCompressor<int>::AppendContainers(CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list)
{
	int nCount; // 283
	{
		int k; // 279
	}
} /* size: 0, variables: 1 */

// <00C7A5F6> ../public/animationsystem/compression.h:276
// variables: 2
inline void CCompressor<bool>::AppendContainers(CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list)
{
	int nCount; // 283
	{
		int k; // 279
	}
} /* size: 0, variables: 1 */

// <00C7A5B6> ../public/animationsystem/compression.h:276
// variables: 2
inline void CCompressor<Color>::AppendContainers(CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list)
{
	int nCount; // 283
	{
		int k; // 279
	}
} /* size: 0, variables: 1 */

// <00C7A576> ../public/animationsystem/compression.h:276
// variables: 2
inline void CCompressor<Vector2D>::AppendContainers(CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list)
{
	int nCount; // 283
	{
		int k; // 279
	}
} /* size: 0, variables: 1 */

// <00C7A536> ../public/animationsystem/compression.h:276
// variables: 2
inline void CCompressor<Vector4D>::AppendContainers(CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list)
{
	int nCount; // 283
	{
		int k; // 279
	}
} /* size: 0, variables: 1 */

// <00C62475> ../public/animationsystem/compression.h:289
// variables: 2
inline void CCompressor<float>::CollapseContainers()
{
	{
		int k; // 291
		{
			CUtlBinaryBlock* pContainer; // 293
		}
	}
} /* size: 0 */

// <00C6241A> ../public/animationsystem/compression.h:289
// variables: 2
inline void CCompressor<Vector>::CollapseContainers()
{
	{
		int k; // 291
		{
			CUtlBinaryBlock* pContainer; // 293
		}
	}
} /* size: 0 */

// <00C623E5> ../public/animationsystem/compression.h:289
// variables: 2
inline void CCompressor<Quaternion>::CollapseContainers()
{
	{
		int k; // 291
		{
			CUtlBinaryBlock* pContainer; // 293
		}
	}
} /* size: 0 */

// <00C623B0> ../public/animationsystem/compression.h:289
// variables: 2
inline void CCompressor<int>::CollapseContainers()
{
	{
		int k; // 291
		{
			CUtlBinaryBlock* pContainer; // 293
		}
	}
} /* size: 0 */

// <00C6237B> ../public/animationsystem/compression.h:289
// variables: 2
inline void CCompressor<bool>::CollapseContainers()
{
	{
		int k; // 291
		{
			CUtlBinaryBlock* pContainer; // 293
		}
	}
} /* size: 0 */

// <00C62346> ../public/animationsystem/compression.h:289
// variables: 2
inline void CCompressor<Color>::CollapseContainers()
{
	{
		int k; // 291
		{
			CUtlBinaryBlock* pContainer; // 293
		}
	}
} /* size: 0 */

// <00C62311> ../public/animationsystem/compression.h:289
// variables: 2
inline void CCompressor<Vector2D>::CollapseContainers()
{
	{
		int k; // 291
		{
			CUtlBinaryBlock* pContainer; // 293
		}
	}
} /* size: 0 */

// <00C622DC> ../public/animationsystem/compression.h:289
// variables: 2
inline void CCompressor<Vector4D>::CollapseContainers()
{
	{
		int k; // 291
		{
			CUtlBinaryBlock* pContainer; // 293
		}
	}
} /* size: 0 */

// <0032C9BB> ../public/animationsystem/compression.h:314
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <00293A40> ../public/animationsystem/compression.h:314
// member function: 1
// class size: 1
class CSchemaTypeOf<CCompressor<Vector> > {
	/* ../public/animationsystem/compression.h:314 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00293A9A> ../public/animationsystem/compression.h:314
// member function: 1
// class size: 1
class CSchemaTypeOf<CCompressor<Quaternion> > {
	/* ../public/animationsystem/compression.h:314 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00293AF4> ../public/animationsystem/compression.h:314
// member function: 1
// class size: 1
class CSchemaTypeOf<CCompressor<int> > {
	/* ../public/animationsystem/compression.h:314 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00293B4E> ../public/animationsystem/compression.h:314
// member function: 1
// class size: 1
class CSchemaTypeOf<CCompressor<bool> > {
	/* ../public/animationsystem/compression.h:314 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00293BA8> ../public/animationsystem/compression.h:314
// member function: 1
// class size: 1
class CSchemaTypeOf<CCompressor<Color> > {
	/* ../public/animationsystem/compression.h:314 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00293C02> ../public/animationsystem/compression.h:314
// member function: 1
// class size: 1
class CSchemaTypeOf<CCompressor<Vector2D> > {
	/* ../public/animationsystem/compression.h:314 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00293C5C> ../public/animationsystem/compression.h:314
// member function: 1
// class size: 1
class CSchemaTypeOf<CCompressor<Vector4D> > {
	/* ../public/animationsystem/compression.h:314 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00929B86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:318
// member functions: 4
// member variables: 3
// class size: 16
class CCompressorSegment {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:321 */
	void CCompressorSegment(CCompressorSegment* , int, CUtlBinaryBlock* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:328 */
	void ~CCompressorSegment(CCompressorSegment* );
	uint32 m_hash; /* 0 4 */
	int m_nChannel; /* 4 4 */
	CUtlBinaryBlock * m_pContainer; /* 8 8 */
	void CCompressorSegment(class CCompressorSegment *, int, class CUtlBinaryBlock *); /* linkage=_ZN18CCompressorSegmentC4EiP15CUtlBinaryBlock */
	void ~CCompressorSegment(class CCompressorSegment *); /* linkage=_ZN18CCompressorSegmentD4Ev */
};

// <00BA76AE> ../public/animationsystem/compression.h:318
// member functions: 4
// member variables: 3
// class size: 16
class CCompressorSegment {
	/* ../public/animationsystem/compression.h:321 */
	void CCompressorSegment(CCompressorSegment* , int, CUtlBinaryBlock* );
	/* ../public/animationsystem/compression.h:328 */
	void ~CCompressorSegment(CCompressorSegment* );
	uint32 m_hash; /* 0 4 */
	int m_nChannel; /* 4 4 */
	CUtlBinaryBlock * m_pContainer; /* 8 8 */
	void CCompressorSegment(class CCompressorSegment *, int, class CUtlBinaryBlock *); /* linkage=_ZN18CCompressorSegmentC4EiP15CUtlBinaryBlock */
	void ~CCompressorSegment(class CCompressorSegment *); /* linkage=_ZN18CCompressorSegmentD4Ev */
};

// <00D18D8E> ../public/animationsystem/compression.h:321
void CCompressorSegment::CCompressorSegment(int nChannel, CUtlBinaryBlock* pContainer)
{
} /* size: 0 */

// <00D18D5B> ../public/animationsystem/compression.h:321
inline void CCompressorSegment::CCompressorSegment(int nChannel, CUtlBinaryBlock* pContainer)
{
} /* size: 0 */

// <00D18CF8> ../public/animationsystem/compression.h:328
inline void CCompressorSegment::~CCompressorSegment()
{
} /* size: 0 */

// <00CF851E> ../public/animationsystem/compression.h:342
void CCompressorGroup::~CCompressorGroup()
{
} /* size: 0 */

// <00CF8501> ../public/animationsystem/compression.h:342
inline void CCompressorGroup::~CCompressorGroup()
{
} /* size: 0 */

// <009FA252> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:342
inline void CCompressorGroup::operator=(const CCompressorGroup &)
{
} /* size: 0 */

// <009F7CDC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:342
// variables: 3
// function calls: 197
void CCompressorGroup::~CCompressorGroup()
{
	CUtlVectorBase<CCompressor<Vector4D>::RemoveAll(); // 1798
	CUtlMemory<CCompressor<Vector4D>::IsExternallyAllocated(); // 905
	CUtlMemory<CCompressor<Vector4D>::Purge(); // 903
	CUtlMemory<CCompressor<Vector4D>::Purge(); // 1799
	CUtlVectorBase<CCompressor<Vector4D>::Purge(); // 560
	ValidateAlignment<CCompressor<Vector4D>*>(void); // 508
	CUtlMemory<CCompressor<Vector4D>::Purge(); // 510
	CUtlMemory<CCompressor<Vector4D>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<Vector4D>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<Vector4D>::~CUtlVector(); // 342
	CUtlVectorBase<CCompressor<Vector2D>::RemoveAll(); // 1798
	CUtlMemory<CCompressor<Vector2D>::IsExternallyAllocated(); // 905
	CUtlMemory<CCompressor<Vector2D>::Purge(); // 903
	CUtlMemory<CCompressor<Vector2D>::Purge(); // 1799
	CUtlVectorBase<CCompressor<Vector2D>::Purge(); // 560
	ValidateAlignment<CCompressor<Vector2D>*>(void); // 508
	CUtlMemory<CCompressor<Vector2D>::Purge(); // 510
	CUtlMemory<CCompressor<Vector2D>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<Vector2D>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<Vector2D>::~CUtlVector(); // 342
	CUtlVectorBase<CCompressor<Color>::RemoveAll(); // 1798
	CUtlMemory<CCompressor<Color>::IsExternallyAllocated(); // 905
	CUtlMemory<CCompressor<Color>::Purge(); // 903
	CUtlMemory<CCompressor<Color>::Purge(); // 1799
	CUtlVectorBase<CCompressor<Color>::Purge(); // 560
	ValidateAlignment<CCompressor<Color>*>(void); // 508
	CUtlMemory<CCompressor<Color>::Purge(); // 510
	CUtlMemory<CCompressor<Color>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<Color>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<Color>::~CUtlVector(); // 342
	CUtlVectorBase<CCompressor<bool>::RemoveAll(); // 1798
	CUtlMemory<CCompressor<bool>::IsExternallyAllocated(); // 905
	CUtlMemory<CCompressor<bool>::Purge(); // 903
	CUtlMemory<CCompressor<bool>::Purge(); // 1799
	CUtlVectorBase<CCompressor<bool>::Purge(); // 560
	ValidateAlignment<CCompressor<bool>*>(void); // 508
	CUtlMemory<CCompressor<bool>::Purge(); // 510
	CUtlMemory<CCompressor<bool>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<bool>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<bool>::~CUtlVector(); // 342
	CUtlVectorBase<CCompressor<int>::RemoveAll(); // 1798
	CUtlMemory<CCompressor<int>::IsExternallyAllocated(); // 905
	CUtlMemory<CCompressor<int>::Purge(); // 903
	CUtlMemory<CCompressor<int>::Purge(); // 1799
	CUtlVectorBase<CCompressor<int>::Purge(); // 560
	ValidateAlignment<CCompressor<int>*>(void); // 508
	CUtlMemory<CCompressor<int>::Purge(); // 510
	CUtlMemory<CCompressor<int>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<int>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<int>::~CUtlVector(); // 342
	CUtlVectorBase<CCompressor<Quaternion>::RemoveAll(); // 1798
	CUtlMemory<CCompressor<Quaternion>::IsExternallyAllocated(); // 905
	CUtlMemory<CCompressor<Quaternion>::Purge(); // 903
	CUtlMemory<CCompressor<Quaternion>::Purge(); // 1799
	CUtlVectorBase<CCompressor<Quaternion>::Purge(); // 560
	ValidateAlignment<CCompressor<Quaternion>*>(void); // 508
	CUtlMemory<CCompressor<Quaternion>::Purge(); // 510
	CUtlMemory<CCompressor<Quaternion>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<Quaternion>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<Quaternion>::~CUtlVector(); // 342
	CUtlVectorBase<CCompressor<Vector>::RemoveAll(); // 1798
	CUtlMemory<CCompressor<Vector>::IsExternallyAllocated(); // 905
	CUtlMemory<CCompressor<Vector>::Purge(); // 903
	CUtlMemory<CCompressor<Vector>::Purge(); // 1799
	CUtlVectorBase<CCompressor<Vector>::Purge(); // 560
	ValidateAlignment<CCompressor<Vector>*>(void); // 508
	CUtlMemory<CCompressor<Vector>::Purge(); // 510
	CUtlMemory<CCompressor<Vector>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<Vector>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<Vector>::~CUtlVector(); // 342
	CUtlVectorBase<CCompressor<float>::RemoveAll(); // 1798
	CUtlMemory<CCompressor<float>::IsExternallyAllocated(); // 905
	CUtlMemory<CCompressor<float>::Purge(); // 903
	CUtlMemory<CCompressor<float>::Purge(); // 1799
	CUtlVectorBase<CCompressor<float>::Purge(); // 560
	ValidateAlignment<CCompressor<float>*>(void); // 508
	CUtlMemory<CCompressor<float>::Purge(); // 510
	CUtlMemory<CCompressor<float>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<float>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<float>::~CUtlVector(); // 342
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 342
	{
		int i; // 1721
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<int> >(CUtlVector<int, CUtlMemory<int, int> >* pMemory); // 1723
	}
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 1799
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Purge(); // 560
	ValidateAlignment<CUtlVector<int> >(void); // 508
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVector(); // 342
	{
		int i; // 1721
		CUtlMemory<CUtlVector<char const::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<char const::Element(
			int i);  // 1723
		CUtlVectorBase<char const::RemoveAll(); // 1798
		CUtlMemory<char const::IsExternallyAllocated(); // 905
		CUtlMemory<char const::Purge(); // 903
		CUtlMemory<char const::Purge(); // 1799
		CUtlVectorBase<char const::Purge(); // 560
		ValidateAlignment<char const*>(void); // 508
		CUtlMemory<char const::Purge(); // 510
		CUtlMemory<char const::~CUtlMemory(); // 562
		CUtlVectorBase<char const::~CUtlVectorBase(); // 410
		CUtlVector<char const::~CUtlVector(); // 1526
		Destruct<CUtlVector<char const*, CUtlMemory<char const*, int> > >(CUtlVector<char const*, CUtlMemory<char const*, int> >* pMemory); // 1723
	}
	CUtlVectorBase<CUtlVector<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlVector<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<char const::Purge(); // 903
	CUtlMemory<CUtlVector<char const::Purge(); // 1799
	CUtlVectorBase<CUtlVector<char const::Purge(); // 560
	ValidateAlignment<CUtlVector<char const*, CUtlMemory<char const*, int> > >(void); // 508
	CUtlMemory<CUtlVector<char const::Purge(); // 510
	CUtlMemory<CUtlVector<char const::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlVector<char const::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<char const::~CUtlVector(); // 342
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 342
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 342
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 342
	CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::RemoveAll(); // 1798
	CUtlMemory<fieldtype_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<fieldtype_t, int>::Purge(); // 903
	CUtlMemory<fieldtype_t, int>::Purge(); // 1799
	CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::Purge(); // 560
	ValidateAlignment<fieldtype_t>(void); // 508
	CUtlMemory<fieldtype_t, int>::Purge(); // 510
	CUtlMemory<fieldtype_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<fieldtype_t, CUtlMemory<fieldtype_t, int> >::~CUtlVector(); // 342
	CUtlVectorBase<char::RemoveAll(); // 1798
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 342
	CUtlVectorBase<char::RemoveAll(); // 1798
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 342
} /* size: 931, inline expansions: 167 (3843 bytes) */

// <0093AD1B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:342
// member functions: 50
// member variables: 18
// static member variable: 1
// class size: 552
class CCompressorGroup {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:344 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:344 */
	CCompressorGroup* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:344 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:344 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:344 */
	void Schema_CompileTimeVerificationFunction(CCompressorGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:344 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:344 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:344 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CCompressorGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:347 */
	void CCompressorGroup(CCompressorGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:349 */
	int FindCreateChannel(CCompressorGroup* , const char* , const char* , fieldtype_t, int, CUtlString, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:421 */
	int AddToChannel(CCompressorGroup* , int, const char* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:429 */
	int GetElementCount(CCompressorGroup* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:434 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<float, CUtlMemory<float, int> >& , float& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:442 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<Vector, CUtlMemory<Vector, int> >& , Vector& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:450 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& , Quaternion& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:458 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<int, CUtlMemory<int, int> >& , int& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:466 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<bool, CUtlMemory<bool, int> >& , bool& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:474 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<Color, CUtlMemory<Color, int> >& , Color& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:482 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& , Vector2D& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:490 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& , Vector4D& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:499 */
	void GetAllSegments(CCompressorGroup* , CUtlVector<CCompressorSegment*, CUtlMemory<CCompressorSegment*, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:540 */
	int GetChannelCount(CCompressorGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:545 */
	int GetTotalElementCount(CCompressorGroup* );
	int m_nTotalElementCount; /* 0 4 */
	CUtlVector<char*, CUtlMemory<char*, int> > m_szChannelClass; /* 8 32 */
	CUtlVector<char*, CUtlMemory<char*, int> > m_szVariableName; /* 40 32 */
	CUtlVector<fieldtype_t, CUtlMemory<fieldtype_t, int> > m_nType; /* 72 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nFlags; /* 104 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_szGrouping; /* 136 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nCompressorIndex; /* 168 32 */
	CUtlVector<CUtlVector<char const*, CUtlMemory<char const*, int> >, CUtlMemory<CUtlVector<char const*, CUtlMemory<char const*, int> >, int> > m_szElementNames; /* 200 32 */
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > m_nElementUniqueID; /* 232 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_nElementMask; /* 264 32 */
	CUtlVector<CCompressor<float>*, CUtlMemory<CCompressor<float>*, int> > m_floatCompressor; /* 296 32 */
	CUtlVector<CCompressor<Vector>*, CUtlMemory<CCompressor<Vector>*, int> > m_vectorCompressor; /* 328 32 */
	CUtlVector<CCompressor<Quaternion>*, CUtlMemory<CCompressor<Quaternion>*, int> > m_quaternionCompressor; /* 360 32 */
	CUtlVector<CCompressor<int>*, CUtlMemory<CCompressor<int>*, int> > m_intCompressor; /* 392 32 */
	CUtlVector<CCompressor<bool>*, CUtlMemory<CCompressor<bool>*, int> > m_boolCompressor; /* 424 32 */
	CUtlVector<CCompressor<Color>*, CUtlMemory<CCompressor<Color>*, int> > m_colorCompressor; /* 456 32 */
	CUtlVector<CCompressor<Vector2D>*, CUtlMemory<CCompressor<Vector2D>*, int> > m_vector2DCompressor; /* 488 32 */
	CUtlVector<CCompressor<Vector4D>*, CUtlMemory<CCompressor<Vector4D>*, int> > m_vector4DCompressor; /* 520 32 */
	void ~CCompressorGroup(CCompressorGroup* );
	CCompressorGroup& operator=(CCompressorGroup* , const CCompressorGroup& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CCompressorGroup17GetPrimaryBindingEv */
	class CCompressorGroup * Schema_MarkHelperFn(void); /* linkage=_ZN16CCompressorGroup19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CCompressorGroup15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <a565de> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/compression_h_schema.gen_cpp:149 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CCompressorGroup32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CCompressorGroup *); /* linkage=_ZN16CCompressorGroup38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CCompressorGroup20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CCompressorGroup22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CCompressorGroup  *); /* linkage=_ZNK16CCompressorGroup21Schema_DynamicBindingEv */
	void CCompressorGroup(class CCompressorGroup *); /* linkage=_ZN16CCompressorGroupC4Ev */
	int FindCreateChannel(class CCompressorGroup *, const char  *, const char  *, enum fieldtype_t, int, class CUtlString, bool); /* linkage=_ZN16CCompressorGroup17FindCreateChannelEPKcS1_11fieldtype_ti10CUtlStringb */
	int AddToChannel(class CCompressorGroup *, int, const char  *, uint32); /* linkage=_ZN16CCompressorGroup12AddToChannelEiPKcj */
	int GetElementCount(class CCompressorGroup *, int); /* linkage=_ZN16CCompressorGroup15GetElementCountEi */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<float, CUtlMemory<float, int> > &, float &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorIf10CUtlMemoryIfiEERf20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, class Vector &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorI6Vector10CUtlMemoryIS1_iEERS1_20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > &, class Quaternion &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorI10Quaternion10CUtlMemoryIS1_iEERS1_20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<int, CUtlMemory<int, int> > &, int &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorIi10CUtlMemoryIiiEERi20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<bool, CUtlMemory<bool, int> > &, bool &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorIb10CUtlMemoryIbiEERb20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<Color, CUtlMemory<Color, int> > &, class Color &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorI5Color10CUtlMemoryIS1_iEERS1_20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > &, class Vector2D &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorI8Vector2D10CUtlMemoryIS1_iEERS1_20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > &, class Vector4D &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorI8Vector4D10CUtlMemoryIS1_iEERS1_20AnimCompressEnable_t */
	void GetAllSegments(class CCompressorGroup *, class CUtlVector<CCompressorSegment*, CUtlMemory<CCompressorSegment*, int> > &); /* linkage=_ZN16CCompressorGroup14GetAllSegmentsER10CUtlVectorIP18CCompressorSegment10CUtlMemoryIS2_iEE */
	int GetChannelCount(class CCompressorGroup *); /* linkage=_ZN16CCompressorGroup15GetChannelCountEv */
	int GetTotalElementCount(class CCompressorGroup *); /* linkage=_ZN16CCompressorGroup20GetTotalElementCountEv */
	void ~CCompressorGroup(class CCompressorGroup *); /* linkage=_ZN16CCompressorGroupD4Ev */
	class CCompressorGroup & operator=(class CCompressorGroup *, const class CCompressorGroup  &); /* linkage=_ZN16CCompressorGroupaSERKS_ */
};

// <00BB8691> ../public/animationsystem/compression.h:342
// member functions: 49
// member variables: 18
// static member variable: 1
// class size: 552
class CCompressorGroup {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/compression.h:344 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/compression.h:344 */
	CCompressorGroup* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/compression.h:344 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/compression.h:344 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/compression.h:344 */
	void Schema_CompileTimeVerificationFunction(CCompressorGroup* );
	/* ../public/animationsystem/compression.h:344 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/compression.h:344 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/compression.h:344 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CCompressorGroup* );
	/* ../public/animationsystem/compression.h:347 */
	void CCompressorGroup(CCompressorGroup* );
	/* ../public/animationsystem/compression.h:349 */
	int FindCreateChannel(CCompressorGroup* , const char* , const char* , fieldtype_t, int, CUtlString, bool);
	/* ../public/animationsystem/compression.h:421 */
	int AddToChannel(CCompressorGroup* , int, const char* , uint32);
	/* ../public/animationsystem/compression.h:429 */
	int GetElementCount(CCompressorGroup* , int);
	/* ../public/animationsystem/compression.h:434 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<float, CUtlMemory<float, int> >& , float& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:442 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<Vector, CUtlMemory<Vector, int> >& , Vector& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:450 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& , Quaternion& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:458 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<int, CUtlMemory<int, int> >& , int& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:466 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<bool, CUtlMemory<bool, int> >& , bool& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:474 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<Color, CUtlMemory<Color, int> >& , Color& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:482 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& , Vector2D& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:490 */
	void AddArray(CCompressorGroup* , int, int, CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& , Vector4D& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:499 */
	void GetAllSegments(CCompressorGroup* , CUtlVector<CCompressorSegment*, CUtlMemory<CCompressorSegment*, int> >& );
	/* ../public/animationsystem/compression.h:540 */
	int GetChannelCount(CCompressorGroup* );
	/* ../public/animationsystem/compression.h:545 */
	int GetTotalElementCount(CCompressorGroup* );
	int m_nTotalElementCount; /* 0 4 */
	CUtlVector<char*, CUtlMemory<char*, int> > m_szChannelClass; /* 8 32 */
	CUtlVector<char*, CUtlMemory<char*, int> > m_szVariableName; /* 40 32 */
	CUtlVector<fieldtype_t, CUtlMemory<fieldtype_t, int> > m_nType; /* 72 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nFlags; /* 104 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_szGrouping; /* 136 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nCompressorIndex; /* 168 32 */
	CUtlVector<CUtlVector<char const*, CUtlMemory<char const*, int> >, CUtlMemory<CUtlVector<char const*, CUtlMemory<char const*, int> >, int> > m_szElementNames; /* 200 32 */
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > m_nElementUniqueID; /* 232 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_nElementMask; /* 264 32 */
	CUtlVector<CCompressor<float>*, CUtlMemory<CCompressor<float>*, int> > m_floatCompressor; /* 296 32 */
	CUtlVector<CCompressor<Vector>*, CUtlMemory<CCompressor<Vector>*, int> > m_vectorCompressor; /* 328 32 */
	CUtlVector<CCompressor<Quaternion>*, CUtlMemory<CCompressor<Quaternion>*, int> > m_quaternionCompressor; /* 360 32 */
	CUtlVector<CCompressor<int>*, CUtlMemory<CCompressor<int>*, int> > m_intCompressor; /* 392 32 */
	CUtlVector<CCompressor<bool>*, CUtlMemory<CCompressor<bool>*, int> > m_boolCompressor; /* 424 32 */
	CUtlVector<CCompressor<Color>*, CUtlMemory<CCompressor<Color>*, int> > m_colorCompressor; /* 456 32 */
	CUtlVector<CCompressor<Vector2D>*, CUtlMemory<CCompressor<Vector2D>*, int> > m_vector2DCompressor; /* 488 32 */
	CUtlVector<CCompressor<Vector4D>*, CUtlMemory<CCompressor<Vector4D>*, int> > m_vector4DCompressor; /* 520 32 */
	void ~CCompressorGroup(CCompressorGroup* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CCompressorGroup17GetPrimaryBindingEv */
	class CCompressorGroup * Schema_MarkHelperFn(void); /* linkage=_ZN16CCompressorGroup19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CCompressorGroup15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <a565de> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/compression_h_schema.gen_cpp:149 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CCompressorGroup32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CCompressorGroup *); /* linkage=_ZN16CCompressorGroup38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CCompressorGroup20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CCompressorGroup22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CCompressorGroup  *); /* linkage=_ZNK16CCompressorGroup21Schema_DynamicBindingEv */
	void CCompressorGroup(class CCompressorGroup *); /* linkage=_ZN16CCompressorGroupC4Ev */
	int FindCreateChannel(class CCompressorGroup *, const char  *, const char  *, enum fieldtype_t, int, class CUtlString, bool); /* linkage=_ZN16CCompressorGroup17FindCreateChannelEPKcS1_11fieldtype_ti10CUtlStringb */
	int AddToChannel(class CCompressorGroup *, int, const char  *, uint32); /* linkage=_ZN16CCompressorGroup12AddToChannelEiPKcj */
	int GetElementCount(class CCompressorGroup *, int); /* linkage=_ZN16CCompressorGroup15GetElementCountEi */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<float, CUtlMemory<float, int> > &, float &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorIf10CUtlMemoryIfiEERf20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, class Vector &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorI6Vector10CUtlMemoryIS1_iEERS1_20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > &, class Quaternion &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorI10Quaternion10CUtlMemoryIS1_iEERS1_20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<int, CUtlMemory<int, int> > &, int &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorIi10CUtlMemoryIiiEERi20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<bool, CUtlMemory<bool, int> > &, bool &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorIb10CUtlMemoryIbiEERb20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<Color, CUtlMemory<Color, int> > &, class Color &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorI5Color10CUtlMemoryIS1_iEERS1_20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > &, class Vector2D &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorI8Vector2D10CUtlMemoryIS1_iEERS1_20AnimCompressEnable_t */
	void AddArray(class CCompressorGroup *, int, int, class CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > &, class Vector4D &, enum AnimCompressEnable_t); /* linkage=_ZN16CCompressorGroup8AddArrayEiiR10CUtlVectorI8Vector4D10CUtlMemoryIS1_iEERS1_20AnimCompressEnable_t */
	void GetAllSegments(class CCompressorGroup *, class CUtlVector<CCompressorSegment*, CUtlMemory<CCompressorSegment*, int> > &); /* linkage=_ZN16CCompressorGroup14GetAllSegmentsER10CUtlVectorIP18CCompressorSegment10CUtlMemoryIS2_iEE */
	int GetChannelCount(class CCompressorGroup *); /* linkage=_ZN16CCompressorGroup15GetChannelCountEv */
	int GetTotalElementCount(class CCompressorGroup *); /* linkage=_ZN16CCompressorGroup20GetTotalElementCountEv */
	void ~CCompressorGroup(class CCompressorGroup *); /* linkage=_ZN16CCompressorGroupD4Ev */
	class CCompressorGroup & operator=(class CCompressorGroup *, const class CCompressorGroup  &); /* linkage=_ZN16CCompressorGroupaSERKS_ */
};

// <009FA54F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:344
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <009FA549> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:344
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <009FA530> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:344
inline void CCompressorGroup::Schema_DynamicBinding()
{
} /* size: 0 */

// <00D18AA5> ../public/animationsystem/compression.h:347
void CCompressorGroup::CCompressorGroup()
{
} /* size: 0 */

// <00D18A8C> ../public/animationsystem/compression.h:347
inline void CCompressorGroup::CCompressorGroup()
{
} /* size: 0 */

// <00D15F06> ../public/animationsystem/compression.h:349
// variables: 4
// function calls: 174
void CCompressorGroup::FindCreateChannel(const char* szChannelClass, const char* szVariableName, fieldtype_t nType, int nFlags, CUtlString szGrouping, bool bUnique)
{
	int nChannel; // 375
	const char   __FUNCTION__; // 22114
	{
		int nChannel; // 354
		CUtlVectorBase<char::Count(); // 354
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 356
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 358
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 360
		CUtlMemory<fieldtype_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::operator[](
				int i);  // 362
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 364
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 414
	}
	CUtlMemory<char::NumAllocated(); // 1247
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1252
	Construct<char*, char*>(char** pMemory); // 1252
	CUtlMemory<char::Base(); // 112
	CUtlVectorBase<char::Base(); // 368
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<char::AddToTail(
			char *& src);  // 377
	CUtlMemory<char::NumAllocated(); // 1247
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1252
	Construct<char*, char*>(char** pMemory); // 1252
	CUtlMemory<char::Base(); // 112
	CUtlVectorBase<char::Base(); // 368
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<char::AddToTail(
			char *& src);  // 378
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1201
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1520
	CopyConstruct<CUtlString>(CUtlString* pMemory,
					const CUtlString& src);  // 1201
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			const CUtlString& src);  // 379
	CUtlMemory<fieldtype_t, int>::NumAllocated(); // 1196
	CUtlMemory<fieldtype_t, int>::Base(); // 112
	CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::Base(); // 368
	CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<fieldtype_t, int>::IsGrowable(); // 823
	CUtlMemory<fieldtype_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<fieldtype_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<fieldtype_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::GrowMemory(
			int num);  // 1198
	CopyConstruct<fieldtype_t>(fieldtype_t* pMemory,
					const fieldtype_t& src);  // 1201
	CUtlMemory<fieldtype_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::Element(
		int i);  // 1201
	CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::AddToTail(
			const fieldtype_t& src);  // 381
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
			const int& src);  // 382
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 393
	CUtlMemory<CCompressor<Vector>::NumAllocated(); // 1247
	CUtlMemory<CCompressor<Vector>::Base(); // 112
	CUtlVectorBase<CCompressor<Vector>::Base(); // 368
	CUtlVectorBase<CCompressor<Vector>::ResetDbgInfo(); // 824
	CUtlMemory<CCompressor<Vector>::IsGrowable(); // 823
	CUtlMemory<CCompressor<Vector>::IsExternallyAllocated(); // 859
	CUtlMemory<CCompressor<Vector>::IsExternallyAllocated(); // 861
	CUtlMemory<CCompressor<Vector>::Grow(
		int num);  // 806
	CUtlVectorBase<CCompressor<Vector>::GrowMemory(
			int num);  // 1249
	CUtlMemory<CCompressor<Vector>::operator[](
			int i);  // 602
	CUtlVectorBase<CCompressor<Vector>::Element(
		int i);  // 1252
	Construct<CCompressor<Vector>*, CCompressor<Vector>*>(CCompressor<Vector>** pMemory); // 1252
	CUtlVectorBase<CCompressor<Vector>::AddToTail(
			CCompressor<Vector> *& src);  // 393
	CUtlMemory<CCompressor<Vector4D>::operator[](
			int i);  // 602
	CUtlVectorBase<CCompressor<Vector4D>::Element(
		int i);  // 1252
	Construct<CCompressor<Vector4D>*, CCompressor<Vector4D>*>(CCompressor<Vector4D>** pMemory); // 1252
	CUtlMemory<CCompressor<Vector4D>::NumAllocated(); // 1247
	CUtlMemory<CCompressor<Vector4D>::Base(); // 112
	CUtlVectorBase<CCompressor<Vector4D>::Base(); // 368
	CUtlVectorBase<CCompressor<Vector4D>::ResetDbgInfo(); // 824
	CUtlMemory<CCompressor<Vector4D>::IsGrowable(); // 823
	CUtlMemory<CCompressor<Vector4D>::IsExternallyAllocated(); // 859
	CUtlMemory<CCompressor<Vector4D>::IsExternallyAllocated(); // 861
	CUtlMemory<CCompressor<Vector4D>::Grow(
		int num);  // 806
	CUtlVectorBase<CCompressor<Vector4D>::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<CCompressor<Vector4D>::AddToTail(
			CCompressor<Vector4D> *& src);  // 411
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 411
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 396
	CUtlMemory<CCompressor<Quaternion>::NumAllocated(); // 1247
	CUtlMemory<CCompressor<Quaternion>::Base(); // 112
	CUtlVectorBase<CCompressor<Quaternion>::Base(); // 368
	CUtlVectorBase<CCompressor<Quaternion>::ResetDbgInfo(); // 824
	CUtlMemory<CCompressor<Quaternion>::IsGrowable(); // 823
	CUtlMemory<CCompressor<Quaternion>::IsExternallyAllocated(); // 859
	CUtlMemory<CCompressor<Quaternion>::IsExternallyAllocated(); // 861
	CUtlMemory<CCompressor<Quaternion>::Grow(
		int num);  // 806
	CUtlVectorBase<CCompressor<Quaternion>::GrowMemory(
			int num);  // 1249
	CUtlMemory<CCompressor<Quaternion>::operator[](
			int i);  // 602
	CUtlVectorBase<CCompressor<Quaternion>::Element(
		int i);  // 1252
	Construct<CCompressor<Quaternion>*, CCompressor<Quaternion>*>(CCompressor<Quaternion>** pMemory); // 1252
	CUtlVectorBase<CCompressor<Quaternion>::AddToTail(
			CCompressor<Quaternion> *& src);  // 396
	CUtlMemory<CCompressor<float>::NumAllocated(); // 1247
	CUtlMemory<CCompressor<float>::Base(); // 112
	CUtlVectorBase<CCompressor<float>::Base(); // 368
	CUtlVectorBase<CCompressor<float>::ResetDbgInfo(); // 824
	CUtlMemory<CCompressor<float>::IsGrowable(); // 823
	CUtlMemory<CCompressor<float>::IsExternallyAllocated(); // 859
	CUtlMemory<CCompressor<float>::IsExternallyAllocated(); // 861
	CUtlMemory<CCompressor<float>::Grow(
		int num);  // 806
	CUtlVectorBase<CCompressor<float>::GrowMemory(
			int num);  // 1249
	CUtlMemory<CCompressor<float>::operator[](
			int i);  // 602
	CUtlVectorBase<CCompressor<float>::Element(
		int i);  // 1252
	Construct<CCompressor<float>*, CCompressor<float>*>(CCompressor<float>** pMemory); // 1252
	CUtlVectorBase<CCompressor<float>::AddToTail(
			CCompressor<float> *& src);  // 390
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 411
	CUtlMemory<CCompressor<int>::NumAllocated(); // 1247
	CUtlMemory<CCompressor<int>::Base(); // 112
	CUtlVectorBase<CCompressor<int>::Base(); // 368
	CUtlVectorBase<CCompressor<int>::ResetDbgInfo(); // 824
	CUtlMemory<CCompressor<int>::IsGrowable(); // 823
	CUtlMemory<CCompressor<int>::IsExternallyAllocated(); // 859
	CUtlMemory<CCompressor<int>::IsExternallyAllocated(); // 861
	CUtlMemory<CCompressor<int>::Grow(
		int num);  // 806
	CUtlVectorBase<CCompressor<int>::GrowMemory(
			int num);  // 1249
	CUtlMemory<CCompressor<int>::operator[](
			int i);  // 602
	CUtlVectorBase<CCompressor<int>::Element(
		int i);  // 1252
	Construct<CCompressor<int>*, CCompressor<int>*>(CCompressor<int>** pMemory); // 1252
	CUtlVectorBase<CCompressor<int>::AddToTail(
			CCompressor<int> *& src);  // 399
	CUtlMemory<CCompressor<bool>::NumAllocated(); // 1247
	CUtlMemory<CCompressor<bool>::Base(); // 112
	CUtlVectorBase<CCompressor<bool>::Base(); // 368
	CUtlVectorBase<CCompressor<bool>::ResetDbgInfo(); // 824
	CUtlMemory<CCompressor<bool>::IsGrowable(); // 823
	CUtlMemory<CCompressor<bool>::IsExternallyAllocated(); // 859
	CUtlMemory<CCompressor<bool>::IsExternallyAllocated(); // 861
	CUtlMemory<CCompressor<bool>::Grow(
		int num);  // 806
	CUtlVectorBase<CCompressor<bool>::GrowMemory(
			int num);  // 1249
	CUtlMemory<CCompressor<bool>::operator[](
			int i);  // 602
	CUtlVectorBase<CCompressor<bool>::Element(
		int i);  // 1252
	Construct<CCompressor<bool>*, CCompressor<bool>*>(CCompressor<bool>** pMemory); // 1252
	CUtlVectorBase<CCompressor<bool>::AddToTail(
			CCompressor<bool> *& src);  // 402
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 405
	CUtlMemory<CCompressor<Color>::NumAllocated(); // 1247
	CUtlMemory<CCompressor<Color>::Base(); // 112
	CUtlVectorBase<CCompressor<Color>::Base(); // 368
	CUtlVectorBase<CCompressor<Color>::ResetDbgInfo(); // 824
	CUtlMemory<CCompressor<Color>::IsGrowable(); // 823
	CUtlMemory<CCompressor<Color>::IsExternallyAllocated(); // 859
	CUtlMemory<CCompressor<Color>::IsExternallyAllocated(); // 861
	CUtlMemory<CCompressor<Color>::Grow(
		int num);  // 806
	CUtlVectorBase<CCompressor<Color>::GrowMemory(
			int num);  // 1249
	CUtlMemory<CCompressor<Color>::operator[](
			int i);  // 602
	CUtlVectorBase<CCompressor<Color>::Element(
		int i);  // 1252
	Construct<CCompressor<Color>*, CCompressor<Color>*>(CCompressor<Color>** pMemory); // 1252
	CUtlVectorBase<CCompressor<Color>::AddToTail(
			CCompressor<Color> *& src);  // 405
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 408
	CUtlMemory<CCompressor<Vector2D>::NumAllocated(); // 1247
	CUtlMemory<CCompressor<Vector2D>::Base(); // 112
	CUtlVectorBase<CCompressor<Vector2D>::Base(); // 368
	CUtlVectorBase<CCompressor<Vector2D>::ResetDbgInfo(); // 824
	CUtlMemory<CCompressor<Vector2D>::IsGrowable(); // 823
	CUtlMemory<CCompressor<Vector2D>::IsExternallyAllocated(); // 859
	CUtlMemory<CCompressor<Vector2D>::IsExternallyAllocated(); // 861
	CUtlMemory<CCompressor<Vector2D>::Grow(
		int num);  // 806
	CUtlVectorBase<CCompressor<Vector2D>::GrowMemory(
			int num);  // 1249
	CUtlMemory<CCompressor<Vector2D>::operator[](
			int i);  // 602
	CUtlVectorBase<CCompressor<Vector2D>::Element(
		int i);  // 1252
	Construct<CCompressor<Vector2D>*, CCompressor<Vector2D>*>(CCompressor<Vector2D>** pMemory); // 1252
	CUtlVectorBase<CCompressor<Vector2D>::AddToTail(
			CCompressor<Vector2D> *& src);  // 408
} /* size: 3325, variables: 2, inline expansions: 163 (7859 bytes) */

// <00D15EC6> ../public/animationsystem/compression.h:421
inline void CCompressorGroup::AddToChannel(int nChannel, const char* szName, uint32 nMask)
{
} /* size: 0 */

// <00D15E42> ../public/animationsystem/compression.h:434
// variables: 2
inline void CCompressorGroup::AddArray(int nChannel, int nElement, CUtlVector<float, CUtlMemory<float, int> >& data, float& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21871
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 436
	}
} /* size: 0, variables: 1 */

// <00D15DBE> ../public/animationsystem/compression.h:442
// variables: 2
inline void CCompressorGroup::AddArray(int nChannel, int nElement, CUtlVector<Vector, CUtlMemory<Vector, int> >& data, Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21871
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 444
	}
} /* size: 0, variables: 1 */

// <00D15D3A> ../public/animationsystem/compression.h:450
// variables: 2
inline void CCompressorGroup::AddArray(int nChannel, int nElement, CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& data, Quaternion& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21871
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 452
	}
} /* size: 0, variables: 1 */

// <00D10EFC> ../public/animationsystem/compression.h:499
// variables: 62
// function calls: 332
void CCompressorGroup::GetAllSegments(CUtlVector<CCompressorSegment*, CUtlMemory<CCompressorSegment*, int> >& segmentList)
{
	const char   __FUNCTION__; // 22033
	{
		int nChannel; // 501
		{
			CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> > containerList; // 503
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 531
			}
			{
				int j; // 533
				{
					xxh_u64 acc; // 4832
					{
						const xxh_u64  input_lo; // 4814
						const xxh_u64  input_hi; // 4815
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4814
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4815
						XXH_mult64to128(xxh_u64 lhs,
								xxh_u64 rhs);  // 4627
						XXH3_mul128_fold64(xxh_u64 lhs,
									xxh_u64 rhs);  // 4816
					}
					XXH3_mix16B(const xxh_u8* input,
							const xxh_u8* secret,
							xxh_u64 seed64);  // 4853
					{
						const xxh_u64  input_lo; // 4814
						const xxh_u64  input_hi; // 4815
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4814
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4815
						XXH_mult64to128(xxh_u64 lhs,
								xxh_u64 rhs);  // 4627
						XXH3_mul128_fold64(xxh_u64 lhs,
									xxh_u64 rhs);  // 4816
					}
					XXH3_mix16B(const xxh_u8* input,
							const xxh_u8* secret,
							xxh_u64 seed64);  // 4854
					XXH_xorshift64(xxh_u64 v64,
							int shift);  // 4644
					XXH_xorshift64(xxh_u64 v64,
							int shift);  // 4646
					XXH3_avalanche(xxh_u64 h64); // 4856
					{
						const xxh_u64  input_lo; // 4814
						const xxh_u64  input_hi; // 4815
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4814
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4815
						XXH_mult64to128(xxh_u64 lhs,
								xxh_u64 rhs);  // 4627
						XXH3_mul128_fold64(xxh_u64 lhs,
									xxh_u64 rhs);  // 4816
					}
					XXH3_mix16B(const xxh_u8* input,
							const xxh_u8* secret,
							xxh_u64 seed64);  // 4844
					{
						const xxh_u64  input_lo; // 4814
						const xxh_u64  input_hi; // 4815
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4814
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4815
						XXH_mult64to128(xxh_u64 lhs,
								xxh_u64 rhs);  // 4627
						XXH3_mul128_fold64(xxh_u64 lhs,
									xxh_u64 rhs);  // 4816
					}
					XXH3_mix16B(const xxh_u8* input,
							const xxh_u8* secret,
							xxh_u64 seed64);  // 4845
					{
						const xxh_u64  input_lo; // 4814
						const xxh_u64  input_hi; // 4815
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4814
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4815
						XXH_mult64to128(xxh_u64 lhs,
								xxh_u64 rhs);  // 4627
						XXH3_mul128_fold64(xxh_u64 lhs,
									xxh_u64 rhs);  // 4816
					}
					XXH3_mix16B(const xxh_u8* input,
							const xxh_u8* secret,
							xxh_u64 seed64);  // 4847
					{
						const xxh_u64  input_lo; // 4814
						const xxh_u64  input_hi; // 4815
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4814
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4815
						XXH_mult64to128(xxh_u64 lhs,
								xxh_u64 rhs);  // 4627
						XXH3_mul128_fold64(xxh_u64 lhs,
									xxh_u64 rhs);  // 4816
					}
					XXH3_mix16B(const xxh_u8* input,
							const xxh_u8* secret,
							xxh_u64 seed64);  // 4848
					{
						const xxh_u64  input_lo; // 4814
						const xxh_u64  input_hi; // 4815
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4814
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4815
						XXH_mult64to128(xxh_u64 lhs,
								xxh_u64 rhs);  // 4627
						XXH3_mul128_fold64(xxh_u64 lhs,
									xxh_u64 rhs);  // 4816
					}
					XXH3_mix16B(const xxh_u8* input,
							const xxh_u8* secret,
							xxh_u64 seed64);  // 4850
					{
						const xxh_u64  input_lo; // 4814
						const xxh_u64  input_hi; // 4815
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4814
						XXH_read64(const void* ptr); // 3466
						XXH_readLE64(const void* ptr); // 4815
						XXH_mult64to128(xxh_u64 lhs,
								xxh_u64 rhs);  // 4627
						XXH3_mul128_fold64(xxh_u64 lhs,
									xxh_u64 rhs);  // 4816
					}
					XXH3_mix16B(const xxh_u8* input,
							const xxh_u8* secret,
							xxh_u64 seed64);  // 4851
				}
				XXH3_len_17to128_64b(const xxh_u8* input,
							size_t len,
							const xxh_u8* secret,
							size_t secretSize,
							XXH64_hash_t seed);  // 6443
				{
					const xxh_u64  bitflip1; // 4743
					const xxh_u64  bitflip2; // 4744
					const xxh_u64  input_lo; // 4745
					const xxh_u64  input_hi; // 4746
					const xxh_u64  acc; // 4747
					XXH_read64(const void* ptr); // 3466
					XXH_readLE64(const void* ptr); // 4745
					XXH_read64(const void* ptr); // 3466
					XXH_readLE64(const void* ptr); // 4746
					XXH_mult64to128(xxh_u64 lhs,
							xxh_u64 rhs);  // 4627
					XXH3_mul128_fold64(xxh_u64 lhs,
								xxh_u64 rhs);  // 4749
					XXH_xorshift64(xxh_u64 v64,
							int shift);  // 4644
					XXH3_avalanche(xxh_u64 h64); // 4750
				}
				XXH3_len_9to16_64b(const xxh_u8* input,
							size_t len,
							const xxh_u8* secret,
							XXH64_hash_t seed);  // 4758
				{
					const xxh_u32  input1; // 4728
					const xxh_u32  input2; // 4729
					const xxh_u64  bitflip; // 4730
					const xxh_u64  input64; // 4731
					const xxh_u64  keyed; // 4732
					XXH_read32(const void* ptr); // 2905
					XXH_readLE32(const void* ptr); // 4728
					XXH_read32(const void* ptr); // 2905
					XXH_readLE32(const void* ptr); // 4729
					XXH_xorshift64(xxh_u64 v64,
							int shift);  // 4662
					XXH3_rrmxmx(xxh_u64 h64,
							xxh_u64 len);  // 4733
				}
				XXH3_len_4to8_64b(const xxh_u8* input,
							size_t len,
							const xxh_u8* secret,
							XXH64_hash_t seed);  // 4759
				{
					const xxh_u8  c1; // 4710
					const xxh_u8  c2; // 4711
					const xxh_u8  c3; // 4712
					const xxh_u32  combined; // 4713
					const xxh_u64  bitflip; // 4715
					const xxh_u64  keyed; // 4716
					XXH64_avalanche(xxh_u64 hash); // 4717
				}
				XXH3_len_1to3_64b(const xxh_u8* input,
							size_t len,
							const xxh_u8* secret,
							XXH64_hash_t seed);  // 4760
				XXH3_len_0to16_64b(const xxh_u8* input,
							size_t len,
							const xxh_u8* secret,
							XXH64_hash_t seed);  // 6441
				XXH3_64bits_internal(const void* input,
							size_t len,
							XXH64_hash_t seed64,
							const void* secret,
							size_t secretLen,
							XXH3_hashLong64_f f_hashLong);  // 6455
				XXH_INLINE_XXH3_64bits(const void* input,
							size_t length);  // 323
				CUtlBinaryBlock::Length(); // 323
				CUtlMemory<unsigned char, int>::Base(); // 107
				CUtlBinaryBlock::Get(); // 323
				CCompressorSegment::CCompressorSegment(
							int nChannel,
							CUtlBinaryBlock* pContainer);  // 535
				CUtlMemory<CCompressorSegment::NumAllocated(); // 1247
				CUtlMemory<CCompressorSegment::Base(); // 112
				CUtlVectorBase<CCompressorSegment::Base(); // 368
				CUtlVectorBase<CCompressorSegment::ResetDbgInfo(); // 824
				CUtlMemory<CCompressorSegment::IsGrowable(); // 823
				CUtlMemory<CCompressorSegment::IsExternallyAllocated(); // 859
				CUtlMemory<CCompressorSegment::IsExternallyAllocated(); // 861
				CUtlMemory<CCompressorSegment::Grow(
					int num);  // 806
				CUtlVectorBase<CCompressorSegment::GrowMemory(
						int num);  // 1249
				CUtlMemory<CCompressorSegment::operator[](
						int i);  // 602
				CUtlVectorBase<CCompressorSegment::Element(
					int i);  // 1252
				Construct<CCompressorSegment*, CCompressorSegment*>(CCompressorSegment** pMemory); // 1252
				CUtlVectorBase<CCompressorSegment::AddToTail(
						CCompressorSegment *& src);  // 535
			}
			CUtlMemory<CUtlBinaryBlock::ValidateGrowSize(); // 475
			CUtlMemory<CUtlBinaryBlock::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 530
			CUtlVectorBase<CUtlBinaryBlock::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CUtlBinaryBlock::CUtlVector(); // 503
			CUtlMemory<fieldtype_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::operator[](
					int i);  // 504
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 528
			CUtlMemory<CCompressor<Vector4D>::operator[](
					int i);  // 588
			CUtlVectorBase<CCompressor<Vector4D>::operator[](
					int i);  // 528
			{
				int k; // 291
				CUtlVectorBase<CCompressedAnim<Vector4D>::Count(); // 291
				{
					CUtlBinaryBlock* pContainer; // 293
					CUtlMemory<CCompressedAnim<Vector4D>::operator[](
							int i);  // 588
					CUtlVectorBase<CCompressedAnim<Vector4D>::operator[](
							int i);  // 293
					CUtlMemory<CUtlBinaryBlock::NumAllocated(); // 1196
					CUtlMemory<CUtlBinaryBlock::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlBinaryBlock::Element(
						int i);  // 1201
					CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
									CUtlBinaryBlock* const& src);  // 1201
					CUtlMemory<CUtlBinaryBlock::Base(); // 112
					CUtlVectorBase<CUtlBinaryBlock::Base(); // 368
					CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
					CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CUtlBinaryBlock::AddToTail(
							CUtlBinaryBlock* const& src);  // 296
				}
			}
			CCompressor<Vector4D>::CollapseContainers(); // 278
			{
				int k; // 279
				CUtlVectorBase<CUtlBinaryBlock::Count(); // 279
				CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
				CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
						int num);  // 1198
				CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
								CUtlBinaryBlock* const& src);  // 1201
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlBinaryBlock::Element(
					int i);  // 1201
				CUtlVectorBase<CUtlBinaryBlock::AddToTail(
						CUtlBinaryBlock* const& src);  // 281
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlBinaryBlock::operator[](
						int i);  // 281
			}
			CUtlVectorBase<CUtlBinaryBlock::RemoveAll(); // 284
			CCompressor<Vector4D>::AppendContainers(
					CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list);  // 528
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 525
			CUtlMemory<CCompressor<Vector2D>::operator[](
					int i);  // 588
			CUtlVectorBase<CCompressor<Vector2D>::operator[](
					int i);  // 525
			{
				int k; // 291
				CUtlVectorBase<CCompressedAnim<Vector2D>::Count(); // 291
				{
					CUtlBinaryBlock* pContainer; // 293
					CUtlMemory<CCompressedAnim<Vector2D>::operator[](
							int i);  // 588
					CUtlVectorBase<CCompressedAnim<Vector2D>::operator[](
							int i);  // 293
					CUtlMemory<CUtlBinaryBlock::NumAllocated(); // 1196
					CUtlMemory<CUtlBinaryBlock::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlBinaryBlock::Element(
						int i);  // 1201
					CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
									CUtlBinaryBlock* const& src);  // 1201
					CUtlMemory<CUtlBinaryBlock::Base(); // 112
					CUtlVectorBase<CUtlBinaryBlock::Base(); // 368
					CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
					CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CUtlBinaryBlock::AddToTail(
							CUtlBinaryBlock* const& src);  // 296
				}
			}
			CCompressor<Vector2D>::CollapseContainers(); // 278
			{
				int k; // 279
				CUtlVectorBase<CUtlBinaryBlock::Count(); // 279
				CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
				CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
						int num);  // 1198
				CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
								CUtlBinaryBlock* const& src);  // 1201
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlBinaryBlock::Element(
					int i);  // 1201
				CUtlVectorBase<CUtlBinaryBlock::AddToTail(
						CUtlBinaryBlock* const& src);  // 281
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlBinaryBlock::operator[](
						int i);  // 281
			}
			CCompressor<Vector2D>::AppendContainers(
					CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list);  // 525
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 522
			CUtlMemory<CCompressor<Color>::operator[](
					int i);  // 588
			CUtlVectorBase<CCompressor<Color>::operator[](
					int i);  // 522
			{
				int k; // 291
				CUtlVectorBase<CCompressedAnim<Color>::Count(); // 291
				{
					CUtlBinaryBlock* pContainer; // 293
					CUtlMemory<CCompressedAnim<Color>::operator[](
							int i);  // 588
					CUtlVectorBase<CCompressedAnim<Color>::operator[](
							int i);  // 293
					CUtlMemory<CUtlBinaryBlock::NumAllocated(); // 1196
					CUtlMemory<CUtlBinaryBlock::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlBinaryBlock::Element(
						int i);  // 1201
					CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
									CUtlBinaryBlock* const& src);  // 1201
					CUtlMemory<CUtlBinaryBlock::Base(); // 112
					CUtlVectorBase<CUtlBinaryBlock::Base(); // 368
					CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
					CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CUtlBinaryBlock::AddToTail(
							CUtlBinaryBlock* const& src);  // 296
				}
			}
			CCompressor<Color>::CollapseContainers(); // 278
			{
				int k; // 279
				CUtlVectorBase<CUtlBinaryBlock::Count(); // 279
				CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
				CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
						int num);  // 1198
				CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
								CUtlBinaryBlock* const& src);  // 1201
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlBinaryBlock::Element(
					int i);  // 1201
				CUtlVectorBase<CUtlBinaryBlock::AddToTail(
						CUtlBinaryBlock* const& src);  // 281
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlBinaryBlock::operator[](
						int i);  // 281
			}
			CCompressor<Color>::AppendContainers(
					CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list);  // 522
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 519
			CUtlMemory<CCompressor<bool>::operator[](
					int i);  // 588
			CUtlVectorBase<CCompressor<bool>::operator[](
					int i);  // 519
			{
				int k; // 291
				CUtlVectorBase<CCompressedAnim<bool>::Count(); // 291
				{
					CUtlBinaryBlock* pContainer; // 293
					CUtlMemory<CCompressedAnim<bool>::operator[](
							int i);  // 588
					CUtlVectorBase<CCompressedAnim<bool>::operator[](
							int i);  // 293
					CUtlMemory<CUtlBinaryBlock::NumAllocated(); // 1196
					CUtlMemory<CUtlBinaryBlock::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlBinaryBlock::Element(
						int i);  // 1201
					CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
									CUtlBinaryBlock* const& src);  // 1201
					CUtlMemory<CUtlBinaryBlock::Base(); // 112
					CUtlVectorBase<CUtlBinaryBlock::Base(); // 368
					CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
					CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CUtlBinaryBlock::AddToTail(
							CUtlBinaryBlock* const& src);  // 296
				}
			}
			CCompressor<bool>::CollapseContainers(); // 278
			{
				int k; // 279
				CUtlVectorBase<CUtlBinaryBlock::Count(); // 279
				CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
				CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
						int num);  // 1198
				CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
								CUtlBinaryBlock* const& src);  // 1201
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlBinaryBlock::Element(
					int i);  // 1201
				CUtlVectorBase<CUtlBinaryBlock::AddToTail(
						CUtlBinaryBlock* const& src);  // 281
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlBinaryBlock::operator[](
						int i);  // 281
			}
			CCompressor<bool>::AppendContainers(
					CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list);  // 519
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 516
			CUtlMemory<CCompressor<int>::operator[](
					int i);  // 588
			CUtlVectorBase<CCompressor<int>::operator[](
					int i);  // 516
			{
				int k; // 291
				CUtlVectorBase<CCompressedAnim<int>::Count(); // 291
				{
					CUtlBinaryBlock* pContainer; // 293
					CUtlMemory<CCompressedAnim<int>::operator[](
							int i);  // 588
					CUtlVectorBase<CCompressedAnim<int>::operator[](
							int i);  // 293
					CUtlMemory<CUtlBinaryBlock::NumAllocated(); // 1196
					CUtlMemory<CUtlBinaryBlock::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlBinaryBlock::Element(
						int i);  // 1201
					CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
									CUtlBinaryBlock* const& src);  // 1201
					CUtlMemory<CUtlBinaryBlock::Base(); // 112
					CUtlVectorBase<CUtlBinaryBlock::Base(); // 368
					CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
					CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CUtlBinaryBlock::AddToTail(
							CUtlBinaryBlock* const& src);  // 296
				}
			}
			CCompressor<int>::CollapseContainers(); // 278
			{
				int k; // 279
				CUtlVectorBase<CUtlBinaryBlock::Count(); // 279
				CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
				CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
						int num);  // 1198
				CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
								CUtlBinaryBlock* const& src);  // 1201
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlBinaryBlock::Element(
					int i);  // 1201
				CUtlVectorBase<CUtlBinaryBlock::AddToTail(
						CUtlBinaryBlock* const& src);  // 281
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlBinaryBlock::operator[](
						int i);  // 281
			}
			CCompressor<int>::AppendContainers(
					CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list);  // 516
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 513
			CUtlMemory<CCompressor<Quaternion>::operator[](
					int i);  // 588
			CUtlVectorBase<CCompressor<Quaternion>::operator[](
					int i);  // 513
			{
				int k; // 291
				CUtlVectorBase<CCompressedAnim<Quaternion>::Count(); // 291
				{
					CUtlBinaryBlock* pContainer; // 293
					CUtlMemory<CCompressedAnim<Quaternion>::operator[](
							int i);  // 588
					CUtlVectorBase<CCompressedAnim<Quaternion>::operator[](
							int i);  // 293
					CUtlMemory<CUtlBinaryBlock::NumAllocated(); // 1196
					CUtlMemory<CUtlBinaryBlock::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlBinaryBlock::Element(
						int i);  // 1201
					CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
									CUtlBinaryBlock* const& src);  // 1201
					CUtlMemory<CUtlBinaryBlock::Base(); // 112
					CUtlVectorBase<CUtlBinaryBlock::Base(); // 368
					CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
					CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CUtlBinaryBlock::AddToTail(
							CUtlBinaryBlock* const& src);  // 296
				}
			}
			CCompressor<Quaternion>::CollapseContainers(); // 278
			{
				int k; // 279
				CUtlVectorBase<CUtlBinaryBlock::Count(); // 279
				CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
				CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
						int num);  // 1198
				CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
								CUtlBinaryBlock* const& src);  // 1201
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlBinaryBlock::Element(
					int i);  // 1201
				CUtlVectorBase<CUtlBinaryBlock::AddToTail(
						CUtlBinaryBlock* const& src);  // 281
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlBinaryBlock::operator[](
						int i);  // 281
			}
			CCompressor<Quaternion>::AppendContainers(
					CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list);  // 513
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 510
			CUtlMemory<CCompressor<Vector>::operator[](
					int i);  // 588
			CUtlVectorBase<CCompressor<Vector>::operator[](
					int i);  // 510
			{
				int k; // 291
				CUtlVectorBase<CCompressedAnim<Vector>::Count(); // 291
				{
					CUtlBinaryBlock* pContainer; // 293
					CUtlMemory<CCompressedAnim<Vector>::operator[](
							int i);  // 588
					CUtlVectorBase<CCompressedAnim<Vector>::operator[](
							int i);  // 293
					CUtlMemory<CUtlBinaryBlock::NumAllocated(); // 1196
					CUtlMemory<CUtlBinaryBlock::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlBinaryBlock::Element(
						int i);  // 1201
					CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
									CUtlBinaryBlock* const& src);  // 1201
					CUtlMemory<CUtlBinaryBlock::Base(); // 112
					CUtlVectorBase<CUtlBinaryBlock::Base(); // 368
					CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
					CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CUtlBinaryBlock::AddToTail(
							CUtlBinaryBlock* const& src);  // 296
				}
			}
			CCompressor<Vector>::CollapseContainers(); // 278
			{
				int k; // 279
				CUtlVectorBase<CUtlBinaryBlock::Count(); // 279
				CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
				CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
						int num);  // 1198
				CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
								CUtlBinaryBlock* const& src);  // 1201
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlBinaryBlock::Element(
					int i);  // 1201
				CUtlVectorBase<CUtlBinaryBlock::AddToTail(
						CUtlBinaryBlock* const& src);  // 281
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlBinaryBlock::operator[](
						int i);  // 281
			}
			CUtlVectorBase<CUtlBinaryBlock::RemoveAll(); // 284
			CCompressor<Vector>::AppendContainers(
					CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list);  // 510
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 507
			CUtlMemory<CCompressor<float>::operator[](
					int i);  // 588
			CUtlVectorBase<CCompressor<float>::operator[](
					int i);  // 507
			{
				int k; // 291
				CUtlVectorBase<CCompressedAnim<float>::Count(); // 291
				{
					CUtlBinaryBlock* pContainer; // 293
					CUtlMemory<CCompressedAnim<float>::operator[](
							int i);  // 588
					CUtlVectorBase<CCompressedAnim<float>::operator[](
							int i);  // 293
					CUtlMemory<CUtlBinaryBlock::NumAllocated(); // 1196
					CUtlMemory<CUtlBinaryBlock::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlBinaryBlock::Element(
						int i);  // 1201
					CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
									CUtlBinaryBlock* const& src);  // 1201
					CUtlMemory<CUtlBinaryBlock::Base(); // 112
					CUtlVectorBase<CUtlBinaryBlock::Base(); // 368
					CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
					CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CUtlBinaryBlock::AddToTail(
							CUtlBinaryBlock* const& src);  // 296
				}
			}
			CCompressor<float>::CollapseContainers(); // 278
			{
				int k; // 279
				CUtlVectorBase<CUtlBinaryBlock::Count(); // 279
				CUtlVectorBase<CUtlBinaryBlock::ResetDbgInfo(); // 824
				CUtlVectorBase<CUtlBinaryBlock::GrowMemory(
						int num);  // 1198
				CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory,
								CUtlBinaryBlock* const& src);  // 1201
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlBinaryBlock::Element(
					int i);  // 1201
				CUtlVectorBase<CUtlBinaryBlock::AddToTail(
						CUtlBinaryBlock* const& src);  // 281
				CUtlMemory<CUtlBinaryBlock::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlBinaryBlock::operator[](
						int i);  // 281
			}
			CCompressor<float>::AppendContainers(
					CUtlVector<CUtlBinaryBlock*, CUtlMemory<CUtlBinaryBlock*, int> >& list);  // 507
			CUtlMemory<CUtlBinaryBlock::Purge(); // 903
			CUtlMemory<CUtlBinaryBlock::Purge(); // 1799
			CUtlVectorBase<CUtlBinaryBlock::Purge(); // 560
			ValidateAlignment<CUtlBinaryBlock*>(void); // 508
			CUtlMemory<CUtlBinaryBlock::Purge(); // 510
			CUtlMemory<CUtlBinaryBlock::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlBinaryBlock::~CUtlVectorBase(); // 410
			CUtlVector<CUtlBinaryBlock::~CUtlVector(); // 537
		}
		CUtlVectorBase<char::Count(); // 501
	}
} /* size: 3892, variables: 1 */

// <00D10EE3> ../public/animationsystem/compression.h:540
inline void CCompressorGroup::GetChannelCount()
{
} /* size: 0 */

// <00D10ECA> ../public/animationsystem/compression.h:545
inline void CCompressorGroup::GetTotalElementCount()
{
} /* size: 0 */

// <025DABDA> ../public/animationsystem/compression.h:582
// function calls: 16
void CCompressedAnim<float>::CCompressedAnim()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 582
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 582
} /* size: 108, inline expansions: 16 (216 bytes) */

// <025DABBD> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<float>::CCompressedAnim()
{
} /* size: 0 */

// <025DABA6> ../public/animationsystem/compression.h:582
void CCompressedAnim<float>::~CCompressedAnim()
{
} /* size: 0 */

// <025DAB72> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<float>::~CCompressedAnim()
{
} /* size: 0 */

// <025D9802> ../public/animationsystem/compression.h:582
// function calls: 16
void CCompressedAnim<Vector>::CCompressedAnim()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 582
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 582
} /* size: 108, inline expansions: 16 (216 bytes) */

// <025D97E5> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<Vector>::CCompressedAnim()
{
} /* size: 0 */

// <025D92FF> ../public/animationsystem/compression.h:582
// function calls: 26
void CCompressedAnim<Vector>::~CCompressedAnim()
{
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 560
	ValidateAlignment<CUtlVector<Vector> >(void); // 508
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
} /* size: 134, inline expansions: 26 (418 bytes) */

// <025D929A> ../public/animationsystem/compression.h:582
void CCompressedAnim<Vector>::~CCompressedAnim()
{
} /* size: 36 */

// <025D927D> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<Vector>::~CCompressedAnim()
{
} /* size: 0 */

// <025D245F> ../public/animationsystem/compression.h:582
// function calls: 16
void CCompressedAnim<Quaternion>::CCompressedAnim()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quate this); // 582
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 582
} /* size: 108, inline expansions: 16 (216 bytes) */

// <025D2442> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<Quaternion>::CCompressedAnim()
{
} /* size: 0 */

// <025D242B> ../public/animationsystem/compression.h:582
void CCompressedAnim<Quaternion>::~CCompressedAnim()
{
} /* size: 0 */

// <025D23F7> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<Quaternion>::~CCompressedAnim()
{
} /* size: 0 */

// <025CE7C7> ../public/animationsystem/compression.h:582
// function calls: 16
void CCompressedAnim<int>::CCompressedAnim()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
} /* size: 108, inline expansions: 16 (216 bytes) */

// <025CE7AA> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<int>::CCompressedAnim()
{
} /* size: 0 */

// <025CE2C4> ../public/animationsystem/compression.h:582
// function calls: 26
void CCompressedAnim<int>::~CCompressedAnim()
{
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 1799
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Purge(); // 560
	ValidateAlignment<CUtlVector<int> >(void); // 508
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVector(); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
} /* size: 134, inline expansions: 26 (418 bytes) */

// <025CE25F> ../public/animationsystem/compression.h:582
void CCompressedAnim<int>::~CCompressedAnim()
{
} /* size: 36 */

// <025CE242> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<int>::~CCompressedAnim()
{
} /* size: 0 */

// <025CBA3D> ../public/animationsystem/compression.h:582
// function calls: 16
void CCompressedAnim<bool>::CCompressedAnim()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> >::CUtlVector(); // 582
	CUtlMemory<bool, int>::ValidateGrowSize(); // 475
	CUtlMemory<bool, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<bool, CUtlMemory<bool, int> >::CUtlVector(); // 582
} /* size: 108, inline expansions: 16 (216 bytes) */

// <025CBA20> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<bool>::CCompressedAnim()
{
} /* size: 0 */

// <025CBA09> ../public/animationsystem/compression.h:582
void CCompressedAnim<bool>::~CCompressedAnim()
{
} /* size: 0 */

// <025CB9D5> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<bool>::~CCompressedAnim()
{
} /* size: 0 */

// <025CA631> ../public/animationsystem/compression.h:582
// function calls: 16
void CCompressedAnim<Color>::CCompressedAnim()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int> this); // 582
	CUtlMemory<Color, int>::ValidateGrowSize(); // 475
	CUtlMemory<Color, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Color, CUtlMemory<Color, int> >::CUtlVector(); // 582
} /* size: 108, inline expansions: 16 (216 bytes) */

// <025CA614> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<Color>::CCompressedAnim()
{
} /* size: 0 */

// <025CA5FD> ../public/animationsystem/compression.h:582
void CCompressedAnim<Color>::~CCompressedAnim()
{
} /* size: 0 */

// <025CA5C9> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<Color>::~CCompressedAnim()
{
} /* size: 0 */

// <025C9225> ../public/animationsystem/compression.h:582
// function calls: 16
void CCompressedAnim<Vector2D>::CCompressedAnim()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, i this); // 582
	CUtlMemory<Vector2D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector2D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVector(); // 582
} /* size: 108, inline expansions: 16 (216 bytes) */

// <025C9208> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<Vector2D>::CCompressedAnim()
{
} /* size: 0 */

// <025C91F1> ../public/animationsystem/compression.h:582
void CCompressedAnim<Vector2D>::~CCompressedAnim()
{
} /* size: 0 */

// <025C7E19> ../public/animationsystem/compression.h:582
// function calls: 16
void CCompressedAnim<Vector4D>::CCompressedAnim()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, i this); // 582
	CUtlMemory<Vector4D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector4D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVector(); // 582
} /* size: 108, inline expansions: 16 (216 bytes) */

// <025C7DFC> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<Vector4D>::CCompressedAnim()
{
} /* size: 0 */

// <025C7DE5> ../public/animationsystem/compression.h:582
void CCompressedAnim<Vector4D>::~CCompressedAnim()
{
} /* size: 0 */

// <025C7DB1> ../public/animationsystem/compression.h:582
inline void CCompressedAnim<Vector4D>::~CCompressedAnim()
{
} /* size: 0 */

// <00D10D38> ../public/animationsystem/compression.h:582
void CCompressedAnim<float>::CCompressedAnim()
{
} /* size: 0 */

// <00D1094C> ../public/animationsystem/compression.h:582
void CCompressedAnim<Vector>::CCompressedAnim()
{
} /* size: 0 */

// <00D0FEE3> ../public/animationsystem/compression.h:582
void CCompressedAnim<Quaternion>::CCompressedAnim()
{
} /* size: 0 */

// <00D0F7B5> ../public/animationsystem/compression.h:582
void CCompressedAnim<int>::CCompressedAnim()
{
} /* size: 0 */

// <00D0EF3B> ../public/animationsystem/compression.h:582
void CCompressedAnim<bool>::CCompressedAnim()
{
} /* size: 0 */

// <00D0EB1B> ../public/animationsystem/compression.h:582
void CCompressedAnim<Color>::CCompressedAnim()
{
} /* size: 0 */

// <00D0E6FB> ../public/animationsystem/compression.h:582
void CCompressedAnim<Vector2D>::CCompressedAnim()
{
} /* size: 0 */

// <00D0E2DB> ../public/animationsystem/compression.h:582
void CCompressedAnim<Vector4D>::CCompressedAnim()
{
} /* size: 0 */

// <00242D3B> ../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<Vector> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<Vector>* , CCompressedAnim<Vector>& );
	void CCompressedAnim(CCompressedAnim<Vector>* , const CCompressedAnim<Vector>& );
	void CCompressedAnim(CCompressedAnim<Vector>* );
	/* ../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<Vector>* );
	/* ../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<Vector>* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , const Vector& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<Vector>* , int, CUtlVector<Vector, CUtlMemory<Vector, int> >& , const Vector& );
	/* ../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<Vector>* );
	/* ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<Vector>* );
	/* ../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<Vector>* , CUtlBinaryBlock* , int);
	/* ../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* ../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* ../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* ../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* ../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* ../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* ../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* ../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* ../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<Vector>* , const DecodeContainer_t* , int, void* );
	/* ../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<Vector>* , const DecodeContainer_t* );
	/* ../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<Vector>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int> > m_data; /* 40 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<Vector>* );
	void CCompressedAnim(class CCompressedAnim<Vector> *, class CCompressedAnim<Vector> &); /* linkage=_ZN15CCompressedAnimI6VectorEC4EOS1_ */
	void CCompressedAnim(class CCompressedAnim<Vector> *, const class CCompressedAnim<Vector>  &); /* linkage=_ZN15CCompressedAnimI6VectorEC4ERKS1_ */
	void CCompressedAnim(class CCompressedAnim<Vector> *); /* linkage=_ZN15CCompressedAnimI6VectorEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<Vector> *); /* linkage=_ZN15CCompressedAnimI6VectorE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<Vector> *, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, const class Vector  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimI6VectorE9CanEncodeER10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<Vector> *, int, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, const class Vector  &); /* linkage=_ZN15CCompressedAnimI6VectorE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_ */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<Vector> *); /* linkage=_ZN15CCompressedAnimI6VectorE15CreateContainerEv */
	/* <25e01e6> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<Vector>  *); /* linkage=_ZNK15CCompressedAnimI6VectorE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<Vector> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimI6VectorE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePS0_fPKS0_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS8_SB_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimI6VectorE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimI6VectorE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<Vector> *); /* linkage=_ZN15CCompressedAnimI6VectorE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<Vector> *); /* linkage=_ZN15CCompressedAnimI6VectorED4Ev */
};

// <00244922> ../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<Quaternion> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<Quaternion>* , CCompressedAnim<Quaternion>& );
	void CCompressedAnim(CCompressedAnim<Quaternion>* , const CCompressedAnim<Quaternion>& );
	void CCompressedAnim(CCompressedAnim<Quaternion>* );
	/* ../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<Quaternion>* );
	/* ../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<Quaternion>* , CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& , const Quaternion& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<Quaternion>* , int, CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& , const Quaternion& );
	/* ../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<Quaternion>* );
	/* ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<Quaternion>* );
	/* ../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<Quaternion>* , CUtlBinaryBlock* , int);
	/* ../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* ../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* ../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* ../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* ../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* ../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* ../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* ../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* ../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , int, void* );
	/* ../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* );
	/* ../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<Quaternion>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int> > m_data; /* 40 32 */
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<Quaternion>* );
	void CCompressedAnim(class CCompressedAnim<Quaternion> *, class CCompressedAnim<Quaternion> &); /* linkage=_ZN15CCompressedAnimI10QuaternionEC4EOS1_ */
	void CCompressedAnim(class CCompressedAnim<Quaternion> *, const class CCompressedAnim<Quaternion>  &); /* linkage=_ZN15CCompressedAnimI10QuaternionEC4ERKS1_ */
	void CCompressedAnim(class CCompressedAnim<Quaternion> *); /* linkage=_ZN15CCompressedAnimI10QuaternionEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<Quaternion> *); /* linkage=_ZN15CCompressedAnimI10QuaternionE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<Quaternion> *, class CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > &, const class Quaternion  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimI10QuaternionE9CanEncodeER10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<Quaternion> *, int, class CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > &, const class Quaternion  &); /* linkage=_ZN15CCompressedAnimI10QuaternionE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_ */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<Quaternion> *); /* linkage=_ZN15CCompressedAnimI10QuaternionE15CreateContainerEv */
	/* <25e01bc> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<Quaternion>  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<Quaternion> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimI10QuaternionE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePS0_fPKS0_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS8_SB_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<Quaternion> *); /* linkage=_ZN15CCompressedAnimI10QuaternionE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<Quaternion> *); /* linkage=_ZN15CCompressedAnimI10QuaternionED4Ev */
};

// <00246509> ../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<int> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<int>* , CCompressedAnim<int>& );
	void CCompressedAnim(CCompressedAnim<int>* , const CCompressedAnim<int>& );
	void CCompressedAnim(CCompressedAnim<int>* );
	/* ../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<int>* );
	/* ../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<int>* , CUtlVector<int, CUtlMemory<int, int> >& , const int& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<int>* , int, CUtlVector<int, CUtlMemory<int, int> >& , const int& );
	/* ../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<int>* );
	/* ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<int>* );
	/* ../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<int>* , CUtlBinaryBlock* , int);
	/* ../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* ../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* ../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* ../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* ../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* ../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* ../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* ../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* ../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<int>* , const DecodeContainer_t* , int, void* );
	/* ../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<int>* , const DecodeContainer_t* );
	/* ../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<int>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > m_data; /* 40 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<int>* );
	void CCompressedAnim(class CCompressedAnim<int> *, class CCompressedAnim<int> &); /* linkage=_ZN15CCompressedAnimIiEC4EOS0_ */
	void CCompressedAnim(class CCompressedAnim<int> *, const class CCompressedAnim<int>  &); /* linkage=_ZN15CCompressedAnimIiEC4ERKS0_ */
	void CCompressedAnim(class CCompressedAnim<int> *); /* linkage=_ZN15CCompressedAnimIiEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<int> *); /* linkage=_ZN15CCompressedAnimIiE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<int> *, class CUtlVector<int, CUtlMemory<int, int> > &, const int  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimIiE9CanEncodeER10CUtlVectorIi10CUtlMemoryIiiEERKi20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<int> *, int, class CUtlVector<int, CUtlMemory<int, int> > &, const int  &); /* linkage=_ZN15CCompressedAnimIiE8AddArrayEiR10CUtlVectorIi10CUtlMemoryIiiEERKi */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<int> *); /* linkage=_ZN15CCompressedAnimIiE15CreateContainerEv */
	/* <25e0192> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<int>  *); /* linkage=_ZNK15CCompressedAnimIiE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<int> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimIiE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS7_SA_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimIiE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimIiE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<int> *); /* linkage=_ZN15CCompressedAnimIiE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<int> *); /* linkage=_ZN15CCompressedAnimIiED4Ev */
};

// <002480F0> ../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<bool> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<bool>* , CCompressedAnim<bool>& );
	void CCompressedAnim(CCompressedAnim<bool>* , const CCompressedAnim<bool>& );
	void CCompressedAnim(CCompressedAnim<bool>* );
	/* ../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<bool>* );
	/* ../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<bool>* , CUtlVector<bool, CUtlMemory<bool, int> >& , const bool& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<bool>* , int, CUtlVector<bool, CUtlMemory<bool, int> >& , const bool& );
	/* ../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<bool>* );
	/* ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<bool>* );
	/* ../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<bool>* , CUtlBinaryBlock* , int);
	/* ../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* ../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* ../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* ../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* ../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* ../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* ../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* ../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* ../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<bool>* , const DecodeContainer_t* , int, void* );
	/* ../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<bool>* , const DecodeContainer_t* );
	/* ../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<bool>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> > m_data; /* 40 32 */
	CUtlVector<bool, CUtlMemory<bool, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<bool>* );
	void CCompressedAnim(class CCompressedAnim<bool> *, class CCompressedAnim<bool> &); /* linkage=_ZN15CCompressedAnimIbEC4EOS0_ */
	void CCompressedAnim(class CCompressedAnim<bool> *, const class CCompressedAnim<bool>  &); /* linkage=_ZN15CCompressedAnimIbEC4ERKS0_ */
	void CCompressedAnim(class CCompressedAnim<bool> *); /* linkage=_ZN15CCompressedAnimIbEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<bool> *); /* linkage=_ZN15CCompressedAnimIbE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<bool> *, class CUtlVector<bool, CUtlMemory<bool, int> > &, const bool  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimIbE9CanEncodeER10CUtlVectorIb10CUtlMemoryIbiEERKb20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<bool> *, int, class CUtlVector<bool, CUtlMemory<bool, int> > &, const bool  &); /* linkage=_ZN15CCompressedAnimIbE8AddArrayEiR10CUtlVectorIb10CUtlMemoryIbiEERKb */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<bool> *); /* linkage=_ZN15CCompressedAnimIbE15CreateContainerEv */
	/* <25e0168> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<bool>  *); /* linkage=_ZNK15CCompressedAnimIbE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<bool> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimIbE14SetupContainerEP15CUtlBinaryBlocki */
	/* <25e003f> ../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS7_SA_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimIbE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimIbE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<bool> *); /* linkage=_ZN15CCompressedAnimIbE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<bool> *); /* linkage=_ZN15CCompressedAnimIbED4Ev */
};

// <00249CD7> ../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<Color> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<Color>* , CCompressedAnim<Color>& );
	void CCompressedAnim(CCompressedAnim<Color>* , const CCompressedAnim<Color>& );
	void CCompressedAnim(CCompressedAnim<Color>* );
	/* ../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<Color>* );
	/* ../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<Color>* , CUtlVector<Color, CUtlMemory<Color, int> >& , const Color& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<Color>* , int, CUtlVector<Color, CUtlMemory<Color, int> >& , const Color& );
	/* ../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<Color>* );
	/* ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<Color>* );
	/* ../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<Color>* , CUtlBinaryBlock* , int);
	/* ../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* ../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* ../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* ../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* ../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* ../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* ../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* ../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* ../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<Color>* , const DecodeContainer_t* , int, void* );
	/* ../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<Color>* , const DecodeContainer_t* );
	/* ../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<Color>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int> > m_data; /* 40 32 */
	CUtlVector<Color, CUtlMemory<Color, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<Color>* );
	void CCompressedAnim(class CCompressedAnim<Color> *, class CCompressedAnim<Color> &); /* linkage=_ZN15CCompressedAnimI5ColorEC4EOS1_ */
	void CCompressedAnim(class CCompressedAnim<Color> *, const class CCompressedAnim<Color>  &); /* linkage=_ZN15CCompressedAnimI5ColorEC4ERKS1_ */
	void CCompressedAnim(class CCompressedAnim<Color> *); /* linkage=_ZN15CCompressedAnimI5ColorEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<Color> *); /* linkage=_ZN15CCompressedAnimI5ColorE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<Color> *, class CUtlVector<Color, CUtlMemory<Color, int> > &, const class Color  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimI5ColorE9CanEncodeER10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<Color> *, int, class CUtlVector<Color, CUtlMemory<Color, int> > &, const class Color  &); /* linkage=_ZN15CCompressedAnimI5ColorE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_ */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<Color> *); /* linkage=_ZN15CCompressedAnimI5ColorE15CreateContainerEv */
	/* <25e0015> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<Color>  *); /* linkage=_ZNK15CCompressedAnimI5ColorE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<Color> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimI5ColorE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePS0_fPKS0_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS8_SB_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimI5ColorE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimI5ColorE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<Color> *); /* linkage=_ZN15CCompressedAnimI5ColorE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<Color> *); /* linkage=_ZN15CCompressedAnimI5ColorED4Ev */
};

// <0024B8BE> ../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<Vector2D> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<Vector2D>* , CCompressedAnim<Vector2D>& );
	void CCompressedAnim(CCompressedAnim<Vector2D>* , const CCompressedAnim<Vector2D>& );
	void CCompressedAnim(CCompressedAnim<Vector2D>* );
	/* ../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<Vector2D>* );
	/* ../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<Vector2D>* , CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& , const Vector2D& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<Vector2D>* , int, CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& , const Vector2D& );
	/* ../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<Vector2D>* );
	/* ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<Vector2D>* );
	/* ../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<Vector2D>* , CUtlBinaryBlock* , int);
	/* ../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* ../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* ../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* ../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* ../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* ../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* ../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* ../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* ../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , int, void* );
	/* ../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* );
	/* ../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<Vector2D>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int> > m_data; /* 40 32 */
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<Vector2D>* );
	void CCompressedAnim(class CCompressedAnim<Vector2D> *, class CCompressedAnim<Vector2D> &); /* linkage=_ZN15CCompressedAnimI8Vector2DEC4EOS1_ */
	void CCompressedAnim(class CCompressedAnim<Vector2D> *, const class CCompressedAnim<Vector2D>  &); /* linkage=_ZN15CCompressedAnimI8Vector2DEC4ERKS1_ */
	void CCompressedAnim(class CCompressedAnim<Vector2D> *); /* linkage=_ZN15CCompressedAnimI8Vector2DEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<Vector2D> *); /* linkage=_ZN15CCompressedAnimI8Vector2DE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<Vector2D> *, class CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > &, const class Vector2D  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimI8Vector2DE9CanEncodeER10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<Vector2D> *, int, class CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > &, const class Vector2D  &); /* linkage=_ZN15CCompressedAnimI8Vector2DE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_ */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<Vector2D> *); /* linkage=_ZN15CCompressedAnimI8Vector2DE15CreateContainerEv */
	/* <25dffeb> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<Vector2D>  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<Vector2D> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimI8Vector2DE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePS0_fPKS0_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS8_SB_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<Vector2D> *); /* linkage=_ZN15CCompressedAnimI8Vector2DE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<Vector2D> *); /* linkage=_ZN15CCompressedAnimI8Vector2DED4Ev */
};

// <0024D4A5> ../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<Vector4D> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<Vector4D>* , CCompressedAnim<Vector4D>& );
	void CCompressedAnim(CCompressedAnim<Vector4D>* , const CCompressedAnim<Vector4D>& );
	void CCompressedAnim(CCompressedAnim<Vector4D>* );
	/* ../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<Vector4D>* );
	/* ../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<Vector4D>* , CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& , const Vector4D& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<Vector4D>* , int, CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& , const Vector4D& );
	/* ../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<Vector4D>* );
	/* ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<Vector4D>* );
	/* ../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<Vector4D>* , CUtlBinaryBlock* , int);
	/* ../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* ../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* ../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* ../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* ../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* ../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* ../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* ../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* ../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , int, void* );
	/* ../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* );
	/* ../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<Vector4D>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int> > m_data; /* 40 32 */
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<Vector4D>* );
	void CCompressedAnim(class CCompressedAnim<Vector4D> *, class CCompressedAnim<Vector4D> &); /* linkage=_ZN15CCompressedAnimI8Vector4DEC4EOS1_ */
	void CCompressedAnim(class CCompressedAnim<Vector4D> *, const class CCompressedAnim<Vector4D>  &); /* linkage=_ZN15CCompressedAnimI8Vector4DEC4ERKS1_ */
	void CCompressedAnim(class CCompressedAnim<Vector4D> *); /* linkage=_ZN15CCompressedAnimI8Vector4DEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<Vector4D> *); /* linkage=_ZN15CCompressedAnimI8Vector4DE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<Vector4D> *, class CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > &, const class Vector4D  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimI8Vector4DE9CanEncodeER10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<Vector4D> *, int, class CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > &, const class Vector4D  &); /* linkage=_ZN15CCompressedAnimI8Vector4DE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_ */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<Vector4D> *); /* linkage=_ZN15CCompressedAnimI8Vector4DE15CreateContainerEv */
	/* <25dffc1> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<Vector4D>  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<Vector4D> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimI8Vector4DE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePS0_fPKS0_SA_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<Vector4D> *); /* linkage=_ZN15CCompressedAnimI8Vector4DE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<Vector4D> *); /* linkage=_ZN15CCompressedAnimI8Vector4DED4Ev */
};

// <0093C011> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<float> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<float>* , CCompressedAnim<float>& );
	void CCompressedAnim(CCompressedAnim<float>* , const CCompressedAnim<float>& );
	void CCompressedAnim(CCompressedAnim<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<float>* , CUtlVector<float, CUtlMemory<float, int> >& , const float& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<float>* , int, CUtlVector<float, CUtlMemory<float, int> >& , const float& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<float>* , CUtlBinaryBlock* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<float>* , const DecodeContainer_t* , int, void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<float>* , const DecodeContainer_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<float>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> > m_data; /* 40 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<float>* );
	void CCompressedAnim(class CCompressedAnim<float> *, class CCompressedAnim<float> &); /* linkage=_ZN15CCompressedAnimIfEC4EOS0_ */
	void CCompressedAnim(class CCompressedAnim<float> *, const class CCompressedAnim<float>  &); /* linkage=_ZN15CCompressedAnimIfEC4ERKS0_ */
	void CCompressedAnim(class CCompressedAnim<float> *); /* linkage=_ZN15CCompressedAnimIfEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<float> *); /* linkage=_ZN15CCompressedAnimIfE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<float> *, class CUtlVector<float, CUtlMemory<float, int> > &, const float  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimIfE9CanEncodeER10CUtlVectorIf10CUtlMemoryIfiEERKf20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<float> *, int, class CUtlVector<float, CUtlMemory<float, int> > &, const float  &); /* linkage=_ZN15CCompressedAnimIfE8AddArrayEiR10CUtlVectorIf10CUtlMemoryIfiEERKf */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<float> *); /* linkage=_ZN15CCompressedAnimIfE15CreateContainerEv */
	/* <25e0210> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<float>  *); /* linkage=_ZNK15CCompressedAnimIfE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<float> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimIfE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS7_SA_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimIfE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimIfE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<float> *); /* linkage=_ZN15CCompressedAnimIfE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<float> *); /* linkage=_ZN15CCompressedAnimIfED4Ev */
};

// <0093DBFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<Vector> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<Vector>* , CCompressedAnim<Vector>& );
	void CCompressedAnim(CCompressedAnim<Vector>* , const CCompressedAnim<Vector>& );
	void CCompressedAnim(CCompressedAnim<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<Vector>* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , const Vector& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<Vector>* , int, CUtlVector<Vector, CUtlMemory<Vector, int> >& , const Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<Vector>* , CUtlBinaryBlock* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<Vector>* , const DecodeContainer_t* , int, void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<Vector>* , const DecodeContainer_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<Vector>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int> > m_data; /* 40 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<Vector>* );
	void CCompressedAnim(class CCompressedAnim<Vector> *, class CCompressedAnim<Vector> &); /* linkage=_ZN15CCompressedAnimI6VectorEC4EOS1_ */
	void CCompressedAnim(class CCompressedAnim<Vector> *, const class CCompressedAnim<Vector>  &); /* linkage=_ZN15CCompressedAnimI6VectorEC4ERKS1_ */
	void CCompressedAnim(class CCompressedAnim<Vector> *); /* linkage=_ZN15CCompressedAnimI6VectorEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<Vector> *); /* linkage=_ZN15CCompressedAnimI6VectorE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<Vector> *, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, const class Vector  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimI6VectorE9CanEncodeER10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<Vector> *, int, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, const class Vector  &); /* linkage=_ZN15CCompressedAnimI6VectorE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_ */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<Vector> *); /* linkage=_ZN15CCompressedAnimI6VectorE15CreateContainerEv */
	/* <25e01e6> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<Vector>  *); /* linkage=_ZNK15CCompressedAnimI6VectorE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<Vector> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimI6VectorE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePS0_fPKS0_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI6VectorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS8_SB_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimI6VectorE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<Vector>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimI6VectorE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<Vector> *); /* linkage=_ZN15CCompressedAnimI6VectorE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<Vector> *); /* linkage=_ZN15CCompressedAnimI6VectorED4Ev */
};

// <0093F7E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<Quaternion> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<Quaternion>* , CCompressedAnim<Quaternion>& );
	void CCompressedAnim(CCompressedAnim<Quaternion>* , const CCompressedAnim<Quaternion>& );
	void CCompressedAnim(CCompressedAnim<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<Quaternion>* , CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& , const Quaternion& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<Quaternion>* , int, CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& , const Quaternion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<Quaternion>* , CUtlBinaryBlock* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* , int, void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<Quaternion>* , const DecodeContainer_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<Quaternion>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int> > m_data; /* 40 32 */
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<Quaternion>* );
	void CCompressedAnim(class CCompressedAnim<Quaternion> *, class CCompressedAnim<Quaternion> &); /* linkage=_ZN15CCompressedAnimI10QuaternionEC4EOS1_ */
	void CCompressedAnim(class CCompressedAnim<Quaternion> *, const class CCompressedAnim<Quaternion>  &); /* linkage=_ZN15CCompressedAnimI10QuaternionEC4ERKS1_ */
	void CCompressedAnim(class CCompressedAnim<Quaternion> *); /* linkage=_ZN15CCompressedAnimI10QuaternionEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<Quaternion> *); /* linkage=_ZN15CCompressedAnimI10QuaternionE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<Quaternion> *, class CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > &, const class Quaternion  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimI10QuaternionE9CanEncodeER10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<Quaternion> *, int, class CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > &, const class Quaternion  &); /* linkage=_ZN15CCompressedAnimI10QuaternionE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_ */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<Quaternion> *); /* linkage=_ZN15CCompressedAnimI10QuaternionE15CreateContainerEv */
	/* <25e01bc> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<Quaternion>  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<Quaternion> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimI10QuaternionE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePS0_fPKS0_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS8_SB_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<Quaternion>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimI10QuaternionE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<Quaternion> *); /* linkage=_ZN15CCompressedAnimI10QuaternionE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<Quaternion> *); /* linkage=_ZN15CCompressedAnimI10QuaternionED4Ev */
};

// <009413C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<int> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<int>* , CCompressedAnim<int>& );
	void CCompressedAnim(CCompressedAnim<int>* , const CCompressedAnim<int>& );
	void CCompressedAnim(CCompressedAnim<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<int>* , CUtlVector<int, CUtlMemory<int, int> >& , const int& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<int>* , int, CUtlVector<int, CUtlMemory<int, int> >& , const int& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<int>* , CUtlBinaryBlock* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<int>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<int>* , const DecodeContainer_t* , int, void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<int>* , const DecodeContainer_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<int>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > m_data; /* 40 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<int>* );
	void CCompressedAnim(class CCompressedAnim<int> *, class CCompressedAnim<int> &); /* linkage=_ZN15CCompressedAnimIiEC4EOS0_ */
	void CCompressedAnim(class CCompressedAnim<int> *, const class CCompressedAnim<int>  &); /* linkage=_ZN15CCompressedAnimIiEC4ERKS0_ */
	void CCompressedAnim(class CCompressedAnim<int> *); /* linkage=_ZN15CCompressedAnimIiEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<int> *); /* linkage=_ZN15CCompressedAnimIiE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<int> *, class CUtlVector<int, CUtlMemory<int, int> > &, const int  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimIiE9CanEncodeER10CUtlVectorIi10CUtlMemoryIiiEERKi20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<int> *, int, class CUtlVector<int, CUtlMemory<int, int> > &, const int  &); /* linkage=_ZN15CCompressedAnimIiE8AddArrayEiR10CUtlVectorIi10CUtlMemoryIiiEERKi */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<int> *); /* linkage=_ZN15CCompressedAnimIiE15CreateContainerEv */
	/* <25e0192> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<int>  *); /* linkage=_ZNK15CCompressedAnimIiE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<int> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimIiE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIiE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS7_SA_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimIiE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<int>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimIiE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<int> *); /* linkage=_ZN15CCompressedAnimIiE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<int> *); /* linkage=_ZN15CCompressedAnimIiED4Ev */
};

// <00942FAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<bool> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<bool>* , CCompressedAnim<bool>& );
	void CCompressedAnim(CCompressedAnim<bool>* , const CCompressedAnim<bool>& );
	void CCompressedAnim(CCompressedAnim<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<bool>* , CUtlVector<bool, CUtlMemory<bool, int> >& , const bool& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<bool>* , int, CUtlVector<bool, CUtlMemory<bool, int> >& , const bool& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<bool>* , CUtlBinaryBlock* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<bool>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<bool>* , const DecodeContainer_t* , int, void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<bool>* , const DecodeContainer_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<bool>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> > m_data; /* 40 32 */
	CUtlVector<bool, CUtlMemory<bool, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<bool>* );
	void CCompressedAnim(class CCompressedAnim<bool> *, class CCompressedAnim<bool> &); /* linkage=_ZN15CCompressedAnimIbEC4EOS0_ */
	void CCompressedAnim(class CCompressedAnim<bool> *, const class CCompressedAnim<bool>  &); /* linkage=_ZN15CCompressedAnimIbEC4ERKS0_ */
	void CCompressedAnim(class CCompressedAnim<bool> *); /* linkage=_ZN15CCompressedAnimIbEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<bool> *); /* linkage=_ZN15CCompressedAnimIbE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<bool> *, class CUtlVector<bool, CUtlMemory<bool, int> > &, const bool  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimIbE9CanEncodeER10CUtlVectorIb10CUtlMemoryIbiEERKb20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<bool> *, int, class CUtlVector<bool, CUtlMemory<bool, int> > &, const bool  &); /* linkage=_ZN15CCompressedAnimIbE8AddArrayEiR10CUtlVectorIb10CUtlMemoryIbiEERKb */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<bool> *); /* linkage=_ZN15CCompressedAnimIbE15CreateContainerEv */
	/* <25e0168> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<bool>  *); /* linkage=_ZNK15CCompressedAnimIbE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<bool> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimIbE14SetupContainerEP15CUtlBinaryBlocki */
	/* <25e003f> ../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIbE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS7_SA_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimIbE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<bool>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimIbE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<bool> *); /* linkage=_ZN15CCompressedAnimIbE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<bool> *); /* linkage=_ZN15CCompressedAnimIbED4Ev */
};

// <00944B90> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<Color> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<Color>* , CCompressedAnim<Color>& );
	void CCompressedAnim(CCompressedAnim<Color>* , const CCompressedAnim<Color>& );
	void CCompressedAnim(CCompressedAnim<Color>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<Color>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<Color>* , CUtlVector<Color, CUtlMemory<Color, int> >& , const Color& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<Color>* , int, CUtlVector<Color, CUtlMemory<Color, int> >& , const Color& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<Color>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<Color>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<Color>* , CUtlBinaryBlock* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Color>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<Color>* , const DecodeContainer_t* , int, void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<Color>* , const DecodeContainer_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<Color>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int> > m_data; /* 40 32 */
	CUtlVector<Color, CUtlMemory<Color, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<Color>* );
	void CCompressedAnim(class CCompressedAnim<Color> *, class CCompressedAnim<Color> &); /* linkage=_ZN15CCompressedAnimI5ColorEC4EOS1_ */
	void CCompressedAnim(class CCompressedAnim<Color> *, const class CCompressedAnim<Color>  &); /* linkage=_ZN15CCompressedAnimI5ColorEC4ERKS1_ */
	void CCompressedAnim(class CCompressedAnim<Color> *); /* linkage=_ZN15CCompressedAnimI5ColorEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<Color> *); /* linkage=_ZN15CCompressedAnimI5ColorE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<Color> *, class CUtlVector<Color, CUtlMemory<Color, int> > &, const class Color  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimI5ColorE9CanEncodeER10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<Color> *, int, class CUtlVector<Color, CUtlMemory<Color, int> > &, const class Color  &); /* linkage=_ZN15CCompressedAnimI5ColorE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_ */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<Color> *); /* linkage=_ZN15CCompressedAnimI5ColorE15CreateContainerEv */
	/* <25e0015> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<Color>  *); /* linkage=_ZNK15CCompressedAnimI5ColorE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<Color> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimI5ColorE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePS0_fPKS0_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI5ColorE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS8_SB_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimI5ColorE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<Color>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimI5ColorE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<Color> *); /* linkage=_ZN15CCompressedAnimI5ColorE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<Color> *); /* linkage=_ZN15CCompressedAnimI5ColorED4Ev */
};

// <00946775> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<Vector2D> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<Vector2D>* , CCompressedAnim<Vector2D>& );
	void CCompressedAnim(CCompressedAnim<Vector2D>* , const CCompressedAnim<Vector2D>& );
	void CCompressedAnim(CCompressedAnim<Vector2D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<Vector2D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<Vector2D>* , CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& , const Vector2D& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<Vector2D>* , int, CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& , const Vector2D& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<Vector2D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<Vector2D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<Vector2D>* , CUtlBinaryBlock* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* , int, void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<Vector2D>* , const DecodeContainer_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<Vector2D>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int> > m_data; /* 40 32 */
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<Vector2D>* );
	void CCompressedAnim(class CCompressedAnim<Vector2D> *, class CCompressedAnim<Vector2D> &); /* linkage=_ZN15CCompressedAnimI8Vector2DEC4EOS1_ */
	void CCompressedAnim(class CCompressedAnim<Vector2D> *, const class CCompressedAnim<Vector2D>  &); /* linkage=_ZN15CCompressedAnimI8Vector2DEC4ERKS1_ */
	void CCompressedAnim(class CCompressedAnim<Vector2D> *); /* linkage=_ZN15CCompressedAnimI8Vector2DEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<Vector2D> *); /* linkage=_ZN15CCompressedAnimI8Vector2DE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<Vector2D> *, class CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > &, const class Vector2D  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimI8Vector2DE9CanEncodeER10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<Vector2D> *, int, class CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > &, const class Vector2D  &); /* linkage=_ZN15CCompressedAnimI8Vector2DE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_ */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<Vector2D> *); /* linkage=_ZN15CCompressedAnimI8Vector2DE15CreateContainerEv */
	/* <25dffeb> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<Vector2D>  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<Vector2D> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimI8Vector2DE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePS0_fPKS0_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS8_SB_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<Vector2D>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimI8Vector2DE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<Vector2D> *); /* linkage=_ZN15CCompressedAnimI8Vector2DE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<Vector2D> *); /* linkage=_ZN15CCompressedAnimI8Vector2DED4Ev */
};

// <0094835A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<Vector4D> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<Vector4D>* , CCompressedAnim<Vector4D>& );
	void CCompressedAnim(CCompressedAnim<Vector4D>* , const CCompressedAnim<Vector4D>& );
	void CCompressedAnim(CCompressedAnim<Vector4D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<Vector4D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<Vector4D>* , CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& , const Vector4D& , AnimCompressEnable_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<Vector4D>* , int, CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& , const Vector4D& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<Vector4D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<Vector4D>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<Vector4D>* , CUtlBinaryBlock* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* , int, void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<Vector4D>* , const DecodeContainer_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<Vector4D>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int> > m_data; /* 40 32 */
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<Vector4D>* );
	void CCompressedAnim(class CCompressedAnim<Vector4D> *, class CCompressedAnim<Vector4D> &); /* linkage=_ZN15CCompressedAnimI8Vector4DEC4EOS1_ */
	void CCompressedAnim(class CCompressedAnim<Vector4D> *, const class CCompressedAnim<Vector4D>  &); /* linkage=_ZN15CCompressedAnimI8Vector4DEC4ERKS1_ */
	void CCompressedAnim(class CCompressedAnim<Vector4D> *); /* linkage=_ZN15CCompressedAnimI8Vector4DEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<Vector4D> *); /* linkage=_ZN15CCompressedAnimI8Vector4DE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<Vector4D> *, class CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > &, const class Vector4D  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimI8Vector4DE9CanEncodeER10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<Vector4D> *, int, class CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > &, const class Vector4D  &); /* linkage=_ZN15CCompressedAnimI8Vector4DE8AddArrayEiR10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_ */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<Vector4D> *); /* linkage=_ZN15CCompressedAnimI8Vector4DE15CreateContainerEv */
	/* <25dffc1> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<Vector4D>  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<Vector4D> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimI8Vector4DE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbSA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS8_SB_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePS0_fPKS0_SA_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<Vector4D>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimI8Vector4DE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<Vector4D> *); /* linkage=_ZN15CCompressedAnimI8Vector4DE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<Vector4D> *); /* linkage=_ZN15CCompressedAnimI8Vector4DED4Ev */
};

// <00BB98B8> ../public/animationsystem/compression.h:582
// member functions: 46
// member variables: 4
// vtable entries: 7
// class size: 104
class CCompressedAnim<float> : public ICompressorService {
public:
	/* class ICompressorService <ancestor>; */ /* 0 8 */
	void CCompressedAnim(CCompressedAnim<float>* , CCompressedAnim<float>& );
	void CCompressedAnim(CCompressedAnim<float>* , const CCompressedAnim<float>& );
	void CCompressedAnim(CCompressedAnim<float>* );
	/* ../public/animationsystem/compression.h:585 */
	int GetDecoderIndex(CCompressedAnim<float>* );
	/* ../public/animationsystem/compression.h:590 */
	virtual bool CanEncode(CCompressedAnim<float>* , CUtlVector<float, CUtlMemory<float, int> >& , const float& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:596 */
	CUtlBinaryBlock* AddArray(CCompressedAnim<float>* , int, CUtlVector<float, CUtlMemory<float, int> >& , const float& );
	/* ../public/animationsystem/compression.h:610 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnim<float>* );
	/* ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const CCompressedAnim<float>* );
	/* ../public/animationsystem/compression.h:620 */
	DecodeContainer_t* SetupContainer(CCompressedAnim<float>* , CUtlBinaryBlock* , int);
	/* ../public/animationsystem/compression.h:647 */
	virtual void DeswizzleContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:663 */
	virtual void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , void* , float, const void* , const void* , int, const char* );
	/* ../public/animationsystem/compression.h:668 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , float* , float, const float* , const float* , int, const char* );
	/* ../public/animationsystem/compression.h:680 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector* , float, const Vector* , const Vector* , int, const char* );
	/* ../public/animationsystem/compression.h:694 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Quaternion* , float, const Quaternion* , const Quaternion* , int, const char* );
	/* ../public/animationsystem/compression.h:716 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , int* , float, const int* , const int* , int, const char* );
	/* ../public/animationsystem/compression.h:729 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , bool* , float, const bool* , const bool* , int, const char* );
	/* ../public/animationsystem/compression.h:742 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Color* , float, const Color* , const Color* , int, const char* );
	/* ../public/animationsystem/compression.h:758 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector2D* , float, const Vector2D* , const Vector2D* , int, const char* );
	/* ../public/animationsystem/compression.h:771 */
	void DeswizzleAndBlendContainer(const CCompressedAnim<float>* , const DecodeContainer_t* , const CAnimDecodeSwizzle* , Vector4D* , float, const Vector4D* , const Vector4D* , int, const char* );
	/* ../public/animationsystem/compression.h:784 */
	virtual bool DecodeFrame(const CCompressedAnim<float>* , const DecodeContainer_t* , int, void* );
	/* ../public/animationsystem/compression.h:789 */
	virtual int DecodeSize(const CCompressedAnim<float>* , const DecodeContainer_t* );
	/* ../public/animationsystem/compression.h:794 */
	void Cleanup(CCompressedAnim<float>* );
	CUtlVector<int, CUtlMemory<int, int> > m_elements; /* 8 32 */
	CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> > m_data; /* 40 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_reference; /* 72 32 */
	virtual void ~CCompressedAnim(CCompressedAnim<float>* );
	void CCompressedAnim(class CCompressedAnim<float> *, class CCompressedAnim<float> &); /* linkage=_ZN15CCompressedAnimIfEC4EOS0_ */
	void CCompressedAnim(class CCompressedAnim<float> *, const class CCompressedAnim<float>  &); /* linkage=_ZN15CCompressedAnimIfEC4ERKS0_ */
	void CCompressedAnim(class CCompressedAnim<float> *); /* linkage=_ZN15CCompressedAnimIfEC4Ev */
	int GetDecoderIndex(class CCompressedAnim<float> *); /* linkage=_ZN15CCompressedAnimIfE15GetDecoderIndexEv */
	virtual bool CanEncode(class CCompressedAnim<float> *, class CUtlVector<float, CUtlMemory<float, int> > &, const float  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedAnimIfE9CanEncodeER10CUtlVectorIf10CUtlMemoryIfiEERKf20AnimCompressEnable_t */
	class CUtlBinaryBlock * AddArray(class CCompressedAnim<float> *, int, class CUtlVector<float, CUtlMemory<float, int> > &, const float  &); /* linkage=_ZN15CCompressedAnimIfE8AddArrayEiR10CUtlVectorIf10CUtlMemoryIfiEERKf */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnim<float> *); /* linkage=_ZN15CCompressedAnimIfE15CreateContainerEv */
	/* <25e0210> ../public/animationsystem/compression.h:615 */
	virtual int GetSizeof(const class CCompressedAnim<float>  *); /* linkage=_ZNK15CCompressedAnimIfE9GetSizeofEv */
	class DecodeContainer_t * SetupContainer(class CCompressedAnim<float> *, class CUtlBinaryBlock *, int); /* linkage=_ZN15CCompressedAnimIfE14SetupContainerEP15CUtlBinaryBlocki */
	virtual void DeswizzleContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE18DeswizzleContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvPKviPKc */
	virtual void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, void *, float, const void  *, const void  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePvfPKvS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, float *, float, const float  *, const float  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePffPKfS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector *, float, const class Vector  *, const class Vector  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP6VectorfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Quaternion *, float, const class Quaternion  *, const class Quaternion  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP10QuaternionfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, int *, float, const int  *, const int  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePifPKiS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, bool *, float, const bool  *, const bool  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzlePbfPKbS9_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Color *, float, const class Color  *, const class Color  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP5ColorfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector2D *, float, const class Vector2D  *, const class Vector2D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector2DfPKS7_SA_iPKc */
	void DeswizzleAndBlendContainer(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, const class CAnimDecodeSwizzle  *, class Vector4D *, float, const class Vector4D  *, const class Vector4D  *, int, const char  *); /* linkage=_ZNK15CCompressedAnimIfE26DeswizzleAndBlendContainerEPK17DecodeContainer_tPK18CAnimDecodeSwizzleP8Vector4DfPKS7_SA_iPKc */
	virtual bool DecodeFrame(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedAnimIfE11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual int DecodeSize(const class CCompressedAnim<float>  *, const class DecodeContainer_t  *); /* linkage=_ZNK15CCompressedAnimIfE10DecodeSizeEPK17DecodeContainer_t */
	void Cleanup(class CCompressedAnim<float> *); /* linkage=_ZN15CCompressedAnimIfE7CleanupEv */
	virtual void ~CCompressedAnim(class CCompressedAnim<float> *); /* linkage=_ZN15CCompressedAnimIfED4Ev */
};

// <025B86EE> ../public/animationsystem/compression.h:585
inline void CCompressedAnim<Quaternion>::GetDecoderIndex()
{
} /* size: 0 */

// <0259289B> ../public/animationsystem/compression.h:585
inline void CCompressedAnim<Vector4D>::GetDecoderIndex()
{
} /* size: 0 */

// <02592882> ../public/animationsystem/compression.h:585
inline void CCompressedAnim<Vector2D>::GetDecoderIndex()
{
} /* size: 0 */

// <02592869> ../public/animationsystem/compression.h:585
inline void CCompressedAnim<Color>::GetDecoderIndex()
{
} /* size: 0 */

// <02592850> ../public/animationsystem/compression.h:585
inline void CCompressedAnim<bool>::GetDecoderIndex()
{
} /* size: 0 */

// <02592837> ../public/animationsystem/compression.h:585
inline void CCompressedAnim<int>::GetDecoderIndex()
{
} /* size: 0 */

// <00C62094> ../public/animationsystem/compression.h:585
void CCompressedAnim<Vector>::GetDecoderIndex()
{
} /* size: 0 */

// <00C61EEA> ../public/animationsystem/compression.h:585
void CCompressedAnim<Quaternion>::GetDecoderIndex()
{
} /* size: 0 */

// <00C17716> ../public/animationsystem/compression.h:585
void CCompressedAnim<Vector4D>::GetDecoderIndex()
{
} /* size: 0 */

// <00C176FE> ../public/animationsystem/compression.h:585
void CCompressedAnim<Vector2D>::GetDecoderIndex()
{
} /* size: 0 */

// <00C176E6> ../public/animationsystem/compression.h:585
void CCompressedAnim<Color>::GetDecoderIndex()
{
} /* size: 0 */

// <00C176B6> ../public/animationsystem/compression.h:585
void CCompressedAnim<int>::GetDecoderIndex()
{
} /* size: 0 */

// <00C1769E> ../public/animationsystem/compression.h:585
void CCompressedAnim<float>::GetDecoderIndex()
{
} /* size: 0 */

// <025B9509> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<float>::CanEncode(CUtlVector<float, CUtlMemory<float, int> >& data, const float& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 20704
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 29, variables: 1 */

// <025B944D> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<Vector>::CanEncode(CUtlVector<Vector, CUtlMemory<Vector, int> >& data, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 20704
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 29, variables: 1 */

// <025B9391> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<Quaternion>::CanEncode(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& data, const Quaternion& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 20704
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 29, variables: 1 */

// <025B92D5> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<int>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& data, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 20704
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 29, variables: 1 */

// <025B9219> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<bool>::CanEncode(CUtlVector<bool, CUtlMemory<bool, int> >& data, const bool& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 20704
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 29, variables: 1 */

// <025B915D> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<Color>::CanEncode(CUtlVector<Color, CUtlMemory<Color, int> >& data, const Color& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 20704
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 29, variables: 1 */

// <025B90A1> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<Vector2D>::CanEncode(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& data, const Vector2D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 20704
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 29, variables: 1 */

// <025B8FE5> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<Vector4D>::CanEncode(CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& data, const Vector4D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 20704
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 29, variables: 1 */

// <00C62B9B> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<float>::CanEncode(CUtlVector<float, CUtlMemory<float, int> >& data, const float& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 0, variables: 1 */

// <00C62A5D> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<Vector>::CanEncode(CUtlVector<Vector, CUtlMemory<Vector, int> >& data, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 0, variables: 1 */

// <00C62952> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<Quaternion>::CanEncode(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& data, const Quaternion& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 0, variables: 1 */

// <00C62847> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<int>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& data, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 0, variables: 1 */

// <00C62787> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<bool>::CanEncode(CUtlVector<bool, CUtlMemory<bool, int> >& data, const bool& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 0, variables: 1 */

// <00C626C7> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<Color>::CanEncode(CUtlVector<Color, CUtlMemory<Color, int> >& data, const Color& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 0, variables: 1 */

// <00C62607> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<Vector2D>::CanEncode(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& data, const Vector2D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 0, variables: 1 */

// <00C62547> ../public/animationsystem/compression.h:590
// variables: 2
void CCompressedAnim<Vector4D>::CanEncode(CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& data, const Vector4D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
	}
} /* size: 0, variables: 1 */

// <00C62B50> ../public/animationsystem/compression.h:596
// variable: 1
inline void CCompressedAnim<float>::AddArray(int nElement, CUtlVector<float, CUtlMemory<float, int> >& data, const float& reference)
{
	int i; // 600
} /* size: 0, variables: 1 */

// <00C62907> ../public/animationsystem/compression.h:596
// variable: 1
inline void CCompressedAnim<Quaternion>::AddArray(int nElement, CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& data, const Quaternion& reference)
{
	int i; // 600
} /* size: 0, variables: 1 */

// <025B5880> ../public/animationsystem/compression.h:610
void CCompressedAnim<float>::CreateContainer()
{
} /* size: 7 */

// <025B5852> ../public/animationsystem/compression.h:610
void CCompressedAnim<Vector>::CreateContainer()
{
} /* size: 7 */

// <025B5824> ../public/animationsystem/compression.h:610
void CCompressedAnim<Quaternion>::CreateContainer()
{
} /* size: 7 */

// <025B57F6> ../public/animationsystem/compression.h:610
void CCompressedAnim<int>::CreateContainer()
{
} /* size: 7 */

// <025B57A4> ../public/animationsystem/compression.h:610
void CCompressedAnim<bool>::CreateContainer()
{
} /* size: 7 */

// <025B5752> ../public/animationsystem/compression.h:610
void CCompressedAnim<Color>::CreateContainer()
{
} /* size: 7 */

// <025B5700> ../public/animationsystem/compression.h:610
void CCompressedAnim<Vector2D>::CreateContainer()
{
} /* size: 7 */

// <025B56AE> ../public/animationsystem/compression.h:610
void CCompressedAnim<Vector4D>::CreateContainer()
{
} /* size: 7 */

// <025E0210> ../public/animationsystem/compression.h:615
void CCompressedAnim<float>::GetSizeof()
{
} /* size: 10 */

// <025E01E6> ../public/animationsystem/compression.h:615
void CCompressedAnim<Vector>::GetSizeof()
{
} /* size: 10 */

// <025E01BC> ../public/animationsystem/compression.h:615
void CCompressedAnim<Quaternion>::GetSizeof()
{
} /* size: 10 */

// <025E0192> ../public/animationsystem/compression.h:615
void CCompressedAnim<int>::GetSizeof()
{
} /* size: 10 */

// <025E0168> ../public/animationsystem/compression.h:615
void CCompressedAnim<bool>::GetSizeof()
{
} /* size: 10 */

// <025E0015> ../public/animationsystem/compression.h:615
void CCompressedAnim<Color>::GetSizeof()
{
} /* size: 10 */

// <025DFFEB> ../public/animationsystem/compression.h:615
void CCompressedAnim<Vector2D>::GetSizeof()
{
} /* size: 10 */

// <025DFFC1> ../public/animationsystem/compression.h:615
void CCompressedAnim<Vector4D>::GetSizeof()
{
} /* size: 10 */

// <0259EF01> ../public/animationsystem/compression.h:615
inline void CCompressedAnim<Vector4D>::GetSizeof()
{
} /* size: 0 */

// <0259D419> ../public/animationsystem/compression.h:615
inline void CCompressedAnim<Vector2D>::GetSizeof()
{
} /* size: 0 */

// <0259BB5D> ../public/animationsystem/compression.h:615
inline void CCompressedAnim<Color>::GetSizeof()
{
} /* size: 0 */

// <0259A143> ../public/animationsystem/compression.h:615
inline void CCompressedAnim<bool>::GetSizeof()
{
} /* size: 0 */

// <02598D2E> ../public/animationsystem/compression.h:615
inline void CCompressedAnim<int>::GetSizeof()
{
} /* size: 0 */

// <025956A0> ../public/animationsystem/compression.h:615
inline void CCompressedAnim<Quaternion>::GetSizeof()
{
} /* size: 0 */

// <025951EC> ../public/animationsystem/compression.h:615
inline void CCompressedAnim<Vector>::GetSizeof()
{
} /* size: 0 */

// <025945A6> ../public/animationsystem/compression.h:615
inline void CCompressedAnim<float>::GetSizeof()
{
} /* size: 0 */

// <025BB801> ../public/animationsystem/compression.h:620
// variables: 5
// function calls: 10
void CCompressedAnim<Vector>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 625
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	{
		CAnimCompressorRegistry* pRegistry; // 121
	}
	{
	}
	GetDecoderIndex(const char* szName); // 118
	GetDecoderIndex(const char* szName); // 587
	CCompressedAnim<Vector>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
} /* size: 255, variables: 3, inline expansions: 7 (209 bytes) */

// <025BB5E1> ../public/animationsystem/compression.h:620
// variables: 4
inline void CCompressedAnim<Quaternion>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <0259375A> ../public/animationsystem/compression.h:620
// variables: 4
inline void CCompressedAnim<Vector4D>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <025935F8> ../public/animationsystem/compression.h:620
// variables: 4
inline void CCompressedAnim<Vector2D>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <02593496> ../public/animationsystem/compression.h:620
// variables: 4
inline void CCompressedAnim<Color>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <02593373> ../public/animationsystem/compression.h:620
// variables: 4
inline void CCompressedAnim<bool>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <02593007> ../public/animationsystem/compression.h:620
// variables: 4
// function calls: 8
void CCompressedAnim<int>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 625
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<int>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
} /* size: 164, variables: 3, inline expansions: 5 (24 bytes) */

// <02592CDB> ../public/animationsystem/compression.h:620
// variables: 4
inline void CCompressedAnim<float>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <00C7A387> ../public/animationsystem/compression.h:620
// variables: 4
void CCompressedAnim<Vector>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <00C7A1C8> ../public/animationsystem/compression.h:620
// variables: 4
void CCompressedAnim<Quaternion>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <00C187F3> ../public/animationsystem/compression.h:620
// variables: 4
void CCompressedAnim<Vector4D>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <00C18693> ../public/animationsystem/compression.h:620
// variables: 4
void CCompressedAnim<Vector2D>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <00C18533> ../public/animationsystem/compression.h:620
// variables: 4
void CCompressedAnim<Color>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <00C18435> ../public/animationsystem/compression.h:620
// variables: 4
void CCompressedAnim<bool>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <00C182F9> ../public/animationsystem/compression.h:620
// variables: 4
void CCompressedAnim<int>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <00C17FF5> ../public/animationsystem/compression.h:620
// variables: 4
void CCompressedAnim<float>::SetupContainer(CUtlBinaryBlock* pDestBlock, int nDataSize)
{
	int nSize; // 623
	DecodeContainer_t* pContainer; // 632
	uint16* pList; // 639
	{
		int j; // 640
	}
} /* size: 0, variables: 3 */

// <025E003F> ../public/animationsystem/compression.h:647
// variables: 7
// function calls: 2
void CCompressedAnim<bool>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	bool* pDstValues; // 649
	const bool* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
} /* size: 60, variables: 4, inline expansions: 2 (32 bytes) */

// <0259F7DD> ../public/animationsystem/compression.h:647
// variables: 7
// function calls: 3
void CCompressedAnim<Vector4D>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	Vector4D* pDstValues; // 649
	const Vector4D* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
			Vector4D::operator=(
					const Vector4D& vOther);  // 659
		}
	}
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 653
} /* size: 110, variables: 4, inline expansions: 2 (102 bytes) */

// <0259DD0C> ../public/animationsystem/compression.h:647
// variables: 7
// function calls: 3
void CCompressedAnim<Vector2D>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	Vector2D* pDstValues; // 649
	const Vector2D* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
			Vector2D::operator=(
					const Vector2D& vOther);  // 659
		}
	}
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 653
} /* size: 59, variables: 4, inline expansions: 2 (32 bytes) */

// <0259C32C> ../public/animationsystem/compression.h:647
// variables: 7
// function calls: 5
void CCompressedAnim<Color>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	Color* pDstValues; // 649
	const Color* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
			Color::GetRawColor(); // 147
			Color::SetRawColor(
					int32 Color);  // 147
			Color::operator=(
					const Color& rhs);  // 659
		}
	}
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 653
} /* size: 59, variables: 4, inline expansions: 2 (32 bytes) */

// <0259A8AB> ../public/animationsystem/compression.h:647
// variables: 7
inline void CCompressedAnim<bool>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	bool* pDstValues; // 649
	const bool* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
} /* size: 0, variables: 4 */

// <02599292> ../public/animationsystem/compression.h:647
// variables: 7
// function calls: 2
void CCompressedAnim<int>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	int* pDstValues; // 649
	const int* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 653
} /* size: 59, variables: 4, inline expansions: 2 (32 bytes) */

// <025956B9> ../public/animationsystem/compression.h:647
// variables: 7
// function calls: 2
void CCompressedAnim<Quaternion>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	Quaternion* pDstValues; // 649
	const Quaternion* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 653
} /* size: 100, variables: 4, inline expansions: 2 (102 bytes) */

// <02595205> ../public/animationsystem/compression.h:647
// variables: 7
// function calls: 3
void CCompressedAnim<Vector>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	Vector* pDstValues; // 649
	const Vector* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
			Vector::operator=(
					const Vector& vOther);  // 659
		}
	}
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 653
} /* size: 110, variables: 4, inline expansions: 2 (102 bytes) */

// <02594DD1> ../public/animationsystem/compression.h:647
// variables: 7
// function calls: 2
void CCompressedAnim<float>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	float* pDstValues; // 649
	const float* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 653
} /* size: 62, variables: 4, inline expansions: 2 (32 bytes) */

// <00C1B0B4> ../public/animationsystem/compression.h:647
// variables: 7
void CCompressedAnim<Vector4D>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	Vector4D* pDstValues; // 649
	const Vector4D* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
} /* size: 0, variables: 4 */

// <00C1AC72> ../public/animationsystem/compression.h:647
// variables: 7
void CCompressedAnim<Vector2D>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	Vector2D* pDstValues; // 649
	const Vector2D* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
} /* size: 0, variables: 4 */

// <00C1A830> ../public/animationsystem/compression.h:647
// variables: 7
void CCompressedAnim<Color>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	Color* pDstValues; // 649
	const Color* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
} /* size: 0, variables: 4 */

// <00C1A3EE> ../public/animationsystem/compression.h:647
// variables: 7
void CCompressedAnim<bool>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	bool* pDstValues; // 649
	const bool* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
} /* size: 0, variables: 4 */

// <00C19FAC> ../public/animationsystem/compression.h:647
// variables: 7
void CCompressedAnim<int>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	int* pDstValues; // 649
	const int* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
} /* size: 0, variables: 4 */

// <00C1989E> ../public/animationsystem/compression.h:647
// variables: 7
void CCompressedAnim<Quaternion>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	Quaternion* pDstValues; // 649
	const Quaternion* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
} /* size: 0, variables: 4 */

// <00C196E5> ../public/animationsystem/compression.h:647
// variables: 7
void CCompressedAnim<Vector>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	Vector* pDstValues; // 649
	const Vector* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
} /* size: 0, variables: 4 */

// <00C1952C> ../public/animationsystem/compression.h:647
// variables: 7
void CCompressedAnim<float>::DeswizzleContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, const void* pSrc, int nResultBufSize, const char* pDebugName)
{
	float* pDstValues; // 649
	const float* pSrcValues; // 650
	const uint16* pElements; // 652
	const int* pMasterElement; // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
} /* size: 0, variables: 4 */

// <0259F996> ../public/animationsystem/compression.h:663
// variables: 3
// function calls: 13
void CCompressedAnim<Vector4D>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 774
	{
		uint16 k; // 776
		{
			uint16 n; // 778
			int j; // 779
			Vector4D::Vector4D(); // 456
			Vector4DMultiply(const Vector4D& a,
					vec_t b,
					Vector4D& c);  // 457
			Vector4D::operator*(
					float fl);  // 780
			Vector4D::Vector4D(); // 456
			Vector4DMultiply(const Vector4D& a,
					vec_t b,
					Vector4D& c);  // 457
			Vector4D::operator*(
					float fl);  // 780
			Vector4D::Vector4D(); // 441
			Vector4DAdd(const Vector4D& a,
					const Vector4D& b,
					Vector4D& c);  // 442
			Vector4D::operator+(
					const Vector4D& v);  // 780
			Vector4D::operator=(
					const Vector4D& vOther);  // 780
		}
	}
	CCompressedAnim<Vector4D>::DeswizzleAndBlendContainer(
					const DecodeContainer_t* pContainer,
					const CAnimDecodeSwizzle* pSwizzle,
					Vector4D* pDst,
					float s,
					const Vector4D* pSrc1,
					const Vector4D* pSrc2,
					int nResultBufSize,
					const char* pDebugName);  // 665
} /* size: 118, inline expansions: 3 (137 bytes) */

// <0259DEC5> ../public/animationsystem/compression.h:663
// variables: 3
// function calls: 13
void CCompressedAnim<Vector2D>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 761
	{
		uint16 k; // 763
		{
			uint16 n; // 765
			int j; // 766
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 767
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 767
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 767
			Vector2D::operator=(
					const Vector2D& vOther);  // 767
		}
	}
	CCompressedAnim<Vector2D>::DeswizzleAndBlendContainer(
					const DecodeContainer_t* pContainer,
					const CAnimDecodeSwizzle* pSwizzle,
					Vector2D* pDst,
					float s,
					const Vector2D* pSrc1,
					const Vector2D* pSrc2,
					int nResultBufSize,
					const char* pDebugName);  // 665
} /* size: 116, inline expansions: 3 (116 bytes) */

// <0259C54A> ../public/animationsystem/compression.h:663
// variables: 3
// function calls: 3
void CCompressedAnim<Color>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 745
	{
		uint16 k; // 747
		{
			uint16 n; // 749
			int j; // 750
		}
	}
	CCompressedAnim<Color>::DeswizzleAndBlendContainer(
					const DecodeContainer_t* pContainer,
					const CAnimDecodeSwizzle* pSwizzle,
					Color* pDst,
					float s,
					const Color* pSrc1,
					const Color* pSrc2,
					int nResultBufSize,
					const char* pDebugName);  // 665
} /* size: 289, inline expansions: 3 (276 bytes) */

// <0259A96B> ../public/animationsystem/compression.h:663
// variables: 6
// function calls: 8
void CCompressedAnim<bool>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
	CCompressedAnim<bool>::DeswizzleContainer(
				const DecodeContainer_t* pContainer,
				const CAnimDecodeSwizzle* pSwizzle,
				void* pDst,
				const void* pSrc,
				int nResultBufSize,
				const char* pDebugName);  // 734
	CCompressedAnim<bool>::DeswizzleAndBlendContainer(
					const DecodeContainer_t* pContainer,
					const CAnimDecodeSwizzle* pSwizzle,
					bool* pDst,
					float s,
					const bool* pSrc1,
					const bool* pSrc2,
					int nResultBufSize,
					const char* pDebugName);  // 729
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 653
	{
		uint16 k; // 655
		{
			uint16 n; // 657
			int j; // 658
		}
	}
	CCompressedAnim<bool>::DeswizzleContainer(
				const DecodeContainer_t* pContainer,
				const CAnimDecodeSwizzle* pSwizzle,
				void* pDst,
				const void* pSrc,
				int nResultBufSize,
				const char* pDebugName);  // 738
	CCompressedAnim<bool>::DeswizzleAndBlendContainer(
					const DecodeContainer_t* pContainer,
					const CAnimDecodeSwizzle* pSwizzle,
					bool* pDst,
					float s,
					const bool* pSrc1,
					const bool* pSrc2,
					int nResultBufSize,
					const char* pDebugName);  // 665
} /* size: 218, inline expansions: 8 (474 bytes) */

// <02599419> ../public/animationsystem/compression.h:663
// variables: 3
// function calls: 3
void CCompressedAnim<int>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
	{
		uint16 k; // 721
		{
			uint16 n; // 723
			int j; // 724
		}
	}
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 719
	CCompressedAnim<int>::DeswizzleAndBlendContainer(
					const DecodeContainer_t* pContainer,
					const CAnimDecodeSwizzle* pSwizzle,
					int* pDst,
					float s,
					const int* pSrc1,
					const int* pSrc2,
					int nResultBufSize,
					const char* pDebugName);  // 665
} /* size: 123, inline expansions: 3 (117 bytes) */

// <02595840> ../public/animationsystem/compression.h:663
// variables: 47
// function calls: 71
void CCompressedAnim<Quaternion>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
	{
		uint16 k; // 700
		{
			uint16 n; // 702
			int j; // 703
			fltx4 src1; // 706
			fltx4 src2; // 707
			fltx4 src2aligned; // 708
			fltx4 dst; // 709
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 2409
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 2408
			{
				fltx4 retVal; // 2369
				_mm_rsqrt_ps(__m128 __A); // 2370
			}
			ReciprocalSqrtEstSIMD<>(const fltx4& a); // 2406
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 2408
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 2408
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 2408
			ReciprocalSqrtSIMD<>(const fltx4& a); // 710
			{
				fltx4 retVal; // 947
				_mm_loadu_ps(const float* __P); // 948
			}
			LoadUnalignedSIMD<>(const void* pSIMD); // 706
			{
				fltx4 retVal; // 947
				_mm_loadu_ps(const float* __P); // 948
			}
			LoadUnalignedSIMD<>(const void* pSIMD); // 707
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 464
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 465
			{
				fltx4 fl4Product; // 1725
				fltx4 fl4YXWZ; // 1727
				fltx4 fl4UUVV; // 1729
				fltx4 fl4VVUU; // 1731
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1725
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1728
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1730
				{
					fltx4 retVal; // 373
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 374
				}
				RotateLeft2<>(const fltx4& a); // 1732
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1733
			}
			Dot4SIMD<>(const fltx4& a,
					const fltx4& b);  // 466
			{
				fltx4 fl4Product; // 1725
				fltx4 fl4YXWZ; // 1727
				fltx4 fl4UUVV; // 1729
				fltx4 fl4VVUU; // 1731
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1725
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1728
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1730
				{
					fltx4 retVal; // 373
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 374
				}
				RotateLeft2<>(const fltx4& a); // 1732
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1733
			}
			Dot4SIMD<>(const fltx4& a,
					const fltx4& b);  // 467
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 468
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 1797
			NegSIMD<>(const fltx4& a); // 469
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 469
			QuaternionAlignSIMD<>(const fltx4& p,
						const fltx4& q);  // 708
			_mm_storeu_ps(float* __P,
					__m128 __A);  // 294
			StoreUnalignedSIMD<>(float* pSIMD,
						const fltx4& a);  // 711
			{
				fltx4 fl4Product; // 1725
				fltx4 fl4YXWZ; // 1727
				fltx4 fl4UUVV; // 1729
				fltx4 fl4VVUU; // 1731
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1725
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1728
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1730
				{
					fltx4 retVal; // 373
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 374
				}
				RotateLeft2<>(const fltx4& a); // 1732
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1733
			}
			Dot4SIMD<>(const fltx4& a,
					const fltx4& b);  // 710
		}
	}
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 697
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 699
	CCompressedAnim<Quaternion>::DeswizzleAndBlendContainer(
					const DecodeContainer_t* pContainer,
					const CAnimDecodeSwizzle* pSwizzle,
					Quaternion* pDst,
					float s,
					const Quaternion* pSrc1,
					const Quaternion* pSrc2,
					int nResultBufSize,
					const char* pDebugName);  // 665
} /* size: 298, inline expansions: 4 (305 bytes) */

// <025953BC> ../public/animationsystem/compression.h:663
// variables: 3
// function calls: 4
void CCompressedAnim<Vector>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
	{
		uint16 k; // 685
		{
			uint16 n; // 687
			int j; // 688
			VectorLerp(const Vector& src1,
					const Vector& src2,
					vec_t t,
					Vector& dest);  // 689
		}
	}
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 683
	CCompressedAnim<Vector>::DeswizzleAndBlendContainer(
					const DecodeContainer_t* pContainer,
					const CAnimDecodeSwizzle* pSwizzle,
					Vector* pDst,
					float s,
					const Vector* pSrc1,
					const Vector* pSrc2,
					int nResultBufSize,
					const char* pDebugName);  // 665
} /* size: 141, inline expansions: 3 (180 bytes) */

// <02594F58> ../public/animationsystem/compression.h:663
// variables: 3
// function calls: 3
void CCompressedAnim<float>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 671
	{
		uint16 k; // 672
		{
			uint16 n; // 674
			int j; // 675
		}
	}
	CCompressedAnim<float>::DeswizzleAndBlendContainer(
					const DecodeContainer_t* pContainer,
					const CAnimDecodeSwizzle* pSwizzle,
					float* pDst,
					float s,
					const float* pSrc1,
					const float* pSrc2,
					int nResultBufSize,
					const char* pDebugName);  // 665
} /* size: 112, inline expansions: 3 (109 bytes) */

// <00C1B173> ../public/animationsystem/compression.h:663
void CCompressedAnim<Vector4D>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
} /* size: 0 */

// <00C1AD31> ../public/animationsystem/compression.h:663
void CCompressedAnim<Vector2D>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
} /* size: 0 */

// <00C1A8EF> ../public/animationsystem/compression.h:663
void CCompressedAnim<Color>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
} /* size: 0 */

// <00C1A4AD> ../public/animationsystem/compression.h:663
void CCompressedAnim<bool>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
} /* size: 0 */

// <00C1A06B> ../public/animationsystem/compression.h:663
void CCompressedAnim<int>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
} /* size: 0 */

// <00C1995D> ../public/animationsystem/compression.h:663
void CCompressedAnim<Quaternion>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
} /* size: 0 */

// <00C197A4> ../public/animationsystem/compression.h:663
void CCompressedAnim<Vector>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
} /* size: 0 */

// <00C195EB> ../public/animationsystem/compression.h:663
void CCompressedAnim<float>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, void* pDst, float s, const void* pSrc1, const void* pSrc2, int nResultBufSize, const char* pDebugName)
{
} /* size: 0 */

// <02592D66> ../public/animationsystem/compression.h:668
// variables: 5
inline void CCompressedAnim<float>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, float* pDst, float s, const float* pSrc1, const float* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 670
	const int* pMasterElement; // 671
	{
		uint16 k; // 672
		{
			uint16 n; // 674
			int j; // 675
		}
	}
} /* size: 0, variables: 2 */

// <00C1805B> ../public/animationsystem/compression.h:668
// variables: 5
void CCompressedAnim<float>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, float* pDst, float s, const float* pSrc1, const float* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 670
	const int* pMasterElement; // 671
	{
		uint16 k; // 672
		{
			uint16 n; // 674
			int j; // 675
		}
	}
} /* size: 0, variables: 2 */

// <02592E24> ../public/animationsystem/compression.h:680
// variables: 5
inline void CCompressedAnim<Vector>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, Vector* pDst, float s, const Vector* pSrc1, const Vector* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 682
	const int* pMasterElement; // 683
	{
		uint16 k; // 685
		{
			uint16 n; // 687
			int j; // 688
		}
	}
} /* size: 0, variables: 2 */

// <00C18118> ../public/animationsystem/compression.h:680
// variables: 5
void CCompressedAnim<Vector>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, Vector* pDst, float s, const Vector* pSrc1, const Vector* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 682
	const int* pMasterElement; // 683
	{
		uint16 k; // 685
		{
			uint16 n; // 687
			int j; // 688
		}
	}
} /* size: 0, variables: 2 */

// <02592EE2> ../public/animationsystem/compression.h:694
// variables: 11
inline void CCompressedAnim<Quaternion>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, Quaternion* pDst, float s, const Quaternion* pSrc1, const Quaternion* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 696
	const int* pMasterElement; // 697
	fltx4 f4S2; // 699
	fltx4 f4S1; // 699
	{
		uint16 k; // 700
		{
			uint16 n; // 702
			int j; // 703
			fltx4 src1; // 706
			fltx4 src2; // 707
			fltx4 src2aligned; // 708
			fltx4 dst; // 709
		}
	}
} /* size: 0, variables: 4 */

// <00C181D5> ../public/animationsystem/compression.h:694
// variables: 11
void CCompressedAnim<Quaternion>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, Quaternion* pDst, float s, const Quaternion* pSrc1, const Quaternion* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 696
	const int* pMasterElement; // 697
	fltx4 f4S2; // 699
	fltx4 f4S1; // 699
	{
		uint16 k; // 700
		{
			uint16 n; // 702
			int j; // 703
			fltx4 src1; // 706
			fltx4 src2; // 707
			fltx4 src2aligned; // 708
			fltx4 dst; // 709
		}
	}
} /* size: 0, variables: 4 */

// <0259329C> ../public/animationsystem/compression.h:716
// variables: 5
inline void CCompressedAnim<int>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, int* pDst, float s, const int* pSrc1, const int* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 718
	const int* pMasterElement; // 719
	{
		uint16 k; // 721
		{
			uint16 n; // 723
			int j; // 724
		}
	}
} /* size: 0, variables: 2 */

// <00C1835F> ../public/animationsystem/compression.h:716
// variables: 5
void CCompressedAnim<int>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, int* pDst, float s, const int* pSrc1, const int* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 718
	const int* pMasterElement; // 719
	{
		uint16 k; // 721
		{
			uint16 n; // 723
			int j; // 724
		}
	}
} /* size: 0, variables: 2 */

// <025933FE> ../public/animationsystem/compression.h:729
inline void CCompressedAnim<bool>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, bool* pDst, float s, const bool* pSrc1, const bool* pSrc2, int nResultBufSize, const char* pDebugName)
{
} /* size: 0 */

// <02593521> ../public/animationsystem/compression.h:742
// variables: 5
inline void CCompressedAnim<Color>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, Color* pDst, float s, const Color* pSrc1, const Color* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 744
	const int* pMasterElement; // 745
	{
		uint16 k; // 747
		{
			uint16 n; // 749
			int j; // 750
		}
	}
} /* size: 0, variables: 2 */

// <00C185BD> ../public/animationsystem/compression.h:742
// variables: 5
void CCompressedAnim<Color>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, Color* pDst, float s, const Color* pSrc1, const Color* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 744
	const int* pMasterElement; // 745
	{
		uint16 k; // 747
		{
			uint16 n; // 749
			int j; // 750
		}
	}
} /* size: 0, variables: 2 */

// <02593683> ../public/animationsystem/compression.h:758
// variables: 5
inline void CCompressedAnim<Vector2D>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, Vector2D* pDst, float s, const Vector2D* pSrc1, const Vector2D* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 760
	const int* pMasterElement; // 761
	{
		uint16 k; // 763
		{
			uint16 n; // 765
			int j; // 766
		}
	}
} /* size: 0, variables: 2 */

// <00C1871D> ../public/animationsystem/compression.h:758
// variables: 5
void CCompressedAnim<Vector2D>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, Vector2D* pDst, float s, const Vector2D* pSrc1, const Vector2D* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 760
	const int* pMasterElement; // 761
	{
		uint16 k; // 763
		{
			uint16 n; // 765
			int j; // 766
		}
	}
} /* size: 0, variables: 2 */

// <025937E5> ../public/animationsystem/compression.h:771
// variables: 5
inline void CCompressedAnim<Vector4D>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, Vector4D* pDst, float s, const Vector4D* pSrc1, const Vector4D* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 773
	const int* pMasterElement; // 774
	{
		uint16 k; // 776
		{
			uint16 n; // 778
			int j; // 779
		}
	}
} /* size: 0, variables: 2 */

// <00C1887D> ../public/animationsystem/compression.h:771
// variables: 5
void CCompressedAnim<Vector4D>::DeswizzleAndBlendContainer(const DecodeContainer_t* pContainer, const CAnimDecodeSwizzle* pSwizzle, Vector4D* pDst, float s, const Vector4D* pSrc1, const Vector4D* pSrc2, int nResultBufSize, const char* pDebugName)
{
	const uint16* pElements; // 773
	const int* pMasterElement; // 774
	{
		uint16 k; // 776
		{
			uint16 n; // 778
			int j; // 779
		}
	}
} /* size: 0, variables: 2 */

// <0259E63F> ../public/animationsystem/compression.h:784
void CCompressedAnim<Vector4D>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
} /* size: 7 */

// <0259CB4F> ../public/animationsystem/compression.h:784
void CCompressedAnim<Vector2D>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
} /* size: 7 */

// <0259B1C4> ../public/animationsystem/compression.h:784
void CCompressedAnim<Color>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
} /* size: 7 */

// <02599944> ../public/animationsystem/compression.h:784
void CCompressedAnim<bool>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
} /* size: 7 */

// <02596DB2> ../public/animationsystem/compression.h:784
void CCompressedAnim<int>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
} /* size: 7 */

// <02595645> ../public/animationsystem/compression.h:784
void CCompressedAnim<Quaternion>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
} /* size: 7 */

// <02595191> ../public/animationsystem/compression.h:784
void CCompressedAnim<Vector>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
} /* size: 7 */

// <02593E9C> ../public/animationsystem/compression.h:784
void CCompressedAnim<float>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
} /* size: 7 */

// <0259FD83> ../public/animationsystem/compression.h:789
void CCompressedAnim<Vector4D>::DecodeSize(const DecodeContainer_t* pContainer)
{
} /* size: 61 */

// <0259E2A6> ../public/animationsystem/compression.h:789
void CCompressedAnim<Vector2D>::DecodeSize(const DecodeContainer_t* pContainer)
{
} /* size: 61 */

// <0259C733> ../public/animationsystem/compression.h:789
void CCompressedAnim<Color>::DecodeSize(const DecodeContainer_t* pContainer)
{
} /* size: 61 */

// <0259AE12> ../public/animationsystem/compression.h:789
void CCompressedAnim<bool>::DecodeSize(const DecodeContainer_t* pContainer)
{
} /* size: 55 */

// <02599605> ../public/animationsystem/compression.h:789
void CCompressedAnim<int>::DecodeSize(const DecodeContainer_t* pContainer)
{
} /* size: 61 */

// <02596B67> ../public/animationsystem/compression.h:789
void CCompressedAnim<Quaternion>::DecodeSize(const DecodeContainer_t* pContainer)
{
} /* size: 61 */

// <025955FA> ../public/animationsystem/compression.h:789
void CCompressedAnim<Vector>::DecodeSize(const DecodeContainer_t* pContainer)
{
} /* size: 61 */

// <02595146> ../public/animationsystem/compression.h:789
void CCompressedAnim<float>::DecodeSize(const DecodeContainer_t* pContainer)
{
} /* size: 61 */

// <025BBB52> ../public/animationsystem/compression.h:794
inline void CCompressedAnim<Vector>::Cleanup()
{
} /* size: 0 */

// <025BB648> ../public/animationsystem/compression.h:794
inline void CCompressedAnim<Quaternion>::Cleanup()
{
} /* size: 0 */

// <02593741> ../public/animationsystem/compression.h:794
inline void CCompressedAnim<Vector4D>::Cleanup()
{
} /* size: 0 */

// <025935DF> ../public/animationsystem/compression.h:794
inline void CCompressedAnim<Vector2D>::Cleanup()
{
} /* size: 0 */

// <0259347D> ../public/animationsystem/compression.h:794
inline void CCompressedAnim<Color>::Cleanup()
{
} /* size: 0 */

// <0259335A> ../public/animationsystem/compression.h:794
inline void CCompressedAnim<bool>::Cleanup()
{
} /* size: 0 */

// <02592FEE> ../public/animationsystem/compression.h:794
inline void CCompressedAnim<int>::Cleanup()
{
} /* size: 0 */

// <02592CC2> ../public/animationsystem/compression.h:794
inline void CCompressedAnim<float>::Cleanup()
{
} /* size: 0 */

// <025DAB5B> ../public/animationsystem/compression.h:810
void CCompressedReference<float>::CCompressedReference()
{
} /* size: 0 */

// <025DAB3E> ../public/animationsystem/compression.h:810
inline void CCompressedReference<float>::CCompressedReference()
{
} /* size: 0 */

// <025DAB27> ../public/animationsystem/compression.h:810
void CCompressedReference<float>::~CCompressedReference()
{
} /* size: 0 */

// <025DAAF3> ../public/animationsystem/compression.h:810
inline void CCompressedReference<float>::~CCompressedReference()
{
} /* size: 0 */

// <025CE22B> ../public/animationsystem/compression.h:810
void CCompressedReference<int>::CCompressedReference()
{
} /* size: 0 */

// <025CE20E> ../public/animationsystem/compression.h:810
inline void CCompressedReference<int>::CCompressedReference()
{
} /* size: 0 */

// <025CE1F7> ../public/animationsystem/compression.h:810
void CCompressedReference<int>::~CCompressedReference()
{
} /* size: 0 */

// <025CE1C3> ../public/animationsystem/compression.h:810
inline void CCompressedReference<int>::~CCompressedReference()
{
} /* size: 0 */

// <025CB9BE> ../public/animationsystem/compression.h:810
void CCompressedReference<bool>::CCompressedReference()
{
} /* size: 0 */

// <025CB9A1> ../public/animationsystem/compression.h:810
inline void CCompressedReference<bool>::CCompressedReference()
{
} /* size: 0 */

// <025CB98A> ../public/animationsystem/compression.h:810
void CCompressedReference<bool>::~CCompressedReference()
{
} /* size: 0 */

// <025CB956> ../public/animationsystem/compression.h:810
inline void CCompressedReference<bool>::~CCompressedReference()
{
} /* size: 0 */

// <025CA5B2> ../public/animationsystem/compression.h:810
void CCompressedReference<Color>::CCompressedReference()
{
} /* size: 0 */

// <025CA595> ../public/animationsystem/compression.h:810
inline void CCompressedReference<Color>::CCompressedReference()
{
} /* size: 0 */

// <025CA57E> ../public/animationsystem/compression.h:810
void CCompressedReference<Color>::~CCompressedReference()
{
} /* size: 0 */

// <025CA54A> ../public/animationsystem/compression.h:810
inline void CCompressedReference<Color>::~CCompressedReference()
{
} /* size: 0 */

// <025C91A6> ../public/animationsystem/compression.h:810
void CCompressedReference<Vector2D>::CCompressedReference()
{
} /* size: 0 */

// <025C9189> ../public/animationsystem/compression.h:810
inline void CCompressedReference<Vector2D>::CCompressedReference()
{
} /* size: 0 */

// <025C9172> ../public/animationsystem/compression.h:810
void CCompressedReference<Vector2D>::~CCompressedReference()
{
} /* size: 0 */

// <025C913E> ../public/animationsystem/compression.h:810
inline void CCompressedReference<Vector2D>::~CCompressedReference()
{
} /* size: 0 */

// <025C7D9A> ../public/animationsystem/compression.h:810
void CCompressedReference<Vector4D>::CCompressedReference()
{
} /* size: 0 */

// <025C7D7D> ../public/animationsystem/compression.h:810
inline void CCompressedReference<Vector4D>::CCompressedReference()
{
} /* size: 0 */

// <025C7D66> ../public/animationsystem/compression.h:810
void CCompressedReference<Vector4D>::~CCompressedReference()
{
} /* size: 0 */

// <025C7D32> ../public/animationsystem/compression.h:810
inline void CCompressedReference<Vector4D>::~CCompressedReference()
{
} /* size: 0 */

// <00C0BD8F> ../public/animationsystem/compression.h:810
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 104
class CCompressedReference<Vector4D> : public CCompressedAnim<Vector4D> {
public:
	/* class CCompressedAnim<Vector4D> <ancestor>; */ /* 0 104 */
	void CCompressedReference(CCompressedReference<Vector4D>* , CCompressedReference<Vector4D>& );
	void CCompressedReference(CCompressedReference<Vector4D>* , const CCompressedReference<Vector4D>& );
	void CCompressedReference(CCompressedReference<Vector4D>* );
	/* ../public/animationsystem/compression.h:813 */
	virtual bool CanEncode(CCompressedReference<Vector4D>* , CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& , const Vector4D& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:823 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedReference<Vector4D>* );
	virtual void ~CCompressedReference(CCompressedReference<Vector4D>* );
	void CCompressedReference(class CCompressedReference<Vector4D> *, class CCompressedReference<Vector4D> &); /* linkage=_ZN20CCompressedReferenceI8Vector4DEC4EOS1_ */
	void CCompressedReference(class CCompressedReference<Vector4D> *, const class CCompressedReference<Vector4D>  &); /* linkage=_ZN20CCompressedReferenceI8Vector4DEC4ERKS1_ */
	void CCompressedReference(class CCompressedReference<Vector4D> *); /* linkage=_ZN20CCompressedReferenceI8Vector4DEC4Ev */
	virtual bool CanEncode(class CCompressedReference<Vector4D> *, class CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > &, const class Vector4D  &, enum AnimCompressEnable_t); /* linkage=_ZN20CCompressedReferenceI8Vector4DE9CanEncodeER10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedReference<Vector4D> *); /* linkage=_ZN20CCompressedReferenceI8Vector4DE15CreateContainerEv */
	virtual void ~CCompressedReference(class CCompressedReference<Vector4D> *); /* linkage=_ZN20CCompressedReferenceI8Vector4DED4Ev */
};

// <00C0C5C5> ../public/animationsystem/compression.h:810
// member functions: 6
// member variable: 1
// vtable entries: 2
// class size: 104
class CCompressedReference<Vector2D> : public CCompressedAnim<Vector2D> {
public:
	/* class CCompressedAnim<Vector2D> <ancestor>; */ /* 0 104 */
	void CCompressedReference(CCompressedReference<Vector2D>* , CCompressedReference<Vector2D>& );
	void CCompressedReference(CCompressedReference<Vector2D>* , const CCompressedReference<Vector2D>& );
	void CCompressedReference(CCompressedReference<Vector2D>* );
	/* ../public/animationsystem/compression.h:813 */
	virtual bool CanEncode(CCompressedReference<Vector2D>* , CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& , const Vector2D& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:823 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedReference<Vector2D>* );
	virtual void ~CCompressedReference(CCompressedReference<Vector2D>* );
};

// <00C0CDF5> ../public/animationsystem/compression.h:810
// member functions: 6
// member variable: 1
// vtable entries: 2
// class size: 104
class CCompressedReference<Color> : public CCompressedAnim<Color> {
public:
	/* class CCompressedAnim<Color> <ancestor>; */ /* 0 104 */
	void CCompressedReference(CCompressedReference<Color>* , CCompressedReference<Color>& );
	void CCompressedReference(CCompressedReference<Color>* , const CCompressedReference<Color>& );
	void CCompressedReference(CCompressedReference<Color>* );
	/* ../public/animationsystem/compression.h:813 */
	virtual bool CanEncode(CCompressedReference<Color>* , CUtlVector<Color, CUtlMemory<Color, int> >& , const Color& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:823 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedReference<Color>* );
	virtual void ~CCompressedReference(CCompressedReference<Color>* );
};

// <00C0D625> ../public/animationsystem/compression.h:810
// member functions: 6
// member variable: 1
// vtable entries: 2
// class size: 104
class CCompressedReference<bool> : public CCompressedAnim<bool> {
public:
	/* class CCompressedAnim<bool> <ancestor>; */ /* 0 104 */
	void CCompressedReference(CCompressedReference<bool>* , CCompressedReference<bool>& );
	void CCompressedReference(CCompressedReference<bool>* , const CCompressedReference<bool>& );
	void CCompressedReference(CCompressedReference<bool>* );
	/* ../public/animationsystem/compression.h:813 */
	virtual bool CanEncode(CCompressedReference<bool>* , CUtlVector<bool, CUtlMemory<bool, int> >& , const bool& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:823 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedReference<bool>* );
	virtual void ~CCompressedReference(CCompressedReference<bool>* );
};

// <00C0E6B9> ../public/animationsystem/compression.h:810
// member functions: 6
// member variable: 1
// vtable entries: 2
// class size: 104
class CCompressedReference<int> : public CCompressedAnim<int> {
public:
	/* class CCompressedAnim<int> <ancestor>; */ /* 0 104 */
	void CCompressedReference(CCompressedReference<int>* , CCompressedReference<int>& );
	void CCompressedReference(CCompressedReference<int>* , const CCompressedReference<int>& );
	void CCompressedReference(CCompressedReference<int>* );
	/* ../public/animationsystem/compression.h:813 */
	virtual bool CanEncode(CCompressedReference<int>* , CUtlVector<int, CUtlMemory<int, int> >& , const int& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:823 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedReference<int>* );
	virtual void ~CCompressedReference(CCompressedReference<int>* );
};

// <00C10257> ../public/animationsystem/compression.h:810
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 104
class CCompressedReference<float> : public CCompressedAnim<float> {
public:
	/* class CCompressedAnim<float> <ancestor>; */ /* 0 104 */
	void CCompressedReference(CCompressedReference<float>* , CCompressedReference<float>& );
	void CCompressedReference(CCompressedReference<float>* , const CCompressedReference<float>& );
	void CCompressedReference(CCompressedReference<float>* );
	/* ../public/animationsystem/compression.h:813 */
	virtual bool CanEncode(CCompressedReference<float>* , CUtlVector<float, CUtlMemory<float, int> >& , const float& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:823 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedReference<float>* );
	virtual void ~CCompressedReference(CCompressedReference<float>* );
	void CCompressedReference(class CCompressedReference<float> *, class CCompressedReference<float> &); /* linkage=_ZN20CCompressedReferenceIfEC4EOS0_ */
	void CCompressedReference(class CCompressedReference<float> *, const class CCompressedReference<float>  &); /* linkage=_ZN20CCompressedReferenceIfEC4ERKS0_ */
	void CCompressedReference(class CCompressedReference<float> *); /* linkage=_ZN20CCompressedReferenceIfEC4Ev */
	virtual bool CanEncode(class CCompressedReference<float> *, class CUtlVector<float, CUtlMemory<float, int> > &, const float  &, enum AnimCompressEnable_t); /* linkage=_ZN20CCompressedReferenceIfE9CanEncodeER10CUtlVectorIf10CUtlMemoryIfiEERKf20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedReference<float> *); /* linkage=_ZN20CCompressedReferenceIfE15CreateContainerEv */
	virtual void ~CCompressedReference(class CCompressedReference<float> *); /* linkage=_ZN20CCompressedReferenceIfED4Ev */
};

// <0259E4EC> ../public/animationsystem/compression.h:813
// variable: 1
// function calls: 4
void CCompressedReference<Vector4D>::CanEncode(CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& values, const Vector4D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 815
		CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::Count(); // 815
		Vector4D::operator!=(
				const Vector4D& src);  // 817
		CUtlMemory<Vector4D, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::operator[](
				int i);  // 817
	}
} /* size: 102 */

// <0259C9FC> ../public/animationsystem/compression.h:813
// variable: 1
// function calls: 4
void CCompressedReference<Vector2D>::CanEncode(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& values, const Vector2D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 815
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 815
		Vector2D::operator!=(
				const Vector2D& src);  // 817
		CUtlMemory<Vector2D, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::operator[](
				int i);  // 817
	}
} /* size: 67 */

// <0259B02C> ../public/animationsystem/compression.h:813
// variable: 1
// function calls: 5
void CCompressedReference<Color>::CanEncode(CUtlVector<Color, CUtlMemory<Color, int> >& values, const Color& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 815
		CUtlVectorBase<Color, CUtlMemory<Color, int> >::Count(); // 815
		Color::operator==(
				const Color& rhs);  // 142
		Color::operator!=(
				const Color& rhs);  // 817
		CUtlMemory<Color, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Color, CUtlMemory<Color, int> >::operator[](
				int i);  // 817
	}
} /* size: 54 */

// <0259981F> ../public/animationsystem/compression.h:813
// variable: 1
// function calls: 3
void CCompressedReference<bool>::CanEncode(CUtlVector<bool, CUtlMemory<bool, int> >& values, const bool& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 815
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::Count(); // 815
		CUtlMemory<bool, int>::operator[](
				int i);  // 588
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
				int i);  // 817
	}
} /* size: 54 */

// <02596C81> ../public/animationsystem/compression.h:813
// variable: 1
// function calls: 3
void CCompressedReference<int>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& values, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 815
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 815
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 817
	}
} /* size: 54 */

// <02593D7D> ../public/animationsystem/compression.h:813
// variable: 1
// function calls: 3
void CCompressedReference<float>::CanEncode(CUtlVector<float, CUtlMemory<float, int> >& values, const float& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 815
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 815
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 817
	}
} /* size: 62 */

// <00C1AE5F> ../public/animationsystem/compression.h:813
// variable: 1
void CCompressedReference<Vector4D>::CanEncode(CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& values, const Vector4D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 815
	}
} /* size: 0 */

// <00C1AA1D> ../public/animationsystem/compression.h:813
// variable: 1
void CCompressedReference<Vector2D>::CanEncode(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& values, const Vector2D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 815
	}
} /* size: 0 */

// <00C1A5DB> ../public/animationsystem/compression.h:813
// variable: 1
void CCompressedReference<Color>::CanEncode(CUtlVector<Color, CUtlMemory<Color, int> >& values, const Color& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 815
	}
} /* size: 0 */

// <00C1A199> ../public/animationsystem/compression.h:813
// variable: 1
void CCompressedReference<bool>::CanEncode(CUtlVector<bool, CUtlMemory<bool, int> >& values, const bool& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 815
	}
} /* size: 0 */

// <00C19A18> ../public/animationsystem/compression.h:813
// variable: 1
void CCompressedReference<int>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& values, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 815
	}
} /* size: 0 */

// <00C1934A> ../public/animationsystem/compression.h:813
// variable: 1
void CCompressedReference<float>::CanEncode(CUtlVector<float, CUtlMemory<float, int> >& values, const float& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 815
	}
} /* size: 0 */

// <0259E41D> ../public/animationsystem/compression.h:823
// function calls: 3
void CCompressedReference<Vector4D>::CreateContainer()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::RemoveAll(); // 797
	CCompressedAnim<Vector4D>::Cleanup(); // 825
} /* size: 35, inline expansions: 3 (37 bytes) */

// <0259C92D> ../public/animationsystem/compression.h:823
// function calls: 3
void CCompressedReference<Vector2D>::CreateContainer()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 797
	CCompressedAnim<Vector2D>::Cleanup(); // 825
} /* size: 35, inline expansions: 3 (37 bytes) */

// <0259AF5D> ../public/animationsystem/compression.h:823
// function calls: 3
void CCompressedReference<Color>::CreateContainer()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::RemoveAll(); // 797
	CCompressedAnim<Color>::Cleanup(); // 825
} /* size: 35, inline expansions: 3 (37 bytes) */

// <02599750> ../public/animationsystem/compression.h:823
// function calls: 3
void CCompressedReference<bool>::CreateContainer()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 797
	CCompressedAnim<bool>::Cleanup(); // 825
} /* size: 35, inline expansions: 3 (37 bytes) */

// <02596BB2> ../public/animationsystem/compression.h:823
// function calls: 3
void CCompressedReference<int>::CreateContainer()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 797
	CCompressedAnim<int>::Cleanup(); // 825
} /* size: 35, inline expansions: 3 (37 bytes) */

// <02593CAE> ../public/animationsystem/compression.h:823
// function calls: 3
void CCompressedReference<float>::CreateContainer()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 797
	CCompressedAnim<float>::Cleanup(); // 825
} /* size: 35, inline expansions: 3 (37 bytes) */

// <00C1AE47> ../public/animationsystem/compression.h:823
void CCompressedReference<Vector4D>::CreateContainer()
{
} /* size: 0 */

// <00C1AA05> ../public/animationsystem/compression.h:823
void CCompressedReference<Vector2D>::CreateContainer()
{
} /* size: 0 */

// <00C1A5C3> ../public/animationsystem/compression.h:823
void CCompressedReference<Color>::CreateContainer()
{
} /* size: 0 */

// <00C1A181> ../public/animationsystem/compression.h:823
void CCompressedReference<bool>::CreateContainer()
{
} /* size: 0 */

// <00C19A00> ../public/animationsystem/compression.h:823
void CCompressedReference<int>::CreateContainer()
{
} /* size: 0 */

// <00C19332> ../public/animationsystem/compression.h:823
void CCompressedReference<float>::CreateContainer()
{
} /* size: 0 */

// <025DA616> ../public/animationsystem/compression.h:834
void CCompressedStatic<float, float>::CCompressedStatic()
{
} /* size: 0 */

// <025DA5F9> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<float, float>::CCompressedStatic()
{
} /* size: 0 */

// <025DA5E2> ../public/animationsystem/compression.h:834
void CCompressedStatic<float, float>::~CCompressedStatic()
{
} /* size: 0 */

// <025DA5AE> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<float, float>::~CCompressedStatic()
{
} /* size: 0 */

// <025CDCE6> ../public/animationsystem/compression.h:834
void CCompressedStatic<int, int>::CCompressedStatic()
{
} /* size: 0 */

// <025CDCC9> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<int, int>::CCompressedStatic()
{
} /* size: 0 */

// <025CDCB2> ../public/animationsystem/compression.h:834
void CCompressedStatic<int, int>::~CCompressedStatic()
{
} /* size: 0 */

// <025CDC7E> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<int, int>::~CCompressedStatic()
{
} /* size: 0 */

// <025CD7A1> ../public/animationsystem/compression.h:834
void CCompressedStatic<int, char>::CCompressedStatic()
{
} /* size: 0 */

// <025CD784> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<int, char>::CCompressedStatic()
{
} /* size: 0 */

// <025CD76D> ../public/animationsystem/compression.h:834
void CCompressedStatic<int, char>::~CCompressedStatic()
{
} /* size: 0 */

// <025CD739> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<int, char>::~CCompressedStatic()
{
} /* size: 0 */

// <025CB479> ../public/animationsystem/compression.h:834
void CCompressedStatic<bool, bool>::CCompressedStatic()
{
} /* size: 0 */

// <025CB45C> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<bool, bool>::CCompressedStatic()
{
} /* size: 0 */

// <025CB445> ../public/animationsystem/compression.h:834
void CCompressedStatic<bool, bool>::~CCompressedStatic()
{
} /* size: 0 */

// <025CB411> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<bool, bool>::~CCompressedStatic()
{
} /* size: 0 */

// <025CA06D> ../public/animationsystem/compression.h:834
void CCompressedStatic<Color, Color>::CCompressedStatic()
{
} /* size: 0 */

// <025CA050> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<Color, Color>::CCompressedStatic()
{
} /* size: 0 */

// <025CA039> ../public/animationsystem/compression.h:834
void CCompressedStatic<Color, Color>::~CCompressedStatic()
{
} /* size: 0 */

// <025CA005> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<Color, Color>::~CCompressedStatic()
{
} /* size: 0 */

// <025C8C61> ../public/animationsystem/compression.h:834
void CCompressedStatic<Vector2D, Vector2D>::CCompressedStatic()
{
} /* size: 0 */

// <025C8C44> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<Vector2D, Vector2D>::CCompressedStatic()
{
} /* size: 0 */

// <025C8C2D> ../public/animationsystem/compression.h:834
void CCompressedStatic<Vector2D, Vector2D>::~CCompressedStatic()
{
} /* size: 0 */

// <025C8BF9> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<Vector2D, Vector2D>::~CCompressedStatic()
{
} /* size: 0 */

// <025C7855> ../public/animationsystem/compression.h:834
void CCompressedStatic<Vector4D, Vector4D>::CCompressedStatic()
{
} /* size: 0 */

// <025C7838> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<Vector4D, Vector4D>::CCompressedStatic()
{
} /* size: 0 */

// <025C7821> ../public/animationsystem/compression.h:834
void CCompressedStatic<Vector4D, Vector4D>::~CCompressedStatic()
{
} /* size: 0 */

// <025C77ED> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<Vector4D, Vector4D>::~CCompressedStatic()
{
} /* size: 0 */

// <025C6E55> ../public/animationsystem/compression.h:834
void CCompressedStatic<int, short int>::CCompressedStatic()
{
} /* size: 0 */

// <025C6E38> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<int, short int>::CCompressedStatic()
{
} /* size: 0 */

// <025C6E21> ../public/animationsystem/compression.h:834
void CCompressedStatic<int, short int>::~CCompressedStatic()
{
} /* size: 0 */

// <025C6DED> ../public/animationsystem/compression.h:834
inline void CCompressedStatic<int, short int>::~CCompressedStatic()
{
} /* size: 0 */

// <00C0BAC3> ../public/animationsystem/compression.h:834
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedStatic<Vector4D, Vector4D> : public CCompressedAnim<Vector4D> {
public:
	/* class CCompressedAnim<Vector4D> <ancestor>; */ /* 0 104 */
	void CCompressedStatic(CCompressedStatic<Vector4D, Vector4D>* , CCompressedStatic<Vector4D, Vector4D>& );
	void CCompressedStatic(CCompressedStatic<Vector4D, Vector4D>* , const CCompressedStatic<Vector4D, Vector4D>& );
	void CCompressedStatic(CCompressedStatic<Vector4D, Vector4D>* );
	/* ../public/animationsystem/compression.h:837 */
	virtual bool CanEncode(CCompressedStatic<Vector4D, Vector4D>* , CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& , const Vector4D& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:847 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedStatic<Vector4D, Vector4D>* );
	/* ../public/animationsystem/compression.h:867 */
	virtual bool DecodeFrame(const CCompressedStatic<Vector4D, Vector4D>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedStatic(CCompressedStatic<Vector4D, Vector4D>* );
	void CCompressedStatic(class CCompressedStatic<Vector4D, Vector4D> *, class CCompressedStatic<Vector4D, Vector4D> &); /* linkage=_ZN17CCompressedStaticI8Vector4DS0_EC4EOS1_ */
	void CCompressedStatic(class CCompressedStatic<Vector4D, Vector4D> *, const class CCompressedStatic<Vector4D, Vector4D>  &); /* linkage=_ZN17CCompressedStaticI8Vector4DS0_EC4ERKS1_ */
	void CCompressedStatic(class CCompressedStatic<Vector4D, Vector4D> *); /* linkage=_ZN17CCompressedStaticI8Vector4DS0_EC4Ev */
	virtual bool CanEncode(class CCompressedStatic<Vector4D, Vector4D> *, class CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > &, const class Vector4D  &, enum AnimCompressEnable_t); /* linkage=_ZN17CCompressedStaticI8Vector4DS0_E9CanEncodeER10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedStatic<Vector4D, Vector4D> *); /* linkage=_ZN17CCompressedStaticI8Vector4DS0_E15CreateContainerEv */
	virtual bool DecodeFrame(const class CCompressedStatic<Vector4D, Vector4D>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK17CCompressedStaticI8Vector4DS0_E11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual void ~CCompressedStatic(class CCompressedStatic<Vector4D, Vector4D> *); /* linkage=_ZN17CCompressedStaticI8Vector4DS0_ED4Ev */
};

// <00C0C2F9> ../public/animationsystem/compression.h:834
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedStatic<Vector2D, Vector2D> : public CCompressedAnim<Vector2D> {
public:
	/* class CCompressedAnim<Vector2D> <ancestor>; */ /* 0 104 */
	void CCompressedStatic(CCompressedStatic<Vector2D, Vector2D>* , CCompressedStatic<Vector2D, Vector2D>& );
	void CCompressedStatic(CCompressedStatic<Vector2D, Vector2D>* , const CCompressedStatic<Vector2D, Vector2D>& );
	void CCompressedStatic(CCompressedStatic<Vector2D, Vector2D>* );
	/* ../public/animationsystem/compression.h:837 */
	virtual bool CanEncode(CCompressedStatic<Vector2D, Vector2D>* , CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& , const Vector2D& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:847 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedStatic<Vector2D, Vector2D>* );
	/* ../public/animationsystem/compression.h:867 */
	virtual bool DecodeFrame(const CCompressedStatic<Vector2D, Vector2D>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedStatic(CCompressedStatic<Vector2D, Vector2D>* );
};

// <00C0CB29> ../public/animationsystem/compression.h:834
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedStatic<Color, Color> : public CCompressedAnim<Color> {
public:
	/* class CCompressedAnim<Color> <ancestor>; */ /* 0 104 */
	void CCompressedStatic(CCompressedStatic<Color, Color>* , CCompressedStatic<Color, Color>& );
	void CCompressedStatic(CCompressedStatic<Color, Color>* , const CCompressedStatic<Color, Color>& );
	void CCompressedStatic(CCompressedStatic<Color, Color>* );
	/* ../public/animationsystem/compression.h:837 */
	virtual bool CanEncode(CCompressedStatic<Color, Color>* , CUtlVector<Color, CUtlMemory<Color, int> >& , const Color& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:847 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedStatic<Color, Color>* );
	/* ../public/animationsystem/compression.h:867 */
	virtual bool DecodeFrame(const CCompressedStatic<Color, Color>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedStatic(CCompressedStatic<Color, Color>* );
};

// <00C0D359> ../public/animationsystem/compression.h:834
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedStatic<bool, bool> : public CCompressedAnim<bool> {
public:
	/* class CCompressedAnim<bool> <ancestor>; */ /* 0 104 */
	void CCompressedStatic(CCompressedStatic<bool, bool>* , CCompressedStatic<bool, bool>& );
	void CCompressedStatic(CCompressedStatic<bool, bool>* , const CCompressedStatic<bool, bool>& );
	void CCompressedStatic(CCompressedStatic<bool, bool>* );
	/* ../public/animationsystem/compression.h:837 */
	virtual bool CanEncode(CCompressedStatic<bool, bool>* , CUtlVector<bool, CUtlMemory<bool, int> >& , const bool& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:847 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedStatic<bool, bool>* );
	/* ../public/animationsystem/compression.h:867 */
	virtual bool DecodeFrame(const CCompressedStatic<bool, bool>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedStatic(CCompressedStatic<bool, bool>* );
};

// <00C0E121> ../public/animationsystem/compression.h:834
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedStatic<int, char> : public CCompressedAnim<int> {
public:
	/* class CCompressedAnim<int> <ancestor>; */ /* 0 104 */
	void CCompressedStatic(CCompressedStatic<int, char>* , CCompressedStatic<int, char>& );
	void CCompressedStatic(CCompressedStatic<int, char>* , const CCompressedStatic<int, char>& );
	void CCompressedStatic(CCompressedStatic<int, char>* );
	/* ../public/animationsystem/compression.h:837 */
	virtual bool CanEncode(CCompressedStatic<int, char>* , CUtlVector<int, CUtlMemory<int, int> >& , const int& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:847 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedStatic<int, char>* );
	/* ../public/animationsystem/compression.h:867 */
	virtual bool DecodeFrame(const CCompressedStatic<int, char>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedStatic(CCompressedStatic<int, char>* );
};

// <00C0E3ED> ../public/animationsystem/compression.h:834
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedStatic<int, int> : public CCompressedAnim<int> {
public:
	/* class CCompressedAnim<int> <ancestor>; */ /* 0 104 */
	void CCompressedStatic(CCompressedStatic<int, int>* , CCompressedStatic<int, int>& );
	void CCompressedStatic(CCompressedStatic<int, int>* , const CCompressedStatic<int, int>& );
	void CCompressedStatic(CCompressedStatic<int, int>* );
	/* ../public/animationsystem/compression.h:837 */
	virtual bool CanEncode(CCompressedStatic<int, int>* , CUtlVector<int, CUtlMemory<int, int> >& , const int& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:847 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedStatic<int, int>* );
	/* ../public/animationsystem/compression.h:867 */
	virtual bool DecodeFrame(const CCompressedStatic<int, int>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedStatic(CCompressedStatic<int, int>* );
};

// <00C0FFAD> ../public/animationsystem/compression.h:834
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedStatic<float, float> : public CCompressedAnim<float> {
public:
	/* class CCompressedAnim<float> <ancestor>; */ /* 0 104 */
	void CCompressedStatic(CCompressedStatic<float, float>* , CCompressedStatic<float, float>& );
	void CCompressedStatic(CCompressedStatic<float, float>* , const CCompressedStatic<float, float>& );
	void CCompressedStatic(CCompressedStatic<float, float>* );
	/* ../public/animationsystem/compression.h:837 */
	virtual bool CanEncode(CCompressedStatic<float, float>* , CUtlVector<float, CUtlMemory<float, int> >& , const float& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:847 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedStatic<float, float>* );
	/* ../public/animationsystem/compression.h:889 */
	virtual bool DecodeFrame(const CCompressedStatic<float, float>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedStatic(CCompressedStatic<float, float>* );
};

// <0258F54C> ../public/animationsystem/compression.h:834
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedStatic<int, short int> : public CCompressedAnim<int> {
public:
	/* class CCompressedAnim<int> <ancestor>; */ /* 0 104 */
	void CCompressedStatic(CCompressedStatic<int, short int>* , CCompressedStatic<int, short int>& );
	void CCompressedStatic(CCompressedStatic<int, short int>* , const CCompressedStatic<int, short int>& );
	void CCompressedStatic(CCompressedStatic<int, short int>* );
	/* ../public/animationsystem/compression.h:837 */
	virtual bool CanEncode(CCompressedStatic<int, short int>* , CUtlVector<int, CUtlMemory<int, int> >& , const int& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:847 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedStatic<int, short int>* );
	/* ../public/animationsystem/compression.h:867 */
	virtual bool DecodeFrame(const CCompressedStatic<int, short int>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedStatic(CCompressedStatic<int, short int>* );
};

// <0259EC7E> ../public/animationsystem/compression.h:837
// variable: 1
// function calls: 5
void CCompressedStatic<Vector4D, Vector4D>::CanEncode(CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& values, const Vector4D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
		CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::Count(); // 839
		CUtlMemory<Vector4D, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::operator[](
				int i);  // 841
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 841
		Vector4D::operator!=(
				const Vector4D& src);  // 841
	}
} /* size: 102 */

// <0259D196> ../public/animationsystem/compression.h:837
// variable: 1
// function calls: 5
void CCompressedStatic<Vector2D, Vector2D>::CanEncode(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& values, const Vector2D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 839
		CUtlMemory<Vector2D, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::operator[](
				int i);  // 841
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 841
		Vector2D::operator!=(
				const Vector2D& src);  // 841
	}
} /* size: 67 */

// <0259B832> ../public/animationsystem/compression.h:837
// variable: 1
// function calls: 5
void CCompressedStatic<Color, Color>::CanEncode(CUtlVector<Color, CUtlMemory<Color, int> >& values, const Color& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
		CUtlVectorBase<Color, CUtlMemory<Color, int> >::Count(); // 839
		CUtlMemory<Color, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Color, CUtlMemory<Color, int> >::operator[](
				int i);  // 841
		Color::operator==(
				const Color& rhs);  // 142
		Color::operator!=(
				const Color& rhs);  // 841
	}
} /* size: 54 */

// <02599F36> ../public/animationsystem/compression.h:837
// variable: 1
// function calls: 3
void CCompressedStatic<bool, bool>::CanEncode(CUtlVector<bool, CUtlMemory<bool, int> >& values, const bool& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::Count(); // 839
		CUtlMemory<bool, int>::operator[](
				int i);  // 588
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
				int i);  // 841
	}
} /* size: 54 */

// <02597CF5> ../public/animationsystem/compression.h:837
// variable: 1
// function calls: 3
void CCompressedStatic<int, short int>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& values, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 839
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 841
	}
} /* size: 54 */

// <0259774E> ../public/animationsystem/compression.h:837
// variable: 1
// function calls: 3
void CCompressedStatic<int, char>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& values, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 839
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 841
	}
} /* size: 54 */

// <025971A7> ../public/animationsystem/compression.h:837
// variable: 1
// function calls: 3
void CCompressedStatic<int, int>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& values, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 839
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 841
	}
} /* size: 54 */

// <02594493> ../public/animationsystem/compression.h:837
// variable: 1
// function calls: 3
void CCompressedStatic<float, float>::CanEncode(CUtlVector<float, CUtlMemory<float, int> >& values, const float& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 839
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 841
	}
} /* size: 62 */

// <00C1AF36> ../public/animationsystem/compression.h:837
// variable: 1
void CCompressedStatic<Vector4D, Vector4D>::CanEncode(CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& values, const Vector4D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
	}
} /* size: 0 */

// <00C1AAF4> ../public/animationsystem/compression.h:837
// variable: 1
void CCompressedStatic<Vector2D, Vector2D>::CanEncode(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& values, const Vector2D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
	}
} /* size: 0 */

// <00C1A6B2> ../public/animationsystem/compression.h:837
// variable: 1
void CCompressedStatic<Color, Color>::CanEncode(CUtlVector<Color, CUtlMemory<Color, int> >& values, const Color& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
	}
} /* size: 0 */

// <00C1A270> ../public/animationsystem/compression.h:837
// variable: 1
void CCompressedStatic<bool, bool>::CanEncode(CUtlVector<bool, CUtlMemory<bool, int> >& values, const bool& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
	}
} /* size: 0 */

// <00C19BFA> ../public/animationsystem/compression.h:837
// variable: 1
void CCompressedStatic<int, char>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& values, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
	}
} /* size: 0 */

// <00C19AEF> ../public/animationsystem/compression.h:837
// variable: 1
void CCompressedStatic<int, int>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& values, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
	}
} /* size: 0 */

// <00C19421> ../public/animationsystem/compression.h:837
// variable: 1
void CCompressedStatic<float, float>::CanEncode(CUtlVector<float, CUtlMemory<float, int> >& values, const float& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 839
	}
} /* size: 0 */

// <0259E69A> ../public/animationsystem/compression.h:847
// variables: 5
// function calls: 23
void CCompressedStatic<Vector4D, Vector4D>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 857
		CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this,
				int i);  // 859
		CUtlMemory<Vector4D, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::operator[](
				int i);  // 859
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 859
		Vector4D::operator=(
				const Vector4D& vOther);  // 859
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 849
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 852
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<Vector4D>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CCompressedAnim<Vector4D>::SetupContainer(
			CUtlBinaryBlock* pDestBlock,
			int nDataSize);  // 853
	DecodeContainer_t::pData(); // 856
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::RemoveAll(); // 797
	CCompressedAnim<Vector4D>::Cleanup(); // 863
} /* size: 335, variables: 3, inline expansions: 13 (213 bytes) */

// <0259CBAA> ../public/animationsystem/compression.h:847
// variables: 5
// function calls: 23
void CCompressedStatic<Vector2D, Vector2D>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 857
		CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this,
				int i);  // 859
		CUtlMemory<Vector2D, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::operator[](
				int i);  // 859
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 859
		Vector2D::operator=(
				const Vector2D& vOther);  // 859
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 849
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 852
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<Vector2D>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CCompressedAnim<Vector2D>::SetupContainer(
			CUtlBinaryBlock* pDestBlock,
			int nDataSize);  // 853
	DecodeContainer_t::pData(); // 856
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 797
	CCompressedAnim<Vector2D>::Cleanup(); // 863
} /* size: 290, variables: 3, inline expansions: 13 (211 bytes) */

// <0259B21F> ../public/animationsystem/compression.h:847
// variables: 5
// function calls: 23
void CCompressedStatic<Color, Color>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 857
		CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this,
				int i);  // 859
		CUtlMemory<Color, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Color, CUtlMemory<Color, int> >::operator[](
				int i);  // 859
		Color::SetRawColor(
				int32 Color);  // 147
		Color::operator=(
				const Color& rhs);  // 859
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 849
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 852
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<Color>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CCompressedAnim<Color>::SetupContainer(
			CUtlBinaryBlock* pDestBlock,
			int nDataSize);  // 853
	DecodeContainer_t::pData(); // 856
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::RemoveAll(); // 797
	CCompressedAnim<Color>::Cleanup(); // 863
} /* size: 288, variables: 3, inline expansions: 13 (211 bytes) */

// <0259999F> ../public/animationsystem/compression.h:847
// variables: 5
// function calls: 21
void CCompressedStatic<bool, bool>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 857
		CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>  this,
				int i);  // 859
		CUtlMemory<bool, int>::operator[](
				int i);  // 588
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
				int i);  // 859
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 849
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<bool>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CCompressedAnim<bool>::SetupContainer(
			CUtlBinaryBlock* pDestBlock,
			int nDataSize);  // 853
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 852
	DecodeContainer_t::pData(); // 856
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 797
	CCompressedAnim<bool>::Cleanup(); // 863
} /* size: 289, variables: 3, inline expansions: 13 (222 bytes) */

// <0259795B> ../public/animationsystem/compression.h:847
// variables: 4
// function calls: 13
void CCompressedStatic<int, short int>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 857
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
				int i);  // 859
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 859
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 849
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 852
	DecodeContainer_t::pData(); // 856
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 797
	CCompressedAnim<int>::Cleanup(); // 863
} /* size: 195, variables: 3, inline expansions: 8 (104 bytes) */

// <025973B4> ../public/animationsystem/compression.h:847
// variables: 4
// function calls: 13
void CCompressedStatic<int, char>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 857
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
				int i);  // 859
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 859
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 849
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 852
	DecodeContainer_t::pData(); // 856
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 797
	CCompressedAnim<int>::Cleanup(); // 863
} /* size: 192, variables: 3, inline expansions: 8 (106 bytes) */

// <02596E0D> ../public/animationsystem/compression.h:847
// variables: 4
// function calls: 13
void CCompressedStatic<int, int>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 857
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
				int i);  // 859
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 859
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 849
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 852
	DecodeContainer_t::pData(); // 856
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 797
	CCompressedAnim<int>::Cleanup(); // 863
} /* size: 194, variables: 3, inline expansions: 8 (101 bytes) */

// <02593EF7> ../public/animationsystem/compression.h:847
// variables: 5
// function calls: 21
void CCompressedStatic<float, float>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 857
		CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
				int i);  // 859
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 859
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 849
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 852
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<float>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CCompressedAnim<float>::SetupContainer(
			CUtlBinaryBlock* pDestBlock,
			int nDataSize);  // 853
	DecodeContainer_t::pData(); // 856
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 797
	CCompressedAnim<float>::Cleanup(); // 863
} /* size: 324, variables: 3, inline expansions: 13 (244 bytes) */

// <00C1AEEA> ../public/animationsystem/compression.h:847
// variables: 4
void CCompressedStatic<Vector4D, Vector4D>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
	}
} /* size: 0, variables: 3 */

// <00C1AAA8> ../public/animationsystem/compression.h:847
// variables: 4
void CCompressedStatic<Vector2D, Vector2D>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
	}
} /* size: 0, variables: 3 */

// <00C1A666> ../public/animationsystem/compression.h:847
// variables: 4
void CCompressedStatic<Color, Color>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
	}
} /* size: 0, variables: 3 */

// <00C1A224> ../public/animationsystem/compression.h:847
// variables: 4
void CCompressedStatic<bool, bool>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
	}
} /* size: 0, variables: 3 */

// <00C19BAE> ../public/animationsystem/compression.h:847
// variables: 4
void CCompressedStatic<int, char>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
	}
} /* size: 0, variables: 3 */

// <00C19AA3> ../public/animationsystem/compression.h:847
// variables: 4
void CCompressedStatic<int, int>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
	}
} /* size: 0, variables: 3 */

// <00C193D5> ../public/animationsystem/compression.h:847
// variables: 4
void CCompressedStatic<float, float>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 852
	DecodeContainer_t* pContainer; // 853
	byte* pData; // 856
	{
		int i; // 857
	}
} /* size: 0, variables: 3 */

// <0259EDED> ../public/animationsystem/compression.h:867
// variables: 4
// function calls: 2
void CCompressedStatic<Vector4D, Vector4D>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector4D* pValues; // 869
	int nCount; // 870
	const Vector4D* pFrameData; // 872
	{
		int i; // 874
		Vector4D::operator=(
				const Vector4D& vOther);  // 876
	}
	DecodeContainer_t::pData(); // 872
} /* size: 122, variables: 3, inline expansions: 1 (51 bytes) */

// <0259D305> ../public/animationsystem/compression.h:867
// variables: 4
// function calls: 2
void CCompressedStatic<Vector2D, Vector2D>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector2D* pValues; // 869
	int nCount; // 870
	const Vector2D* pFrameData; // 872
	{
		int i; // 874
		Vector2D::operator=(
				const Vector2D& vOther);  // 876
	}
	DecodeContainer_t::pData(); // 872
} /* size: 70, variables: 3, inline expansions: 1 (19 bytes) */

// <0259B9BA> ../public/animationsystem/compression.h:867
// variables: 4
// function calls: 4
void CCompressedStatic<Color, Color>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Color* pValues; // 869
	int nCount; // 870
	const Color* pFrameData; // 872
	{
		int i; // 874
		Color::GetRawColor(); // 147
		Color::SetRawColor(
				int32 Color);  // 147
		Color::operator=(
				const Color& rhs);  // 876
	}
	DecodeContainer_t::pData(); // 872
} /* size: 52, variables: 3, inline expansions: 1 (14 bytes) */

// <0259A04F> ../public/animationsystem/compression.h:867
// variables: 4
// function call: 1
void CCompressedStatic<bool, bool>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	bool* pValues; // 869
	int nCount; // 870
	const bool* pFrameData; // 872
	{
		int i; // 874
	}
	DecodeContainer_t::pData(); // 872
} /* size: 53, variables: 3, inline expansions: 1 (14 bytes) */

// <02597E0E> ../public/animationsystem/compression.h:867
// variables: 4
// function call: 1
void CCompressedStatic<int, short int>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	int* pValues; // 869
	int nCount; // 870
	const short int* pFrameData; // 872
	{
		int i; // 874
	}
	DecodeContainer_t::pData(); // 872
} /* size: 53, variables: 3, inline expansions: 1 (14 bytes) */

// <02597867> ../public/animationsystem/compression.h:867
// variables: 4
// function call: 1
void CCompressedStatic<int, char>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	int* pValues; // 869
	int nCount; // 870
	const char* pFrameData; // 872
	{
		int i; // 874
	}
	DecodeContainer_t::pData(); // 872
} /* size: 53, variables: 3, inline expansions: 1 (14 bytes) */

// <025972C0> ../public/animationsystem/compression.h:867
// variables: 4
// function call: 1
void CCompressedStatic<int, int>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	int* pValues; // 869
	int nCount; // 870
	const int* pFrameData; // 872
	{
		int i; // 874
	}
	DecodeContainer_t::pData(); // 872
} /* size: 52, variables: 3, inline expansions: 1 (14 bytes) */

// <00C1AF82> ../public/animationsystem/compression.h:867
// variables: 4
void CCompressedStatic<Vector4D, Vector4D>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector4D* pValues; // 869
	int nCount; // 870
	const Vector4D* pFrameData; // 872
	{
		int i; // 874
	}
} /* size: 0, variables: 3 */

// <00C1AB40> ../public/animationsystem/compression.h:867
// variables: 4
void CCompressedStatic<Vector2D, Vector2D>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector2D* pValues; // 869
	int nCount; // 870
	const Vector2D* pFrameData; // 872
	{
		int i; // 874
	}
} /* size: 0, variables: 3 */

// <00C1A6FE> ../public/animationsystem/compression.h:867
// variables: 4
void CCompressedStatic<Color, Color>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Color* pValues; // 869
	int nCount; // 870
	const Color* pFrameData; // 872
	{
		int i; // 874
	}
} /* size: 0, variables: 3 */

// <00C1A2BC> ../public/animationsystem/compression.h:867
// variables: 4
void CCompressedStatic<bool, bool>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	bool* pValues; // 869
	int nCount; // 870
	const bool* pFrameData; // 872
	{
		int i; // 874
	}
} /* size: 0, variables: 3 */

// <00C19C46> ../public/animationsystem/compression.h:867
// variables: 4
void CCompressedStatic<int, char>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	int* pValues; // 869
	int nCount; // 870
	const char* pFrameData; // 872
	{
		int i; // 874
	}
} /* size: 0, variables: 3 */

// <00C19B3B> ../public/animationsystem/compression.h:867
// variables: 4
void CCompressedStatic<int, int>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	int* pValues; // 869
	int nCount; // 870
	const int* pFrameData; // 872
	{
		int i; // 874
	}
} /* size: 0, variables: 3 */

// <025DB1B3> ../public/animationsystem/compression.h:889
// variables: 3
// function calls: 3
void CCompressedStatic<float, float>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	float* pValues; // 891
	int nCount; // 892
	const float* pFrameData; // 894
	DecodeContainer_t::pData(); // 894
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 896
} /* size: 40, variables: 3, inline expansions: 3 (25 bytes) */

// <00D10E64> ../public/animationsystem/compression.h:889
// variables: 3
void CCompressedStatic<float, float>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	float* pValues; // 891
	int nCount; // 892
	const float* pFrameData; // 894
} /* size: 0, variables: 3 */

// <025DA0D1> ../public/animationsystem/compression.h:904
void CCompressedList<float, float>::CCompressedList()
{
} /* size: 0 */

// <025DA0B4> ../public/animationsystem/compression.h:904
inline void CCompressedList<float, float>::CCompressedList()
{
} /* size: 0 */

// <025DA09D> ../public/animationsystem/compression.h:904
void CCompressedList<float, float>::~CCompressedList()
{
} /* size: 0 */

// <025DA069> ../public/animationsystem/compression.h:904
inline void CCompressedList<float, float>::~CCompressedList()
{
} /* size: 0 */

// <025CCDCA> ../public/animationsystem/compression.h:904
void CCompressedList<int, char>::CCompressedList()
{
} /* size: 0 */

// <025CCDAD> ../public/animationsystem/compression.h:904
inline void CCompressedList<int, char>::CCompressedList()
{
} /* size: 0 */

// <025CCD96> ../public/animationsystem/compression.h:904
void CCompressedList<int, char>::~CCompressedList()
{
} /* size: 0 */

// <025CCD62> ../public/animationsystem/compression.h:904
inline void CCompressedList<int, char>::~CCompressedList()
{
} /* size: 0 */

// <025CC885> ../public/animationsystem/compression.h:904
void CCompressedList<int, short int>::CCompressedList()
{
} /* size: 0 */

// <025CC868> ../public/animationsystem/compression.h:904
inline void CCompressedList<int, short int>::CCompressedList()
{
} /* size: 0 */

// <025CC851> ../public/animationsystem/compression.h:904
void CCompressedList<int, short int>::~CCompressedList()
{
} /* size: 0 */

// <025CC81D> ../public/animationsystem/compression.h:904
inline void CCompressedList<int, short int>::~CCompressedList()
{
} /* size: 0 */

// <025CC340> ../public/animationsystem/compression.h:904
void CCompressedList<int, int>::CCompressedList()
{
} /* size: 0 */

// <025CC323> ../public/animationsystem/compression.h:904
inline void CCompressedList<int, int>::CCompressedList()
{
} /* size: 0 */

// <025CC30C> ../public/animationsystem/compression.h:904
void CCompressedList<int, int>::~CCompressedList()
{
} /* size: 0 */

// <025CC2D8> ../public/animationsystem/compression.h:904
inline void CCompressedList<int, int>::~CCompressedList()
{
} /* size: 0 */

// <025CAF34> ../public/animationsystem/compression.h:904
void CCompressedList<bool, bool>::CCompressedList()
{
} /* size: 0 */

// <025CAF17> ../public/animationsystem/compression.h:904
inline void CCompressedList<bool, bool>::CCompressedList()
{
} /* size: 0 */

// <025CAF00> ../public/animationsystem/compression.h:904
void CCompressedList<bool, bool>::~CCompressedList()
{
} /* size: 0 */

// <025CAECC> ../public/animationsystem/compression.h:904
inline void CCompressedList<bool, bool>::~CCompressedList()
{
} /* size: 0 */

// <025C9B28> ../public/animationsystem/compression.h:904
void CCompressedList<Color, Color>::CCompressedList()
{
} /* size: 0 */

// <025C9B0B> ../public/animationsystem/compression.h:904
inline void CCompressedList<Color, Color>::CCompressedList()
{
} /* size: 0 */

// <025C9AF4> ../public/animationsystem/compression.h:904
void CCompressedList<Color, Color>::~CCompressedList()
{
} /* size: 0 */

// <025C9AC0> ../public/animationsystem/compression.h:904
inline void CCompressedList<Color, Color>::~CCompressedList()
{
} /* size: 0 */

// <025C871C> ../public/animationsystem/compression.h:904
void CCompressedList<Vector2D, Vector2D>::CCompressedList()
{
} /* size: 0 */

// <025C86FF> ../public/animationsystem/compression.h:904
inline void CCompressedList<Vector2D, Vector2D>::CCompressedList()
{
} /* size: 0 */

// <025C86E8> ../public/animationsystem/compression.h:904
void CCompressedList<Vector2D, Vector2D>::~CCompressedList()
{
} /* size: 0 */

// <025C86B4> ../public/animationsystem/compression.h:904
inline void CCompressedList<Vector2D, Vector2D>::~CCompressedList()
{
} /* size: 0 */

// <025C7310> ../public/animationsystem/compression.h:904
void CCompressedList<Vector4D, Vector4D>::CCompressedList()
{
} /* size: 0 */

// <025C72F3> ../public/animationsystem/compression.h:904
inline void CCompressedList<Vector4D, Vector4D>::CCompressedList()
{
} /* size: 0 */

// <025C72DC> ../public/animationsystem/compression.h:904
void CCompressedList<Vector4D, Vector4D>::~CCompressedList()
{
} /* size: 0 */

// <025C72A8> ../public/animationsystem/compression.h:904
inline void CCompressedList<Vector4D, Vector4D>::~CCompressedList()
{
} /* size: 0 */

// <00C0B7F7> ../public/animationsystem/compression.h:904
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedList<Vector4D, Vector4D> : public CCompressedAnim<Vector4D> {
public:
	/* class CCompressedAnim<Vector4D> <ancestor>; */ /* 0 104 */
	void CCompressedList(CCompressedList<Vector4D, Vector4D>* , CCompressedList<Vector4D, Vector4D>& );
	void CCompressedList(CCompressedList<Vector4D, Vector4D>* , const CCompressedList<Vector4D, Vector4D>& );
	void CCompressedList(CCompressedList<Vector4D, Vector4D>* );
	/* ../public/animationsystem/compression.h:907 */
	virtual bool CanEncode(CCompressedList<Vector4D, Vector4D>* , CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& , const Vector4D& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:917 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedList<Vector4D, Vector4D>* );
	/* ../public/animationsystem/compression.h:940 */
	virtual bool DecodeFrame(const CCompressedList<Vector4D, Vector4D>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedList(CCompressedList<Vector4D, Vector4D>* );
	void CCompressedList(class CCompressedList<Vector4D, Vector4D> *, class CCompressedList<Vector4D, Vector4D> &); /* linkage=_ZN15CCompressedListI8Vector4DS0_EC4EOS1_ */
	void CCompressedList(class CCompressedList<Vector4D, Vector4D> *, const class CCompressedList<Vector4D, Vector4D>  &); /* linkage=_ZN15CCompressedListI8Vector4DS0_EC4ERKS1_ */
	void CCompressedList(class CCompressedList<Vector4D, Vector4D> *); /* linkage=_ZN15CCompressedListI8Vector4DS0_EC4Ev */
	virtual bool CanEncode(class CCompressedList<Vector4D, Vector4D> *, class CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > &, const class Vector4D  &, enum AnimCompressEnable_t); /* linkage=_ZN15CCompressedListI8Vector4DS0_E9CanEncodeER10CUtlVectorIS0_10CUtlMemoryIS0_iEERKS0_20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedList<Vector4D, Vector4D> *); /* linkage=_ZN15CCompressedListI8Vector4DS0_E15CreateContainerEv */
	virtual bool DecodeFrame(const class CCompressedList<Vector4D, Vector4D>  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK15CCompressedListI8Vector4DS0_E11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual void ~CCompressedList(class CCompressedList<Vector4D, Vector4D> *); /* linkage=_ZN15CCompressedListI8Vector4DS0_ED4Ev */
};

// <00C0C02D> ../public/animationsystem/compression.h:904
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedList<Vector2D, Vector2D> : public CCompressedAnim<Vector2D> {
public:
	/* class CCompressedAnim<Vector2D> <ancestor>; */ /* 0 104 */
	void CCompressedList(CCompressedList<Vector2D, Vector2D>* , CCompressedList<Vector2D, Vector2D>& );
	void CCompressedList(CCompressedList<Vector2D, Vector2D>* , const CCompressedList<Vector2D, Vector2D>& );
	void CCompressedList(CCompressedList<Vector2D, Vector2D>* );
	/* ../public/animationsystem/compression.h:907 */
	virtual bool CanEncode(CCompressedList<Vector2D, Vector2D>* , CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& , const Vector2D& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:917 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedList<Vector2D, Vector2D>* );
	/* ../public/animationsystem/compression.h:940 */
	virtual bool DecodeFrame(const CCompressedList<Vector2D, Vector2D>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedList(CCompressedList<Vector2D, Vector2D>* );
};

// <00C0C85D> ../public/animationsystem/compression.h:904
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedList<Color, Color> : public CCompressedAnim<Color> {
public:
	/* class CCompressedAnim<Color> <ancestor>; */ /* 0 104 */
	void CCompressedList(CCompressedList<Color, Color>* , CCompressedList<Color, Color>& );
	void CCompressedList(CCompressedList<Color, Color>* , const CCompressedList<Color, Color>& );
	void CCompressedList(CCompressedList<Color, Color>* );
	/* ../public/animationsystem/compression.h:907 */
	virtual bool CanEncode(CCompressedList<Color, Color>* , CUtlVector<Color, CUtlMemory<Color, int> >& , const Color& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:917 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedList<Color, Color>* );
	/* ../public/animationsystem/compression.h:940 */
	virtual bool DecodeFrame(const CCompressedList<Color, Color>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedList(CCompressedList<Color, Color>* );
};

// <00C0D08D> ../public/animationsystem/compression.h:904
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedList<bool, bool> : public CCompressedAnim<bool> {
public:
	/* class CCompressedAnim<bool> <ancestor>; */ /* 0 104 */
	void CCompressedList(CCompressedList<bool, bool>* , CCompressedList<bool, bool>& );
	void CCompressedList(CCompressedList<bool, bool>* , const CCompressedList<bool, bool>& );
	void CCompressedList(CCompressedList<bool, bool>* );
	/* ../public/animationsystem/compression.h:907 */
	virtual bool CanEncode(CCompressedList<bool, bool>* , CUtlVector<bool, CUtlMemory<bool, int> >& , const bool& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:917 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedList<bool, bool>* );
	/* ../public/animationsystem/compression.h:940 */
	virtual bool DecodeFrame(const CCompressedList<bool, bool>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedList(CCompressedList<bool, bool>* );
};

// <00C0D8BD> ../public/animationsystem/compression.h:904
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedList<int, int> : public CCompressedAnim<int> {
public:
	/* class CCompressedAnim<int> <ancestor>; */ /* 0 104 */
	void CCompressedList(CCompressedList<int, int>* , CCompressedList<int, int>& );
	void CCompressedList(CCompressedList<int, int>* , const CCompressedList<int, int>& );
	void CCompressedList(CCompressedList<int, int>* );
	/* ../public/animationsystem/compression.h:907 */
	virtual bool CanEncode(CCompressedList<int, int>* , CUtlVector<int, CUtlMemory<int, int> >& , const int& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:917 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedList<int, int>* );
	/* ../public/animationsystem/compression.h:940 */
	virtual bool DecodeFrame(const CCompressedList<int, int>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedList(CCompressedList<int, int>* );
};

// <00C0DB89> ../public/animationsystem/compression.h:904
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedList<int, short int> : public CCompressedAnim<int> {
public:
	/* class CCompressedAnim<int> <ancestor>; */ /* 0 104 */
	void CCompressedList(CCompressedList<int, short int>* , CCompressedList<int, short int>& );
	void CCompressedList(CCompressedList<int, short int>* , const CCompressedList<int, short int>& );
	void CCompressedList(CCompressedList<int, short int>* );
	/* ../public/animationsystem/compression.h:907 */
	virtual bool CanEncode(CCompressedList<int, short int>* , CUtlVector<int, CUtlMemory<int, int> >& , const int& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:917 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedList<int, short int>* );
	/* ../public/animationsystem/compression.h:940 */
	virtual bool DecodeFrame(const CCompressedList<int, short int>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedList(CCompressedList<int, short int>* );
};

// <00C0DE55> ../public/animationsystem/compression.h:904
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedList<int, char> : public CCompressedAnim<int> {
public:
	/* class CCompressedAnim<int> <ancestor>; */ /* 0 104 */
	void CCompressedList(CCompressedList<int, char>* , CCompressedList<int, char>& );
	void CCompressedList(CCompressedList<int, char>* , const CCompressedList<int, char>& );
	void CCompressedList(CCompressedList<int, char>* );
	/* ../public/animationsystem/compression.h:907 */
	virtual bool CanEncode(CCompressedList<int, char>* , CUtlVector<int, CUtlMemory<int, int> >& , const int& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:917 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedList<int, char>* );
	/* ../public/animationsystem/compression.h:940 */
	virtual bool DecodeFrame(const CCompressedList<int, char>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedList(CCompressedList<int, char>* );
};

// <00C0FD03> ../public/animationsystem/compression.h:904
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 104
class CCompressedList<float, float> : public CCompressedAnim<float> {
public:
	/* class CCompressedAnim<float> <ancestor>; */ /* 0 104 */
	void CCompressedList(CCompressedList<float, float>* , CCompressedList<float, float>& );
	void CCompressedList(CCompressedList<float, float>* , const CCompressedList<float, float>& );
	void CCompressedList(CCompressedList<float, float>* );
	/* ../public/animationsystem/compression.h:907 */
	virtual bool CanEncode(CCompressedList<float, float>* , CUtlVector<float, CUtlMemory<float, int> >& , const float& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:917 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedList<float, float>* );
	/* ../public/animationsystem/compression.h:965 */
	virtual bool DecodeFrame(const CCompressedList<float, float>* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedList(CCompressedList<float, float>* );
};

// <0259F656> ../public/animationsystem/compression.h:907
// variable: 1
// function calls: 5
void CCompressedList<Vector4D, Vector4D>::CanEncode(CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& values, const Vector4D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 909
		CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::Count(); // 909
		Vector4D::operator!=(
				const Vector4D& src);  // 911
		CUtlMemory<Vector4D, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::operator[](
				int i);  // 911
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 911
	}
} /* size: 102 */

// <0259DB79> ../public/animationsystem/compression.h:907
// variable: 1
// function calls: 5
void CCompressedList<Vector2D, Vector2D>::CanEncode(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& values, const Vector2D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 909
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 909
		CUtlMemory<Vector2D, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::operator[](
				int i);  // 911
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 911
		Vector2D::operator!=(
				const Vector2D& src);  // 911
	}
} /* size: 63 */

// <0259C2C4> ../public/animationsystem/compression.h:907
// variable: 1
void CCompressedList<Color, Color>::CanEncode(CUtlVector<Color, CUtlMemory<Color, int> >& values, const Color& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 909
	}
} /* size: 10 */

// <0259A843> ../public/animationsystem/compression.h:907
// variable: 1
void CCompressedList<bool, bool>::CanEncode(CUtlVector<bool, CUtlMemory<bool, int> >& values, const bool& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 909
	}
} /* size: 10 */

// <0259922A> ../public/animationsystem/compression.h:907
// variable: 1
void CCompressedList<int, int>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& values, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 909
	}
} /* size: 10 */

// <02598AF7> ../public/animationsystem/compression.h:907
// variable: 1
// function calls: 3
void CCompressedList<int, short int>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& values, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 909
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 909
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 911
	}
} /* size: 62 */

// <025983DD> ../public/animationsystem/compression.h:907
// variable: 1
// function calls: 3
void CCompressedList<int, char>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& values, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 909
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 909
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 911
	}
} /* size: 62 */

// <02594CA6> ../public/animationsystem/compression.h:907
// variable: 1
// function calls: 3
void CCompressedList<float, float>::CanEncode(CUtlVector<float, CUtlMemory<float, int> >& values, const float& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 909
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 909
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 911
	}
} /* size: 62 */

// <00C1B068> ../public/animationsystem/compression.h:907
// variable: 1
void CCompressedList<Vector4D, Vector4D>::CanEncode(CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& values, const Vector4D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 909
	}
} /* size: 0 */

// <00C1AC26> ../public/animationsystem/compression.h:907
// variable: 1
void CCompressedList<Vector2D, Vector2D>::CanEncode(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& values, const Vector2D& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 909
	}
} /* size: 0 */

// <00C19E2E> ../public/animationsystem/compression.h:907
// variable: 1
void CCompressedList<int, short int>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& values, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 909
	}
} /* size: 0 */

// <00C19D14> ../public/animationsystem/compression.h:907
// variable: 1
void CCompressedList<int, char>::CanEncode(CUtlVector<int, CUtlMemory<int, int> >& values, const int& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 909
	}
} /* size: 0 */

// <00C194E0> ../public/animationsystem/compression.h:907
// variable: 1
void CCompressedList<float, float>::CanEncode(CUtlVector<float, CUtlMemory<float, int> >& values, const float& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 909
	}
} /* size: 0 */

// <0259EF1A> ../public/animationsystem/compression.h:917
// variables: 6
// function calls: 29
void CCompressedList<Vector4D, Vector4D>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 929
			CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this,
					int i);  // 931
			CUtlMemory<Vector4D, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::operator[](
					int i);  // 931
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 931
			Vector4D::operator=(
					const Vector4D& vOther);  // 931
		}
		CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this,
				int i);  // 927
		CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::Count(); // 927
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 919
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 922
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<Vector4D>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CCompressedAnim<Vector4D>::SetupContainer(
			CUtlBinaryBlock* pDestBlock,
			int nDataSize);  // 923
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this,
			int i);  // 923
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::Count(); // 923
	DecodeContainer_t::pData(); // 926
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::RemoveAll(); // 797
	CCompressedAnim<Vector4D>::Cleanup(); // 936
} /* size: 348, variables: 3, inline expansions: 16 (240 bytes) */

// <0259D432> ../public/animationsystem/compression.h:917
// variables: 6
// function calls: 29
void CCompressedList<Vector2D, Vector2D>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 929
			CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this,
					int i);  // 931
			CUtlMemory<Vector2D, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::operator[](
					int i);  // 931
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 931
			Vector2D::operator=(
					const Vector2D& vOther);  // 931
		}
		CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this,
				int i);  // 927
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 927
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 919
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 922
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this,
			int i);  // 923
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 923
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<Vector2D>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CCompressedAnim<Vector2D>::SetupContainer(
			CUtlBinaryBlock* pDestBlock,
			int nDataSize);  // 923
	DecodeContainer_t::pData(); // 926
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 797
	CCompressedAnim<Vector2D>::Cleanup(); // 936
} /* size: 402, variables: 3, inline expansions: 16 (244 bytes) */

// <0259BB76> ../public/animationsystem/compression.h:917
// variables: 6
// function calls: 29
void CCompressedList<Color, Color>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 929
			CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this,
					int i);  // 931
			CUtlMemory<Color, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Color, CUtlMemory<Color, int> >::operator[](
					int i);  // 931
			Color::SetRawColor(
					int32 Color);  // 147
			Color::operator=(
					const Color& rhs);  // 931
		}
		CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this,
				int i);  // 927
		CUtlVectorBase<Color, CUtlMemory<Color, int> >::Count(); // 927
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 919
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 922
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this,
			int i);  // 923
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::Count(); // 923
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<Color>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CCompressedAnim<Color>::SetupContainer(
			CUtlBinaryBlock* pDestBlock,
			int nDataSize);  // 923
	DecodeContainer_t::pData(); // 926
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::RemoveAll(); // 797
	CCompressedAnim<Color>::Cleanup(); // 936
} /* size: 400, variables: 3, inline expansions: 16 (244 bytes) */

// <0259A15C> ../public/animationsystem/compression.h:917
// variables: 6
// function calls: 27
void CCompressedList<bool, bool>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 929
			CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>  this,
					int i);  // 931
			CUtlMemory<bool, int>::operator[](
					int i);  // 588
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
					int i);  // 931
		}
		CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>  this,
				int i);  // 927
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::Count(); // 927
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 919
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 922
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>  this,
			int i);  // 923
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Count(); // 923
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<bool>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CCompressedAnim<bool>::SetupContainer(
			CUtlBinaryBlock* pDestBlock,
			int nDataSize);  // 923
	DecodeContainer_t::pData(); // 926
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 797
	CCompressedAnim<bool>::Cleanup(); // 936
} /* size: 336, variables: 3, inline expansions: 16 (247 bytes) */

// <02598D47> ../public/animationsystem/compression.h:917
// variables: 5
// function calls: 19
void CCompressedList<int, int>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 929
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
					int i);  // 931
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 931
		}
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
				int i);  // 927
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 927
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 919
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 922
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
			int i);  // 923
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 923
	DecodeContainer_t::pData(); // 926
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 797
	CCompressedAnim<int>::Cleanup(); // 936
} /* size: 274, variables: 3, inline expansions: 11 (92 bytes) */

// <02598614> ../public/animationsystem/compression.h:917
// variables: 5
// function calls: 19
void CCompressedList<int, short int>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 929
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
					int i);  // 931
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 931
		}
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
				int i);  // 927
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 927
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 919
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 922
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
			int i);  // 923
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 923
	DecodeContainer_t::pData(); // 926
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 797
	CCompressedAnim<int>::Cleanup(); // 936
} /* size: 275, variables: 3, inline expansions: 11 (91 bytes) */

// <02597F02> ../public/animationsystem/compression.h:917
// variables: 5
// function calls: 19
void CCompressedList<int, char>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 929
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
					int i);  // 931
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 931
		}
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
				int i);  // 927
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 927
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 919
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 922
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
			int i);  // 923
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 923
	DecodeContainer_t::pData(); // 926
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 797
	CCompressedAnim<int>::Cleanup(); // 936
} /* size: 274, variables: 3, inline expansions: 11 (94 bytes) */

// <025945BF> ../public/animationsystem/compression.h:917
// variables: 6
// function calls: 27
void CCompressedList<float, float>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 929
			CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
					int i);  // 931
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 931
		}
		CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
				int i);  // 927
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 927
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 919
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 922
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
			int i);  // 923
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 923
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<float>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CCompressedAnim<float>::SetupContainer(
			CUtlBinaryBlock* pDestBlock,
			int nDataSize);  // 923
	DecodeContainer_t::pData(); // 926
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 797
	CCompressedAnim<float>::Cleanup(); // 936
} /* size: 404, variables: 3, inline expansions: 16 (244 bytes) */

// <00C1B00D> ../public/animationsystem/compression.h:917
// variables: 5
void CCompressedList<Vector4D, Vector4D>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
		}
	}
} /* size: 0, variables: 3 */

// <00C1ABCB> ../public/animationsystem/compression.h:917
// variables: 5
void CCompressedList<Vector2D, Vector2D>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
		}
	}
} /* size: 0, variables: 3 */

// <00C1A789> ../public/animationsystem/compression.h:917
// variables: 5
void CCompressedList<Color, Color>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
		}
	}
} /* size: 0, variables: 3 */

// <00C1A347> ../public/animationsystem/compression.h:917
// variables: 5
void CCompressedList<bool, bool>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
		}
	}
} /* size: 0, variables: 3 */

// <00C19F05> ../public/animationsystem/compression.h:917
// variables: 5
void CCompressedList<int, int>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
		}
	}
} /* size: 0, variables: 3 */

// <00C19DD3> ../public/animationsystem/compression.h:917
// variables: 5
void CCompressedList<int, short int>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
		}
	}
} /* size: 0, variables: 3 */

// <00C19CB9> ../public/animationsystem/compression.h:917
// variables: 5
void CCompressedList<int, char>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
		}
	}
} /* size: 0, variables: 3 */

// <00C19485> ../public/animationsystem/compression.h:917
// variables: 5
void CCompressedList<float, float>::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 922
	DecodeContainer_t* pContainer; // 923
	byte* pData; // 926
	{
		int iFrame; // 927
		{
			int i; // 929
		}
	}
} /* size: 0, variables: 3 */

// <0259FDCE> ../public/animationsystem/compression.h:940
// variables: 4
// function calls: 2
void CCompressedList<Vector4D, Vector4D>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector4D* pValues; // 942
	int nCount; // 943
	const Vector4D* pFrameData; // 945
	{
		int i; // 948
		Vector4D::operator=(
				const Vector4D& vOther);  // 950
	}
	DecodeContainer_t::pData(); // 945
} /* size: 122, variables: 3, inline expansions: 1 (0 bytes) */

// <0259E2F1> ../public/animationsystem/compression.h:940
// variables: 4
// function calls: 2
void CCompressedList<Vector2D, Vector2D>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector2D* pValues; // 942
	int nCount; // 943
	const Vector2D* pFrameData; // 945
	{
		int i; // 948
		Vector2D::operator=(
				const Vector2D& vOther);  // 950
	}
	DecodeContainer_t::pData(); // 945
} /* size: 102, variables: 3, inline expansions: 1 (0 bytes) */

// <0259C77E> ../public/animationsystem/compression.h:940
// variables: 4
// function calls: 4
void CCompressedList<Color, Color>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Color* pValues; // 942
	int nCount; // 943
	const Color* pFrameData; // 945
	{
		int i; // 948
		Color::GetRawColor(); // 147
		Color::SetRawColor(
				int32 Color);  // 147
		Color::operator=(
				const Color& rhs);  // 950
	}
	DecodeContainer_t::pData(); // 945
} /* size: 68, variables: 3, inline expansions: 1 (0 bytes) */

// <0259AE5D> ../public/animationsystem/compression.h:940
// variables: 4
// function call: 1
void CCompressedList<bool, bool>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	bool* pValues; // 942
	int nCount; // 943
	const bool* pFrameData; // 945
	{
		int i; // 948
	}
	DecodeContainer_t::pData(); // 945
} /* size: 53, variables: 3, inline expansions: 1 (0 bytes) */

// <02599650> ../public/animationsystem/compression.h:940
// variables: 4
// function call: 1
void CCompressedList<int, int>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	int* pValues; // 942
	int nCount; // 943
	const int* pFrameData; // 945
	{
		int i; // 948
	}
	DecodeContainer_t::pData(); // 945
} /* size: 68, variables: 3, inline expansions: 1 (0 bytes) */

// <02598C2E> ../public/animationsystem/compression.h:940
// variables: 4
// function call: 1
void CCompressedList<int, short int>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	int* pValues; // 942
	int nCount; // 943
	const short int* pFrameData; // 945
	{
		int i; // 948
	}
	DecodeContainer_t::pData(); // 945
} /* size: 69, variables: 3, inline expansions: 1 (0 bytes) */

// <02598514> ../public/animationsystem/compression.h:940
// variables: 4
// function call: 1
void CCompressedList<int, char>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	int* pValues; // 942
	int nCount; // 943
	const char* pFrameData; // 945
	{
		int i; // 948
	}
	DecodeContainer_t::pData(); // 945
} /* size: 53, variables: 3, inline expansions: 1 (0 bytes) */

// <00C1B216> ../public/animationsystem/compression.h:940
// variables: 4
void CCompressedList<Vector4D, Vector4D>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector4D* pValues; // 942
	int nCount; // 943
	const Vector4D* pFrameData; // 945
	{
		int i; // 948
	}
} /* size: 0, variables: 3 */

// <00C1ADD4> ../public/animationsystem/compression.h:940
// variables: 4
void CCompressedList<Vector2D, Vector2D>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector2D* pValues; // 942
	int nCount; // 943
	const Vector2D* pFrameData; // 945
	{
		int i; // 948
	}
} /* size: 0, variables: 3 */

// <00C1A992> ../public/animationsystem/compression.h:940
// variables: 4
void CCompressedList<Color, Color>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Color* pValues; // 942
	int nCount; // 943
	const Color* pFrameData; // 945
	{
		int i; // 948
	}
} /* size: 0, variables: 3 */

// <00C1A550> ../public/animationsystem/compression.h:940
// variables: 4
void CCompressedList<bool, bool>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	bool* pValues; // 942
	int nCount; // 943
	const bool* pFrameData; // 945
	{
		int i; // 948
	}
} /* size: 0, variables: 3 */

// <00C1A10E> ../public/animationsystem/compression.h:940
// variables: 4
void CCompressedList<int, int>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	int* pValues; // 942
	int nCount; // 943
	const int* pFrameData; // 945
	{
		int i; // 948
	}
} /* size: 0, variables: 3 */

// <00C19E7A> ../public/animationsystem/compression.h:940
// variables: 4
void CCompressedList<int, short int>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	int* pValues; // 942
	int nCount; // 943
	const short int* pFrameData; // 945
	{
		int i; // 948
	}
} /* size: 0, variables: 3 */

// <00C19D60> ../public/animationsystem/compression.h:940
// variables: 4
void CCompressedList<int, char>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	int* pValues; // 942
	int nCount; // 943
	const char* pFrameData; // 945
	{
		int i; // 948
	}
} /* size: 0, variables: 3 */

// <025DB039> ../public/animationsystem/compression.h:965
// variables: 3
// function calls: 3
void CCompressedList<float, float>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	float* pValues; // 967
	int nCount; // 968
	const float* pFrameData; // 970
	DecodeContainer_t::pData(); // 970
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 973
} /* size: 62, variables: 3, inline expansions: 3 (22 bytes) */

// <00D10DFE> ../public/animationsystem/compression.h:965
// variables: 3
void CCompressedList<float, float>::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	float* pValues; // 967
	int nCount; // 968
	const float* pFrameData; // 970
} /* size: 0, variables: 3 */

// <025DAADC> ../public/animationsystem/compression.h:980
void CCompressedReferenceFloat::CCompressedReferenceFloat()
{
} /* size: 0 */

// <025DAABF> ../public/animationsystem/compression.h:980
inline void CCompressedReferenceFloat::CCompressedReferenceFloat()
{
} /* size: 0 */

// <025A0581> ../public/animationsystem/compression.h:980
// function calls: 28
void CCompressedReferenceFloat::~CCompressedReferenceFloat()
{
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 560
	ValidateAlignment<CUtlVector<float> >(void); // 508
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<float>::~CCompressedAnim(); // 810
	CCompressedReference<float>::~CCompressedReference(); // 980
} /* size: 134, inline expansions: 28 (632 bytes) */

// <0259FF1F> ../public/animationsystem/compression.h:980
// function calls: 33
void CCompressedReferenceFloat::~CCompressedReferenceFloat()
{
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 560
	ValidateAlignment<CUtlVector<float> >(void); // 508
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<float>::~CCompressedAnim(); // 810
	CCompressedReference<float>::~CCompressedReference(); // 980
	CCompressedReferenceFloat::~CCompressedReferenceFloat(); // 980
} /* size: 136, inline expansions: 33 (699 bytes) */

// <0259FF02> ../public/animationsystem/compression.h:980
inline void CCompressedReferenceFloat::~CCompressedReferenceFloat()
{
} /* size: 0 */

// <00C20306> ../public/animationsystem/compression.h:980
void CCompressedReferenceFloat::~CCompressedReferenceFloat()
{
} /* size: 0 */

// <00C10116> ../public/animationsystem/compression.h:980
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedReferenceFloat : public CCompressedReference<float> {
public:
	/* class CCompressedReference<float> <ancestor>; */ /* 0 104 */
	void CCompressedReferenceFloat(CCompressedReferenceFloat* , CCompressedReferenceFloat& );
	void CCompressedReferenceFloat(CCompressedReferenceFloat* , const CCompressedReferenceFloat& );
	void CCompressedReferenceFloat(CCompressedReferenceFloat* );
	/* ../public/animationsystem/compression.h:983 */
	virtual const char* GetName(const CCompressedReferenceFloat* );
	/* ../public/animationsystem/compression.h:983 */
	virtual const int GetFieldType(const CCompressedReferenceFloat* );
	/* ../public/animationsystem/compression.h:983 */
	virtual const int GetFlags(const CCompressedReferenceFloat* );
	/* ../public/animationsystem/compression.h:983 */
	virtual ICompressorService* Instantiate(const CCompressedReferenceFloat* );
	virtual void ~CCompressedReferenceFloat(CCompressedReferenceFloat* );
	void CCompressedReferenceFloat(class CCompressedReferenceFloat *, class CCompressedReferenceFloat &); /* linkage=_ZN25CCompressedReferenceFloatC4EOS_ */
	void CCompressedReferenceFloat(class CCompressedReferenceFloat *, const class CCompressedReferenceFloat  &); /* linkage=_ZN25CCompressedReferenceFloatC4ERKS_ */
	void CCompressedReferenceFloat(class CCompressedReferenceFloat *); /* linkage=_ZN25CCompressedReferenceFloatC4Ev */
	virtual const char  * GetName(const class CCompressedReferenceFloat  *); /* linkage=_ZNK25CCompressedReferenceFloat7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedReferenceFloat  *); /* linkage=_ZNK25CCompressedReferenceFloat12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedReferenceFloat  *); /* linkage=_ZNK25CCompressedReferenceFloat8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedReferenceFloat  *); /* linkage=_ZNK25CCompressedReferenceFloat11InstantiateEv */
	virtual void ~CCompressedReferenceFloat(class CCompressedReferenceFloat *); /* linkage=_ZN25CCompressedReferenceFloatD4Ev */
};

// <025DB00B> ../public/animationsystem/compression.h:983
void CCompressedReferenceFloat::GetName()
{
} /* size: 12 */

// <025DAFDD> ../public/animationsystem/compression.h:983
void CCompressedReferenceFloat::GetFieldType()
{
} /* size: 10 */

// <025DAFAF> ../public/animationsystem/compression.h:983
void CCompressedReferenceFloat::GetFlags()
{
} /* size: 7 */

// <025DA6B7> ../public/animationsystem/compression.h:983
// function calls: 19
void CCompressedReferenceFloat::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 582
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 582
	CCompressedAnim<float>::CCompressedAnim(); // 810
	CCompressedReference<float>::CCompressedReference(); // 980
	CCompressedReferenceFloat::CCompressedReferenceFloat(); // 983
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D10C05> ../public/animationsystem/compression.h:983
void CCompressedReferenceFloat::Instantiate()
{
} /* size: 0 */

// <025DA597> ../public/animationsystem/compression.h:989
void CCompressedStaticFloat::CCompressedStaticFloat()
{
} /* size: 0 */

// <025DA57A> ../public/animationsystem/compression.h:989
inline void CCompressedStaticFloat::CCompressedStaticFloat()
{
} /* size: 0 */

// <025A1130> ../public/animationsystem/compression.h:989
// function calls: 28
void CCompressedStaticFloat::~CCompressedStaticFloat()
{
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 560
	ValidateAlignment<CUtlVector<float> >(void); // 508
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<float>::~CCompressedAnim(); // 834
	CCompressedStatic<float, float>::~CCompressedStatic(); // 989
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025A0ACE> ../public/animationsystem/compression.h:989
// function calls: 33
void CCompressedStaticFloat::~CCompressedStaticFloat()
{
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 560
	ValidateAlignment<CUtlVector<float> >(void); // 508
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<float>::~CCompressedAnim(); // 834
	CCompressedStatic<float, float>::~CCompressedStatic(); // 989
	CCompressedStaticFloat::~CCompressedStaticFloat(); // 989
} /* size: 136, inline expansions: 33 (699 bytes) */

// <00C20351> ../public/animationsystem/compression.h:989
void CCompressedStaticFloat::~CCompressedStaticFloat()
{
} /* size: 0 */

// <00C0FE6C> ../public/animationsystem/compression.h:989
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedStaticFloat : public CCompressedStatic<float, float> {
public:
	/* class CCompressedStatic<float, float> <ancestor>; */ /* 0 104 */
	void CCompressedStaticFloat(CCompressedStaticFloat* , CCompressedStaticFloat& );
	void CCompressedStaticFloat(CCompressedStaticFloat* , const CCompressedStaticFloat& );
	void CCompressedStaticFloat(CCompressedStaticFloat* );
	/* ../public/animationsystem/compression.h:992 */
	virtual const char* GetName(const CCompressedStaticFloat* );
	/* ../public/animationsystem/compression.h:992 */
	virtual const int GetFieldType(const CCompressedStaticFloat* );
	/* ../public/animationsystem/compression.h:992 */
	virtual const int GetFlags(const CCompressedStaticFloat* );
	/* ../public/animationsystem/compression.h:992 */
	virtual ICompressorService* Instantiate(const CCompressedStaticFloat* );
	virtual void ~CCompressedStaticFloat(CCompressedStaticFloat* );
	void CCompressedStaticFloat(class CCompressedStaticFloat *, class CCompressedStaticFloat &); /* linkage=_ZN22CCompressedStaticFloatC4EOS_ */
	void CCompressedStaticFloat(class CCompressedStaticFloat *, const class CCompressedStaticFloat  &); /* linkage=_ZN22CCompressedStaticFloatC4ERKS_ */
	void CCompressedStaticFloat(class CCompressedStaticFloat *); /* linkage=_ZN22CCompressedStaticFloatC4Ev */
	virtual const char  * GetName(const class CCompressedStaticFloat  *); /* linkage=_ZNK22CCompressedStaticFloat7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedStaticFloat  *); /* linkage=_ZNK22CCompressedStaticFloat12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedStaticFloat  *); /* linkage=_ZNK22CCompressedStaticFloat8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedStaticFloat  *); /* linkage=_ZNK22CCompressedStaticFloat11InstantiateEv */
	virtual void ~CCompressedStaticFloat(class CCompressedStaticFloat *); /* linkage=_ZN22CCompressedStaticFloatD4Ev */
};

// <025DA689> ../public/animationsystem/compression.h:992
void CCompressedStaticFloat::GetName()
{
} /* size: 12 */

// <025DA65B> ../public/animationsystem/compression.h:992
void CCompressedStaticFloat::GetFieldType()
{
} /* size: 10 */

// <025DA62D> ../public/animationsystem/compression.h:992
void CCompressedStaticFloat::GetFlags()
{
} /* size: 7 */

// <025DA172> ../public/animationsystem/compression.h:992
// function calls: 19
void CCompressedStaticFloat::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 582
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 582
	CCompressedAnim<float>::CCompressedAnim(); // 834
	CCompressedStatic<float, float>::CCompressedStatic(); // 989
	CCompressedStaticFloat::CCompressedStaticFloat(); // 992
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D10AF2> ../public/animationsystem/compression.h:992
void CCompressedStaticFloat::Instantiate()
{
} /* size: 0 */

// <025DA052> ../public/animationsystem/compression.h:998
void CCompressedFullFloat::CCompressedFullFloat()
{
} /* size: 0 */

// <025DA035> ../public/animationsystem/compression.h:998
inline void CCompressedFullFloat::CCompressedFullFloat()
{
} /* size: 0 */

// <025A1CDF> ../public/animationsystem/compression.h:998
// function calls: 28
void CCompressedFullFloat::~CCompressedFullFloat()
{
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 560
	ValidateAlignment<CUtlVector<float> >(void); // 508
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<float>::~CCompressedAnim(); // 904
	CCompressedList<float, float>::~CCompressedList(); // 998
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025A167D> ../public/animationsystem/compression.h:998
// function calls: 33
void CCompressedFullFloat::~CCompressedFullFloat()
{
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 560
	ValidateAlignment<CUtlVector<float> >(void); // 508
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<float>::~CCompressedAnim(); // 904
	CCompressedList<float, float>::~CCompressedList(); // 998
	CCompressedFullFloat::~CCompressedFullFloat(); // 998
} /* size: 136, inline expansions: 33 (699 bytes) */

// <025A1660> ../public/animationsystem/compression.h:998
inline void CCompressedFullFloat::~CCompressedFullFloat()
{
} /* size: 0 */

// <00C2039C> ../public/animationsystem/compression.h:998
void CCompressedFullFloat::~CCompressedFullFloat()
{
} /* size: 0 */

// <00C0FBC2> ../public/animationsystem/compression.h:998
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedFullFloat : public CCompressedList<float, float> {
public:
	/* class CCompressedList<float, float> <ancestor>; */ /* 0 104 */
	void CCompressedFullFloat(CCompressedFullFloat* , CCompressedFullFloat& );
	void CCompressedFullFloat(CCompressedFullFloat* , const CCompressedFullFloat& );
	void CCompressedFullFloat(CCompressedFullFloat* );
	/* ../public/animationsystem/compression.h:1001 */
	virtual const char* GetName(const CCompressedFullFloat* );
	/* ../public/animationsystem/compression.h:1001 */
	virtual const int GetFieldType(const CCompressedFullFloat* );
	/* ../public/animationsystem/compression.h:1001 */
	virtual const int GetFlags(const CCompressedFullFloat* );
	/* ../public/animationsystem/compression.h:1001 */
	virtual ICompressorService* Instantiate(const CCompressedFullFloat* );
	virtual void ~CCompressedFullFloat(CCompressedFullFloat* );
	void CCompressedFullFloat(class CCompressedFullFloat *, class CCompressedFullFloat &); /* linkage=_ZN20CCompressedFullFloatC4EOS_ */
	void CCompressedFullFloat(class CCompressedFullFloat *, const class CCompressedFullFloat  &); /* linkage=_ZN20CCompressedFullFloatC4ERKS_ */
	void CCompressedFullFloat(class CCompressedFullFloat *); /* linkage=_ZN20CCompressedFullFloatC4Ev */
	virtual const char  * GetName(const class CCompressedFullFloat  *); /* linkage=_ZNK20CCompressedFullFloat7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedFullFloat  *); /* linkage=_ZNK20CCompressedFullFloat12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedFullFloat  *); /* linkage=_ZNK20CCompressedFullFloat8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedFullFloat  *); /* linkage=_ZNK20CCompressedFullFloat11InstantiateEv */
	virtual void ~CCompressedFullFloat(class CCompressedFullFloat *); /* linkage=_ZN20CCompressedFullFloatD4Ev */
};

// <025DA144> ../public/animationsystem/compression.h:1001
void CCompressedFullFloat::GetName()
{
} /* size: 12 */

// <025DA116> ../public/animationsystem/compression.h:1001
void CCompressedFullFloat::GetFieldType()
{
} /* size: 10 */

// <025DA0E8> ../public/animationsystem/compression.h:1001
void CCompressedFullFloat::GetFlags()
{
} /* size: 10 */

// <025D9C2D> ../public/animationsystem/compression.h:1001
// function calls: 19
void CCompressedFullFloat::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 582
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 582
	CCompressedAnim<float>::CCompressedAnim(); // 904
	CCompressedList<float, float>::CCompressedList(); // 998
	CCompressedFullFloat::CCompressedFullFloat(); // 1001
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D109DF> ../public/animationsystem/compression.h:1001
void CCompressedFullFloat::Instantiate()
{
} /* size: 0 */

// <025D9266> ../public/animationsystem/compression.h:1011
void CCompressedReferenceVector3::CCompressedReferenceVector3()
{
} /* size: 0 */

// <025D9249> ../public/animationsystem/compression.h:1011
inline void CCompressedReferenceVector3::CCompressedReferenceVector3()
{
} /* size: 0 */

// <025A22BA> ../public/animationsystem/compression.h:1011
void CCompressedReferenceVector3::~CCompressedReferenceVector3()
{
} /* size: 19 */

// <025A222C> ../public/animationsystem/compression.h:1011
// function call: 1
void CCompressedReferenceVector3::~CCompressedReferenceVector3()
{
	CCompressedReferenceVector3::~CCompressedReferenceVector3(); // 1011
} /* size: 46, inline expansions: 1 (19 bytes) */

// <025A220F> ../public/animationsystem/compression.h:1011
inline void CCompressedReferenceVector3::~CCompressedReferenceVector3()
{
} /* size: 0 */

// <00C0F9E5> ../public/animationsystem/compression.h:1011
// member functions: 20
// member variable: 1
// vtable entries: 6
// class size: 104
class CCompressedReferenceVector3 : public CCompressedAnim<Vector> {
public:
	/* class CCompressedAnim<Vector> <ancestor>; */ /* 0 104 */
	void CCompressedReferenceVector3(CCompressedReferenceVector3* , CCompressedReferenceVector3& );
	void CCompressedReferenceVector3(CCompressedReferenceVector3* , const CCompressedReferenceVector3& );
	void CCompressedReferenceVector3(CCompressedReferenceVector3* );
	/* ../public/animationsystem/compression.h:1014 */
	virtual const char* GetName(const CCompressedReferenceVector3* );
	/* ../public/animationsystem/compression.h:1014 */
	virtual const int GetFieldType(const CCompressedReferenceVector3* );
	/* ../public/animationsystem/compression.h:1014 */
	virtual const int GetFlags(const CCompressedReferenceVector3* );
	/* ../public/animationsystem/compression.h:1014 */
	virtual ICompressorService* Instantiate(const CCompressedReferenceVector3* );
	/* ../public/animationsystem/compression.h:1016 */
	virtual bool CanEncode(CCompressedReferenceVector3* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , const Vector& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:1026 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedReferenceVector3* );
	virtual void ~CCompressedReferenceVector3(CCompressedReferenceVector3* );
	void CCompressedReferenceVector3(class CCompressedReferenceVector3 *, class CCompressedReferenceVector3 &); /* linkage=_ZN27CCompressedReferenceVector3C4EOS_ */
	void CCompressedReferenceVector3(class CCompressedReferenceVector3 *, const class CCompressedReferenceVector3  &); /* linkage=_ZN27CCompressedReferenceVector3C4ERKS_ */
	void CCompressedReferenceVector3(class CCompressedReferenceVector3 *); /* linkage=_ZN27CCompressedReferenceVector3C4Ev */
	virtual const char  * GetName(const class CCompressedReferenceVector3  *); /* linkage=_ZNK27CCompressedReferenceVector37GetNameEv */
	virtual const int  GetFieldType(const class CCompressedReferenceVector3  *); /* linkage=_ZNK27CCompressedReferenceVector312GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedReferenceVector3  *); /* linkage=_ZNK27CCompressedReferenceVector38GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedReferenceVector3  *); /* linkage=_ZNK27CCompressedReferenceVector311InstantiateEv */
	virtual bool CanEncode(class CCompressedReferenceVector3 *, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, const class Vector  &, enum AnimCompressEnable_t); /* linkage=_ZN27CCompressedReferenceVector39CanEncodeER10CUtlVectorI6Vector10CUtlMemoryIS1_iEERKS1_20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedReferenceVector3 *); /* linkage=_ZN27CCompressedReferenceVector315CreateContainerEv */
	virtual void ~CCompressedReferenceVector3(class CCompressedReferenceVector3 *); /* linkage=_ZN27CCompressedReferenceVector3D4Ev */
};

// <025D9BFF> ../public/animationsystem/compression.h:1014
void CCompressedReferenceVector3::GetName()
{
} /* size: 12 */

// <025D9BD1> ../public/animationsystem/compression.h:1014
void CCompressedReferenceVector3::GetFieldType()
{
} /* size: 10 */

// <025D9BA3> ../public/animationsystem/compression.h:1014
void CCompressedReferenceVector3::GetFlags()
{
} /* size: 7 */

// <025D8E66> ../public/animationsystem/compression.h:1014
// function calls: 18
void CCompressedReferenceVector3::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 582
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 582
	CCompressedAnim<Vector>::CCompressedAnim(); // 1011
	CCompressedReferenceVector3::CCompressedReferenceVector3(); // 1014
} /* size: 123, inline expansions: 18 (407 bytes) */

// <00D10898> ../public/animationsystem/compression.h:1014
void CCompressedReferenceVector3::Instantiate()
{
} /* size: 0 */

// <025D8B9F> ../public/animationsystem/compression.h:1016
// variable: 1
// function calls: 12
void CCompressedReferenceVector3::CanEncode(CUtlVector<Vector, CUtlMemory<Vector, int> >& values, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 1018
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1018
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1020
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 1020
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1020
	}
} /* size: 134 */

// <00D1084C> ../public/animationsystem/compression.h:1016
// variable: 1
void CCompressedReferenceVector3::CanEncode(CUtlVector<Vector, CUtlMemory<Vector, int> >& values, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		int i; // 1018
	}
} /* size: 0 */

// <025D8AD0> ../public/animationsystem/compression.h:1026
// function calls: 3
void CCompressedReferenceVector3::CreateContainer()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 797
	CCompressedAnim<Vector>::Cleanup(); // 1028
} /* size: 35, inline expansions: 3 (37 bytes) */

// <00D10834> ../public/animationsystem/compression.h:1026
void CCompressedReferenceVector3::CreateContainer()
{
} /* size: 0 */

// <025D8A2F> ../public/animationsystem/compression.h:1036
void CCompressedStaticVector3::CCompressedStaticVector3()
{
} /* size: 0 */

// <025D8A12> ../public/animationsystem/compression.h:1036
inline void CCompressedStaticVector3::CCompressedStaticVector3()
{
} /* size: 0 */

// <025A23AE> ../public/animationsystem/compression.h:1036
void CCompressedStaticVector3::~CCompressedStaticVector3()
{
} /* size: 19 */

// <025A2320> ../public/animationsystem/compression.h:1036
// function call: 1
void CCompressedStaticVector3::~CCompressedStaticVector3()
{
	CCompressedStaticVector3::~CCompressedStaticVector3(); // 1036
} /* size: 46, inline expansions: 1 (19 bytes) */

// <025A2303> ../public/animationsystem/compression.h:1036
inline void CCompressedStaticVector3::~CCompressedStaticVector3()
{
} /* size: 0 */

// <00C0F7E6> ../public/animationsystem/compression.h:1036
// member functions: 22
// member variable: 1
// vtable entries: 7
// class size: 104
class CCompressedStaticVector3 : public CCompressedAnim<Vector> {
public:
	/* class CCompressedAnim<Vector> <ancestor>; */ /* 0 104 */
	void CCompressedStaticVector3(CCompressedStaticVector3* , CCompressedStaticVector3& );
	void CCompressedStaticVector3(CCompressedStaticVector3* , const CCompressedStaticVector3& );
	void CCompressedStaticVector3(CCompressedStaticVector3* );
	/* ../public/animationsystem/compression.h:1039 */
	virtual const char* GetName(const CCompressedStaticVector3* );
	/* ../public/animationsystem/compression.h:1039 */
	virtual const int GetFieldType(const CCompressedStaticVector3* );
	/* ../public/animationsystem/compression.h:1039 */
	virtual const int GetFlags(const CCompressedStaticVector3* );
	/* ../public/animationsystem/compression.h:1039 */
	virtual ICompressorService* Instantiate(const CCompressedStaticVector3* );
	/* ../public/animationsystem/compression.h:1041 */
	virtual bool CanEncode(CCompressedStaticVector3* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , const Vector& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:1056 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedStaticVector3* );
	/* ../public/animationsystem/compression.h:1076 */
	virtual bool DecodeFrame(const CCompressedStaticVector3* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedStaticVector3(CCompressedStaticVector3* );
	void CCompressedStaticVector3(class CCompressedStaticVector3 *, class CCompressedStaticVector3 &); /* linkage=_ZN24CCompressedStaticVector3C4EOS_ */
	void CCompressedStaticVector3(class CCompressedStaticVector3 *, const class CCompressedStaticVector3  &); /* linkage=_ZN24CCompressedStaticVector3C4ERKS_ */
	void CCompressedStaticVector3(class CCompressedStaticVector3 *); /* linkage=_ZN24CCompressedStaticVector3C4Ev */
	virtual const char  * GetName(const class CCompressedStaticVector3  *); /* linkage=_ZNK24CCompressedStaticVector37GetNameEv */
	virtual const int  GetFieldType(const class CCompressedStaticVector3  *); /* linkage=_ZNK24CCompressedStaticVector312GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedStaticVector3  *); /* linkage=_ZNK24CCompressedStaticVector38GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedStaticVector3  *); /* linkage=_ZNK24CCompressedStaticVector311InstantiateEv */
	virtual bool CanEncode(class CCompressedStaticVector3 *, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, const class Vector  &, enum AnimCompressEnable_t); /* linkage=_ZN24CCompressedStaticVector39CanEncodeER10CUtlVectorI6Vector10CUtlMemoryIS1_iEERKS1_20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedStaticVector3 *); /* linkage=_ZN24CCompressedStaticVector315CreateContainerEv */
	virtual bool DecodeFrame(const class CCompressedStaticVector3  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK24CCompressedStaticVector311DecodeFrameEPK17DecodeContainer_tiPv */
	virtual void ~CCompressedStaticVector3(class CCompressedStaticVector3 *); /* linkage=_ZN24CCompressedStaticVector3D4Ev */
};

// <025D8AA2> ../public/animationsystem/compression.h:1039
void CCompressedStaticVector3::GetName()
{
} /* size: 12 */

// <025D8A74> ../public/animationsystem/compression.h:1039
void CCompressedStaticVector3::GetFieldType()
{
} /* size: 10 */

// <025D8A46> ../public/animationsystem/compression.h:1039
void CCompressedStaticVector3::GetFlags()
{
} /* size: 7 */

// <025D862F> ../public/animationsystem/compression.h:1039
// function calls: 18
void CCompressedStaticVector3::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 582
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 582
	CCompressedAnim<Vector>::CCompressedAnim(); // 1036
	CCompressedStaticVector3::CCompressedStaticVector3(); // 1039
} /* size: 123, inline expansions: 18 (407 bytes) */

// <00D107A0> ../public/animationsystem/compression.h:1039
void CCompressedStaticVector3::Instantiate()
{
} /* size: 0 */

// <025D7F03> ../public/animationsystem/compression.h:1041
// variables: 21
// function calls: 29
void CCompressedStaticVector3::CanEncode(CUtlVector<Vector, CUtlMemory<Vector, int> >& values, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	Vector48 compressed; // 1043
	Vector decoded; // 1044
	{
		int i; // 1045
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1045
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		IsInfinity(union float16bits in); // 631
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 717
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		IsInfinity(union float16bits in); // 631
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 718
		IsInfinity(union float16bits in); // 631
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 719
		Vector::Vector(); // 715
		Vector48::operator Vector(); // 1048
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 1047
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1050
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1050
		float16::SetFloat(
			float in);  // 706
		float16::SetFloat(
			float in);  // 707
		float16::SetFloat(
			float in);  // 708
		Vector48::operator=(
				const Vector& vOther);  // 1047
	}
	Vector48::Vector48(); // 1043
	Vector::Vector(); // 1044
} /* size: 850, variables: 2, inline expansions: 2 (0 bytes) */

// <00D1073A> ../public/animationsystem/compression.h:1041
// variables: 3
void CCompressedStaticVector3::CanEncode(CUtlVector<Vector, CUtlMemory<Vector, int> >& values, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	Vector48 compressed; // 1043
	Vector decoded; // 1044
	{
		int i; // 1045
	}
} /* size: 0, variables: 2 */

// <025D7A71> ../public/animationsystem/compression.h:1056
// variables: 4
// function calls: 17
void CCompressedStaticVector3::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1061
	DecodeContainer_t* pContainer; // 1062
	byte* pData; // 1065
	{
		int i; // 1066
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1066
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
				int i);  // 1068
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 1068
		float16::SetFloat(
			float in);  // 706
		float16::SetFloat(
			float in);  // 707
		float16::SetFloat(
			float in);  // 708
		Vector48::operator=(
				const Vector& vOther);  // 1068
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1058
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 1061
	DecodeContainer_t::pData(); // 1065
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 797
	CCompressedAnim<Vector>::Cleanup(); // 1072
} /* size: 229, variables: 3, inline expansions: 8 (88 bytes) */

// <00D106EE> ../public/animationsystem/compression.h:1056
// variables: 4
void CCompressedStaticVector3::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1061
	DecodeContainer_t* pContainer; // 1062
	byte* pData; // 1065
	{
		int i; // 1066
	}
} /* size: 0, variables: 3 */

// <025D7656> ../public/animationsystem/compression.h:1076
// variables: 22
// function calls: 13
void CCompressedStaticVector3::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector* pValues; // 1078
	int nCount; // 1079
	const Vector48* pFrameData; // 1081
	{
		int i; // 1083
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		IsInfinity(union float16bits in); // 631
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 717
		IsInfinity(union float16bits in); // 631
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 718
		IsInfinity(union float16bits in); // 631
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 719
		Vector::Vector(); // 715
		Vector48::operator Vector(); // 1085
		Vector::operator=(
				const Vector& vOther);  // 1085
	}
	DecodeContainer_t::pData(); // 1081
} /* size: 726, variables: 3, inline expansions: 1 (16 bytes) */

// <00D1067B> ../public/animationsystem/compression.h:1076
// variables: 4
void CCompressedStaticVector3::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector* pValues; // 1078
	int nCount; // 1079
	const Vector48* pFrameData; // 1081
	{
		int i; // 1083
	}
} /* size: 0, variables: 3 */

// <025D75B5> ../public/animationsystem/compression.h:1100
void CCompressedStaticFullVector3::CCompressedStaticFullVector3()
{
} /* size: 0 */

// <025D7598> ../public/animationsystem/compression.h:1100
inline void CCompressedStaticFullVector3::CCompressedStaticFullVector3()
{
} /* size: 0 */

// <025A24A2> ../public/animationsystem/compression.h:1100
// function calls: 27
void CCompressedStaticFullVector3::~CCompressedStaticFullVector3()
{
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 560
	ValidateAlignment<CUtlVector<Vector> >(void); // 508
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Vector>::~CCompressedAnim(); // 1100
} /* size: 134, inline expansions: 27 (525 bytes) */

// <025A2414> ../public/animationsystem/compression.h:1100
// function call: 1
void CCompressedStaticFullVector3::~CCompressedStaticFullVector3()
{
	CCompressedStaticFullVector3::~CCompressedStaticFullVector3(); // 1100
} /* size: 46, inline expansions: 1 (19 bytes) */

// <025A23F7> ../public/animationsystem/compression.h:1100
inline void CCompressedStaticFullVector3::~CCompressedStaticFullVector3()
{
} /* size: 0 */

// <00C2047D> ../public/animationsystem/compression.h:1100
void CCompressedStaticFullVector3::~CCompressedStaticFullVector3()
{
} /* size: 0 */

// <00C0F5E7> ../public/animationsystem/compression.h:1100
// member functions: 22
// member variable: 1
// vtable entries: 7
// class size: 104
class CCompressedStaticFullVector3 : public CCompressedAnim<Vector> {
public:
	/* class CCompressedAnim<Vector> <ancestor>; */ /* 0 104 */
	void CCompressedStaticFullVector3(CCompressedStaticFullVector3* , CCompressedStaticFullVector3& );
	void CCompressedStaticFullVector3(CCompressedStaticFullVector3* , const CCompressedStaticFullVector3& );
	void CCompressedStaticFullVector3(CCompressedStaticFullVector3* );
	/* ../public/animationsystem/compression.h:1103 */
	virtual const char* GetName(const CCompressedStaticFullVector3* );
	/* ../public/animationsystem/compression.h:1103 */
	virtual const int GetFieldType(const CCompressedStaticFullVector3* );
	/* ../public/animationsystem/compression.h:1103 */
	virtual const int GetFlags(const CCompressedStaticFullVector3* );
	/* ../public/animationsystem/compression.h:1103 */
	virtual ICompressorService* Instantiate(const CCompressedStaticFullVector3* );
	/* ../public/animationsystem/compression.h:1105 */
	virtual bool CanEncode(CCompressedStaticFullVector3* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , const Vector& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:1120 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedStaticFullVector3* );
	/* ../public/animationsystem/compression.h:1140 */
	virtual bool DecodeFrame(const CCompressedStaticFullVector3* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedStaticFullVector3(CCompressedStaticFullVector3* );
	void CCompressedStaticFullVector3(class CCompressedStaticFullVector3 *, class CCompressedStaticFullVector3 &); /* linkage=_ZN28CCompressedStaticFullVector3C4EOS_ */
	void CCompressedStaticFullVector3(class CCompressedStaticFullVector3 *, const class CCompressedStaticFullVector3  &); /* linkage=_ZN28CCompressedStaticFullVector3C4ERKS_ */
	void CCompressedStaticFullVector3(class CCompressedStaticFullVector3 *); /* linkage=_ZN28CCompressedStaticFullVector3C4Ev */
	virtual const char  * GetName(const class CCompressedStaticFullVector3  *); /* linkage=_ZNK28CCompressedStaticFullVector37GetNameEv */
	virtual const int  GetFieldType(const class CCompressedStaticFullVector3  *); /* linkage=_ZNK28CCompressedStaticFullVector312GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedStaticFullVector3  *); /* linkage=_ZNK28CCompressedStaticFullVector38GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedStaticFullVector3  *); /* linkage=_ZNK28CCompressedStaticFullVector311InstantiateEv */
	virtual bool CanEncode(class CCompressedStaticFullVector3 *, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, const class Vector  &, enum AnimCompressEnable_t); /* linkage=_ZN28CCompressedStaticFullVector39CanEncodeER10CUtlVectorI6Vector10CUtlMemoryIS1_iEERKS1_20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedStaticFullVector3 *); /* linkage=_ZN28CCompressedStaticFullVector315CreateContainerEv */
	virtual bool DecodeFrame(const class CCompressedStaticFullVector3  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK28CCompressedStaticFullVector311DecodeFrameEPK17DecodeContainer_tiPv */
	virtual void ~CCompressedStaticFullVector3(class CCompressedStaticFullVector3 *); /* linkage=_ZN28CCompressedStaticFullVector3D4Ev */
};

// <025D75FA> ../public/animationsystem/compression.h:1103
void CCompressedStaticFullVector3::GetFieldType()
{
} /* size: 10 */

// <025D75CC> ../public/animationsystem/compression.h:1103
void CCompressedStaticFullVector3::GetFlags()
{
} /* size: 7 */

// <025D71B5> ../public/animationsystem/compression.h:1103
// function calls: 18
void CCompressedStaticFullVector3::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 582
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 582
	CCompressedAnim<Vector>::CCompressedAnim(); // 1100
	CCompressedStaticFullVector3::CCompressedStaticFullVector3(); // 1103
} /* size: 123, inline expansions: 18 (407 bytes) */

// <00D105E7> ../public/animationsystem/compression.h:1103
void CCompressedStaticFullVector3::Instantiate()
{
} /* size: 0 */

// <025D6CA5> ../public/animationsystem/compression.h:1105
// variables: 4
// function calls: 21
void CCompressedStaticFullVector3::CanEncode(CUtlVector<Vector, CUtlMemory<Vector, int> >& values, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 20704
	{
		int i; // 1107
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1109
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1107
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 619
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 619
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 619
		Vector::IsValid(); // 1109
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 1109
	}
	{
		int i; // 1112
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 1114
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1114
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1114
	}
} /* size: 262, variables: 1 */

// <00D1056A> ../public/animationsystem/compression.h:1105
// variables: 4
void CCompressedStaticFullVector3::CanEncode(CUtlVector<Vector, CUtlMemory<Vector, int> >& values, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21898
	{
		int i; // 1107
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1109
		}
	}
	{
		int i; // 1112
	}
} /* size: 0, variables: 1 */

// <025D68E4> ../public/animationsystem/compression.h:1120
// variables: 4
// function calls: 14
void CCompressedStaticFullVector3::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1125
	DecodeContainer_t* pContainer; // 1126
	byte* pData; // 1129
	{
		int i; // 1130
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1130
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
				int i);  // 1132
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 1132
		Vector::operator=(
				const Vector& vOther);  // 1132
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1122
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 1125
	DecodeContainer_t::pData(); // 1129
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 797
	CCompressedAnim<Vector>::Cleanup(); // 1136
} /* size: 222, variables: 3, inline expansions: 8 (101 bytes) */

// <00D1051E> ../public/animationsystem/compression.h:1120
// variables: 4
void CCompressedStaticFullVector3::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1125
	DecodeContainer_t* pContainer; // 1126
	byte* pData; // 1129
	{
		int i; // 1130
	}
} /* size: 0, variables: 3 */

// <025D6776> ../public/animationsystem/compression.h:1140
// variables: 3
// function calls: 3
void CCompressedStaticFullVector3::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector* pValues; // 1142
	int nCount; // 1143
	const Vector* pFrameData; // 1145
	DecodeContainer_t::pData(); // 1145
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1147
} /* size: 43, variables: 3, inline expansions: 3 (25 bytes) */

// <00D104B8> ../public/animationsystem/compression.h:1140
// variables: 3
void CCompressedStaticFullVector3::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector* pValues; // 1142
	int nCount; // 1143
	const Vector* pFrameData; // 1145
} /* size: 0, variables: 3 */

// <025D66D5> ../public/animationsystem/compression.h:1165
void CCompressedAnimVector3::CCompressedAnimVector3()
{
} /* size: 0 */

// <025D66B8> ../public/animationsystem/compression.h:1165
inline void CCompressedAnimVector3::CCompressedAnimVector3()
{
} /* size: 0 */

// <025A2A58> ../public/animationsystem/compression.h:1165
// function calls: 27
void CCompressedAnimVector3::~CCompressedAnimVector3()
{
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 560
	ValidateAlignment<CUtlVector<Vector> >(void); // 508
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Vector>::~CCompressedAnim(); // 1165
} /* size: 134, inline expansions: 27 (525 bytes) */

// <025A29CA> ../public/animationsystem/compression.h:1165
// function call: 1
void CCompressedAnimVector3::~CCompressedAnimVector3()
{
	CCompressedAnimVector3::~CCompressedAnimVector3(); // 1165
} /* size: 46, inline expansions: 1 (19 bytes) */

// <025A29AD> ../public/animationsystem/compression.h:1165
inline void CCompressedAnimVector3::~CCompressedAnimVector3()
{
} /* size: 0 */

// <00C204C8> ../public/animationsystem/compression.h:1165
void CCompressedAnimVector3::~CCompressedAnimVector3()
{
} /* size: 0 */

// <00C0F3E8> ../public/animationsystem/compression.h:1165
// member functions: 22
// member variable: 1
// vtable entries: 7
// class size: 104
class CCompressedAnimVector3 : public CCompressedAnim<Vector> {
public:
	/* class CCompressedAnim<Vector> <ancestor>; */ /* 0 104 */
	void CCompressedAnimVector3(CCompressedAnimVector3* , CCompressedAnimVector3& );
	void CCompressedAnimVector3(CCompressedAnimVector3* , const CCompressedAnimVector3& );
	void CCompressedAnimVector3(CCompressedAnimVector3* );
	/* ../public/animationsystem/compression.h:1168 */
	virtual const char* GetName(const CCompressedAnimVector3* );
	/* ../public/animationsystem/compression.h:1168 */
	virtual const int GetFieldType(const CCompressedAnimVector3* );
	/* ../public/animationsystem/compression.h:1168 */
	virtual const int GetFlags(const CCompressedAnimVector3* );
	/* ../public/animationsystem/compression.h:1168 */
	virtual ICompressorService* Instantiate(const CCompressedAnimVector3* );
	/* ../public/animationsystem/compression.h:1170 */
	virtual bool CanEncode(CCompressedAnimVector3* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , const Vector& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:1189 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnimVector3* );
	/* ../public/animationsystem/compression.h:1212 */
	virtual bool DecodeFrame(const CCompressedAnimVector3* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedAnimVector3(CCompressedAnimVector3* );
	void CCompressedAnimVector3(class CCompressedAnimVector3 *, class CCompressedAnimVector3 &); /* linkage=_ZN22CCompressedAnimVector3C4EOS_ */
	void CCompressedAnimVector3(class CCompressedAnimVector3 *, const class CCompressedAnimVector3  &); /* linkage=_ZN22CCompressedAnimVector3C4ERKS_ */
	void CCompressedAnimVector3(class CCompressedAnimVector3 *); /* linkage=_ZN22CCompressedAnimVector3C4Ev */
	virtual const char  * GetName(const class CCompressedAnimVector3  *); /* linkage=_ZNK22CCompressedAnimVector37GetNameEv */
	virtual const int  GetFieldType(const class CCompressedAnimVector3  *); /* linkage=_ZNK22CCompressedAnimVector312GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedAnimVector3  *); /* linkage=_ZNK22CCompressedAnimVector38GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedAnimVector3  *); /* linkage=_ZNK22CCompressedAnimVector311InstantiateEv */
	virtual bool CanEncode(class CCompressedAnimVector3 *, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, const class Vector  &, enum AnimCompressEnable_t); /* linkage=_ZN22CCompressedAnimVector39CanEncodeER10CUtlVectorI6Vector10CUtlMemoryIS1_iEERKS1_20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnimVector3 *); /* linkage=_ZN22CCompressedAnimVector315CreateContainerEv */
	virtual bool DecodeFrame(const class CCompressedAnimVector3  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK22CCompressedAnimVector311DecodeFrameEPK17DecodeContainer_tiPv */
	virtual void ~CCompressedAnimVector3(class CCompressedAnimVector3 *); /* linkage=_ZN22CCompressedAnimVector3D4Ev */
};

// <025D6748> ../public/animationsystem/compression.h:1168
void CCompressedAnimVector3::GetName()
{
} /* size: 12 */

// <025D671A> ../public/animationsystem/compression.h:1168
void CCompressedAnimVector3::GetFieldType()
{
} /* size: 10 */

// <025D66EC> ../public/animationsystem/compression.h:1168
void CCompressedAnimVector3::GetFlags()
{
} /* size: 10 */

// <025D62D5> ../public/animationsystem/compression.h:1168
// function calls: 18
void CCompressedAnimVector3::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 582
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 582
	CCompressedAnim<Vector>::CCompressedAnim(); // 1165
	CCompressedAnimVector3::CCompressedAnimVector3(); // 1168
} /* size: 123, inline expansions: 18 (407 bytes) */

// <00D10424> ../public/animationsystem/compression.h:1168
void CCompressedAnimVector3::Instantiate()
{
} /* size: 0 */

// <025D5B5D> ../public/animationsystem/compression.h:1170
// variables: 21
// function calls: 29
void CCompressedAnimVector3::CanEncode(CUtlVector<Vector, CUtlMemory<Vector, int> >& values, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	Vector48 compressed; // 1175
	Vector decoded; // 1176
	{
		int i; // 1177
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1177
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		IsInfinity(union float16bits in); // 631
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 717
		Vector::Vector(); // 715
		IsInfinity(union float16bits in); // 631
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 718
		IsInfinity(union float16bits in); // 631
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 719
		Vector48::operator Vector(); // 1180
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 1179
		float16::SetFloat(
			float in);  // 706
		float16::SetFloat(
			float in);  // 707
		float16::SetFloat(
			float in);  // 708
		Vector48::operator=(
				const Vector& vOther);  // 1179
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1183
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1183
	}
	Vector48::Vector48(); // 1175
	Vector::Vector(); // 1176
} /* size: 817, variables: 2, inline expansions: 2 (0 bytes) */

// <00D103BE> ../public/animationsystem/compression.h:1170
// variables: 3
void CCompressedAnimVector3::CanEncode(CUtlVector<Vector, CUtlMemory<Vector, int> >& values, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	Vector48 compressed; // 1175
	Vector decoded; // 1176
	{
		int i; // 1177
	}
} /* size: 0, variables: 2 */

// <025D5463> ../public/animationsystem/compression.h:1189
// variables: 11
// function calls: 26
void CCompressedAnimVector3::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1194
	DecodeContainer_t* pContainer; // 1195
	byte* pData; // 1198
	{
		int iFrame; // 1199
		{
			int i; // 1201
			{
				int new_exp; // 586
				{
					unsigned int exp_val; // 599
				}
			}
			ConvertFloatTo16bits(float input); // 481
			float16::SetFloat(
				float in);  // 706
			{
				int new_exp; // 586
				{
					unsigned int exp_val; // 599
				}
			}
			ConvertFloatTo16bits(float input); // 481
			float16::SetFloat(
				float in);  // 707
			{
				int new_exp; // 586
				{
					unsigned int exp_val; // 599
				}
			}
			ConvertFloatTo16bits(float input); // 481
			float16::SetFloat(
				float in);  // 708
			Vector48::operator=(
					const Vector& vOther);  // 1203
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1201
			CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
					int i);  // 1203
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1203
		}
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
				int i);  // 1199
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1199
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1191
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 1194
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int i);  // 1195
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1195
	DecodeContainer_t::pData(); // 1198
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 797
	CCompressedAnim<Vector>::Cleanup(); // 1208
} /* size: 1117, variables: 3, inline expansions: 11 (92 bytes) */

// <00D10363> ../public/animationsystem/compression.h:1189
// variables: 5
void CCompressedAnimVector3::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1194
	DecodeContainer_t* pContainer; // 1195
	byte* pData; // 1198
	{
		int iFrame; // 1199
		{
			int i; // 1201
		}
	}
} /* size: 0, variables: 3 */

// <025D5048> ../public/animationsystem/compression.h:1212
// variables: 22
// function calls: 13
void CCompressedAnimVector3::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector* pValues; // 1214
	int nCount; // 1215
	const Vector48* pFrameData; // 1217
	{
		int i; // 1220
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		IsInfinity(union float16bits in); // 631
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 717
		IsInfinity(union float16bits in); // 631
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 718
		IsInfinity(union float16bits in); // 631
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 719
		Vector::Vector(); // 715
		Vector48::operator Vector(); // 1222
		Vector::operator=(
				const Vector& vOther);  // 1222
	}
	DecodeContainer_t::pData(); // 1217
} /* size: 742, variables: 3, inline expansions: 1 (7 bytes) */

// <00D102F0> ../public/animationsystem/compression.h:1212
// variables: 4
void CCompressedAnimVector3::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector* pValues; // 1214
	int nCount; // 1215
	const Vector48* pFrameData; // 1217
	{
		int i; // 1220
	}
} /* size: 0, variables: 3 */

// <025D4FA7> ../public/animationsystem/compression.h:1238
void CCompressedDeltaVector3::CCompressedDeltaVector3()
{
} /* size: 0 */

// <025D4F8A> ../public/animationsystem/compression.h:1238
inline void CCompressedDeltaVector3::CCompressedDeltaVector3()
{
} /* size: 0 */

// <025A300E> ../public/animationsystem/compression.h:1238
// function calls: 27
void CCompressedDeltaVector3::~CCompressedDeltaVector3()
{
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 560
	ValidateAlignment<CUtlVector<Vector> >(void); // 508
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Vector>::~CCompressedAnim(); // 1238
} /* size: 134, inline expansions: 27 (525 bytes) */

// <025A2F80> ../public/animationsystem/compression.h:1238
// function call: 1
void CCompressedDeltaVector3::~CCompressedDeltaVector3()
{
	CCompressedDeltaVector3::~CCompressedDeltaVector3(); // 1238
} /* size: 46, inline expansions: 1 (19 bytes) */

// <025A2F63> ../public/animationsystem/compression.h:1238
inline void CCompressedDeltaVector3::~CCompressedDeltaVector3()
{
} /* size: 0 */

// <00C20513> ../public/animationsystem/compression.h:1238
void CCompressedDeltaVector3::~CCompressedDeltaVector3()
{
} /* size: 0 */

// <00C0F1E9> ../public/animationsystem/compression.h:1238
// member functions: 22
// member variable: 1
// vtable entries: 7
// class size: 104
class CCompressedDeltaVector3 : public CCompressedAnim<Vector> {
public:
	/* class CCompressedAnim<Vector> <ancestor>; */ /* 0 104 */
	void CCompressedDeltaVector3(CCompressedDeltaVector3* , CCompressedDeltaVector3& );
	void CCompressedDeltaVector3(CCompressedDeltaVector3* , const CCompressedDeltaVector3& );
	void CCompressedDeltaVector3(CCompressedDeltaVector3* );
	/* ../public/animationsystem/compression.h:1241 */
	virtual const char* GetName(const CCompressedDeltaVector3* );
	/* ../public/animationsystem/compression.h:1241 */
	virtual const int GetFieldType(const CCompressedDeltaVector3* );
	/* ../public/animationsystem/compression.h:1241 */
	virtual const int GetFlags(const CCompressedDeltaVector3* );
	/* ../public/animationsystem/compression.h:1241 */
	virtual ICompressorService* Instantiate(const CCompressedDeltaVector3* );
	/* ../public/animationsystem/compression.h:1243 */
	virtual bool CanEncode(CCompressedDeltaVector3* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , const Vector& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:1262 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedDeltaVector3* );
	/* ../public/animationsystem/compression.h:1290 */
	virtual bool DecodeFrame(const CCompressedDeltaVector3* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedDeltaVector3(CCompressedDeltaVector3* );
	void CCompressedDeltaVector3(class CCompressedDeltaVector3 *, class CCompressedDeltaVector3 &); /* linkage=_ZN23CCompressedDeltaVector3C4EOS_ */
	void CCompressedDeltaVector3(class CCompressedDeltaVector3 *, const class CCompressedDeltaVector3  &); /* linkage=_ZN23CCompressedDeltaVector3C4ERKS_ */
	void CCompressedDeltaVector3(class CCompressedDeltaVector3 *); /* linkage=_ZN23CCompressedDeltaVector3C4Ev */
	virtual const char  * GetName(const class CCompressedDeltaVector3  *); /* linkage=_ZNK23CCompressedDeltaVector37GetNameEv */
	virtual const int  GetFieldType(const class CCompressedDeltaVector3  *); /* linkage=_ZNK23CCompressedDeltaVector312GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedDeltaVector3  *); /* linkage=_ZNK23CCompressedDeltaVector38GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedDeltaVector3  *); /* linkage=_ZNK23CCompressedDeltaVector311InstantiateEv */
	virtual bool CanEncode(class CCompressedDeltaVector3 *, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, const class Vector  &, enum AnimCompressEnable_t); /* linkage=_ZN23CCompressedDeltaVector39CanEncodeER10CUtlVectorI6Vector10CUtlMemoryIS1_iEERKS1_20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedDeltaVector3 *); /* linkage=_ZN23CCompressedDeltaVector315CreateContainerEv */
	virtual bool DecodeFrame(const class CCompressedDeltaVector3  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK23CCompressedDeltaVector311DecodeFrameEPK17DecodeContainer_tiPv */
	virtual void ~CCompressedDeltaVector3(class CCompressedDeltaVector3 *); /* linkage=_ZN23CCompressedDeltaVector3D4Ev */
};

// <025D501A> ../public/animationsystem/compression.h:1241
void CCompressedDeltaVector3::GetName()
{
} /* size: 12 */

// <025D4FEC> ../public/animationsystem/compression.h:1241
void CCompressedDeltaVector3::GetFieldType()
{
} /* size: 10 */

// <025D4FBE> ../public/animationsystem/compression.h:1241
void CCompressedDeltaVector3::GetFlags()
{
} /* size: 10 */

// <025D4BA7> ../public/animationsystem/compression.h:1241
// function calls: 18
void CCompressedDeltaVector3::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 582
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 582
	CCompressedAnim<Vector>::CCompressedAnim(); // 1238
	CCompressedDeltaVector3::CCompressedDeltaVector3(); // 1241
} /* size: 123, inline expansions: 18 (407 bytes) */

// <00D1025C> ../public/animationsystem/compression.h:1241
void CCompressedDeltaVector3::Instantiate()
{
} /* size: 0 */

// <025D432A> ../public/animationsystem/compression.h:1243
// variables: 21
// function calls: 35
void CCompressedDeltaVector3::CanEncode(CUtlVector<Vector, CUtlMemory<Vector, int> >& values, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	Vector48 compressed; // 1248
	Vector decoded; // 1249
	{
		int i; // 1250
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1250
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		IsInfinity(union float16bits in); // 631
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 717
		Vector::Vector(); // 715
		IsInfinity(union float16bits in); // 631
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 718
		IsInfinity(union float16bits in); // 631
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 719
		Vector48::operator Vector(); // 1253
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 1252
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1252
		float16::SetFloat(
			float in);  // 706
		float16::SetFloat(
			float in);  // 707
		float16::SetFloat(
			float in);  // 708
		Vector48::operator=(
				const Vector& vOther);  // 1252
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1253
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 1256
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1256
	}
	Vector48::Vector48(); // 1248
	Vector::Vector(); // 1249
} /* size: 961, variables: 2, inline expansions: 2 (0 bytes) */

// <00D101F6> ../public/animationsystem/compression.h:1243
// variables: 3
void CCompressedDeltaVector3::CanEncode(CUtlVector<Vector, CUtlMemory<Vector, int> >& values, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	Vector48 compressed; // 1248
	Vector decoded; // 1249
	{
		int i; // 1250
	}
} /* size: 0, variables: 2 */

// <025D3991> ../public/animationsystem/compression.h:1262
// variables: 12
// function calls: 37
void CCompressedDeltaVector3::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1267
	DecodeContainer_t* pContainer; // 1268
	byte* pData; // 1271
	{
		int i; // 1272
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1272
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
				int i);  // 1274
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 1274
		Vector::operator=(
				const Vector& vOther);  // 1274
	}
	{
		int iFrame; // 1277
		{
			int i; // 1279
			{
				int new_exp; // 586
				{
					unsigned int exp_val; // 599
				}
			}
			ConvertFloatTo16bits(float input); // 481
			float16::SetFloat(
				float in);  // 706
			{
				int new_exp; // 586
				{
					unsigned int exp_val; // 599
				}
			}
			ConvertFloatTo16bits(float input); // 481
			float16::SetFloat(
				float in);  // 707
			{
				int new_exp; // 586
				{
					unsigned int exp_val; // 599
				}
			}
			ConvertFloatTo16bits(float input); // 481
			float16::SetFloat(
				float in);  // 708
			Vector48::operator=(
					const Vector& vOther);  // 1281
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1279
			CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
					int i);  // 1281
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1281
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1281
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 1281
		}
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
				int i);  // 1277
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1277
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1264
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 1267
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int i);  // 1268
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1268
	DecodeContainer_t::pData(); // 1271
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 797
	CCompressedAnim<Vector>::Cleanup(); // 1286
} /* size: 1181, variables: 3, inline expansions: 11 (86 bytes) */

// <00D1018A> ../public/animationsystem/compression.h:1262
// variables: 6
void CCompressedDeltaVector3::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1267
	DecodeContainer_t* pContainer; // 1268
	byte* pData; // 1271
	{
		int i; // 1272
	}
	{
		int iFrame; // 1277
		{
			int i; // 1279
		}
	}
} /* size: 0, variables: 3 */

// <025D3446> ../public/animationsystem/compression.h:1290
// variables: 23
// function calls: 18
void CCompressedDeltaVector3::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector* pValues; // 1292
	int nCount; // 1293
	const Vector* pReferenceData; // 1295
	const Vector48* pFrameData; // 1296
	{
		int i; // 1299
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		IsInfinity(union float16bits in); // 631
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 717
		IsInfinity(union float16bits in); // 631
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 718
		IsInfinity(union float16bits in); // 631
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 719
		Vector::Vector(); // 715
		Vector48::operator Vector(); // 1302
		Vector::operator+=(
				const Vector& v);  // 1302
		_CUnalignedPointer_Base<const Vector>::_Initialize(
				const Vector* pOriginal);  // 145
		CUnalignedPointer<const Vector>::CUnalignedPointer(
					Pointer_t pOriginal);  // 1301
		Vector::operator=(
				const Vector& vOther);  // 124
		_CUnalignedPointer_Base<const Vector>::CopyTo(
			_Unaligned_Container_Pointer pDest);  // 179
		CUnalignedPointer<const Vector>::CopyTo(
			V_remove_const* pDest);  // 1301
	}
	DecodeContainer_t::pData(); // 1295
} /* size: 806, variables: 4, inline expansions: 1 (15 bytes) */

// <00D1010A> ../public/animationsystem/compression.h:1290
// variables: 5
void CCompressedDeltaVector3::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector* pValues; // 1292
	int nCount; // 1293
	const Vector* pReferenceData; // 1295
	const Vector48* pFrameData; // 1296
	{
		int i; // 1299
	}
} /* size: 0, variables: 4 */

// <025D33A5> ../public/animationsystem/compression.h:1318
void CCompressedFullVector3::CCompressedFullVector3()
{
} /* size: 0 */

// <025D3388> ../public/animationsystem/compression.h:1318
inline void CCompressedFullVector3::CCompressedFullVector3()
{
} /* size: 0 */

// <025A35C4> ../public/animationsystem/compression.h:1318
// function calls: 27
void CCompressedFullVector3::~CCompressedFullVector3()
{
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 560
	ValidateAlignment<CUtlVector<Vector> >(void); // 508
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Vector>::~CCompressedAnim(); // 1318
} /* size: 134, inline expansions: 27 (525 bytes) */

// <025A3536> ../public/animationsystem/compression.h:1318
// function call: 1
void CCompressedFullVector3::~CCompressedFullVector3()
{
	CCompressedFullVector3::~CCompressedFullVector3(); // 1318
} /* size: 46, inline expansions: 1 (19 bytes) */

// <025A3519> ../public/animationsystem/compression.h:1318
inline void CCompressedFullVector3::~CCompressedFullVector3()
{
} /* size: 0 */

// <00C2055E> ../public/animationsystem/compression.h:1318
void CCompressedFullVector3::~CCompressedFullVector3()
{
} /* size: 0 */

// <00C0EFEA> ../public/animationsystem/compression.h:1318
// member functions: 22
// member variable: 1
// vtable entries: 7
// class size: 104
class CCompressedFullVector3 : public CCompressedAnim<Vector> {
public:
	/* class CCompressedAnim<Vector> <ancestor>; */ /* 0 104 */
	void CCompressedFullVector3(CCompressedFullVector3* , CCompressedFullVector3& );
	void CCompressedFullVector3(CCompressedFullVector3* , const CCompressedFullVector3& );
	void CCompressedFullVector3(CCompressedFullVector3* );
	/* ../public/animationsystem/compression.h:1321 */
	virtual const char* GetName(const CCompressedFullVector3* );
	/* ../public/animationsystem/compression.h:1321 */
	virtual const int GetFieldType(const CCompressedFullVector3* );
	/* ../public/animationsystem/compression.h:1321 */
	virtual const int GetFlags(const CCompressedFullVector3* );
	/* ../public/animationsystem/compression.h:1321 */
	virtual ICompressorService* Instantiate(const CCompressedFullVector3* );
	/* ../public/animationsystem/compression.h:1323 */
	virtual bool CanEncode(CCompressedFullVector3* , CUtlVector<Vector, CUtlMemory<Vector, int> >& , const Vector& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:1328 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedFullVector3* );
	/* ../public/animationsystem/compression.h:1351 */
	virtual bool DecodeFrame(const CCompressedFullVector3* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedFullVector3(CCompressedFullVector3* );
	void CCompressedFullVector3(class CCompressedFullVector3 *, class CCompressedFullVector3 &); /* linkage=_ZN22CCompressedFullVector3C4EOS_ */
	void CCompressedFullVector3(class CCompressedFullVector3 *, const class CCompressedFullVector3  &); /* linkage=_ZN22CCompressedFullVector3C4ERKS_ */
	void CCompressedFullVector3(class CCompressedFullVector3 *); /* linkage=_ZN22CCompressedFullVector3C4Ev */
	virtual const char  * GetName(const class CCompressedFullVector3  *); /* linkage=_ZNK22CCompressedFullVector37GetNameEv */
	virtual const int  GetFieldType(const class CCompressedFullVector3  *); /* linkage=_ZNK22CCompressedFullVector312GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedFullVector3  *); /* linkage=_ZNK22CCompressedFullVector38GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedFullVector3  *); /* linkage=_ZNK22CCompressedFullVector311InstantiateEv */
	virtual bool CanEncode(class CCompressedFullVector3 *, class CUtlVector<Vector, CUtlMemory<Vector, int> > &, const class Vector  &, enum AnimCompressEnable_t); /* linkage=_ZN22CCompressedFullVector39CanEncodeER10CUtlVectorI6Vector10CUtlMemoryIS1_iEERKS1_20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedFullVector3 *); /* linkage=_ZN22CCompressedFullVector315CreateContainerEv */
	virtual bool DecodeFrame(const class CCompressedFullVector3  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK22CCompressedFullVector311DecodeFrameEPK17DecodeContainer_tiPv */
	virtual void ~CCompressedFullVector3(class CCompressedFullVector3 *); /* linkage=_ZN22CCompressedFullVector3D4Ev */
};

// <025D33EA> ../public/animationsystem/compression.h:1321
void CCompressedFullVector3::GetFieldType()
{
} /* size: 10 */

// <025D33BC> ../public/animationsystem/compression.h:1321
void CCompressedFullVector3::GetFlags()
{
} /* size: 10 */

// <025D2FA5> ../public/animationsystem/compression.h:1321
// function calls: 18
void CCompressedFullVector3::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 582
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 582
	CCompressedAnim<Vector>::CCompressedAnim(); // 1318
	CCompressedFullVector3::CCompressedFullVector3(); // 1321
} /* size: 123, inline expansions: 18 (407 bytes) */

// <00D10076> ../public/animationsystem/compression.h:1321
void CCompressedFullVector3::Instantiate()
{
} /* size: 0 */

// <025D2F4A> ../public/animationsystem/compression.h:1323
void CCompressedFullVector3::CanEncode(CUtlVector<Vector, CUtlMemory<Vector, int> >& values, const Vector& reference, AnimCompressEnable_t eAnimCompressEnable)
{
} /* size: 10 */

// <025D2A38> ../public/animationsystem/compression.h:1328
// variables: 5
// function calls: 20
void CCompressedFullVector3::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1333
	DecodeContainer_t* pContainer; // 1334
	byte* pData; // 1337
	{
		int iFrame; // 1338
		{
			int i; // 1340
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1340
			CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
					int i);  // 1342
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1342
			Vector::operator=(
					const Vector& vOther);  // 1342
		}
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
				int i);  // 1338
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1338
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1330
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 1333
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int i);  // 1334
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1334
	DecodeContainer_t::pData(); // 1337
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 797
	CCompressedAnim<Vector>::Cleanup(); // 1347
} /* size: 311, variables: 3, inline expansions: 11 (85 bytes) */

// <00D0FFDC> ../public/animationsystem/compression.h:1328
// variables: 5
void CCompressedFullVector3::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1333
	DecodeContainer_t* pContainer; // 1334
	byte* pData; // 1337
	{
		int iFrame; // 1338
		{
			int i; // 1340
		}
	}
} /* size: 0, variables: 3 */

// <025D28BE> ../public/animationsystem/compression.h:1351
// variables: 3
// function calls: 3
void CCompressedFullVector3::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector* pValues; // 1353
	int nCount; // 1354
	const Vector* pFrameData; // 1356
	DecodeContainer_t::pData(); // 1356
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1359
} /* size: 62, variables: 3, inline expansions: 3 (10 bytes) */

// <00D0FF76> ../public/animationsystem/compression.h:1351
// variables: 3
void CCompressedFullVector3::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Vector* pValues; // 1353
	int nCount; // 1354
	const Vector* pFrameData; // 1356
} /* size: 0, variables: 3 */

// <025D23E0> ../public/animationsystem/compression.h:1377
void CCompressedReferenceQuaternion::CCompressedReferenceQuaternion()
{
} /* size: 0 */

// <025D23C3> ../public/animationsystem/compression.h:1377
inline void CCompressedReferenceQuaternion::CCompressedReferenceQuaternion()
{
} /* size: 0 */

// <025A4129> ../public/animationsystem/compression.h:1377
// function calls: 27
void CCompressedReferenceQuaternion::~CCompressedReferenceQuaternion()
{
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 560
	ValidateAlignment<CUtlVector<Quaternion> >(void); // 508
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quate this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Quaternion>::~CCompressedAnim(); // 1377
} /* size: 134, inline expansions: 27 (525 bytes) */

// <025A3AEC> ../public/animationsystem/compression.h:1377
// function calls: 32
void CCompressedReferenceQuaternion::~CCompressedReferenceQuaternion()
{
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 560
	ValidateAlignment<CUtlVector<Quaternion> >(void); // 508
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quate this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<Quaternion>::~CCompressedAnim(); // 1377
	CCompressedReferenceQuaternion::~CCompressedReferenceQuaternion(); // 1377
} /* size: 136, inline expansions: 32 (597 bytes) */

// <025A3ACF> ../public/animationsystem/compression.h:1377
inline void CCompressedReferenceQuaternion::~CCompressedReferenceQuaternion()
{
} /* size: 0 */

// <00C205A9> ../public/animationsystem/compression.h:1377
void CCompressedReferenceQuaternion::~CCompressedReferenceQuaternion()
{
} /* size: 0 */

// <00C0EE0D> ../public/animationsystem/compression.h:1377
// member functions: 20
// member variable: 1
// vtable entries: 6
// class size: 104
class CCompressedReferenceQuaternion : public CCompressedAnim<Quaternion> {
public:
	/* class CCompressedAnim<Quaternion> <ancestor>; */ /* 0 104 */
	void CCompressedReferenceQuaternion(CCompressedReferenceQuaternion* , CCompressedReferenceQuaternion& );
	void CCompressedReferenceQuaternion(CCompressedReferenceQuaternion* , const CCompressedReferenceQuaternion& );
	void CCompressedReferenceQuaternion(CCompressedReferenceQuaternion* );
	/* ../public/animationsystem/compression.h:1380 */
	virtual const char* GetName(const CCompressedReferenceQuaternion* );
	/* ../public/animationsystem/compression.h:1380 */
	virtual const int GetFieldType(const CCompressedReferenceQuaternion* );
	/* ../public/animationsystem/compression.h:1380 */
	virtual const int GetFlags(const CCompressedReferenceQuaternion* );
	/* ../public/animationsystem/compression.h:1380 */
	virtual ICompressorService* Instantiate(const CCompressedReferenceQuaternion* );
	/* ../public/animationsystem/compression.h:1382 */
	virtual bool CanEncode(CCompressedReferenceQuaternion* , CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& , const Quaternion& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:1408 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedReferenceQuaternion* );
	virtual void ~CCompressedReferenceQuaternion(CCompressedReferenceQuaternion* );
	void CCompressedReferenceQuaternion(class CCompressedReferenceQuaternion *, class CCompressedReferenceQuaternion &); /* linkage=_ZN30CCompressedReferenceQuaternionC4EOS_ */
	void CCompressedReferenceQuaternion(class CCompressedReferenceQuaternion *, const class CCompressedReferenceQuaternion  &); /* linkage=_ZN30CCompressedReferenceQuaternionC4ERKS_ */
	void CCompressedReferenceQuaternion(class CCompressedReferenceQuaternion *); /* linkage=_ZN30CCompressedReferenceQuaternionC4Ev */
	virtual const char  * GetName(const class CCompressedReferenceQuaternion  *); /* linkage=_ZNK30CCompressedReferenceQuaternion7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedReferenceQuaternion  *); /* linkage=_ZNK30CCompressedReferenceQuaternion12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedReferenceQuaternion  *); /* linkage=_ZNK30CCompressedReferenceQuaternion8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedReferenceQuaternion  *); /* linkage=_ZNK30CCompressedReferenceQuaternion11InstantiateEv */
	virtual bool CanEncode(class CCompressedReferenceQuaternion *, class CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > &, const class Quaternion  &, enum AnimCompressEnable_t); /* linkage=_ZN30CCompressedReferenceQuaternion9CanEncodeER10CUtlVectorI10Quaternion10CUtlMemoryIS1_iEERKS1_20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedReferenceQuaternion *); /* linkage=_ZN30CCompressedReferenceQuaternion15CreateContainerEv */
	virtual void ~CCompressedReferenceQuaternion(class CCompressedReferenceQuaternion *); /* linkage=_ZN30CCompressedReferenceQuaternionD4Ev */
};

// <025D2890> ../public/animationsystem/compression.h:1380
void CCompressedReferenceQuaternion::GetName()
{
} /* size: 12 */

// <025D2862> ../public/animationsystem/compression.h:1380
void CCompressedReferenceQuaternion::GetFieldType()
{
} /* size: 10 */

// <025D2834> ../public/animationsystem/compression.h:1380
void CCompressedReferenceQuaternion::GetFlags()
{
} /* size: 7 */

// <025D1FE0> ../public/animationsystem/compression.h:1380
// function calls: 18
void CCompressedReferenceQuaternion::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quate this); // 582
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 582
	CCompressedAnim<Quaternion>::CCompressedAnim(); // 1377
	CCompressedReferenceQuaternion::CCompressedReferenceQuaternion(); // 1380
} /* size: 123, inline expansions: 18 (407 bytes) */

// <00D0FE2F> ../public/animationsystem/compression.h:1380
void CCompressedReferenceQuaternion::Instantiate()
{
} /* size: 0 */

// <025D1AF8> ../public/animationsystem/compression.h:1382
// variables: 6
// function calls: 16
void CCompressedReferenceQuaternion::CanEncode(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& values, const Quaternion& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		Quaternion48S compReference; // 1387
		{
			int i; // 1388
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 1388
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 328
			Quaternion48S::operator==(
					const Quaternion& vOther);  // 329
			Quaternion48S::operator!=(
					const Quaternion& vOther);  // 1390
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 1390
			Quaternion48S::Quaternion48S(
					const Quaternion& vOther);  // 1390
		}
		Quaternion48S::Quaternion48S(
				const Quaternion& vOther);  // 1387
	}
	{
		const Quaternion& v; // 1399
		CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& __for_range; // 40907
		iterator __for_begin; // 10728
		iterator __for_end; // 10728
		CUtlMemory<Quaternion, int>::Base(); // 112
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Base(); // 102
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::begin(); // 1399
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 104
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::end(); // 1399
		Quaternion48S::Quaternion48S(
				const Quaternion& vOther);  // 1401
		Quaternion::operator==(
				const Quaternion& src);  // 1943
		Quaternion::operator!=(
				const Quaternion& src);  // 1401
	}
} /* size: 348 */

// <00D0FDA2> ../public/animationsystem/compression.h:1382
// variables: 6
void CCompressedReferenceQuaternion::CanEncode(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& values, const Quaternion& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
		Quaternion48S compReference; // 1387
		{
			int i; // 1388
		}
	}
	{
		const Quaternion& v; // 1399
		CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& __for_range; // 62142
		iterator __for_begin; // 4438
		iterator __for_end; // 4438
	}
} /* size: 0 */

// <025D1A29> ../public/animationsystem/compression.h:1408
// function calls: 3
void CCompressedReferenceQuaternion::CreateContainer()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 797
	CCompressedAnim<Quaternion>::Cleanup(); // 1410
} /* size: 35, inline expansions: 3 (37 bytes) */

// <00D0FD8A> ../public/animationsystem/compression.h:1408
void CCompressedReferenceQuaternion::CreateContainer()
{
} /* size: 0 */

// <025D1988> ../public/animationsystem/compression.h:1420
void CCompressedStaticQuaternion::CCompressedStaticQuaternion()
{
} /* size: 0 */

// <025D196B> ../public/animationsystem/compression.h:1420
inline void CCompressedStaticQuaternion::CCompressedStaticQuaternion()
{
} /* size: 0 */

// <025A4C8E> ../public/animationsystem/compression.h:1420
// function calls: 27
void CCompressedStaticQuaternion::~CCompressedStaticQuaternion()
{
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 560
	ValidateAlignment<CUtlVector<Quaternion> >(void); // 508
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quate this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Quaternion>::~CCompressedAnim(); // 1420
} /* size: 134, inline expansions: 27 (525 bytes) */

// <025A4651> ../public/animationsystem/compression.h:1420
// function calls: 32
void CCompressedStaticQuaternion::~CCompressedStaticQuaternion()
{
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 560
	ValidateAlignment<CUtlVector<Quaternion> >(void); // 508
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quate this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<Quaternion>::~CCompressedAnim(); // 1420
	CCompressedStaticQuaternion::~CCompressedStaticQuaternion(); // 1420
} /* size: 136, inline expansions: 32 (597 bytes) */

// <025A4634> ../public/animationsystem/compression.h:1420
inline void CCompressedStaticQuaternion::~CCompressedStaticQuaternion()
{
} /* size: 0 */

// <00C205F4> ../public/animationsystem/compression.h:1420
void CCompressedStaticQuaternion::~CCompressedStaticQuaternion()
{
} /* size: 0 */

// <00C0EC0E> ../public/animationsystem/compression.h:1420
// member functions: 22
// member variable: 1
// vtable entries: 7
// class size: 104
class CCompressedStaticQuaternion : public CCompressedAnim<Quaternion> {
public:
	/* class CCompressedAnim<Quaternion> <ancestor>; */ /* 0 104 */
	void CCompressedStaticQuaternion(CCompressedStaticQuaternion* , CCompressedStaticQuaternion& );
	void CCompressedStaticQuaternion(CCompressedStaticQuaternion* , const CCompressedStaticQuaternion& );
	void CCompressedStaticQuaternion(CCompressedStaticQuaternion* );
	/* ../public/animationsystem/compression.h:1423 */
	virtual const char* GetName(const CCompressedStaticQuaternion* );
	/* ../public/animationsystem/compression.h:1423 */
	virtual const int GetFieldType(const CCompressedStaticQuaternion* );
	/* ../public/animationsystem/compression.h:1423 */
	virtual const int GetFlags(const CCompressedStaticQuaternion* );
	/* ../public/animationsystem/compression.h:1423 */
	virtual ICompressorService* Instantiate(const CCompressedStaticQuaternion* );
	/* ../public/animationsystem/compression.h:1425 */
	virtual bool CanEncode(CCompressedStaticQuaternion* , CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& , const Quaternion& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:1457 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedStaticQuaternion* );
	/* ../public/animationsystem/compression.h:1476 */
	virtual bool DecodeFrame(const CCompressedStaticQuaternion* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedStaticQuaternion(CCompressedStaticQuaternion* );
	void CCompressedStaticQuaternion(class CCompressedStaticQuaternion *, class CCompressedStaticQuaternion &); /* linkage=_ZN27CCompressedStaticQuaternionC4EOS_ */
	void CCompressedStaticQuaternion(class CCompressedStaticQuaternion *, const class CCompressedStaticQuaternion  &); /* linkage=_ZN27CCompressedStaticQuaternionC4ERKS_ */
	void CCompressedStaticQuaternion(class CCompressedStaticQuaternion *); /* linkage=_ZN27CCompressedStaticQuaternionC4Ev */
	virtual const char  * GetName(const class CCompressedStaticQuaternion  *); /* linkage=_ZNK27CCompressedStaticQuaternion7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedStaticQuaternion  *); /* linkage=_ZNK27CCompressedStaticQuaternion12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedStaticQuaternion  *); /* linkage=_ZNK27CCompressedStaticQuaternion8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedStaticQuaternion  *); /* linkage=_ZNK27CCompressedStaticQuaternion11InstantiateEv */
	virtual bool CanEncode(class CCompressedStaticQuaternion *, class CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > &, const class Quaternion  &, enum AnimCompressEnable_t); /* linkage=_ZN27CCompressedStaticQuaternion9CanEncodeER10CUtlVectorI10Quaternion10CUtlMemoryIS1_iEERKS1_20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedStaticQuaternion *); /* linkage=_ZN27CCompressedStaticQuaternion15CreateContainerEv */
	virtual bool DecodeFrame(const class CCompressedStaticQuaternion  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK27CCompressedStaticQuaternion11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual void ~CCompressedStaticQuaternion(class CCompressedStaticQuaternion *); /* linkage=_ZN27CCompressedStaticQuaternionD4Ev */
};

// <025D19FB> ../public/animationsystem/compression.h:1423
void CCompressedStaticQuaternion::GetName()
{
} /* size: 12 */

// <025D19CD> ../public/animationsystem/compression.h:1423
void CCompressedStaticQuaternion::GetFieldType()
{
} /* size: 10 */

// <025D199F> ../public/animationsystem/compression.h:1423
void CCompressedStaticQuaternion::GetFlags()
{
} /* size: 7 */

// <025D1588> ../public/animationsystem/compression.h:1423
// function calls: 18
void CCompressedStaticQuaternion::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quate this); // 582
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 582
	CCompressedAnim<Quaternion>::CCompressedAnim(); // 1420
	CCompressedStaticQuaternion::CCompressedStaticQuaternion(); // 1423
} /* size: 123, inline expansions: 18 (407 bytes) */

// <00D0FCF6> ../public/animationsystem/compression.h:1423
void CCompressedStaticQuaternion::Instantiate()
{
} /* size: 0 */

// <025D0D7C> ../public/animationsystem/compression.h:1425
// variables: 10
// function calls: 27
void CCompressedStaticQuaternion::CanEncode(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& values, const Quaternion& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 20704
	{
		int i; // 1427
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1429
		}
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 1427
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 2112
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 2112
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 2112
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 2112
		Quaternion::IsValid(); // 1429
		CUtlMemory<Quaternion, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
				int i);  // 1429
	}
	{
		Quaternion48S compReference; // 1435
		{
			int i; // 1436
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 328
			Quaternion48S::operator==(
					const Quaternion& vOther);  // 329
			Quaternion48S::operator!=(
					const Quaternion& vOther);  // 1438
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 1438
			Quaternion48S::Quaternion48S(
					const Quaternion& vOther);  // 1438
		}
		CUtlMemory<Quaternion, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
				int i);  // 1435
		Quaternion48S::Quaternion48S(
				const Quaternion& vOther);  // 1435
	}
	{
		const Quaternion  compReference; // 1446
		{
			const Quaternion& v; // 1447
			CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& __for_range; // 40907
			iterator __for_begin; // 10728
			iterator __for_end; // 10728
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::end(); // 1447
			Quaternion::operator==(
					const Quaternion& src);  // 1943
			Quaternion::operator!=(
					const Quaternion& src);  // 1449
			Quaternion48S::Quaternion48S(
					const Quaternion& vOther);  // 1449
		}
		CUtlMemory<Quaternion, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
				int i);  // 1446
	}
} /* size: 519, variables: 1 */

// <00D0FC29> ../public/animationsystem/compression.h:1425
// variables: 10
void CCompressedStaticQuaternion::CanEncode(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& values, const Quaternion& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21898
	{
		int i; // 1427
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1429
		}
	}
	{
		Quaternion48S compReference; // 1435
		{
			int i; // 1436
		}
	}
	{
		const Quaternion  compReference; // 1446
		{
			const Quaternion& v; // 1447
			CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& __for_range; // 62142
			iterator __for_begin; // 4438
			iterator __for_end; // 4438
		}
	}
} /* size: 0, variables: 1 */

// <025D07E2> ../public/animationsystem/compression.h:1457
// variables: 5
// function calls: 21
void CCompressedStaticQuaternion::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1462
	DecodeContainer_t* pContainer; // 1463
	byte* pData; // 1466
	{
		int i; // 1467
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1467
		CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
				int i);  // 1469
		CUtlMemory<Quaternion, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
				int i);  // 1469
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1459
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<Quaternion>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CCompressedAnim<Quaternion>::SetupContainer(
			CUtlBinaryBlock* pDestBlock,
			int nDataSize);  // 1463
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 1462
	DecodeContainer_t::pData(); // 1466
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 797
	CCompressedAnim<Quaternion>::Cleanup(); // 1472
} /* size: 277, variables: 3, inline expansions: 13 (222 bytes) */

// <00D0FBDD> ../public/animationsystem/compression.h:1457
// variables: 4
void CCompressedStaticQuaternion::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1462
	DecodeContainer_t* pContainer; // 1463
	byte* pData; // 1466
	{
		int i; // 1467
	}
} /* size: 0, variables: 3 */

// <025D06DF> ../public/animationsystem/compression.h:1476
// variables: 4
// function call: 1
void CCompressedStaticQuaternion::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Quaternion* pValues; // 1478
	int nCount; // 1479
	const Quaternion48S* pFrameData; // 1481
	{
		int i; // 1483
	}
	DecodeContainer_t::pData(); // 1481
} /* size: 95, variables: 3, inline expansions: 1 (20 bytes) */

// <00D0FB6A> ../public/animationsystem/compression.h:1476
// variables: 4
void CCompressedStaticQuaternion::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Quaternion* pValues; // 1478
	int nCount; // 1479
	const Quaternion48S* pFrameData; // 1481
	{
		int i; // 1483
	}
} /* size: 0, variables: 3 */

// <025D063E> ../public/animationsystem/compression.h:1499
void CCompressedAnimQuaternion::CCompressedAnimQuaternion()
{
} /* size: 0 */

// <025D0621> ../public/animationsystem/compression.h:1499
inline void CCompressedAnimQuaternion::CCompressedAnimQuaternion()
{
} /* size: 0 */

// <025A57F3> ../public/animationsystem/compression.h:1499
// function calls: 27
void CCompressedAnimQuaternion::~CCompressedAnimQuaternion()
{
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 560
	ValidateAlignment<CUtlVector<Quaternion> >(void); // 508
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quate this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Quaternion>::~CCompressedAnim(); // 1499
} /* size: 134, inline expansions: 27 (525 bytes) */

// <025A51B6> ../public/animationsystem/compression.h:1499
// function calls: 32
void CCompressedAnimQuaternion::~CCompressedAnimQuaternion()
{
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 560
	ValidateAlignment<CUtlVector<Quaternion> >(void); // 508
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quate this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<Quaternion>::~CCompressedAnim(); // 1499
	CCompressedAnimQuaternion::~CCompressedAnimQuaternion(); // 1499
} /* size: 136, inline expansions: 32 (597 bytes) */

// <025A5199> ../public/animationsystem/compression.h:1499
inline void CCompressedAnimQuaternion::~CCompressedAnimQuaternion()
{
} /* size: 0 */

// <00C2063F> ../public/animationsystem/compression.h:1499
void CCompressedAnimQuaternion::~CCompressedAnimQuaternion()
{
} /* size: 0 */

// <00C0EA0F> ../public/animationsystem/compression.h:1499
// member functions: 22
// member variable: 1
// vtable entries: 7
// class size: 104
class CCompressedAnimQuaternion : public CCompressedAnim<Quaternion> {
public:
	/* class CCompressedAnim<Quaternion> <ancestor>; */ /* 0 104 */
	void CCompressedAnimQuaternion(CCompressedAnimQuaternion* , CCompressedAnimQuaternion& );
	void CCompressedAnimQuaternion(CCompressedAnimQuaternion* , const CCompressedAnimQuaternion& );
	void CCompressedAnimQuaternion(CCompressedAnimQuaternion* );
	/* ../public/animationsystem/compression.h:1502 */
	virtual const char* GetName(const CCompressedAnimQuaternion* );
	/* ../public/animationsystem/compression.h:1502 */
	virtual const int GetFieldType(const CCompressedAnimQuaternion* );
	/* ../public/animationsystem/compression.h:1502 */
	virtual const int GetFlags(const CCompressedAnimQuaternion* );
	/* ../public/animationsystem/compression.h:1502 */
	virtual ICompressorService* Instantiate(const CCompressedAnimQuaternion* );
	/* ../public/animationsystem/compression.h:1504 */
	virtual bool CanEncode(CCompressedAnimQuaternion* , CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& , const Quaternion& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:1509 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedAnimQuaternion* );
	/* ../public/animationsystem/compression.h:1531 */
	virtual bool DecodeFrame(const CCompressedAnimQuaternion* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedAnimQuaternion(CCompressedAnimQuaternion* );
	void CCompressedAnimQuaternion(class CCompressedAnimQuaternion *, class CCompressedAnimQuaternion &); /* linkage=_ZN25CCompressedAnimQuaternionC4EOS_ */
	void CCompressedAnimQuaternion(class CCompressedAnimQuaternion *, const class CCompressedAnimQuaternion  &); /* linkage=_ZN25CCompressedAnimQuaternionC4ERKS_ */
	void CCompressedAnimQuaternion(class CCompressedAnimQuaternion *); /* linkage=_ZN25CCompressedAnimQuaternionC4Ev */
	virtual const char  * GetName(const class CCompressedAnimQuaternion  *); /* linkage=_ZNK25CCompressedAnimQuaternion7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedAnimQuaternion  *); /* linkage=_ZNK25CCompressedAnimQuaternion12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedAnimQuaternion  *); /* linkage=_ZNK25CCompressedAnimQuaternion8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedAnimQuaternion  *); /* linkage=_ZNK25CCompressedAnimQuaternion11InstantiateEv */
	virtual bool CanEncode(class CCompressedAnimQuaternion *, class CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > &, const class Quaternion  &, enum AnimCompressEnable_t); /* linkage=_ZN25CCompressedAnimQuaternion9CanEncodeER10CUtlVectorI10Quaternion10CUtlMemoryIS1_iEERKS1_20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedAnimQuaternion *); /* linkage=_ZN25CCompressedAnimQuaternion15CreateContainerEv */
	virtual bool DecodeFrame(const class CCompressedAnimQuaternion  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK25CCompressedAnimQuaternion11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual void ~CCompressedAnimQuaternion(class CCompressedAnimQuaternion *); /* linkage=_ZN25CCompressedAnimQuaternionD4Ev */
};

// <025D06B1> ../public/animationsystem/compression.h:1502
void CCompressedAnimQuaternion::GetName()
{
} /* size: 12 */

// <025D0683> ../public/animationsystem/compression.h:1502
void CCompressedAnimQuaternion::GetFieldType()
{
} /* size: 10 */

// <025D0655> ../public/animationsystem/compression.h:1502
void CCompressedAnimQuaternion::GetFlags()
{
} /* size: 10 */

// <025D023E> ../public/animationsystem/compression.h:1502
// function calls: 18
void CCompressedAnimQuaternion::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quate this); // 582
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 582
	CCompressedAnim<Quaternion>::CCompressedAnim(); // 1499
	CCompressedAnimQuaternion::CCompressedAnimQuaternion(); // 1502
} /* size: 123, inline expansions: 18 (407 bytes) */

// <00D0FAD6> ../public/animationsystem/compression.h:1502
void CCompressedAnimQuaternion::Instantiate()
{
} /* size: 0 */

// <025D01E3> ../public/animationsystem/compression.h:1504
void CCompressedAnimQuaternion::CanEncode(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& values, const Quaternion& reference, AnimCompressEnable_t eAnimCompressEnable)
{
} /* size: 11 */

// <025CFA39> ../public/animationsystem/compression.h:1509
// variables: 6
// function calls: 31
void CCompressedAnimQuaternion::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1514
	DecodeContainer_t* pContainer; // 1515
	byte* pData; // 1518
	{
		int iFrame; // 1519
		{
			int i; // 1521
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1521
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 392
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 393
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 394
			Quaternion48S::operator=(
					const Quaternion& vOther);  // 1523
			CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
					int i);  // 1523
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 1523
		}
		CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
				int i);  // 1519
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 1519
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1511
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 1514
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
			int i);  // 1515
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 1515
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<Quaternion>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CCompressedAnim<Quaternion>::SetupContainer(
			CUtlBinaryBlock* pDestBlock,
			int nDataSize);  // 1515
	DecodeContainer_t::pData(); // 1518
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 797
	CCompressedAnim<Quaternion>::Cleanup(); // 1527
} /* size: 817, variables: 3, inline expansions: 16 (246 bytes) */

// <00D0FA3C> ../public/animationsystem/compression.h:1509
// variables: 5
void CCompressedAnimQuaternion::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1514
	DecodeContainer_t* pContainer; // 1515
	byte* pData; // 1518
	{
		int iFrame; // 1519
		{
			int i; // 1521
		}
	}
} /* size: 0, variables: 3 */

// <025CF92A> ../public/animationsystem/compression.h:1531
// variables: 4
// function call: 1
void CCompressedAnimQuaternion::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Quaternion* pValues; // 1533
	int nCount; // 1534
	const Quaternion48S* pFrameData; // 1536
	{
		int i; // 1539
	}
	DecodeContainer_t::pData(); // 1536
} /* size: 118, variables: 3, inline expansions: 1 (0 bytes) */

// <00D0F9C9> ../public/animationsystem/compression.h:1531
// variables: 4
void CCompressedAnimQuaternion::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Quaternion* pValues; // 1533
	int nCount; // 1534
	const Quaternion48S* pFrameData; // 1536
	{
		int i; // 1539
	}
} /* size: 0, variables: 3 */

// <025CF889> ../public/animationsystem/compression.h:1556
void CCompressedFullQuaternion::CCompressedFullQuaternion()
{
} /* size: 0 */

// <025CF86C> ../public/animationsystem/compression.h:1556
inline void CCompressedFullQuaternion::CCompressedFullQuaternion()
{
} /* size: 0 */

// <025A6358> ../public/animationsystem/compression.h:1556
// function calls: 27
void CCompressedFullQuaternion::~CCompressedFullQuaternion()
{
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 560
	ValidateAlignment<CUtlVector<Quaternion> >(void); // 508
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quate this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Quaternion>::~CCompressedAnim(); // 1556
} /* size: 134, inline expansions: 27 (525 bytes) */

// <025A5D1B> ../public/animationsystem/compression.h:1556
// function calls: 32
void CCompressedFullQuaternion::~CCompressedFullQuaternion()
{
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 560
	ValidateAlignment<CUtlVector<Quaternion> >(void); // 508
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quate this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<Quaternion>::~CCompressedAnim(); // 1556
	CCompressedFullQuaternion::~CCompressedFullQuaternion(); // 1556
} /* size: 136, inline expansions: 32 (597 bytes) */

// <025A5CFE> ../public/animationsystem/compression.h:1556
inline void CCompressedFullQuaternion::~CCompressedFullQuaternion()
{
} /* size: 0 */

// <00C2068A> ../public/animationsystem/compression.h:1556
void CCompressedFullQuaternion::~CCompressedFullQuaternion()
{
} /* size: 0 */

// <00C0E810> ../public/animationsystem/compression.h:1556
// member functions: 22
// member variable: 1
// vtable entries: 7
// class size: 104
class CCompressedFullQuaternion : public CCompressedAnim<Quaternion> {
public:
	/* class CCompressedAnim<Quaternion> <ancestor>; */ /* 0 104 */
	void CCompressedFullQuaternion(CCompressedFullQuaternion* , CCompressedFullQuaternion& );
	void CCompressedFullQuaternion(CCompressedFullQuaternion* , const CCompressedFullQuaternion& );
	void CCompressedFullQuaternion(CCompressedFullQuaternion* );
	/* ../public/animationsystem/compression.h:1559 */
	virtual const char* GetName(const CCompressedFullQuaternion* );
	/* ../public/animationsystem/compression.h:1559 */
	virtual const int GetFieldType(const CCompressedFullQuaternion* );
	/* ../public/animationsystem/compression.h:1559 */
	virtual const int GetFlags(const CCompressedFullQuaternion* );
	/* ../public/animationsystem/compression.h:1559 */
	virtual ICompressorService* Instantiate(const CCompressedFullQuaternion* );
	/* ../public/animationsystem/compression.h:1561 */
	virtual bool CanEncode(CCompressedFullQuaternion* , CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& , const Quaternion& , AnimCompressEnable_t);
	/* ../public/animationsystem/compression.h:1567 */
	virtual CUtlBinaryBlock* CreateContainer(CCompressedFullQuaternion* );
	/* ../public/animationsystem/compression.h:1589 */
	virtual bool DecodeFrame(const CCompressedFullQuaternion* , const DecodeContainer_t* , int, void* );
	virtual void ~CCompressedFullQuaternion(CCompressedFullQuaternion* );
	void CCompressedFullQuaternion(class CCompressedFullQuaternion *, class CCompressedFullQuaternion &); /* linkage=_ZN25CCompressedFullQuaternionC4EOS_ */
	void CCompressedFullQuaternion(class CCompressedFullQuaternion *, const class CCompressedFullQuaternion  &); /* linkage=_ZN25CCompressedFullQuaternionC4ERKS_ */
	void CCompressedFullQuaternion(class CCompressedFullQuaternion *); /* linkage=_ZN25CCompressedFullQuaternionC4Ev */
	virtual const char  * GetName(const class CCompressedFullQuaternion  *); /* linkage=_ZNK25CCompressedFullQuaternion7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedFullQuaternion  *); /* linkage=_ZNK25CCompressedFullQuaternion12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedFullQuaternion  *); /* linkage=_ZNK25CCompressedFullQuaternion8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedFullQuaternion  *); /* linkage=_ZNK25CCompressedFullQuaternion11InstantiateEv */
	/* <25e023a> ../public/animationsystem/compression.h:1561 */
	virtual bool CanEncode(class CCompressedFullQuaternion *, class CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > &, const class Quaternion  &, enum AnimCompressEnable_t); /* linkage=_ZN25CCompressedFullQuaternion9CanEncodeER10CUtlVectorI10Quaternion10CUtlMemoryIS1_iEERKS1_20AnimCompressEnable_t */
	virtual class CUtlBinaryBlock * CreateContainer(class CCompressedFullQuaternion *); /* linkage=_ZN25CCompressedFullQuaternion15CreateContainerEv */
	virtual bool DecodeFrame(const class CCompressedFullQuaternion  *, const class DecodeContainer_t  *, int, void *); /* linkage=_ZNK25CCompressedFullQuaternion11DecodeFrameEPK17DecodeContainer_tiPv */
	virtual void ~CCompressedFullQuaternion(class CCompressedFullQuaternion *); /* linkage=_ZN25CCompressedFullQuaternionD4Ev */
};

// <025CF8FC> ../public/animationsystem/compression.h:1559
void CCompressedFullQuaternion::GetName()
{
} /* size: 12 */

// <025CF8CE> ../public/animationsystem/compression.h:1559
void CCompressedFullQuaternion::GetFieldType()
{
} /* size: 10 */

// <025CF8A0> ../public/animationsystem/compression.h:1559
void CCompressedFullQuaternion::GetFlags()
{
} /* size: 10 */

// <025CF489> ../public/animationsystem/compression.h:1559
// function calls: 18
void CCompressedFullQuaternion::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quate this); // 582
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 582
	CCompressedAnim<Quaternion>::CCompressedAnim(); // 1556
	CCompressedFullQuaternion::CCompressedFullQuaternion(); // 1559
} /* size: 123, inline expansions: 18 (407 bytes) */

// <00D0F935> ../public/animationsystem/compression.h:1559
void CCompressedFullQuaternion::Instantiate()
{
} /* size: 0 */

// <025E023A> ../public/animationsystem/compression.h:1561
// function call: 1
void CCompressedFullQuaternion::CanEncode(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& values, const Quaternion& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	{
	}
	CCompressedFullQuaternion::CanEncode(
			CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& values,
			const Quaternion& reference,
			AnimCompressEnable_t eAnimCompressEnable);  // 1561
} /* size: 42, inline expansions: 1 (17 bytes) */

// <025CF420> ../public/animationsystem/compression.h:1561
// variables: 2
inline void CCompressedFullQuaternion::CanEncode(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& values, const Quaternion& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 20704
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1563
	}
} /* size: 0, variables: 1 */

// <00D0F8D5> ../public/animationsystem/compression.h:1561
// variables: 2
inline void CCompressedFullQuaternion::CanEncode(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& values, const Quaternion& reference, AnimCompressEnable_t eAnimCompressEnable)
{
	const char   __FUNCTION__; // 21898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1563
	}
} /* size: 0, variables: 1 */

// <025CED38> ../public/animationsystem/compression.h:1567
// variables: 6
// function calls: 27
void CCompressedFullQuaternion::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1572
	DecodeContainer_t* pContainer; // 1573
	byte* pData; // 1576
	{
		int iFrame; // 1577
		{
			int i; // 1579
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1579
			CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
					int i);  // 1581
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 1581
		}
		CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
				int i);  // 1577
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 1577
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1569
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 1572
	CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >, CUtlMemory<CUtlVector<Quaternion, CUtlMemory<Q this,
			int i);  // 1573
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 1573
	CUtlMemory<unsigned char, int>::Base(); // 107
	CUtlBinaryBlock::Get(); // 632
	CCompressedAnim<Quaternion>::GetDecoderIndex(); // 634
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 635
	{
		int j; // 640
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 640
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 642
	}
	CCompressedAnim<Quaternion>::SetupContainer(
			CUtlBinaryBlock* pDestBlock,
			int nDataSize);  // 1573
	DecodeContainer_t::pData(); // 1576
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 796
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 797
	CCompressedAnim<Quaternion>::Cleanup(); // 1585
} /* size: 339, variables: 3, inline expansions: 16 (242 bytes) */

// <00D0F87A> ../public/animationsystem/compression.h:1567
// variables: 5
void CCompressedFullQuaternion::CreateContainer()
{
	CUtlBinaryBlock* pDestBlock; // 1572
	DecodeContainer_t* pContainer; // 1573
	byte* pData; // 1576
	{
		int iFrame; // 1577
		{
			int i; // 1579
		}
	}
} /* size: 0, variables: 3 */

// <025CEBBE> ../public/animationsystem/compression.h:1589
// variables: 3
// function calls: 3
void CCompressedFullQuaternion::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Quaternion* pValues; // 1591
	int nCount; // 1592
	const Quaternion* pFrameData; // 1594
	DecodeContainer_t::pData(); // 1594
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1597
} /* size: 61, variables: 3, inline expansions: 3 (22 bytes) */

// <00D0F814> ../public/animationsystem/compression.h:1589
// variables: 3
void CCompressedFullQuaternion::DecodeFrame(const DecodeContainer_t* pContainer, int iFrame, void* pData)
{
	Quaternion* pValues; // 1591
	int nCount; // 1592
	const Quaternion* pFrameData; // 1594
} /* size: 0, variables: 3 */

// <025CE1AC> ../public/animationsystem/compression.h:1614
void CCompressedReferenceInt::CCompressedReferenceInt()
{
} /* size: 0 */

// <025CE18F> ../public/animationsystem/compression.h:1614
inline void CCompressedReferenceInt::CCompressedReferenceInt()
{
} /* size: 0 */

// <025A6933> ../public/animationsystem/compression.h:1614
// function call: 1
void CCompressedReferenceInt::~CCompressedReferenceInt()
{
	CCompressedReference<int>::~CCompressedReference(); // 1614
} /* size: 19, inline expansions: 1 (15 bytes) */

// <025A6880> ../public/animationsystem/compression.h:1614
// function calls: 2
void CCompressedReferenceInt::~CCompressedReferenceInt()
{
	CCompressedReference<int>::~CCompressedReference(); // 1614
	CCompressedReferenceInt::~CCompressedReferenceInt(); // 1614
} /* size: 46, inline expansions: 2 (38 bytes) */

// <025A6863> ../public/animationsystem/compression.h:1614
inline void CCompressedReferenceInt::~CCompressedReferenceInt()
{
} /* size: 0 */

// <00C206D5> ../public/animationsystem/compression.h:1614
void CCompressedReferenceInt::~CCompressedReferenceInt()
{
} /* size: 0 */

// <00C0E578> ../public/animationsystem/compression.h:1614
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedReferenceInt : public CCompressedReference<int> {
public:
	/* class CCompressedReference<int> <ancestor>; */ /* 0 104 */
	void CCompressedReferenceInt(CCompressedReferenceInt* , CCompressedReferenceInt& );
	void CCompressedReferenceInt(CCompressedReferenceInt* , const CCompressedReferenceInt& );
	void CCompressedReferenceInt(CCompressedReferenceInt* );
	/* ../public/animationsystem/compression.h:1617 */
	virtual const char* GetName(const CCompressedReferenceInt* );
	/* ../public/animationsystem/compression.h:1617 */
	virtual const int GetFieldType(const CCompressedReferenceInt* );
	/* ../public/animationsystem/compression.h:1617 */
	virtual const int GetFlags(const CCompressedReferenceInt* );
	/* ../public/animationsystem/compression.h:1617 */
	virtual ICompressorService* Instantiate(const CCompressedReferenceInt* );
	virtual void ~CCompressedReferenceInt(CCompressedReferenceInt* );
	void CCompressedReferenceInt(class CCompressedReferenceInt *, class CCompressedReferenceInt &); /* linkage=_ZN23CCompressedReferenceIntC4EOS_ */
	void CCompressedReferenceInt(class CCompressedReferenceInt *, const class CCompressedReferenceInt  &); /* linkage=_ZN23CCompressedReferenceIntC4ERKS_ */
	void CCompressedReferenceInt(class CCompressedReferenceInt *); /* linkage=_ZN23CCompressedReferenceIntC4Ev */
	virtual const char  * GetName(const class CCompressedReferenceInt  *); /* linkage=_ZNK23CCompressedReferenceInt7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedReferenceInt  *); /* linkage=_ZNK23CCompressedReferenceInt12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedReferenceInt  *); /* linkage=_ZNK23CCompressedReferenceInt8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedReferenceInt  *); /* linkage=_ZNK23CCompressedReferenceInt11InstantiateEv */
	virtual void ~CCompressedReferenceInt(class CCompressedReferenceInt *); /* linkage=_ZN23CCompressedReferenceIntD4Ev */
};

// <025CEB90> ../public/animationsystem/compression.h:1617
void CCompressedReferenceInt::GetName()
{
} /* size: 12 */

// <025CEB62> ../public/animationsystem/compression.h:1617
void CCompressedReferenceInt::GetFieldType()
{
} /* size: 10 */

// <025CEB34> ../public/animationsystem/compression.h:1617
void CCompressedReferenceInt::GetFlags()
{
} /* size: 7 */

// <025CDD87> ../public/animationsystem/compression.h:1617
// function calls: 19
void CCompressedReferenceInt::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CCompressedAnim<int>::CCompressedAnim(); // 810
	CCompressedReference<int>::CCompressedReference(); // 1614
	CCompressedReferenceInt::CCompressedReferenceInt(); // 1617
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0F682> ../public/animationsystem/compression.h:1617
void CCompressedReferenceInt::Instantiate()
{
} /* size: 0 */

// <025CDC67> ../public/animationsystem/compression.h:1620
void CCompressedStaticInt::CCompressedStaticInt()
{
} /* size: 0 */

// <025CDC4A> ../public/animationsystem/compression.h:1620
inline void CCompressedStaticInt::CCompressedStaticInt()
{
} /* size: 0 */

// <025A6A7D> ../public/animationsystem/compression.h:1620
// function call: 1
void CCompressedStaticInt::~CCompressedStaticInt()
{
	CCompressedStatic<int, int>::~CCompressedStatic(); // 1620
} /* size: 19, inline expansions: 1 (15 bytes) */

// <025A69CA> ../public/animationsystem/compression.h:1620
// function calls: 2
void CCompressedStaticInt::~CCompressedStaticInt()
{
	CCompressedStatic<int, int>::~CCompressedStatic(); // 1620
	CCompressedStaticInt::~CCompressedStaticInt(); // 1620
} /* size: 46, inline expansions: 2 (38 bytes) */

// <00C20720> ../public/animationsystem/compression.h:1620
void CCompressedStaticInt::~CCompressedStaticInt()
{
} /* size: 0 */

// <00C0E2AC> ../public/animationsystem/compression.h:1620
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedStaticInt : public CCompressedStatic<int, int> {
public:
	/* class CCompressedStatic<int, int> <ancestor>; */ /* 0 104 */
	void CCompressedStaticInt(CCompressedStaticInt* , CCompressedStaticInt& );
	void CCompressedStaticInt(CCompressedStaticInt* , const CCompressedStaticInt& );
	void CCompressedStaticInt(CCompressedStaticInt* );
	/* ../public/animationsystem/compression.h:1623 */
	virtual const char* GetName(const CCompressedStaticInt* );
	/* ../public/animationsystem/compression.h:1623 */
	virtual const int GetFieldType(const CCompressedStaticInt* );
	/* ../public/animationsystem/compression.h:1623 */
	virtual const int GetFlags(const CCompressedStaticInt* );
	/* ../public/animationsystem/compression.h:1623 */
	virtual ICompressorService* Instantiate(const CCompressedStaticInt* );
	virtual void ~CCompressedStaticInt(CCompressedStaticInt* );
	void CCompressedStaticInt(class CCompressedStaticInt *, class CCompressedStaticInt &); /* linkage=_ZN20CCompressedStaticIntC4EOS_ */
	void CCompressedStaticInt(class CCompressedStaticInt *, const class CCompressedStaticInt  &); /* linkage=_ZN20CCompressedStaticIntC4ERKS_ */
	void CCompressedStaticInt(class CCompressedStaticInt *); /* linkage=_ZN20CCompressedStaticIntC4Ev */
	virtual const char  * GetName(const class CCompressedStaticInt  *); /* linkage=_ZNK20CCompressedStaticInt7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedStaticInt  *); /* linkage=_ZNK20CCompressedStaticInt12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedStaticInt  *); /* linkage=_ZNK20CCompressedStaticInt8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedStaticInt  *); /* linkage=_ZNK20CCompressedStaticInt11InstantiateEv */
	virtual void ~CCompressedStaticInt(class CCompressedStaticInt *); /* linkage=_ZN20CCompressedStaticIntD4Ev */
};

// <025CDD59> ../public/animationsystem/compression.h:1623
void CCompressedStaticInt::GetName()
{
} /* size: 12 */

// <025CDD2B> ../public/animationsystem/compression.h:1623
void CCompressedStaticInt::GetFieldType()
{
} /* size: 10 */

// <025CDCFD> ../public/animationsystem/compression.h:1623
void CCompressedStaticInt::GetFlags()
{
} /* size: 7 */

// <025CD842> ../public/animationsystem/compression.h:1623
// function calls: 19
void CCompressedStaticInt::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CCompressedAnim<int>::CCompressedAnim(); // 834
	CCompressedStatic<int, int>::CCompressedStatic(); // 1620
	CCompressedStaticInt::CCompressedStaticInt(); // 1623
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0F56F> ../public/animationsystem/compression.h:1623
void CCompressedStaticInt::Instantiate()
{
} /* size: 0 */

// <025CD722> ../public/animationsystem/compression.h:1626
void CCompressedStaticChar::CCompressedStaticChar()
{
} /* size: 0 */

// <025CD705> ../public/animationsystem/compression.h:1626
inline void CCompressedStaticChar::CCompressedStaticChar()
{
} /* size: 0 */

// <025A6BC7> ../public/animationsystem/compression.h:1626
// function call: 1
void CCompressedStaticChar::~CCompressedStaticChar()
{
	CCompressedStatic<int, char>::~CCompressedStatic(); // 1626
} /* size: 19, inline expansions: 1 (15 bytes) */

// <025A6B14> ../public/animationsystem/compression.h:1626
// function calls: 2
void CCompressedStaticChar::~CCompressedStaticChar()
{
	CCompressedStatic<int, char>::~CCompressedStatic(); // 1626
	CCompressedStaticChar::~CCompressedStaticChar(); // 1626
} /* size: 46, inline expansions: 2 (38 bytes) */

// <025A6AF7> ../public/animationsystem/compression.h:1626
inline void CCompressedStaticChar::~CCompressedStaticChar()
{
} /* size: 0 */

// <00C2076B> ../public/animationsystem/compression.h:1626
void CCompressedStaticChar::~CCompressedStaticChar()
{
} /* size: 0 */

// <00C0DFE0> ../public/animationsystem/compression.h:1626
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedStaticChar : public CCompressedStatic<int, char> {
public:
	/* class CCompressedStatic<int, char> <ancestor>; */ /* 0 104 */
	void CCompressedStaticChar(CCompressedStaticChar* , CCompressedStaticChar& );
	void CCompressedStaticChar(CCompressedStaticChar* , const CCompressedStaticChar& );
	void CCompressedStaticChar(CCompressedStaticChar* );
	/* ../public/animationsystem/compression.h:1629 */
	virtual const char* GetName(const CCompressedStaticChar* );
	/* ../public/animationsystem/compression.h:1629 */
	virtual const int GetFieldType(const CCompressedStaticChar* );
	/* ../public/animationsystem/compression.h:1629 */
	virtual const int GetFlags(const CCompressedStaticChar* );
	/* ../public/animationsystem/compression.h:1629 */
	virtual ICompressorService* Instantiate(const CCompressedStaticChar* );
	virtual void ~CCompressedStaticChar(CCompressedStaticChar* );
	void CCompressedStaticChar(class CCompressedStaticChar *, class CCompressedStaticChar &); /* linkage=_ZN21CCompressedStaticCharC4EOS_ */
	void CCompressedStaticChar(class CCompressedStaticChar *, const class CCompressedStaticChar  &); /* linkage=_ZN21CCompressedStaticCharC4ERKS_ */
	void CCompressedStaticChar(class CCompressedStaticChar *); /* linkage=_ZN21CCompressedStaticCharC4Ev */
	virtual const char  * GetName(const class CCompressedStaticChar  *); /* linkage=_ZNK21CCompressedStaticChar7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedStaticChar  *); /* linkage=_ZNK21CCompressedStaticChar12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedStaticChar  *); /* linkage=_ZNK21CCompressedStaticChar8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedStaticChar  *); /* linkage=_ZNK21CCompressedStaticChar11InstantiateEv */
	virtual void ~CCompressedStaticChar(class CCompressedStaticChar *); /* linkage=_ZN21CCompressedStaticCharD4Ev */
};

// <025CD814> ../public/animationsystem/compression.h:1629
void CCompressedStaticChar::GetName()
{
} /* size: 12 */

// <025CD7E6> ../public/animationsystem/compression.h:1629
void CCompressedStaticChar::GetFieldType()
{
} /* size: 10 */

// <025CD7B8> ../public/animationsystem/compression.h:1629
void CCompressedStaticChar::GetFlags()
{
} /* size: 7 */

// <025CD2FD> ../public/animationsystem/compression.h:1629
// function calls: 19
void CCompressedStaticChar::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CCompressedAnim<int>::CCompressedAnim(); // 834
	CCompressedStatic<int, char>::CCompressedStatic(); // 1626
	CCompressedStaticChar::CCompressedStaticChar(); // 1629
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0F45C> ../public/animationsystem/compression.h:1629
void CCompressedStaticChar::Instantiate()
{
} /* size: 0 */

// <025C6DD6> ../public/animationsystem/compression.h:1632
void CCompressedStaticShort::CCompressedStaticShort()
{
} /* size: 0 */

// <025C6DB9> ../public/animationsystem/compression.h:1632
inline void CCompressedStaticShort::CCompressedStaticShort()
{
} /* size: 0 */

// <025A6D11> ../public/animationsystem/compression.h:1632
// function call: 1
void CCompressedStaticShort::~CCompressedStaticShort()
{
	CCompressedStatic<int, short int>::~CCompressedStatic(); // 1632
} /* size: 19, inline expansions: 1 (15 bytes) */

// <025A6C5E> ../public/animationsystem/compression.h:1632
// function calls: 2
void CCompressedStaticShort::~CCompressedStaticShort()
{
	CCompressedStatic<int, short int>::~CCompressedStatic(); // 1632
	CCompressedStaticShort::~CCompressedStaticShort(); // 1632
} /* size: 46, inline expansions: 2 (38 bytes) */

// <025A6C41> ../public/animationsystem/compression.h:1632
inline void CCompressedStaticShort::~CCompressedStaticShort()
{
} /* size: 0 */

// <0258A938> ../public/animationsystem/compression.h:1632
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedStaticShort : public CCompressedStatic<int, short int> {
public:
	/* class CCompressedStatic<int, short int> <ancestor>; */ /* 0 104 */
	void CCompressedStaticShort(CCompressedStaticShort* , CCompressedStaticShort& );
	void CCompressedStaticShort(CCompressedStaticShort* , const CCompressedStaticShort& );
	void CCompressedStaticShort(CCompressedStaticShort* );
	/* ../public/animationsystem/compression.h:1635 */
	virtual const char* GetName(const CCompressedStaticShort* );
	/* ../public/animationsystem/compression.h:1635 */
	virtual const int GetFieldType(const CCompressedStaticShort* );
	/* ../public/animationsystem/compression.h:1635 */
	virtual const int GetFlags(const CCompressedStaticShort* );
	/* ../public/animationsystem/compression.h:1635 */
	virtual ICompressorService* Instantiate(const CCompressedStaticShort* );
	virtual void ~CCompressedStaticShort(CCompressedStaticShort* );
	void CCompressedStaticShort(class CCompressedStaticShort *, class CCompressedStaticShort &); /* linkage=_ZN22CCompressedStaticShortC4EOS_ */
	void CCompressedStaticShort(class CCompressedStaticShort *, const class CCompressedStaticShort  &); /* linkage=_ZN22CCompressedStaticShortC4ERKS_ */
	void CCompressedStaticShort(class CCompressedStaticShort *); /* linkage=_ZN22CCompressedStaticShortC4Ev */
	virtual const char  * GetName(const class CCompressedStaticShort  *); /* linkage=_ZNK22CCompressedStaticShort7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedStaticShort  *); /* linkage=_ZNK22CCompressedStaticShort12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedStaticShort  *); /* linkage=_ZNK22CCompressedStaticShort8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedStaticShort  *); /* linkage=_ZNK22CCompressedStaticShort11InstantiateEv */
	virtual void ~CCompressedStaticShort(class CCompressedStaticShort *); /* linkage=_ZN22CCompressedStaticShortD4Ev */
};

// <025CD2CF> ../public/animationsystem/compression.h:1635
void CCompressedStaticShort::GetName()
{
} /* size: 12 */

// <025CD2A1> ../public/animationsystem/compression.h:1635
void CCompressedStaticShort::GetFieldType()
{
} /* size: 10 */

// <025CD273> ../public/animationsystem/compression.h:1635
void CCompressedStaticShort::GetFlags()
{
} /* size: 7 */

// <025CCE6B> ../public/animationsystem/compression.h:1635
// function calls: 19
void CCompressedStaticShort::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CCompressedAnim<int>::CCompressedAnim(); // 834
	CCompressedStatic<int, int>::CCompressedStatic(); // 1620
	CCompressedStaticInt::CCompressedStaticInt(); // 1635
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0F3FC> ../public/animationsystem/compression.h:1635
void CCompressedStaticShort::Instantiate()
{
} /* size: 0 */

// <025CCD4B> ../public/animationsystem/compression.h:1638
void CCompressedFullChar::CCompressedFullChar()
{
} /* size: 0 */

// <025CCD2E> ../public/animationsystem/compression.h:1638
inline void CCompressedFullChar::CCompressedFullChar()
{
} /* size: 0 */

// <025A6E5B> ../public/animationsystem/compression.h:1638
// function call: 1
void CCompressedFullChar::~CCompressedFullChar()
{
	CCompressedList<int, char>::~CCompressedList(); // 1638
} /* size: 19, inline expansions: 1 (15 bytes) */

// <025A6DA8> ../public/animationsystem/compression.h:1638
// function calls: 2
void CCompressedFullChar::~CCompressedFullChar()
{
	CCompressedList<int, char>::~CCompressedList(); // 1638
	CCompressedFullChar::~CCompressedFullChar(); // 1638
} /* size: 46, inline expansions: 2 (38 bytes) */

// <025A6D8B> ../public/animationsystem/compression.h:1638
inline void CCompressedFullChar::~CCompressedFullChar()
{
} /* size: 0 */

// <00C207B6> ../public/animationsystem/compression.h:1638
void CCompressedFullChar::~CCompressedFullChar()
{
} /* size: 0 */

// <00C0DD14> ../public/animationsystem/compression.h:1638
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedFullChar : public CCompressedList<int, char> {
public:
	/* class CCompressedList<int, char> <ancestor>; */ /* 0 104 */
	void CCompressedFullChar(CCompressedFullChar* , CCompressedFullChar& );
	void CCompressedFullChar(CCompressedFullChar* , const CCompressedFullChar& );
	void CCompressedFullChar(CCompressedFullChar* );
	/* ../public/animationsystem/compression.h:1641 */
	virtual const char* GetName(const CCompressedFullChar* );
	/* ../public/animationsystem/compression.h:1641 */
	virtual const int GetFieldType(const CCompressedFullChar* );
	/* ../public/animationsystem/compression.h:1641 */
	virtual const int GetFlags(const CCompressedFullChar* );
	/* ../public/animationsystem/compression.h:1641 */
	virtual ICompressorService* Instantiate(const CCompressedFullChar* );
	virtual void ~CCompressedFullChar(CCompressedFullChar* );
	void CCompressedFullChar(class CCompressedFullChar *, class CCompressedFullChar &); /* linkage=_ZN19CCompressedFullCharC4EOS_ */
	void CCompressedFullChar(class CCompressedFullChar *, const class CCompressedFullChar  &); /* linkage=_ZN19CCompressedFullCharC4ERKS_ */
	void CCompressedFullChar(class CCompressedFullChar *); /* linkage=_ZN19CCompressedFullCharC4Ev */
	virtual const char  * GetName(const class CCompressedFullChar  *); /* linkage=_ZNK19CCompressedFullChar7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedFullChar  *); /* linkage=_ZNK19CCompressedFullChar12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedFullChar  *); /* linkage=_ZNK19CCompressedFullChar8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedFullChar  *); /* linkage=_ZNK19CCompressedFullChar11InstantiateEv */
	virtual void ~CCompressedFullChar(class CCompressedFullChar *); /* linkage=_ZN19CCompressedFullCharD4Ev */
};

// <025CCE3D> ../public/animationsystem/compression.h:1641
void CCompressedFullChar::GetName()
{
} /* size: 12 */

// <025CCE0F> ../public/animationsystem/compression.h:1641
void CCompressedFullChar::GetFieldType()
{
} /* size: 10 */

// <025CCDE1> ../public/animationsystem/compression.h:1641
void CCompressedFullChar::GetFlags()
{
} /* size: 10 */

// <025CC926> ../public/animationsystem/compression.h:1641
// function calls: 19
void CCompressedFullChar::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CCompressedAnim<int>::CCompressedAnim(); // 904
	CCompressedList<int, char>::CCompressedList(); // 1638
	CCompressedFullChar::CCompressedFullChar(); // 1641
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0F228> ../public/animationsystem/compression.h:1641
void CCompressedFullChar::Instantiate()
{
} /* size: 0 */

// <025CC806> ../public/animationsystem/compression.h:1644
void CCompressedFullShort::CCompressedFullShort()
{
} /* size: 0 */

// <025CC7E9> ../public/animationsystem/compression.h:1644
inline void CCompressedFullShort::CCompressedFullShort()
{
} /* size: 0 */

// <025A6FA5> ../public/animationsystem/compression.h:1644
// function call: 1
void CCompressedFullShort::~CCompressedFullShort()
{
	CCompressedList<int, short int>::~CCompressedList(); // 1644
} /* size: 19, inline expansions: 1 (15 bytes) */

// <025A6EF2> ../public/animationsystem/compression.h:1644
// function calls: 2
void CCompressedFullShort::~CCompressedFullShort()
{
	CCompressedList<int, short int>::~CCompressedList(); // 1644
	CCompressedFullShort::~CCompressedFullShort(); // 1644
} /* size: 46, inline expansions: 2 (38 bytes) */

// <025A6ED5> ../public/animationsystem/compression.h:1644
inline void CCompressedFullShort::~CCompressedFullShort()
{
} /* size: 0 */

// <00C20801> ../public/animationsystem/compression.h:1644
void CCompressedFullShort::~CCompressedFullShort()
{
} /* size: 0 */

// <00C0DA48> ../public/animationsystem/compression.h:1644
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedFullShort : public CCompressedList<int, short int> {
public:
	/* class CCompressedList<int, short int> <ancestor>; */ /* 0 104 */
	void CCompressedFullShort(CCompressedFullShort* , CCompressedFullShort& );
	void CCompressedFullShort(CCompressedFullShort* , const CCompressedFullShort& );
	void CCompressedFullShort(CCompressedFullShort* );
	/* ../public/animationsystem/compression.h:1647 */
	virtual const char* GetName(const CCompressedFullShort* );
	/* ../public/animationsystem/compression.h:1647 */
	virtual const int GetFieldType(const CCompressedFullShort* );
	/* ../public/animationsystem/compression.h:1647 */
	virtual const int GetFlags(const CCompressedFullShort* );
	/* ../public/animationsystem/compression.h:1647 */
	virtual ICompressorService* Instantiate(const CCompressedFullShort* );
	virtual void ~CCompressedFullShort(CCompressedFullShort* );
	void CCompressedFullShort(class CCompressedFullShort *, class CCompressedFullShort &); /* linkage=_ZN20CCompressedFullShortC4EOS_ */
	void CCompressedFullShort(class CCompressedFullShort *, const class CCompressedFullShort  &); /* linkage=_ZN20CCompressedFullShortC4ERKS_ */
	void CCompressedFullShort(class CCompressedFullShort *); /* linkage=_ZN20CCompressedFullShortC4Ev */
	virtual const char  * GetName(const class CCompressedFullShort  *); /* linkage=_ZNK20CCompressedFullShort7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedFullShort  *); /* linkage=_ZNK20CCompressedFullShort12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedFullShort  *); /* linkage=_ZNK20CCompressedFullShort8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedFullShort  *); /* linkage=_ZNK20CCompressedFullShort11InstantiateEv */
	virtual void ~CCompressedFullShort(class CCompressedFullShort *); /* linkage=_ZN20CCompressedFullShortD4Ev */
};

// <025CC8F8> ../public/animationsystem/compression.h:1647
void CCompressedFullShort::GetName()
{
} /* size: 12 */

// <025CC8CA> ../public/animationsystem/compression.h:1647
void CCompressedFullShort::GetFieldType()
{
} /* size: 10 */

// <025CC89C> ../public/animationsystem/compression.h:1647
void CCompressedFullShort::GetFlags()
{
} /* size: 10 */

// <025CC3E1> ../public/animationsystem/compression.h:1647
// function calls: 19
void CCompressedFullShort::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CCompressedAnim<int>::CCompressedAnim(); // 904
	CCompressedList<int, short int>::CCompressedList(); // 1644
	CCompressedFullShort::CCompressedFullShort(); // 1647
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0F115> ../public/animationsystem/compression.h:1647
void CCompressedFullShort::Instantiate()
{
} /* size: 0 */

// <025CC2C1> ../public/animationsystem/compression.h:1650
void CCompressedFullInt::CCompressedFullInt()
{
} /* size: 0 */

// <025CC2A4> ../public/animationsystem/compression.h:1650
inline void CCompressedFullInt::CCompressedFullInt()
{
} /* size: 0 */

// <025A70EF> ../public/animationsystem/compression.h:1650
// function call: 1
void CCompressedFullInt::~CCompressedFullInt()
{
	CCompressedList<int, int>::~CCompressedList(); // 1650
} /* size: 19, inline expansions: 1 (15 bytes) */

// <025A703C> ../public/animationsystem/compression.h:1650
// function calls: 2
void CCompressedFullInt::~CCompressedFullInt()
{
	CCompressedList<int, int>::~CCompressedList(); // 1650
	CCompressedFullInt::~CCompressedFullInt(); // 1650
} /* size: 46, inline expansions: 2 (38 bytes) */

// <025A701F> ../public/animationsystem/compression.h:1650
inline void CCompressedFullInt::~CCompressedFullInt()
{
} /* size: 0 */

// <00C2084C> ../public/animationsystem/compression.h:1650
void CCompressedFullInt::~CCompressedFullInt()
{
} /* size: 0 */

// <00C0D77C> ../public/animationsystem/compression.h:1650
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedFullInt : public CCompressedList<int, int> {
public:
	/* class CCompressedList<int, int> <ancestor>; */ /* 0 104 */
	void CCompressedFullInt(CCompressedFullInt* , CCompressedFullInt& );
	void CCompressedFullInt(CCompressedFullInt* , const CCompressedFullInt& );
	void CCompressedFullInt(CCompressedFullInt* );
	/* ../public/animationsystem/compression.h:1653 */
	virtual const char* GetName(const CCompressedFullInt* );
	/* ../public/animationsystem/compression.h:1653 */
	virtual const int GetFieldType(const CCompressedFullInt* );
	/* ../public/animationsystem/compression.h:1653 */
	virtual const int GetFlags(const CCompressedFullInt* );
	/* ../public/animationsystem/compression.h:1653 */
	virtual ICompressorService* Instantiate(const CCompressedFullInt* );
	virtual void ~CCompressedFullInt(CCompressedFullInt* );
	void CCompressedFullInt(class CCompressedFullInt *, class CCompressedFullInt &); /* linkage=_ZN18CCompressedFullIntC4EOS_ */
	void CCompressedFullInt(class CCompressedFullInt *, const class CCompressedFullInt  &); /* linkage=_ZN18CCompressedFullIntC4ERKS_ */
	void CCompressedFullInt(class CCompressedFullInt *); /* linkage=_ZN18CCompressedFullIntC4Ev */
	virtual const char  * GetName(const class CCompressedFullInt  *); /* linkage=_ZNK18CCompressedFullInt7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedFullInt  *); /* linkage=_ZNK18CCompressedFullInt12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedFullInt  *); /* linkage=_ZNK18CCompressedFullInt8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedFullInt  *); /* linkage=_ZNK18CCompressedFullInt11InstantiateEv */
	virtual void ~CCompressedFullInt(class CCompressedFullInt *); /* linkage=_ZN18CCompressedFullIntD4Ev */
};

// <025CC3B3> ../public/animationsystem/compression.h:1653
void CCompressedFullInt::GetName()
{
} /* size: 12 */

// <025CC385> ../public/animationsystem/compression.h:1653
void CCompressedFullInt::GetFieldType()
{
} /* size: 10 */

// <025CC357> ../public/animationsystem/compression.h:1653
void CCompressedFullInt::GetFlags()
{
} /* size: 10 */

// <025CBE9C> ../public/animationsystem/compression.h:1653
// function calls: 19
void CCompressedFullInt::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CCompressedAnim<int>::CCompressedAnim(); // 904
	CCompressedList<int, int>::CCompressedList(); // 1650
	CCompressedFullInt::CCompressedFullInt(); // 1653
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0F002> ../public/animationsystem/compression.h:1653
void CCompressedFullInt::Instantiate()
{
} /* size: 0 */

// <025CB93F> ../public/animationsystem/compression.h:1660
void CCompressedReferenceBool::CCompressedReferenceBool()
{
} /* size: 0 */

// <025CB922> ../public/animationsystem/compression.h:1660
inline void CCompressedReferenceBool::CCompressedReferenceBool()
{
} /* size: 0 */

// <025A77E8> ../public/animationsystem/compression.h:1660
// function calls: 28
void CCompressedReferenceBool::~CCompressedReferenceBool()
{
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 905
	CUtlMemory<bool, int>::Purge(); // 903
	CUtlMemory<bool, int>::Purge(); // 1799
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 1798
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
	ValidateAlignment<bool>(void); // 508
	CUtlMemory<bool, int>::Purge(); // 510
	CUtlMemory<bool, int>::~CUtlMemory(); // 562
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
	CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 560
	ValidateAlignment<CUtlVector<bool> >(void); // 508
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 410
	CUtlVector<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> >::~CUtlVector(); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<bool>::~CCompressedAnim(); // 810
	CCompressedReference<bool>::~CCompressedReference(); // 1660
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025A7186> ../public/animationsystem/compression.h:1660
// function calls: 33
void CCompressedReferenceBool::~CCompressedReferenceBool()
{
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 905
	CUtlMemory<bool, int>::Purge(); // 903
	CUtlMemory<bool, int>::Purge(); // 1799
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 1798
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
	ValidateAlignment<bool>(void); // 508
	CUtlMemory<bool, int>::Purge(); // 510
	CUtlMemory<bool, int>::~CUtlMemory(); // 562
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
	CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 560
	ValidateAlignment<CUtlVector<bool> >(void); // 508
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 410
	CUtlVector<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> >::~CUtlVector(); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<bool>::~CCompressedAnim(); // 810
	CCompressedReference<bool>::~CCompressedReference(); // 1660
	CCompressedReferenceBool::~CCompressedReferenceBool(); // 1660
} /* size: 136, inline expansions: 33 (699 bytes) */

// <025A7169> ../public/animationsystem/compression.h:1660
inline void CCompressedReferenceBool::~CCompressedReferenceBool()
{
} /* size: 0 */

// <00C20897> ../public/animationsystem/compression.h:1660
void CCompressedReferenceBool::~CCompressedReferenceBool()
{
} /* size: 0 */

// <00C0D4E4> ../public/animationsystem/compression.h:1660
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedReferenceBool : public CCompressedReference<bool> {
public:
	/* class CCompressedReference<bool> <ancestor>; */ /* 0 104 */
	void CCompressedReferenceBool(CCompressedReferenceBool* , CCompressedReferenceBool& );
	void CCompressedReferenceBool(CCompressedReferenceBool* , const CCompressedReferenceBool& );
	void CCompressedReferenceBool(CCompressedReferenceBool* );
	/* ../public/animationsystem/compression.h:1663 */
	virtual const char* GetName(const CCompressedReferenceBool* );
	/* ../public/animationsystem/compression.h:1663 */
	virtual const int GetFieldType(const CCompressedReferenceBool* );
	/* ../public/animationsystem/compression.h:1663 */
	virtual const int GetFlags(const CCompressedReferenceBool* );
	/* ../public/animationsystem/compression.h:1663 */
	virtual ICompressorService* Instantiate(const CCompressedReferenceBool* );
	virtual void ~CCompressedReferenceBool(CCompressedReferenceBool* );
	void CCompressedReferenceBool(class CCompressedReferenceBool *, class CCompressedReferenceBool &); /* linkage=_ZN24CCompressedReferenceBoolC4EOS_ */
	void CCompressedReferenceBool(class CCompressedReferenceBool *, const class CCompressedReferenceBool  &); /* linkage=_ZN24CCompressedReferenceBoolC4ERKS_ */
	void CCompressedReferenceBool(class CCompressedReferenceBool *); /* linkage=_ZN24CCompressedReferenceBoolC4Ev */
	virtual const char  * GetName(const class CCompressedReferenceBool  *); /* linkage=_ZNK24CCompressedReferenceBool7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedReferenceBool  *); /* linkage=_ZNK24CCompressedReferenceBool12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedReferenceBool  *); /* linkage=_ZNK24CCompressedReferenceBool8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedReferenceBool  *); /* linkage=_ZNK24CCompressedReferenceBool11InstantiateEv */
	virtual void ~CCompressedReferenceBool(class CCompressedReferenceBool *); /* linkage=_ZN24CCompressedReferenceBoolD4Ev */
};

// <025CBE6E> ../public/animationsystem/compression.h:1663
void CCompressedReferenceBool::GetName()
{
} /* size: 12 */

// <025CBE40> ../public/animationsystem/compression.h:1663
void CCompressedReferenceBool::GetFieldType()
{
} /* size: 10 */

// <025CBE12> ../public/animationsystem/compression.h:1663
void CCompressedReferenceBool::GetFlags()
{
} /* size: 7 */

// <025CB51A> ../public/animationsystem/compression.h:1663
// function calls: 19
void CCompressedReferenceBool::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> >::CUtlVector(); // 582
	CUtlMemory<bool, int>::ValidateGrowSize(); // 475
	CUtlMemory<bool, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<bool, CUtlMemory<bool, int> >::CUtlVector(); // 582
	CCompressedAnim<bool>::CCompressedAnim(); // 810
	CCompressedReference<bool>::CCompressedReference(); // 1660
	CCompressedReferenceBool::CCompressedReferenceBool(); // 1663
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0EE08> ../public/animationsystem/compression.h:1663
void CCompressedReferenceBool::Instantiate()
{
} /* size: 0 */

// <025CB3FA> ../public/animationsystem/compression.h:1666
void CCompressedStaticBool::CCompressedStaticBool()
{
} /* size: 0 */

// <025CB3DD> ../public/animationsystem/compression.h:1666
inline void CCompressedStaticBool::CCompressedStaticBool()
{
} /* size: 0 */

// <025A8397> ../public/animationsystem/compression.h:1666
// function calls: 28
void CCompressedStaticBool::~CCompressedStaticBool()
{
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 905
	CUtlMemory<bool, int>::Purge(); // 903
	CUtlMemory<bool, int>::Purge(); // 1799
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 1798
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
	ValidateAlignment<bool>(void); // 508
	CUtlMemory<bool, int>::Purge(); // 510
	CUtlMemory<bool, int>::~CUtlMemory(); // 562
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
	CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 560
	ValidateAlignment<CUtlVector<bool> >(void); // 508
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 410
	CUtlVector<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> >::~CUtlVector(); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<bool>::~CCompressedAnim(); // 834
	CCompressedStatic<bool, bool>::~CCompressedStatic(); // 1666
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025A7D35> ../public/animationsystem/compression.h:1666
// function calls: 33
void CCompressedStaticBool::~CCompressedStaticBool()
{
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 905
	CUtlMemory<bool, int>::Purge(); // 903
	CUtlMemory<bool, int>::Purge(); // 1799
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 1798
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
	ValidateAlignment<bool>(void); // 508
	CUtlMemory<bool, int>::Purge(); // 510
	CUtlMemory<bool, int>::~CUtlMemory(); // 562
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
	CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 560
	ValidateAlignment<CUtlVector<bool> >(void); // 508
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 410
	CUtlVector<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> >::~CUtlVector(); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<bool>::~CCompressedAnim(); // 834
	CCompressedStatic<bool, bool>::~CCompressedStatic(); // 1666
	CCompressedStaticBool::~CCompressedStaticBool(); // 1666
} /* size: 136, inline expansions: 33 (699 bytes) */

// <025A7D18> ../public/animationsystem/compression.h:1666
inline void CCompressedStaticBool::~CCompressedStaticBool()
{
} /* size: 0 */

// <00C208E2> ../public/animationsystem/compression.h:1666
void CCompressedStaticBool::~CCompressedStaticBool()
{
} /* size: 0 */

// <00C0D218> ../public/animationsystem/compression.h:1666
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedStaticBool : public CCompressedStatic<bool, bool> {
public:
	/* class CCompressedStatic<bool, bool> <ancestor>; */ /* 0 104 */
	void CCompressedStaticBool(CCompressedStaticBool* , CCompressedStaticBool& );
	void CCompressedStaticBool(CCompressedStaticBool* , const CCompressedStaticBool& );
	void CCompressedStaticBool(CCompressedStaticBool* );
	/* ../public/animationsystem/compression.h:1669 */
	virtual const char* GetName(const CCompressedStaticBool* );
	/* ../public/animationsystem/compression.h:1669 */
	virtual const int GetFieldType(const CCompressedStaticBool* );
	/* ../public/animationsystem/compression.h:1669 */
	virtual const int GetFlags(const CCompressedStaticBool* );
	/* ../public/animationsystem/compression.h:1669 */
	virtual ICompressorService* Instantiate(const CCompressedStaticBool* );
	virtual void ~CCompressedStaticBool(CCompressedStaticBool* );
	void CCompressedStaticBool(class CCompressedStaticBool *, class CCompressedStaticBool &); /* linkage=_ZN21CCompressedStaticBoolC4EOS_ */
	void CCompressedStaticBool(class CCompressedStaticBool *, const class CCompressedStaticBool  &); /* linkage=_ZN21CCompressedStaticBoolC4ERKS_ */
	void CCompressedStaticBool(class CCompressedStaticBool *); /* linkage=_ZN21CCompressedStaticBoolC4Ev */
	virtual const char  * GetName(const class CCompressedStaticBool  *); /* linkage=_ZNK21CCompressedStaticBool7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedStaticBool  *); /* linkage=_ZNK21CCompressedStaticBool12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedStaticBool  *); /* linkage=_ZNK21CCompressedStaticBool8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedStaticBool  *); /* linkage=_ZNK21CCompressedStaticBool11InstantiateEv */
	virtual void ~CCompressedStaticBool(class CCompressedStaticBool *); /* linkage=_ZN21CCompressedStaticBoolD4Ev */
};

// <025CB4EC> ../public/animationsystem/compression.h:1669
void CCompressedStaticBool::GetName()
{
} /* size: 12 */

// <025CB4BE> ../public/animationsystem/compression.h:1669
void CCompressedStaticBool::GetFieldType()
{
} /* size: 10 */

// <025CB490> ../public/animationsystem/compression.h:1669
void CCompressedStaticBool::GetFlags()
{
} /* size: 7 */

// <025CAFD5> ../public/animationsystem/compression.h:1669
// function calls: 19
void CCompressedStaticBool::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> >::CUtlVector(); // 582
	CUtlMemory<bool, int>::ValidateGrowSize(); // 475
	CUtlMemory<bool, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<bool, CUtlMemory<bool, int> >::CUtlVector(); // 582
	CCompressedAnim<bool>::CCompressedAnim(); // 834
	CCompressedStatic<bool, bool>::CCompressedStatic(); // 1666
	CCompressedStaticBool::CCompressedStaticBool(); // 1669
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0ECF5> ../public/animationsystem/compression.h:1669
void CCompressedStaticBool::Instantiate()
{
} /* size: 0 */

// <025CAEB5> ../public/animationsystem/compression.h:1672
void CCompressedFullBool::CCompressedFullBool()
{
} /* size: 0 */

// <025CAE98> ../public/animationsystem/compression.h:1672
inline void CCompressedFullBool::CCompressedFullBool()
{
} /* size: 0 */

// <025A8F46> ../public/animationsystem/compression.h:1672
// function calls: 28
void CCompressedFullBool::~CCompressedFullBool()
{
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 905
	CUtlMemory<bool, int>::Purge(); // 903
	CUtlMemory<bool, int>::Purge(); // 1799
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 1798
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
	ValidateAlignment<bool>(void); // 508
	CUtlMemory<bool, int>::Purge(); // 510
	CUtlMemory<bool, int>::~CUtlMemory(); // 562
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
	CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 560
	ValidateAlignment<CUtlVector<bool> >(void); // 508
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 410
	CUtlVector<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> >::~CUtlVector(); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<bool>::~CCompressedAnim(); // 904
	CCompressedList<bool, bool>::~CCompressedList(); // 1672
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025A88E4> ../public/animationsystem/compression.h:1672
// function calls: 33
void CCompressedFullBool::~CCompressedFullBool()
{
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 905
	CUtlMemory<bool, int>::Purge(); // 903
	CUtlMemory<bool, int>::Purge(); // 1799
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 1798
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
	ValidateAlignment<bool>(void); // 508
	CUtlMemory<bool, int>::Purge(); // 510
	CUtlMemory<bool, int>::~CUtlMemory(); // 562
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
	CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 560
	ValidateAlignment<CUtlVector<bool> >(void); // 508
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 410
	CUtlVector<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> >::~CUtlVector(); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<bool>::~CCompressedAnim(); // 904
	CCompressedList<bool, bool>::~CCompressedList(); // 1672
	CCompressedFullBool::~CCompressedFullBool(); // 1672
} /* size: 136, inline expansions: 33 (699 bytes) */

// <025A88C7> ../public/animationsystem/compression.h:1672
inline void CCompressedFullBool::~CCompressedFullBool()
{
} /* size: 0 */

// <00C2092D> ../public/animationsystem/compression.h:1672
void CCompressedFullBool::~CCompressedFullBool()
{
} /* size: 0 */

// <00C0CF4C> ../public/animationsystem/compression.h:1672
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedFullBool : public CCompressedList<bool, bool> {
public:
	/* class CCompressedList<bool, bool> <ancestor>; */ /* 0 104 */
	void CCompressedFullBool(CCompressedFullBool* , CCompressedFullBool& );
	void CCompressedFullBool(CCompressedFullBool* , const CCompressedFullBool& );
	void CCompressedFullBool(CCompressedFullBool* );
	/* ../public/animationsystem/compression.h:1675 */
	virtual const char* GetName(const CCompressedFullBool* );
	/* ../public/animationsystem/compression.h:1675 */
	virtual const int GetFieldType(const CCompressedFullBool* );
	/* ../public/animationsystem/compression.h:1675 */
	virtual const int GetFlags(const CCompressedFullBool* );
	/* ../public/animationsystem/compression.h:1675 */
	virtual ICompressorService* Instantiate(const CCompressedFullBool* );
	virtual void ~CCompressedFullBool(CCompressedFullBool* );
	void CCompressedFullBool(class CCompressedFullBool *, class CCompressedFullBool &); /* linkage=_ZN19CCompressedFullBoolC4EOS_ */
	void CCompressedFullBool(class CCompressedFullBool *, const class CCompressedFullBool  &); /* linkage=_ZN19CCompressedFullBoolC4ERKS_ */
	void CCompressedFullBool(class CCompressedFullBool *); /* linkage=_ZN19CCompressedFullBoolC4Ev */
	virtual const char  * GetName(const class CCompressedFullBool  *); /* linkage=_ZNK19CCompressedFullBool7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedFullBool  *); /* linkage=_ZNK19CCompressedFullBool12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedFullBool  *); /* linkage=_ZNK19CCompressedFullBool8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedFullBool  *); /* linkage=_ZNK19CCompressedFullBool11InstantiateEv */
	virtual void ~CCompressedFullBool(class CCompressedFullBool *); /* linkage=_ZN19CCompressedFullBoolD4Ev */
};

// <025CAFA7> ../public/animationsystem/compression.h:1675
void CCompressedFullBool::GetName()
{
} /* size: 12 */

// <025CAF79> ../public/animationsystem/compression.h:1675
void CCompressedFullBool::GetFieldType()
{
} /* size: 10 */

// <025CAF4B> ../public/animationsystem/compression.h:1675
void CCompressedFullBool::GetFlags()
{
} /* size: 10 */

// <025CAA90> ../public/animationsystem/compression.h:1675
// function calls: 19
void CCompressedFullBool::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<bool, CUtlMemory<bool, int> >, CUtlMemory<CUtlVector<bool, CUtlMemory<bool, int> >, int> >::CUtlVector(); // 582
	CUtlMemory<bool, int>::ValidateGrowSize(); // 475
	CUtlMemory<bool, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<bool, CUtlMemory<bool, int> >::CUtlVector(); // 582
	CCompressedAnim<bool>::CCompressedAnim(); // 904
	CCompressedList<bool, bool>::CCompressedList(); // 1672
	CCompressedFullBool::CCompressedFullBool(); // 1675
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0EBE2> ../public/animationsystem/compression.h:1675
void CCompressedFullBool::Instantiate()
{
} /* size: 0 */

// <025CA533> ../public/animationsystem/compression.h:1683
void CCompressedReferenceColor32::CCompressedReferenceColor32()
{
} /* size: 0 */

// <025CA516> ../public/animationsystem/compression.h:1683
inline void CCompressedReferenceColor32::CCompressedReferenceColor32()
{
} /* size: 0 */

// <025A9AF5> ../public/animationsystem/compression.h:1683
// function calls: 28
void CCompressedReferenceColor32::~CCompressedReferenceColor32()
{
	CUtlMemory<Color, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Color, int>::Purge(); // 903
	CUtlMemory<Color, int>::Purge(); // 1799
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::Purge(); // 560
	ValidateAlignment<Color>(void); // 508
	CUtlMemory<Color, int>::Purge(); // 510
	CUtlMemory<Color, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Color, CUtlMemory<Color, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 560
	ValidateAlignment<CUtlVector<Color> >(void); // 508
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int> this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Color>::~CCompressedAnim(); // 810
	CCompressedReference<Color>::~CCompressedReference(); // 1683
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025A9493> ../public/animationsystem/compression.h:1683
// function calls: 33
void CCompressedReferenceColor32::~CCompressedReferenceColor32()
{
	CUtlMemory<Color, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Color, int>::Purge(); // 903
	CUtlMemory<Color, int>::Purge(); // 1799
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::Purge(); // 560
	ValidateAlignment<Color>(void); // 508
	CUtlMemory<Color, int>::Purge(); // 510
	CUtlMemory<Color, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Color, CUtlMemory<Color, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 560
	ValidateAlignment<CUtlVector<Color> >(void); // 508
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int> this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<Color>::~CCompressedAnim(); // 810
	CCompressedReference<Color>::~CCompressedReference(); // 1683
	CCompressedReferenceColor32::~CCompressedReferenceColor32(); // 1683
} /* size: 136, inline expansions: 33 (699 bytes) */

// <025A9476> ../public/animationsystem/compression.h:1683
inline void CCompressedReferenceColor32::~CCompressedReferenceColor32()
{
} /* size: 0 */

// <00C20978> ../public/animationsystem/compression.h:1683
void CCompressedReferenceColor32::~CCompressedReferenceColor32()
{
} /* size: 0 */

// <00C0CCB4> ../public/animationsystem/compression.h:1683
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedReferenceColor32 : public CCompressedReference<Color> {
public:
	/* class CCompressedReference<Color> <ancestor>; */ /* 0 104 */
	void CCompressedReferenceColor32(CCompressedReferenceColor32* , CCompressedReferenceColor32& );
	void CCompressedReferenceColor32(CCompressedReferenceColor32* , const CCompressedReferenceColor32& );
	void CCompressedReferenceColor32(CCompressedReferenceColor32* );
	/* ../public/animationsystem/compression.h:1686 */
	virtual const char* GetName(const CCompressedReferenceColor32* );
	/* ../public/animationsystem/compression.h:1686 */
	virtual const int GetFieldType(const CCompressedReferenceColor32* );
	/* ../public/animationsystem/compression.h:1686 */
	virtual const int GetFlags(const CCompressedReferenceColor32* );
	/* ../public/animationsystem/compression.h:1686 */
	virtual ICompressorService* Instantiate(const CCompressedReferenceColor32* );
	virtual void ~CCompressedReferenceColor32(CCompressedReferenceColor32* );
	void CCompressedReferenceColor32(class CCompressedReferenceColor32 *, class CCompressedReferenceColor32 &); /* linkage=_ZN27CCompressedReferenceColor32C4EOS_ */
	void CCompressedReferenceColor32(class CCompressedReferenceColor32 *, const class CCompressedReferenceColor32  &); /* linkage=_ZN27CCompressedReferenceColor32C4ERKS_ */
	void CCompressedReferenceColor32(class CCompressedReferenceColor32 *); /* linkage=_ZN27CCompressedReferenceColor32C4Ev */
	virtual const char  * GetName(const class CCompressedReferenceColor32  *); /* linkage=_ZNK27CCompressedReferenceColor327GetNameEv */
	virtual const int  GetFieldType(const class CCompressedReferenceColor32  *); /* linkage=_ZNK27CCompressedReferenceColor3212GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedReferenceColor32  *); /* linkage=_ZNK27CCompressedReferenceColor328GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedReferenceColor32  *); /* linkage=_ZNK27CCompressedReferenceColor3211InstantiateEv */
	virtual void ~CCompressedReferenceColor32(class CCompressedReferenceColor32 *); /* linkage=_ZN27CCompressedReferenceColor32D4Ev */
};

// <025CAA62> ../public/animationsystem/compression.h:1686
void CCompressedReferenceColor32::GetName()
{
} /* size: 12 */

// <025CAA34> ../public/animationsystem/compression.h:1686
void CCompressedReferenceColor32::GetFieldType()
{
} /* size: 10 */

// <025CAA06> ../public/animationsystem/compression.h:1686
void CCompressedReferenceColor32::GetFlags()
{
} /* size: 7 */

// <025CA10E> ../public/animationsystem/compression.h:1686
// function calls: 19
void CCompressedReferenceColor32::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int> this); // 582
	CUtlMemory<Color, int>::ValidateGrowSize(); // 475
	CUtlMemory<Color, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Color, CUtlMemory<Color, int> >::CUtlVector(); // 582
	CCompressedAnim<Color>::CCompressedAnim(); // 810
	CCompressedReference<Color>::CCompressedReference(); // 1683
	CCompressedReferenceColor32::CCompressedReferenceColor32(); // 1686
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0E9E8> ../public/animationsystem/compression.h:1686
void CCompressedReferenceColor32::Instantiate()
{
} /* size: 0 */

// <025C9FEE> ../public/animationsystem/compression.h:1689
void CCompressedStaticColor32::CCompressedStaticColor32()
{
} /* size: 0 */

// <025C9FD1> ../public/animationsystem/compression.h:1689
inline void CCompressedStaticColor32::CCompressedStaticColor32()
{
} /* size: 0 */

// <025AA6A4> ../public/animationsystem/compression.h:1689
// function calls: 28
void CCompressedStaticColor32::~CCompressedStaticColor32()
{
	CUtlMemory<Color, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Color, int>::Purge(); // 903
	CUtlMemory<Color, int>::Purge(); // 1799
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::Purge(); // 560
	ValidateAlignment<Color>(void); // 508
	CUtlMemory<Color, int>::Purge(); // 510
	CUtlMemory<Color, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Color, CUtlMemory<Color, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 560
	ValidateAlignment<CUtlVector<Color> >(void); // 508
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int> this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Color>::~CCompressedAnim(); // 834
	CCompressedStatic<Color, Color>::~CCompressedStatic(); // 1689
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025AA042> ../public/animationsystem/compression.h:1689
// function calls: 33
void CCompressedStaticColor32::~CCompressedStaticColor32()
{
	CUtlMemory<Color, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Color, int>::Purge(); // 903
	CUtlMemory<Color, int>::Purge(); // 1799
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::Purge(); // 560
	ValidateAlignment<Color>(void); // 508
	CUtlMemory<Color, int>::Purge(); // 510
	CUtlMemory<Color, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Color, CUtlMemory<Color, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 560
	ValidateAlignment<CUtlVector<Color> >(void); // 508
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int> this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<Color>::~CCompressedAnim(); // 834
	CCompressedStatic<Color, Color>::~CCompressedStatic(); // 1689
	CCompressedStaticColor32::~CCompressedStaticColor32(); // 1689
} /* size: 136, inline expansions: 33 (699 bytes) */

// <025AA025> ../public/animationsystem/compression.h:1689
inline void CCompressedStaticColor32::~CCompressedStaticColor32()
{
} /* size: 0 */

// <00C209C3> ../public/animationsystem/compression.h:1689
void CCompressedStaticColor32::~CCompressedStaticColor32()
{
} /* size: 0 */

// <00C0C9E8> ../public/animationsystem/compression.h:1689
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedStaticColor32 : public CCompressedStatic<Color, Color> {
public:
	/* class CCompressedStatic<Color, Color> <ancestor>; */ /* 0 104 */
	void CCompressedStaticColor32(CCompressedStaticColor32* , CCompressedStaticColor32& );
	void CCompressedStaticColor32(CCompressedStaticColor32* , const CCompressedStaticColor32& );
	void CCompressedStaticColor32(CCompressedStaticColor32* );
	/* ../public/animationsystem/compression.h:1692 */
	virtual const char* GetName(const CCompressedStaticColor32* );
	/* ../public/animationsystem/compression.h:1692 */
	virtual const int GetFieldType(const CCompressedStaticColor32* );
	/* ../public/animationsystem/compression.h:1692 */
	virtual const int GetFlags(const CCompressedStaticColor32* );
	/* ../public/animationsystem/compression.h:1692 */
	virtual ICompressorService* Instantiate(const CCompressedStaticColor32* );
	virtual void ~CCompressedStaticColor32(CCompressedStaticColor32* );
	void CCompressedStaticColor32(class CCompressedStaticColor32 *, class CCompressedStaticColor32 &); /* linkage=_ZN24CCompressedStaticColor32C4EOS_ */
	void CCompressedStaticColor32(class CCompressedStaticColor32 *, const class CCompressedStaticColor32  &); /* linkage=_ZN24CCompressedStaticColor32C4ERKS_ */
	void CCompressedStaticColor32(class CCompressedStaticColor32 *); /* linkage=_ZN24CCompressedStaticColor32C4Ev */
	virtual const char  * GetName(const class CCompressedStaticColor32  *); /* linkage=_ZNK24CCompressedStaticColor327GetNameEv */
	virtual const int  GetFieldType(const class CCompressedStaticColor32  *); /* linkage=_ZNK24CCompressedStaticColor3212GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedStaticColor32  *); /* linkage=_ZNK24CCompressedStaticColor328GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedStaticColor32  *); /* linkage=_ZNK24CCompressedStaticColor3211InstantiateEv */
	virtual void ~CCompressedStaticColor32(class CCompressedStaticColor32 *); /* linkage=_ZN24CCompressedStaticColor32D4Ev */
};

// <025CA0E0> ../public/animationsystem/compression.h:1692
void CCompressedStaticColor32::GetName()
{
} /* size: 12 */

// <025CA0B2> ../public/animationsystem/compression.h:1692
void CCompressedStaticColor32::GetFieldType()
{
} /* size: 10 */

// <025CA084> ../public/animationsystem/compression.h:1692
void CCompressedStaticColor32::GetFlags()
{
} /* size: 7 */

// <025C9BC9> ../public/animationsystem/compression.h:1692
// function calls: 19
void CCompressedStaticColor32::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int> this); // 582
	CUtlMemory<Color, int>::ValidateGrowSize(); // 475
	CUtlMemory<Color, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Color, CUtlMemory<Color, int> >::CUtlVector(); // 582
	CCompressedAnim<Color>::CCompressedAnim(); // 834
	CCompressedStatic<Color, Color>::CCompressedStatic(); // 1689
	CCompressedStaticColor32::CCompressedStaticColor32(); // 1692
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0E8D5> ../public/animationsystem/compression.h:1692
void CCompressedStaticColor32::Instantiate()
{
} /* size: 0 */

// <025C9AA9> ../public/animationsystem/compression.h:1695
void CCompressedFullColor32::CCompressedFullColor32()
{
} /* size: 0 */

// <025C9A8C> ../public/animationsystem/compression.h:1695
inline void CCompressedFullColor32::CCompressedFullColor32()
{
} /* size: 0 */

// <025AB253> ../public/animationsystem/compression.h:1695
// function calls: 28
void CCompressedFullColor32::~CCompressedFullColor32()
{
	CUtlMemory<Color, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Color, int>::Purge(); // 903
	CUtlMemory<Color, int>::Purge(); // 1799
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::Purge(); // 560
	ValidateAlignment<Color>(void); // 508
	CUtlMemory<Color, int>::Purge(); // 510
	CUtlMemory<Color, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Color, CUtlMemory<Color, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 560
	ValidateAlignment<CUtlVector<Color> >(void); // 508
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int> this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Color>::~CCompressedAnim(); // 904
	CCompressedList<Color, Color>::~CCompressedList(); // 1695
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025AABF1> ../public/animationsystem/compression.h:1695
// function calls: 33
void CCompressedFullColor32::~CCompressedFullColor32()
{
	CUtlMemory<Color, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Color, int>::Purge(); // 903
	CUtlMemory<Color, int>::Purge(); // 1799
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::Purge(); // 560
	ValidateAlignment<Color>(void); // 508
	CUtlMemory<Color, int>::Purge(); // 510
	CUtlMemory<Color, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Color, CUtlMemory<Color, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 560
	ValidateAlignment<CUtlVector<Color> >(void); // 508
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int> this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<Color>::~CCompressedAnim(); // 904
	CCompressedList<Color, Color>::~CCompressedList(); // 1695
	CCompressedFullColor32::~CCompressedFullColor32(); // 1695
} /* size: 136, inline expansions: 33 (699 bytes) */

// <025AABD4> ../public/animationsystem/compression.h:1695
inline void CCompressedFullColor32::~CCompressedFullColor32()
{
} /* size: 0 */

// <00C20A0E> ../public/animationsystem/compression.h:1695
void CCompressedFullColor32::~CCompressedFullColor32()
{
} /* size: 0 */

// <00C0C71C> ../public/animationsystem/compression.h:1695
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedFullColor32 : public CCompressedList<Color, Color> {
public:
	/* class CCompressedList<Color, Color> <ancestor>; */ /* 0 104 */
	void CCompressedFullColor32(CCompressedFullColor32* , CCompressedFullColor32& );
	void CCompressedFullColor32(CCompressedFullColor32* , const CCompressedFullColor32& );
	void CCompressedFullColor32(CCompressedFullColor32* );
	/* ../public/animationsystem/compression.h:1698 */
	virtual const char* GetName(const CCompressedFullColor32* );
	/* ../public/animationsystem/compression.h:1698 */
	virtual const int GetFieldType(const CCompressedFullColor32* );
	/* ../public/animationsystem/compression.h:1698 */
	virtual const int GetFlags(const CCompressedFullColor32* );
	/* ../public/animationsystem/compression.h:1698 */
	virtual ICompressorService* Instantiate(const CCompressedFullColor32* );
	virtual void ~CCompressedFullColor32(CCompressedFullColor32* );
	void CCompressedFullColor32(class CCompressedFullColor32 *, class CCompressedFullColor32 &); /* linkage=_ZN22CCompressedFullColor32C4EOS_ */
	void CCompressedFullColor32(class CCompressedFullColor32 *, const class CCompressedFullColor32  &); /* linkage=_ZN22CCompressedFullColor32C4ERKS_ */
	void CCompressedFullColor32(class CCompressedFullColor32 *); /* linkage=_ZN22CCompressedFullColor32C4Ev */
	virtual const char  * GetName(const class CCompressedFullColor32  *); /* linkage=_ZNK22CCompressedFullColor327GetNameEv */
	virtual const int  GetFieldType(const class CCompressedFullColor32  *); /* linkage=_ZNK22CCompressedFullColor3212GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedFullColor32  *); /* linkage=_ZNK22CCompressedFullColor328GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedFullColor32  *); /* linkage=_ZNK22CCompressedFullColor3211InstantiateEv */
	virtual void ~CCompressedFullColor32(class CCompressedFullColor32 *); /* linkage=_ZN22CCompressedFullColor32D4Ev */
};

// <025C9B9B> ../public/animationsystem/compression.h:1698
void CCompressedFullColor32::GetName()
{
} /* size: 12 */

// <025C9B6D> ../public/animationsystem/compression.h:1698
void CCompressedFullColor32::GetFieldType()
{
} /* size: 10 */

// <025C9B3F> ../public/animationsystem/compression.h:1698
void CCompressedFullColor32::GetFlags()
{
} /* size: 10 */

// <025C9684> ../public/animationsystem/compression.h:1698
// function calls: 19
void CCompressedFullColor32::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Color, CUtlMemory<Color, int> >, CUtlMemory<CUtlVector<Color, CUtlMemory<Color, int> >, int> this); // 582
	CUtlMemory<Color, int>::ValidateGrowSize(); // 475
	CUtlMemory<Color, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Color, CUtlMemory<Color, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Color, CUtlMemory<Color, int> >::CUtlVector(); // 582
	CCompressedAnim<Color>::CCompressedAnim(); // 904
	CCompressedList<Color, Color>::CCompressedList(); // 1695
	CCompressedFullColor32::CCompressedFullColor32(); // 1698
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0E7C2> ../public/animationsystem/compression.h:1698
void CCompressedFullColor32::Instantiate()
{
} /* size: 0 */

// <025C9127> ../public/animationsystem/compression.h:1706
void CCompressedReferenceVector2D::CCompressedReferenceVector2D()
{
} /* size: 0 */

// <025C910A> ../public/animationsystem/compression.h:1706
inline void CCompressedReferenceVector2D::CCompressedReferenceVector2D()
{
} /* size: 0 */

// <025ABE02> ../public/animationsystem/compression.h:1706
// function calls: 28
void CCompressedReferenceVector2D::~CCompressedReferenceVector2D()
{
	CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 1799
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Purge(); // 560
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::Purge(); // 510
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 560
	ValidateAlignment<CUtlVector<Vector2D> >(void); // 508
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Vector2D>::~CCompressedAnim(); // 810
	CCompressedReference<Vector2D>::~CCompressedReference(); // 1706
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025AB7A0> ../public/animationsystem/compression.h:1706
// function calls: 33
void CCompressedReferenceVector2D::~CCompressedReferenceVector2D()
{
	CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 1799
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Purge(); // 560
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::Purge(); // 510
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 560
	ValidateAlignment<CUtlVector<Vector2D> >(void); // 508
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<Vector2D>::~CCompressedAnim(); // 810
	CCompressedReference<Vector2D>::~CCompressedReference(); // 1706
	CCompressedReferenceVector2D::~CCompressedReferenceVector2D(); // 1706
} /* size: 136, inline expansions: 33 (699 bytes) */

// <025AB783> ../public/animationsystem/compression.h:1706
inline void CCompressedReferenceVector2D::~CCompressedReferenceVector2D()
{
} /* size: 0 */

// <00C20A59> ../public/animationsystem/compression.h:1706
void CCompressedReferenceVector2D::~CCompressedReferenceVector2D()
{
} /* size: 0 */

// <00C0C484> ../public/animationsystem/compression.h:1706
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedReferenceVector2D : public CCompressedReference<Vector2D> {
public:
	/* class CCompressedReference<Vector2D> <ancestor>; */ /* 0 104 */
	void CCompressedReferenceVector2D(CCompressedReferenceVector2D* , CCompressedReferenceVector2D& );
	void CCompressedReferenceVector2D(CCompressedReferenceVector2D* , const CCompressedReferenceVector2D& );
	void CCompressedReferenceVector2D(CCompressedReferenceVector2D* );
	/* ../public/animationsystem/compression.h:1709 */
	virtual const char* GetName(const CCompressedReferenceVector2D* );
	/* ../public/animationsystem/compression.h:1709 */
	virtual const int GetFieldType(const CCompressedReferenceVector2D* );
	/* ../public/animationsystem/compression.h:1709 */
	virtual const int GetFlags(const CCompressedReferenceVector2D* );
	/* ../public/animationsystem/compression.h:1709 */
	virtual ICompressorService* Instantiate(const CCompressedReferenceVector2D* );
	virtual void ~CCompressedReferenceVector2D(CCompressedReferenceVector2D* );
	void CCompressedReferenceVector2D(class CCompressedReferenceVector2D *, class CCompressedReferenceVector2D &); /* linkage=_ZN28CCompressedReferenceVector2DC4EOS_ */
	void CCompressedReferenceVector2D(class CCompressedReferenceVector2D *, const class CCompressedReferenceVector2D  &); /* linkage=_ZN28CCompressedReferenceVector2DC4ERKS_ */
	void CCompressedReferenceVector2D(class CCompressedReferenceVector2D *); /* linkage=_ZN28CCompressedReferenceVector2DC4Ev */
	virtual const char  * GetName(const class CCompressedReferenceVector2D  *); /* linkage=_ZNK28CCompressedReferenceVector2D7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedReferenceVector2D  *); /* linkage=_ZNK28CCompressedReferenceVector2D12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedReferenceVector2D  *); /* linkage=_ZNK28CCompressedReferenceVector2D8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedReferenceVector2D  *); /* linkage=_ZNK28CCompressedReferenceVector2D11InstantiateEv */
	virtual void ~CCompressedReferenceVector2D(class CCompressedReferenceVector2D *); /* linkage=_ZN28CCompressedReferenceVector2DD4Ev */
};

// <025C9656> ../public/animationsystem/compression.h:1709
void CCompressedReferenceVector2D::GetName()
{
} /* size: 12 */

// <025C9628> ../public/animationsystem/compression.h:1709
void CCompressedReferenceVector2D::GetFieldType()
{
} /* size: 10 */

// <025C95FA> ../public/animationsystem/compression.h:1709
void CCompressedReferenceVector2D::GetFlags()
{
} /* size: 7 */

// <025C8D02> ../public/animationsystem/compression.h:1709
// function calls: 19
void CCompressedReferenceVector2D::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, i this); // 582
	CUtlMemory<Vector2D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector2D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVector(); // 582
	CCompressedAnim<Vector2D>::CCompressedAnim(); // 810
	CCompressedReference<Vector2D>::CCompressedReference(); // 1706
	CCompressedReferenceVector2D::CCompressedReferenceVector2D(); // 1709
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0E5C8> ../public/animationsystem/compression.h:1709
void CCompressedReferenceVector2D::Instantiate()
{
} /* size: 0 */

// <025C8BE2> ../public/animationsystem/compression.h:1712
void CCompressedStaticVector2D::CCompressedStaticVector2D()
{
} /* size: 0 */

// <025C8BC5> ../public/animationsystem/compression.h:1712
inline void CCompressedStaticVector2D::CCompressedStaticVector2D()
{
} /* size: 0 */

// <025AC9B1> ../public/animationsystem/compression.h:1712
// function calls: 28
void CCompressedStaticVector2D::~CCompressedStaticVector2D()
{
	CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 1799
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Purge(); // 560
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::Purge(); // 510
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 560
	ValidateAlignment<CUtlVector<Vector2D> >(void); // 508
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Vector2D>::~CCompressedAnim(); // 834
	CCompressedStatic<Vector2D, Vector2D>::~CCompressedStatic(); // 1712
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025AC34F> ../public/animationsystem/compression.h:1712
// function calls: 33
void CCompressedStaticVector2D::~CCompressedStaticVector2D()
{
	CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 1799
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Purge(); // 560
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::Purge(); // 510
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 560
	ValidateAlignment<CUtlVector<Vector2D> >(void); // 508
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<Vector2D>::~CCompressedAnim(); // 834
	CCompressedStatic<Vector2D, Vector2D>::~CCompressedStatic(); // 1712
	CCompressedStaticVector2D::~CCompressedStaticVector2D(); // 1712
} /* size: 136, inline expansions: 33 (699 bytes) */

// <025AC332> ../public/animationsystem/compression.h:1712
inline void CCompressedStaticVector2D::~CCompressedStaticVector2D()
{
} /* size: 0 */

// <00C20AA4> ../public/animationsystem/compression.h:1712
void CCompressedStaticVector2D::~CCompressedStaticVector2D()
{
} /* size: 0 */

// <00C0C1B8> ../public/animationsystem/compression.h:1712
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedStaticVector2D : public CCompressedStatic<Vector2D, Vector2D> {
public:
	/* class CCompressedStatic<Vector2D, Vector2D> <ancestor>; */ /* 0 104 */
	void CCompressedStaticVector2D(CCompressedStaticVector2D* , CCompressedStaticVector2D& );
	void CCompressedStaticVector2D(CCompressedStaticVector2D* , const CCompressedStaticVector2D& );
	void CCompressedStaticVector2D(CCompressedStaticVector2D* );
	/* ../public/animationsystem/compression.h:1715 */
	virtual const char* GetName(const CCompressedStaticVector2D* );
	/* ../public/animationsystem/compression.h:1715 */
	virtual const int GetFieldType(const CCompressedStaticVector2D* );
	/* ../public/animationsystem/compression.h:1715 */
	virtual const int GetFlags(const CCompressedStaticVector2D* );
	/* ../public/animationsystem/compression.h:1715 */
	virtual ICompressorService* Instantiate(const CCompressedStaticVector2D* );
	virtual void ~CCompressedStaticVector2D(CCompressedStaticVector2D* );
	void CCompressedStaticVector2D(class CCompressedStaticVector2D *, class CCompressedStaticVector2D &); /* linkage=_ZN25CCompressedStaticVector2DC4EOS_ */
	void CCompressedStaticVector2D(class CCompressedStaticVector2D *, const class CCompressedStaticVector2D  &); /* linkage=_ZN25CCompressedStaticVector2DC4ERKS_ */
	void CCompressedStaticVector2D(class CCompressedStaticVector2D *); /* linkage=_ZN25CCompressedStaticVector2DC4Ev */
	virtual const char  * GetName(const class CCompressedStaticVector2D  *); /* linkage=_ZNK25CCompressedStaticVector2D7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedStaticVector2D  *); /* linkage=_ZNK25CCompressedStaticVector2D12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedStaticVector2D  *); /* linkage=_ZNK25CCompressedStaticVector2D8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedStaticVector2D  *); /* linkage=_ZNK25CCompressedStaticVector2D11InstantiateEv */
	virtual void ~CCompressedStaticVector2D(class CCompressedStaticVector2D *); /* linkage=_ZN25CCompressedStaticVector2DD4Ev */
};

// <025C8CD4> ../public/animationsystem/compression.h:1715
void CCompressedStaticVector2D::GetName()
{
} /* size: 12 */

// <025C8CA6> ../public/animationsystem/compression.h:1715
void CCompressedStaticVector2D::GetFieldType()
{
} /* size: 10 */

// <025C8C78> ../public/animationsystem/compression.h:1715
void CCompressedStaticVector2D::GetFlags()
{
} /* size: 7 */

// <025C87BD> ../public/animationsystem/compression.h:1715
// function calls: 19
void CCompressedStaticVector2D::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, i this); // 582
	CUtlMemory<Vector2D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector2D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVector(); // 582
	CCompressedAnim<Vector2D>::CCompressedAnim(); // 834
	CCompressedStatic<Vector2D, Vector2D>::CCompressedStatic(); // 1712
	CCompressedStaticVector2D::CCompressedStaticVector2D(); // 1715
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0E4B5> ../public/animationsystem/compression.h:1715
void CCompressedStaticVector2D::Instantiate()
{
} /* size: 0 */

// <025C869D> ../public/animationsystem/compression.h:1718
void CCompressedFullVector2D::CCompressedFullVector2D()
{
} /* size: 0 */

// <025C8680> ../public/animationsystem/compression.h:1718
inline void CCompressedFullVector2D::CCompressedFullVector2D()
{
} /* size: 0 */

// <025AD560> ../public/animationsystem/compression.h:1718
// function calls: 28
void CCompressedFullVector2D::~CCompressedFullVector2D()
{
	CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 1799
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Purge(); // 560
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::Purge(); // 510
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 560
	ValidateAlignment<CUtlVector<Vector2D> >(void); // 508
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Vector2D>::~CCompressedAnim(); // 904
	CCompressedList<Vector2D, Vector2D>::~CCompressedList(); // 1718
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025ACEFE> ../public/animationsystem/compression.h:1718
// function calls: 33
void CCompressedFullVector2D::~CCompressedFullVector2D()
{
	CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 1799
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Purge(); // 560
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::Purge(); // 510
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 560
	ValidateAlignment<CUtlVector<Vector2D> >(void); // 508
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<Vector2D>::~CCompressedAnim(); // 904
	CCompressedList<Vector2D, Vector2D>::~CCompressedList(); // 1718
	CCompressedFullVector2D::~CCompressedFullVector2D(); // 1718
} /* size: 136, inline expansions: 33 (699 bytes) */

// <025ACEE1> ../public/animationsystem/compression.h:1718
inline void CCompressedFullVector2D::~CCompressedFullVector2D()
{
} /* size: 0 */

// <00C20AEF> ../public/animationsystem/compression.h:1718
void CCompressedFullVector2D::~CCompressedFullVector2D()
{
} /* size: 0 */

// <00C0BEEC> ../public/animationsystem/compression.h:1718
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedFullVector2D : public CCompressedList<Vector2D, Vector2D> {
public:
	/* class CCompressedList<Vector2D, Vector2D> <ancestor>; */ /* 0 104 */
	void CCompressedFullVector2D(CCompressedFullVector2D* , CCompressedFullVector2D& );
	void CCompressedFullVector2D(CCompressedFullVector2D* , const CCompressedFullVector2D& );
	void CCompressedFullVector2D(CCompressedFullVector2D* );
	/* ../public/animationsystem/compression.h:1721 */
	virtual const char* GetName(const CCompressedFullVector2D* );
	/* ../public/animationsystem/compression.h:1721 */
	virtual const int GetFieldType(const CCompressedFullVector2D* );
	/* ../public/animationsystem/compression.h:1721 */
	virtual const int GetFlags(const CCompressedFullVector2D* );
	/* ../public/animationsystem/compression.h:1721 */
	virtual ICompressorService* Instantiate(const CCompressedFullVector2D* );
	virtual void ~CCompressedFullVector2D(CCompressedFullVector2D* );
	void CCompressedFullVector2D(class CCompressedFullVector2D *, class CCompressedFullVector2D &); /* linkage=_ZN23CCompressedFullVector2DC4EOS_ */
	void CCompressedFullVector2D(class CCompressedFullVector2D *, const class CCompressedFullVector2D  &); /* linkage=_ZN23CCompressedFullVector2DC4ERKS_ */
	void CCompressedFullVector2D(class CCompressedFullVector2D *); /* linkage=_ZN23CCompressedFullVector2DC4Ev */
	virtual const char  * GetName(const class CCompressedFullVector2D  *); /* linkage=_ZNK23CCompressedFullVector2D7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedFullVector2D  *); /* linkage=_ZNK23CCompressedFullVector2D12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedFullVector2D  *); /* linkage=_ZNK23CCompressedFullVector2D8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedFullVector2D  *); /* linkage=_ZNK23CCompressedFullVector2D11InstantiateEv */
	virtual void ~CCompressedFullVector2D(class CCompressedFullVector2D *); /* linkage=_ZN23CCompressedFullVector2DD4Ev */
};

// <025C878F> ../public/animationsystem/compression.h:1721
void CCompressedFullVector2D::GetName()
{
} /* size: 12 */

// <025C8761> ../public/animationsystem/compression.h:1721
void CCompressedFullVector2D::GetFieldType()
{
} /* size: 10 */

// <025C8733> ../public/animationsystem/compression.h:1721
void CCompressedFullVector2D::GetFlags()
{
} /* size: 10 */

// <025C8278> ../public/animationsystem/compression.h:1721
// function calls: 19
void CCompressedFullVector2D::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, i this); // 582
	CUtlMemory<Vector2D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector2D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVector(); // 582
	CCompressedAnim<Vector2D>::CCompressedAnim(); // 904
	CCompressedList<Vector2D, Vector2D>::CCompressedList(); // 1718
	CCompressedFullVector2D::CCompressedFullVector2D(); // 1721
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0E3A2> ../public/animationsystem/compression.h:1721
void CCompressedFullVector2D::Instantiate()
{
} /* size: 0 */

// <025C7D1B> ../public/animationsystem/compression.h:1730
void CCompressedReferenceVector4D::CCompressedReferenceVector4D()
{
} /* size: 0 */

// <025C7CFE> ../public/animationsystem/compression.h:1730
inline void CCompressedReferenceVector4D::CCompressedReferenceVector4D()
{
} /* size: 0 */

// <025AE10F> ../public/animationsystem/compression.h:1730
// function calls: 28
void CCompressedReferenceVector4D::~CCompressedReferenceVector4D()
{
	CUtlMemory<Vector4D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector4D, int>::Purge(); // 903
	CUtlMemory<Vector4D, int>::Purge(); // 1799
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::Purge(); // 560
	ValidateAlignment<Vector4D>(void); // 508
	CUtlMemory<Vector4D, int>::Purge(); // 510
	CUtlMemory<Vector4D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 560
	ValidateAlignment<CUtlVector<Vector4D> >(void); // 508
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Vector4D>::~CCompressedAnim(); // 810
	CCompressedReference<Vector4D>::~CCompressedReference(); // 1730
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025ADAAD> ../public/animationsystem/compression.h:1730
// function calls: 33
void CCompressedReferenceVector4D::~CCompressedReferenceVector4D()
{
	CUtlMemory<Vector4D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector4D, int>::Purge(); // 903
	CUtlMemory<Vector4D, int>::Purge(); // 1799
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::Purge(); // 560
	ValidateAlignment<Vector4D>(void); // 508
	CUtlMemory<Vector4D, int>::Purge(); // 510
	CUtlMemory<Vector4D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 560
	ValidateAlignment<CUtlVector<Vector4D> >(void); // 508
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<Vector4D>::~CCompressedAnim(); // 810
	CCompressedReference<Vector4D>::~CCompressedReference(); // 1730
	CCompressedReferenceVector4D::~CCompressedReferenceVector4D(); // 1730
} /* size: 136, inline expansions: 33 (699 bytes) */

// <025ADA90> ../public/animationsystem/compression.h:1730
inline void CCompressedReferenceVector4D::~CCompressedReferenceVector4D()
{
} /* size: 0 */

// <00C20B3A> ../public/animationsystem/compression.h:1730
void CCompressedReferenceVector4D::~CCompressedReferenceVector4D()
{
} /* size: 0 */

// <00C0BC4E> ../public/animationsystem/compression.h:1730
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedReferenceVector4D : public CCompressedReference<Vector4D> {
public:
	/* class CCompressedReference<Vector4D> <ancestor>; */ /* 0 104 */
	void CCompressedReferenceVector4D(CCompressedReferenceVector4D* , CCompressedReferenceVector4D& );
	void CCompressedReferenceVector4D(CCompressedReferenceVector4D* , const CCompressedReferenceVector4D& );
	void CCompressedReferenceVector4D(CCompressedReferenceVector4D* );
	/* ../public/animationsystem/compression.h:1733 */
	virtual const char* GetName(const CCompressedReferenceVector4D* );
	/* ../public/animationsystem/compression.h:1733 */
	virtual const int GetFieldType(const CCompressedReferenceVector4D* );
	/* ../public/animationsystem/compression.h:1733 */
	virtual const int GetFlags(const CCompressedReferenceVector4D* );
	/* ../public/animationsystem/compression.h:1733 */
	virtual ICompressorService* Instantiate(const CCompressedReferenceVector4D* );
	virtual void ~CCompressedReferenceVector4D(CCompressedReferenceVector4D* );
	void CCompressedReferenceVector4D(class CCompressedReferenceVector4D *, class CCompressedReferenceVector4D &); /* linkage=_ZN28CCompressedReferenceVector4DC4EOS_ */
	void CCompressedReferenceVector4D(class CCompressedReferenceVector4D *, const class CCompressedReferenceVector4D  &); /* linkage=_ZN28CCompressedReferenceVector4DC4ERKS_ */
	void CCompressedReferenceVector4D(class CCompressedReferenceVector4D *); /* linkage=_ZN28CCompressedReferenceVector4DC4Ev */
	virtual const char  * GetName(const class CCompressedReferenceVector4D  *); /* linkage=_ZNK28CCompressedReferenceVector4D7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedReferenceVector4D  *); /* linkage=_ZNK28CCompressedReferenceVector4D12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedReferenceVector4D  *); /* linkage=_ZNK28CCompressedReferenceVector4D8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedReferenceVector4D  *); /* linkage=_ZNK28CCompressedReferenceVector4D11InstantiateEv */
	virtual void ~CCompressedReferenceVector4D(class CCompressedReferenceVector4D *); /* linkage=_ZN28CCompressedReferenceVector4DD4Ev */
};

// <025C824A> ../public/animationsystem/compression.h:1733
void CCompressedReferenceVector4D::GetName()
{
} /* size: 12 */

// <025C821C> ../public/animationsystem/compression.h:1733
void CCompressedReferenceVector4D::GetFieldType()
{
} /* size: 10 */

// <025C81EE> ../public/animationsystem/compression.h:1733
void CCompressedReferenceVector4D::GetFlags()
{
} /* size: 7 */

// <025C78F6> ../public/animationsystem/compression.h:1733
// function calls: 19
void CCompressedReferenceVector4D::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, i this); // 582
	CUtlMemory<Vector4D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector4D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVector(); // 582
	CCompressedAnim<Vector4D>::CCompressedAnim(); // 810
	CCompressedReference<Vector4D>::CCompressedReference(); // 1730
	CCompressedReferenceVector4D::CCompressedReferenceVector4D(); // 1733
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0E1A8> ../public/animationsystem/compression.h:1733
void CCompressedReferenceVector4D::Instantiate()
{
} /* size: 0 */

// <025C77D6> ../public/animationsystem/compression.h:1736
void CCompressedStaticVector4D::CCompressedStaticVector4D()
{
} /* size: 0 */

// <025C77B9> ../public/animationsystem/compression.h:1736
inline void CCompressedStaticVector4D::CCompressedStaticVector4D()
{
} /* size: 0 */

// <025AECBE> ../public/animationsystem/compression.h:1736
// function calls: 28
void CCompressedStaticVector4D::~CCompressedStaticVector4D()
{
	CUtlMemory<Vector4D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector4D, int>::Purge(); // 903
	CUtlMemory<Vector4D, int>::Purge(); // 1799
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::Purge(); // 560
	ValidateAlignment<Vector4D>(void); // 508
	CUtlMemory<Vector4D, int>::Purge(); // 510
	CUtlMemory<Vector4D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 560
	ValidateAlignment<CUtlVector<Vector4D> >(void); // 508
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Vector4D>::~CCompressedAnim(); // 834
	CCompressedStatic<Vector4D, Vector4D>::~CCompressedStatic(); // 1736
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025AE65C> ../public/animationsystem/compression.h:1736
// function calls: 33
void CCompressedStaticVector4D::~CCompressedStaticVector4D()
{
	CUtlMemory<Vector4D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector4D, int>::Purge(); // 903
	CUtlMemory<Vector4D, int>::Purge(); // 1799
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::Purge(); // 560
	ValidateAlignment<Vector4D>(void); // 508
	CUtlMemory<Vector4D, int>::Purge(); // 510
	CUtlMemory<Vector4D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 560
	ValidateAlignment<CUtlVector<Vector4D> >(void); // 508
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<Vector4D>::~CCompressedAnim(); // 834
	CCompressedStatic<Vector4D, Vector4D>::~CCompressedStatic(); // 1736
	CCompressedStaticVector4D::~CCompressedStaticVector4D(); // 1736
} /* size: 136, inline expansions: 33 (699 bytes) */

// <025AE63F> ../public/animationsystem/compression.h:1736
inline void CCompressedStaticVector4D::~CCompressedStaticVector4D()
{
} /* size: 0 */

// <00C20B85> ../public/animationsystem/compression.h:1736
void CCompressedStaticVector4D::~CCompressedStaticVector4D()
{
} /* size: 0 */

// <00C0B982> ../public/animationsystem/compression.h:1736
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedStaticVector4D : public CCompressedStatic<Vector4D, Vector4D> {
public:
	/* class CCompressedStatic<Vector4D, Vector4D> <ancestor>; */ /* 0 104 */
	void CCompressedStaticVector4D(CCompressedStaticVector4D* , CCompressedStaticVector4D& );
	void CCompressedStaticVector4D(CCompressedStaticVector4D* , const CCompressedStaticVector4D& );
	void CCompressedStaticVector4D(CCompressedStaticVector4D* );
	/* ../public/animationsystem/compression.h:1739 */
	virtual const char* GetName(const CCompressedStaticVector4D* );
	/* ../public/animationsystem/compression.h:1739 */
	virtual const int GetFieldType(const CCompressedStaticVector4D* );
	/* ../public/animationsystem/compression.h:1739 */
	virtual const int GetFlags(const CCompressedStaticVector4D* );
	/* ../public/animationsystem/compression.h:1739 */
	virtual ICompressorService* Instantiate(const CCompressedStaticVector4D* );
	virtual void ~CCompressedStaticVector4D(CCompressedStaticVector4D* );
	void CCompressedStaticVector4D(class CCompressedStaticVector4D *, class CCompressedStaticVector4D &); /* linkage=_ZN25CCompressedStaticVector4DC4EOS_ */
	void CCompressedStaticVector4D(class CCompressedStaticVector4D *, const class CCompressedStaticVector4D  &); /* linkage=_ZN25CCompressedStaticVector4DC4ERKS_ */
	void CCompressedStaticVector4D(class CCompressedStaticVector4D *); /* linkage=_ZN25CCompressedStaticVector4DC4Ev */
	virtual const char  * GetName(const class CCompressedStaticVector4D  *); /* linkage=_ZNK25CCompressedStaticVector4D7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedStaticVector4D  *); /* linkage=_ZNK25CCompressedStaticVector4D12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedStaticVector4D  *); /* linkage=_ZNK25CCompressedStaticVector4D8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedStaticVector4D  *); /* linkage=_ZNK25CCompressedStaticVector4D11InstantiateEv */
	virtual void ~CCompressedStaticVector4D(class CCompressedStaticVector4D *); /* linkage=_ZN25CCompressedStaticVector4DD4Ev */
};

// <025C78C8> ../public/animationsystem/compression.h:1739
void CCompressedStaticVector4D::GetName()
{
} /* size: 12 */

// <025C789A> ../public/animationsystem/compression.h:1739
void CCompressedStaticVector4D::GetFieldType()
{
} /* size: 10 */

// <025C786C> ../public/animationsystem/compression.h:1739
void CCompressedStaticVector4D::GetFlags()
{
} /* size: 7 */

// <025C73B1> ../public/animationsystem/compression.h:1739
// function calls: 19
void CCompressedStaticVector4D::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, i this); // 582
	CUtlMemory<Vector4D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector4D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVector(); // 582
	CCompressedAnim<Vector4D>::CCompressedAnim(); // 834
	CCompressedStatic<Vector4D, Vector4D>::CCompressedStatic(); // 1736
	CCompressedStaticVector4D::CCompressedStaticVector4D(); // 1739
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0E095> ../public/animationsystem/compression.h:1739
void CCompressedStaticVector4D::Instantiate()
{
} /* size: 0 */

// <025C7291> ../public/animationsystem/compression.h:1742
void CCompressedFullVector4D::CCompressedFullVector4D()
{
} /* size: 0 */

// <025C7274> ../public/animationsystem/compression.h:1742
inline void CCompressedFullVector4D::CCompressedFullVector4D()
{
} /* size: 0 */

// <025AF86D> ../public/animationsystem/compression.h:1742
// function calls: 28
void CCompressedFullVector4D::~CCompressedFullVector4D()
{
	CUtlMemory<Vector4D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector4D, int>::Purge(); // 903
	CUtlMemory<Vector4D, int>::Purge(); // 1799
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::Purge(); // 560
	ValidateAlignment<Vector4D>(void); // 508
	CUtlMemory<Vector4D, int>::Purge(); // 510
	CUtlMemory<Vector4D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 560
	ValidateAlignment<CUtlVector<Vector4D> >(void); // 508
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	CCompressedAnim<Vector4D>::~CCompressedAnim(); // 904
	CCompressedList<Vector4D, Vector4D>::~CCompressedList(); // 1742
} /* size: 134, inline expansions: 28 (632 bytes) */

// <025AF20B> ../public/animationsystem/compression.h:1742
// function calls: 33
void CCompressedFullVector4D::~CCompressedFullVector4D()
{
	CUtlMemory<Vector4D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector4D, int>::Purge(); // 903
	CUtlMemory<Vector4D, int>::Purge(); // 1799
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::RemoveAll(); // 1798
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::Purge(); // 560
	ValidateAlignment<Vector4D>(void); // 508
	CUtlMemory<Vector4D, int>::Purge(); // 510
	CUtlMemory<Vector4D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 560
	ValidateAlignment<CUtlVector<Vector4D> >(void); // 508
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, i this); // 582
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 582
	ICompressorService::~ICompressorService(); // 582
	CCompressedAnim<Vector4D>::~CCompressedAnim(); // 904
	CCompressedList<Vector4D, Vector4D>::~CCompressedList(); // 1742
	CCompressedFullVector4D::~CCompressedFullVector4D(); // 1742
} /* size: 136, inline expansions: 33 (699 bytes) */

// <025AF1EE> ../public/animationsystem/compression.h:1742
inline void CCompressedFullVector4D::~CCompressedFullVector4D()
{
} /* size: 0 */

// <00C20BD0> ../public/animationsystem/compression.h:1742
void CCompressedFullVector4D::~CCompressedFullVector4D()
{
} /* size: 0 */

// <00C0B6B6> ../public/animationsystem/compression.h:1742
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 104
class CCompressedFullVector4D : public CCompressedList<Vector4D, Vector4D> {
public:
	/* class CCompressedList<Vector4D, Vector4D> <ancestor>; */ /* 0 104 */
	void CCompressedFullVector4D(CCompressedFullVector4D* , CCompressedFullVector4D& );
	void CCompressedFullVector4D(CCompressedFullVector4D* , const CCompressedFullVector4D& );
	void CCompressedFullVector4D(CCompressedFullVector4D* );
	/* ../public/animationsystem/compression.h:1745 */
	virtual const char* GetName(const CCompressedFullVector4D* );
	/* ../public/animationsystem/compression.h:1745 */
	virtual const int GetFieldType(const CCompressedFullVector4D* );
	/* ../public/animationsystem/compression.h:1745 */
	virtual const int GetFlags(const CCompressedFullVector4D* );
	/* ../public/animationsystem/compression.h:1745 */
	virtual ICompressorService* Instantiate(const CCompressedFullVector4D* );
	virtual void ~CCompressedFullVector4D(CCompressedFullVector4D* );
	void CCompressedFullVector4D(class CCompressedFullVector4D *, class CCompressedFullVector4D &); /* linkage=_ZN23CCompressedFullVector4DC4EOS_ */
	void CCompressedFullVector4D(class CCompressedFullVector4D *, const class CCompressedFullVector4D  &); /* linkage=_ZN23CCompressedFullVector4DC4ERKS_ */
	void CCompressedFullVector4D(class CCompressedFullVector4D *); /* linkage=_ZN23CCompressedFullVector4DC4Ev */
	virtual const char  * GetName(const class CCompressedFullVector4D  *); /* linkage=_ZNK23CCompressedFullVector4D7GetNameEv */
	virtual const int  GetFieldType(const class CCompressedFullVector4D  *); /* linkage=_ZNK23CCompressedFullVector4D12GetFieldTypeEv */
	virtual const int  GetFlags(const class CCompressedFullVector4D  *); /* linkage=_ZNK23CCompressedFullVector4D8GetFlagsEv */
	virtual class ICompressorService * Instantiate(const class CCompressedFullVector4D  *); /* linkage=_ZNK23CCompressedFullVector4D11InstantiateEv */
	virtual void ~CCompressedFullVector4D(class CCompressedFullVector4D *); /* linkage=_ZN23CCompressedFullVector4DD4Ev */
};

// <025C7383> ../public/animationsystem/compression.h:1745
void CCompressedFullVector4D::GetName()
{
} /* size: 12 */

// <025C7355> ../public/animationsystem/compression.h:1745
void CCompressedFullVector4D::GetFieldType()
{
} /* size: 10 */

// <025C7327> ../public/animationsystem/compression.h:1745
void CCompressedFullVector4D::GetFlags()
{
} /* size: 10 */

// <025C6E6C> ../public/animationsystem/compression.h:1745
// function calls: 19
void CCompressedFullVector4D::Instantiate()
{
	ICompressorService::ICompressorService(); // 582
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 582
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4 this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >, CUtlMemory<CUtlVector<Vector4D, CUtlMemory<Vector4D, i this); // 582
	CUtlMemory<Vector4D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector4D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVector(); // 582
	CCompressedAnim<Vector4D>::CCompressedAnim(); // 904
	CCompressedList<Vector4D, Vector4D>::CCompressedList(); // 1742
	CCompressedFullVector4D::CCompressedFullVector4D(); // 1745
} /* size: 123, inline expansions: 19 (495 bytes) */

// <00D0DF82> ../public/animationsystem/compression.h:1745
void CCompressedFullVector4D::Instantiate()
{
} /* size: 0 */

