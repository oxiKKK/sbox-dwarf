
//
// animgraph/animmovementmanagerinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 59
//

// <00F94B85> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:13
// variables: 8
// function calls: 62
void CAnimMovementManagerInstance::CAnimMovementManagerInstance(const CAnimMotorList& motorList, const CAnimGraphUpdateContextPtr& pUpdateContext)
{
	{
		{
			const int  nMotorCount; // 22
			{
			}
			{
				int i; // 25
				{
					const CAnimMotorUpdaterBase* pMotorUpdater; // 27
					CAnimMotorInstance* pMotorInstance; // 30
				}
			}
		}
	}
	{
		CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 18
		IAnimMovementManagerInstance::IAnimMovementManagerInstance(); // 18
		CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this); // 530
		CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAcce this); // 18
		CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 16
		CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 17
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 370
		CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator=(
				CAnimGraphUpdateContext* pObj);  // 406
		CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator=(
				const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>& other);  // 328
		CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>& other);  // 18
		{
			const int  nMotorCount; // 22
			{
			}
			{
				int i; // 25
				{
					const CAnimMotorUpdaterBase* pMotorUpdater; // 27
					CAnimMotorInstance* pMotorInstance; // 30
					ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnim this); // 475
					CUtlMemory(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnim this,
							int nGrowSize,
							int nInitAllocationCount);  // 178
					Init(const CUtlHashtable<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const this); // 178
					CUtlHashtable(const CUtlHashtable<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const this,
							int minimumSize);  // 270
					CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase::CInstanceFactory(); // 206
					Get(void); // 201
					Get(void); // 30
					CClassInfo::GetID(); // 226
					Mix32HashFunctor::operator(
							uint32 n);  // 67
					ClassIDHashFunctor::operator(
							ClassID nType);  // 218
					Base(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, this); // 650
					Count(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, this); // 651
					IdealIndex(uint32_if32BitStorage h,
							uint32 m);  // 653
					IdealIndex(const CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotor this,
							uint32 slotmask);  // 656
					IdealIndex(const CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotor this,
							uint32 slotmask);  // 667
					ClassID::operator==(
							ClassID nOther);  // 154
					DefaultEqualFunctor<Reflection::ClassID>::operator(
							Arg_t a,
							Arg_t b);  // 670
					DoLookup<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, this,
										const ClassID& x,
										unsigned int h,
										handle_t* pPreviousInChain);  // 218
					Find(const CUtlHashtable<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, this,
						KeyArg_t k);  // 228
					operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, this,
							int i);  // 204
					IsValid(const CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotor this); // 204
					IsValidHandle(const CUtlHashtable<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, this,
							handle_t idx);  // 229
					CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase::operator->(); // 231
					CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase::Create(
						const CAnimMotorBase* pObject,
						const CAnimMotorUpdaterBase* params#0,
						const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>& params#1);  // 30
					CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this,
							int i);  // 37
					ThreadInterlockedIncrement(volatile int32* p); // 158
					Increment(int* p); // 290
					CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
					AddRef<CAnimMotorInstance>(CAnimMotorInstance* pObj); // 366
					ThreadInterlockedDecrement(volatile int32* p); // 159
					Decrement(int* p); // 295
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
					Release<CAnimMotorInstance>(CAnimMotorInstance* pObj); // 370
					CSmartPtr<CAnimMotorInstance, CRefCountAccessor>::operator=(
							CAnimMotorInstance* pObj);  // 37
				}
			}
		}
	}
} /* size: 0 */

// <00F94AF8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:13
// variables: 6
void CAnimMovementManagerInstance::CAnimMovementManagerInstance(const CAnimMotorList& motorList, const CAnimGraphUpdateContextPtr& pUpdateContext)
{
	const char   __FUNCTION__; // 38063
	{
		const int  nMotorCount; // 22
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 20
		}
		{
			int i; // 25
			{
				const CAnimMotorUpdaterBase* pMotorUpdater; // 27
				CAnimMotorInstance* pMotorInstance; // 30
			}
		}
	}
} /* size: 0, variables: 1 */

// <00F9975D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:44
void CAnimMovementManagerInstance::GetMotorCount()
{
} /* size: 13 */

// <00F98E7E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:52
// function calls: 4
void CAnimMovementManagerInstance::GetMotor(int index)
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRe this); // 54
	CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this,
			int i);  // 56
	CSmartPtr<CAnimMotorInstance, CRefCountAccessor>::Get(); // 56
} /* size: 35, inline expansions: 4 (14 bytes) */

// <00F94ABA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:52
void CAnimMovementManagerInstance::GetMotor(int index)
{
} /* size: 0 */

// <00F948BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:82
// variable: 1
// function calls: 7
void CAnimMovementManagerInstance::GetDefaultMotor()
{
	{
		int i; // 84
		Count(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRe this); // 84
		CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this,
				int i);  // 86
		CSmartPtr<CAnimMotorInstance, CRefCountAccessor>::operator->(); // 86
		CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this,
				int i);  // 88
		CSmartPtr<CAnimMotorInstance, CRefCountAccessor>::Get(); // 88
	}
} /* size: 90 */

// <00F94898> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:98
// variable: 1
void CAnimMovementManagerInstance::GetDefaultMotor()
{
	{
		int i; // 100
	}
} /* size: 0 */

// <00F9B972> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:114
// function calls: 6
void CAnimMovementManagerInstance::GetActiveMotor()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 116
	Count(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRe this); // 54
	CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this,
			int i);  // 56
	CSmartPtr<CAnimMotorInstance, CRefCountAccessor>::Get(); // 56
	CAnimMovementManagerInstance::GetMotor(
		int index);  // 116
} /* size: 110, inline expansions: 6 (33 bytes) */

// <00F9487F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:114
void CAnimMovementManagerInstance::GetActiveMotor()
{
} /* size: 0 */

// <00F9B802> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:122
// function calls: 6
void CAnimMovementManagerInstance::GetActiveMotor()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 124
	Count(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRe this); // 54
	CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this,
			int i);  // 56
	CSmartPtr<CAnimMotorInstance, CRefCountAccessor>::Get(); // 56
	CAnimMovementManagerInstance::GetMotor(
		int index);  // 124
} /* size: 110, inline expansions: 6 (33 bytes) */

// <00F99822> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:130
// variable: 1
// function calls: 5
void CAnimMovementManagerInstance::SetActiveMotor(IAnimMotorInstance* pMotor)
{
	{
		int i; // 132
		Count(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRe this); // 132
		CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this,
				int i);  // 134
		CSmartPtr<CAnimMotorInstance, CRefCountAccessor>::Get(); // 134
		CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 136
	}
} /* size: 65 */

// <00F94827> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:130
// variable: 1
void CAnimMovementManagerInstance::SetActiveMotor(IAnimMotorInstance* pMotor)
{
	{
		int i; // 132
	}
} /* size: 0 */

// <00F9979B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:145
// function call: 1
void CAnimMovementManagerInstance::SetActiveMotor(int index)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 147
} /* size: 19, inline expansions: 1 (0 bytes) */

// <00F94802> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:145
void CAnimMovementManagerInstance::SetActiveMotor(int index)
{
} /* size: 0 */

// <00F98F6E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:153
void CAnimMovementManagerInstance::GetPath()
{
} /* size: 9 */

// <00F99DB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:169
// function calls: 2
void CAnimMovementManagerInstance::GetSpeed()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 363
	CAnimMovementManagerInstance::GetMovementData(); // 171
} /* size: 28, inline expansions: 2 (13 bytes) */

// <00F947B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:169
void CAnimMovementManagerInstance::GetSpeed()
{
} /* size: 0 */

// <00F999A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:177
// function calls: 2
void CAnimMovementManagerInstance::SetSpeed(float flTargetSpeed)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 355
	CAnimMovementManagerInstance::GetMovementData(); // 179
} /* size: 42, inline expansions: 2 (13 bytes) */

// <00F94793> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:177
void CAnimMovementManagerInstance::SetSpeed(float flTargetSpeed)
{
} /* size: 0 */

// <00F99E4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:185
// function calls: 2
void CAnimMovementManagerInstance::GetFacingHeading()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 363
	CAnimMovementManagerInstance::GetMovementData(); // 187
} /* size: 28, inline expansions: 2 (13 bytes) */

// <00F9477A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:185
void CAnimMovementManagerInstance::GetFacingHeading()
{
} /* size: 0 */

// <00F99A46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:193
// function calls: 2
void CAnimMovementManagerInstance::SetFacingHeading(float flFacing)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 355
	CAnimMovementManagerInstance::GetMovementData(); // 195
} /* size: 42, inline expansions: 2 (13 bytes) */

// <00F94755> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:193
void CAnimMovementManagerInstance::SetFacingHeading(float flFacing)
{
} /* size: 0 */

// <00F99EE4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:201
// function calls: 2
void CAnimMovementManagerInstance::GetFacingMode()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 363
	CAnimMovementManagerInstance::GetMovementData(); // 203
} /* size: 26, inline expansions: 2 (13 bytes) */

// <00F9473C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:201
void CAnimMovementManagerInstance::GetFacingMode()
{
} /* size: 0 */

// <00F99AE9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:209
// function calls: 2
void CAnimMovementManagerInstance::SetFacingMode(FacingMode facingMode)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 355
	CAnimMovementManagerInstance::GetMovementData(); // 211
} /* size: 37, inline expansions: 2 (13 bytes) */

// <00F94717> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:209
void CAnimMovementManagerInstance::SetFacingMode(FacingMode facingMode)
{
} /* size: 0 */

// <00F99F7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:217
// function calls: 2
void CAnimMovementManagerInstance::GetLookTarget()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 363
	CAnimMovementManagerInstance::GetMovementData(); // 219
} /* size: 27, inline expansions: 2 (13 bytes) */

// <00F946FE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:217
void CAnimMovementManagerInstance::GetLookTarget()
{
} /* size: 0 */

// <00F99B8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:225
// function calls: 3
void CAnimMovementManagerInstance::SetLookTarget(const Vector& lookPos)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 355
	CAnimMovementManagerInstance::GetMovementData(); // 227
	Vector::operator=(
			const Vector& vOther);  // 227
} /* size: 64, inline expansions: 3 (42 bytes) */

// <00F946D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:225
void CAnimMovementManagerInstance::SetLookTarget(const Vector& lookPos)
{
} /* size: 0 */

// <00F9A010> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:233
// function calls: 2
void CAnimMovementManagerInstance::GetSlopeNormal()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 363
	CAnimMovementManagerInstance::GetMovementData(); // 235
} /* size: 27, inline expansions: 2 (13 bytes) */

// <00F946C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:233
void CAnimMovementManagerInstance::GetSlopeNormal()
{
} /* size: 0 */

// <00F94583> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:241
// function calls: 4
void CAnimMovementManagerInstance::SetSlopeNormal(const Vector& slopeNormal)
{
	Vector::Normalized(); // 243
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 355
	CAnimMovementManagerInstance::GetMovementData(); // 243
	Vector::operator=(
			const Vector& vOther);  // 243
} /* size: 123, inline expansions: 4 (63 bytes) */

// <00F9A0A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:249
// function calls: 2
void CAnimMovementManagerInstance::IsOnGround()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 363
	CAnimMovementManagerInstance::GetMovementData(); // 251
} /* size: 27, inline expansions: 2 (13 bytes) */

// <00F9456A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:249
void CAnimMovementManagerInstance::IsOnGround()
{
} /* size: 0 */

// <00F99C70> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:257
// function calls: 2
void CAnimMovementManagerInstance::SetOnGround(bool bOnGround)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 355
	CAnimMovementManagerInstance::GetMovementData(); // 259
} /* size: 37, inline expansions: 2 (13 bytes) */

// <00F94544> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:257
void CAnimMovementManagerInstance::SetOnGround(bool bOnGround)
{
} /* size: 0 */

// <00F9A13C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:265
// function calls: 2
void CAnimMovementManagerInstance::GetCalculatedMoveDirection()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 363
	CAnimMovementManagerInstance::GetMovementData(); // 267
} /* size: 27, inline expansions: 2 (13 bytes) */

// <00F9452B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:265
void CAnimMovementManagerInstance::GetCalculatedMoveDirection()
{
} /* size: 0 */

// <00F9A1D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:273
// function calls: 2
void CAnimMovementManagerInstance::GetCalculatedMoveSpeed()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 363
	CAnimMovementManagerInstance::GetMovementData(); // 275
} /* size: 28, inline expansions: 2 (13 bytes) */

// <00F94512> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:273
void CAnimMovementManagerInstance::GetCalculatedMoveSpeed()
{
} /* size: 0 */

// <00F9A26A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:281
// function calls: 2
void CAnimMovementManagerInstance::GetCalculatedFacing()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 363
	CAnimMovementManagerInstance::GetMovementData(); // 283
} /* size: 28, inline expansions: 2 (13 bytes) */

// <00F944F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:281
void CAnimMovementManagerInstance::GetCalculatedFacing()
{
} /* size: 0 */

// <00F9A301> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:289
// function calls: 2
void CAnimMovementManagerInstance::GetCalculatedAcceleration()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 363
	CAnimMovementManagerInstance::GetMovementData(); // 291
} /* size: 27, inline expansions: 2 (13 bytes) */

// <00F944E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:289
void CAnimMovementManagerInstance::GetCalculatedAcceleration()
{
} /* size: 0 */

// <00F9A398> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:297
// function calls: 2
void CAnimMovementManagerInstance::GetCalculatedGoalPosition()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 363
	CAnimMovementManagerInstance::GetMovementData(); // 299
} /* size: 23, inline expansions: 2 (13 bytes) */

// <00F944C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:297
void CAnimMovementManagerInstance::GetCalculatedGoalPosition()
{
} /* size: 0 */

// <00F9A42F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:305
// function calls: 2
void CAnimMovementManagerInstance::GetCalculatedGoalDistance()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 363
	CAnimMovementManagerInstance::GetMovementData(); // 307
} /* size: 28, inline expansions: 2 (13 bytes) */

// <00F944AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:305
void CAnimMovementManagerInstance::GetCalculatedGoalDistance()
{
} /* size: 0 */

// <00F99D14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:313
// function calls: 2
void CAnimMovementManagerInstance::SetBoundaryRadius(const float flValue)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 355
	CAnimMovementManagerInstance::GetMovementData(); // 315
} /* size: 42, inline expansions: 2 (13 bytes) */

// <00F94488> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:313
void CAnimMovementManagerInstance::SetBoundaryRadius(const float flValue)
{
} /* size: 0 */

// <00F9A4C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:321
// function calls: 2
void CAnimMovementManagerInstance::GetBoundaryRadius()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 363
	CAnimMovementManagerInstance::GetMovementData(); // 323
} /* size: 28, inline expansions: 2 (13 bytes) */

// <00F9446F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:321
void CAnimMovementManagerInstance::GetBoundaryRadius()
{
} /* size: 0 */

// <00F99965> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:329
void CAnimMovementManagerInstance::ShouldCalculateSlope()
{
} /* size: 13 */

// <00F943C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:337
// function call: 1
void CAnimMovementManagerInstance::Save(ISave* pSave)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 339
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00F9432C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:345
// function call: 1
void CAnimMovementManagerInstance::Restore(IRestore* pRestore)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 347
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00F9D249> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:353
// function call: 1
void CAnimMovementManagerInstance::GetMovementData()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 355
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00F94313> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:353
void CAnimMovementManagerInstance::GetMovementData()
{
} /* size: 0 */

