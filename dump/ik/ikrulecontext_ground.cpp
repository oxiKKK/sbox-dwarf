
//
// ik/ikrulecontext_ground.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//

// <01BAA385> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.cpp:21
// function calls: 2
void CIKRuleContext_Ground::CIKRuleContext_Ground(const CIKRuleDescription_Ground* pRuleDescription)
{
	IIKRuleContext::IIKRuleContext(); // 6
	CIKRuleContext_Base::CIKRuleContext_Base(); // 22
} /* size: 29, inline expansions: 2 (0 bytes) */

// <01BAA360> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.cpp:21
void CIKRuleContext_Ground::CIKRuleContext_Ground(const CIKRuleDescription_Ground* pRuleDescription)
{
} /* size: 0 */

// <01BAA2FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.cpp:26
// function call: 1
void CIKRuleContext_Ground::GetName()
{
	CIKRuleDescription_Base::GetName(); // 28
} /* size: 34, inline expansions: 1 (4 bytes) */

// <01BA6BC3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.cpp:35
// variables: 59
// function calls: 245
void CIKRuleContext_Ground::UpdateInterpolationState(const CIKRuleContextUpdateTargetInput& ruleInput, CIKChainRuleInterpolationState* pInterpolationState)
{
	CIKChainRuleInterpolationState_Ground* pGround; // 37
	CIKChainRuleInterpolationState_Ground& interpolationState_Ground; // 42
	const CIKChainDescription* pIKChain; // 44
	CTraceRequest& traceHelper; // 45
	Vector vUp; // 47
	const Vector  vWsEndEffectorAnimationIdealPosition; // 48
	Vector vHighestPoint; // 50
	Vector vLowestPoint; // 52
	float flRadius; // 65
	Ray_t ray; // 67
	const CTraceResult& trace; // 72
	{
		const VertexColor_t& color; // 57
		CLabelledDebugHelper* pDebugHelper; // 59
		CIKChainDescription::GetName(); // 57
		CUtlString::Get(); // 99
		CUtlString::String(); // 25
		HashMapFunctor_t<CUtlString>::operator(
				const CUtlString& strKey);  // 571
		Count(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this); // 574
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Has this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this,
				int i);  // 611
		{
			IndexType_t iNode; // 613
			operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this,
					int i);  // 618
			operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this,
					int i);  // 621
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 618
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 618
			CUtlString::Get(); // 99
			CUtlString::String(); // 106
			CUtlString::Get(); // 99
			CUtlString::String(); // 106
			V_strcmp(const char* s1,
				const char* s2);  // 106
			CDefEquals<CUtlString>::operator(
					CUtlString lhs,
					CUtlString rhs);  // 618
			CUtlString::~CUtlString(); // 618
			CUtlString::~CUtlString(); // 618
		}
		CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::FindInBucket(
				int iBucket,
				const KeyType_t& key);  // 578
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 575
		{
			int iNode2; // 593
			{
				IndexType_t iNode; // 613
				CUtlString::Get(); // 354
				CUtlString::CUtlString(
						const CUtlString& string);  // 618
				operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this,
						int i);  // 618
				operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this,
						int i);  // 621
				CUtlString::Get(); // 354
				CUtlString::CUtlString(
						const CUtlString& string);  // 618
				CUtlString::Get(); // 99
				CUtlString::String(); // 106
				CUtlString::Get(); // 99
				CUtlString::String(); // 106
				V_strcmp(const char* s1,
					const char* s2);  // 106
				CDefEquals<CUtlString>::operator(
						CUtlString lhs,
						CUtlString rhs);  // 618
				CUtlString::~CUtlString(); // 618
				CUtlString::~CUtlString(); // 618
			}
			operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Has this,
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this,
					int i);  // 611
			CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::FindInBucket(
					int iBucket,
					const KeyType_t& key);  // 593
		}
		CVariableBitStringBase::Size(); // 332
		{
		}
		CVariableBitStringBase::GetInts(); // 333
		CBitStringT<CVariableBitStringBase>::GetBit(
			int bitNum);  // 591
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 589
		CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Find(
			const KeyType_t& key);  // 153
		Element(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
			int i);  // 180
		CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::operator[](
				IndexType_t i);  // 161
		{
			const VertexColor_t& color; // 157
			operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
					int i);  // 438
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 1520
			CopyConstruct<VertexColor_t>(VertexColor_t* pMemory,
							const VertexColor_t& src);  // 438
			operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
					int i);  // 441
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 441
			CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::InsertOrReplace(
					const KeyType_t& key,
					const ElemType_t& insert);  // 203
			CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Insert(
				const KeyType_t& key,
				const ElemType_t& insert);  // 158
		}
		ColorCycler<CUtlString>::Get(
			const CUtlString& key);  // 57
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
				const Vector& rhs);  // 61
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
				const Vector& rhs);  // 61
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 62
		CUtlString::CUtlString(
				const char* pString);  // 62
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 62
		CUtlString::~CUtlString(); // 62
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 62
	}
	{
		CTransform xWsTarget; // 79
		const float  flCollisionZ; // 81
		CTraceResult::GetNormal(); // 79
		CTraceResult::GetEndPosition(); // 79
		GenericCriticallyDampedType<float>::SnapTo(
			const float& kNewPosition);  // 36
		GenericCriticallyDampedType<float>::SetGoal(
			const float& kGoal);  // 31
		GenericCriticallyDampedType<float>::SetGoal(
			const float& kGoal);  // 55
		GenericCriticallyDampedType<float>::UpdateAndGetPosition(
					float flTimeStep);  // 57
		GenericCriticallyDampedType<float>::UpdateAndGetPosition(
					const float& kNewGoal,
					float flTimeStep);  // 53
		GenericCriticallyDampedType<float>::UpdateAndGetPosition(
					const float& kNewGoal,
					float flTimeStep);  // 83
	}
	CSpaceAgnosticBoneAccessor::GetModelToWorld(); // 47
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
			const VectorAligned& v);  // 447
	QuaternionAligned::GetUp(); // 401
	CTransform::GetUp(); // 47
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
	VectorAligned::operator Vector(); // 47
	CIKChainDescription::GetData(); // 48
	CSpaceAgnosticBoneAccessor::GetModel(); // 48
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 48
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
	VectorAligned::operator Vector(); // 48
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 51
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 55
	Vector::Vector(); // 50
	CIKRuleDescription_Ground::GetHeight(); // 51
	Vector::Vector(); // 52
	CIKRuleDescription_Ground::GetTraceRadius(); // 65
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
			float p3);  // 177
	VectorAligned::operator=(
			const Vector& src);  // 52
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 52
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
			float p3);  // 177
	VectorAligned::operator=(
			const Vector& src);  // 61
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 63
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 229
	VectorAligned::operator*=(
			vec_t s);  // 57
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
			float p3);  // 177
	VectorAligned::operator=(
			const Vector& src);  // 56
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 61
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 323
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 324
	VectorAligned::LengthSqr(); // 54
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 56
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 229
	VectorAligned::operator*=(
			vec_t s);  // 62
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 323
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 324
	VectorAligned::LengthSqr(); // 58
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 63
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
			float p3);  // 177
	VectorAligned::operator=(
			const Vector& src);  // 63
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 229
	VectorAligned::operator*=(
			vec_t s);  // 64
	Ray_t::Init(
		const Vector& start,
		const Vector& end,
		const Vector& mins,
		const Vector& maxs);  // 68
	VectorAligned::operator=(
			const VectorAligned& src);  // 12
	VectorAligned::operator=(
			const VectorAligned& src);  // 12
	VectorAligned::operator=(
			const VectorAligned& src);  // 12
	VectorAligned::operator=(
			const VectorAligned& src);  // 12
	Ray_t::operator=(
			const Ray_t  &);  // 20
	CTraceRequest::SetRay(
		const Ray_t& ray);  // 70
	VectorAligned::VectorAligned(); // 22
	VectorAligned::VectorAligned(); // 22
	VectorAligned::VectorAligned(); // 22
	VectorAligned::VectorAligned(); // 22
	Ray_t::Ray_t(); // 67
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 68
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 68
	CTraceResult::DidHit(); // 74
	CTraceResult::StartsInSolid(); // 76
} /* size: 0, variables: 11, inline expansions: 119 (1806 bytes) */

// <01BA6A72> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.cpp:89
// variables: 5
// function calls: 2
void CIKRuleContext_Ground::CalculateTargetTransform(const CIKRuleContextCalculateTargetInput& ruleInput)
{
	const CIKChainRuleInterpolationState_Ground* pGround; // 91
	const CIKChainRuleInterpolationState_Ground& interpolationState_Ground; // 96
	const Vector  vWsCollisionPoint; // 98
	const Vector  vWsCollisionNormal; // 104
	CTransform xWsTarget; // 106
	VectorAligned::y(); // 102
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 102
} /* size: 229, variables: 5, inline expansions: 2 (9 bytes) */

// <01BA6A00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.cpp:118
// variable: 1
void CIKRuleContext_Ground::GetRequestedAbsOriginZ(const CIKChainRuleInterpolationState& interpolationState)
{
	const CIKChainRuleInterpolationState_Ground* pGround; // 120
} /* size: 38, variables: 1 */

