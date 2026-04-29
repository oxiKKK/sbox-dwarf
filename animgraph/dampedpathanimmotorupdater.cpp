
//
// animgraph/dampedpathanimmotorupdater.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <01688EC6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:15
void GetBaseMap(void)
{
} /* size: 0 */

// <016876F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:15
// variables: 2
datamap_t* DataMapInit<DampedPathMotorInstanceData_t>(DampedPathMotorInstanceData_t *)
{
	const char* pDataMapInit_className; // 15
	typedescription_t dataDesc; // 15
} /* size: 124, variables: 2 */

// <016876B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:26
float Pow3(float f)
{
} /* size: 0 */

// <0168711D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:32
// variables: 2
// function calls: 24
Vector CalculateFuturePosition(float t, const Vector& vStartPos, const Vector& vVelocity, const Vector& vAcceleration, const Vector& vJerk)
{
	float t2; // 34
	float t3; // 35
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 39
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 40
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 39
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 41
	Vector::Vector(); // 1464
	VectorDivide(const Vector& a,
			vec_t b,
			Vector& c);  // 1465
	Vector::operator/(
			float fl);  // 41
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 40
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 40
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 41
} /* size: 175, variables: 2, inline expansions: 24 (304 bytes) */

// <01686D7F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:44
// variable: 1
// function calls: 15
Vector CalculateFutureVelocity(float t, const Vector& vVelocity, const Vector& vAcceleration, const Vector& vJerk)
{
	float t2; // 46
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 50
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 51
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 51
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 50
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 51
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <01686D2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:54
// variable: 1
Vector SolveJerkForVelocity(float t, const Vector& vStartVelocity, const Vector& vEndVelocity, const Vector& vAcceleration)
{
	float t2; // 56
} /* size: 0, variables: 1 */

// <01686872> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:61
// variables: 8
// function calls: 19
float CalcTimeTillVelocity(const Vector& vStartVelocity, const Vector& vEndVelocity, const Vector& vAcceleration, const Vector& vJerk)
{
	Vector vProjectionAxis; // 66
	float flStartVelocity; // 77
	float flEndVelocity; // 78
	float flAcceleration; // 79
	float flJerk; // 80
	float t1; // 82
	float t2; // 82
	{
		float flTime; // 86
	}
	Vector::Normalized(); // 66
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 67
	Vector::Normalized(); // 69
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 71
	Vector::operator=(
			const Vector& vOther);  // 69
	DotProduct(const Vector& a,
			const Vector& b);  // 78
	DotProduct(const Vector& a,
			const Vector& b);  // 77
	DotProduct(const Vector& a,
			const Vector& b);  // 79
	DotProduct(const Vector& a,
			const Vector& b);  // 80
} /* size: 539, variables: 7, inline expansions: 19 (510 bytes) */

// <0168648F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:106
// variables: 4
// function calls: 18
float CalcTimeTillAcceleration(const Vector& vStartAcceleration, const Vector& vEndAcceleration, float flMaxJerk)
{
	Vector vProjectionAxis; // 114
	float flStartAccel; // 125
	float flEndAccel; // 126
	float flJerk; // 132
	Vector::Normalized(); // 114
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 115
	DotProduct(const Vector& a,
			const Vector& b);  // 125
	DotProduct(const Vector& a,
			const Vector& b);  // 126
	Sign(float x); // 132
	Vector::Normalized(); // 117
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 119
	Vector::operator=(
			const Vector& vOther);  // 117
} /* size: 0, variables: 4, inline expansions: 18 (0 bytes) */

// <01686255> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:138
// function calls: 7
void CDampedPathAnimMotorUpdater::CDampedPathAnimMotorUpdater(CAnimGraphInitContext& initContext, const CAnimInputDamping& facingDamping, bool bLockToPath, const CUtlString& name, bool bIsDefault)
{
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<DampedPathMotorInstanceData_t>::CPackedHandle(); // 139
	CAnimParamHandle::CAnimParamHandle(); // 139
	CAnimParamHandle::CAnimParamHandle(); // 139
	DampedPathMotorInstanceData_t::DampedPathMotorInstanceData_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<DampedPathMotorInstanceData_t>(
						CPackedHandle<DampedPathMotorInstanceData_t>* handleOut);  // 141
} /* size: 167, inline expansions: 7 (153 bytes) */

// <01686200> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:138
void CDampedPathAnimMotorUpdater::CDampedPathAnimMotorUpdater(CAnimGraphInitContext& initContext, const CAnimInputDamping& facingDamping, bool bLockToPath, const CUtlString& name, bool bIsDefault)
{
} /* size: 0 */

// <0168520C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:147
// variables: 25
// function calls: 65
void CDampedPathAnimMotorUpdater::Update(CAnimGraphUpdateContext& context, MovementData& moveSettings)
{
	CTransform goalTransformWS; // 149
	Vector vModelSpaceGoalPos; // 154
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<DampedPathMotorInstanceData_t>(
							const CPackedHandle<DampedPathMotorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<DampedPathMotorInstanceData_t>(
							const CPackedHandle<DampedPathMotorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<DampedPathMotorInstanceData_t>(
							const CPackedHandle<DampedPathMotorInstanceData_t>& handle);  // 149
	VectorAligned::operator fltx4(); // 71
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 154
	VectorAligned::operator fltx4(); // 406
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
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
				const VectorAligned& v0);  // 154
	CAnimParamHandle::IsValid(); // 156
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 154
	Vector::operator=(
			const Vector& vOther);  // 238
	CAnimVariant::SetValue<Vector>(
			const Vector& value);  // 159
	CAnimVariant::CAnimVariant<Vector>(
				const Vector& v);  // 158
	CAnimParamHandle::IsValid(); // 161
	Vector::Normalized(); // 163
	CAnimVariant::SetValue<float>(
			const float& value);  // 159
	CAnimVariant::CAnimVariant<float>(
				const float& v);  // 163
} /* size: 485, variables: 2, inline expansions: 39 (812 bytes) */

// <01685033> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:168
// variable: 1
// function calls: 5
void CDampedPathAnimMotorUpdater::Save(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const DampedPathMotorInstanceData_t* pInstData; // 170
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<DampedPathMotorInstanceData_t>(
							const CPackedHandle<DampedPathMotorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<DampedPathMotorInstanceData_t>(
							const CPackedHandle<DampedPathMotorInstanceData_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<DampedPathMotorInstanceData_t>(
							const CPackedHandle<DampedPathMotorInstanceData_t>& handle);  // 170
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <01684E5A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:175
// variable: 1
// function calls: 5
void CDampedPathAnimMotorUpdater::Restore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	DampedPathMotorInstanceData_t* pInstData; // 177
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<DampedPathMotorInstanceData_t>(
							const CPackedHandle<DampedPathMotorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<DampedPathMotorInstanceData_t>(
							const CPackedHandle<DampedPathMotorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<DampedPathMotorInstanceData_t>(
							const CPackedHandle<DampedPathMotorInstanceData_t>& handle);  // 177
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0167F568> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:182
// variables: 88
// function calls: 401
void CDampedPathAnimMotorUpdater::SimMovement(const CAnimGraphUpdateContext& context, MovementData& moveSettings, DampedPathMotorInstanceData_t& settings, float flTimeStep)
{
	CTransform vModelSpaceGoalTransform; // 184
	const char   __FUNCTION__; // 31898
	{
		const Vector  vCurrentPos; // 190
		const Vector  vCurrentWaypointPos; // 191
		const Vector  vToCurrentWaypoint; // 192
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 188
		}
		{
			int nNextWaypointIndex; // 201
			Vector vTargetVelocity; // 202
			Vector vVelocity; // 205
			Vector vAcceleration; // 206
			Vector vJerk; // 209
			float flTimeTillVelocity; // 212
			float flDistanceEstimate; // 214
			float flTargetDistance; // 237
			Vector vGoalPos; // 240
			Vector vGoalDir; // 241
			bool bSharpCorner; // 242
			int currentWaypointIndex; // 243
			float t; // 286
			float t2; // 287
			float t3; // 288
			const float  flMinSpeed; // 295
			Vector vTestPos; // 304
			Vector vSpringVelocity; // 305
			Vector vMoveDir; // 336
			float flMoveSpeed; // 337
			float flDistToGoal; // 340
			{
				Vector vFirstStepPos; // 218
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 221
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 224
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 221
			}
			{
				Vector vResultPos; // 229
				_mm_cvtss_f32(__m128 __A); // 21
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 230
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 230
			}
			{
				Vector vWayPointPos; // 246
				Vector vToWaypoint; // 251
				float dp; // 252
				float dist; // 259
				DotProduct(const Vector& a,
						const Vector& b);  // 1167
				Vector::Dot(
					const Vector& vOther);  // 252
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 251
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 259
				Vector::Normalized(); // 270
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 262
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 262
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 262
				Lerp<Vector>(float flPercent,
						const Vector& A,
						const Vector& B);  // 262
				Vector::Normalized(); // 263
				Vector::operator=(
						const Vector& vOther);  // 263
			}
			{
				float resultDist; // 278
				float startingDist; // 279
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
				}
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 278
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 278
			}
			{
				const Vector  vToGoal; // 313
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 313
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 314
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 314
				DotProduct(const Vector& a,
						const Vector& b);  // 1167
				Vector::Dot(
					const Vector& vOther);  // 314
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 318
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 318
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 347
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 360
			}
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 202
			Vector::Normalized(); // 202
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 57
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 57
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
						const Vector& vAcceleration);  // 209
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 202
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3341
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3345
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
					const VectorAligned& v);  // 435
			QuaternionAligned::GetForward(); // 391
			CTransform::GetForward(); // 241
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 40
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 241
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 289
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 289
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 289
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 289
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 289
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 289
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 293
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 289
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 292
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 292
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 293
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 292
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 292
			Vector::operator=(
					const Vector& vOther);  // 292
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 296
			Vector2D::operator==(
					const Vector2D& src);  // 310
			Vector::operator=(
					const Vector& vOther);  // 332
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 336
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 325
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 325
			Vector::Normalized(); // 336
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 337
			CAnimParamHandle::CAnimParamHandle(); // 340
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			Vector::IsValid(); // 346
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1659
			VectorIsNormalized(const Vector& vecIn,
						float flTolerance);  // 346
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			Vector::IsValid(); // 347
			Vector::operator=(
					const Vector& vOther);  // 350
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 355
			Vector::operator=(
					const Vector& vOther);  // 352
			Vector::operator=(
					const Vector& vOther);  // 357
			Vector::operator=(
					const Vector& vOther);  // 355
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			Vector::IsValid(); // 359
			Vector::operator=(
					const Vector& vOther);  // 356
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			Vector::IsValid(); // 360
			VectorAligned::operator fltx4(); // 110
			{
				fltx4 x000; // 1010
				fltx4 y000; // 1011
				fltx4 z000; // 1012
				fltx4 x0y0; // 1013
				_mm_load_ss(const float* __P); // 1010
				_mm_load_ss(const float* __P); // 1011
				_mm_load_ss(const float* __P); // 1012
				_mm_movelh_ps(__m128 __A,
						__m128 __B);  // 1013
			}
			LoadUnaligned3SIMD<>(const void* pSIMD); // 110
			{
				fltx4 zzww; // 1414
				{
					fltx4 retVal; // 1276
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1277
				}
				ShuffleSIMD<250>(const fltx4& a,
						const fltx4& b);  // 665
				ShuffleSIMD<250>(const fltx4& a,
						const fltx4& b);  // 1414
				{
					fltx4 retVal; // 1276
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1277
				}
				ShuffleSIMD<148>(const fltx4& a,
						const fltx4& b);  // 665
				ShuffleSIMD<148>(const fltx4& a,
						const fltx4& b);  // 1415
			}
			SetWSIMD<>(const fltx4& a,
					const fltx4& w);  // 110
			VectorAligned::operator=(
					fltx4 src);  // 110
			CTransform::SetPosition(
					const Vector& v0);  // 362
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
					const Vector& rhs);  // 363
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 363
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 217
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 345
			CTransform::SetOrientation(
					const Quaternion& qOrientation);  // 363
			Vector::Normalized(); // 298
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 298
			Vector::operator=(
					const Vector& vOther);  // 298
		}
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 190
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 190
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 192
	}
	{
		Vector vVelocity; // 372
		Vector vAcceleration; // 373
		Vector vJerk; // 374
		float flSpeed; // 388
		Vector vGoalDir; // 402
		Vector vGoalPos; // 403
		{
			float t; // 378
			float t2; // 379
			float t3; // 380
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 381
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 381
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 381
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 381
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 381
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 384
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 381
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 384
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 384
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 384
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 385
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 385
			Vector::operator=(
					const Vector& vOther);  // 384
		}
		{
			float t; // 405
			float t2; // 406
			float t3; // 407
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 409
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 409
			VectorDivide(const Vector& a,
					vec_t b,
					Vector& c);  // 1465
			Vector::Vector(); // 1464
			Vector::operator/(
					float fl);  // 409
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 409
			Vector::Vector(); // 1464
			VectorDivide(const Vector& a,
					vec_t b,
					Vector& c);  // 1465
			Vector::operator/(
					float fl);  // 409
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 409
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 409
		}
		Vector::Vector(); // 374
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 388
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 392
		Vector::operator=(
				const Vector& vOther);  // 395
		Vector::operator=(
				const Vector& vOther);  // 396
		Vector::Normalized(); // 402
		Vector::operator=(
				const Vector& vOther);  // 399
		Vector::operator=(
				const Vector& vOther);  // 400
		Vector::Vector(); // 403
		VectorAligned::operator fltx4(); // 110
		{
			fltx4 x000; // 1010
			fltx4 y000; // 1011
			fltx4 z000; // 1012
			fltx4 x0y0; // 1013
			_mm_load_ss(const float* __P); // 1010
			_mm_load_ss(const float* __P); // 1011
			_mm_load_ss(const float* __P); // 1012
			_mm_movelh_ps(__m128 __A,
					__m128 __B);  // 1013
		}
		LoadUnaligned3SIMD<>(const void* pSIMD); // 110
		{
			fltx4 zzww; // 1414
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<250>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<250>(const fltx4& a,
					const fltx4& b);  // 1414
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<148>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<148>(const fltx4& a,
					const fltx4& b);  // 1415
		}
		SetWSIMD<>(const fltx4& a,
				const fltx4& w);  // 110
		VectorAligned::operator=(
				fltx4 src);  // 110
		CTransform::SetPosition(
				const Vector& v0);  // 412
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
				const Vector& rhs);  // 413
		QuaternionAligned::w(); // 41
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 41
		QuaternionAligned::operator Quaternion(); // 413
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 345
		CTransform::SetOrientation(
				const Quaternion& qOrientation);  // 413
	}
} /* size: 0, variables: 2 */

// <0167EFC3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:420
// variables: 4
// function calls: 22
void CDampedPathAnimMotorUpdater::SimSpring(Vector& vCurrent, Vector& vDelta, const Vector& vTarget, float flTimeStep)
{
	Vector vTargetClamped; // 422
	Vector vOffset; // 423
	float flOffsetLength; // 424
	float flClampedOffsetLength; // 427
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 423
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 424
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 427
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 436
	Vector::operator=(
			const Vector& vOther);  // 436
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 430
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 431
	Vector::operator=(
			const Vector& vOther);  // 430
	Vector::operator=(
			const Vector& vOther);  // 431
} /* size: 327, variables: 4, inline expansions: 22 (315 bytes) */

