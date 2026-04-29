
//
// animgraph/animmovementupdater.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 38
//

// <015B0F9F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:12
void GetBaseMap(void)
{
} /* size: 0 */

// <015B0EE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:12
// variables: 2
datamap_t* DataMapInit<MovementData>(MovementData *)
{
	const char* pDataMapInit_className; // 12
	typedescription_t dataDesc; // 12
} /* size: 247, variables: 2 */

// <015B0795> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:33
// variable: 1
// function calls: 28
void CAnimMovementUpdater::CAnimMovementUpdater(CAnimGraphInitContext& initContext, int nMotorCount)
{
	CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::CRelativeOffset(); // 84
	CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::CRelativeArray(); // 138
	CRelativeObjectArray<const CAnimMotorUpdaterBase>::CRelativeObjectArray(); // 33
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<MovementData>::CPackedHandle(); // 33
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CAnimPath>::CPackedHandle(); // 33
	{
		uint32 i; // 160
		CRelativeOffset<const CAnimMotorUpdaterBase>::CRelativeOffset(); // 162
	}
	CPackedDataT<false>::AddArray<CRelativeOffset<const CAnimMotorUpdaterBase> >(
								uint32 count,
								CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> >* handleOut);  // 36
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::SetOffset(
			const CRelativeOffset<const CAnimMotorUpdaterBase>* targetPtr);  // 20
	CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::operator=(
			const CRelativeOffset<const CAnimMotorUpdaterBase>* targetPtr);  // 115
	CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::SetArray(
		const CRelativeOffset<const CAnimMotorUpdaterBase>* targetArray,
		int32 count);  // 36
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 15
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 15
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 15
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 15
	MovementData::MovementData(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<MovementData>(
				CPackedHandle<MovementData>* handleOut);  // 39
	CAnimPathWaypointData::CAnimPathWaypointData(); // 45
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::CFixedSizeCircularBuffer(); // 16
	CWaypointBuffer::CWaypointBuffer(); // 28
	CAnimPathWaypointData::CAnimPathWaypointData(); // 45
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::CFixedSizeCircularBuffer(); // 16
	CWaypointBuffer::CWaypointBuffer(); // 28
	CAnimPath::CAnimPath(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<CAnimPath>(
				CPackedHandle<CAnimPath>* handleOut);  // 42
} /* size: 0, inline expansions: 27 (1263 bytes) */

// <015B0761> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:33
void CAnimMovementUpdater::CAnimMovementUpdater(CAnimGraphInitContext& initContext, int nMotorCount)
{
} /* size: 0 */

// <015B0190> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:48
// variables: 4
// function calls: 20
void CAnimMovementUpdater::Update(CAnimGraphUpdateContext& context)
{
	MovementData* pMoveSettings; // 50
	{
		CAnimPath* pPath; // 54
		const int  nActiveMotorIndex; // 73
		{
			const Vector& goalWaypoint; // 58
			CloseEnough(const Vector2D& a,
					const Vector2D& b,
					float epsilon);  // 62
			Vector::operator=(
					const Vector& vOther);  // 63
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CAnimPath>(
					const CPackedHandle<CAnimPath>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CAnimPath>(
					const CPackedHandle<CAnimPath>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CAnimPath>(
					const CPackedHandle<CAnimPath>& handle);  // 54
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 38
		CAnimPath::IsEmpty(); // 55
		{
		}
		CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::operator[](
				int index);  // 76
		CRelativeOffset<const CAnimMotorUpdaterBase>::IsValid(); // 35
		CRelativeOffset<const CAnimMotorUpdaterBase>::Get(); // 45
		CRelativeOffset<const CAnimMotorUpdaterBase>::operator->(); // 76
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 50
} /* size: 0, variables: 1, inline expansions: 5 (68 bytes) */

// <015AFE4F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:84
// variables: 2
// function calls: 11
void CAnimMovementUpdater::FixupRootMotion(CAnimGraphUpdateContext& context, CRootMotion& motion)
{
	{
		MovementData* pMoveSettings; // 88
		const int  nActiveMotorIndex; // 90
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<MovementData>(
					const CPackedHandle<MovementData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<MovementData>(
					const CPackedHandle<MovementData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<MovementData>(
					const CPackedHandle<MovementData>& handle);  // 88
		{
		}
		CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::operator[](
				int index);  // 93
		CRelativeOffset<const CAnimMotorUpdaterBase>::IsValid(); // 35
		CRelativeOffset<const CAnimMotorUpdaterBase>::Get(); // 45
		CRelativeOffset<const CAnimMotorUpdaterBase>::operator->(); // 93
	}
} /* size: 0 */

// <015AFDED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:101
// function call: 1
void CAnimMovementUpdater::GetMotorCount()
{
	CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::Count(); // 103
} /* size: 8, inline expansions: 1 (0 bytes) */

// <015AFC6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:109
// function calls: 5
void CAnimMovementUpdater::GetMotor(int index)
{
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::operator[](
			int index);  // 111
	CRelativeOffset<const CAnimMotorUpdaterBase>::IsValid(); // 35
	CRelativeOffset<const CAnimMotorUpdaterBase>::Get(); // 111
} /* size: 0, inline expansions: 5 (119 bytes) */

// <015AFC3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:117
void CAnimMovementUpdater::GetDefaultMotor()
{
} /* size: 0 */

// <015AFAA2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:125
// function calls: 5
void CAnimMovementUpdater::GetActiveMotor(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 127
} /* size: 86, inline expansions: 5 (68 bytes) */

// <015AF632> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:133
// variables: 2
// function calls: 16
void CAnimMovementUpdater::SetActiveMotor(CAnimGraphUpdateContext& context, int nIndex)
{
	MovementData* pMoveData; // 135
	const int  nPrevMotorIndex; // 136
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 135
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::operator[](
			int index);  // 149
	CRelativeOffset<const CAnimMotorUpdaterBase>::IsValid(); // 35
	CRelativeOffset<const CAnimMotorUpdaterBase>::Get(); // 45
	CRelativeOffset<const CAnimMotorUpdaterBase>::operator->(); // 149
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::operator[](
			int index);  // 142
	CRelativeOffset<const CAnimMotorUpdaterBase>::IsValid(); // 35
	CRelativeOffset<const CAnimMotorUpdaterBase>::Get(); // 45
	CRelativeOffset<const CAnimMotorUpdaterBase>::operator->(); // 142
} /* size: 0, variables: 2, inline expansions: 16 (350 bytes) */

// <015A3114> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:157
// variables: 357
// function calls: 824
void CAnimMovementUpdater::GetValue(const CAnimGraphUpdateContext& context, AnimValueSource valueSource, float& flValueOut)
{
	const MovementData* pModeData; // 159
	bool bFound; // 161
	{
		Vector moveVecWorld; // 168
		Vector moveVecLocal; // 169
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 169
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 87
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<27>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 2928
		ReverseSIMD<>(const fltx4& v); // 421
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 422
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 423
		QuaternionAligned::Conjugate(); // 448
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 448
		QuaternionAligned::operator fltx4(); // 408
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
				const fltx4& b);  // 405
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 406
		{
			fltx4 retVal; // 1851
			_mm_cmpeq_ps(__m128 __A,
					__m128 __B);  // 1852
		}
		CmpEqSIMD<>(const fltx4& a,
				const fltx4& b);  // 407
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 408
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
				const fltx4& b);  // 408
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 408
		QuaternionAligned::Normalized(); // 448
		CTransform::RotateVectorByInverse(
					const VectorAligned& v0);  // 87
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 42
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 87
		CTransform::RotateVectorByInverse(
					const Vector& v0);  // 169
		Vector::Normalized(); // 170
	}
	{
		Vector moveVecWorld; // 180
		Vector moveVecLocal; // 181
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 181
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 87
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<27>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 2928
		ReverseSIMD<>(const fltx4& v); // 421
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 422
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 423
		QuaternionAligned::Conjugate(); // 448
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 448
		QuaternionAligned::operator fltx4(); // 408
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
				const fltx4& b);  // 405
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 406
		{
			fltx4 retVal; // 1851
			_mm_cmpeq_ps(__m128 __A,
					__m128 __B);  // 1852
		}
		CmpEqSIMD<>(const fltx4& a,
				const fltx4& b);  // 407
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 408
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
				const fltx4& b);  // 408
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 408
		QuaternionAligned::Normalized(); // 448
		CTransform::RotateVectorByInverse(
					const VectorAligned& v0);  // 87
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 42
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 87
		CTransform::RotateVectorByInverse(
					const Vector& v0);  // 181
	}
	{
		Vector moveVecWorld; // 188
		Vector moveVecLocal; // 189
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 189
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 87
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<27>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 2928
		ReverseSIMD<>(const fltx4& v); // 421
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 422
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 423
		QuaternionAligned::Conjugate(); // 448
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 448
		QuaternionAligned::operator fltx4(); // 408
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
				const fltx4& b);  // 405
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 406
		{
			fltx4 retVal; // 1851
			_mm_cmpeq_ps(__m128 __A,
					__m128 __B);  // 1852
		}
		CmpEqSIMD<>(const fltx4& a,
				const fltx4& b);  // 407
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 408
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
				const fltx4& b);  // 408
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 408
		QuaternionAligned::Normalized(); // 448
		CTransform::RotateVectorByInverse(
					const VectorAligned& v0);  // 87
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 42
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 87
		CTransform::RotateVectorByInverse(
					const Vector& v0);  // 189
	}
	{
		Vector vFacingDir; // 196
		Vector::Vector(); // 196
	}
	{
		float flManualHeadingWS; // 204
		QAngle localRotaion; // 205
		float flManualHeadingMS; // 206
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 205
		QAngle::operator[](
				RotationAxis axis);  // 206
	}
	{
		Vector vLookDir; // 213
		Vector::Vector(); // 213
		_DebuggerBreakInlineExpressionWrapper(void); // 214
	}
	{
		Vector vLookDir; // 222
		QAngle lookAngles; // 225
		Vector::Vector(); // 222
		QAngle::QAngle(); // 225
		_DebuggerBreakInlineExpressionWrapper(void); // 223
	}
	{
		Vector waypointPosWorld; // 236
		Vector waypointPosLocal; // 237
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 411
		VectorAligned::operator fltx4(); // 406
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 408
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 406
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 409
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 410
		CTransform::TransformVector(
				const VectorAligned& v0);  // 442
		CTransform::TransformVectorByInverse(
					const VectorAligned& v0);  // 86
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 42
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 86
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 86
		CTransform::TransformVectorByInverse(
					const Vector& v0);  // 237
		Vector::Normalized(); // 238
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 237
	}
	{
		Vector waypointPosWorld; // 245
		Vector entityPosWorld; // 246
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 246
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 246
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 40
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 246
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 247
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 247
	}
	{
		Vector vAccelerationVec; // 268
		Vector::Vector(); // 268
		Vector::LengthSqr(); // 271
		Vector::Normalized(); // 277
		_DebuggerBreakInlineExpressionWrapper(void); // 269
	}
	{
		Vector vSlopeNormalWorld; // 289
		Vector vSlopeNormalLocal; // 290
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 290
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 87
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<27>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 2928
		ReverseSIMD<>(const fltx4& v); // 421
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 422
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 423
		QuaternionAligned::Conjugate(); // 448
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 448
		QuaternionAligned::operator fltx4(); // 408
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
				const fltx4& b);  // 405
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 406
		{
			fltx4 retVal; // 1851
			_mm_cmpeq_ps(__m128 __A,
					__m128 __B);  // 1852
		}
		CmpEqSIMD<>(const fltx4& a,
				const fltx4& b);  // 407
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 408
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
				const fltx4& b);  // 408
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 408
		QuaternionAligned::Normalized(); // 448
		CTransform::RotateVectorByInverse(
					const VectorAligned& v0);  // 87
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 42
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 87
		CTransform::RotateVectorByInverse(
					const Vector& v0);  // 290
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 292
		RAD2DEG(float flRadians); // 292
	}
	{
		Vector vSlopeNormalWorld; // 298
		Vector vSlopeNormalLocal; // 299
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 299
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 87
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<27>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 2928
		ReverseSIMD<>(const fltx4& v); // 421
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 422
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 423
		QuaternionAligned::Conjugate(); // 448
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 448
		QuaternionAligned::operator fltx4(); // 408
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
				const fltx4& b);  // 405
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 406
		{
			fltx4 retVal; // 1851
			_mm_cmpeq_ps(__m128 __A,
					__m128 __B);  // 1852
		}
		CmpEqSIMD<>(const fltx4& a,
				const fltx4& b);  // 407
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 408
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
				const fltx4& b);  // 408
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 408
		QuaternionAligned::Normalized(); // 448
		CTransform::RotateVectorByInverse(
					const VectorAligned& v0);  // 87
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 87
		CTransform::RotateVectorByInverse(
					const Vector& v0);  // 299
		Vector::operator=(
				const Vector& vOther);  // 2854
		Vector::NormalizeInPlaceSafe(
					const Vector& vFallback);  // 2849
		Vector::NormalizeInPlaceSafe(
					const Vector& vFallback);  // 303
	}
	{
		const Vector  vSlopeNormalWorld; // 311
		const Vector  vSlopeNormalLocal; // 312
		const float  flYaw; // 314
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 312
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 87
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<27>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 2928
		ReverseSIMD<>(const fltx4& v); // 421
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 422
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 423
		QuaternionAligned::Conjugate(); // 448
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 448
		QuaternionAligned::operator fltx4(); // 408
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
				const fltx4& b);  // 405
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 406
		{
			fltx4 retVal; // 1851
			_mm_cmpeq_ps(__m128 __A,
					__m128 __B);  // 1852
		}
		CmpEqSIMD<>(const fltx4& a,
				const fltx4& b);  // 407
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 408
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
				const fltx4& b);  // 408
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 408
		QuaternionAligned::Normalized(); // 448
		CTransform::RotateVectorByInverse(
					const VectorAligned& v0);  // 87
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 87
		CTransform::RotateVectorByInverse(
					const Vector& v0);  // 312
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 314
		RAD2DEG(float flRadians); // 315
	}
	{
		const Vector  vSlopeNormalWorld; // 321
		const Vector  vSlopeNormalLocal; // 322
		const float  flPitch; // 324
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 322
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 87
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<27>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 2928
		ReverseSIMD<>(const fltx4& v); // 421
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 422
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 423
		QuaternionAligned::Conjugate(); // 448
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 448
		QuaternionAligned::operator fltx4(); // 408
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
				const fltx4& b);  // 405
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 406
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
				const fltx4& b);  // 408
		{
			fltx4 retVal; // 1851
			_mm_cmpeq_ps(__m128 __A,
					__m128 __B);  // 1852
		}
		CmpEqSIMD<>(const fltx4& a,
				const fltx4& b);  // 407
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 408
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 408
		QuaternionAligned::Normalized(); // 448
		CTransform::RotateVectorByInverse(
					const VectorAligned& v0);  // 87
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 87
		CTransform::RotateVectorByInverse(
					const Vector& v0);  // 322
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 164
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 164
		VectorAligned::operator-(); // 324
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 324
		RAD2DEG(float flRadians); // 325
	}
	{
		Vector vAccelerationVec; // 335
		Vector::Vector(); // 335
		_DebuggerBreakInlineExpressionWrapper(void); // 336
	}
	{
		Vector vAccelerationVec; // 345
		Vector::Vector(); // 345
		_DebuggerBreakInlineExpressionWrapper(void); // 346
	}
	{
		Vector moveVecWorld; // 355
		Vector moveVecLocal; // 356
		float flMoveHeading; // 357
		Vector vLookDir; // 359
		float flLookHeading; // 361
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 356
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 87
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<27>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 2928
		ReverseSIMD<>(const fltx4& v); // 421
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 422
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 423
		QuaternionAligned::Conjugate(); // 448
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 448
		QuaternionAligned::operator fltx4(); // 408
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
				const fltx4& b);  // 405
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 406
		{
			fltx4 retVal; // 1851
			_mm_cmpeq_ps(__m128 __A,
					__m128 __B);  // 1852
		}
		CmpEqSIMD<>(const fltx4& a,
				const fltx4& b);  // 407
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 408
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
				const fltx4& b);  // 408
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 408
		QuaternionAligned::Normalized(); // 448
		CTransform::RotateVectorByInverse(
					const VectorAligned& v0);  // 87
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 42
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 87
		CTransform::RotateVectorByInverse(
					const Vector& v0);  // 356
		Vector::Normalized(); // 357
		Vector::Vector(); // 359
		_DebuggerBreakInlineExpressionWrapper(void); // 360
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 159
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 486
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 38
	CAnimPath::IsEmpty(); // 486
	CAnimMovementUpdater::HasPath(
		const CAnimGraphUpdateContext& context);  // 234
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 284
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 486
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 38
	CAnimPath::IsEmpty(); // 486
	CAnimMovementUpdater::HasPath(
		const CAnimGraphUpdateContext& context);  // 256
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 486
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 38
	CAnimPath::IsEmpty(); // 486
	CAnimMovementUpdater::HasPath(
		const CAnimGraphUpdateContext& context);  // 243
} /* size: 0, variables: 2, inline expansions: 35 (501 bytes) */

// <0159D27B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:382
// variables: 166
// function calls: 402
void CAnimMovementUpdater::GetVectorValue(const CAnimGraphUpdateContext& context, AnimVectorSource valueSource, Vector& vValueOut)
{
	const MovementData* pModeData; // 384
	bool bFound; // 386
	{
		Vector facingVecWorld; // 398
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 399
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 422
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<27>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 2928
		ReverseSIMD<>(const fltx4& v); // 421
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 423
		QuaternionAligned::Conjugate(); // 448
		QuaternionAligned::operator fltx4(); // 408
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
				const fltx4& b);  // 405
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 406
		{
			fltx4 retVal; // 1851
			_mm_cmpeq_ps(__m128 __A,
					__m128 __B);  // 1852
		}
		CmpEqSIMD<>(const fltx4& a,
				const fltx4& b);  // 407
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 408
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
				const fltx4& b);  // 408
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 408
		QuaternionAligned::Normalized(); // 448
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 448
		CTransform::RotateVectorByInverse(
					const VectorAligned& v0);  // 87
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 87
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 42
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 87
		CTransform::RotateVectorByInverse(
					const Vector& v0);  // 399
		Vector::operator=(
				const Vector& vOther);  // 399
	}
	{
		Vector origin; // 405
		Vector lookTarget; // 406
		Vector lookVecWorld; // 407
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 405
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 405
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 405
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 407
		Vector::Normalized(); // 407
	}
	{
		Vector waypointPosWorld; // 415
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 416
		VectorAligned::operator fltx4(); // 406
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 408
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 406
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 409
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 410
		CTransform::TransformVector(
				const VectorAligned& v0);  // 442
		CTransform::TransformVectorByInverse(
					const VectorAligned& v0);  // 86
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 86
		CTransform::TransformVectorByInverse(
					const Vector& v0);  // 416
	}
	{
		Vector vAccelerationWorld; // 422
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 195
		CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
		CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 423
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 146
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 87
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<27>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 2928
		ReverseSIMD<>(const fltx4& v); // 421
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 422
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 423
		QuaternionAligned::Conjugate(); // 448
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 448
		QuaternionAligned::operator fltx4(); // 408
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
				const fltx4& b);  // 405
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 406
		{
			fltx4 retVal; // 1851
			_mm_cmpeq_ps(__m128 __A,
					__m128 __B);  // 1852
		}
		CmpEqSIMD<>(const fltx4& a,
				const fltx4& b);  // 407
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 408
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
				const fltx4& b);  // 408
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 408
		QuaternionAligned::Normalized(); // 448
		CTransform::RotateVectorByInverse(
					const VectorAligned& v0);  // 87
		CTransform::RotateVectorByInverse(
					const Vector& v0);  // 423
	}
	{
		Vector vSlopeNormalWorld; // 429
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 384
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 453
	Vector::operator=(
			const Vector& vOther);  // 453
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 195
	CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
	CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 454
	VectorAligned::operator fltx4(); // 406
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 408
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 409
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 410
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 411
	CTransform::TransformVector(
			const VectorAligned& v0);  // 442
	CTransform::TransformVectorByInverse(
				const VectorAligned& v0);  // 86
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 86
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 86
	CTransform::TransformVectorByInverse(
				const Vector& v0);  // 454
	Vector::operator=(
			const Vector& vOther);  // 454
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 195
	CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
	CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 392
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 1797
	NegSIMD<>(const fltx4& a); // 422
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<27>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
					const fltx4& b); // 2928
	ReverseSIMD<>(const fltx4& v); // 421
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 423
	QuaternionAligned::Conjugate(); // 448
	QuaternionAligned::operator fltx4(); // 408
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
			const fltx4& b);  // 405
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 407
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 408
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
			const fltx4& b);  // 408
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 408
	QuaternionAligned::Normalized(); // 448
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 448
	CTransform::RotateVectorByInverse(
				const VectorAligned& v0);  // 87
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 87
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 87
	CTransform::RotateVectorByInverse(
				const Vector& v0);  // 392
	Vector::NormalizeInPlace(); // 393
	Vector::operator=(
			const Vector& vOther);  // 392
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 486
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 38
	CAnimPath::IsEmpty(); // 486
	CAnimMovementUpdater::HasPath(
		const CAnimGraphUpdateContext& context);  // 413
	Vector::operator=(
			const Vector& vOther);  // 435
	Vector::operator=(
			const Vector& vOther);  // 439
	Vector::operator=(
			const Vector& vOther);  // 444
	Vector::operator=(
			const Vector& vOther);  // 448
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
	CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 449
} /* size: 1980, variables: 2, inline expansions: 102 (2492 bytes) */

// <015D3A96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:468
// function calls: 5
void CAnimMovementUpdater::GetPath(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 470
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0159D251> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:468
void CAnimMovementUpdater::GetPath(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <0159D227> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:476
void CAnimMovementUpdater::GetPath(const CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <015D3C1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:484
// function calls: 7
void CAnimMovementUpdater::HasPath(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 486
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 38
	CAnimPath::IsEmpty(); // 486
} /* size: 0, inline expansions: 7 (0 bytes) */

// <0159D1FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:484
void CAnimMovementUpdater::HasPath(const CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <015D3E0D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:492
// function calls: 5
void CAnimMovementUpdater::HasGoalChanged(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 494
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0159D1D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:492
void CAnimMovementUpdater::HasGoalChanged(const CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <015D3F96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:500
// variable: 1
// function calls: 25
void CAnimMovementUpdater::GetCurrentWaypoint(const CAnimGraphUpdateContext& context)
{
	const CAnimPath& path; // 502
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 502
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 38
	CAnimPath::IsEmpty(); // 503
	{
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 148
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 52
	}
	CAnimPath::GetWayPointPosition(
				int nIndex);  // 196
	CAnimPath::operator[](
			int i);  // 505
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 195
	CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
	CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 509
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 509
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 509
	CAnimMovementUpdater::GetCurrentWaypoint(
				const CAnimGraphUpdateContext& context);  // 500
} /* size: 0, variables: 1, inline expansions: 23 (382 bytes) */

// <0159D19C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:500
// variable: 1
void CAnimMovementUpdater::GetCurrentWaypoint(const CAnimGraphUpdateContext& context)
{
	const CAnimPath& path; // 502
} /* size: 0, variables: 1 */

// <0159D001> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:516
// function calls: 5
void CAnimMovementUpdater::GetManualFacingHeading(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 518
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0159CEB6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:524
// function calls: 4
void CAnimMovementUpdater::SetManualFacingHeading(CAnimGraphUpdateContext& context, float flFacing)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 526
} /* size: 0, inline expansions: 4 (0 bytes) */

// <015D452E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:532
// function calls: 5
void CAnimMovementUpdater::GetFacingMode(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 534
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0159CE8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:532
void CAnimMovementUpdater::GetFacingMode(const CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <015D46B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:540
// function calls: 5
void CAnimMovementUpdater::SetFacingMode(CAnimGraphUpdateContext& context, FacingMode facingMode)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 542
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0159CE55> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:540
void CAnimMovementUpdater::SetFacingMode(CAnimGraphUpdateContext& context, FacingMode facingMode)
{
} /* size: 0 */

// <015D4841> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:548
// function calls: 5
void CAnimMovementUpdater::IsOnGround(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 550
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0159CE2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:548
void CAnimMovementUpdater::IsOnGround(const CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <0159CC87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:556
// function calls: 5
void CAnimMovementUpdater::SetOnGround(CAnimGraphUpdateContext& context, bool bOnGround)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 558
} /* size: 0, inline expansions: 5 (0 bytes) */

// <015D49CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:564
// function calls: 5
void CAnimMovementUpdater::GetMoveData(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 566
} /* size: 83, inline expansions: 5 (68 bytes) */

// <0159CC5D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:564
void CAnimMovementUpdater::GetMoveData(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <0159CC33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:572
void CAnimMovementUpdater::GetMoveData(const CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <0159CC00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:580
void CAnimMovementUpdater::ShouldCalculateSlope()
{
} /* size: 9 */

// <0159C8B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:588
// variables: 2
// function calls: 12
void CAnimMovementUpdater::Save(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const MovementData* pMoveData; // 590
	{
		int i; // 593
		CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::Count(); // 593
		CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::operator[](
				int index);  // 595
		CRelativeOffset<const CAnimMotorUpdaterBase>::IsValid(); // 35
		CRelativeOffset<const CAnimMotorUpdaterBase>::Get(); // 45
		CRelativeOffset<const CAnimMotorUpdaterBase>::operator->(); // 595
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 590
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0159C560> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:602
// variables: 2
// function calls: 12
void CAnimMovementUpdater::Restore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	MovementData* pMoveData; // 604
	{
		int i; // 607
		CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::Count(); // 607
		CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::operator[](
				int index);  // 609
		CRelativeOffset<const CAnimMotorUpdaterBase>::IsValid(); // 35
		CRelativeOffset<const CAnimMotorUpdaterBase>::Get(); // 45
		CRelativeOffset<const CAnimMotorUpdaterBase>::operator->(); // 609
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 604
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0159B9F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:616
// variables: 8
// function calls: 53
void CAnimMovementUpdater::UpdateDistanceToGoal(CAnimGraphUpdateContext& context)
{
	MovementData* pMoveSettings; // 618
	CAnimPath& path; // 619
	{
		float flGoalDistance; // 623
		{
			Vector vWayPointPos; // 627
			Vector vCurrentPos; // 628
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 267
			CPackedDataBase::operator[]<PerTickSettings_t>(
							const CPackedHandle<PerTickSettings_t>& handle);  // 195
			CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
			CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 628
			VectorAligned::operator fltx4(); // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 628
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 40
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 628
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 629
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 629
		}
		{
			int i; // 633
			{
				Vector prevPos; // 635
				Vector nextPos; // 636
				CAnimPath::operator[](
						int i);  // 635
				CAnimPath::operator[](
						int i);  // 636
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 638
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 638
			}
			CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 44
			CAnimPath::GetWayPointCount(); // 633
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 618
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 619
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 38
	CAnimPath::IsEmpty(); // 621
} /* size: 464, variables: 2, inline expansions: 12 (153 bytes) */

