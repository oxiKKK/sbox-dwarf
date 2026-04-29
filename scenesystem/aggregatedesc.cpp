
//
// scenesystem/aggregatedesc.cpp
//
//	referenced by: libengine2.so
//
//	functions: 30
//	structs: 2
//

// <03D922E7> ../scenesystem/aggregatedesc.cpp:24
void PerFragmentData_t::PerFragmentData_t()
{
} /* size: 0 */

// <03D922CB> ../scenesystem/aggregatedesc.cpp:24
inline void PerFragmentData_t::PerFragmentData_t()
{
} /* size: 0 */

// <03D8C561> ../scenesystem/aggregatedesc.cpp:24
// member function: 1
// member variables: 6
// struct size: 96
struct PerFragmentData_t {
	matrix3x4_t worldFromModel; /* 0 48 */
	Vector vBoundsMin; /* 48 12 */
	uint32 nEnvMapIdx; /* 60 4 */
	Vector vBoundsMax; /* 64 12 */
	uint32 nFlags; /* 76 4 */
	Vector4D vTint; /* 80 16 */
	void PerFragmentData_t(PerFragmentData_t* );
};

// <03D72CB4> ../scenesystem/aggregatedesc.cpp:38
// member variables: 3
// struct size: 24
struct AggregateDrawData_t {
	const uint32 * m_pVisBits; /* 0 8 */
	const class CMaterialDrawDescriptor * m_pDrawCall; /* 8 8 */
	bool * m_pPooledVisibility; /* 16 8 */
};

// <03DA5598> ../scenesystem/aggregatedesc.cpp:50
// function calls: 24
void CAggregateSceneObject::CAggregateSceneObject()
{
	IGenericInterface::IGenericInterface(); // 1428
	{
	}
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<3, unsigned int>::AlignedByteArray_t(); // 228
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 3>::CUtlVectorFixedGrowable(
				int growSize);  // 1428
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1428
	CUtlStringToken::CUtlStringToken(); // 1428
	CManagedHandle::CManagedHandle(); // 1428
	CSceneObject::CSceneObject(); // 50
	CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(); // 50
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::CUtlVector(); // 50
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 50
	matrix3x4_t::matrix3x4_t(); // 50
} /* size: 290, inline expansions: 24 (651 bytes) */

// <03DA557F> ../scenesystem/aggregatedesc.cpp:50
void CAggregateSceneObject::CAggregateSceneObject()
{
} /* size: 0 */

// <03DA4F47> ../scenesystem/aggregatedesc.cpp:54
// function calls: 31
void CAggregateSceneObject::~CAggregateSceneObject()
{
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::Purge(); // 903
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::Purge(); // 1799
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::Purge(); // 560
	ValidateAlignment<CAggregateSceneObject::MeshFragment_t>(void); // 508
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::Purge(); // 510
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::~CUtlVector(); // 57
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 57
	CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 57
	CManagedHandle::~CManagedHandle(); // 1436
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 3>::~CUtlVectorFixedGrowable(); // 1436
	CSceneObject::~CSceneObject(); // 57
} /* size: 302, inline expansions: 31 (911 bytes) */

// <03DA4EDF> ../scenesystem/aggregatedesc.cpp:54
void CAggregateSceneObject::~CAggregateSceneObject()
{
} /* size: 36 */

// <03DA445A> ../scenesystem/aggregatedesc.cpp:59
// variables: 8
// function calls: 37
void CAggregateSceneObject::Init(const matrix3x4_t& mWorldTransform, HModel hModel, uint nFragmentCount)
{
	const CModel* pModel; // 64
	const char   __FUNCTION__; // 24577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 65
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 66
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 69
	}
	{
		int i; // 77
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 79
		}
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 77
		CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
				int i);  // 79
		CStrongHandle<InfoForResourceTypeIMaterial2>::operator==(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 79
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 61
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 64
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 69
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 70
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::NumAllocated(); // 782
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::Base(); // 112
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::Base(); // 368
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::SetCount(
		int count);  // 72
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::IsGrowable(); // 881
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::EnsureCapacity(
			int num);  // 73
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
			int i);  // 76
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 76
} /* size: 0, variables: 2, inline expansions: 33 (1232 bytes) */

// <03DA3C85> ../scenesystem/aggregatedesc.cpp:83
// variables: 3
// function calls: 31
void CAggregateSceneObject::AddMeshFragment(const matrix3x4_t& mWorldFromModel, const AABB_t& worldBounds, FragmentFlags_t fragmentFlags, const Vector4D& vTintColor, uint16 nDrawDescriptorIndex, uint32 nCubeMapPrecomputedHandshake, const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& precomputedVisMembership)
{
	MeshFragment_t* pFragment; // 97
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::NumAllocated(); // 1143
	matrix3x4_t::matrix3x4_t(); // 24
	Vector4D::Vector4D(); // 24
	VectorAligned::VectorAligned(); // 24
	VectorAligned::VectorAligned(); // 24
	MeshFragment_t::MeshFragment_t(); // 1479
	Construct<CAggregateSceneObject::MeshFragment_t>(MeshFragment_t* pMemory); // 1148
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::Base(); // 112
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::Base(); // 368
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::AddToTail(); // 1156
	CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::AddToTailGetPtr(); // 97
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
			int i);  // 108
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
			const Vector& src);  // 99
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
			const Vector& src);  // 100
	Vector4D::operator=(
			const Vector4D& vOther);  // 101
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 135
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::IsEmpty(); // 110
	CSceneObject::GetWorld(); // 117
	CSceneWorld::IsFreed(); // 340
	{
	}
	CSceneWorld::GetPVS(); // 116
	CUtlMemory<unsigned int, int>::Base(); // 113
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 112
} /* size: 0, variables: 1, inline expansions: 29 (640 bytes) */

// <03DA3045> ../scenesystem/aggregatedesc.cpp:124
// variables: 8
// function calls: 54
void CAggregateSceneObject::FinalizeFragments()
{
	const char   __FUNCTION__; // 24893
	CUtlVector<PerFragmentData_t, CUtlMemory<PerFragmentData_t, int> > perFragmentData; // 133
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 127
	}
	{
		const MeshFragment_t& fragment; // 135
		CUtlVector<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >& __for_range; // 54374
		iterator __for_begin; // 20387
		iterator __for_end; // 20387
		{
			PerFragmentData_t* pData; // 137
			matrix3x4_t::matrix3x4_t(); // 24
			Vector::Vector(); // 24
			Vector::Vector(); // 24
			Vector4D::Vector4D(); // 24
			PerFragmentData_t::PerFragmentData_t(); // 1479
			Construct<PerFragmentData_t>(PerFragmentData_t* pMemory); // 1148
			CUtlMemory<PerFragmentData_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<PerFragmentData_t, CUtlMemory<PerFragmentData_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<PerFragmentData_t, CUtlMemory<PerFragmentData_t, int> >::AddToTail(); // 1156
			CUtlMemory<PerFragmentData_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<PerFragmentData_t, CUtlMemory<PerFragmentData_t, int> >::Element(
				int i);  // 1156
			CUtlVectorBase<PerFragmentData_t, CUtlMemory<PerFragmentData_t, int> >::AddToTailGetPtr(); // 137
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 139
			Vector::operator=(
					const Vector& vOther);  // 139
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 140
			Vector::operator=(
					const Vector& vOther);  // 140
			Vector4D::operator=(
					const Vector4D& vOther);  // 142
		}
		Count(const CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> this); // 104
		CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::end(); // 135
		CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::Base(); // 112
		CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::Base(); // 102
		CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::begin(); // 135
	}
	Count(const CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> this); // 127
	CUtlMemory<CAggregateSceneObject::NumAllocated(); // 1196
	CUtlMemory<CAggregateSceneObject::operator[](
			int i);  // 602
	CUtlVectorBase<CAggregateSceneObject::Element(
		int i);  // 1201
	CopyConstruct<CAggregateSceneObject*>(CAggregateSceneObject** pMemory,
						CAggregateSceneObject* const& src);  // 1201
	CUtlMemory<CAggregateSceneObject::Base(); // 112
	CUtlVectorBase<CAggregateSceneObject::Base(); // 368
	CUtlVectorBase<CAggregateSceneObject::ResetDbgInfo(); // 824
	CUtlVectorBase<CAggregateSceneObject::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CAggregateSceneObject::AddToTail(
			CAggregateSceneObject* const& src);  // 234
	CAggregateSceneObjectDesc::OnAggregateAdded(
			CAggregateSceneObject* pAggregate);  // 130
	CUtlMemory<PerFragmentData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<PerFragmentData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<PerFragmentData_t, CUtlMemory<PerFragmentData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PerFragmentData_t, CUtlMemory<PerFragmentData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<PerFragmentData_t, CUtlMemory<PerFragmentData_t, int> >::CUtlVector(); // 133
	Count(const CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> this); // 134
	CUtlMemory<PerFragmentData_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<PerFragmentData_t, CUtlMemory<PerFragmentData_t, int> >::EnsureCapacity(
			int num);  // 134
	CUtlMemory<PerFragmentData_t, int>::Purge(); // 903
	CUtlMemory<PerFragmentData_t, int>::Purge(); // 1799
	CUtlVectorBase<PerFragmentData_t, CUtlMemory<PerFragmentData_t, int> >::Purge(); // 560
	CUtlVectorBase<PerFragmentData_t, CUtlMemory<PerFragmentData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<PerFragmentData_t, CUtlMemory<PerFragmentData_t, int> >::~CUtlVector(); // 152
} /* size: 0, variables: 2, inline expansions: 24 (556 bytes) */

// <03DA2D99> ../scenesystem/aggregatedesc.cpp:161
// function calls: 8
void CAggregateSceneObjectDesc::CAggregateSceneObjectDesc()
{
	ISceneObjectDesc::ISceneObjectDesc(); // 15
	CBaseSceneObjectDesc::CBaseSceneObjectDesc(); // 161
	CUtlMemory<CAggregateSceneObject::ValidateGrowSize(); // 475
	CUtlMemory<CAggregateSceneObject::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAggregateSceneObject::ResetDbgInfo(); // 530
	CUtlVectorBase<CAggregateSceneObject::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAggregateSceneObject::CUtlVector(); // 161
	memset(void* __dest,
		int __ch,
		size_t __len);  // 163
} /* size: 67, inline expansions: 8 (38 bytes) */

// <03DA2D80> ../scenesystem/aggregatedesc.cpp:161
void CAggregateSceneObjectDesc::CAggregateSceneObjectDesc()
{
} /* size: 0 */

// <03DA2C1B> ../scenesystem/aggregatedesc.cpp:166
// function calls: 7
void CAggregateSceneObjectDesc::~CAggregateSceneObjectDesc()
{
	CUtlMemory<CAggregateSceneObject::IsExternallyAllocated(); // 905
	CUtlMemory<CAggregateSceneObject::Purge(); // 903
	CUtlMemory<CAggregateSceneObject::Purge(); // 1799
	CUtlVectorBase<CAggregateSceneObject::RemoveAll(); // 1798
	CUtlVectorBase<CAggregateSceneObject::Purge(); // 560
	CUtlVectorBase<CAggregateSceneObject::~CUtlVectorBase(); // 410
	CUtlVector<CAggregateSceneObject::~CUtlVector(); // 168
} /* size: 49, inline expansions: 7 (154 bytes) */

// <03DA29D3> ../scenesystem/aggregatedesc.cpp:166
// function calls: 11
void CAggregateSceneObjectDesc::~CAggregateSceneObjectDesc()
{
	CUtlMemory<CAggregateSceneObject::IsExternallyAllocated(); // 905
	CUtlMemory<CAggregateSceneObject::Purge(); // 903
	CUtlMemory<CAggregateSceneObject::Purge(); // 1799
	CUtlVectorBase<CAggregateSceneObject::RemoveAll(); // 1798
	CUtlVectorBase<CAggregateSceneObject::Purge(); // 560
	ValidateAlignment<CAggregateSceneObject*>(void); // 508
	CUtlMemory<CAggregateSceneObject::Purge(); // 510
	CUtlMemory<CAggregateSceneObject::~CUtlMemory(); // 562
	CUtlVectorBase<CAggregateSceneObject::~CUtlVectorBase(); // 410
	CUtlVector<CAggregateSceneObject::~CUtlVector(); // 168
	CAggregateSceneObjectDesc::~CAggregateSceneObjectDesc(); // 168
} /* size: 93, inline expansions: 11 (198 bytes) */

// <03DA29BA> ../scenesystem/aggregatedesc.cpp:166
void CAggregateSceneObjectDesc::~CAggregateSceneObjectDesc()
{
} /* size: 0 */

// <03DA295B> ../scenesystem/aggregatedesc.cpp:170
void CAggregateSceneObjectDesc::Create()
{
} /* size: 40 */

// <03DA2893> ../scenesystem/aggregatedesc.cpp:176
// variable: 1
// function call: 1
void CAggregateSceneObjectDesc::DeleteNonPooledObject(CSceneObject* pObject)
{
	CAggregateSceneObject* pAggregate; // 178
	CAggregateSceneObjectDesc::OnAggregateRemoved(
				CAggregateSceneObject* pAggregate);  // 180
} /* size: 50, variables: 1, inline expansions: 1 (12 bytes) */

// <03DA2865> ../scenesystem/aggregatedesc.cpp:185
void CAggregateSceneObjectDesc::GetTypeName()
{
} /* size: 12 */

// <03DA257C> ../scenesystem/aggregatedesc.cpp:190
// variables: 8
// function calls: 5
void CAggregateSceneObjectDesc::OnAddedToSceneSystem()
{
	int nPartitions; // 212
	{
		BufferDesc_t bufferDesc; // 193
		CRenderContextPtr pCtx; // 200
		LockDesc_t bufferLock; // 201
		const uint32  nBufferSize; // 202
		uint32* pID; // 204
		{
			int i; // 205
		}
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 200
		CRenderContextPtr::operator->(); // 203
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 210
	}
	{
		int i; // 213
	}
	CSceneSystem::GetNumSpatialPartitions(); // 212
} /* size: 359, variables: 1, inline expansions: 1 (14 bytes) */

// <03DA246D> ../scenesystem/aggregatedesc.cpp:219
// variables: 2
// function calls: 2
void CAggregateSceneObjectDesc::OnRemovedFromSceneSystem()
{
	int nPartitions; // 224
	{
		int i; // 225
	}
	CSceneSystem::GetNumSpatialPartitions(); // 224
	memset(void* __dest,
		int __ch,
		size_t __len);  // 229
} /* size: 142, variables: 1, inline expansions: 2 (28 bytes) */

// <03DB0F3D> ../scenesystem/aggregatedesc.cpp:232
// function calls: 9
void CAggregateSceneObjectDesc::OnAggregateAdded(CAggregateSceneObject* pAggregate)
{
	CUtlMemory<CAggregateSceneObject::NumAllocated(); // 1196
	CUtlMemory<CAggregateSceneObject::operator[](
			int i);  // 602
	CUtlVectorBase<CAggregateSceneObject::Element(
		int i);  // 1201
	CopyConstruct<CAggregateSceneObject*>(CAggregateSceneObject** pMemory,
						CAggregateSceneObject* const& src);  // 1201
	CUtlMemory<CAggregateSceneObject::Base(); // 112
	CUtlVectorBase<CAggregateSceneObject::Base(); // 368
	CUtlVectorBase<CAggregateSceneObject::ResetDbgInfo(); // 824
	CUtlVectorBase<CAggregateSceneObject::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CAggregateSceneObject::AddToTail(
			CAggregateSceneObject* const& src);  // 234
} /* size: 0, inline expansions: 9 (0 bytes) */

// <03DA2448> ../scenesystem/aggregatedesc.cpp:232
void CAggregateSceneObjectDesc::OnAggregateAdded(CAggregateSceneObject* pAggregate)
{
} /* size: 0 */

// <03DB0EE6> ../scenesystem/aggregatedesc.cpp:237
void CAggregateSceneObjectDesc::OnAggregateRemoved(CAggregateSceneObject* pAggregate)
{
} /* size: 0 */

// <03DA23F5> ../scenesystem/aggregatedesc.cpp:245
void CAggregateSceneObjectDesc::OnBeginSubmitDisplayLists()
{
} /* size: 5 */

// <03DA2358> ../scenesystem/aggregatedesc.cpp:250
// variables: 2
// function call: 1
void CAggregateSceneObjectDesc::OnFinishingSubmissionOfDisplayLists()
{
	{
		int i; // 253
		int nPartitions; // 253
		CSceneSystem::GetNumSpatialPartitions(); // 253
	}
} /* size: 65 */

// <03DA20DE> ../scenesystem/aggregatedesc.cpp:259
// variables: 6
// function calls: 6
void CAggregateSceneObjectDesc::GetAggregateData(const CAggregateSceneObject* pAggregate, const GeneratePrimitivesArgs_t& gpArgs)
{
	int nJobIndex; // 263
	const char   __FUNCTION__; // 24866
	const uint  nFragments; // 266
	uint nBytesNeeded; // 268
	AggregateDrawData_t* pDrawData; // 269
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 264
	}
	CSceneSystem::GetNumSpatialPartitions(); // 264
	Count(const CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> this); // 266
	CUtlScratchMemoryPool::Alloc(
		int nSizeInBytes);  // 269
	memset(void* __dest,
		int __ch,
		size_t __len);  // 276
	CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 113
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 273
} /* size: 0, variables: 5, inline expansions: 6 (59 bytes) */

// <03D9F20B> ../scenesystem/aggregatedesc.cpp:281
// variables: 84
// function calls: 195
void CAggregateSceneObjectDesc::GeneratePrimitives(CSceneObject* pSceneObjectBase, const GeneratePrimitivesArgs_t& gpArgs, GeneratePrimitivesFlags_t nGPFlags, CMeshPrimitiveOutputBuffer& outBuf)
{
	CAggregateSceneObject* pSceneObject; // 287
	const char   __FUNCTION__; // 24920
	Vector4D vObjectTintRGBA; // 340
	const ISceneView* pView; // 347
	const CSceneLayer* pLayer; // 348
	const VectorAligned  viewPosition; // 349
	const VectorAligned  rootViewPosition; // 350
	const AggregateDrawData_t* pDrawData; // 352
	bool bAnyVisible; // 355
	float flMaxTextureSize; // 356
	const float  flViewAreaScale; // 357
	CMeshDrawPrimitive_t& out; // 443
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 301
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 303
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 305
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 307
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 309
	}
	{
		int i; // 358
		int nFragments; // 358
		{
			const MeshFragment_t& fragment; // 360
			const float  flCullDistanceSqr; // 381
			const float  flCullDistance; // 382
			const Vector  vOrigin; // 384
			const float  flRadius; // 385
			const float  flRootViewScreenSize; // 386
			float flWorldAreaToScreenArea; // 433
			{
				const float  flViewScreenSize; // 397
			}
			CUtlMemory<CAggregateSceneObject::MeshFragment_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> >::operator[](
					int i);  // 360
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 669
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 670
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 671
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 673
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 674
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 675
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 676
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 677
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 678
			{
				int i; // 682
				{
					fltx4 xTotalBack; // 684
					fltx4 yTotalBack; // 685
					fltx4 zTotalBack; // 686
					fltx4 dotBack; // 687
					fltx4 isOut; // 693
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
							const fltx4& b);  // 684
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
							const fltx4& b);  // 685
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
							const fltx4& b);  // 686
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 685
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 686
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 684
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 687
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 687
					{
						fltx4 retVal; // 2067
						_mm_cmplt_ps(__m128 __A,
								__m128 __B);  // 2068
					}
					CmpLtSIMD<>(const fltx4& a,
							const fltx4& b);  // 693
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 1842
					IsAnyNegative<>(const fltx4& a); // 694
				}
			}
			CFrustum::CheckBoxInline(
					const VectorAligned& mins,
					const VectorAligned& maxs);  // 370
			ISceneView::GetCullFrustum(); // 370
			{
				CPVSData* pNode; // 108
				{
					int i; // 110
				}
			}
			CPVSData::IsVisible(
					const uint32* pVisBits);  // 375
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 381
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 381
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 381
			VectorAligned::operator fltx4(); // 250
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 250
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 250
			VectorAligned::operator+(
					const VectorAligned& v);  // 384
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 268
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 268
			VectorAligned::operator*(
					vec_t s);  // 384
			ISceneView::GetCullFrustum(); // 386
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 385
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 384
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
					const fltx4& b);  // 298
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 299
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 300
			VectorAligned::Length(); // 385
			ISceneLayer::GetBoundingVolumeSizeCullThreshold(); // 416
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 410
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 410
		}
		Count(const CUtlVectorBase<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> this); // 358
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 289
	ISceneLayer::GetObjectFlagsRequiredMask(); // 1240
	GeneratePrimitivesArgs_t::WantAlphaBlended(); // 295
	CSceneObject::IsPartiallyAlphaBlended(); // 301
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::Base(); // 112
	Base(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 2389
	{
		int nCount; // 2392
		Count(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemo this); // 2392
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 376
		{
			int nIndex; // 381
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 59158
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 59168
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 59178
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 381
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
					uint32 k,
					IntVector4D nDefault);  // 393
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
					CUtlStringToken nTok,
					IntVector4D nDefault);  // 465
		CRenderAttributes::GetIntValue(
				CUtlStringToken nTokenID,
				int nDefaultValue);  // 256
		ISceneLayer::GetIntValue(
				CUtlStringToken nTokenID,
				int nDefaultValue);  // 2404
		CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 2405
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 2409
	CSceneObject::GetMaterialOverride(
				const ISceneLayer* pLayer);  // 303
	CSceneObject::GetExtraData(); // 309
	CSceneObject::GetAlphaFade(); // 445
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 445
	CSceneObject::GetTintRGBA(); // 340
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 349
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 350
	GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeFallback(); // 356
	CUtlMemory<CMeshDrawPrimitive_t, int>::NumAllocated(); // 1143
	CUtlMemory<CMeshDrawPrimitive_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::Element(
		int i);  // 1148
	LightProbeVolumeBinding_t::LightProbeVolumeBinding_t(); // 1113
	Vector4D::Vector4D(); // 1113
	CMeshDrawPrimitive_t::CMeshDrawPrimitive_t(); // 1479
	Construct<CMeshDrawPrimitive_t>(CMeshDrawPrimitive_t* pMemory); // 1148
	CUtlMemory<CMeshDrawPrimitive_t, int>::Base(); // 112
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::Base(); // 368
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::AddToTail(); // 1380
	CUtlMemory<CMeshDrawPrimitive_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::operator[](
			int i);  // 1380
	CMeshPrimitiveOutputBuffer::Next(); // 1372
	CMeshPrimitiveOutputBuffer::Next(); // 443
	LightProbeVolumeBinding_t::Invalidate(); // 2492
	Vector4D::operator=(
			const Vector4D& vOther);  // 2494
	CMeshDrawPrimitive_t::SetMaterial(
			const IMaterial2* pMaterial);  // 2490
	CMeshDrawPrimitive_t::InitForObject(
			const CSceneObject* pObj,
			const Vector4D& vRGBAModulation,
			const ISceneLayer* pLayer);  // 444
	CSceneSystem::AppUsesBakedLighting(); // 448
	CSceneObject::GetBakedLightingInfo(); // 448
	CSceneSystem::GetObjectSettings(
				const CSceneObject* pObj);  // 451
	CSceneObject::GetTransform(); // 450
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 452
	CMeshDrawPrimitive_t::SetMaterial(
			const IMaterial2* pMaterial);  // 452
} /* size: 0, variables: 12, inline expansions: 44 (1691 bytes) */

// <03D9F11F> ../scenesystem/aggregatedesc.cpp:465
void CAggregateSceneObjectDesc::DrawArray(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& perFrameStats)
{
} /* size: 58 */

// <03D9A91A> ../scenesystem/aggregatedesc.cpp:475
// variables: 47
// function calls: 127
void CAggregateSceneObjectDesc::DrawArrayExt(IRenderContext* pRenderContext, CMeshDrawPrimitive_t* pDrawPrim, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& stats, const IMaterial2* pOverrideMaterial)
{
	const char   __FUNCTION__; // 24768
	const CAggregateSceneObject* pAggregate; // 488
	const AggregateDrawData_t* pDrawData; // 489
	const CMaterialDrawDescriptor* pDrawDesc; // 490
	bool bOverrideDepthMaterial; // 492
	const IMaterial2* pMaterial; // 493
	IMaterialMode* pMaterialMode; // 515
	SceneSystemTransformEntry_t* pTransformEntry; // 522
	int nTransformSlot; // 523
	const bool  bDepthLayer; // 526
	CRenderAttributes* pAttributes; // 529
	const CScopeGuardLambdaImpl<CAggregateSceneObjectDesc::DrawArrayExt(IRenderContext*, CMeshDrawPrimitive_t*, int, const ISceneVi& generated_id_530; // 530
	int nCurrentVB;                         // 540
	RenderInputLayout_t hInputLayout;       // 577
	MaterialRenderablePass_t passInfo;    // 588
	int nPasses;                            // 589
	const CSceneObjectData* pSceneObjectData;           // 617
	const CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& drawCalls;                                                                  // 618
	int nNumIndices;                        // 620
	int nNumDrawCalls;                      // 621
	int nNumTris;                           // 640
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants;                                   // 484
	}
	{
		const IMaterial2* pLayerOverride;           // 503
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle();  // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 317
		ISceneLayer::GetOverrideMaterial(); // 503
		CWeakHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 503
	}
	{
		int nVertexBuffers; // 542
		IndexBufferHandle_t hIB; // 551
		int nIBBindOffset; // 552
		{
			VertexBufferHandle_t hVB; // 545
			int nVBBindOffset; // 546
		}
		CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 542
	}
	{
		PerInstanceParams_t params; // 558
		matrix3x4_t::matrix3x4_t(); // 303
		matrix3x4a_t::matrix3x4a_t(); // 33
		Vector4D::Vector4D(); // 33
		PerInstanceParams_t::PerInstanceParams_t(); // 558
		matrix3x4_t::Base(); // 291
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 42
		Vector4D::operator=(
				const Vector4D& vOther);  // 43
		PerInstanceParams_t::InitFromInstance(
				const CMeshDrawPrimitive_t* pPrim);  // 559
	}
	{
		InputLayoutVariation_t inputLayoutVariation; // 584
	}
	{
		int i; // 622
		{
			const CMaterialDrawDescriptor& draw; // 624
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 624
		}
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 622
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 499
	ConVar::GetInt(); // 1260
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1262; // 1262
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1262
		Mix32HashFunctor::operator(
				uint32 n);  // 139
		PointerHashFunctor::operator(
				const void* s);  // 240
		CUtlMemory<CUtlHashtableEntry<const IMaterial2::Base(); // 650
		CUtlMemory<CUtlHashtableEntry<const IMaterial2::Count(); // 651
		IdealIndex(uint32_if32BitStorage h,
				uint32 m);  // 653
		CUtlHashtableEntry<const IMaterial2::IdealIndex(
				uint32 slotmask);  // 656
		CUtlHashtableEntry<const IMaterial2::IdealIndex(
				uint32 slotmask);  // 667
		CUtlHashtable<const IMaterial2::DoLookup<const IMaterial2*>(
						const IMaterial2* x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 697
		CUtlMemory<CUtlHashtableEntry<const IMaterial2::operator[](
				int i);  // 706
		CUtlKeyValuePair<const IMaterial2::CUtlKeyValuePair<const IMaterial2*>(
							const IMaterial2* const& k);  // 1514
		Construct<CUtlKeyValuePair<const IMaterial2*, empty_t>, const IMaterial2*&>(CUtlKeyValuePair<const IMaterial2*, empty_t>* pMemory); // 706
		CUtlHashtable<const IMaterial2::DoInsert<const IMaterial2*>(
						const IMaterial2* k,
						unsigned int h,
						bool* pDidInsert);  // 695
		CUtlHashtable<const IMaterial2::DoInsert<const IMaterial2*>(
						const IMaterial2* k,
						unsigned int h,
						bool* pDidInsert);  // 240
		CUtlHashtable<const IMaterial2::Insert(
			KeyArg_t k);  // 1263
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1264
	}
	CSceneSystem::RegisterMaterialSeen(
				const IMaterial2* pMaterial);  // 1258
	CSceneSystem::RegisterMaterialSeen(
				const IMaterial2* pMaterial);  // 519
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CRenderAttributes>::GetObject(); // 529
	CScopeGuardLambdaImpl<CAggregateSceneObjectDesc::DrawArrayExt(IRenderContext::CScopeGuardLambdaImpl(
				class& lambda);  // 39
	MakeScopeGuardLambda<CAggregateSceneObjectDesc::DrawArrayExt(IRenderContext*, CMeshDrawPrimitive_t*, int, const ISceneView*, ISceneLayer*, SceneSystemPerFrameStats_t&, const IMaterial2*)::<lambda()> >(class& lambda); // 530
	operator&(RenderMeshDrawPrimitiveFlags_t a,
			RenderMeshDrawPrimitiveFlags_t b);  // 536
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 536
	ConstantBufferAttr_t::ConstantBufferAttr_t(
				ConstantBufferHandle_t hBuf,
				uint32 nV);  // 732
	ConstantBufferAttr_t::ConstantBufferAttr_t(
				const ConstantBufferAttr_t& other);  // 571
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
			i32x4 i4KMatch);  // 311
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
				int nIdx);  // 314
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 45342
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 45352
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 45362
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 322
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 317
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			ConstantBufferAttr_t** pValueOut);  // 309
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			ConstantBufferAttr_t** pValueOut);  // 356
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			uint32 nKey,
			ConstantBufferAttr_t** pValueOut);  // 547
	ConstantBufferAttr_t::operator=(
			const ConstantBufferAttr_t& other);  // 566
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
			i32x4 i4KMatch);  // 330
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
				int nIdx);  // 334
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 58461
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 58471
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 58481
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 343
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 337
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				ConstantBufferAttr_t** pValueOut);  // 328
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				ConstantBufferAttr_t** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this,
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
		uint32 nKey,
		ConstantBufferAttr_t nValue);  // 571
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
		const CUtlStringToken& nTok,
		ConstantBufferAttr_t nValue);  // 732
	CRenderAttributes::SetConstantBufferValue(
				CUtlStringToken nTokenID,
				ConstantBufferHandle_t cb,
				uint32 nView);  // 537
	ISceneLayer::GetFillModeStateOverride(); // 595
	ISceneLayer::GetDepthBiasStateOverride(); // 595
	ISceneLayer::GetStencilStateOverride(); // 595
	ConVar::GetInt(); // 655
	IMaterial2::GetBoolAttributeOrDefault(
					CUtlStringToken name,
					bool bDefault);  // 657
	CScopeGuardLambdaImpl<CAggregateSceneObjectDesc::DrawArrayExt(IRenderContext::~CScopeGuardLambdaImpl(); // 668
	IMaterial2::GetBoolAttributeOrDefault(
					CUtlStringToken name,
					bool bDefault);  // 610
	IMaterial2::GetBoolAttributeOrDefault(
					CUtlStringToken name,
					bool bDefault);  // 611
} /* size: 0, variables: 21, inline expansions: 40 (4158 bytes) */

// <03D9842C> ../scenesystem/aggregatedesc.cpp:670
// variables: 59
// function calls: 152
void SetBakedLightingAttributes(const ISceneView* pView, const CAggregateSceneObject* pAggregate, CRenderAttributes& attributes)
{
	const CSceneSystemBakedLightingInfo* pBakedLightingInfo; // 675
	const RenderMeshDrawPrimitiveFlags_t  drawFlags; // 689
	int nBakedLightingFromLightmap; // 691
	{
		int nTextureCount; // 678
		const HRenderTexture* pTextures; // 679
		const CUtlStringToken* pTextureBindings; // 680
		{
			int t; // 681
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 330
			{
				OverflowChunk_t& p; // 337
				CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 58737
				CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 58747
				CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 58757
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
								OverflowChunk_t* pNode);  // 1151
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 337
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
								OverflowChunk_t* pNode);  // 1156
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 337
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 339
				operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 337
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
							int nIdx);  // 342
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 343
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						TextureAttrForStorage_t** pValueOut);  // 328
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
						int nIdx);  // 333
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 334
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						TextureAttrForStorage_t** pValueOut);  // 556
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 311
			{
				OverflowChunk_t& p; // 317
				CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 45507
				CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 45517
				CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 45527
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1151
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
								OverflowChunk_t* pNode);  // 1151
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 317
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
								OverflowChunk_t* pNode);  // 1156
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 317
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 319
				operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 317
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 322
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					TextureAttrForStorage_t** pValueOut);  // 309
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 314
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					TextureAttrForStorage_t** pValueOut);  // 356
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 356
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					uint32 nKey,
					TextureAttrForStorage_t** pValueOut);  // 547
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
			TextureAttrForStorage_t::operator=(
					const TextureAttr_t& other);  // 551
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
			TextureAttrForStorage_t::operator=(
					const TextureAttr_t& other);  // 566
			{
				OverflowChunk_t* pNew; // 559
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 76
				TextureAttrForStorage_t::TextureAttrForStorage_t(); // 117
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 45
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 46
				SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 254
				OverflowChunk_t::OverflowChunk_t(); // 559
				AddToHead<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
				AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this,
						OverflowChunk_t* node);  // 560
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
							int nIdx);  // 562
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
				uint32 nKey,
				TextureAttr_t nValue);  // 571
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
			TextureAttr_t::TextureAttr_t(
					const TextureAttr_t  &);  // 571
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
				const CUtlStringToken& nTok,
				TextureAttr_t nValue);  // 619
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 619
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
			TextureAttr_t::TextureAttr_t(
					HRenderTexture hT,
					int32 nMip);  // 619
			CRenderAttributes::SetTextureValue(
					CUtlStringToken nTokenID,
					HRenderTexture txtr,
					int32 nSingleMipLevelToBind);  // 683
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 683
		}
		Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeC this); // 678
		ConstantBufferAttr_t::ConstantBufferAttr_t(
					ConstantBufferHandle_t hBuf,
					uint32 nV);  // 732
		ConstantBufferAttr_t::ConstantBufferAttr_t(
					const ConstantBufferAttr_t& other);  // 571
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 356
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
				i32x4 i4KMatch);  // 311
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 314
		{
			OverflowChunk_t& p; // 317
			CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 45342
			CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 45352
			CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 45362
			Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1151
			CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
							OverflowChunk_t* pNode);  // 1151
			begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
			CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
							OverflowChunk_t* pNode);  // 1156
			end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
					i32x4 i4KMatch);  // 319
			CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
						int nIdx);  // 322
			operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 317
		}
		CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				ConstantBufferAttr_t** pValueOut);  // 309
		CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				ConstantBufferAttr_t** pValueOut);  // 356
		CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
				uint32 nKey,
				ConstantBufferAttr_t** pValueOut);  // 547
		ConstantBufferAttr_t::operator=(
				const ConstantBufferAttr_t& other);  // 566
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
				i32x4 i4KMatch);  // 330
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
					int nIdx);  // 333
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 334
		{
			OverflowChunk_t& p; // 337
			CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 58461
			CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 58471
			CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 58481
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
					i32x4 i4KMatch);  // 339
			CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
						int nIdx);  // 342
			CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
						int nIdx);  // 343
			operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 337
		}
		CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					ConstantBufferAttr_t** pValueOut);  // 328
		CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					ConstantBufferAttr_t** pValueOut);  // 556
		{
			OverflowChunk_t* pNew; // 559
			ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 39
			SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 254
			OverflowChunk_t::OverflowChunk_t(); // 559
			AddToHead<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
			AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this,
					OverflowChunk_t* node);  // 560
			CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
						int nIdx);  // 562
		}
		CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
			uint32 nKey,
			ConstantBufferAttr_t nValue);  // 571
		CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
			const CUtlStringToken& nTok,
			ConstantBufferAttr_t nValue);  // 732
		CRenderAttributes::SetConstantBufferValue(
					CUtlStringToken nTokenID,
					ConstantBufferHandle_t cb,
					uint32 nView);  // 685
	}
	CSceneObject::GetBakedLightingInfo(); // 675
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
			int i);  // 689
	operator&(RenderMeshDrawPrimitiveFlags_t a,
			RenderMeshDrawPrimitiveFlags_t b);  // 695
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 571
	CRenderAttributes::SetBoolValue(
			CUtlStringToken nTokenID,
			bool bValue);  // 701
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 702
} /* size: 1379, variables: 3, inline expansions: 8 (195 bytes) */

// <03D98080> ../scenesystem/aggregatedesc.cpp:705
// variables: 5
// function calls: 9
void CAggregateSceneObjectDesc::DrawDebug(IRenderContext* pCtx, const CMeshDrawPrimitive_t* pPrimitive, const ISceneView* pView, ISceneLayer* pLayer, int nDebugLevel)
{
	ISceneViewDebugOverlays* pOverlay; // 707
	const CAggregateSceneObject* pObject; // 708
	Vector color; // 710
	Vector vMins; // 711
	Vector vMaxs; // 711
	CSceneObject::GetBounds(
			Vector& vecWorldMins,
			Vector& vecWorldMaxes);  // 712
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 710
	Vector::Vector(); // 711
	Vector::Vector(); // 711
	clamp<double, int>(const double& val,
				const int& minVal,
				const int& maxVal);  // 124
	clamp<double, int>(const double& val,
				const int& minVal,
				const int& maxVal);  // 125
	clamp<double, int>(const double& val,
				const int& minVal,
				const int& maxVal);  // 126
	VertexColor_t::VertexColor_t(
			const Vector& vecColor);  // 713
	ISceneViewDebugOverlays::Box(
		const Vector& vWorldMins,
		const Vector& vWorldMaxs,
		const VertexColor_t& color,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 713
} /* size: 165, variables: 5, inline expansions: 9 (79 bytes) */

