
//
// animgraph/pathanimmotorupdaterbase.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <0167E1DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdaterbase.cpp:12
// function calls: 10
void CPathAnimMotorUpdaterBase::CPathAnimMotorUpdaterBase(CAnimGraphInitContext& initContext, const CAnimInputDamping& facingDamping, bool bLockToPath, const CUtlString& name, bool bIsDefault)
{
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 9
	CAnimMotorUpdaterBase::CAnimMotorUpdaterBase(
				const CUtlString& name,
				bool bIsDefault);  // 15
	CAnimInputDamping::CAnimInputDamping(
				const CAnimInputDamping  &);  // 14
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<PathMotorInstanceData_t>::CPackedHandle(); // 15
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 12
	PathMotorInstanceData_t::PathMotorInstanceData_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<PathMotorInstanceData_t>(
					CPackedHandle<PathMotorInstanceData_t>* handleOut);  // 17
} /* size: 222, inline expansions: 10 (212 bytes) */

// <0167E186> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdaterbase.cpp:12
void CPathAnimMotorUpdaterBase::CPathAnimMotorUpdaterBase(CAnimGraphInitContext& initContext, const CAnimInputDamping& facingDamping, bool bLockToPath, const CUtlString& name, bool bIsDefault)
{
} /* size: 0 */

// <0167C049> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdaterbase.cpp:21
// variables: 60
// function calls: 143
void CPathAnimMotorUpdaterBase::FixupRootMotion(CAnimGraphUpdateContext& context, CRootMotion& motion)
{
	const char   __FUNCTION__; // 31996
	{
		const float  flOriginalDist; // 25
		const Vector  vStartPos; // 27
		const Vector  vDestPos; // 28
		Vector vMoveVec; // 29
		float flMoveDistance; // 33
		Vector vWaypointPos; // 34
		Vector vToWayPoint; // 35
		Vector vResultPos; // 54
		{
			Vector vNewDestPosition; // 39
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 40
			Vector::operator=(
					const Vector& vOther);  // 40
		}
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 27
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 27
		VectorAligned::operator fltx4(); // 417
		{
			fltx4 x000; // 1010
			fltx4 y000; // 1011
			fltx4 z000; // 1012
			fltx4 x0y0; // 1013
			_mm_load_ss(const float* __P); // 1012
			_mm_load_ss(const float* __P); // 1010
			_mm_load_ss(const float* __P); // 1011
			_mm_movelh_ps(__m128 __A,
					__m128 __B);  // 1013
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1014
		}
		LoadUnaligned3SIMD<>(const void* pSIMD); // 419
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
				const VectorAligned& v);  // 419
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 417
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 419
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 420
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 421
		Vector::Vector(); // 422
		_mm_store_ss(float* __P,
				__m128 __A);  // 466
		_mm_store_ss(float* __P,
				__m128 __A);  // 467
		_mm_store_ss(float* __P,
				__m128 __A);  // 468
		StoreUnaligned3SIMD<>(float* pSIMD,
					const fltx4& a);  // 423
		CTransform::TransformVector(
				const Vector& v0);  // 28
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 29
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 33
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 35
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 37
		Vector::Normalized(); // 50
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 50
		Vector::operator=(
				const Vector& vOther);  // 50
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 54
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
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 42
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 86
		CTransform::TransformVectorByInverse(
					const Vector& v0);  // 55
		Vector::operator=(
				const Vector& vOther);  // 55
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 58
	}
} /* size: 0, variables: 1 */

// <0167B45F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdaterbase.cpp:62
// variables: 11
// function calls: 41
void CPathAnimMotorUpdaterBase::UpdateFacing(CAnimGraphUpdateContext& context, MovementData& moveSettings)
{
	float flTargetHeadingWS; // 64
	{
		Vector vLookDirection; // 83
		Vector::Normalized(); // 84
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 83
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 83
	}
	{
		QuaternionAligned qLocal2WorldRot; // 99
		QuaternionAligned qTargetRotWS; // 101
		QuaternionAligned qTargetRotMS; // 103
		float flTargetHeadingMS; // 104
		CDampedValue& dampedValue; // 106
		QuaternionAligned futureOrientationWS; // 110
		RadianEuler::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 2535
		RadianEuler::RadianEuler(
				const QAngle& angles);  // 2530
		Quaternion::Quaternion(
				const QAngle& angles);  // 101
		QAngle::QAngle(
			vec_t flPitchDegrees,
			vec_t flYawDegrees,
			vec_t flRollDegrees);  // 101
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 30
		QuaternionAligned::QuaternionAligned(
					const Quaternion& rhs);  // 101
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
		QuaternionAligned::Conjugate(); // 103
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 301
		QuaternionAligned::operator*=(
				const QuaternionAligned& q);  // 302
		QuaternionAligned::operator*(
				const QuaternionAligned& q);  // 103
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<PathMotorInstanceData_t>(
							const CPackedHandle<PathMotorInstanceData_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<PathMotorInstanceData_t>(
							const CPackedHandle<PathMotorInstanceData_t>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<PathMotorInstanceData_t>(
							const CPackedHandle<PathMotorInstanceData_t>& handle);  // 106
		RadianEuler::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 2535
		RadianEuler::RadianEuler(
				const QAngle& angles);  // 2530
		Quaternion::Quaternion(
				const QAngle& angles);  // 110
		QAngle::QAngle(
			vec_t flPitchDegrees,
			vec_t flYawDegrees,
			vec_t flRollDegrees);  // 110
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 30
		QuaternionAligned::QuaternionAligned(
					const Quaternion& rhs);  // 110
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 301
		QuaternionAligned::operator*=(
				const QuaternionAligned& q);  // 302
		QuaternionAligned::operator*(
				const QuaternionAligned& q);  // 110
	}
} /* size: 589, variables: 1 */

