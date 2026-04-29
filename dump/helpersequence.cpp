
//
// helpersequence.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 27
//

// <00CB470A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:28
// function calls: 10
void CHelperSequence::CHelperSequence(const CAnimContainer* pAnimContainer)
{
	IBaseSequence::IBaseSequence(); // 125
	ISequence::ISequence(); // 15
	StaticEmptyKeyValues(void); // 88
	StaticEmptyKeyValues(void); // 15
	CEmptySequence::CEmptySequence(); // 29
	CUtlMemory<AnimEvent_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimEvent_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::CUtlVector(); // 29
} /* size: 210, inline expansions: 10 (420 bytes) */

// <00CB46E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:28
void CHelperSequence::CHelperSequence(const CAnimContainer* pAnimContainer)
{
} /* size: 0 */

// <00CB4687> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:36
// function call: 1
void CHelperSequence::NumEvents()
{
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::Count(); // 38
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00CB45D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:45
// function calls: 2
void CHelperSequence::GetEvent(int index)
{
	CUtlMemory<AnimEvent_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::operator[](
			int i);  // 47
} /* size: 20, inline expansions: 2 (30 bytes) */

// <00CB34F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:53
// variables: 6
// function calls: 69
void CHelperSequence::GetBounds(Vector* pVecMins, Vector* pVecMaxs)
{
	const CModel* pModel; // 55
	const int  nAnimBoneCount; // 57
	{
		AnimRefVector_t animRef; // 61
		{
			int i; // 67
			{
				Vector vTmpMin; // 69
				Vector vTmpMax; // 70
				CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 135
				CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::IsEmpty(); // 2443
				CAnimContainer_Imp::GetBounds(
						int nAnimation,
						Vector* pVecMins,
						Vector* pVecMaxs);  // 72
				Vector::operator=(
						const Vector& vOther);  // 74
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1534
				VectorMin(const Vector& a,
						const Vector& b);  // 74
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1539
				VectorMax(const Vector& a,
						const Vector& b);  // 75
				Vector::operator=(
						const Vector& vOther);  // 75
				Vector::Vector(); // 69
				Vector::Vector(); // 70
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::operator[](
						int i);  // 72
			}
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Count(); // 67
		}
		CUtlMemory<int, int>::CUtlMemory(
				int* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<int, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
						int* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<16, int, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<16, int>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<16, int, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<int, 16, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<int, 16>::CUtlVectorFixedGrowable(
					int growSize);  // 61
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::operator[](
				int i);  // 65
		CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 135
		CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::IsEmpty(); // 2443
		CAnimContainer_Imp::GetBounds(
				int nAnimation,
				Vector* pVecMins,
				Vector* pVecMaxs);  // 65
		CUtlMemory<int, int>::IsExternallyAllocated(); // 577
		CUtlMemory<int, int>::ConvertToExternalMemory(
					int* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
					int* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
					int* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<16, int, 4>::Base(); // 237
		CUtlMemoryFixedGrowable<int, 16, int>::Purge(
			int numElements);  // 1799
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<int, 16, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<int, 16>::~CUtlVectorFixedGrowable(); // 80
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<16, int, 4>::Base(); // 237
		CUtlMemory<int, int>::IsExternallyAllocated(); // 577
		CUtlMemory<int, int>::ConvertToExternalMemory(
					int* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
					int* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
					int* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<int, 16, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<int, 16, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<int, 16>::~CUtlVectorFixedGrowable(); // 80
	}
	Vector::operator=(
			const Vector& vOther);  // 82
	Vector::operator=(
			const Vector& vOther);  // 83
} /* size: 948, variables: 2, inline expansions: 2 (65 bytes) */

// <00CB3430> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:91
// variable: 1
// function calls: 2
void CHelperSequence::SetEventIndex(int nEvent, int nIndex)
{
	AnimEvent_t* pEvent; // 93
	CUtlMemory<AnimEvent_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::operator[](
			int i);  // 93
} /* size: 23, variables: 1, inline expansions: 2 (6 bytes) */

// <00CB3369> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:101
// variable: 1
// function calls: 2
void CHelperSequence::AddEventTypeFlags(int nEvent, int nTypeFlags)
{
	AnimEvent_t* pEvent; // 103
	CUtlMemory<AnimEvent_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::operator[](
			int i);  // 103
} /* size: 22, variables: 1, inline expansions: 2 (22 bytes) */

// <00CB32A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:111
// variable: 1
// function calls: 2
void CHelperSequence::RemoveEventTypeFlags(int nEvent, int nTypeFlags)
{
	AnimEvent_t* pEvent; // 113
	CUtlMemory<AnimEvent_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::operator[](
			int i);  // 113
} /* size: 22, variables: 1, inline expansions: 2 (22 bytes) */

// <00CB3156> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:121
// variables: 3
// function calls: 3
void CHelperSequence::MaxFrame(const float* poseParameter)
{
	float maxFrame; // 123
	CAnimationBlendList blendList; // 124
	{
		int i; // 126
		CAnimationBlendList::Count(); // 126
		CAnimationBlendList::NumFrames(
				int nIndex);  // 128
		CAnimationBlendList::flWeight(
			int nIndex);  // 128
	}
} /* size: 253, variables: 2 */

// <00CB300B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:139
// variables: 3
// function calls: 3
void CHelperSequence::FPS(const float* poseParameter)
{
	CAnimationBlendList blendList; // 141
	float t; // 143
	{
		int i; // 144
		CAnimationBlendList::Count(); // 144
		CAnimationBlendList::FPS(
			int nIndex);  // 146
		CAnimationBlendList::flWeight(
			int nIndex);  // 146
	}
} /* size: 237, variables: 2 */

// <00CB2E67> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:155
// variables: 3
// function calls: 4
void CHelperSequence::CPS(const float* poseParameter)
{
	CAnimationBlendList blendList; // 157
	float t; // 159
	{
		int i; // 161
		CAnimationBlendList::Count(); // 161
		CAnimationBlendList::NumFrames(
				int nIndex);  // 163
		CAnimationBlendList::FPS(
			int nIndex);  // 165
		CAnimationBlendList::flWeight(
			int nIndex);  // 165
	}
} /* size: 155, variables: 2 */

// <00CB2DF1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:175
// variable: 1
void CHelperSequence::Duration(const float* poseParameter)
{
	float cps; // 177
} /* size: 45, variables: 1 */

// <00CB2997> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:191
// variables: 5
// function calls: 11
void CHelperSequence::MovementAndDuration(float flCycleFrom, float flCycleTo, const float* poseParameter, Vector& deltaPos)
{
	CAnimationBlendList blendList; // 193
	Vector localPos; // 197
	QAngle localAngles; // 198
	float t; // 200
	{
		int i; // 201
		CAnimationBlendList::Count(); // 201
		CAnimationBlendList::NumFrames(
				int nIndex);  // 203
		CAnimationBlendList::FPS(
			int nIndex);  // 205
		CAnimationBlendList::flWeight(
			int nIndex);  // 205
		CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Count(); // 134
		Model_AnimMovement(const CAnimDesc* panim,
					float flCycleFrom,
					float flCycleTo,
					Vector& deltaPos,
					QAngle& deltaAngle);  // 208
		CAnimationBlendList::flWeight(
			int nIndex);  // 210
		VectorMA(const Vector& start,
			float scale,
			const Vector& direction,
			Vector& dest);  // 210
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 195
	Vector::Vector(); // 197
	QAngle::QAngle(); // 198
} /* size: 435, variables: 4, inline expansions: 3 (17 bytes) */

// <00D2A3E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:222
void CHelperSequence::TotalMovementAndDuration(const float* poseParameter, Vector& deltaPos)
{
} /* size: 21 */

// <00CB223E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:233
// variables: 5
// function calls: 24
void CHelperSequence::Movement(float flCycleFrom, float flCycleTo, const float* poseParameter, Vector& deltaPos, QAngle& deltaAngles)
{
	CAnimationBlendList blendList; // 235
	bool found; // 240
	{
		int i; // 242
		{
			Vector localPos; // 244
			QAngle localAngles; // 245
			CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Count(); // 134
			Model_AnimMovement(const CAnimDesc* panim,
						float flCycleFrom,
						float flCycleTo,
						Vector& deltaPos,
						QAngle& deltaAngle);  // 250
			Vector::Vector(); // 244
			QAngle::QAngle(); // 245
			CAnimationBlendList::flWeight(
				int nIndex);  // 253
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 253
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 253
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 253
			QAngle::QAngle(); // 2768
			QAngle::operator*(
					float fl);  // 255
			Vector::operator=(
					const Vector& vOther);  // 253
			QAngle::QAngle(); // 2750
			QAngle::operator+(
					const QAngle& v);  // 255
			QAngle::operator=(
					const QAngle& vOther);  // 255
			CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Count(); // 257
		}
		CAnimationBlendList::Count(); // 242
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 237
	QAngle::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 238
} /* size: 558, variables: 2, inline expansions: 2 (30 bytes) */

// <00D2788B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:271
// variables: 2
// function calls: 2
void CHelperSequence::Movement(float flCycleFrom, float flCycleTo)
{
	Vector deltaPos; // 273
	QAngle deltaAngles; // 274
	Vector::Vector(); // 273
	QAngle::QAngle(); // 274
} /* size: 103, variables: 2, inline expansions: 2 (0 bytes) */

// <00CB21F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:271
// variables: 2
void CHelperSequence::Movement(float flCycleFrom, float flCycleTo)
{
	Vector deltaPos; // 273
	QAngle deltaAngles; // 274
} /* size: 0, variables: 2 */

// <00CB1D82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:286
// variables: 4
// function calls: 14
void CHelperSequence::Velocity(float flCycle, const float* poseParameter, Vector& vecVelocity)
{
	CAnimationBlendList blendList; // 288
	bool found; // 292
	{
		int i; // 294
		{
			Vector vecLocalVelocity; // 296
			Vector::Vector(); // 296
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 300
			CAnimationBlendList::flWeight(
				int nIndex);  // 300
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 300
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 300
			Vector::operator=(
					const Vector& vOther);  // 300
		}
		CAnimationBlendList::Count(); // 294
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 290
} /* size: 349, variables: 2, inline expansions: 1 (16 bytes) */

// <00CB1AD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:312
// variables: 4
// function calls: 5
void CHelperSequence::RelativeVelocity(float flCycle)
{
	Vector vVelocity_StartRelative; // 314
	float flSpeed; // 317
	const CMotionTransform  movement; // 321
	Vector vVelocity_CycleRelative; // 322
	Vector::NormalizeInPlace(); // 317
	Vector::Vector(); // 273
	QAngle::QAngle(); // 274
	CHelperSequence::Movement(
		float flCycleFrom,
		float flCycleTo);  // 321
	Vector::operator*=(
			float fl);  // 323
} /* size: 327, variables: 4, inline expansions: 5 (91 bytes) */

// <00CB18DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:332
// variables: 4
// function calls: 3
void CHelperSequence::FindDistance(const float* poseParameter, float flDist)
{
	CAnimationBlendList blendList; // 334
	float flCycle; // 336
	{
		int i; // 338
		{
			float flLocalCycle; // 340
			Model_FindAnimDistance(const CAnimDesc* panim,
						float flDist);  // 340
			CAnimationBlendList::flWeight(
				int nIndex);  // 341
		}
		CAnimationBlendList::Count(); // 338
	}
} /* size: 257, variables: 2 */

// <00CB17EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:350
// variables: 3
void CHelperSequence::LookupPoseSetting(const char* pPoseName)
{
	int count; // 352
	{
		int i; // 354
		{
			const char* pName; // 356
		}
	}
} /* size: 120, variables: 1 */

// <00CB15A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:369
// function calls: 10
void TranslateEvent(AnimEvent_t* pDstEvent, const CAnimAnimEvent* pSrcEvent)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 245
	KeyValues3::IsNull(); // 376
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 378
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 378
} /* size: 182, inline expansions: 10 (199 bytes) */

// <00CB0F16> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:610
// variables: 8
// function calls: 25
Vector calcPosition(CAnimDesc* pAnimDesc, int iFrame)
{
	Vector vecPos; // 612
	int iLoops; // 622
	float prevframe; // 629
	{
		int i; // 631
		{
			CAnimMovement* pmove; // 633
			{
				float f; // 637
				float d; // 639
				{
					CAnimMovement* pmove2; // 644
					CUtlMemory<CAnimMovement, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::operator[](
							int i);  // 644
					Vector::Vector(); // 1450
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::operator*(
							float fl);  // 1478
					operator*(float fl,
							const Vector& v);  // 645
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::Vector(); // 1436
					Vector::operator+(
							const Vector& v);  // 645
					Vector::operator=(
							const Vector& vOther);  // 645
				}
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 641
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 641
				Vector::operator=(
						const Vector& vOther);  // 641
			}
			CUtlMemory<CAnimMovement, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::operator[](
					int i);  // 633
			Vector::operator=(
					const Vector& vOther);  // 652
		}
	}
	Vector::Vector(); // 612
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 614
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Count(); // 616
	CAnimDesc::NumFrames(); // 619
} /* size: 0, variables: 3, inline expansions: 4 (0 bytes) */

// <00CB0DA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:663
// variables: 2
// function calls: 3
Vector calcMovement(CAnimDesc* pAnimDesc, int iFrom, int iTo)
{
	Vector p1; // 665
	Vector p2; // 666
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 668
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <00CB0D89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:671
void CHelperSequence::PostInit()
{
} /* size: 0 */

// <00CB0BAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:675
// variables: 2
void CHelperSequence::GetBoneToWorlds(float flCycle, CTransform* mBoneToWorlds)
{
	IBoneSetup setup; // 677
	HSequence hSequence; // 679
} /* size: 0, variables: 2 */

// <00D32073> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:688
void CHelperSequence::InitializeSequenceKeyValues(const CSeqS1SeqDesc* pSeqDesc)
{
} /* size: 0 */

