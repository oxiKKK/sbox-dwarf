
//
// public/vphysx/vphysx_collisionmesh_resource.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 54
//	structs: 32
//

// <064C468B> ../public/vphysx/vphysx_collisionmesh_resource.h:34
// variables: 4
// function calls: 119
void VPhysics2ShapeDef_t::~VPhysics2ShapeDef_t()
{
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 34
	{
		int i; // 1721
		CUtlMemory<RnMeshDesc_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 632
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 632
		CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::RemoveAll(); // 1798
		CUtlMemory<RnTriangle_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RnTriangle_t, int>::Purge(); // 903
		CUtlMemory<RnTriangle_t, int>::Purge(); // 1799
		CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Purge(); // 560
		ValidateAlignment<RnTriangle_t>(void); // 508
		CUtlMemory<RnTriangle_t, int>::Purge(); // 510
		CUtlMemory<RnTriangle_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::~CUtlVector(); // 632
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
		CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 1799
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
		ValidateAlignment<Vector>(void); // 508
		CUtlMemory<Vector, int>::Purge(); // 510
		CUtlMemory<Vector, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 632
		CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::RemoveAll(); // 1798
		CUtlMemory<RnNode_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RnNode_t, int>::Purge(); // 903
		CUtlMemory<RnNode_t, int>::Purge(); // 1799
		CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Purge(); // 560
		ValidateAlignment<RnNode_t>(void); // 508
		CUtlMemory<RnNode_t, int>::Purge(); // 510
		CUtlMemory<RnNode_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >::~CUtlVector(); // 632
		RnMesh_t::~RnMesh_t(); // 732
		CUtlString::~CUtlString(); // 698
		RnShapeDesc_t::~RnShapeDesc_t(); // 732
		RnMeshDesc_t::~RnMeshDesc_t(); // 1526
		Destruct<RnMeshDesc_t>(RnMeshDesc_t* pMemory); // 1723
	}
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnMeshDesc_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnMeshDesc_t, int>::Purge(); // 903
	CUtlMemory<RnMeshDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Purge(); // 560
	ValidateAlignment<RnMeshDesc_t>(void); // 508
	CUtlMemory<RnMeshDesc_t, int>::Purge(); // 510
	CUtlMemory<RnMeshDesc_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::~CUtlVector(); // 34
	{
		int i; // 1721
		CUtlMemory<RnHullDesc_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Element(
			int i);  // 1723
		Destruct<RnHullDesc_t>(RnHullDesc_t* pMemory); // 1723
	}
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnHullDesc_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnHullDesc_t, int>::Purge(); // 903
	CUtlMemory<RnHullDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Purge(); // 560
	ValidateAlignment<RnHullDesc_t>(void); // 508
	CUtlMemory<RnHullDesc_t, int>::Purge(); // 510
	CUtlMemory<RnHullDesc_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::~CUtlVector(); // 34
	{
		int i; // 1721
		CUtlMemory<RnCapsuleDesc_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 698
		RnShapeDesc_t::~RnShapeDesc_t(); // 716
		RnCapsuleDesc_t::~RnCapsuleDesc_t(); // 1526
		Destruct<RnCapsuleDesc_t>(RnCapsuleDesc_t* pMemory); // 1723
	}
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnCapsuleDesc_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnCapsuleDesc_t, int>::Purge(); // 903
	CUtlMemory<RnCapsuleDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Purge(); // 560
	ValidateAlignment<RnCapsuleDesc_t>(void); // 508
	CUtlMemory<RnCapsuleDesc_t, int>::Purge(); // 510
	CUtlMemory<RnCapsuleDesc_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::~CUtlVector(); // 34
	{
		int i; // 1721
		CUtlMemory<RnSphereDesc_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 698
		RnShapeDesc_t::~RnShapeDesc_t(); // 708
		RnSphereDesc_t::~RnSphereDesc_t(); // 1526
		Destruct<RnSphereDesc_t>(RnSphereDesc_t* pMemory); // 1723
	}
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnSphereDesc_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnSphereDesc_t, int>::Purge(); // 903
	CUtlMemory<RnSphereDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Purge(); // 560
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::~CUtlVector(); // 34
} /* size: 0, inline expansions: 47 (0 bytes) */

// <064C466F> ../public/vphysx/vphysx_collisionmesh_resource.h:34
inline void VPhysics2ShapeDef_t::~VPhysics2ShapeDef_t()
{
} /* size: 0 */

// <064C2B7A> ../public/vphysx/vphysx_collisionmesh_resource.h:34
void VPhysics2ShapeDef_t::VPhysics2ShapeDef_t()
{
} /* size: 0 */

// <064C2B5E> ../public/vphysx/vphysx_collisionmesh_resource.h:34
inline void VPhysics2ShapeDef_t::VPhysics2ShapeDef_t()
{
} /* size: 0 */

// <06450671> ../public/vphysx/vphysx_collisionmesh_resource.h:34
void VPhysics2ShapeDef_t::~VPhysics2ShapeDef_t()
{
} /* size: 0 */

// <050DB694> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:34
// variables: 5
// function calls: 312
void VPhysics2ShapeDef_t::operator=(const VPhysics2ShapeDef_t &)
{
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Count(); // 573
	CUtlMemory<RnSphereDesc_t, int>::Base(); // 112
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Base(); // 102
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::begin(); // 574
	CUtlMemory<RnSphereDesc_t, int>::Base(); // 113
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Base(); // 105
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Count(); // 105
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 698
	RnShapeDesc_t::operator=(
			const RnShapeDesc_t  &);  // 708
	Vector::operator=(
			const Vector& vOther);  // 72
	RnSphere_t::operator=(
			const RnSphere_t  &);  // 708
	RnSphereDesc_t::operator=(
			const RnSphereDesc_t  &);  // 209
	UtlTraitsCopyRange<RnSphereDesc_t>(const RnSphereDesc_t* pFrom,
						const RnSphereDesc_t* pFromEnd,
						RnSphereDesc_t* pTo);  // 200
	UtlTraitsCopyRange<RnSphereDesc_t>(const RnSphereDesc_t* pFrom,
						const RnSphereDesc_t* pFromEnd,
						RnSphereDesc_t* pTo);  // 574
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::operator=(
			const CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >& other);  // 565
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::operator=(
			const CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >& other);  // 452
	CUtlVector<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::operator=(
			const CUtlVector<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >& src);  // 34
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Count(); // 573
	CUtlMemory<RnCapsuleDesc_t, int>::Base(); // 112
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Base(); // 102
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::begin(); // 574
	CUtlMemory<RnCapsuleDesc_t, int>::Base(); // 113
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Base(); // 105
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Count(); // 105
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 698
	RnShapeDesc_t::operator=(
			const RnShapeDesc_t  &);  // 716
	Vector::operator=(
			const Vector& vOther);  // 123
	RnCapsule_t::operator=(
			const RnCapsule_t  &);  // 716
	RnCapsuleDesc_t::operator=(
			const RnCapsuleDesc_t  &);  // 209
	UtlTraitsCopyRange<RnCapsuleDesc_t>(const RnCapsuleDesc_t* pFrom,
						const RnCapsuleDesc_t* pFromEnd,
						RnCapsuleDesc_t* pTo);  // 200
	UtlTraitsCopyRange<RnCapsuleDesc_t>(const RnCapsuleDesc_t* pFrom,
						const RnCapsuleDesc_t* pFromEnd,
						RnCapsuleDesc_t* pTo);  // 574
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::operator=(
			const CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >& other);  // 565
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::operator=(
			const CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >& other);  // 452
	CUtlVector<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::operator=(
			const CUtlVector<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >& src);  // 34
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Count(); // 573
	CUtlMemory<RnHullDesc_t, int>::Base(); // 112
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Base(); // 102
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::begin(); // 574
	CUtlMemory<RnHullDesc_t, int>::Base(); // 113
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Base(); // 105
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Count(); // 105
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 698
	RnShapeDesc_t::operator=(
			const RnShapeDesc_t  &);  // 724
	Vector::operator=(
			const Vector& vOther);  // 298
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<Vector, int>::NumAllocated(); // 782
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount(
		int count);  // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 298
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Count(); // 573
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<RnPlane_t, int>::NumAllocated(); // 782
	CUtlMemory<RnPlane_t, int>::IsGrowable(); // 823
	CUtlMemory<RnPlane_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RnPlane_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RnPlane_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::SetCount(
		int count);  // 573
	CUtlMemory<RnPlane_t, int>::Base(); // 112
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Base(); // 102
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::begin(); // 574
	CUtlMemory<RnPlane_t, int>::Base(); // 113
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Base(); // 105
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::Count(); // 105
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	RnPlane_t::operator=(
			const RnPlane_t  &);  // 209
	UtlTraitsCopyRange<RnPlane_t>(const RnPlane_t* pFrom,
					const RnPlane_t* pFromEnd,
					RnPlane_t* pTo);  // 200
	UtlTraitsCopyRange<RnPlane_t>(const RnPlane_t* pFrom,
					const RnPlane_t* pFromEnd,
					RnPlane_t* pTo);  // 574
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator=(
			const CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >& other);  // 565
	CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator=(
			const CUtlVectorBase<RnPlane_t, CUtlMemory<RnPlane_t, int> >& other);  // 452
	CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >::operator=(
			const CUtlVector<RnPlane_t, CUtlMemory<RnPlane_t, int> >& src);  // 298
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 573
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<RnHalfEdge_t, int>::NumAllocated(); // 782
	CUtlMemory<RnHalfEdge_t, int>::IsGrowable(); // 823
	CUtlMemory<RnHalfEdge_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RnHalfEdge_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RnHalfEdge_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::SetCount(
		int count);  // 573
	CUtlMemory<RnHalfEdge_t, int>::Base(); // 112
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Base(); // 102
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::begin(); // 574
	CUtlMemory<RnHalfEdge_t, int>::Base(); // 113
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Base(); // 105
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::Count(); // 105
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<short unsigned int>(const short unsigned int* pFrom,
						const short unsigned int* pFromEnd,
						short unsigned int* pTo);  // 173
	UtlTraitsCopyRange<RnHalfEdge_t>(const RnHalfEdge_t* pFrom,
					const RnHalfEdge_t* pFromEnd,
					RnHalfEdge_t* pTo);  // 574
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator=(
			const CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& other);  // 565
	CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator=(
			const CUtlVectorBase<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& other);  // 452
	CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >::operator=(
			const CUtlVector<RnHalfEdge_t, CUtlMemory<RnHalfEdge_t, int> >& src);  // 298
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 573
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<RnFace_t, int>::NumAllocated(); // 782
	CUtlMemory<RnFace_t, int>::IsGrowable(); // 823
	CUtlMemory<RnFace_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RnFace_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RnFace_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::SetCount(
		int count);  // 573
	CUtlMemory<RnFace_t, int>::Base(); // 112
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Base(); // 102
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::begin(); // 574
	CUtlMemory<RnFace_t, int>::Base(); // 113
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Base(); // 105
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::Count(); // 105
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<short unsigned int>(const short unsigned int* pFrom,
						const short unsigned int* pFromEnd,
						short unsigned int* pTo);  // 173
	UtlTraitsCopyRange<RnFace_t>(const RnFace_t* pFrom,
					const RnFace_t* pFromEnd,
					RnFace_t* pTo);  // 574
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::operator=(
			const CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >& other);  // 565
	CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >::operator=(
			const CUtlVectorBase<RnFace_t, CUtlMemory<RnFace_t, int> >& other);  // 452
	CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >::operator=(
			const CUtlVector<RnFace_t, CUtlMemory<RnFace_t, int> >& src);  // 298
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 298
	Vector::operator=(
			const Vector& vOther);  // 298
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			const AABB_t  &);  // 298
	RnHull_t::operator=(
			const RnHull_t  &);  // 724
	RnHullDesc_t::operator=(
			const RnHullDesc_t  &);  // 209
	UtlTraitsCopyRange<RnHullDesc_t>(const RnHullDesc_t* pFrom,
					const RnHullDesc_t* pFromEnd,
					RnHullDesc_t* pTo);  // 200
	UtlTraitsCopyRange<RnHullDesc_t>(const RnHullDesc_t* pFrom,
					const RnHullDesc_t* pFromEnd,
					RnHullDesc_t* pTo);  // 574
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::operator=(
			const CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >& other);  // 565
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::operator=(
			const CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >& other);  // 452
	CUtlVector<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::operator=(
			const CUtlVector<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >& src);  // 34
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Count(); // 573
	CUtlMemory<RnMeshDesc_t, int>::Base(); // 112
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Base(); // 102
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::begin(); // 574
	CUtlMemory<RnMeshDesc_t, int>::Base(); // 113
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Base(); // 105
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Count(); // 105
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 698
	RnShapeDesc_t::operator=(
			const RnShapeDesc_t  &);  // 732
	Vector::operator=(
			const Vector& vOther);  // 632
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 573
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<RnNode_t, int>::NumAllocated(); // 782
	CUtlMemory<RnNode_t, int>::IsGrowable(); // 823
	CUtlMemory<RnNode_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RnNode_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RnNode_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<RnNode_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Element(
			int i);  // 1453
		RnNode_t::RnNode_t(); // 1479
		Construct<RnNode_t>(RnNode_t* pMemory); // 1453
	}
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::SetCount(
		int count);  // 573
	CUtlMemory<RnNode_t, int>::Base(); // 112
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 102
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::begin(); // 574
	CUtlMemory<RnNode_t, int>::Base(); // 113
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 105
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 105
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 536
	Vector::operator=(
			const Vector& vOther);  // 536
	RnNode_t::operator=(
			const RnNode_t  &);  // 209
	UtlTraitsCopyRange<RnNode_t>(const RnNode_t* pFrom,
					const RnNode_t* pFromEnd,
					RnNode_t* pTo);  // 200
	UtlTraitsCopyRange<RnNode_t>(const RnNode_t* pFrom,
					const RnNode_t* pFromEnd,
					RnNode_t* pTo);  // 574
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >& other);  // 565
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >& other);  // 452
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& src);  // 632
	Vector::operator=(
			const Vector& vOther);  // 632
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<Vector, int>::NumAllocated(); // 782
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount(
		int count);  // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 632
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 573
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<RnTriangle_t, int>::NumAllocated(); // 782
	CUtlMemory<RnTriangle_t, int>::IsGrowable(); // 823
	CUtlMemory<RnTriangle_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RnTriangle_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RnTriangle_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<RnTriangle_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Element(
			int i);  // 1453
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 529
		RnTriangle_t::RnTriangle_t(); // 1479
		Construct<RnTriangle_t>(RnTriangle_t* pMemory); // 1453
	}
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::SetCount(
		int count);  // 573
	CUtlMemory<RnTriangle_t, int>::Base(); // 112
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 102
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::begin(); // 574
	CUtlMemory<RnTriangle_t, int>::Base(); // 113
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 105
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 105
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<short unsigned int>(const short unsigned int* pFrom,
						const short unsigned int* pFromEnd,
						short unsigned int* pTo);  // 173
	UtlTraitsCopyRange<RnTriangle_t>(const RnTriangle_t* pFrom,
					const RnTriangle_t* pFromEnd,
					RnTriangle_t* pTo);  // 574
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& other);  // 565
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& other);  // 452
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& src);  // 632
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 632
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 632
	Vector::operator=(
			const Vector& vOther);  // 632
	RnMesh_t::operator=(
			const RnMesh_t  &);  // 732
	RnMeshDesc_t::operator=(
			const RnMeshDesc_t  &);  // 209
	UtlTraitsCopyRange<RnMeshDesc_t>(const RnMeshDesc_t* pFrom,
					const RnMeshDesc_t* pFromEnd,
					RnMeshDesc_t* pTo);  // 200
	UtlTraitsCopyRange<RnMeshDesc_t>(const RnMeshDesc_t* pFrom,
					const RnMeshDesc_t* pFromEnd,
					RnMeshDesc_t* pTo);  // 574
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::operator=(
			const CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >& other);  // 565
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::operator=(
			const CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >& other);  // 452
	CUtlVector<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::operator=(
			const CUtlVector<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >& src);  // 34
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 573
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 102
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::begin(); // 574
	CUtlMemory<short unsigned int, int>::Base(); // 113
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 105
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 105
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<short unsigned int>(const short unsigned int* pFrom,
						const short unsigned int* pFromEnd,
						short unsigned int* pTo);  // 173
	UtlTraitsCopyRange<short unsigned int>(const short unsigned int* pFrom,
						const short unsigned int* pFromEnd,
						short unsigned int* pTo);  // 574
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator=(
			const CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >& other);  // 565
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator=(
			const CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >& other);  // 452
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::operator=(
			const CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >& src);  // 34
} /* size: 3931, inline expansions: 302 (45236 bytes) */

// <050CB6CC> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:34
inline void VPhysics2ShapeDef_t::operator=(const VPhysics2ShapeDef_t &)
{
} /* size: 0 */

// <0502BC3B> ../public/vphysx/vphysx_collisionmesh_resource.h:34
// variables: 2
// function calls: 202
void VPhysics2ShapeDef_t::operator=(const VPhysics2ShapeDef_t &)
{
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Count(); // 573
	CUtlMemory<RnSphereDesc_t, int>::Base(); // 112
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Base(); // 102
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::begin(); // 574
	CUtlMemory<RnSphereDesc_t, int>::Base(); // 113
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Base(); // 105
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Count(); // 105
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 698
	RnShapeDesc_t::operator=(
			const RnShapeDesc_t  &);  // 708
	Vector::operator=(
			const Vector& vOther);  // 72
	RnSphere_t::operator=(
			const RnSphere_t  &);  // 708
	RnSphereDesc_t::operator=(
			const RnSphereDesc_t  &);  // 209
	UtlTraitsCopyRange<RnSphereDesc_t>(const RnSphereDesc_t* pFrom,
						const RnSphereDesc_t* pFromEnd,
						RnSphereDesc_t* pTo);  // 200
	UtlTraitsCopyRange<RnSphereDesc_t>(const RnSphereDesc_t* pFrom,
						const RnSphereDesc_t* pFromEnd,
						RnSphereDesc_t* pTo);  // 574
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::operator=(
			const CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >& other);  // 565
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::operator=(
			const CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >& other);  // 452
	CUtlVector<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::operator=(
			const CUtlVector<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >& src);  // 34
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Count(); // 573
	CUtlMemory<RnCapsuleDesc_t, int>::Base(); // 112
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Base(); // 102
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::begin(); // 574
	CUtlMemory<RnCapsuleDesc_t, int>::Base(); // 113
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Base(); // 105
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Count(); // 105
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 698
	RnShapeDesc_t::operator=(
			const RnShapeDesc_t  &);  // 716
	Vector::operator=(
			const Vector& vOther);  // 123
	RnCapsule_t::operator=(
			const RnCapsule_t  &);  // 716
	RnCapsuleDesc_t::operator=(
			const RnCapsuleDesc_t  &);  // 209
	UtlTraitsCopyRange<RnCapsuleDesc_t>(const RnCapsuleDesc_t* pFrom,
						const RnCapsuleDesc_t* pFromEnd,
						RnCapsuleDesc_t* pTo);  // 200
	UtlTraitsCopyRange<RnCapsuleDesc_t>(const RnCapsuleDesc_t* pFrom,
						const RnCapsuleDesc_t* pFromEnd,
						RnCapsuleDesc_t* pTo);  // 574
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::operator=(
			const CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >& other);  // 565
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::operator=(
			const CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >& other);  // 452
	CUtlVector<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::operator=(
			const CUtlVector<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >& src);  // 34
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Count(); // 573
	CUtlMemory<RnHullDesc_t, int>::Base(); // 112
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Base(); // 102
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::begin(); // 574
	CUtlMemory<RnHullDesc_t, int>::Base(); // 113
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Base(); // 105
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Count(); // 105
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 698
	RnShapeDesc_t::operator=(
			const RnShapeDesc_t  &);  // 724
	RnHullDesc_t::operator=(
			const RnHullDesc_t  &);  // 209
	UtlTraitsCopyRange<RnHullDesc_t>(const RnHullDesc_t* pFrom,
					const RnHullDesc_t* pFromEnd,
					RnHullDesc_t* pTo);  // 200
	UtlTraitsCopyRange<RnHullDesc_t>(const RnHullDesc_t* pFrom,
					const RnHullDesc_t* pFromEnd,
					RnHullDesc_t* pTo);  // 574
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::operator=(
			const CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >& other);  // 565
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::operator=(
			const CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >& other);  // 452
	CUtlVector<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::operator=(
			const CUtlVector<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >& src);  // 34
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Count(); // 573
	CUtlMemory<RnMeshDesc_t, int>::Base(); // 112
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Base(); // 102
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::begin(); // 574
	CUtlMemory<RnMeshDesc_t, int>::Base(); // 113
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Base(); // 105
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Count(); // 105
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 698
	RnShapeDesc_t::operator=(
			const RnShapeDesc_t  &);  // 732
	Vector::operator=(
			const Vector& vOther);  // 632
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 573
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<RnNode_t, int>::NumAllocated(); // 782
	CUtlMemory<RnNode_t, int>::Base(); // 112
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 368
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<RnNode_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Element(
			int i);  // 1453
		RnNode_t::RnNode_t(); // 1479
		Construct<RnNode_t>(RnNode_t* pMemory); // 1453
	}
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::SetCount(
		int count);  // 573
	CUtlMemory<RnNode_t, int>::Base(); // 112
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 102
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::begin(); // 574
	CUtlMemory<RnNode_t, int>::Base(); // 113
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Base(); // 105
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::Count(); // 105
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::end(); // 574
	UtlTraitsCopyRange<RnNode_t>(const RnNode_t* pFrom,
					const RnNode_t* pFromEnd,
					RnNode_t* pTo);  // 574
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >& other);  // 565
	CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVectorBase<RnNode_t, CUtlMemory<RnNode_t, int> >& other);  // 452
	CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >::operator=(
			const CUtlVector<RnNode_t, CUtlMemory<RnNode_t, int> >& src);  // 632
	Vector::operator=(
			const Vector& vOther);  // 632
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 632
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 573
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<RnTriangle_t, int>::NumAllocated(); // 782
	CUtlMemory<RnTriangle_t, int>::Base(); // 112
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 368
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<RnTriangle_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Element(
			int i);  // 1453
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 529
		RnTriangle_t::RnTriangle_t(); // 1479
		Construct<RnTriangle_t>(RnTriangle_t* pMemory); // 1453
	}
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::SetCount(
		int count);  // 573
	CUtlMemory<RnTriangle_t, int>::Base(); // 112
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 102
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::begin(); // 574
	CUtlMemory<RnTriangle_t, int>::Base(); // 113
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Base(); // 105
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::Count(); // 105
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CFingerSource>(const CFingerSource* pFrom,
						const CFingerSource* pFromEnd,
						CFingerSource* pTo);  // 173
	UtlTraitsCopyRange<RnTriangle_t>(const RnTriangle_t* pFrom,
					const RnTriangle_t* pFromEnd,
					RnTriangle_t* pTo);  // 574
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& other);  // 565
	CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVectorBase<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& other);  // 452
	CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >::operator=(
			const CUtlVector<RnTriangle_t, CUtlMemory<RnTriangle_t, int> >& src);  // 632
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CFingerSource>(const CFingerSource* pFrom,
						const CFingerSource* pFromEnd,
						CFingerSource* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 632
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CFingerSource>(const CFingerSource* pFrom,
						const CFingerSource* pFromEnd,
						CFingerSource* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 632
	Vector::operator=(
			const Vector& vOther);  // 632
	RnMesh_t::operator=(
			const RnMesh_t  &);  // 732
	RnMeshDesc_t::operator=(
			const RnMeshDesc_t  &);  // 209
	UtlTraitsCopyRange<RnMeshDesc_t>(const RnMeshDesc_t* pFrom,
					const RnMeshDesc_t* pFromEnd,
					RnMeshDesc_t* pTo);  // 200
	UtlTraitsCopyRange<RnMeshDesc_t>(const RnMeshDesc_t* pFrom,
					const RnMeshDesc_t* pFromEnd,
					RnMeshDesc_t* pTo);  // 574
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::operator=(
			const CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >& other);  // 565
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::operator=(
			const CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >& other);  // 452
	CUtlVector<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::operator=(
			const CUtlVector<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >& src);  // 34
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 573
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 102
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::begin(); // 574
	CUtlMemory<short unsigned int, int>::Base(); // 113
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 105
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 105
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CFingerSource>(const CFingerSource* pFrom,
						const CFingerSource* pFromEnd,
						CFingerSource* pTo);  // 173
	UtlTraitsCopyRange<short unsigned int>(const short unsigned int* pFrom,
						const short unsigned int* pFromEnd,
						short unsigned int* pTo);  // 574
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator=(
			const CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >& other);  // 565
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator=(
			const CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >& other);  // 452
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::operator=(
			const CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >& src);  // 34
} /* size: 1785, inline expansions: 192 (15725 bytes) */

// <0500FA58> ../public/vphysx/vphysx_collisionmesh_resource.h:34
// variables: 4
// function calls: 65
void VPhysics2ShapeDef_t::~VPhysics2ShapeDef_t()
{
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 34
	{
		int i; // 1721
		CUtlMemory<RnMeshDesc_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Element(
			int i);  // 1723
		Destruct<RnMeshDesc_t>(RnMeshDesc_t* pMemory); // 1723
	}
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnMeshDesc_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnMeshDesc_t, int>::Purge(); // 903
	CUtlMemory<RnMeshDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Purge(); // 560
	ValidateAlignment<RnMeshDesc_t>(void); // 508
	CUtlMemory<RnMeshDesc_t, int>::Purge(); // 510
	CUtlMemory<RnMeshDesc_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::~CUtlVector(); // 34
	{
		int i; // 1721
		CUtlMemory<RnHullDesc_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Element(
			int i);  // 1723
		Destruct<RnHullDesc_t>(RnHullDesc_t* pMemory); // 1723
	}
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnHullDesc_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnHullDesc_t, int>::Purge(); // 903
	CUtlMemory<RnHullDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Purge(); // 560
	ValidateAlignment<RnHullDesc_t>(void); // 508
	CUtlMemory<RnHullDesc_t, int>::Purge(); // 510
	CUtlMemory<RnHullDesc_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::~CUtlVector(); // 34
	{
		int i; // 1721
		CUtlMemory<RnCapsuleDesc_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 698
		RnShapeDesc_t::~RnShapeDesc_t(); // 716
		RnCapsuleDesc_t::~RnCapsuleDesc_t(); // 1526
		Destruct<RnCapsuleDesc_t>(RnCapsuleDesc_t* pMemory); // 1723
	}
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnCapsuleDesc_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnCapsuleDesc_t, int>::Purge(); // 903
	CUtlMemory<RnCapsuleDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Purge(); // 560
	ValidateAlignment<RnCapsuleDesc_t>(void); // 508
	CUtlMemory<RnCapsuleDesc_t, int>::Purge(); // 510
	CUtlMemory<RnCapsuleDesc_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::~CUtlVector(); // 34
	{
		int i; // 1721
		CUtlMemory<RnSphereDesc_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 698
		RnShapeDesc_t::~RnShapeDesc_t(); // 708
		RnSphereDesc_t::~RnSphereDesc_t(); // 1526
		Destruct<RnSphereDesc_t>(RnSphereDesc_t* pMemory); // 1723
	}
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnSphereDesc_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnSphereDesc_t, int>::Purge(); // 903
	CUtlMemory<RnSphereDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Purge(); // 560
	CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::~CUtlVector(); // 34
} /* size: 491, inline expansions: 47 (1881 bytes) */

// <00970BEC> ../public/vphysx/vphysx_collisionmesh_resource.h:34
// member functions: 17
// member variables: 5
// static member variable: 1
// struct size: 160
struct VPhysics2ShapeDef_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	VPhysics2ShapeDef_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	void Schema_CompileTimeVerificationFunction(VPhysics2ShapeDef_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysics2ShapeDef_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	VPhysics2ShapeDef_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferSave(const VPhysics2ShapeDef_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferLoad(VPhysics2ShapeDef_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferSave_VPhysics2ShapeDef_t(const VPhysics2ShapeDef_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferLoad_VPhysics2ShapeDef_t(VPhysics2ShapeDef_t* , CKV3TransferLoadContext* );
	CUtlVector<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> > m_spheres; /* 0 32 */
	CUtlVector<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> > m_capsules; /* 32 32 */
	CUtlVector<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> > m_hulls; /* 64 32 */
	CUtlVector<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> > m_meshes; /* 96 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_CollisionAttributeIndices; /* 128 32 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:49 */
	AABB_t GetBbox(const VPhysics2ShapeDef_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:50 */
	void GetTriangulation(const VPhysics2ShapeDef_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:51 */
	void SetDesc(VPhysics2ShapeDef_t* , const RnShapeDesc_t& );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:52 */
	int GetShapeCount(const VPhysics2ShapeDef_t* );
};

// <04F6842C> ../public/vphysx/vphysx_collisionmesh_resource.h:34
// member functions: 20
// member variables: 5
// static member variable: 1
// struct size: 160
struct VPhysics2ShapeDef_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	VPhysics2ShapeDef_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	void Schema_CompileTimeVerificationFunction(VPhysics2ShapeDef_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysics2ShapeDef_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	VPhysics2ShapeDef_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferSave(const VPhysics2ShapeDef_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferLoad(VPhysics2ShapeDef_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferSave_VPhysics2ShapeDef_t(const VPhysics2ShapeDef_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferLoad_VPhysics2ShapeDef_t(VPhysics2ShapeDef_t* , CKV3TransferLoadContext* );
	CUtlVector<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> > m_spheres; /* 0 32 */
	CUtlVector<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> > m_capsules; /* 32 32 */
	CUtlVector<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> > m_hulls; /* 64 32 */
	CUtlVector<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> > m_meshes; /* 96 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_CollisionAttributeIndices; /* 128 32 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:49 */
	AABB_t GetBbox(const VPhysics2ShapeDef_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:50 */
	void GetTriangulation(const VPhysics2ShapeDef_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:51 */
	void SetDesc(VPhysics2ShapeDef_t* , const RnShapeDesc_t& );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:52 */
	int GetShapeCount(const VPhysics2ShapeDef_t* );
	VPhysics2ShapeDef_t& operator=(VPhysics2ShapeDef_t* , const VPhysics2ShapeDef_t& );
	void VPhysics2ShapeDef_t(VPhysics2ShapeDef_t* );
	void ~VPhysics2ShapeDef_t(VPhysics2ShapeDef_t* );
};

// <0505E8FE> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:34
// member functions: 20
// member variables: 5
// static member variable: 1
// struct size: 160
struct VPhysics2ShapeDef_t {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	VPhysics2ShapeDef_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	void Schema_CompileTimeVerificationFunction(VPhysics2ShapeDef_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysics2ShapeDef_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	VPhysics2ShapeDef_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferSave(const VPhysics2ShapeDef_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferLoad(VPhysics2ShapeDef_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferSave_VPhysics2ShapeDef_t(const VPhysics2ShapeDef_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferLoad_VPhysics2ShapeDef_t(VPhysics2ShapeDef_t* , CKV3TransferLoadContext* );
	CUtlVector<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> > m_spheres; /* 0 32 */
	CUtlVector<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> > m_capsules; /* 32 32 */
	CUtlVector<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> > m_hulls; /* 64 32 */
	CUtlVector<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> > m_meshes; /* 96 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_CollisionAttributeIndices; /* 128 32 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:49 */
	AABB_t GetBbox(const VPhysics2ShapeDef_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:50 */
	void GetTriangulation(const VPhysics2ShapeDef_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:51 */
	void SetDesc(VPhysics2ShapeDef_t* , const RnShapeDesc_t& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:52 */
	int GetShapeCount(const VPhysics2ShapeDef_t* );
	void ~VPhysics2ShapeDef_t(VPhysics2ShapeDef_t* );
	void VPhysics2ShapeDef_t(VPhysics2ShapeDef_t* );
	VPhysics2ShapeDef_t& operator=(VPhysics2ShapeDef_t* , const VPhysics2ShapeDef_t& );
};

// <063DE5CA> ../public/vphysx/vphysx_collisionmesh_resource.h:34
// member functions: 19
// member variables: 5
// static member variable: 1
// struct size: 160
struct VPhysics2ShapeDef_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	VPhysics2ShapeDef_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	void Schema_CompileTimeVerificationFunction(VPhysics2ShapeDef_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:36 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysics2ShapeDef_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	VPhysics2ShapeDef_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferSave(const VPhysics2ShapeDef_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferLoad(VPhysics2ShapeDef_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferSave_VPhysics2ShapeDef_t(const VPhysics2ShapeDef_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:37 */
	void KV3TransferLoad_VPhysics2ShapeDef_t(VPhysics2ShapeDef_t* , CKV3TransferLoadContext* );
	CUtlVector<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> > m_spheres; /* 0 32 */
	CUtlVector<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> > m_capsules; /* 32 32 */
	CUtlVector<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> > m_hulls; /* 64 32 */
	CUtlVector<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> > m_meshes; /* 96 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_CollisionAttributeIndices; /* 128 32 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:49 */
	AABB_t GetBbox(const VPhysics2ShapeDef_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:50 */
	void GetTriangulation(const VPhysics2ShapeDef_t* , CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:51 */
	void SetDesc(VPhysics2ShapeDef_t* , const RnShapeDesc_t& );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:52 */
	int GetShapeCount(const VPhysics2ShapeDef_t* );
	void VPhysics2ShapeDef_t(VPhysics2ShapeDef_t* );
	void ~VPhysics2ShapeDef_t(VPhysics2ShapeDef_t* );
};

// <050CD7E0> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:36
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <050CD7DA> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:36
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <050CD7C1> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:36
inline void VPhysics2ShapeDef_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <064C4658> ../public/vphysx/vphysx_collisionmesh_resource.h:59
void VPhysXBodyPart_t::~VPhysXBodyPart_t()
{
} /* size: 0 */

// <064C463C> ../public/vphysx/vphysx_collisionmesh_resource.h:59
inline void VPhysXBodyPart_t::~VPhysXBodyPart_t()
{
} /* size: 0 */

// <064C2B47> ../public/vphysx/vphysx_collisionmesh_resource.h:59
void VPhysXBodyPart_t::VPhysXBodyPart_t()
{
} /* size: 0 */

// <064C2B2B> ../public/vphysx/vphysx_collisionmesh_resource.h:59
inline void VPhysXBodyPart_t::VPhysXBodyPart_t()
{
} /* size: 0 */

// <050C51D1> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:59
inline void VPhysXBodyPart_t::operator=(const VPhysXBodyPart_t &)
{
} /* size: 0 */

// <00978000> ../public/vphysx/vphysx_collisionmesh_resource.h:59
// member functions: 13
// member variables: 11
// static member variable: 1
// struct size: 208
struct VPhysXBodyPart_t {
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:65 */
	enum VPhysXFlagEnum_t {
		FLAG_STATIC = 1,
		FLAG_KINEMATIC = 2,
		FLAG_JOINT = 4,
		FLAG_MASS = 8,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	VPhysXBodyPart_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void Schema_CompileTimeVerificationFunction(VPhysXBodyPart_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXBodyPart_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	VPhysXBodyPart_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferSave(const VPhysXBodyPart_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferLoad(VPhysXBodyPart_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferSave_VPhysXBodyPart_t(const VPhysXBodyPart_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferLoad_VPhysXBodyPart_t(VPhysXBodyPart_t* , CKV3TransferLoadContext* );
	uint32 m_nFlags; /* 0 4 */
	float32 m_flMass; /* 4 4 */
	VPhysics2ShapeDef_t m_rnShape; /* 8 160 */
	uint16 m_nCollisionAttributeIndex; /* 168 2 */
	uint16 m_nReserved; /* 170 2 */
	float m_flInertiaScale; /* 172 4 */
	float m_flLinearDamping; /* 176 4 */
	float m_flAngularDamping; /* 180 4 */
	bool m_bOverrideMassCenter; /* 184 1 */
	Vector m_vMassCenterOverride; /* 188 12 */
	float m_flGravityScale; /* 200 4 */
};

// <00AA71FE> ../public/vphysx/vphysx_collisionmesh_resource.h:59
// member functions: 13
// member variables: 11
// static member variable: 1
// struct size: 208
struct VPhysXBodyPart_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	VPhysXBodyPart_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void Schema_CompileTimeVerificationFunction(VPhysXBodyPart_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXBodyPart_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	VPhysXBodyPart_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferSave(const VPhysXBodyPart_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferLoad(VPhysXBodyPart_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferSave_VPhysXBodyPart_t(const VPhysXBodyPart_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferLoad_VPhysXBodyPart_t(VPhysXBodyPart_t* , CKV3TransferLoadContext* );
	uint32 m_nFlags; /* 0 4 */
	float32 m_flMass; /* 4 4 */
	VPhysics2ShapeDef_t m_rnShape; /* 8 160 */
	uint16 m_nCollisionAttributeIndex; /* 168 2 */
	uint16 m_nReserved; /* 170 2 */
	float m_flInertiaScale; /* 172 4 */
	float m_flLinearDamping; /* 176 4 */
	float m_flAngularDamping; /* 180 4 */
	bool m_bOverrideMassCenter; /* 184 1 */
	Vector m_vMassCenterOverride; /* 188 12 */
	float m_flGravityScale; /* 200 4 */
};

// <04F6E34D> ../public/vphysx/vphysx_collisionmesh_resource.h:59
// member functions: 16
// member variables: 11
// static member variable: 1
// struct size: 208
struct VPhysXBodyPart_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	VPhysXBodyPart_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void Schema_CompileTimeVerificationFunction(VPhysXBodyPart_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXBodyPart_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	VPhysXBodyPart_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferSave(const VPhysXBodyPart_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferLoad(VPhysXBodyPart_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferSave_VPhysXBodyPart_t(const VPhysXBodyPart_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferLoad_VPhysXBodyPart_t(VPhysXBodyPart_t* , CKV3TransferLoadContext* );
	uint32 m_nFlags; /* 0 4 */
	float32 m_flMass; /* 4 4 */
	VPhysics2ShapeDef_t m_rnShape; /* 8 160 */
	uint16 m_nCollisionAttributeIndex; /* 168 2 */
	uint16 m_nReserved; /* 170 2 */
	float m_flInertiaScale; /* 172 4 */
	float m_flLinearDamping; /* 176 4 */
	float m_flAngularDamping; /* 180 4 */
	bool m_bOverrideMassCenter; /* 184 1 */
	Vector m_vMassCenterOverride; /* 188 12 */
	float m_flGravityScale; /* 200 4 */
	VPhysXBodyPart_t& operator=(VPhysXBodyPart_t* , const VPhysXBodyPart_t& );
	void VPhysXBodyPart_t(VPhysXBodyPart_t* );
	void ~VPhysXBodyPart_t(VPhysXBodyPart_t* );
};

// <05065F54> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:59
// member functions: 16
// member variables: 11
// static member variable: 1
// struct size: 208
struct VPhysXBodyPart_t {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:65 */
	enum VPhysXFlagEnum_t {
		FLAG_STATIC = 1,
		FLAG_KINEMATIC = 2,
		FLAG_JOINT = 4,
		FLAG_MASS = 8,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	VPhysXBodyPart_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void Schema_CompileTimeVerificationFunction(VPhysXBodyPart_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXBodyPart_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	VPhysXBodyPart_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferSave(const VPhysXBodyPart_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferLoad(VPhysXBodyPart_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferSave_VPhysXBodyPart_t(const VPhysXBodyPart_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferLoad_VPhysXBodyPart_t(VPhysXBodyPart_t* , CKV3TransferLoadContext* );
	uint32 m_nFlags; /* 0 4 */
	float32 m_flMass; /* 4 4 */
	VPhysics2ShapeDef_t m_rnShape; /* 8 160 */
	uint16 m_nCollisionAttributeIndex; /* 168 2 */
	uint16 m_nReserved; /* 170 2 */
	float m_flInertiaScale; /* 172 4 */
	float m_flLinearDamping; /* 176 4 */
	float m_flAngularDamping; /* 180 4 */
	bool m_bOverrideMassCenter; /* 184 1 */
	Vector m_vMassCenterOverride; /* 188 12 */
	float m_flGravityScale; /* 200 4 */
	void ~VPhysXBodyPart_t(VPhysXBodyPart_t* );
	void VPhysXBodyPart_t(VPhysXBodyPart_t* );
	VPhysXBodyPart_t& operator=(VPhysXBodyPart_t* , const VPhysXBodyPart_t& );
};

// <063E5BDF> ../public/vphysx/vphysx_collisionmesh_resource.h:59
// member functions: 15
// member variables: 11
// static member variable: 1
// struct size: 208
struct VPhysXBodyPart_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	VPhysXBodyPart_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	void Schema_CompileTimeVerificationFunction(VPhysXBodyPart_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:61 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXBodyPart_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	VPhysXBodyPart_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferSave(const VPhysXBodyPart_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferLoad(VPhysXBodyPart_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferSave_VPhysXBodyPart_t(const VPhysXBodyPart_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:62 */
	void KV3TransferLoad_VPhysXBodyPart_t(VPhysXBodyPart_t* , CKV3TransferLoadContext* );
	uint32 m_nFlags; /* 0 4 */
	float32 m_flMass; /* 4 4 */
	VPhysics2ShapeDef_t m_rnShape; /* 8 160 */
	uint16 m_nCollisionAttributeIndex; /* 168 2 */
	uint16 m_nReserved; /* 170 2 */
	float m_flInertiaScale; /* 172 4 */
	float m_flLinearDamping; /* 176 4 */
	float m_flAngularDamping; /* 180 4 */
	bool m_bOverrideMassCenter; /* 184 1 */
	Vector m_vMassCenterOverride; /* 188 12 */
	float m_flGravityScale; /* 200 4 */
	void VPhysXBodyPart_t(VPhysXBodyPart_t* );
	void ~VPhysXBodyPart_t(VPhysXBodyPart_t* );
};

// <050CD79C> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:61
inline void VPhysXBodyPart_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <064DEE3A> ../public/vphysx/vphysx_collisionmesh_resource.h:98
void VPhysXCollisionAttributes_t::~VPhysXCollisionAttributes_t()
{
} /* size: 0 */

// <064DEE1E> ../public/vphysx/vphysx_collisionmesh_resource.h:98
inline void VPhysXCollisionAttributes_t::~VPhysXCollisionAttributes_t()
{
} /* size: 0 */

// <050CB725> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:98
void VPhysXCollisionAttributes_t::VPhysXCollisionAttributes_t()
{
} /* size: 0 */

// <050CB709> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:98
inline void VPhysXCollisionAttributes_t::VPhysXCollisionAttributes_t()
{
} /* size: 0 */

// <050BEF41> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:98
inline void VPhysXCollisionAttributes_t::operator=(const VPhysXCollisionAttributes_t &)
{
} /* size: 0 */

// <0097826D> ../public/vphysx/vphysx_collisionmesh_resource.h:98
// member functions: 14
// member variable: 1
// static member variable: 1
// struct size: 32
struct VPhysXCollisionAttributes_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	VPhysXCollisionAttributes_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	void Schema_CompileTimeVerificationFunction(VPhysXCollisionAttributes_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXCollisionAttributes_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	VPhysXCollisionAttributes_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferSave(const VPhysXCollisionAttributes_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferLoad(VPhysXCollisionAttributes_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferSave_VPhysXCollisionAttributes_t(const VPhysXCollisionAttributes_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferLoad_VPhysXCollisionAttributes_t(VPhysXCollisionAttributes_t* , CKV3TransferLoadContext* );
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_PhysicsTagStrings; /* 0 32 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:105 */
	const RnCollisionAttr_t Get(const VPhysXCollisionAttributes_t* );
};

// <04F6E5E2> ../public/vphysx/vphysx_collisionmesh_resource.h:98
// member functions: 17
// member variable: 1
// static member variable: 1
// struct size: 32
struct VPhysXCollisionAttributes_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	VPhysXCollisionAttributes_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	void Schema_CompileTimeVerificationFunction(VPhysXCollisionAttributes_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXCollisionAttributes_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	VPhysXCollisionAttributes_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferSave(const VPhysXCollisionAttributes_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferLoad(VPhysXCollisionAttributes_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferSave_VPhysXCollisionAttributes_t(const VPhysXCollisionAttributes_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferLoad_VPhysXCollisionAttributes_t(VPhysXCollisionAttributes_t* , CKV3TransferLoadContext* );
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_PhysicsTagStrings; /* 0 32 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:105 */
	const RnCollisionAttr_t Get(const VPhysXCollisionAttributes_t* );
	VPhysXCollisionAttributes_t& operator=(VPhysXCollisionAttributes_t* , const VPhysXCollisionAttributes_t& );
	void VPhysXCollisionAttributes_t(VPhysXCollisionAttributes_t* );
	void ~VPhysXCollisionAttributes_t(VPhysXCollisionAttributes_t* );
};

// <05066232> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:98
// member functions: 17
// member variable: 1
// static member variable: 1
// struct size: 32
struct VPhysXCollisionAttributes_t {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	VPhysXCollisionAttributes_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	void Schema_CompileTimeVerificationFunction(VPhysXCollisionAttributes_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXCollisionAttributes_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	VPhysXCollisionAttributes_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferSave(const VPhysXCollisionAttributes_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferLoad(VPhysXCollisionAttributes_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferSave_VPhysXCollisionAttributes_t(const VPhysXCollisionAttributes_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferLoad_VPhysXCollisionAttributes_t(VPhysXCollisionAttributes_t* , CKV3TransferLoadContext* );
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_PhysicsTagStrings; /* 0 32 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:105 */
	const RnCollisionAttr_t Get(const VPhysXCollisionAttributes_t* );
	VPhysXCollisionAttributes_t& operator=(VPhysXCollisionAttributes_t* , const VPhysXCollisionAttributes_t& );
	void VPhysXCollisionAttributes_t(VPhysXCollisionAttributes_t* );
	void ~VPhysXCollisionAttributes_t(VPhysXCollisionAttributes_t* );
};

// <064AA11B> ../public/vphysx/vphysx_collisionmesh_resource.h:98
// member functions: 15
// member variable: 1
// static member variable: 1
// struct size: 32
struct VPhysXCollisionAttributes_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	VPhysXCollisionAttributes_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	void Schema_CompileTimeVerificationFunction(VPhysXCollisionAttributes_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXCollisionAttributes_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	VPhysXCollisionAttributes_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferSave(const VPhysXCollisionAttributes_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferLoad(VPhysXCollisionAttributes_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferSave_VPhysXCollisionAttributes_t(const VPhysXCollisionAttributes_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:101 */
	void KV3TransferLoad_VPhysXCollisionAttributes_t(VPhysXCollisionAttributes_t* , CKV3TransferLoadContext* );
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_PhysicsTagStrings; /* 0 32 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:105 */
	const RnCollisionAttr_t Get(const VPhysXCollisionAttributes_t* );
	void ~VPhysXCollisionAttributes_t(VPhysXCollisionAttributes_t* );
};

// <050CD777> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:100
inline void VPhysXCollisionAttributes_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <00D74F1B> ../public/vphysx/vphysx_collisionmesh_resource.h:105
// variables: 3
inline void VPhysXCollisionAttributes_t::Get()
{
	RnCollisionAttr_t attr; // 107
	{
		int i; // 109
		{
			CUtlStringToken token; // 111
		}
	}
} /* size: 0, variables: 1 */

// <0097842A> ../public/vphysx/vphysx_collisionmesh_resource.h:123
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 8
struct VPhysXRange_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	VPhysXRange_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	void Schema_CompileTimeVerificationFunction(VPhysXRange_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXRange_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:126 */
	VPhysXRange_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:126 */
	void KV3TransferSave(const VPhysXRange_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:126 */
	void KV3TransferLoad(VPhysXRange_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:126 */
	void KV3TransferSave_VPhysXRange_t(const VPhysXRange_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:126 */
	void KV3TransferLoad_VPhysXRange_t(VPhysXRange_t* , CKV3TransferLoadContext* );
	float32 m_flMin; /* 0 4 */
	float32 m_flMax; /* 4 4 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:130 */
	void VPhysXRange_t(VPhysXRange_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:131 */
	void VPhysXRange_t(VPhysXRange_t* , float, float);
};

// <0506646A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:123
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 8
struct VPhysXRange_t {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:126 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	VPhysXRange_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	void Schema_CompileTimeVerificationFunction(VPhysXRange_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:125 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXRange_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:126 */
	VPhysXRange_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:126 */
	void KV3TransferSave(const VPhysXRange_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:126 */
	void KV3TransferLoad(VPhysXRange_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:126 */
	void KV3TransferSave_VPhysXRange_t(const VPhysXRange_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:126 */
	void KV3TransferLoad_VPhysXRange_t(VPhysXRange_t* , CKV3TransferLoadContext* );
	float32 m_flMin; /* 0 4 */
	float32 m_flMax; /* 4 4 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:130 */
	void VPhysXRange_t(VPhysXRange_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:131 */
	void VPhysXRange_t(VPhysXRange_t* , float, float);
};

// <050CD752> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:125
inline void VPhysXRange_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <050CD73B> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:130
void VPhysXRange_t::VPhysXRange_t()
{
} /* size: 0 */

// <050CD722> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:130
inline void VPhysXRange_t::VPhysXRange_t()
{
} /* size: 0 */

// <050BDDB5> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:141
inline void VPhysXConstraintParams_t::operator=(const VPhysXConstraintParams_t &)
{
} /* size: 0 */

// <00978619> ../public/vphysx/vphysx_collisionmesh_resource.h:141
// member functions: 14
// member variables: 46
// static member variable: 1
// struct size: 248
struct VPhysXConstraintParams_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	VPhysXConstraintParams_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	void Schema_CompileTimeVerificationFunction(VPhysXConstraintParams_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXConstraintParams_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	VPhysXConstraintParams_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	void KV3TransferSave(const VPhysXConstraintParams_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	void KV3TransferLoad(VPhysXConstraintParams_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	void KV3TransferSave_VPhysXConstraintParams_t(const VPhysXConstraintParams_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	void KV3TransferLoad_VPhysXConstraintParams_t(VPhysXConstraintParams_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:146 */
	void VPhysXConstraintParams_t(VPhysXConstraintParams_t* );
	int8 m_nType; /* 0 1 */
	int8 m_nTranslateMotion; /* 1 1 */
	int8 m_nRotateMotion; /* 2 1 */
	int8 m_nFlags; /* 3 1 */
	Vector m_anchor[2]; /* 4 24 */
	Quaternion m_axes[2]; /* 28 32 */
	float32 m_maxForce; /* 60 4 */
	float32 m_maxTorque; /* 64 4 */
	float32 m_linearLimitValue; /* 68 4 */
	float32 m_linearLimitRestitution; /* 72 4 */
	float32 m_linearLimitSpring; /* 76 4 */
	float32 m_linearLimitDamping; /* 80 4 */
	float32 m_twistLowLimitValue; /* 84 4 */
	float32 m_twistLowLimitRestitution; /* 88 4 */
	float32 m_twistLowLimitSpring; /* 92 4 */
	float32 m_twistLowLimitDamping; /* 96 4 */
	float32 m_twistHighLimitValue; /* 100 4 */
	float32 m_twistHighLimitRestitution; /* 104 4 */
	float32 m_twistHighLimitSpring; /* 108 4 */
	float32 m_twistHighLimitDamping; /* 112 4 */
	float32 m_swing1LimitValue; /* 116 4 */
	float32 m_swing1LimitRestitution; /* 120 4 */
	float32 m_swing1LimitSpring; /* 124 4 */
	float32 m_swing1LimitDamping; /* 128 4 */
	float32 m_swing2LimitValue; /* 132 4 */
	float32 m_swing2LimitRestitution; /* 136 4 */
	float32 m_swing2LimitSpring; /* 140 4 */
	float32 m_swing2LimitDamping; /* 144 4 */
	Vector m_goalPosition; /* 148 12 */
	Quaternion m_goalOrientation; /* 160 16 */
	Vector m_goalAngularVelocity; /* 176 12 */
	float32 m_driveSpringX; /* 188 4 */
	float32 m_driveSpringY; /* 192 4 */
	float32 m_driveSpringZ; /* 196 4 */
	float32 m_driveDampingX; /* 200 4 */
	float32 m_driveDampingY; /* 204 4 */
	float32 m_driveDampingZ; /* 208 4 */
	float32 m_driveSpringTwist; /* 212 4 */
	float32 m_driveSpringSwing; /* 216 4 */
	float32 m_driveSpringSlerp; /* 220 4 */
	float32 m_driveDampingTwist; /* 224 4 */
	float32 m_driveDampingSwing; /* 228 4 */
	float32 m_driveDampingSlerp; /* 232 4 */
	int32 m_solverIterationCount; /* 236 4 */
	float32 m_projectionLinearTolerance; /* 240 4 */
	float32 m_projectionAngularTolerance; /* 244 4 */
};

// <04F6E9EB> ../public/vphysx/vphysx_collisionmesh_resource.h:141
// member functions: 15
// member variables: 46
// static member variable: 1
// struct size: 248
struct VPhysXConstraintParams_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	VPhysXConstraintParams_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	void Schema_CompileTimeVerificationFunction(VPhysXConstraintParams_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXConstraintParams_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	VPhysXConstraintParams_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	void KV3TransferSave(const VPhysXConstraintParams_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	void KV3TransferLoad(VPhysXConstraintParams_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	void KV3TransferSave_VPhysXConstraintParams_t(const VPhysXConstraintParams_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	void KV3TransferLoad_VPhysXConstraintParams_t(VPhysXConstraintParams_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:146 */
	void VPhysXConstraintParams_t(VPhysXConstraintParams_t* );
	int8 m_nType; /* 0 1 */
	int8 m_nTranslateMotion; /* 1 1 */
	int8 m_nRotateMotion; /* 2 1 */
	int8 m_nFlags; /* 3 1 */
	Vector m_anchor[2]; /* 4 24 */
	Quaternion m_axes[2]; /* 28 32 */
	float32 m_maxForce; /* 60 4 */
	float32 m_maxTorque; /* 64 4 */
	float32 m_linearLimitValue; /* 68 4 */
	float32 m_linearLimitRestitution; /* 72 4 */
	float32 m_linearLimitSpring; /* 76 4 */
	float32 m_linearLimitDamping; /* 80 4 */
	float32 m_twistLowLimitValue; /* 84 4 */
	float32 m_twistLowLimitRestitution; /* 88 4 */
	float32 m_twistLowLimitSpring; /* 92 4 */
	float32 m_twistLowLimitDamping; /* 96 4 */
	float32 m_twistHighLimitValue; /* 100 4 */
	float32 m_twistHighLimitRestitution; /* 104 4 */
	float32 m_twistHighLimitSpring; /* 108 4 */
	float32 m_twistHighLimitDamping; /* 112 4 */
	float32 m_swing1LimitValue; /* 116 4 */
	float32 m_swing1LimitRestitution; /* 120 4 */
	float32 m_swing1LimitSpring; /* 124 4 */
	float32 m_swing1LimitDamping; /* 128 4 */
	float32 m_swing2LimitValue; /* 132 4 */
	float32 m_swing2LimitRestitution; /* 136 4 */
	float32 m_swing2LimitSpring; /* 140 4 */
	float32 m_swing2LimitDamping; /* 144 4 */
	Vector m_goalPosition; /* 148 12 */
	Quaternion m_goalOrientation; /* 160 16 */
	Vector m_goalAngularVelocity; /* 176 12 */
	float32 m_driveSpringX; /* 188 4 */
	float32 m_driveSpringY; /* 192 4 */
	float32 m_driveSpringZ; /* 196 4 */
	float32 m_driveDampingX; /* 200 4 */
	float32 m_driveDampingY; /* 204 4 */
	float32 m_driveDampingZ; /* 208 4 */
	float32 m_driveSpringTwist; /* 212 4 */
	float32 m_driveSpringSwing; /* 216 4 */
	float32 m_driveSpringSlerp; /* 220 4 */
	float32 m_driveDampingTwist; /* 224 4 */
	float32 m_driveDampingSwing; /* 228 4 */
	float32 m_driveDampingSlerp; /* 232 4 */
	int32 m_solverIterationCount; /* 236 4 */
	float32 m_projectionLinearTolerance; /* 240 4 */
	float32 m_projectionAngularTolerance; /* 244 4 */
	VPhysXConstraintParams_t& operator=(VPhysXConstraintParams_t* , const VPhysXConstraintParams_t& );
};

// <05066679> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:141
// member functions: 15
// member variables: 46
// static member variable: 1
// struct size: 248
struct VPhysXConstraintParams_t {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:155 */
	enum EnumFlags0_t {
		FLAG0_SHIFT_INTERPENETRATE = 0,
		FLAG0_SHIFT_CONSTRAIN = 1,
		FLAG0_SHIFT_BREAKABLE_FORCE = 2,
		FLAG0_SHIFT_BREAKABLE_TORQUE = 3,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	VPhysXConstraintParams_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	void Schema_CompileTimeVerificationFunction(VPhysXConstraintParams_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:143 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXConstraintParams_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	VPhysXConstraintParams_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	void KV3TransferSave(const VPhysXConstraintParams_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	void KV3TransferLoad(VPhysXConstraintParams_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	void KV3TransferSave_VPhysXConstraintParams_t(const VPhysXConstraintParams_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:144 */
	void KV3TransferLoad_VPhysXConstraintParams_t(VPhysXConstraintParams_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:146 */
	void VPhysXConstraintParams_t(VPhysXConstraintParams_t* );
	int8 m_nType; /* 0 1 */
	int8 m_nTranslateMotion; /* 1 1 */
	int8 m_nRotateMotion; /* 2 1 */
	int8 m_nFlags; /* 3 1 */
	Vector m_anchor[2]; /* 4 24 */
	Quaternion m_axes[2]; /* 28 32 */
	float32 m_maxForce; /* 60 4 */
	float32 m_maxTorque; /* 64 4 */
	float32 m_linearLimitValue; /* 68 4 */
	float32 m_linearLimitRestitution; /* 72 4 */
	float32 m_linearLimitSpring; /* 76 4 */
	float32 m_linearLimitDamping; /* 80 4 */
	float32 m_twistLowLimitValue; /* 84 4 */
	float32 m_twistLowLimitRestitution; /* 88 4 */
	float32 m_twistLowLimitSpring; /* 92 4 */
	float32 m_twistLowLimitDamping; /* 96 4 */
	float32 m_twistHighLimitValue; /* 100 4 */
	float32 m_twistHighLimitRestitution; /* 104 4 */
	float32 m_twistHighLimitSpring; /* 108 4 */
	float32 m_twistHighLimitDamping; /* 112 4 */
	float32 m_swing1LimitValue; /* 116 4 */
	float32 m_swing1LimitRestitution; /* 120 4 */
	float32 m_swing1LimitSpring; /* 124 4 */
	float32 m_swing1LimitDamping; /* 128 4 */
	float32 m_swing2LimitValue; /* 132 4 */
	float32 m_swing2LimitRestitution; /* 136 4 */
	float32 m_swing2LimitSpring; /* 140 4 */
	float32 m_swing2LimitDamping; /* 144 4 */
	Vector m_goalPosition; /* 148 12 */
	Quaternion m_goalOrientation; /* 160 16 */
	Vector m_goalAngularVelocity; /* 176 12 */
	float32 m_driveSpringX; /* 188 4 */
	float32 m_driveSpringY; /* 192 4 */
	float32 m_driveSpringZ; /* 196 4 */
	float32 m_driveDampingX; /* 200 4 */
	float32 m_driveDampingY; /* 204 4 */
	float32 m_driveDampingZ; /* 208 4 */
	float32 m_driveSpringTwist; /* 212 4 */
	float32 m_driveSpringSwing; /* 216 4 */
	float32 m_driveSpringSlerp; /* 220 4 */
	float32 m_driveDampingTwist; /* 224 4 */
	float32 m_driveDampingSwing; /* 228 4 */
	float32 m_driveDampingSlerp; /* 232 4 */
	int32 m_solverIterationCount; /* 236 4 */
	float32 m_projectionLinearTolerance; /* 240 4 */
	float32 m_projectionAngularTolerance; /* 244 4 */
	VPhysXConstraintParams_t& operator=(VPhysXConstraintParams_t* , const VPhysXConstraintParams_t& );
};

// <050CD6FD> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:143
inline void VPhysXConstraintParams_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <050CD6E6> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:146
void VPhysXConstraintParams_t::VPhysXConstraintParams_t()
{
} /* size: 0 */

// <050CD6CD> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:146
inline void VPhysXConstraintParams_t::VPhysXConstraintParams_t()
{
} /* size: 0 */

// <050B3ACC> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:221
inline void VPhysXConstraint2_t::operator=(const VPhysXConstraint2_t &)
{
} /* size: 0 */

// <050B3AB5> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:221
void VPhysXConstraint2_t::VPhysXConstraint2_t()
{
} /* size: 0 */

// <050B3A99> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:221
inline void VPhysXConstraint2_t::VPhysXConstraint2_t()
{
} /* size: 0 */

// <00978AB6> ../public/vphysx/vphysx_collisionmesh_resource.h:221
// member functions: 13
// member variables: 4
// static member variable: 1
// struct size: 256
struct VPhysXConstraint2_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	VPhysXConstraint2_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	void Schema_CompileTimeVerificationFunction(VPhysXConstraint2_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXConstraint2_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	VPhysXConstraint2_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	void KV3TransferSave(const VPhysXConstraint2_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	void KV3TransferLoad(VPhysXConstraint2_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	void KV3TransferSave_VPhysXConstraint2_t(const VPhysXConstraint2_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	void KV3TransferLoad_VPhysXConstraint2_t(VPhysXConstraint2_t* , CKV3TransferLoadContext* );
	uint32 m_nFlags; /* 0 4 */
	uint16 m_nParent; /* 4 2 */
	uint16 m_nChild; /* 6 2 */
	VPhysXConstraintParams_t m_params; /* 8 248 */
};

// <04F6EE94> ../public/vphysx/vphysx_collisionmesh_resource.h:221
// member functions: 15
// member variables: 4
// static member variable: 1
// struct size: 256
struct VPhysXConstraint2_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	VPhysXConstraint2_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	void Schema_CompileTimeVerificationFunction(VPhysXConstraint2_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXConstraint2_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	VPhysXConstraint2_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	void KV3TransferSave(const VPhysXConstraint2_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	void KV3TransferLoad(VPhysXConstraint2_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	void KV3TransferSave_VPhysXConstraint2_t(const VPhysXConstraint2_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	void KV3TransferLoad_VPhysXConstraint2_t(VPhysXConstraint2_t* , CKV3TransferLoadContext* );
	uint32 m_nFlags; /* 0 4 */
	uint16 m_nParent; /* 4 2 */
	uint16 m_nChild; /* 6 2 */
	VPhysXConstraintParams_t m_params; /* 8 248 */
	VPhysXConstraint2_t& operator=(VPhysXConstraint2_t* , const VPhysXConstraint2_t& );
	void VPhysXConstraint2_t(VPhysXConstraint2_t* );
};

// <05066B6A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:221
// member functions: 15
// member variables: 4
// static member variable: 1
// struct size: 256
struct VPhysXConstraint2_t {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	VPhysXConstraint2_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	void Schema_CompileTimeVerificationFunction(VPhysXConstraint2_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:223 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXConstraint2_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	VPhysXConstraint2_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	void KV3TransferSave(const VPhysXConstraint2_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	void KV3TransferLoad(VPhysXConstraint2_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	void KV3TransferSave_VPhysXConstraint2_t(const VPhysXConstraint2_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:224 */
	void KV3TransferLoad_VPhysXConstraint2_t(VPhysXConstraint2_t* , CKV3TransferLoadContext* );
	uint32 m_nFlags; /* 0 4 */
	uint16 m_nParent; /* 4 2 */
	uint16 m_nChild; /* 6 2 */
	VPhysXConstraintParams_t m_params; /* 8 248 */
	void VPhysXConstraint2_t(VPhysXConstraint2_t* );
	VPhysXConstraint2_t& operator=(VPhysXConstraint2_t* , const VPhysXConstraint2_t& );
};

// <050CD6A8> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:223
inline void VPhysXConstraint2_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <050B0B8E> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:236
inline void VPhysXJoint_t::operator=(const VPhysXJoint_t &)
{
} /* size: 0 */

// <050B0B77> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:236
void VPhysXJoint_t::VPhysXJoint_t()
{
} /* size: 0 */

// <050B0B5B> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:236
inline void VPhysXJoint_t::VPhysXJoint_t()
{
} /* size: 0 */

// <00978C84> ../public/vphysx/vphysx_collisionmesh_resource.h:236
// member functions: 13
// member variables: 25
// static member variable: 1
// struct size: 192
struct VPhysXJoint_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	VPhysXJoint_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void Schema_CompileTimeVerificationFunction(VPhysXJoint_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXJoint_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	VPhysXJoint_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferSave(const VPhysXJoint_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferLoad(VPhysXJoint_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferSave_VPhysXJoint_t(const VPhysXJoint_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferLoad_VPhysXJoint_t(VPhysXJoint_t* , CKV3TransferLoadContext* );
	uint16 m_nType; /* 0 2 */
	uint16 m_nBody1; /* 2 2 */
	uint16 m_nBody2; /* 4 2 */
	uint16 m_nFlags; /* 6 2 */
	CTransform m_Frame1 __attribute__((__aligned__(16))); /* 16 32 */
	CTransform m_Frame2 __attribute__((__aligned__(16))); /* 48 32 */
	bool m_bEnableCollision; /* 80 1 */
	bool m_bEnableLinearLimit; /* 81 1 */
	VPhysXRange_t m_LinearLimit; /* 84 8 */
	bool m_bEnableLinearMotor; /* 92 1 */
	Vector m_vLinearTargetVelocity; /* 96 12 */
	float m_flMaxForce; /* 108 4 */
	bool m_bEnableSwingLimit; /* 112 1 */
	VPhysXRange_t m_SwingLimit; /* 116 8 */
	bool m_bEnableTwistLimit; /* 124 1 */
	VPhysXRange_t m_TwistLimit; /* 128 8 */
	bool m_bEnableAngularMotor; /* 136 1 */
	Vector m_vAngularTargetVelocity; /* 140 12 */
	float m_flMaxTorque; /* 152 4 */
	float m_flLinearFrequency; /* 156 4 */
	float m_flLinearDampingRatio; /* 160 4 */
	float m_flAngularFrequency; /* 164 4 */
	float m_flAngularDampingRatio; /* 168 4 */
	float m_flLinearStrength; /* 172 4 */
	float m_flAngularStrength; /* 176 4 */
} __attribute__((__aligned__(16)));

// <00CFBE48> ../public/vphysx/vphysx_collisionmesh_resource.h:236
// member functions: 13
// member variables: 25
// static member variable: 1
// struct size: 192
struct VPhysXJoint_t {
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:241 */
	enum Flags_t {
		JOINT_FLAGS_NONE = 0,
		JOINT_FLAGS_BODY1_FIXED = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	VPhysXJoint_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void Schema_CompileTimeVerificationFunction(VPhysXJoint_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXJoint_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	VPhysXJoint_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferSave(const VPhysXJoint_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferLoad(VPhysXJoint_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferSave_VPhysXJoint_t(const VPhysXJoint_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferLoad_VPhysXJoint_t(VPhysXJoint_t* , CKV3TransferLoadContext* );
	uint16 m_nType; /* 0 2 */
	uint16 m_nBody1; /* 2 2 */
	uint16 m_nBody2; /* 4 2 */
	uint16 m_nFlags; /* 6 2 */
	CTransform m_Frame1 __attribute__((__aligned__(16))); /* 16 32 */
	CTransform m_Frame2 __attribute__((__aligned__(16))); /* 48 32 */
	bool m_bEnableCollision; /* 80 1 */
	bool m_bEnableLinearLimit; /* 81 1 */
	VPhysXRange_t m_LinearLimit; /* 84 8 */
	bool m_bEnableLinearMotor; /* 92 1 */
	Vector m_vLinearTargetVelocity; /* 96 12 */
	float m_flMaxForce; /* 108 4 */
	bool m_bEnableSwingLimit; /* 112 1 */
	VPhysXRange_t m_SwingLimit; /* 116 8 */
	bool m_bEnableTwistLimit; /* 124 1 */
	VPhysXRange_t m_TwistLimit; /* 128 8 */
	bool m_bEnableAngularMotor; /* 136 1 */
	Vector m_vAngularTargetVelocity; /* 140 12 */
	float m_flMaxTorque; /* 152 4 */
	float m_flLinearFrequency; /* 156 4 */
	float m_flLinearDampingRatio; /* 160 4 */
	float m_flAngularFrequency; /* 164 4 */
	float m_flAngularDampingRatio; /* 168 4 */
	float m_flLinearStrength; /* 172 4 */
	float m_flAngularStrength; /* 176 4 */
} __attribute__((__aligned__(16)));

// <011F8F6B> ../public/vphysx/vphysx_collisionmesh_resource.h:236
// member functions: 14
// member variables: 25
// static member variable: 1
// struct size: 192
struct VPhysXJoint_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	VPhysXJoint_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void Schema_CompileTimeVerificationFunction(VPhysXJoint_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXJoint_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	VPhysXJoint_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferSave(const VPhysXJoint_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferLoad(VPhysXJoint_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferSave_VPhysXJoint_t(const VPhysXJoint_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferLoad_VPhysXJoint_t(VPhysXJoint_t* , CKV3TransferLoadContext* );
	uint16 m_nType; /* 0 2 */
	uint16 m_nBody1; /* 2 2 */
	uint16 m_nBody2; /* 4 2 */
	uint16 m_nFlags; /* 6 2 */
	CTransform m_Frame1 __attribute__((__aligned__(16))); /* 16 32 */
	CTransform m_Frame2 __attribute__((__aligned__(16))); /* 48 32 */
	bool m_bEnableCollision; /* 80 1 */
	bool m_bEnableLinearLimit; /* 81 1 */
	VPhysXRange_t m_LinearLimit; /* 84 8 */
	bool m_bEnableLinearMotor; /* 92 1 */
	Vector m_vLinearTargetVelocity; /* 96 12 */
	float m_flMaxForce; /* 108 4 */
	bool m_bEnableSwingLimit; /* 112 1 */
	VPhysXRange_t m_SwingLimit; /* 116 8 */
	bool m_bEnableTwistLimit; /* 124 1 */
	VPhysXRange_t m_TwistLimit; /* 128 8 */
	bool m_bEnableAngularMotor; /* 136 1 */
	Vector m_vAngularTargetVelocity; /* 140 12 */
	float m_flMaxTorque; /* 152 4 */
	float m_flLinearFrequency; /* 156 4 */
	float m_flLinearDampingRatio; /* 160 4 */
	float m_flAngularFrequency; /* 164 4 */
	float m_flAngularDampingRatio; /* 168 4 */
	float m_flLinearStrength; /* 172 4 */
	float m_flAngularStrength; /* 176 4 */
	void VPhysXJoint_t(VPhysXJoint_t* );
} __attribute__((__aligned__(16)));

// <0183918C> ../public/vphysx/vphysx_collisionmesh_resource.h:236
// member functions: 15
// member variables: 25
// static member variable: 1
// struct size: 192
struct VPhysXJoint_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	VPhysXJoint_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void Schema_CompileTimeVerificationFunction(VPhysXJoint_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXJoint_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	VPhysXJoint_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferSave(const VPhysXJoint_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferLoad(VPhysXJoint_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferSave_VPhysXJoint_t(const VPhysXJoint_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferLoad_VPhysXJoint_t(VPhysXJoint_t* , CKV3TransferLoadContext* );
	uint16 m_nType; /* 0 2 */
	uint16 m_nBody1; /* 2 2 */
	uint16 m_nBody2; /* 4 2 */
	uint16 m_nFlags; /* 6 2 */
	CTransform m_Frame1 __attribute__((__aligned__(16))); /* 16 32 */
	CTransform m_Frame2 __attribute__((__aligned__(16))); /* 48 32 */
	bool m_bEnableCollision; /* 80 1 */
	bool m_bEnableLinearLimit; /* 81 1 */
	VPhysXRange_t m_LinearLimit; /* 84 8 */
	bool m_bEnableLinearMotor; /* 92 1 */
	Vector m_vLinearTargetVelocity; /* 96 12 */
	float m_flMaxForce; /* 108 4 */
	bool m_bEnableSwingLimit; /* 112 1 */
	VPhysXRange_t m_SwingLimit; /* 116 8 */
	bool m_bEnableTwistLimit; /* 124 1 */
	VPhysXRange_t m_TwistLimit; /* 128 8 */
	bool m_bEnableAngularMotor; /* 136 1 */
	Vector m_vAngularTargetVelocity; /* 140 12 */
	float m_flMaxTorque; /* 152 4 */
	float m_flLinearFrequency; /* 156 4 */
	float m_flLinearDampingRatio; /* 160 4 */
	float m_flAngularFrequency; /* 164 4 */
	float m_flAngularDampingRatio; /* 168 4 */
	float m_flLinearStrength; /* 172 4 */
	float m_flAngularStrength; /* 176 4 */
	VPhysXJoint_t& operator=(VPhysXJoint_t* , const VPhysXJoint_t& );
	void VPhysXJoint_t(VPhysXJoint_t* );
} __attribute__((__aligned__(16)));

// <05066D93> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:236
// member functions: 15
// member variables: 25
// static member variable: 1
// struct size: 192
struct VPhysXJoint_t {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:241 */
	enum Flags_t {
		JOINT_FLAGS_NONE = 0,
		JOINT_FLAGS_BODY1_FIXED = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	VPhysXJoint_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	void Schema_CompileTimeVerificationFunction(VPhysXJoint_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:238 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXJoint_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	VPhysXJoint_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferSave(const VPhysXJoint_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferLoad(VPhysXJoint_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferSave_VPhysXJoint_t(const VPhysXJoint_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:239 */
	void KV3TransferLoad_VPhysXJoint_t(VPhysXJoint_t* , CKV3TransferLoadContext* );
	uint16 m_nType; /* 0 2 */
	uint16 m_nBody1; /* 2 2 */
	uint16 m_nBody2; /* 4 2 */
	uint16 m_nFlags; /* 6 2 */
	CTransform m_Frame1 __attribute__((__aligned__(16))); /* 16 32 */
	CTransform m_Frame2 __attribute__((__aligned__(16))); /* 48 32 */
	bool m_bEnableCollision; /* 80 1 */
	bool m_bEnableLinearLimit; /* 81 1 */
	VPhysXRange_t m_LinearLimit; /* 84 8 */
	bool m_bEnableLinearMotor; /* 92 1 */
	Vector m_vLinearTargetVelocity; /* 96 12 */
	float m_flMaxForce; /* 108 4 */
	bool m_bEnableSwingLimit; /* 112 1 */
	VPhysXRange_t m_SwingLimit; /* 116 8 */
	bool m_bEnableTwistLimit; /* 124 1 */
	VPhysXRange_t m_TwistLimit; /* 128 8 */
	bool m_bEnableAngularMotor; /* 136 1 */
	Vector m_vAngularTargetVelocity; /* 140 12 */
	float m_flMaxTorque; /* 152 4 */
	float m_flLinearFrequency; /* 156 4 */
	float m_flLinearDampingRatio; /* 160 4 */
	float m_flAngularFrequency; /* 164 4 */
	float m_flAngularDampingRatio; /* 168 4 */
	float m_flLinearStrength; /* 172 4 */
	float m_flAngularStrength; /* 176 4 */
	void VPhysXJoint_t(VPhysXJoint_t* );
	VPhysXJoint_t& operator=(VPhysXJoint_t* , const VPhysXJoint_t& );
} __attribute__((__aligned__(16)));

// <050CD683> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:238
inline void VPhysXJoint_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <050A6DE2> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:287
inline void PhysSoftbodyDesc_t::operator=(const PhysSoftbodyDesc_t &)
{
} /* size: 0 */

// <050A6CEF> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:287
void PhysSoftbodyDesc_t::PhysSoftbodyDesc_t()
{
} /* size: 0 */

// <050A6CD2> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:287
inline void PhysSoftbodyDesc_t::PhysSoftbodyDesc_t()
{
} /* size: 0 */

// <050A613D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:287
// variable: 1
// function calls: 61
void PhysSoftbodyDesc_t::~PhysSoftbodyDesc_t()
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 287
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 287
	CUtlVectorBase<RnSoftbodyCapsule_t, CUtlMemory<RnSoftbodyCapsule_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnSoftbodyCapsule_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnSoftbodyCapsule_t, int>::Purge(); // 903
	CUtlMemory<RnSoftbodyCapsule_t, int>::Purge(); // 1799
	CUtlVectorBase<RnSoftbodyCapsule_t, CUtlMemory<RnSoftbodyCapsule_t, int> >::Purge(); // 560
	ValidateAlignment<RnSoftbodyCapsule_t>(void); // 508
	CUtlMemory<RnSoftbodyCapsule_t, int>::Purge(); // 510
	CUtlMemory<RnSoftbodyCapsule_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnSoftbodyCapsule_t, CUtlMemory<RnSoftbodyCapsule_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnSoftbodyCapsule_t, CUtlMemory<RnSoftbodyCapsule_t, int> >::~CUtlVector(); // 287
	CUtlVectorBase<RnSoftbodySpring_t, CUtlMemory<RnSoftbodySpring_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnSoftbodySpring_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnSoftbodySpring_t, int>::Purge(); // 903
	CUtlMemory<RnSoftbodySpring_t, int>::Purge(); // 1799
	CUtlVectorBase<RnSoftbodySpring_t, CUtlMemory<RnSoftbodySpring_t, int> >::Purge(); // 560
	ValidateAlignment<RnSoftbodySpring_t>(void); // 508
	CUtlMemory<RnSoftbodySpring_t, int>::Purge(); // 510
	CUtlMemory<RnSoftbodySpring_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnSoftbodySpring_t, CUtlMemory<RnSoftbodySpring_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnSoftbodySpring_t, CUtlMemory<RnSoftbodySpring_t, int> >::~CUtlVector(); // 287
	CUtlVectorBase<RnSoftbodyParticle_t, CUtlMemory<RnSoftbodyParticle_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RnSoftbodyParticle_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RnSoftbodyParticle_t, int>::Purge(); // 903
	CUtlMemory<RnSoftbodyParticle_t, int>::Purge(); // 1799
	CUtlVectorBase<RnSoftbodyParticle_t, CUtlMemory<RnSoftbodyParticle_t, int> >::Purge(); // 560
	ValidateAlignment<RnSoftbodyParticle_t>(void); // 508
	CUtlMemory<RnSoftbodyParticle_t, int>::Purge(); // 510
	CUtlMemory<RnSoftbodyParticle_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RnSoftbodyParticle_t, CUtlMemory<RnSoftbodyParticle_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RnSoftbodyParticle_t, CUtlMemory<RnSoftbodyParticle_t, int> >::~CUtlVector(); // 287
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 287
} /* size: 347, inline expansions: 57 (1323 bytes) */

// <050A6120> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:287
inline void PhysSoftbodyDesc_t::~PhysSoftbodyDesc_t()
{
} /* size: 0 */

// <05067136> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:287
// member functions: 16
// member variables: 6
// static member variable: 1
// struct size: 192
struct PhysSoftbodyDesc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:289 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:289 */
	PhysSoftbodyDesc_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:289 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:289 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:289 */
	void Schema_CompileTimeVerificationFunction(PhysSoftbodyDesc_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:289 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:289 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:289 */
	const CSchemaClassInfo* Schema_DynamicBinding(const PhysSoftbodyDesc_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:290 */
	PhysSoftbodyDesc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:290 */
	void KV3TransferSave(const PhysSoftbodyDesc_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:290 */
	void KV3TransferLoad(PhysSoftbodyDesc_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:290 */
	void KV3TransferSave_PhysSoftbodyDesc_t(const PhysSoftbodyDesc_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:290 */
	void KV3TransferLoad_PhysSoftbodyDesc_t(PhysSoftbodyDesc_t* , CKV3TransferLoadContext* );
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ParticleBoneHash; /* 0 32 */
	CUtlVector<RnSoftbodyParticle_t, CUtlMemory<RnSoftbodyParticle_t, int> > m_Particles; /* 32 32 */
	CUtlVector<RnSoftbodySpring_t, CUtlMemory<RnSoftbodySpring_t, int> > m_Springs; /* 64 32 */
	CUtlVector<RnSoftbodyCapsule_t, CUtlMemory<RnSoftbodyCapsule_t, int> > m_Capsules; /* 96 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_InitPose; /* 128 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_ParticleBoneName; /* 160 32 */
	void ~PhysSoftbodyDesc_t(PhysSoftbodyDesc_t* );
	void PhysSoftbodyDesc_t(PhysSoftbodyDesc_t* );
	PhysSoftbodyDesc_t& operator=(PhysSoftbodyDesc_t* , const PhysSoftbodyDesc_t& );
};

// <050CD65E> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:289
inline void PhysSoftbodyDesc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <064D6CEE> ../public/vphysx/vphysx_collisionmesh_resource.h:305
void VPhysXAggregateData_t::VPhysXAggregateData_t()
{
} /* size: 0 */

// <064D6CD1> ../public/vphysx/vphysx_collisionmesh_resource.h:305
inline void VPhysXAggregateData_t::VPhysXAggregateData_t()
{
} /* size: 0 */

// <0509E9EC> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:305
inline void VPhysXAggregateData_t::operator=(const VPhysXAggregateData_t &)
{
} /* size: 0 */

// <0097A6B8> ../public/vphysx/vphysx_collisionmesh_resource.h:305
// member functions: 22
// member variables: 15
// static member variable: 1
// struct size: 400
struct VPhysXAggregateData_t {
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	VPhysXAggregateData_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void Schema_CompileTimeVerificationFunction(VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	VPhysXAggregateData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferSave(const VPhysXAggregateData_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferLoad(VPhysXAggregateData_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferSave_VPhysXAggregateData_t(const VPhysXAggregateData_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferLoad_VPhysXAggregateData_t(VPhysXAggregateData_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:318 */
	void ~VPhysXAggregateData_t(VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:321 */
	uint32 GetChecksum(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:322 */
	int GetBoneCount(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:323 */
	const char* GetBoneName(const VPhysXAggregateData_t* , int);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:324 */
	int FindBodyPartByHash(const VPhysXAggregateData_t* , uint);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:325 */
	int GetPartCount(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:327 */
	uint32 GetSurfacePropertyHash(const VPhysXAggregateData_t* , const RnShapeDesc_t& );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:328 */
	VPhysXCollisionAttributes_t GetCollisionProperty(const VPhysXAggregateData_t* , const RnShapeDesc_t& );
	uint16 m_nFlags; /* 0 2 */
	uint16 m_nRefCounter; /* 2 2 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_bonesHash; /* 8 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_boneNames; /* 40 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_indexNames; /* 72 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_indexHash; /* 104 32 */
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_bindPose; /* 136 32 */
	CUtlVector<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> > m_parts; /* 168 32 */
	CUtlVector<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> > m_constraints2; /* 200 32 */
	CUtlVector<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> > m_joints; /* 232 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_boneParents; /* 264 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_surfacePropertyHashes; /* 296 32 */
	CUtlVector<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> > m_collisionAttributes; /* 328 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_debugPartNames; /* 360 32 */
	CUtlString m_embeddedKeyvalues; /* 392 8 */
	void VPhysXAggregateData_t(VPhysXAggregateData_t* );
};

// <00AA9874> ../public/vphysx/vphysx_collisionmesh_resource.h:305
// member functions: 21
// member variables: 15
// static member variable: 1
// struct size: 400
struct VPhysXAggregateData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	VPhysXAggregateData_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void Schema_CompileTimeVerificationFunction(VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	VPhysXAggregateData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferSave(const VPhysXAggregateData_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferLoad(VPhysXAggregateData_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferSave_VPhysXAggregateData_t(const VPhysXAggregateData_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferLoad_VPhysXAggregateData_t(VPhysXAggregateData_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:318 */
	void ~VPhysXAggregateData_t(VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:321 */
	uint32 GetChecksum(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:322 */
	int GetBoneCount(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:323 */
	const char* GetBoneName(const VPhysXAggregateData_t* , int);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:324 */
	int FindBodyPartByHash(const VPhysXAggregateData_t* , uint);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:325 */
	int GetPartCount(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:327 */
	uint32 GetSurfacePropertyHash(const VPhysXAggregateData_t* , const RnShapeDesc_t& );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:328 */
	VPhysXCollisionAttributes_t GetCollisionProperty(const VPhysXAggregateData_t* , const RnShapeDesc_t& );
	uint16 m_nFlags; /* 0 2 */
	uint16 m_nRefCounter; /* 2 2 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_bonesHash; /* 8 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_boneNames; /* 40 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_indexNames; /* 72 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_indexHash; /* 104 32 */
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_bindPose; /* 136 32 */
	CUtlVector<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> > m_parts; /* 168 32 */
	CUtlVector<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> > m_constraints2; /* 200 32 */
	CUtlVector<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> > m_joints; /* 232 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_boneParents; /* 264 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_surfacePropertyHashes; /* 296 32 */
	CUtlVector<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> > m_collisionAttributes; /* 328 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_debugPartNames; /* 360 32 */
	CUtlString m_embeddedKeyvalues; /* 392 8 */
};

// <00D5D26F> ../public/vphysx/vphysx_collisionmesh_resource.h:305
// member functions: 21
// member variables: 15
// static member variable: 1
// struct size: 400
struct VPhysXAggregateData_t {
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	VPhysXAggregateData_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void Schema_CompileTimeVerificationFunction(VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	VPhysXAggregateData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferSave(const VPhysXAggregateData_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferLoad(VPhysXAggregateData_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferSave_VPhysXAggregateData_t(const VPhysXAggregateData_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferLoad_VPhysXAggregateData_t(VPhysXAggregateData_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:318 */
	void ~VPhysXAggregateData_t(VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:321 */
	uint32 GetChecksum(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:322 */
	int GetBoneCount(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:323 */
	const char* GetBoneName(const VPhysXAggregateData_t* , int);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:324 */
	int FindBodyPartByHash(const VPhysXAggregateData_t* , uint);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:325 */
	int GetPartCount(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:327 */
	uint32 GetSurfacePropertyHash(const VPhysXAggregateData_t* , const RnShapeDesc_t& );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:328 */
	VPhysXCollisionAttributes_t GetCollisionProperty(const VPhysXAggregateData_t* , const RnShapeDesc_t& );
	uint16 m_nFlags; /* 0 2 */
	uint16 m_nRefCounter; /* 2 2 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_bonesHash; /* 8 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_boneNames; /* 40 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_indexNames; /* 72 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_indexHash; /* 104 32 */
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_bindPose; /* 136 32 */
	CUtlVector<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> > m_parts; /* 168 32 */
	CUtlVector<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> > m_constraints2; /* 200 32 */
	CUtlVector<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> > m_joints; /* 232 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_boneParents; /* 264 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_surfacePropertyHashes; /* 296 32 */
	CUtlVector<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> > m_collisionAttributes; /* 328 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_debugPartNames; /* 360 32 */
	CUtlString m_embeddedKeyvalues; /* 392 8 */
};

// <0506CFE4> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:305
// member functions: 23
// member variables: 15
// static member variable: 1
// struct size: 400
struct VPhysXAggregateData_t {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:310 */
	enum VPhysXFlagEnum_t {
		FLAG_IS_POLYSOUP_GEOMETRY = 1,
		FLAG_LEVEL_COLLISION = 16,
		FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 32,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	VPhysXAggregateData_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void Schema_CompileTimeVerificationFunction(VPhysXAggregateData_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXAggregateData_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	VPhysXAggregateData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferSave(const VPhysXAggregateData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferLoad(VPhysXAggregateData_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferSave_VPhysXAggregateData_t(const VPhysXAggregateData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferLoad_VPhysXAggregateData_t(VPhysXAggregateData_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:318 */
	void ~VPhysXAggregateData_t(VPhysXAggregateData_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:321 */
	uint32 GetChecksum(const VPhysXAggregateData_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:322 */
	int GetBoneCount(const VPhysXAggregateData_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:323 */
	const char* GetBoneName(const VPhysXAggregateData_t* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:324 */
	int FindBodyPartByHash(const VPhysXAggregateData_t* , uint);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:325 */
	int GetPartCount(const VPhysXAggregateData_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:327 */
	uint32 GetSurfacePropertyHash(const VPhysXAggregateData_t* , const RnShapeDesc_t& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:328 */
	VPhysXCollisionAttributes_t GetCollisionProperty(const VPhysXAggregateData_t* , const RnShapeDesc_t& );
	uint16 m_nFlags; /* 0 2 */
	uint16 m_nRefCounter; /* 2 2 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_bonesHash; /* 8 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_boneNames; /* 40 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_indexNames; /* 72 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_indexHash; /* 104 32 */
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_bindPose; /* 136 32 */
	CUtlVector<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> > m_parts; /* 168 32 */
	CUtlVector<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> > m_constraints2; /* 200 32 */
	CUtlVector<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> > m_joints; /* 232 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_boneParents; /* 264 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_surfacePropertyHashes; /* 296 32 */
	CUtlVector<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> > m_collisionAttributes; /* 328 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_debugPartNames; /* 360 32 */
	CUtlString m_embeddedKeyvalues; /* 392 8 */
	void VPhysXAggregateData_t(VPhysXAggregateData_t* );
	VPhysXAggregateData_t& operator=(VPhysXAggregateData_t* , const VPhysXAggregateData_t& );
};

// <063E6B73> ../public/vphysx/vphysx_collisionmesh_resource.h:305
// member functions: 22
// member variables: 15
// static member variable: 1
// struct size: 400
struct VPhysXAggregateData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	VPhysXAggregateData_t* Schema_MarkHelperFn(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	void Schema_CompileTimeVerificationFunction(VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:307 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	VPhysXAggregateData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferSave(const VPhysXAggregateData_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferLoad(VPhysXAggregateData_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferSave_VPhysXAggregateData_t(const VPhysXAggregateData_t* , CKV3TransferSaveContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:308 */
	void KV3TransferLoad_VPhysXAggregateData_t(VPhysXAggregateData_t* , CKV3TransferLoadContext* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:318 */
	void ~VPhysXAggregateData_t(VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:321 */
	uint32 GetChecksum(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:322 */
	int GetBoneCount(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:323 */
	const char* GetBoneName(const VPhysXAggregateData_t* , int);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:324 */
	int FindBodyPartByHash(const VPhysXAggregateData_t* , uint);
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:325 */
	int GetPartCount(const VPhysXAggregateData_t* );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:327 */
	uint32 GetSurfacePropertyHash(const VPhysXAggregateData_t* , const RnShapeDesc_t& );
	/* ../public/vphysx/vphysx_collisionmesh_resource.h:328 */
	VPhysXCollisionAttributes_t GetCollisionProperty(const VPhysXAggregateData_t* , const RnShapeDesc_t& );
	uint16 m_nFlags; /* 0 2 */
	uint16 m_nRefCounter; /* 2 2 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_bonesHash; /* 8 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_boneNames; /* 40 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_indexNames; /* 72 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_indexHash; /* 104 32 */
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_bindPose; /* 136 32 */
	CUtlVector<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> > m_parts; /* 168 32 */
	CUtlVector<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> > m_constraints2; /* 200 32 */
	CUtlVector<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> > m_joints; /* 232 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_boneParents; /* 264 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_surfacePropertyHashes; /* 296 32 */
	CUtlVector<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> > m_collisionAttributes; /* 328 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_debugPartNames; /* 360 32 */
	CUtlString m_embeddedKeyvalues; /* 392 8 */
	void VPhysXAggregateData_t(VPhysXAggregateData_t* );
};

// <050CD639> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysx/vphysx_collisionmesh_resource.h:307
inline void VPhysXAggregateData_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <00D74EFC> ../public/vphysx/vphysx_collisionmesh_resource.h:308
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <064DEEFB> ../public/vphysx/vphysx_collisionmesh_resource.h:318
// variables: 5
// function calls: 148
void VPhysXAggregateData_t::~VPhysXAggregateData_t()
{
	CUtlString::~CUtlString(); // 320
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 320
	{
		int i; // 1721
		CUtlMemory<VPhysXCollisionAttributes_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::Element(
			int i);  // 1723
		{
			int i; // 1721
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1723
			CUtlString::~CUtlString(); // 1526
			Destruct<CUtlString>(CUtlString* pMemory); // 1723
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
		CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlString, int>::Purge(); // 903
		CUtlMemory<CUtlString, int>::Purge(); // 1799
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
		ValidateAlignment<CUtlString>(void); // 508
		CUtlMemory<CUtlString, int>::Purge(); // 510
		CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 98
		VPhysXCollisionAttributes_t::~VPhysXCollisionAttributes_t(); // 1526
		Destruct<VPhysXCollisionAttributes_t>(VPhysXCollisionAttributes_t* pMemory); // 1723
	}
	CUtlVectorBase<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VPhysXCollisionAttributes_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VPhysXCollisionAttributes_t, int>::Purge(); // 903
	CUtlMemory<VPhysXCollisionAttributes_t, int>::Purge(); // 1799
	CUtlVectorBase<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::Purge(); // 560
	ValidateAlignment<VPhysXCollisionAttributes_t>(void); // 508
	CUtlMemory<VPhysXCollisionAttributes_t, int>::Purge(); // 510
	CUtlMemory<VPhysXCollisionAttributes_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VPhysXCollisionAttributes_t, CUtlMemory<VPhysXCollisionAttributes_t, int> >::~CUtlVector(); // 320
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 320
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 320
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VPhysXJoint_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VPhysXJoint_t, int>::Purge(); // 903
	CUtlMemory<VPhysXJoint_t, int>::Purge(); // 1799
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::Purge(); // 560
	ValidateAlignment<VPhysXJoint_t>(void); // 508
	CUtlMemory<VPhysXJoint_t, int>::Purge(); // 510
	CUtlMemory<VPhysXJoint_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::~CUtlVector(); // 320
	CUtlVectorBase<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VPhysXConstraint2_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VPhysXConstraint2_t, int>::Purge(); // 903
	CUtlMemory<VPhysXConstraint2_t, int>::Purge(); // 1799
	CUtlVectorBase<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::Purge(); // 560
	ValidateAlignment<VPhysXConstraint2_t>(void); // 508
	CUtlMemory<VPhysXConstraint2_t, int>::Purge(); // 510
	CUtlMemory<VPhysXConstraint2_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VPhysXConstraint2_t, CUtlMemory<VPhysXConstraint2_t, int> >::~CUtlVector(); // 320
	{
		int i; // 1721
		CUtlMemory<VPhysXBodyPart_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::Element(
			int i);  // 1723
		VPhysXBodyPart_t::~VPhysXBodyPart_t(); // 1526
		Destruct<VPhysXBodyPart_t>(VPhysXBodyPart_t* pMemory); // 1723
	}
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VPhysXBodyPart_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VPhysXBodyPart_t, int>::Purge(); // 903
	CUtlMemory<VPhysXBodyPart_t, int>::Purge(); // 1799
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::Purge(); // 560
	ValidateAlignment<VPhysXBodyPart_t>(void); // 508
	CUtlMemory<VPhysXBodyPart_t, int>::Purge(); // 510
	CUtlMemory<VPhysXBodyPart_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VPhysXBodyPart_t, CUtlMemory<VPhysXBodyPart_t, int> >::~CUtlVector(); // 320
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveAll(); // 1798
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 560
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVector(); // 320
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 320
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 320
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 320
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 320
} /* size: 912, inline expansions: 118 (3555 bytes) */

// <064DEEE2> ../public/vphysx/vphysx_collisionmesh_resource.h:318
inline void VPhysXAggregateData_t::~VPhysXAggregateData_t()
{
} /* size: 0 */

// <064DEE51> ../public/vphysx/vphysx_collisionmesh_resource.h:420
// variables: 4
inline void VPhysics2ShapeDef_t::SetDesc(const RnShapeDesc_t& that)
{
	{
		int i; // 422
	}
	{
		int i; // 426
	}
	{
		int i; // 430
	}
	{
		int i; // 434
	}
} /* size: 0 */

