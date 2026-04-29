
//
// animgraph/playerinputanimmotorupdater.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//

// <0167B29C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:18
void GetBaseMap(void)
{
} /* size: 0 */

// <0167B1DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:18
// variables: 2
datamap_t* DataMapInit<PlayerInputMotorInstanceData_t>(PlayerInputMotorInstanceData_t *)
{
	const char* pDataMapInit_className; // 18
	typedescription_t dataDesc; // 18
} /* size: 124, variables: 2 */

// <0167AB12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:30
// variables: 6
// function calls: 24
void CPlayerInputAnimMotorUpdater::CPlayerInputAnimMotorUpdater(CAnimGraphInitContext& initContext, const CUtlVector<float, CUtlMemory<float, int> >& sampleTimes, const CUtlString& name, bool bIsDefault)
{
	{
		int nSampleCount; // 35
		{
			float flTempSampleTimes; // 43
		}
	}
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 9
	CAnimMotorUpdaterBase::CAnimMotorUpdaterBase(
				const CUtlString& name,
				bool bIsDefault);  // 31
	{
		int nSampleCount; // 35
		PlayerInputMotorInstanceData_t::PlayerInputMotorInstanceData_t(); // 123
		PackedHandleID::operator=(
				uint32 id);  // 127
		CPackedDataT<true>::AddItem<PlayerInputMotorInstanceData_t>(
							CPackedHandle<PlayerInputMotorInstanceData_t>* handleOut);  // 33
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 35
		{
			float flTempSampleTimes; // 43
			{
				uint32 i; // 206
			}
			CPackedDataT<false>::AddArray<float>(
					const float* pSrcArray,
					uint32 count,
					CPackedHandle<float>* handleOut);  // 44
			CRelativeOffset<float>::SetOffset(
					const float* targetPtr);  // 20
			CRelativeOffset<float>::operator=(
					const float* targetPtr);  // 115
			CRelativeArray<float>::SetArray(
				const float* targetArray,
				int32 count);  // 44
		}
		{
			uint32 i; // 206
		}
		CPackedDataT<false>::AddArray<float>(
				const float* pSrcArray,
				uint32 count,
				CPackedHandle<float>* handleOut);  // 38
		CUtlMemory<float, int>::Base(); // 113
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 38
		CRelativeOffset<float>::SetOffset(
				const float* targetPtr);  // 20
		CRelativeOffset<float>::operator=(
				const float* targetPtr);  // 115
		CRelativeArray<float>::SetArray(
			const float* targetArray,
			int32 count);  // 38
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 35
	}
	CRelativeOffset<float>::CRelativeOffset(); // 84
	CRelativeArray<float>::CRelativeArray(); // 31
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<PlayerInputMotorInstanceData_t>::CPackedHandle(); // 31
	CAnimParamHandle::CAnimParamHandle(); // 31
	CAnimParamHandle::CAnimParamHandle(); // 31
} /* size: 422, inline expansions: 9 (142 bytes) */

// <0167AA9D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:30
// variables: 2
void CPlayerInputAnimMotorUpdater::CPlayerInputAnimMotorUpdater(CAnimGraphInitContext& initContext, const CUtlVector<float, CUtlMemory<float, int> >& sampleTimes, const CUtlString& name, bool bIsDefault)
{
	{
		int nSampleCount; // 35
		{
			float flTempSampleTimes; // 43
		}
	}
} /* size: 0 */

// <016891E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:49
// variables: 25
// function calls: 72
void CPlayerInputAnimMotorUpdater::Update(CAnimGraphUpdateContext& context, MovementData& moveSettings)
{
	CAnimParamHandle::IsValid(); // 64
	{
		Vector vAnticipationPosWS; // 67
		Vector vAnticipationPosMS; // 68
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 67
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 67
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
					const Vector& v0);  // 68
		CAnimParamHandle::IsValid(); // 70
		Vector::operator=(
				const Vector& vOther);  // 238
		CAnimVariant::SetValue<Vector>(
				const Vector& value);  // 159
		CAnimVariant::CAnimVariant<Vector>(
					const Vector& v);  // 72
		CAnimParamHandle::IsValid(); // 75
		Vector::Normalized(); // 77
		CAnimVariant::SetValue<float>(
				const float& value);  // 159
		CAnimVariant::CAnimVariant<float>(
					const float& v);  // 77
	}
	CAnimParamHandle::IsValid(); // 64
	CPlayerInputAnimMotorUpdater::Update(
		CAnimGraphUpdateContext& context,
		MovementData& moveSettings);  // 49
} /* size: 638, inline expansions: 3 (549 bytes) */

// <0167AA52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:49
// variables: 2
void CPlayerInputAnimMotorUpdater::Update(CAnimGraphUpdateContext& context, MovementData& moveSettings)
{
	{
		Vector vAnticipationPosWS; // 67
		Vector vAnticipationPosMS; // 68
	}
} /* size: 0 */

// <0167AA08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:83
void CPlayerInputAnimMotorUpdater::FixupRootMotion(CAnimGraphUpdateContext& context, CRootMotion& motion)
{
} /* size: 5 */

// <0167A82F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:89
// variable: 1
// function calls: 5
void CPlayerInputAnimMotorUpdater::Save(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const PlayerInputMotorInstanceData_t* pInstData; // 91
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 91
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0167A656> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:96
// variable: 1
// function calls: 5
void CPlayerInputAnimMotorUpdater::Restore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	PlayerInputMotorInstanceData_t* pInstData; // 98
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 98
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0167A226> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:103
// variables: 3
// function calls: 18
void CPlayerInputAnimMotorUpdater::SetInputVector(CAnimGraphUpdateContext& context, const Vector& vInputVecWS)
{
	const char   __FUNCTION__; // 31969
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 105
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 106
	}
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 105
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 106
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 108
	Vector::operator=(
			const Vector& vOther);  // 108
} /* size: 0, variables: 1, inline expansions: 18 (492 bytes) */

// <0167A08A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:112
// function calls: 5
void CPlayerInputAnimMotorUpdater::SetUseCustomAcceleration(CAnimGraphUpdateContext& context, bool bEnable)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 114
} /* size: 95, inline expansions: 5 (76 bytes) */

// <01679EAD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:118
// function calls: 6
void CPlayerInputAnimMotorUpdater::SetCustomAcceleration(CAnimGraphUpdateContext& context, const Vector& vAccel)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 120
	Vector::operator=(
			const Vector& vOther);  // 120
} /* size: 122, inline expansions: 6 (105 bytes) */

// <01678D84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:124
// variables: 21
// function calls: 64
void CPlayerInputAnimMotorUpdater::UpdateWithAcceleration(CAnimGraphUpdateContext& context, MovementData& moveSettings)
{
	PlayerInputMotorInstanceData_t* settings; // 126
	const Vector  vTargetVelocity; // 128
	const float  flTargetSpeed; // 129
	const bool  bIsStopped; // 132
	const Vector  vStartingPosition; // 134
	Vector vVelocityWS; // 182
	Vector vAccelerationWS; // 183
	float flSpeed; // 186
	{
		CAnimPathWaypointData newWaypoints; // 139
		int newWaypointCount; // 140
		Vector vLastPositionWS; // 142
		Vector vLastVelocityWS; // 143
		Vector vLastAccelerationWS; // 144
		float flLastTime; // 145
		{
			int i; // 147
			{
				Vector vVelocityWS; // 149
				Vector vAccelerationWS; // 150
				float flTimeStep; // 153
				Vector vJerk; // 154
				Vector vNewPositionWS; // 156
				{
					CAnimPathWaypointData& newWaypoint; // 160
					Vector::operator=(
							const Vector& vOther);  // 161
				}
				CRelativeOffset<float>::IsValid(); // 35
				CRelativeOffset<float>::Get(); // 97
				CRelativeArray<float>::operator[](
						int index);  // 151
				Vector::operator=(
						const Vector& vOther);  // 167
				{
				}
				CRelativeOffset<float>::IsValid(); // 35
				CRelativeOffset<float>::Get(); // 97
				CRelativeArray<float>::operator[](
						int index);  // 153
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 57
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 57
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 57
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 57
				SolveJerkForVelocity(float t,
							const Vector& vStartVelocity,
							const Vector& vEndVelocity,
							const Vector& vAcceleration);  // 154
				CloseEnough(const Vector& a,
						const Vector& b,
						float epsilon);  // 158
				Vector::operator=(
						const Vector& vOther);  // 166
				{
				}
				CRelativeOffset<float>::IsValid(); // 35
				CRelativeOffset<float>::Get(); // 97
				CRelativeArray<float>::operator[](
						int index);  // 169
				Vector::operator=(
						const Vector& vOther);  // 168
			}
			CRelativeArray<float>::Count(); // 147
		}
		CAnimPathWaypointData::CAnimPathWaypointData(); // 139
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 59
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	CAnimGraphUpdateContext::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 126
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 128
	CloseEnough(const Vector& a,
			const Vector& b,
			float epsilon);  // 132
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 134
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 134
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 186
	VectorDivide(const Vector& a,
			vec_t b,
			Vector& c);  // 1465
	Vector::Vector(); // 1464
	Vector::operator/(
			float fl);  // 197
	Vector::operator=(
			const Vector& vOther);  // 197
	Vector::operator=(
			const Vector& vOther);  // 200
	Vector::operator=(
			const Vector& vOther);  // 203
	Vector::operator=(
			const Vector& vOther);  // 207
	Vector::operator=(
			const Vector& vOther);  // 215
	Vector::operator=(
			const Vector& vOther);  // 211
	CloseEnough(const Vector& a,
			const Vector& b,
			float epsilon);  // 132
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 190
} /* size: 0, variables: 8, inline expansions: 34 (808 bytes) */

// <016783A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:220
// variables: 6
// function calls: 42
void CPlayerInputAnimMotorUpdater::UpdateWithoutAcceleration(CAnimGraphUpdateContext& context, MovementData& moveSettings)
{
	PlayerInputMotorInstanceData_t* settings; // 222
	const Vector  vTargetVelocity; // 224
	const Vector  vStartingPosition; // 226
	{
		CAnimPathWaypointData newWaypoints; // 234
		{
			int i; // 236
			{
				Vector vNewPositionWS; // 238
				CRelativeOffset<float>::IsValid(); // 35
				CRelativeOffset<float>::Get(); // 97
				CRelativeArray<float>::operator[](
						int index);  // 238
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 238
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 238
				Vector::operator=(
						const Vector& vOther);  // 240
			}
			CRelativeArray<float>::Count(); // 236
		}
		CAnimPathWaypointData::CAnimPathWaypointData(); // 234
		CRelativeArray<float>::Count(); // 245
		Vector::operator=(
				const Vector& vOther);  // 247
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<PlayerInputMotorInstanceData_t>(
							const CPackedHandle<PlayerInputMotorInstanceData_t>& handle);  // 222
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 224
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 226
	CloseEnough(const Vector& a,
			const Vector& b,
			float epsilon);  // 228
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 226
	Vector::operator=(
			const Vector& vOther);  // 250
	Vector::operator=(
			const Vector& vOther);  // 254
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 257
	Vector::operator=(
			const Vector& vOther);  // 258
	Vector::operator=(
			const Vector& vOther);  // 266
	Vector::operator=(
			const Vector& vOther);  // 262
} /* size: 1162, variables: 3, inline expansions: 28 (596 bytes) */

