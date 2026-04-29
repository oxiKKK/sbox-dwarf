
//
// public/vanimlib/animattachment.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	classes: 2
//

// <0331D72A> ../public/vanimlib/animattachment.h:21
inline void CAnimAttachment::operator=(const CAnimAttachment &)
{
} /* size: 0 */

// <000465C5> ../public/vanimlib/animattachment.h:21
// member functions: 14
// member variables: 5
// class size: 128
class CAnimAttachment {
	/* ../public/vanimlib/animattachment.h:24 */
	void CAnimAttachment(CAnimAttachment* );
	/* ../public/vanimlib/animattachment.h:26 */
	void Init(CAnimAttachment* , const CModel& , const CAttachment* );
	/* ../public/vanimlib/animattachment.h:27 */
	void Init(CAnimAttachment* , int, const VectorAligned& );
	/* ../public/vanimlib/animattachment.h:29 */
	bool IsValid(const CAnimAttachment* );
	/* ../public/vanimlib/animattachment.h:31 */
	CTransform CalcPosition(const CAnimAttachment* , const CAnimPose& );
	/* ../public/vanimlib/animattachment.h:32 */
	CTransform CalcPosition(const CAnimAttachment* , const IPoseAccessor* );
	/* ../public/vanimlib/animattachment.h:36 */
	int32 GetPrimaryBoneIndex(const CAnimAttachment* );
private:
	QuaternionAligned m_influenceRotations[3] __attribute__((__aligned__(16))); /* 0 48 */
	VectorAligned m_influenceOffsets[3] __attribute__((__aligned__(16))); /* 48 48 */
	int32 m_influenceIndices[3]; /* 96 12 */
	float m_influenceWeights[3]; /* 108 12 */
	uint8 m_numInfluences; /* 120 1 */
	void CAnimAttachment(class CAnimAttachment *); /* linkage=_ZN15CAnimAttachmentC4Ev */
	void Init(class CAnimAttachment *, const class CModel  &, const class CAttachment  *); /* linkage=_ZN15CAnimAttachment4InitERK6CModelPK11CAttachment */
	void Init(class CAnimAttachment *, int, const class VectorAligned  &); /* linkage=_ZN15CAnimAttachment4InitEiRK13VectorAligned */
	bool IsValid(const class CAnimAttachment  *); /* linkage=_ZNK15CAnimAttachment7IsValidEv */
	class CTransform CalcPosition(const class CAnimAttachment  *, const class CAnimPose  &); /* linkage=_ZNK15CAnimAttachment12CalcPositionERK9CAnimPose */
	class CTransform CalcPosition(const class CAnimAttachment  *, const class IPoseAccessor  *); /* linkage=_ZNK15CAnimAttachment12CalcPositionEPK13IPoseAccessor */
	int32 GetPrimaryBoneIndex(const class CAnimAttachment  *); /* linkage=_ZNK15CAnimAttachment19GetPrimaryBoneIndexEv */
} __attribute__((__aligned__(16)));

// <016EB967> ../public/vanimlib/animattachment.h:21
// member functions: 15
// member variables: 5
// class size: 128
class CAnimAttachment {
	/* ../public/vanimlib/animattachment.h:24 */
	void CAnimAttachment(CAnimAttachment* );
	/* ../public/vanimlib/animattachment.h:26 */
	void Init(CAnimAttachment* , const CModel& , const CAttachment* );
	/* ../public/vanimlib/animattachment.h:27 */
	void Init(CAnimAttachment* , int, const VectorAligned& );
	/* ../public/vanimlib/animattachment.h:29 */
	bool IsValid(const CAnimAttachment* );
	/* ../public/vanimlib/animattachment.h:31 */
	CTransform CalcPosition(const CAnimAttachment* , const CAnimPose& );
	/* ../public/vanimlib/animattachment.h:32 */
	CTransform CalcPosition(const CAnimAttachment* , const IPoseAccessor* );
	/* ../public/vanimlib/animattachment.h:36 */
	int32 GetPrimaryBoneIndex(const CAnimAttachment* );
private:
	QuaternionAligned m_influenceRotations[3] __attribute__((__aligned__(16))); /* 0 48 */
	VectorAligned m_influenceOffsets[3] __attribute__((__aligned__(16))); /* 48 48 */
	int32 m_influenceIndices[3]; /* 96 12 */
	float m_influenceWeights[3]; /* 108 12 */
	uint8 m_numInfluences; /* 120 1 */
	CAnimAttachment& operator=(CAnimAttachment* , const CAnimAttachment& );
	void CAnimAttachment(class CAnimAttachment *); /* linkage=_ZN15CAnimAttachmentC4Ev */
	void Init(class CAnimAttachment *, const class CModel  &, const class CAttachment  *); /* linkage=_ZN15CAnimAttachment4InitERK6CModelPK11CAttachment */
	void Init(class CAnimAttachment *, int, const class VectorAligned  &); /* linkage=_ZN15CAnimAttachment4InitEiRK13VectorAligned */
	bool IsValid(const class CAnimAttachment  *); /* linkage=_ZNK15CAnimAttachment7IsValidEv */
	class CTransform CalcPosition(const class CAnimAttachment  *, const class CAnimPose  &); /* linkage=_ZNK15CAnimAttachment12CalcPositionERK9CAnimPose */
	class CTransform CalcPosition(const class CAnimAttachment  *, const class IPoseAccessor  *); /* linkage=_ZNK15CAnimAttachment12CalcPositionEPK13IPoseAccessor */
	int32 GetPrimaryBoneIndex(const class CAnimAttachment  *); /* linkage=_ZNK15CAnimAttachment19GetPrimaryBoneIndexEv */
} __attribute__((__aligned__(16)));

// <0331854F> ../public/vanimlib/animattachment.h:24
void CAnimAttachment::CAnimAttachment()
{
} /* size: 0 */

