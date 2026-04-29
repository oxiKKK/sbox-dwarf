
//
// ./ik/iksolver_ccd.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <0171260D> ./ik/iksolver_ccd.h:15
// member functions: 4
// member variables: 3
// class size: 32
class CIKSolver_CCD {
	/* ./ik/iksolver_ccd.h:18 */
	void CIKSolver_CCD(CIKSolver_CCD* , IPoseAccessor* , const VectorAligned& , const CIKChainData_t* );
	/* ./ik/iksolver_ccd.h:24 */
	void Run(CIKSolver_CCD* , int, float, IAnimationDebugRenderer* );
private:
	VectorAligned m_vTargetMS __attribute__((__aligned__(16))); /* 0 16 */
	IPoseAccessor * m_pAnimPose; /* 16 8 */
	const class CIKChainData_t * m_pIkChain; /* 24 8 */
	void CIKSolver_CCD(class CIKSolver_CCD *, class IPoseAccessor *, const class VectorAligned  &, const class CIKChainData_t  *); /* linkage=_ZN13CIKSolver_CCDC4EP13IPoseAccessorRK13VectorAlignedPK14CIKChainData_t */
	void Run(class CIKSolver_CCD *, int, float, class IAnimationDebugRenderer *); /* linkage=_ZN13CIKSolver_CCD3RunEifP23IAnimationDebugRenderer */
} __attribute__((__aligned__(16)));

// <01716495> ./ik/iksolver_ccd.h:18
void CIKSolver_CCD::CIKSolver_CCD(IPoseAccessor* pAnimPose, const VectorAligned& vTargetMS, const CIKChainData_t* pIkChain)
{
} /* size: 0 */

