
//
// public/bonesetup/bone_accessor.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 80
//	classes: 3
//

// <0004B247> ../public/bonesetup/bone_accessor.h:25
// member functions: 36
// member variables: 4
// class size: 24
class CBoneAccessor<CTransform> {
	/* ../public/bonesetup/bone_accessor.h:28 */
	void CBoneAccessor(CBoneAccessor<CTransform>* );
	/* ../public/bonesetup/bone_accessor.h:29 */
	void CBoneAccessor(CBoneAccessor<CTransform>* , int);
	/* ../public/bonesetup/bone_accessor.h:30 */
	void CBoneAccessor(CBoneAccessor<CTransform>* , int, const CTransform* , const uint32* );
	/* ../public/bonesetup/bone_accessor.h:31 */
	void CBoneAccessor(CBoneAccessor<CTransform>* , const CBoneAccessor<CTransform>& );
	/* ../public/bonesetup/bone_accessor.h:32 */
	void ~CBoneAccessor(CBoneAccessor<CTransform>* );
	/* ../public/bonesetup/bone_accessor.h:34 */
	const CBoneAccessor<CTransform>& operator=(CBoneAccessor<CTransform>* , const CBoneAccessor<CTransform>& );
	/* ../public/bonesetup/bone_accessor.h:36 */
	void Init(CBoneAccessor<CTransform>* , int);
	/* ../public/bonesetup/bone_accessor.h:37 */
	void Init(CBoneAccessor<CTransform>* , int, const CTransform* , const uint32* );
	/* ../public/bonesetup/bone_accessor.h:38 */
	void Cleanup(CBoneAccessor<CTransform>* );
	/* ../public/bonesetup/bone_accessor.h:40 */
	bool IsValid(const CBoneAccessor<CTransform>* );
	/* ../public/bonesetup/bone_accessor.h:42 */
	bool IsBoneReadable(const CBoneAccessor<CTransform>* , int);
	/* ../public/bonesetup/bone_accessor.h:44 */
	const CTransform& GetBone(const CBoneAccessor<CTransform>* , int);
	/* ../public/bonesetup/bone_accessor.h:45 */
	const CTransform& operator[](const CBoneAccessor<CTransform>* , int);
	/* ../public/bonesetup/bone_accessor.h:47 */
	int GetNumBones(const CBoneAccessor<CTransform>* );
	/* ../public/bonesetup/bone_accessor.h:48 */
	const CTransform* GetBoneArray_Unchecked(const CBoneAccessor<CTransform>* );
	/* ../public/bonesetup/bone_accessor.h:49 */
	const uint32* GetReadableBones(const CBoneAccessor<CTransform>* );
protected:
	/* ../public/bonesetup/bone_accessor.h:52 */
	void SanityCheckBone(const CBoneAccessor<CTransform>* , int);
	/* ../public/bonesetup/bone_accessor.h:53 */
	void Alloc(CBoneAccessor<CTransform>* , int);
	const class CTransform * m_pBones; /* 0 8 */
	const uint32 * m_pReadableBones; /* 8 8 */
	uint16 m_nBones; /* 16 2 */
	bool m_bOwnsMemory; /* 18 1 */
	void CBoneAccessor(class CBoneAccessor<CTransform> *); /* linkage=_ZN13CBoneAccessorI10CTransformEC4Ev */
	void CBoneAccessor(class CBoneAccessor<CTransform> *, int); /* linkage=_ZN13CBoneAccessorI10CTransformEC4Ei */
	void CBoneAccessor(class CBoneAccessor<CTransform> *, int, const class CTransform  *, const uint32  *); /* linkage=_ZN13CBoneAccessorI10CTransformEC4EiPKS0_PKj */
	void CBoneAccessor(class CBoneAccessor<CTransform> *, const class CBoneAccessor<CTransform>  &); /* linkage=_ZN13CBoneAccessorI10CTransformEC4ERKS1_ */
	void ~CBoneAccessor(class CBoneAccessor<CTransform> *); /* linkage=_ZN13CBoneAccessorI10CTransformED4Ev */
	const class CBoneAccessor<CTransform>  & operator=(class CBoneAccessor<CTransform> *, const class CBoneAccessor<CTransform>  &); /* linkage=_ZN13CBoneAccessorI10CTransformEaSERKS1_ */
	void Init(class CBoneAccessor<CTransform> *, int); /* linkage=_ZN13CBoneAccessorI10CTransformE4InitEi */
	/* <342913c> ../public/bonesetup/bone_accessor.h:200 */
	void Init(class CBoneAccessor<CTransform> *, int, const class CTransform  *, const uint32  *); /* linkage=_ZN13CBoneAccessorI10CTransformE4InitEiPKS0_PKj */
	/* <34291ec> ../public/bonesetup/bone_accessor.h:224 */
	void Cleanup(class CBoneAccessor<CTransform> *); /* linkage=_ZN13CBoneAccessorI10CTransformE7CleanupEv */
	bool IsValid(const class CBoneAccessor<CTransform>  *); /* linkage=_ZNK13CBoneAccessorI10CTransformE7IsValidEv */
	/* <3429237> ../public/bonesetup/bone_accessor.h:244 */
	bool IsBoneReadable(const class CBoneAccessor<CTransform>  *, int); /* linkage=_ZNK13CBoneAccessorI10CTransformE14IsBoneReadableEi */
	/* <288b174> ../public/bonesetup/bone_accessor.h:250 */
	const class CTransform  & GetBone(const class CBoneAccessor<CTransform>  *, int); /* linkage=_ZNK13CBoneAccessorI10CTransformE7GetBoneEi */
	const class CTransform  & operator[](const class CBoneAccessor<CTransform>  *, int); /* linkage=_ZNK13CBoneAccessorI10CTransformEixEi */
	/* <34292b8> ../public/bonesetup/bone_accessor.h:268 */
	int GetNumBones(const class CBoneAccessor<CTransform>  *); /* linkage=_ZNK13CBoneAccessorI10CTransformE11GetNumBonesEv */
	/* <288b344> ../public/bonesetup/bone_accessor.h:274 */
	const class CTransform  * GetBoneArray_Unchecked(const class CBoneAccessor<CTransform>  *); /* linkage=_ZNK13CBoneAccessorI10CTransformE22GetBoneArray_UncheckedEv */
	/* <288b36e> ../public/bonesetup/bone_accessor.h:280 */
	const uint32  * GetReadableBones(const class CBoneAccessor<CTransform>  *); /* linkage=_ZNK13CBoneAccessorI10CTransformE16GetReadableBonesEv */
	/* <34292e2> ../public/bonesetup/bone_accessor.h:286 */
	void SanityCheckBone(const class CBoneAccessor<CTransform>  *, int); /* linkage=_ZNK13CBoneAccessorI10CTransformE15SanityCheckBoneEi */
	/* <3429401> ../public/bonesetup/bone_accessor.h:212 */
	void Alloc(class CBoneAccessor<CTransform> *, int); /* linkage=_ZN13CBoneAccessorI10CTransformE5AllocEi */
};

// <0283DAB9> ../public/bonesetup/bone_accessor.h:25
// member functions: 18
// member variables: 4
// class size: 24
class CBoneAccessor<matrix3x4a_t> {
	/* ../public/bonesetup/bone_accessor.h:149 */
	void CBoneAccessor(CBoneAccessor<matrix3x4a_t>* );
	/* ../public/bonesetup/bone_accessor.h:154 */
	void CBoneAccessor(CBoneAccessor<matrix3x4a_t>* , int);
	/* ../public/bonesetup/bone_accessor.h:160 */
	void CBoneAccessor(CBoneAccessor<matrix3x4a_t>* , int, const matrix3x4a_t* , const uint32* );
	/* ../public/bonesetup/bone_accessor.h:170 */
	void CBoneAccessor(CBoneAccessor<matrix3x4a_t>* , const CBoneAccessor<matrix3x4a_t>& );
	/* ../public/bonesetup/bone_accessor.h:179 */
	void ~CBoneAccessor(CBoneAccessor<matrix3x4a_t>* );
	/* ../public/bonesetup/bone_accessor.h:185 */
	const CBoneAccessor<matrix3x4a_t>& operator=(CBoneAccessor<matrix3x4a_t>* , const CBoneAccessor<matrix3x4a_t>& );
	/* ../public/bonesetup/bone_accessor.h:192 */
	void Init(CBoneAccessor<matrix3x4a_t>* , int);
	/* ../public/bonesetup/bone_accessor.h:200 */
	void Init(CBoneAccessor<matrix3x4a_t>* , int, const matrix3x4a_t* , const uint32* );
	/* ../public/bonesetup/bone_accessor.h:224 */
	void Cleanup(CBoneAccessor<matrix3x4a_t>* );
	/* ../public/bonesetup/bone_accessor.h:238 */
	bool IsValid(const CBoneAccessor<matrix3x4a_t>* );
	/* ../public/bonesetup/bone_accessor.h:244 */
	bool IsBoneReadable(const CBoneAccessor<matrix3x4a_t>* , int);
	/* ../public/bonesetup/bone_accessor.h:250 */
	const matrix3x4a_t& GetBone(const CBoneAccessor<matrix3x4a_t>* , int);
	/* ../public/bonesetup/bone_accessor.h:259 */
	const matrix3x4a_t& operator[](const CBoneAccessor<matrix3x4a_t>* , int);
	/* ../public/bonesetup/bone_accessor.h:268 */
	int GetNumBones(const CBoneAccessor<matrix3x4a_t>* );
	/* ../public/bonesetup/bone_accessor.h:274 */
	const matrix3x4a_t* GetBoneArray_Unchecked(const CBoneAccessor<matrix3x4a_t>* );
	/* ../public/bonesetup/bone_accessor.h:280 */
	const uint32* GetReadableBones(const CBoneAccessor<matrix3x4a_t>* );
protected:
	/* ../public/bonesetup/bone_accessor.h:286 */
	void SanityCheckBone(const CBoneAccessor<matrix3x4a_t>* , int);
	/* ../public/bonesetup/bone_accessor.h:212 */
	void Alloc(CBoneAccessor<matrix3x4a_t>* , int);
	const class matrix3x4a_t * m_pBones; /* 0 8 */
	const uint32 * m_pReadableBones; /* 8 8 */
	uint16 m_nBones; /* 16 2 */
	bool m_bOwnsMemory; /* 18 1 */
};

// <02889AD3> ../public/bonesetup/bone_accessor.h:70
void CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor()
{
} /* size: 0 */

// <02889AB7> ../public/bonesetup/bone_accessor.h:70
inline void CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor()
{
} /* size: 0 */

// <00BF36EE> ../public/bonesetup/bone_accessor.h:70
// member functions: 26
// member variable: 1
// class size: 24
class CWritableBoneAccessor<CTransform> : public CBoneAccessor<CTransform> {
public:
	/* class CBoneAccessor<CTransform> <ancestor>; */ /* 0 24 */
	/* ../public/bonesetup/bone_accessor.h:300 */
	void CWritableBoneAccessor(CWritableBoneAccessor<CTransform>* );
	/* ../public/bonesetup/bone_accessor.h:305 */
	void CWritableBoneAccessor(CWritableBoneAccessor<CTransform>* , int, CTransform* , uint32* );
	/* ../public/bonesetup/bone_accessor.h:311 */
	void CWritableBoneAccessor(CWritableBoneAccessor<CTransform>* , const CWritableBoneAccessor<CTransform>& );
	/* ../public/bonesetup/bone_accessor.h:317 */
	const CWritableBoneAccessor<CTransform>& operator=(CWritableBoneAccessor<CTransform>* , const CWritableBoneAccessor<CTransform>& );
	/* ../public/bonesetup/bone_accessor.h:324 */
	void CopyFrom(CWritableBoneAccessor<CTransform>* , const CBoneAccessor<CTransform>& );
	/* ../public/bonesetup/bone_accessor.h:338 */
	void SetBoneAndMarkReadable(CWritableBoneAccessor<CTransform>* , int, const CTransform& );
	/* ../public/bonesetup/bone_accessor.h:345 */
	void SetBone(CWritableBoneAccessor<CTransform>* , int, const CTransform& );
	/* ../public/bonesetup/bone_accessor.h:351 */
	CTransform& GetBoneForWrite(CWritableBoneAccessor<CTransform>* , int);
	/* ../public/bonesetup/bone_accessor.h:360 */
	CTransform* GetBoneArrayForWrite(CWritableBoneAccessor<CTransform>* );
	/* ../public/bonesetup/bone_accessor.h:366 */
	void MarkBoneReadable(CWritableBoneAccessor<CTransform>* , int, bool);
	/* ../public/bonesetup/bone_accessor.h:382 */
	uint32* GetReadableBoneArrayForWrite(CWritableBoneAccessor<CTransform>* );
	/* ../public/bonesetup/bone_accessor.h:388 */
	void ClearBoneReadableBits(CWritableBoneAccessor<CTransform>* );
	void ~CWritableBoneAccessor(CWritableBoneAccessor<CTransform>* );
	void CWritableBoneAccessor(class CWritableBoneAccessor<CTransform> *); /* linkage=_ZN21CWritableBoneAccessorI10CTransformEC4Ev */
	void CWritableBoneAccessor(class CWritableBoneAccessor<CTransform> *, int, class CTransform *, uint32 *); /* linkage=_ZN21CWritableBoneAccessorI10CTransformEC4EiPS0_Pj */
	void CWritableBoneAccessor(class CWritableBoneAccessor<CTransform> *, const class CWritableBoneAccessor<CTransform>  &); /* linkage=_ZN21CWritableBoneAccessorI10CTransformEC4ERKS1_ */
	const class CWritableBoneAccessor<CTransform>  & operator=(class CWritableBoneAccessor<CTransform> *, const class CWritableBoneAccessor<CTransform>  &); /* linkage=_ZN21CWritableBoneAccessorI10CTransformEaSERKS1_ */
	void CopyFrom(class CWritableBoneAccessor<CTransform> *, const class CBoneAccessor<CTransform>  &); /* linkage=_ZN21CWritableBoneAccessorI10CTransformE8CopyFromERK13CBoneAccessorIS0_E */
	void SetBoneAndMarkReadable(class CWritableBoneAccessor<CTransform> *, int, const class CTransform  &); /* linkage=_ZN21CWritableBoneAccessorI10CTransformE22SetBoneAndMarkReadableEiRKS0_ */
	void SetBone(class CWritableBoneAccessor<CTransform> *, int, const class CTransform  &); /* linkage=_ZN21CWritableBoneAccessorI10CTransformE7SetBoneEiRKS0_ */
	class CTransform & GetBoneForWrite(class CWritableBoneAccessor<CTransform> *, int); /* linkage=_ZN21CWritableBoneAccessorI10CTransformE15GetBoneForWriteEi */
	class CTransform * GetBoneArrayForWrite(class CWritableBoneAccessor<CTransform> *); /* linkage=_ZN21CWritableBoneAccessorI10CTransformE20GetBoneArrayForWriteEv */
	void MarkBoneReadable(class CWritableBoneAccessor<CTransform> *, int, bool); /* linkage=_ZN21CWritableBoneAccessorI10CTransformE16MarkBoneReadableEib */
	uint32 * GetReadableBoneArrayForWrite(class CWritableBoneAccessor<CTransform> *); /* linkage=_ZN21CWritableBoneAccessorI10CTransformE28GetReadableBoneArrayForWriteEv */
	void ClearBoneReadableBits(class CWritableBoneAccessor<CTransform> *); /* linkage=_ZN21CWritableBoneAccessorI10CTransformE21ClearBoneReadableBitsEv */
	void ~CWritableBoneAccessor(class CWritableBoneAccessor<CTransform> *); /* linkage=_ZN21CWritableBoneAccessorI10CTransformED4Ev */
};

// <0342418F> ../public/bonesetup/bone_accessor.h:149
void CBoneAccessor<CTransform>::CBoneAccessor()
{
} /* size: 0 */

// <03424174> ../public/bonesetup/bone_accessor.h:149
inline void CBoneAccessor<CTransform>::CBoneAccessor()
{
} /* size: 0 */

// <03423F33> ../public/bonesetup/bone_accessor.h:154
// function calls: 5
void CBoneAccessor<CTransform>::CBoneAccessor(int nBones)
{
	CalcNumIntsForBits(int numBits); // 215
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 342
	BitVec_ClearAll(uint32* pDst,
			int nDWords);  // 216
	{
	}
	CBoneAccessor<CTransform>::Alloc(
		int nBones);  // 156
} /* size: 0, inline expansions: 5 (0 bytes) */

// <03423F0C> ../public/bonesetup/bone_accessor.h:154
inline void CBoneAccessor<CTransform>::CBoneAccessor(int nBones)
{
} /* size: 0 */

// <03423E6A> ../public/bonesetup/bone_accessor.h:160
void CBoneAccessor<CTransform>::CBoneAccessor(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	{
		{
		}
	}
	{
		{
		}
	}
} /* size: 0 */

// <03423E01> ../public/bonesetup/bone_accessor.h:160
// variables: 2
inline void CBoneAccessor<CTransform>::CBoneAccessor(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 31487
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 164
	}
} /* size: 0, variables: 1 */

// <033ED533> ../public/bonesetup/bone_accessor.h:160
// variables: 2
inline void CBoneAccessor<CTransform>::CBoneAccessor(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 37515
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 164
	}
} /* size: 0, variables: 1 */

// <033247FB> ../public/bonesetup/bone_accessor.h:160
// variables: 2
inline void CBoneAccessor<CTransform>::CBoneAccessor(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 25232
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 164
	}
} /* size: 0, variables: 1 */

// <0288A492> ../public/bonesetup/bone_accessor.h:160
// variables: 2
inline void CBoneAccessor<CTransform>::CBoneAccessor(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 61946
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 164
	}
} /* size: 0, variables: 1 */

// <0286160F> ../public/bonesetup/bone_accessor.h:160
// variables: 2
inline void CBoneAccessor<CTransform>::CBoneAccessor(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 60272
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 164
	}
} /* size: 0, variables: 1 */

// <0263A5F3> ../public/bonesetup/bone_accessor.h:160
// variables: 2
inline void CBoneAccessor<CTransform>::CBoneAccessor(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 64273
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 164
	}
} /* size: 0, variables: 1 */

// <00CE3402> ../public/bonesetup/bone_accessor.h:160
// variables: 2
inline void CBoneAccessor<CTransform>::CBoneAccessor(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 22006
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 164
	}
} /* size: 0, variables: 1 */

// <0014D4F1> ../public/bonesetup/bone_accessor.h:160
// variables: 2
inline void CBoneAccessor<CTransform>::CBoneAccessor(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 43382
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 164
	}
} /* size: 0, variables: 1 */

// <000F8D06> ../public/bonesetup/bone_accessor.h:160
// variables: 2
inline void CBoneAccessor<CTransform>::CBoneAccessor(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 31410
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 164
	}
} /* size: 0, variables: 1 */

// <00093CFC> ../public/bonesetup/bone_accessor.h:160
// variables: 2
inline void CBoneAccessor<CTransform>::CBoneAccessor(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 48462
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 164
	}
} /* size: 0, variables: 1 */

// <03423DCC> ../public/bonesetup/bone_accessor.h:170
void CBoneAccessor<CTransform>::CBoneAccessor(const CBoneAccessor<CTransform>& that)
{
} /* size: 0 */

// <03423DA5> ../public/bonesetup/bone_accessor.h:170
inline void CBoneAccessor<CTransform>::CBoneAccessor(const CBoneAccessor<CTransform>& that)
{
} /* size: 0 */

// <03423D21> ../public/bonesetup/bone_accessor.h:179
// function call: 1
void CBoneAccessor<CTransform>::~CBoneAccessor()
{
	CBoneAccessor<CTransform>::Cleanup(); // 181
} /* size: 0, inline expansions: 1 (0 bytes) */

// <03423D06> ../public/bonesetup/bone_accessor.h:179
inline void CBoneAccessor<CTransform>::~CBoneAccessor()
{
} /* size: 0 */

// <03423C31> ../public/bonesetup/bone_accessor.h:185
// function calls: 2
void CBoneAccessor<CTransform>::operator=(const CBoneAccessor<CTransform>& that)
{
	CBoneAccessor<CTransform>::Cleanup(); // 202
	CBoneAccessor<CTransform>::Init(
		int nBones,
		const CTransform* pBones,
		const uint32* pReadableBones);  // 187
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0342399E> ../public/bonesetup/bone_accessor.h:192
// function calls: 6
void CBoneAccessor<CTransform>::Init(int nBones)
{
	CBoneAccessor<CTransform>::Cleanup(); // 194
	CalcNumIntsForBits(int numBits); // 215
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 342
	BitVec_ClearAll(uint32* pDst,
			int nDWords);  // 216
	{
	}
	CBoneAccessor<CTransform>::Alloc(
		int nBones);  // 196
} /* size: 0, inline expansions: 6 (0 bytes) */

// <0342913C> ../public/bonesetup/bone_accessor.h:200
// function call: 1
void CBoneAccessor<CTransform>::Init(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	CBoneAccessor<CTransform>::Cleanup(); // 202
	{
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0342391A> ../public/bonesetup/bone_accessor.h:200
// variables: 2
inline void CBoneAccessor<CTransform>::Init(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 31274
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
} /* size: 0, variables: 1 */

// <033ED04D> ../public/bonesetup/bone_accessor.h:200
// variables: 2
inline void CBoneAccessor<CTransform>::Init(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 37297
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
} /* size: 0, variables: 1 */

// <03324317> ../public/bonesetup/bone_accessor.h:200
// variables: 2
inline void CBoneAccessor<CTransform>::Init(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 25009
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
} /* size: 0, variables: 1 */

// <02889FAE> ../public/bonesetup/bone_accessor.h:200
// variables: 2
inline void CBoneAccessor<CTransform>::Init(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 61728
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
} /* size: 0, variables: 1 */

// <02861126> ../public/bonesetup/bone_accessor.h:200
// variables: 2
inline void CBoneAccessor<CTransform>::Init(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 60059
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
} /* size: 0, variables: 1 */

// <01B4F153> ../public/bonesetup/bone_accessor.h:200
// variables: 2
inline void CBoneAccessor<CTransform>::Init(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 12403
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
} /* size: 0, variables: 1 */

// <00CE2F1B> ../public/bonesetup/bone_accessor.h:200
// variables: 2
inline void CBoneAccessor<CTransform>::Init(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 21763
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
} /* size: 0, variables: 1 */

// <0014D00C> ../public/bonesetup/bone_accessor.h:200
// variables: 2
inline void CBoneAccessor<CTransform>::Init(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 43169
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
} /* size: 0, variables: 1 */

// <00093816> ../public/bonesetup/bone_accessor.h:200
// variables: 2
inline void CBoneAccessor<CTransform>::Init(int nBones, const CTransform* pBones, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 48244
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
} /* size: 0, variables: 1 */

// <03429401> ../public/bonesetup/bone_accessor.h:212
// variable: 1
// function calls: 4
void CBoneAccessor<CTransform>::Alloc(int nBones)
{
	uint32* pReadableBones; // 215
	CalcNumIntsForBits(int numBits); // 215
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 342
	BitVec_ClearAll(uint32* pDst,
			int nDWords);  // 216
	{
	}
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <03423371> ../public/bonesetup/bone_accessor.h:212
// variables: 3
inline void CBoneAccessor<CTransform>::Alloc(int nBones)
{
	const char   __FUNCTION__; // 31301
	uint32* pReadableBones; // 215
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
} /* size: 0, variables: 2 */

// <033ECAA2> ../public/bonesetup/bone_accessor.h:212
// variables: 3
inline void CBoneAccessor<CTransform>::Alloc(int nBones)
{
	const char   __FUNCTION__; // 37324
	uint32* pReadableBones; // 215
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
} /* size: 0, variables: 2 */

// <03323D70> ../public/bonesetup/bone_accessor.h:212
// variables: 3
inline void CBoneAccessor<CTransform>::Alloc(int nBones)
{
	const char   __FUNCTION__; // 25036
	uint32* pReadableBones; // 215
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
} /* size: 0, variables: 2 */

// <02889BC4> ../public/bonesetup/bone_accessor.h:212
// variables: 3
inline void CBoneAccessor<CTransform>::Alloc(int nBones)
{
	const char   __FUNCTION__; // 61755
	uint32* pReadableBones; // 215
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
} /* size: 0, variables: 2 */

// <02860B79> ../public/bonesetup/bone_accessor.h:212
// variables: 3
inline void CBoneAccessor<CTransform>::Alloc(int nBones)
{
	const char   __FUNCTION__; // 60086
	uint32* pReadableBones; // 215
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
} /* size: 0, variables: 2 */

// <02639B5F> ../public/bonesetup/bone_accessor.h:212
// variables: 3
inline void CBoneAccessor<CTransform>::Alloc(int nBones)
{
	const char   __FUNCTION__; // 64087
	uint32* pReadableBones; // 215
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
} /* size: 0, variables: 2 */

// <01BB1401> ../public/bonesetup/bone_accessor.h:212
// variables: 3
inline void CBoneAccessor<CTransform>::Alloc(int nBones)
{
	const char   __FUNCTION__; // 18539
	uint32* pReadableBones; // 215
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
} /* size: 0, variables: 2 */

// <01B4ED68> ../public/bonesetup/bone_accessor.h:212
// variables: 3
inline void CBoneAccessor<CTransform>::Alloc(int nBones)
{
	const char   __FUNCTION__; // 12430
	uint32* pReadableBones; // 215
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
} /* size: 0, variables: 2 */

// <0014CA5F> ../public/bonesetup/bone_accessor.h:212
// variables: 3
inline void CBoneAccessor<CTransform>::Alloc(int nBones)
{
	const char   __FUNCTION__; // 43196
	uint32* pReadableBones; // 215
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
} /* size: 0, variables: 2 */

// <0009326F> ../public/bonesetup/bone_accessor.h:212
// variables: 3
inline void CBoneAccessor<CTransform>::Alloc(int nBones)
{
	const char   __FUNCTION__; // 48271
	uint32* pReadableBones; // 215
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
} /* size: 0, variables: 2 */

// <034291EC> ../public/bonesetup/bone_accessor.h:224
void CBoneAccessor<CTransform>::Cleanup()
{
} /* size: 0 */

// <034238FF> ../public/bonesetup/bone_accessor.h:224
inline void CBoneAccessor<CTransform>::Cleanup()
{
} /* size: 0 */

// <034238CD> ../public/bonesetup/bone_accessor.h:238
void CBoneAccessor<CTransform>::IsValid()
{
} /* size: 0 */

// <03429237> ../public/bonesetup/bone_accessor.h:244
// function call: 1
void CBoneAccessor<CTransform>::IsBoneReadable(int iBone)
{
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 246
} /* size: 0, inline expansions: 1 (0 bytes) */

// <034238A6> ../public/bonesetup/bone_accessor.h:244
inline void CBoneAccessor<CTransform>::IsBoneReadable(int iBone)
{
} /* size: 0 */

// <02840CBB> ../public/bonesetup/bone_accessor.h:244
inline void CBoneAccessor<matrix3x4a_t>::IsBoneReadable(int iBone)
{
} /* size: 0 */

// <034236F0> ../public/bonesetup/bone_accessor.h:250
// function calls: 4
void CBoneAccessor<CTransform>::GetBone(int iBone)
{
	CBoneAccessor<CTransform>::GetNumBones(); // 289
	{
	}
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 246
	CBoneAccessor<CTransform>::IsBoneReadable(
			int iBone);  // 290
	CBoneAccessor<CTransform>::SanityCheckBone(
			int iBone);  // 253
} /* size: 0, inline expansions: 4 (0 bytes) */

// <02889F13> ../public/bonesetup/bone_accessor.h:250
inline void CBoneAccessor<CTransform>::GetBone(int iBone)
{
} /* size: 0 */

// <03423537> ../public/bonesetup/bone_accessor.h:259
// function calls: 4
void CBoneAccessor<CTransform>::operator[](int iBone)
{
	CBoneAccessor<CTransform>::GetNumBones(); // 289
	{
	}
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 246
	CBoneAccessor<CTransform>::IsBoneReadable(
			int iBone);  // 290
	CBoneAccessor<CTransform>::SanityCheckBone(
			int iBone);  // 262
} /* size: 0, inline expansions: 4 (0 bytes) */

// <034292B8> ../public/bonesetup/bone_accessor.h:268
void CBoneAccessor<CTransform>::GetNumBones()
{
} /* size: 0 */

// <0342351B> ../public/bonesetup/bone_accessor.h:268
inline void CBoneAccessor<CTransform>::GetNumBones()
{
} /* size: 0 */

// <034234E8> ../public/bonesetup/bone_accessor.h:274
void CBoneAccessor<CTransform>::GetBoneArray_Unchecked()
{
} /* size: 0 */

// <02889D22> ../public/bonesetup/bone_accessor.h:274
inline void CBoneAccessor<CTransform>::GetBoneArray_Unchecked()
{
} /* size: 0 */

// <02840CE0> ../public/bonesetup/bone_accessor.h:274
inline void CBoneAccessor<matrix3x4a_t>::GetBoneArray_Unchecked()
{
} /* size: 0 */

// <034234B5> ../public/bonesetup/bone_accessor.h:280
void CBoneAccessor<CTransform>::GetReadableBones()
{
} /* size: 0 */

// <02889D06> ../public/bonesetup/bone_accessor.h:280
inline void CBoneAccessor<CTransform>::GetReadableBones()
{
} /* size: 0 */

// <034292E2> ../public/bonesetup/bone_accessor.h:286
// function calls: 3
void CBoneAccessor<CTransform>::SanityCheckBone(int iBone)
{
	CBoneAccessor<CTransform>::GetNumBones(); // 289
	{
	}
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 246
	CBoneAccessor<CTransform>::IsBoneReadable(
			int iBone);  // 290
} /* size: 0, inline expansions: 3 (0 bytes) */

// <034290DD> ../public/bonesetup/bone_accessor.h:286
void CBoneAccessor<CTransform>::SanityCheckBone()
{
	{
	}
} /* size: 0 */

// <034233E9> ../public/bonesetup/bone_accessor.h:286
// variables: 3
inline void CBoneAccessor<CTransform>::SanityCheckBone(int iBone)
{
	const char   __FUNCTION__; // 31541
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <033ECB19> ../public/bonesetup/bone_accessor.h:286
// variables: 3
inline void CBoneAccessor<CTransform>::SanityCheckBone(int iBone)
{
	const char   __FUNCTION__; // 37569
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <03323DE6> ../public/bonesetup/bone_accessor.h:286
// variables: 3
inline void CBoneAccessor<CTransform>::SanityCheckBone(int iBone)
{
	const char   __FUNCTION__; // 25281
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <02860BF1> ../public/bonesetup/bone_accessor.h:286
// variables: 3
inline void CBoneAccessor<CTransform>::SanityCheckBone(int iBone)
{
	const char   __FUNCTION__; // 60326
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <02639BD7> ../public/bonesetup/bone_accessor.h:286
// variables: 3
inline void CBoneAccessor<CTransform>::SanityCheckBone(int iBone)
{
	const char   __FUNCTION__; // 64327
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <01BB1479> ../public/bonesetup/bone_accessor.h:286
// variables: 3
inline void CBoneAccessor<CTransform>::SanityCheckBone(int iBone)
{
	const char   __FUNCTION__; // 18779
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <00CE29EB> ../public/bonesetup/bone_accessor.h:286
// variables: 3
inline void CBoneAccessor<CTransform>::SanityCheckBone(int iBone)
{
	const char   __FUNCTION__; // 22060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <0014CAD6> ../public/bonesetup/bone_accessor.h:286
// variables: 3
inline void CBoneAccessor<CTransform>::SanityCheckBone(int iBone)
{
	const char   __FUNCTION__; // 43436
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <000932E6> ../public/bonesetup/bone_accessor.h:286
// variables: 3
inline void CBoneAccessor<CTransform>::SanityCheckBone(int iBone)
{
	const char   __FUNCTION__; // 48516
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <028867D9> ../public/bonesetup/bone_accessor.h:300
void CWritableBoneAccessor<CTransform>::CWritableBoneAccessor()
{
} /* size: 0 */

// <028867C0> ../public/bonesetup/bone_accessor.h:300
inline void CWritableBoneAccessor<CTransform>::CWritableBoneAccessor()
{
} /* size: 0 */

// <01B1AEC8> ../public/bonesetup/bone_accessor.h:305
void CWritableBoneAccessor<CTransform>::CWritableBoneAccessor(int nBones, CTransform* pBones, uint32* pReadableBones)
{
} /* size: 0 */

// <01B1AE88> ../public/bonesetup/bone_accessor.h:305
inline void CWritableBoneAccessor<CTransform>::CWritableBoneAccessor(int nBones, CTransform* pBones, uint32* pReadableBones)
{
} /* size: 0 */

// <028866CC> ../public/bonesetup/bone_accessor.h:311
void CWritableBoneAccessor<CTransform>::CWritableBoneAccessor(const CWritableBoneAccessor<CTransform>& that)
{
} /* size: 0 */

// <02886320> ../public/bonesetup/bone_accessor.h:338
inline void CWritableBoneAccessor<CTransform>::SetBoneAndMarkReadable(int iBone, const CTransform& bone)
{
} /* size: 0 */

// <02886273> ../public/bonesetup/bone_accessor.h:351
// variables: 2
inline void CWritableBoneAccessor<CTransform>::GetBoneForWrite(int iBone)
{
	const char   __FUNCTION__; // 61995
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 354
	}
} /* size: 0, variables: 1 */

// <028860E8> ../public/bonesetup/bone_accessor.h:360
inline void CWritableBoneAccessor<CTransform>::GetBoneArrayForWrite()
{
} /* size: 0 */

// <028862C3> ../public/bonesetup/bone_accessor.h:366
// variables: 2
inline void CWritableBoneAccessor<CTransform>::MarkBoneReadable(int iBone, bool bReadable)
{
	const char   __FUNCTION__; // 62022
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
	}
} /* size: 0, variables: 1 */

