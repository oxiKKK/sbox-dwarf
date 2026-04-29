
//
// public/vanimlib/canimblendlist.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	class: 1
//

// <00BF6E28> ../public/vanimlib/canimblendlist.h:13
// member functions: 28
// member variables: 8
// class size: 112
class CAnimationBlendList {
	/* ../public/vanimlib/canimblendlist.h:17 */
	void CAnimationBlendList(CAnimationBlendList* , const CModel* );
	/* ../public/vanimlib/canimblendlist.h:18 */
	void CAnimationBlendList(CAnimationBlendList* , const CModel* , HSequence, const float* );
	/* ../public/vanimlib/canimblendlist.h:19 */
	void CAnimationBlendList(CAnimationBlendList* , const ISequence* , const float* );
	/* ../public/vanimlib/canimblendlist.h:20 */
	const CModel* GetCModel(const CAnimationBlendList* );
	/* ../public/vanimlib/canimblendlist.h:21 */
	bool IsValid(const CAnimationBlendList* );
	/* ../public/vanimlib/canimblendlist.h:23 */
	int Count(const CAnimationBlendList* );
	/* ../public/vanimlib/canimblendlist.h:25 */
	HSequence hSequence(const CAnimationBlendList* , int);
	/* ../public/vanimlib/canimblendlist.h:26 */
	float flWeight(const CAnimationBlendList* , int);
	/* ../public/vanimlib/canimblendlist.h:27 */
	float flScale(const CAnimationBlendList* , int);
	/* ../public/vanimlib/canimblendlist.h:28 */
	float FPS(const CAnimationBlendList* , int);
	/* ../public/vanimlib/canimblendlist.h:29 */
	int NumFrames(const CAnimationBlendList* , int);
	/* ../public/vanimlib/canimblendlist.h:30 */
	const CAnimDesc* pAnimdesc(const CAnimationBlendList* , int);
	/* ../public/vanimlib/canimblendlist.h:31 */
	const ISequence* pSeqdesc(const CAnimationBlendList* , int);
	/* ../public/vanimlib/canimblendlist.h:32 */
	bool AddSequence(CAnimationBlendList* , HSequence, float);
private:
	const class CModel * m_pModel; /* 0 8 */
	HSequence m_hSequenceArray[4]; /* 8 16 */
	int m_nAnimation[4]; /* 24 16 */
	float m_flCycle[4]; /* 40 16 */
	float m_flWeight[4]; /* 56 16 */
	int m_nNumFrames[4]; /* 72 16 */
	float m_flFPS[4]; /* 88 16 */
	int m_nCount; /* 104 4 */
	void CAnimationBlendList(class CAnimationBlendList *, const class CModel  *); /* linkage=_ZN19CAnimationBlendListC4EPK6CModel */
	void CAnimationBlendList(class CAnimationBlendList *, const class CModel  *, class HSequence, const float  *); /* linkage=_ZN19CAnimationBlendListC4EPK6CModel9HSequencePKf */
	void CAnimationBlendList(class CAnimationBlendList *, const class ISequence  *, const float  *); /* linkage=_ZN19CAnimationBlendListC4EPK9ISequencePKf */
	const class CModel  * GetCModel(const class CAnimationBlendList  *); /* linkage=_ZNK19CAnimationBlendList9GetCModelEv */
	bool IsValid(const class CAnimationBlendList  *); /* linkage=_ZNK19CAnimationBlendList7IsValidEv */
	int Count(const class CAnimationBlendList  *); /* linkage=_ZNK19CAnimationBlendList5CountEv */
	class HSequence hSequence(const class CAnimationBlendList  *, int); /* linkage=_ZNK19CAnimationBlendList9hSequenceEi */
	float flWeight(const class CAnimationBlendList  *, int); /* linkage=_ZNK19CAnimationBlendList8flWeightEi */
	float flScale(const class CAnimationBlendList  *, int); /* linkage=_ZNK19CAnimationBlendList7flScaleEi */
	float FPS(const class CAnimationBlendList  *, int); /* linkage=_ZNK19CAnimationBlendList3FPSEi */
	int NumFrames(const class CAnimationBlendList  *, int); /* linkage=_ZNK19CAnimationBlendList9NumFramesEi */
	const class CAnimDesc  * pAnimdesc(const class CAnimationBlendList  *, int); /* linkage=_ZNK19CAnimationBlendList9pAnimdescEi */
	const class ISequence  * pSeqdesc(const class CAnimationBlendList  *, int); /* linkage=_ZNK19CAnimationBlendList8pSeqdescEi */
	bool AddSequence(class CAnimationBlendList *, class HSequence, float); /* linkage=_ZN19CAnimationBlendList11AddSequenceE9HSequencef */
};

// <00CB4A99> ../public/vanimlib/canimblendlist.h:17
void CAnimationBlendList::CAnimationBlendList(const CModel* pModel)
{
} /* size: 0 */

// <00CB4A74> ../public/vanimlib/canimblendlist.h:17
inline void CAnimationBlendList::CAnimationBlendList(const CModel* pModel)
{
} /* size: 0 */

// <00C13AB1> ../public/vanimlib/canimblendlist.h:19
void CAnimationBlendList::CAnimationBlendList(const ISequence* pSeqDesc, const float* flPoseParameterArray)
{
} /* size: 0 */

// <00CB4A5B> ../public/vanimlib/canimblendlist.h:20
inline void CAnimationBlendList::GetCModel()
{
} /* size: 0 */

// <00CB4A42> ../public/vanimlib/canimblendlist.h:23
inline void CAnimationBlendList::Count()
{
} /* size: 0 */

// <00CB4A1D> ../public/vanimlib/canimblendlist.h:25
inline void CAnimationBlendList::hSequence(int nIndex)
{
} /* size: 0 */

// <00CB49F8> ../public/vanimlib/canimblendlist.h:26
inline void CAnimationBlendList::flWeight(int nIndex)
{
} /* size: 0 */

// <00CB49D3> ../public/vanimlib/canimblendlist.h:28
inline void CAnimationBlendList::FPS(int nIndex)
{
} /* size: 0 */

// <00CB49AE> ../public/vanimlib/canimblendlist.h:29
inline void CAnimationBlendList::NumFrames(int nIndex)
{
} /* size: 0 */

