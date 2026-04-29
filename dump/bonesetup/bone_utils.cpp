
//
// bonesetup/bone_utils.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//

// <027872A7> bonesetup/bone_utils.cpp:56
// variables: 4
// function calls: 17
void BuildBoneChainPartial(const CModel* pModel, const matrix3x4_t& rootxform, const CTransform* pTransforms, int iBone, matrix3x4_t* pBoneToWorld, CBoneBitList& boneComputed, int iRoot)
{
	matrix3x4_t bonematrix; // 68
	int parent; // 71
	CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1460
	{
	}
	CVarBitVecBase<short unsigned int, 1024>::Base(); // 1461
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Get(
		uint32 bitNum);  // 145
	CBoneBitList::IsBoneMarked(
			int iBone);  // 65
	matrix3x4_t::matrix3x4_t(); // 68
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 208
	TransformMatrix(const CTransform& in,
			matrix3x4_t& out);  // 69
	CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1479
	{
	}
	CVarBitVecBase<short unsigned int, 1024>::Base(); // 1480
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 1480
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Set(
		int bitNum);  // 140
	CBoneBitList::MarkBone(
		int iBone);  // 83
} /* size: 0, variables: 2, inline expansions: 17 (1019 bytes) */

// <027870EC> bonesetup/bone_utils.cpp:87
// variables: 3
// function calls: 2
void Model_CalcBoneToBoneTransform(const CModel* pModel, int inputBoneIndex, int outputBoneIndex, matrix3x4_t& matrixOut)
{
	int nBoneCount; // 89
	matrix3x4a_t* pBindPoseMatrices; // 90
	matrix3x4a_t poseToOutput; // 93
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 93
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

