
//
// public/tier0/utlsoacontainer.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 77
//	classes: 29
//	structs: 2
//

// <00863912> ../public/tier0/utlsoacontainer.h:206
// member functions: 16
// member variables: 2
// class size: 16
class CSOAAttributeIterator {
protected:
	const class CSOAContainer * m_pContainer; /* 0 8 */
	int m_nCurrentIndex; /* 8 4 */
	/* ../public/tier0/utlsoacontainer.h:215 */
	void CSOAAttributeIterator(CSOAAttributeIterator* , const CSOAContainer& );
	/* ../public/tier0/utlsoacontainer.h:217 */
	void CSOAAttributeIterator(CSOAAttributeIterator* );
	/* ../public/tier0/utlsoacontainer.h:219 */
	int AttributeIndex(const CSOAAttributeIterator* );
	/* ../public/tier0/utlsoacontainer.h:221 */
	int operator int(const CSOAAttributeIterator* );
	/* ../public/tier0/utlsoacontainer.h:222 */
	int64 operator int64(const CSOAAttributeIterator* );
	/* ../public/tier0/utlsoacontainer.h:224 */
	bool operator bool(const CSOAAttributeIterator* );
	/* ../public/tier0/utlsoacontainer.h:229 */
	void Next(CSOAAttributeIterator* );
	/* ../public/tier0/utlsoacontainer.h:231 */
	void operator++(CSOAAttributeIterator* , int);
	void CSOAAttributeIterator(class CSOAAttributeIterator *, const class CSOAContainer  &); /* linkage=_ZN21CSOAAttributeIteratorC4ERK13CSOAContainer */
	void CSOAAttributeIterator(class CSOAAttributeIterator *); /* linkage=_ZN21CSOAAttributeIteratorC4Ev */
	int AttributeIndex(const class CSOAAttributeIterator  *); /* linkage=_ZNK21CSOAAttributeIterator14AttributeIndexEv */
	int operator int(const class CSOAAttributeIterator  *); /* linkage=_ZNK21CSOAAttributeIteratorcviEv */
	int64 operator int64(const class CSOAAttributeIterator  *); /* linkage=_ZNK21CSOAAttributeIteratorcvxEv */
	bool operator bool(const class CSOAAttributeIterator  *); /* linkage=_ZNK21CSOAAttributeIteratorcvbEv */
	void Next(class CSOAAttributeIterator *); /* linkage=_ZN21CSOAAttributeIterator4NextEv */
	void operator++(class CSOAAttributeIterator *, int); /* linkage=_ZN21CSOAAttributeIteratorppEi */
};

// <044FFB1B> ../public/tier0/utlsoacontainer.h:217
void CSOAAttributeIterator::CSOAAttributeIterator()
{
} /* size: 0 */

// <044FFB02> ../public/tier0/utlsoacontainer.h:217
inline void CSOAAttributeIterator::CSOAAttributeIterator()
{
} /* size: 0 */

// <04703A5D> ../public/tier0/utlsoacontainer.h:219
inline void CSOAAttributeIterator::AttributeIndex()
{
} /* size: 0 */

// <04703A44> ../public/tier0/utlsoacontainer.h:221
inline void operator CSOAAttributeIterator::int()
{
} /* size: 0 */

// <04703A2B> ../public/tier0/utlsoacontainer.h:224
inline void operator CSOAAttributeIterator::bool()
{
} /* size: 0 */

// <01B5B1AB> ../public/tier0/utlsoacontainer.h:231
inline void CSOAAttributeIterator::operator++(int)
{
} /* size: 0 */

// <046B171B> ../public/tier0/utlsoacontainer.h:242
// member functions: 6
// member variable: 1
// class size: 16
class CSOAMaskedAttributeIterator<15> : public CSOAAttributeIterator {
public:
	/* class CSOAAttributeIterator <ancestor>; */ /* 0 16 */
	/* ../public/tier0/utlsoacontainer.h:247 */
	void operator++(CSOAMaskedAttributeIterator<15>* , int);
	/* ../public/tier0/utlsoacontainer.h:249 */
	void CSOAMaskedAttributeIterator(CSOAMaskedAttributeIterator<15>* , const CSOAContainer& );
	/* ../public/tier0/utlsoacontainer.h:257 */
	void Next(CSOAMaskedAttributeIterator<15>* );
	void operator++(class CSOAMaskedAttributeIterator<15> *, int); /* linkage=_ZN27CSOAMaskedAttributeIteratorILi15EEppEi */
	void CSOAMaskedAttributeIterator(class CSOAMaskedAttributeIterator<15> *, const class CSOAContainer  &); /* linkage=_ZN27CSOAMaskedAttributeIteratorILi15EEC4ERK13CSOAContainer */
	/* <4704c46> ../public/tier0/utlsoacontainer.h:257 */
	void Next(class CSOAMaskedAttributeIterator<15> *); /* linkage=_ZN27CSOAMaskedAttributeIteratorILi15EE4NextEv */
};

// <046B17AA> ../public/tier0/utlsoacontainer.h:242
// member functions: 3
// member variable: 1
// class size: 16
class CSOAMaskedAttributeIterator<7> : public CSOAAttributeIterator {
public:
	/* class CSOAAttributeIterator <ancestor>; */ /* 0 16 */
	/* ../public/tier0/utlsoacontainer.h:247 */
	void operator++(CSOAMaskedAttributeIterator<7>* , int);
	/* ../public/tier0/utlsoacontainer.h:249 */
	void CSOAMaskedAttributeIterator(CSOAMaskedAttributeIterator<7>* , const CSOAContainer& );
	/* ../public/tier0/utlsoacontainer.h:257 */
	void Next(CSOAMaskedAttributeIterator<7>* );
};

// <00ED557D> ../public/tier0/utlsoacontainer.h:247
inline void CSOAMaskedAttributeIterator<7>::operator++(int)
{
} /* size: 0 */

// <00ECF2EC> ../public/tier0/utlsoacontainer.h:247
inline void CSOAMaskedAttributeIterator<15>::operator++(int)
{
} /* size: 0 */

// <046DCE4D> ../public/tier0/utlsoacontainer.h:249
// variable: 1
// function calls: 5
void CSOAMaskedAttributeIterator<7>::CSOAMaskedAttributeIterator(const CSOAContainer& src)
{
	CSOAAttributeIterator::CSOAAttributeIterator(
				const CSOAContainer& src);  // 249
	CSOAAttributeIterator::operator bool(); // 251
	{
		int i; // 1647
		CSOAContainer::HasAllocatedMemory(
					int nAttrIdx);  // 1649
	}
	CSOAAttributeIterator::Next(); // 261
	CSOAMaskedAttributeIterator<7>::Next(); // 253
} /* size: 157, inline expansions: 4 (159 bytes) */

// <046DCE28> ../public/tier0/utlsoacontainer.h:249
inline void CSOAMaskedAttributeIterator<7>::CSOAMaskedAttributeIterator(const CSOAContainer& src)
{
} /* size: 0 */

// <046D6BBC> ../public/tier0/utlsoacontainer.h:249
// variable: 1
// function calls: 5
void CSOAMaskedAttributeIterator<15>::CSOAMaskedAttributeIterator(const CSOAContainer& src)
{
	CSOAAttributeIterator::CSOAAttributeIterator(
				const CSOAContainer& src);  // 249
	CSOAAttributeIterator::operator bool(); // 251
	{
		int i; // 1647
		CSOAContainer::HasAllocatedMemory(
					int nAttrIdx);  // 1649
	}
	CSOAAttributeIterator::Next(); // 261
	CSOAMaskedAttributeIterator<15>::Next(); // 253
} /* size: 157, inline expansions: 4 (159 bytes) */

// <046D6B97> ../public/tier0/utlsoacontainer.h:249
inline void CSOAMaskedAttributeIterator<15>::CSOAMaskedAttributeIterator(const CSOAContainer& src)
{
} /* size: 0 */

// <04704C46> ../public/tier0/utlsoacontainer.h:257
// variable: 1
// function calls: 3
void CSOAMaskedAttributeIterator<15>::Next()
{
	CSOAAttributeIterator::operator bool(); // 259
	{
		int i; // 1647
		CSOAContainer::HasAllocatedMemory(
					int nAttrIdx);  // 1649
	}
	CSOAAttributeIterator::Next(); // 261
} /* size: 105, inline expansions: 2 (75 bytes) */

// <046CA7E7> ../public/tier0/utlsoacontainer.h:257
inline void CSOAMaskedAttributeIterator<7>::Next()
{
} /* size: 0 */

// <046CA7CE> ../public/tier0/utlsoacontainer.h:257
inline void CSOAMaskedAttributeIterator<15>::Next()
{
} /* size: 0 */

// <008650A9> ../public/tier0/utlsoacontainer.h:271
// member variables: 4
// struct size: 16
struct WeightedSampleDescriptor_t {
	int m_nColumn; /* 0 4 */
	int m_nRow; /* 4 4 */
	int m_nSlice; /* 8 4 */
	float m_flWeight; /* 12 4 */
};

// <008650F8> ../public/tier0/utlsoacontainer.h:284
// member function: 1
// member variables: 5
// struct size: 40
struct WeightedComparisonDescriptor_t : public WeightedSampleDescriptor_t {
public:
	/* struct WeightedSampleDescriptor_t <ancestor>; */ /* 0 16 */
	int m_nAttributeIndex; /* 16 4 */
	float m_flComparisonValue; /* 20 4 */
	const class CSOAContainer * m_pSrcDataToSearch; /* 24 8 */
	int m_nCoordinateShift; /* 32 4 */
	/* ../public/tier0/utlsoacontainer.h:291 */
	void WeightedComparisonDescriptor_t(WeightedComparisonDescriptor_t* );
};

// <00863A44> ../public/tier0/utlsoacontainer.h:309
// member functions: 272
// member variables: 15
// class size: 1,464
class CSOAContainer {
	/* ../public/tier0/utlsoacontainer.h:316 */
	void CSOAContainer(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:324 */
	void CSOAContainer(CSOAContainer* , int, int, int, ...);
	/* ../public/tier0/utlsoacontainer.h:325 */
	void ~CSOAContainer(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:341 */
	void SetAttributeType(CSOAContainer* , int, EAttributeDataType, bool);
	/* ../public/tier0/utlsoacontainer.h:343 */
	EAttributeDataType GetAttributeType(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:349 */
	void EnsureDataType(CSOAContainer* , int, EAttributeDataType);
	/* ../public/tier0/utlsoacontainer.h:354 */
	void SetAttributeDataTypesFrom(CSOAContainer* , const CSOAContainer& );
	/* ../public/tier0/utlsoacontainer.h:357 */
	void AssertDataType(const CSOAContainer* , int, EAttributeDataType);
	/* ../public/tier0/utlsoacontainer.h:366 */
	size_t ElementSizeInBytes(EAttributeDataType);
	/* ../public/tier0/utlsoacontainer.h:369 */
	void Purge(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:371 */
	void AllocateData(CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:372 */
	void PurgeData(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:375 */
	bool HasAllocatedMemory(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:378 */
	int NumCols(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:379 */
	int NumRows(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:380 */
	int NumSlices(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:382 */
	int Width(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:383 */
	int Height(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:384 */
	int Depth(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:388 */
	int PaddedWidth(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:390 */
	IntAABB_t Bounds(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:393 */
	int NumQuadsPerRow(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:394 */
	int Count(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:395 */
	int NumElements(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:397 */
	bool IsValidCoordinate(const CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:402 */
	bool IsValidCoordinate(const CSOAContainer* , IntVector3D);
	/* ../public/tier0/utlsoacontainer.h:409 */
	size_t RowToRowStep(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:411 */
	const void* ConstRowPtr(const CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:416 */
	FourVectors* ElementPointer4V(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:417 */
	size_t ItemByteStride(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:423 */
	CSOAAttributeIterator FirstAttr(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:430 */
	int AllocateAttributeIndex(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:436 */
	float& FloatValue(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:444 */
	float& FloatValue(const CSOAContainer* , int, IntVector3D);
	/* ../public/tier0/utlsoacontainer.h:450 */
	float& FloatValueClamped(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:456 */
	float& FloatValueWrapped(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:462 */
	float& FloatValueWrappedOrClamped(const CSOAContainer* , int, int, int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:484 */
	void* & PointerValue(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:490 */
	uint64* & U64Value(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:498 */
	Vector VectorValue(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:507 */
	void SetVectorValue(const CSOAContainer* , int, const Vector& , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:516 */
	float InterpolatedPixel(const CSOAContainer* , float, float, int, bool);
	/* ../public/tier0/utlsoacontainer.h:519 */
	float InterpolatedVoxel(const CSOAContainer* , float, float, float, int);
	/* ../public/tier0/utlsoacontainer.h:522 */
	void CalculateBilinearWeights(const CSOAContainer* , float, float, WeightedSampleDescriptor_t* , bool);
	/* ../public/tier0/utlsoacontainer.h:525 */
	float Tex2D(const CSOAContainer* , float, float, int, bool);
	/* ../public/tier0/utlsoacontainer.h:530 */
	CSOAAttributeReference operator[](CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:533 */
	CSOAAttributeReference Attr(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:539 */
	void CopyAttrFrom(CSOAContainer* , const CSOAContainer& , int, int);
	/* ../public/tier0/utlsoacontainer.h:542 */
	void CopyAttrToAttr(CSOAContainer* , int, int);
	/* ../public/tier0/utlsoacontainer.h:545 */
	void CopyRegionFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int, int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:550 */
	void CopyRegionFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:556 */
	void MoveDataFrom(CSOAContainer* , CSOAContainer& );
	/* ../public/tier0/utlsoacontainer.h:559 */
	void Crop(CSOAContainer* , int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:562 */
	void RandomizeAttribute(const CSOAContainer* , int, float, float);
	/* ../public/tier0/utlsoacontainer.h:565 */
	void FillAttr(CSOAContainer* , int, const Vector& );
	/* ../public/tier0/utlsoacontainer.h:568 */
	void FillAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:593 */
	void GenerateUnsignedDistanceField(CSOAContainer* , int, IntAABB_t, float, int, int);
	/* ../public/tier0/utlsoacontainer.h:594 */
	void GenerateSignedDistanceField(CSOAContainer* , int, IntAABB_t, float, int, int);
	/* ../public/tier0/utlsoacontainer.h:601 */
	void ReinitializeSignedDistanceField(CSOAContainer* , int, IntAABB_t, float, bool);
	/* ../public/tier0/utlsoacontainer.h:605 */
	void GaussianBlurUsingSweeping(CSOAContainer* , int, IntAABB_t, float, int);
	/* ../public/tier0/utlsoacontainer.h:609 */
	void FillGutterPixels(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:615 */
	void IntegrateVectorField(CSOAContainer* , IntAABB_t, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:619 */
	void FillAttrWithInterpolatedValues(const CSOAContainer* , int, float, float, float, float);
	/* ../public/tier0/utlsoacontainer.h:620 */
	void FillAttrWithInterpolatedValues(const CSOAContainer* , int, Vector, Vector, const Vector& , const Vector& );
	/* ../public/tier0/utlsoacontainer.h:624 */
	void PackScalarAttributesToVectorAttribute(CSOAContainer* , CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:631 */
	void UnPackVectorAttributeToScalarAttributes(CSOAContainer* , CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:642 */
	void MulAttr(CSOAContainer* , const CSOAContainer& , int, int);
	/* ../public/tier0/utlsoacontainer.h:649 */
	void MulAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:655 */
	void AddToAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:661 */
	void MaxAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:667 */
	void MinAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:672 */
	void ClampAttr(CSOAContainer* , int, float, float);
	/* ../public/tier0/utlsoacontainer.h:678 */
	void NormalizeAttr(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:684 */
	void Normalize3ComponentVectorInAttributes(CSOAContainer* , int, int, int, Vector, bool, bool);
	/* ../public/tier0/utlsoacontainer.h:692 */
	void ScaleAndBiasAttributeToBeBetweenZeroAndOne(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:695 */
	void MultiplyVectorAttribute(CSOAContainer* , CSOAContainer* , int, const Vector& , int);
	/* ../public/tier0/utlsoacontainer.h:700 */
	void SrgbGammaToLinear(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:705 */
	void SrgbGammaToLinearPartial(CSOAContainer* , CSOAContainer* , int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:707 */
	void SrgbLinearToGamma(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:708 */
	void SrgbLinearToGammaPartial(CSOAContainer* , CSOAContainer* , int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:723 */
	float SumAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:726 */
	float AverageFloatAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:729 */
	float MaxAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:732 */
	float MinAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:735 */
	void FindLargestMagnitudeVector(CSOAContainer* , int, int* , int* , int* );
	/* ../public/tier0/utlsoacontainer.h:738 */
	void FindIndicesOfClosestPoint(const CSOAContainer* , int, const Vector& , int* , int* , int* );
	/* ../public/tier0/utlsoacontainer.h:743 */
	void AddGaussianSRBF(CSOAContainer* , float, Vector, int, int);
	/* ../public/tier0/utlsoacontainer.h:746 */
	void AddGaussianSRBF(CSOAContainer* , Vector, Vector, int, int);
	/* ../public/tier0/utlsoacontainer.h:754 */
	void ResampleAttribute(CSOAContainer* , CSOAContainer& , int, int);
	/* ../public/tier0/utlsoacontainer.h:762 */
	void FilterFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:765 */
	void FilterFrom(CSOAContainer* , int, int, int, int, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:777 */
	void QuarterSizeAttrWithBoxFilter(CSOAContainer* , const CSOAContainer& , int, int, CCallQueue* );
	/* ../public/tier0/utlsoacontainer.h:784 */
	void Normalized3x3SobelEdgeFilterFrom(CSOAContainer* , const CSOAContainer& , int, int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:791 */
	void CalculateGradientX(CSOAContainer* , const CSOAContainer& , int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:792 */
	void CalculateGradientY(CSOAContainer* , const CSOAContainer& , int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:797 */
	void GaussianBlur(CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:802 */
	void GaussianBlurFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:807 */
	void FilterInX(CSOAContainer* , int, IntAABB_t, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:809 */
	void FilterInY(CSOAContainer* , int, IntAABB_t, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:811 */
	void FilterInZ(CSOAContainer* , int, IntAABB_t, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:816 */
	void CalculateStandardDeviationFromMoments(CSOAContainer* , int, int, const CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:819 */
	void KMeansQuantization(CSOAContainer* , const int* , int, KMeansQuantizedValue* , int, IKMeansErrorMetric* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:835 */
	void GenerateDistanceField(CSOAContainer* , int, int, int, Rect3D_t* );
	/* ../public/tier0/utlsoacontainer.h:843 */
	int FindClosestMatchingRegion(const WeightedComparisonDescriptor_t* , int, int, IntVector3D* , float* , bool, int);
	/* ../public/tier0/utlsoacontainer.h:850 */
	void ComputeSelfShadowedBumpmapFromHeight(CSOAContainer* , const CSOAContainer* , int, Vector, float, const Vector* , int, const int* , int, bool);
	/* ../public/tier0/utlsoacontainer.h:861 */
	void SetThreadMode(CSOAContainer* , SOAThreadMode_t);
	/* ../public/tier0/utlsoacontainer.h:864 */
	IntAABB_CellRangeReference Indices(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:873 */
	CUtlVector<int, CUtlMemory<int, int> > GetListOfActiveChannels(CSOAContainer* , int);
protected:
	int m_nColumns; /* 0 4 */
	int m_nRows; /* 4 4 */
	int m_nSlices; /* 8 4 */
	int m_nPaddedColumns; /* 12 4 */
	int m_nNumQuadsPerRow; /* 16 4 */
	uint8 * m_pDataMemory; /* 24 8 */
	uint8 * m_pAttributePtrs[32]; /* 32 256 */
	EAttributeDataType m_nDataType[32]; /* 288 128 */
	size_t m_nStrideInBytes[32]; /* 416 256 */
	size_t m_nRowStrideInBytes[32]; /* 672 256 */
	size_t m_nSliceStrideInBytes[32]; /* 928 256 */
	uint32 m_nFieldPresentMask; /* 1184 4 */
	uint8 * m_pConstantDataMemory; /* 1192 8 */
	uint8 * m_pSeparateDataMemory[32]; /* 1200 256 */
	SOAThreadMode_t m_eThreadMode; /* 1456 4 */
	/* ../public/tier0/utlsoacontainer.h:898 */
	void Init(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:918 */
	void UpdateDistanceRow(CSOAContainer* , int, int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:922 */
	void CopyAttrFromPartial(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int);
	/* ../public/tier0/utlsoacontainer.h:923 */
	void FillAttrPartial(CSOAContainer* , int, int, int, int, int, fltx4);
	/* ../public/tier0/utlsoacontainer.h:936 */
	size_t DataMemorySize(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:937 */
	size_t ConstantMemorySize(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:938 */
	size_t AttributeMemorySize(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:939 */
	void AllocateDataMemory(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:940 */
	void AllocateConstantMemory(CSOAContainer* );
	void CSOAContainer(class CSOAContainer *); /* linkage=_ZN13CSOAContainerC4Ev */
	void CSOAContainer(class CSOAContainer *, int, int, int, ...); /* linkage=_ZN13CSOAContainerC4Eiiiz */
	void ~CSOAContainer(class CSOAContainer *); /* linkage=_ZN13CSOAContainerD4Ev */
	void SetAttributeType(class CSOAContainer *, int, enum EAttributeDataType, bool); /* linkage=_ZN13CSOAContainer16SetAttributeTypeEi18EAttributeDataTypeb */
	enum EAttributeDataType GetAttributeType(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer16GetAttributeTypeEi */
	void EnsureDataType(class CSOAContainer *, int, enum EAttributeDataType); /* linkage=_ZN13CSOAContainer14EnsureDataTypeEi18EAttributeDataType */
	/* <450ef53> tier0_perproject/utlsoacontainer.cpp:165 */
	void SetAttributeDataTypesFrom(class CSOAContainer *, const class CSOAContainer  &); /* linkage=_ZN13CSOAContainer25SetAttributeDataTypesFromERKS_ */
	void AssertDataType(const class CSOAContainer  *, int, enum EAttributeDataType); /* linkage=_ZNK13CSOAContainer14AssertDataTypeEi18EAttributeDataType */
	size_t ElementSizeInBytes(enum EAttributeDataType); /* linkage=_ZN13CSOAContainer18ElementSizeInBytesE18EAttributeDataType */
	/* <450efbf> tier0_perproject/utlsoacontainer.cpp:79 */
	void Purge(class CSOAContainer *); /* linkage=_ZN13CSOAContainer5PurgeEv */
	void AllocateData(class CSOAContainer *, int, int, int); /* linkage=_ZN13CSOAContainer12AllocateDataEiii */
	void PurgeData(class CSOAContainer *); /* linkage=_ZN13CSOAContainer9PurgeDataEv */
	bool HasAllocatedMemory(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer18HasAllocatedMemoryEi */
	int NumCols(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer7NumColsEv */
	int NumRows(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer7NumRowsEv */
	int NumSlices(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer9NumSlicesEv */
	int Width(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer5WidthEv */
	int Height(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer6HeightEv */
	int Depth(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer5DepthEv */
	int PaddedWidth(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer11PaddedWidthEv */
	class IntAABB_t Bounds(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer6BoundsEv */
	int NumQuadsPerRow(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer14NumQuadsPerRowEv */
	int Count(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer5CountEv */
	int NumElements(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer11NumElementsEv */
	bool IsValidCoordinate(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer17IsValidCoordinateEiii */
	bool IsValidCoordinate(const class CSOAContainer  *, class IntVector3D); /* linkage=_ZNK13CSOAContainer17IsValidCoordinateE11IntVector3D */
	size_t RowToRowStep(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer12RowToRowStepEi */
	const void  * ConstRowPtr(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer11ConstRowPtrEiii */
	class FourVectors * ElementPointer4V(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer16ElementPointer4VEiiii */
	size_t ItemByteStride(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer14ItemByteStrideEi */
	/* <450ee9c> tier0_perproject/utlsoacontainer.cpp:97 */
	class CSOAAttributeIterator FirstAttr(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer9FirstAttrEv */
	/* <450ee1e> tier0_perproject/utlsoacontainer.cpp:86 */
	int AllocateAttributeIndex(class CSOAContainer *); /* linkage=_ZN13CSOAContainer22AllocateAttributeIndexEv */
	float & FloatValue(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer10FloatValueEiiii */
	float & FloatValue(const class CSOAContainer  *, int, class IntVector3D); /* linkage=_ZNK13CSOAContainer10FloatValueEi11IntVector3D */
	float & FloatValueClamped(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer17FloatValueClampedEiiii */
	float & FloatValueWrapped(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer17FloatValueWrappedEiiii */
	float & FloatValueWrappedOrClamped(const class CSOAContainer  *, int, int, int, int, bool); /* linkage=_ZNK13CSOAContainer26FloatValueWrappedOrClampedEiiiib */
	void * & PointerValue(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer12PointerValueEiiii */
	uint64 * & U64Value(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer8U64ValueEiiii */
	class Vector VectorValue(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer11VectorValueEiiii */
	void SetVectorValue(const class CSOAContainer  *, int, const class Vector  &, int, int, int); /* linkage=_ZNK13CSOAContainer14SetVectorValueEiRK6Vectoriii */
	float InterpolatedPixel(const class CSOAContainer  *, float, float, int, bool); /* linkage=_ZNK13CSOAContainer17InterpolatedPixelEffib */
	float InterpolatedVoxel(const class CSOAContainer  *, float, float, float, int); /* linkage=_ZNK13CSOAContainer17InterpolatedVoxelEfffi */
	void CalculateBilinearWeights(const class CSOAContainer  *, float, float, class WeightedSampleDescriptor_t *, bool); /* linkage=_ZNK13CSOAContainer24CalculateBilinearWeightsEffP26WeightedSampleDescriptor_tb */
	float Tex2D(const class CSOAContainer  *, float, float, int, bool); /* linkage=_ZNK13CSOAContainer5Tex2DEffib */
	class CSOAAttributeReference operator[](class CSOAContainer *, int); /* linkage=_ZN13CSOAContainerixEi */
	class CSOAAttributeReference Attr(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer4AttrEi */
	void CopyAttrFrom(class CSOAContainer *, const class CSOAContainer  &, int, int); /* linkage=_ZN13CSOAContainer12CopyAttrFromERKS_ii */
	void CopyAttrToAttr(class CSOAContainer *, int, int); /* linkage=_ZN13CSOAContainer14CopyAttrToAttrEii */
	void CopyRegionFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer14CopyRegionFromERKS_iiiiiiiiiii */
	void CopyRegionFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer14CopyRegionFromERKS_iiiiiiiii */
	void MoveDataFrom(class CSOAContainer *, class CSOAContainer &); /* linkage=_ZN13CSOAContainer12MoveDataFromERS_ */
	void Crop(class CSOAContainer *, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer4CropEiiiiii */
	void RandomizeAttribute(const class CSOAContainer  *, int, float, float); /* linkage=_ZNK13CSOAContainer18RandomizeAttributeEiff */
	void FillAttr(class CSOAContainer *, int, const class Vector  &); /* linkage=_ZN13CSOAContainer8FillAttrEiRK6Vector */
	void FillAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer8FillAttrEif */
	void GenerateUnsignedDistanceField(class CSOAContainer *, int, class IntAABB_t, float, int, int); /* linkage=_ZN13CSOAContainer29GenerateUnsignedDistanceFieldEi9IntAABB_tfii */
	void GenerateSignedDistanceField(class CSOAContainer *, int, class IntAABB_t, float, int, int); /* linkage=_ZN13CSOAContainer27GenerateSignedDistanceFieldEi9IntAABB_tfii */
	void ReinitializeSignedDistanceField(class CSOAContainer *, int, class IntAABB_t, float, bool); /* linkage=_ZN13CSOAContainer31ReinitializeSignedDistanceFieldEi9IntAABB_tfb */
	void GaussianBlurUsingSweeping(class CSOAContainer *, int, class IntAABB_t, float, int); /* linkage=_ZN13CSOAContainer25GaussianBlurUsingSweepingEi9IntAABB_tfi */
	void FillGutterPixels(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer16FillGutterPixelsEi */
	void IntegrateVectorField(class CSOAContainer *, class IntAABB_t, int, int, int, int, int); /* linkage=_ZN13CSOAContainer20IntegrateVectorFieldE9IntAABB_tiiiii */
	void FillAttrWithInterpolatedValues(const class CSOAContainer  *, int, float, float, float, float); /* linkage=_ZNK13CSOAContainer30FillAttrWithInterpolatedValuesEiffff */
	void FillAttrWithInterpolatedValues(const class CSOAContainer  *, int, class Vector, class Vector, const class Vector  &, const class Vector  &); /* linkage=_ZNK13CSOAContainer30FillAttrWithInterpolatedValuesEi6VectorS0_RKS0_S2_ */
	void PackScalarAttributesToVectorAttribute(class CSOAContainer *, class CSOAContainer *, int, int, int, int); /* linkage=_ZN13CSOAContainer37PackScalarAttributesToVectorAttributeEPS_iiii */
	void UnPackVectorAttributeToScalarAttributes(class CSOAContainer *, class CSOAContainer *, int, int, int, int); /* linkage=_ZN13CSOAContainer39UnPackVectorAttributeToScalarAttributesEPS_iiii */
	void MulAttr(class CSOAContainer *, const class CSOAContainer  &, int, int); /* linkage=_ZN13CSOAContainer7MulAttrERKS_ii */
	void MulAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer7MulAttrEif */
	void AddToAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer9AddToAttrEif */
	void MaxAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer7MaxAttrEif */
	void MinAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer7MinAttrEif */
	void ClampAttr(class CSOAContainer *, int, float, float); /* linkage=_ZN13CSOAContainer9ClampAttrEiff */
	void NormalizeAttr(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer13NormalizeAttrEi */
	void Normalize3ComponentVectorInAttributes(class CSOAContainer *, int, int, int, class Vector, bool, bool); /* linkage=_ZN13CSOAContainer37Normalize3ComponentVectorInAttributesEiii6Vectorbb */
	void ScaleAndBiasAttributeToBeBetweenZeroAndOne(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer42ScaleAndBiasAttributeToBeBetweenZeroAndOneEi */
	void MultiplyVectorAttribute(class CSOAContainer *, class CSOAContainer *, int, const class Vector  &, int); /* linkage=_ZN13CSOAContainer23MultiplyVectorAttributeEPS_iRK6Vectori */
	void SrgbGammaToLinear(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer17SrgbGammaToLinearEi */
	void SrgbGammaToLinearPartial(class CSOAContainer *, class CSOAContainer *, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer24SrgbGammaToLinearPartialEPS_iiiiii */
	void SrgbLinearToGamma(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer17SrgbLinearToGammaEi */
	void SrgbLinearToGammaPartial(class CSOAContainer *, class CSOAContainer *, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer24SrgbLinearToGammaPartialEPS_iiiiii */
	/* <450f323> tier0_perproject/utlsoacontainer.cpp:894 */
	float SumAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer17SumAttributeValueEi */
	float AverageFloatAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer26AverageFloatAttributeValueEi */
	/* <450f37d> tier0_perproject/utlsoacontainer.cpp:911 */
	float MaxAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer17MaxAttributeValueEi */
	/* <450f3d7> tier0_perproject/utlsoacontainer.cpp:916 */
	float MinAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer17MinAttributeValueEi */
	void FindLargestMagnitudeVector(class CSOAContainer *, int, int *, int *, int *); /* linkage=_ZN13CSOAContainer26FindLargestMagnitudeVectorEiPiS0_S0_ */
	void FindIndicesOfClosestPoint(const class CSOAContainer  *, int, const class Vector  &, int *, int *, int *); /* linkage=_ZNK13CSOAContainer25FindIndicesOfClosestPointEiRK6VectorPiS3_S3_ */
	void AddGaussianSRBF(class CSOAContainer *, float, class Vector, int, int); /* linkage=_ZN13CSOAContainer15AddGaussianSRBFEf6Vectorii */
	void AddGaussianSRBF(class CSOAContainer *, class Vector, class Vector, int, int); /* linkage=_ZN13CSOAContainer15AddGaussianSRBFE6VectorS0_ii */
	void ResampleAttribute(class CSOAContainer *, class CSOAContainer &, int, int); /* linkage=_ZN13CSOAContainer17ResampleAttributeERS_ii */
	void FilterFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int, const float  *, bool); /* linkage=_ZN13CSOAContainer10FilterFromERKS_iiiiiPKfb */
	void FilterFrom(class CSOAContainer *, int, int, int, int, int, const float  *, bool); /* linkage=_ZN13CSOAContainer10FilterFromEiiiiiPKfb */
	void QuarterSizeAttrWithBoxFilter(class CSOAContainer *, const class CSOAContainer  &, int, int, class CCallQueue *); /* linkage=_ZN13CSOAContainer28QuarterSizeAttrWithBoxFilterERKS_iiP10CCallQueue */
	void Normalized3x3SobelEdgeFilterFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, bool); /* linkage=_ZN13CSOAContainer32Normalized3x3SobelEdgeFilterFromERKS_iiib */
	void CalculateGradientX(class CSOAContainer *, const class CSOAContainer  &, int, int, bool); /* linkage=_ZN13CSOAContainer18CalculateGradientXERKS_iib */
	void CalculateGradientY(class CSOAContainer *, const class CSOAContainer  &, int, int, bool); /* linkage=_ZN13CSOAContainer18CalculateGradientYERKS_iib */
	void GaussianBlur(class CSOAContainer *, int, int, int, int); /* linkage=_ZN13CSOAContainer12GaussianBlurEiiii */
	void GaussianBlurFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int); /* linkage=_ZN13CSOAContainer16GaussianBlurFromERKS_iiiii */
	void FilterInX(class CSOAContainer *, int, class IntAABB_t, int, const float  *, bool); /* linkage=_ZN13CSOAContainer9FilterInXEi9IntAABB_tiPKfb */
	void FilterInY(class CSOAContainer *, int, class IntAABB_t, int, const float  *, bool); /* linkage=_ZN13CSOAContainer9FilterInYEi9IntAABB_tiPKfb */
	void FilterInZ(class CSOAContainer *, int, class IntAABB_t, int, const float  *, bool); /* linkage=_ZN13CSOAContainer9FilterInZEi9IntAABB_tiPKfb */
	void CalculateStandardDeviationFromMoments(class CSOAContainer *, int, int, const class CSOAContainer  *, int, float); /* linkage=_ZN13CSOAContainer37CalculateStandardDeviationFromMomentsEiiPKS_if */
	void KMeansQuantization(class CSOAContainer *, const int  *, int, class KMeansQuantizedValue *, int, class IKMeansErrorMetric *, int, int, int); /* linkage=_ZN13CSOAContainer18KMeansQuantizationEPKiiP20KMeansQuantizedValueiP18IKMeansErrorMetriciii */
	void GenerateDistanceField(class CSOAContainer *, int, int, int, class Rect3D_t *); /* linkage=_ZN13CSOAContainer21GenerateDistanceFieldEiiiP8Rect3D_t */
	int FindClosestMatchingRegion(const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, bool, int); /* linkage=_ZN13CSOAContainer25FindClosestMatchingRegionEPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfbi */
	void ComputeSelfShadowedBumpmapFromHeight(class CSOAContainer *, const class CSOAContainer  *, int, class Vector, float, const class Vector  *, int, const int  *, int, bool); /* linkage=_ZN13CSOAContainer36ComputeSelfShadowedBumpmapFromHeightEPKS_i6VectorfPKS2_iPKiib */
	/* <450f286> tier0_perproject/utlsoacontainer.cpp:310 */
	void SetThreadMode(class CSOAContainer *, enum SOAThreadMode_t); /* linkage=_ZN13CSOAContainer13SetThreadModeE15SOAThreadMode_t */
	class IntAABB_CellRangeReference Indices(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer7IndicesEv */
	class CUtlVector<int, CUtlMemory<int, int> > GetListOfActiveChannels(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer23GetListOfActiveChannelsEi */
	void Init(class CSOAContainer *); /* linkage=_ZN13CSOAContainer4InitEv */
	void UpdateDistanceRow(class CSOAContainer *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer17UpdateDistanceRowEiiiiiii */
	void CopyAttrFromPartial(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer19CopyAttrFromPartialEiiiiPKS_ii */
	/* <450114f> tier0_perproject/utlsoacontainer.cpp:657 */
	void FillAttrPartial(class CSOAContainer *, int, int, int, int, int, fltx4); /* linkage=_ZN13CSOAContainer15FillAttrPartialEiiiiiDv4_f */
	/* <450f174> tier0_perproject/utlsoacontainer.cpp:264 */
	size_t DataMemorySize(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer14DataMemorySizeEv */
	/* <450f201> tier0_perproject/utlsoacontainer.cpp:286 */
	size_t ConstantMemorySize(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer18ConstantMemorySizeEv */
	/* <450f136> tier0_perproject/utlsoacontainer.cpp:253 */
	size_t AttributeMemorySize(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer19AttributeMemorySizeEi */
	void AllocateDataMemory(class CSOAContainer *); /* linkage=_ZN13CSOAContainer18AllocateDataMemoryEv */
	void AllocateConstantMemory(class CSOAContainer *); /* linkage=_ZN13CSOAContainer22AllocateConstantMemoryEv */
	float * ElementPointer<float>(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer14ElementPointerIfEEPT_iiii */
	float * RowPtr<__vector(4) float>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrIDv4_fEEPT_iii */
	void ApplyBinaryFunctionToAttr<MulSIMD<> >(class CSOAContainer *, int, const fltx4  &); /* linkage=_ZN13CSOAContainer25ApplyBinaryFunctionToAttrIXadL_Z7MulSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEviS5_ */
	class FourVectors * RowPtr<FourVectors>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrI11FourVectorsEEPT_iii */
	float * RowPtr<float>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrIfEEPT_iii */
	void FastSweepPass<false, false, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb0ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, false, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb0ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, false, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb0ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, false, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb0ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, true, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb1ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, true, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb1ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, true, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb1ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, true, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb1ELb0EEEvii11IntVector3DS1_S1_fi */
	void QuarterSizeAttrWithBoxFilterPartial<false, false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb0ELb0EEEviiiiPKS_ii */
	void QuarterSizeAttrWithBoxFilterPartial<false, true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb0ELb1EEEviiiiPKS_ii */
	void QuarterSizeAttrWithBoxFilterPartial<true, false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb1ELb0EEEviiiiPKS_ii */
	void QuarterSizeAttrWithBoxFilterPartial<true, true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb1ELb1EEEviiiiPKS_ii */
	void FastSweepPass<false, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb1EEEvii11IntVector3DS1_S1_fi */
	void FindClosestMatchingRegionInternal<false, true>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb0ELb1EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void FindClosestMatchingRegionInternal<false, false>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb0ELb0EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void FindClosestMatchingRegionInternal<true, true>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb1ELb1EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void FindClosestMatchingRegionInternal<true, false>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb1ELb0EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void QuarterSizeAttrWithBoxFilterPartial<false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb0EEEviiiiPKS_ii */
	/* <450fc69> tier0_perproject/utlsoacontainer.cpp:1849 */
	void QuarterSizeAttrWithBoxFilterPartial<true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb1EEEviiiiPKS_ii */
	void Normalized3x3SobelEdgeFilterPartial<false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int); /* linkage=_ZN13CSOAContainer35Normalized3x3SobelEdgeFilterPartialILb0EEEviiiiPKS_iii */
	void Normalized3x3SobelEdgeFilterPartial<true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int); /* linkage=_ZN13CSOAContainer35Normalized3x3SobelEdgeFilterPartialILb1EEEviiiiPKS_iii */
	void FilterFromPartial<false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int, int, int, const float  *); /* linkage=_ZN13CSOAContainer17FilterFromPartialILb0EEEviiiiPKS_iiiiiPKf */
	void FilterFromPartial<true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int, int, int, const float  *); /* linkage=_ZN13CSOAContainer17FilterFromPartialILb1EEEviiiiPKS_iiiiiPKf */
	float ReduceAttr<MinSIMD<> >(const class CSOAContainer  *, int, const fltx4  &); /* linkage=_ZNK13CSOAContainer10ReduceAttrIXadL_Z7MinSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEfiS5_ */
	float ReduceAttr<MaxSIMD<> >(const class CSOAContainer  *, int, const fltx4  &); /* linkage=_ZNK13CSOAContainer10ReduceAttrIXadL_Z7MaxSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEfiS5_ */
	float ReduceAttr<AddSIMD<> >(const class CSOAContainer  *, int, const fltx4  &); /* linkage=_ZNK13CSOAContainer10ReduceAttrIXadL_Z7AddSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEfiS5_ */
	void Normalize3ComponentVectorInAttributesPartial<false>(class CSOAContainer *, int, int, int, int, int, int, int, class Vector, bool); /* linkage=_ZN13CSOAContainer44Normalize3ComponentVectorInAttributesPartialILb0EEEviiiiiii6Vectorb */
	void Normalize3ComponentVectorInAttributesPartial<true>(class CSOAContainer *, int, int, int, int, int, int, int, class Vector, bool); /* linkage=_ZN13CSOAContainer44Normalize3ComponentVectorInAttributesPartialILb1EEEviiiiiii6Vectorb */
	unsigned char * RowPtr<unsigned char>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrIhEEPT_iii */
	void ApplyBinaryFunctionToAttr<AddSIMD<> >(class CSOAContainer *, int, const fltx4  &); /* linkage=_ZN13CSOAContainer25ApplyBinaryFunctionToAttrIXadL_Z7AddSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEviS5_ */
};

// <01142E16> ../public/tier0/utlsoacontainer.h:309
// member functions: 273
// member variables: 15
// class size: 1,464
class CSOAContainer {
	/* ../public/tier0/utlsoacontainer.h:316 */
	void CSOAContainer(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:324 */
	void CSOAContainer(CSOAContainer* , int, int, int, ...);
	/* ../public/tier0/utlsoacontainer.h:325 */
	void ~CSOAContainer(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:341 */
	void SetAttributeType(CSOAContainer* , int, EAttributeDataType, bool);
	/* ../public/tier0/utlsoacontainer.h:343 */
	EAttributeDataType GetAttributeType(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:349 */
	void EnsureDataType(CSOAContainer* , int, EAttributeDataType);
	/* ../public/tier0/utlsoacontainer.h:354 */
	void SetAttributeDataTypesFrom(CSOAContainer* , const CSOAContainer& );
	/* ../public/tier0/utlsoacontainer.h:357 */
	void AssertDataType(const CSOAContainer* , int, EAttributeDataType);
	/* ../public/tier0/utlsoacontainer.h:366 */
	size_t ElementSizeInBytes(EAttributeDataType);
	/* ../public/tier0/utlsoacontainer.h:369 */
	void Purge(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:371 */
	void AllocateData(CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:372 */
	void PurgeData(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:375 */
	bool HasAllocatedMemory(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:378 */
	int NumCols(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:379 */
	int NumRows(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:380 */
	int NumSlices(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:382 */
	int Width(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:383 */
	int Height(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:384 */
	int Depth(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:388 */
	int PaddedWidth(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:390 */
	IntAABB_t Bounds(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:393 */
	int NumQuadsPerRow(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:394 */
	int Count(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:395 */
	int NumElements(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:397 */
	bool IsValidCoordinate(const CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:402 */
	bool IsValidCoordinate(const CSOAContainer* , IntVector3D);
	/* ../public/tier0/utlsoacontainer.h:409 */
	size_t RowToRowStep(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:411 */
	const void* ConstRowPtr(const CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:416 */
	FourVectors* ElementPointer4V(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:417 */
	size_t ItemByteStride(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:423 */
	CSOAAttributeIterator FirstAttr(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:430 */
	int AllocateAttributeIndex(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:436 */
	float& FloatValue(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:444 */
	float& FloatValue(const CSOAContainer* , int, IntVector3D);
	/* ../public/tier0/utlsoacontainer.h:450 */
	float& FloatValueClamped(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:456 */
	float& FloatValueWrapped(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:462 */
	float& FloatValueWrappedOrClamped(const CSOAContainer* , int, int, int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:484 */
	void* & PointerValue(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:490 */
	uint64* & U64Value(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:498 */
	Vector VectorValue(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:507 */
	void SetVectorValue(const CSOAContainer* , int, const Vector& , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:516 */
	float InterpolatedPixel(const CSOAContainer* , float, float, int, bool);
	/* ../public/tier0/utlsoacontainer.h:519 */
	float InterpolatedVoxel(const CSOAContainer* , float, float, float, int);
	/* ../public/tier0/utlsoacontainer.h:522 */
	void CalculateBilinearWeights(const CSOAContainer* , float, float, WeightedSampleDescriptor_t* , bool);
	/* ../public/tier0/utlsoacontainer.h:525 */
	float Tex2D(const CSOAContainer* , float, float, int, bool);
	/* ../public/tier0/utlsoacontainer.h:530 */
	CSOAAttributeReference operator[](CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:533 */
	CSOAAttributeReference Attr(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:539 */
	void CopyAttrFrom(CSOAContainer* , const CSOAContainer& , int, int);
	/* ../public/tier0/utlsoacontainer.h:542 */
	void CopyAttrToAttr(CSOAContainer* , int, int);
	/* ../public/tier0/utlsoacontainer.h:545 */
	void CopyRegionFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int, int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:550 */
	void CopyRegionFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:556 */
	void MoveDataFrom(CSOAContainer* , CSOAContainer& );
	/* ../public/tier0/utlsoacontainer.h:559 */
	void Crop(CSOAContainer* , int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:562 */
	void RandomizeAttribute(const CSOAContainer* , int, float, float);
	/* ../public/tier0/utlsoacontainer.h:565 */
	void FillAttr(CSOAContainer* , int, const Vector& );
	/* ../public/tier0/utlsoacontainer.h:568 */
	void FillAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:593 */
	void GenerateUnsignedDistanceField(CSOAContainer* , int, IntAABB_t, float, int, int);
	/* ../public/tier0/utlsoacontainer.h:594 */
	void GenerateSignedDistanceField(CSOAContainer* , int, IntAABB_t, float, int, int);
	/* ../public/tier0/utlsoacontainer.h:601 */
	void ReinitializeSignedDistanceField(CSOAContainer* , int, IntAABB_t, float, bool);
	/* ../public/tier0/utlsoacontainer.h:605 */
	void GaussianBlurUsingSweeping(CSOAContainer* , int, IntAABB_t, float, int);
	/* ../public/tier0/utlsoacontainer.h:609 */
	void FillGutterPixels(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:615 */
	void IntegrateVectorField(CSOAContainer* , IntAABB_t, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:619 */
	void FillAttrWithInterpolatedValues(const CSOAContainer* , int, float, float, float, float);
	/* ../public/tier0/utlsoacontainer.h:620 */
	void FillAttrWithInterpolatedValues(const CSOAContainer* , int, Vector, Vector, const Vector& , const Vector& );
	/* ../public/tier0/utlsoacontainer.h:624 */
	void PackScalarAttributesToVectorAttribute(CSOAContainer* , CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:631 */
	void UnPackVectorAttributeToScalarAttributes(CSOAContainer* , CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:642 */
	void MulAttr(CSOAContainer* , const CSOAContainer& , int, int);
	/* ../public/tier0/utlsoacontainer.h:649 */
	void MulAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:655 */
	void AddToAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:661 */
	void MaxAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:667 */
	void MinAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:672 */
	void ClampAttr(CSOAContainer* , int, float, float);
	/* ../public/tier0/utlsoacontainer.h:678 */
	void NormalizeAttr(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:684 */
	void Normalize3ComponentVectorInAttributes(CSOAContainer* , int, int, int, Vector, bool, bool);
	/* ../public/tier0/utlsoacontainer.h:692 */
	void ScaleAndBiasAttributeToBeBetweenZeroAndOne(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:695 */
	void MultiplyVectorAttribute(CSOAContainer* , CSOAContainer* , int, const Vector& , int);
	/* ../public/tier0/utlsoacontainer.h:700 */
	void SrgbGammaToLinear(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:705 */
	void SrgbGammaToLinearPartial(CSOAContainer* , CSOAContainer* , int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:707 */
	void SrgbLinearToGamma(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:708 */
	void SrgbLinearToGammaPartial(CSOAContainer* , CSOAContainer* , int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:723 */
	float SumAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:726 */
	float AverageFloatAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:729 */
	float MaxAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:732 */
	float MinAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:735 */
	void FindLargestMagnitudeVector(CSOAContainer* , int, int* , int* , int* );
	/* ../public/tier0/utlsoacontainer.h:738 */
	void FindIndicesOfClosestPoint(const CSOAContainer* , int, const Vector& , int* , int* , int* );
	/* ../public/tier0/utlsoacontainer.h:743 */
	void AddGaussianSRBF(CSOAContainer* , float, Vector, int, int);
	/* ../public/tier0/utlsoacontainer.h:746 */
	void AddGaussianSRBF(CSOAContainer* , Vector, Vector, int, int);
	/* ../public/tier0/utlsoacontainer.h:754 */
	void ResampleAttribute(CSOAContainer* , CSOAContainer& , int, int);
	/* ../public/tier0/utlsoacontainer.h:762 */
	void FilterFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:765 */
	void FilterFrom(CSOAContainer* , int, int, int, int, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:777 */
	void QuarterSizeAttrWithBoxFilter(CSOAContainer* , const CSOAContainer& , int, int, CCallQueue* );
	/* ../public/tier0/utlsoacontainer.h:784 */
	void Normalized3x3SobelEdgeFilterFrom(CSOAContainer* , const CSOAContainer& , int, int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:791 */
	void CalculateGradientX(CSOAContainer* , const CSOAContainer& , int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:792 */
	void CalculateGradientY(CSOAContainer* , const CSOAContainer& , int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:797 */
	void GaussianBlur(CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:802 */
	void GaussianBlurFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:807 */
	void FilterInX(CSOAContainer* , int, IntAABB_t, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:809 */
	void FilterInY(CSOAContainer* , int, IntAABB_t, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:811 */
	void FilterInZ(CSOAContainer* , int, IntAABB_t, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:816 */
	void CalculateStandardDeviationFromMoments(CSOAContainer* , int, int, const CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:819 */
	void KMeansQuantization(CSOAContainer* , const int* , int, KMeansQuantizedValue* , int, IKMeansErrorMetric* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:835 */
	void GenerateDistanceField(CSOAContainer* , int, int, int, Rect3D_t* );
	/* ../public/tier0/utlsoacontainer.h:843 */
	int FindClosestMatchingRegion(const WeightedComparisonDescriptor_t* , int, int, IntVector3D* , float* , bool, int);
	/* ../public/tier0/utlsoacontainer.h:850 */
	void ComputeSelfShadowedBumpmapFromHeight(CSOAContainer* , const CSOAContainer* , int, Vector, float, const Vector* , int, const int* , int, bool);
	/* ../public/tier0/utlsoacontainer.h:861 */
	void SetThreadMode(CSOAContainer* , SOAThreadMode_t);
	/* ../public/tier0/utlsoacontainer.h:864 */
	IntAABB_CellRangeReference Indices(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:873 */
	CUtlVector<int, CUtlMemory<int, int> > GetListOfActiveChannels(CSOAContainer* , int);
protected:
	int m_nColumns; /* 0 4 */
	int m_nRows; /* 4 4 */
	int m_nSlices; /* 8 4 */
	int m_nPaddedColumns; /* 12 4 */
	int m_nNumQuadsPerRow; /* 16 4 */
	uint8 * m_pDataMemory; /* 24 8 */
	uint8 * m_pAttributePtrs[32]; /* 32 256 */
	EAttributeDataType m_nDataType[32]; /* 288 128 */
	size_t m_nStrideInBytes[32]; /* 416 256 */
	size_t m_nRowStrideInBytes[32]; /* 672 256 */
	size_t m_nSliceStrideInBytes[32]; /* 928 256 */
	uint32 m_nFieldPresentMask; /* 1184 4 */
	uint8 * m_pConstantDataMemory; /* 1192 8 */
	uint8 * m_pSeparateDataMemory[32]; /* 1200 256 */
	SOAThreadMode_t m_eThreadMode; /* 1456 4 */
	/* ../public/tier0/utlsoacontainer.h:898 */
	void Init(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:918 */
	void UpdateDistanceRow(CSOAContainer* , int, int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:922 */
	void CopyAttrFromPartial(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int);
	/* ../public/tier0/utlsoacontainer.h:923 */
	void FillAttrPartial(CSOAContainer* , int, int, int, int, int, fltx4);
	/* ../public/tier0/utlsoacontainer.h:936 */
	size_t DataMemorySize(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:937 */
	size_t ConstantMemorySize(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:938 */
	size_t AttributeMemorySize(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:939 */
	void AllocateDataMemory(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:940 */
	void AllocateConstantMemory(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:1573 */
	float* ElementPointer<float>(const CSOAContainer* , int, int, int, int);
	void CSOAContainer(class CSOAContainer *); /* linkage=_ZN13CSOAContainerC4Ev */
	void CSOAContainer(class CSOAContainer *, int, int, int, ...); /* linkage=_ZN13CSOAContainerC4Eiiiz */
	void ~CSOAContainer(class CSOAContainer *); /* linkage=_ZN13CSOAContainerD4Ev */
	void SetAttributeType(class CSOAContainer *, int, enum EAttributeDataType, bool); /* linkage=_ZN13CSOAContainer16SetAttributeTypeEi18EAttributeDataTypeb */
	enum EAttributeDataType GetAttributeType(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer16GetAttributeTypeEi */
	void EnsureDataType(class CSOAContainer *, int, enum EAttributeDataType); /* linkage=_ZN13CSOAContainer14EnsureDataTypeEi18EAttributeDataType */
	/* <450ef53> tier0_perproject/utlsoacontainer.cpp:165 */
	void SetAttributeDataTypesFrom(class CSOAContainer *, const class CSOAContainer  &); /* linkage=_ZN13CSOAContainer25SetAttributeDataTypesFromERKS_ */
	void AssertDataType(const class CSOAContainer  *, int, enum EAttributeDataType); /* linkage=_ZNK13CSOAContainer14AssertDataTypeEi18EAttributeDataType */
	size_t ElementSizeInBytes(enum EAttributeDataType); /* linkage=_ZN13CSOAContainer18ElementSizeInBytesE18EAttributeDataType */
	/* <450efbf> tier0_perproject/utlsoacontainer.cpp:79 */
	void Purge(class CSOAContainer *); /* linkage=_ZN13CSOAContainer5PurgeEv */
	void AllocateData(class CSOAContainer *, int, int, int); /* linkage=_ZN13CSOAContainer12AllocateDataEiii */
	void PurgeData(class CSOAContainer *); /* linkage=_ZN13CSOAContainer9PurgeDataEv */
	bool HasAllocatedMemory(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer18HasAllocatedMemoryEi */
	int NumCols(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer7NumColsEv */
	int NumRows(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer7NumRowsEv */
	int NumSlices(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer9NumSlicesEv */
	int Width(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer5WidthEv */
	int Height(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer6HeightEv */
	int Depth(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer5DepthEv */
	int PaddedWidth(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer11PaddedWidthEv */
	class IntAABB_t Bounds(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer6BoundsEv */
	int NumQuadsPerRow(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer14NumQuadsPerRowEv */
	int Count(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer5CountEv */
	int NumElements(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer11NumElementsEv */
	bool IsValidCoordinate(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer17IsValidCoordinateEiii */
	bool IsValidCoordinate(const class CSOAContainer  *, class IntVector3D); /* linkage=_ZNK13CSOAContainer17IsValidCoordinateE11IntVector3D */
	size_t RowToRowStep(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer12RowToRowStepEi */
	const void  * ConstRowPtr(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer11ConstRowPtrEiii */
	class FourVectors * ElementPointer4V(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer16ElementPointer4VEiiii */
	size_t ItemByteStride(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer14ItemByteStrideEi */
	/* <450ee9c> tier0_perproject/utlsoacontainer.cpp:97 */
	class CSOAAttributeIterator FirstAttr(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer9FirstAttrEv */
	/* <450ee1e> tier0_perproject/utlsoacontainer.cpp:86 */
	int AllocateAttributeIndex(class CSOAContainer *); /* linkage=_ZN13CSOAContainer22AllocateAttributeIndexEv */
	float & FloatValue(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer10FloatValueEiiii */
	float & FloatValue(const class CSOAContainer  *, int, class IntVector3D); /* linkage=_ZNK13CSOAContainer10FloatValueEi11IntVector3D */
	float & FloatValueClamped(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer17FloatValueClampedEiiii */
	float & FloatValueWrapped(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer17FloatValueWrappedEiiii */
	float & FloatValueWrappedOrClamped(const class CSOAContainer  *, int, int, int, int, bool); /* linkage=_ZNK13CSOAContainer26FloatValueWrappedOrClampedEiiiib */
	void * & PointerValue(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer12PointerValueEiiii */
	uint64 * & U64Value(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer8U64ValueEiiii */
	class Vector VectorValue(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer11VectorValueEiiii */
	void SetVectorValue(const class CSOAContainer  *, int, const class Vector  &, int, int, int); /* linkage=_ZNK13CSOAContainer14SetVectorValueEiRK6Vectoriii */
	float InterpolatedPixel(const class CSOAContainer  *, float, float, int, bool); /* linkage=_ZNK13CSOAContainer17InterpolatedPixelEffib */
	float InterpolatedVoxel(const class CSOAContainer  *, float, float, float, int); /* linkage=_ZNK13CSOAContainer17InterpolatedVoxelEfffi */
	void CalculateBilinearWeights(const class CSOAContainer  *, float, float, class WeightedSampleDescriptor_t *, bool); /* linkage=_ZNK13CSOAContainer24CalculateBilinearWeightsEffP26WeightedSampleDescriptor_tb */
	float Tex2D(const class CSOAContainer  *, float, float, int, bool); /* linkage=_ZNK13CSOAContainer5Tex2DEffib */
	class CSOAAttributeReference operator[](class CSOAContainer *, int); /* linkage=_ZN13CSOAContainerixEi */
	class CSOAAttributeReference Attr(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer4AttrEi */
	void CopyAttrFrom(class CSOAContainer *, const class CSOAContainer  &, int, int); /* linkage=_ZN13CSOAContainer12CopyAttrFromERKS_ii */
	void CopyAttrToAttr(class CSOAContainer *, int, int); /* linkage=_ZN13CSOAContainer14CopyAttrToAttrEii */
	void CopyRegionFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer14CopyRegionFromERKS_iiiiiiiiiii */
	void CopyRegionFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer14CopyRegionFromERKS_iiiiiiiii */
	void MoveDataFrom(class CSOAContainer *, class CSOAContainer &); /* linkage=_ZN13CSOAContainer12MoveDataFromERS_ */
	void Crop(class CSOAContainer *, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer4CropEiiiiii */
	void RandomizeAttribute(const class CSOAContainer  *, int, float, float); /* linkage=_ZNK13CSOAContainer18RandomizeAttributeEiff */
	void FillAttr(class CSOAContainer *, int, const class Vector  &); /* linkage=_ZN13CSOAContainer8FillAttrEiRK6Vector */
	void FillAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer8FillAttrEif */
	void GenerateUnsignedDistanceField(class CSOAContainer *, int, class IntAABB_t, float, int, int); /* linkage=_ZN13CSOAContainer29GenerateUnsignedDistanceFieldEi9IntAABB_tfii */
	void GenerateSignedDistanceField(class CSOAContainer *, int, class IntAABB_t, float, int, int); /* linkage=_ZN13CSOAContainer27GenerateSignedDistanceFieldEi9IntAABB_tfii */
	void ReinitializeSignedDistanceField(class CSOAContainer *, int, class IntAABB_t, float, bool); /* linkage=_ZN13CSOAContainer31ReinitializeSignedDistanceFieldEi9IntAABB_tfb */
	void GaussianBlurUsingSweeping(class CSOAContainer *, int, class IntAABB_t, float, int); /* linkage=_ZN13CSOAContainer25GaussianBlurUsingSweepingEi9IntAABB_tfi */
	void FillGutterPixels(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer16FillGutterPixelsEi */
	void IntegrateVectorField(class CSOAContainer *, class IntAABB_t, int, int, int, int, int); /* linkage=_ZN13CSOAContainer20IntegrateVectorFieldE9IntAABB_tiiiii */
	void FillAttrWithInterpolatedValues(const class CSOAContainer  *, int, float, float, float, float); /* linkage=_ZNK13CSOAContainer30FillAttrWithInterpolatedValuesEiffff */
	void FillAttrWithInterpolatedValues(const class CSOAContainer  *, int, class Vector, class Vector, const class Vector  &, const class Vector  &); /* linkage=_ZNK13CSOAContainer30FillAttrWithInterpolatedValuesEi6VectorS0_RKS0_S2_ */
	void PackScalarAttributesToVectorAttribute(class CSOAContainer *, class CSOAContainer *, int, int, int, int); /* linkage=_ZN13CSOAContainer37PackScalarAttributesToVectorAttributeEPS_iiii */
	void UnPackVectorAttributeToScalarAttributes(class CSOAContainer *, class CSOAContainer *, int, int, int, int); /* linkage=_ZN13CSOAContainer39UnPackVectorAttributeToScalarAttributesEPS_iiii */
	void MulAttr(class CSOAContainer *, const class CSOAContainer  &, int, int); /* linkage=_ZN13CSOAContainer7MulAttrERKS_ii */
	void MulAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer7MulAttrEif */
	void AddToAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer9AddToAttrEif */
	void MaxAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer7MaxAttrEif */
	void MinAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer7MinAttrEif */
	void ClampAttr(class CSOAContainer *, int, float, float); /* linkage=_ZN13CSOAContainer9ClampAttrEiff */
	void NormalizeAttr(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer13NormalizeAttrEi */
	void Normalize3ComponentVectorInAttributes(class CSOAContainer *, int, int, int, class Vector, bool, bool); /* linkage=_ZN13CSOAContainer37Normalize3ComponentVectorInAttributesEiii6Vectorbb */
	void ScaleAndBiasAttributeToBeBetweenZeroAndOne(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer42ScaleAndBiasAttributeToBeBetweenZeroAndOneEi */
	void MultiplyVectorAttribute(class CSOAContainer *, class CSOAContainer *, int, const class Vector  &, int); /* linkage=_ZN13CSOAContainer23MultiplyVectorAttributeEPS_iRK6Vectori */
	void SrgbGammaToLinear(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer17SrgbGammaToLinearEi */
	void SrgbGammaToLinearPartial(class CSOAContainer *, class CSOAContainer *, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer24SrgbGammaToLinearPartialEPS_iiiiii */
	void SrgbLinearToGamma(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer17SrgbLinearToGammaEi */
	void SrgbLinearToGammaPartial(class CSOAContainer *, class CSOAContainer *, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer24SrgbLinearToGammaPartialEPS_iiiiii */
	/* <450f323> tier0_perproject/utlsoacontainer.cpp:894 */
	float SumAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer17SumAttributeValueEi */
	float AverageFloatAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer26AverageFloatAttributeValueEi */
	/* <450f37d> tier0_perproject/utlsoacontainer.cpp:911 */
	float MaxAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer17MaxAttributeValueEi */
	/* <450f3d7> tier0_perproject/utlsoacontainer.cpp:916 */
	float MinAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer17MinAttributeValueEi */
	void FindLargestMagnitudeVector(class CSOAContainer *, int, int *, int *, int *); /* linkage=_ZN13CSOAContainer26FindLargestMagnitudeVectorEiPiS0_S0_ */
	void FindIndicesOfClosestPoint(const class CSOAContainer  *, int, const class Vector  &, int *, int *, int *); /* linkage=_ZNK13CSOAContainer25FindIndicesOfClosestPointEiRK6VectorPiS3_S3_ */
	void AddGaussianSRBF(class CSOAContainer *, float, class Vector, int, int); /* linkage=_ZN13CSOAContainer15AddGaussianSRBFEf6Vectorii */
	void AddGaussianSRBF(class CSOAContainer *, class Vector, class Vector, int, int); /* linkage=_ZN13CSOAContainer15AddGaussianSRBFE6VectorS0_ii */
	void ResampleAttribute(class CSOAContainer *, class CSOAContainer &, int, int); /* linkage=_ZN13CSOAContainer17ResampleAttributeERS_ii */
	void FilterFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int, const float  *, bool); /* linkage=_ZN13CSOAContainer10FilterFromERKS_iiiiiPKfb */
	void FilterFrom(class CSOAContainer *, int, int, int, int, int, const float  *, bool); /* linkage=_ZN13CSOAContainer10FilterFromEiiiiiPKfb */
	void QuarterSizeAttrWithBoxFilter(class CSOAContainer *, const class CSOAContainer  &, int, int, class CCallQueue *); /* linkage=_ZN13CSOAContainer28QuarterSizeAttrWithBoxFilterERKS_iiP10CCallQueue */
	void Normalized3x3SobelEdgeFilterFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, bool); /* linkage=_ZN13CSOAContainer32Normalized3x3SobelEdgeFilterFromERKS_iiib */
	void CalculateGradientX(class CSOAContainer *, const class CSOAContainer  &, int, int, bool); /* linkage=_ZN13CSOAContainer18CalculateGradientXERKS_iib */
	void CalculateGradientY(class CSOAContainer *, const class CSOAContainer  &, int, int, bool); /* linkage=_ZN13CSOAContainer18CalculateGradientYERKS_iib */
	void GaussianBlur(class CSOAContainer *, int, int, int, int); /* linkage=_ZN13CSOAContainer12GaussianBlurEiiii */
	void GaussianBlurFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int); /* linkage=_ZN13CSOAContainer16GaussianBlurFromERKS_iiiii */
	void FilterInX(class CSOAContainer *, int, class IntAABB_t, int, const float  *, bool); /* linkage=_ZN13CSOAContainer9FilterInXEi9IntAABB_tiPKfb */
	void FilterInY(class CSOAContainer *, int, class IntAABB_t, int, const float  *, bool); /* linkage=_ZN13CSOAContainer9FilterInYEi9IntAABB_tiPKfb */
	void FilterInZ(class CSOAContainer *, int, class IntAABB_t, int, const float  *, bool); /* linkage=_ZN13CSOAContainer9FilterInZEi9IntAABB_tiPKfb */
	void CalculateStandardDeviationFromMoments(class CSOAContainer *, int, int, const class CSOAContainer  *, int, float); /* linkage=_ZN13CSOAContainer37CalculateStandardDeviationFromMomentsEiiPKS_if */
	void KMeansQuantization(class CSOAContainer *, const int  *, int, class KMeansQuantizedValue *, int, class IKMeansErrorMetric *, int, int, int); /* linkage=_ZN13CSOAContainer18KMeansQuantizationEPKiiP20KMeansQuantizedValueiP18IKMeansErrorMetriciii */
	void GenerateDistanceField(class CSOAContainer *, int, int, int, class Rect3D_t *); /* linkage=_ZN13CSOAContainer21GenerateDistanceFieldEiiiP8Rect3D_t */
	int FindClosestMatchingRegion(const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, bool, int); /* linkage=_ZN13CSOAContainer25FindClosestMatchingRegionEPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfbi */
	void ComputeSelfShadowedBumpmapFromHeight(class CSOAContainer *, const class CSOAContainer  *, int, class Vector, float, const class Vector  *, int, const int  *, int, bool); /* linkage=_ZN13CSOAContainer36ComputeSelfShadowedBumpmapFromHeightEPKS_i6VectorfPKS2_iPKiib */
	/* <450f286> tier0_perproject/utlsoacontainer.cpp:310 */
	void SetThreadMode(class CSOAContainer *, enum SOAThreadMode_t); /* linkage=_ZN13CSOAContainer13SetThreadModeE15SOAThreadMode_t */
	class IntAABB_CellRangeReference Indices(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer7IndicesEv */
	class CUtlVector<int, CUtlMemory<int, int> > GetListOfActiveChannels(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer23GetListOfActiveChannelsEi */
	void Init(class CSOAContainer *); /* linkage=_ZN13CSOAContainer4InitEv */
	void UpdateDistanceRow(class CSOAContainer *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer17UpdateDistanceRowEiiiiiii */
	void CopyAttrFromPartial(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer19CopyAttrFromPartialEiiiiPKS_ii */
	/* <450114f> tier0_perproject/utlsoacontainer.cpp:657 */
	void FillAttrPartial(class CSOAContainer *, int, int, int, int, int, fltx4); /* linkage=_ZN13CSOAContainer15FillAttrPartialEiiiiiDv4_f */
	/* <450f174> tier0_perproject/utlsoacontainer.cpp:264 */
	size_t DataMemorySize(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer14DataMemorySizeEv */
	/* <450f201> tier0_perproject/utlsoacontainer.cpp:286 */
	size_t ConstantMemorySize(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer18ConstantMemorySizeEv */
	/* <450f136> tier0_perproject/utlsoacontainer.cpp:253 */
	size_t AttributeMemorySize(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer19AttributeMemorySizeEi */
	void AllocateDataMemory(class CSOAContainer *); /* linkage=_ZN13CSOAContainer18AllocateDataMemoryEv */
	void AllocateConstantMemory(class CSOAContainer *); /* linkage=_ZN13CSOAContainer22AllocateConstantMemoryEv */
	float * ElementPointer<float>(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer14ElementPointerIfEEPT_iiii */
	float * RowPtr<__vector(4) float>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrIDv4_fEEPT_iii */
	void ApplyBinaryFunctionToAttr<MulSIMD<> >(class CSOAContainer *, int, const fltx4  &); /* linkage=_ZN13CSOAContainer25ApplyBinaryFunctionToAttrIXadL_Z7MulSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEviS5_ */
	class FourVectors * RowPtr<FourVectors>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrI11FourVectorsEEPT_iii */
	float * RowPtr<float>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrIfEEPT_iii */
	void FastSweepPass<false, false, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb0ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, false, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb0ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, false, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb0ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, false, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb0ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, true, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb1ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, true, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb1ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, true, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb1ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, true, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb1ELb0EEEvii11IntVector3DS1_S1_fi */
	void QuarterSizeAttrWithBoxFilterPartial<false, false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb0ELb0EEEviiiiPKS_ii */
	void QuarterSizeAttrWithBoxFilterPartial<false, true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb0ELb1EEEviiiiPKS_ii */
	void QuarterSizeAttrWithBoxFilterPartial<true, false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb1ELb0EEEviiiiPKS_ii */
	void QuarterSizeAttrWithBoxFilterPartial<true, true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb1ELb1EEEviiiiPKS_ii */
	void FastSweepPass<false, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb1EEEvii11IntVector3DS1_S1_fi */
	void FindClosestMatchingRegionInternal<false, true>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb0ELb1EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void FindClosestMatchingRegionInternal<false, false>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb0ELb0EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void FindClosestMatchingRegionInternal<true, true>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb1ELb1EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void FindClosestMatchingRegionInternal<true, false>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb1ELb0EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void QuarterSizeAttrWithBoxFilterPartial<false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb0EEEviiiiPKS_ii */
	/* <450fc69> tier0_perproject/utlsoacontainer.cpp:1849 */
	void QuarterSizeAttrWithBoxFilterPartial<true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb1EEEviiiiPKS_ii */
	void Normalized3x3SobelEdgeFilterPartial<false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int); /* linkage=_ZN13CSOAContainer35Normalized3x3SobelEdgeFilterPartialILb0EEEviiiiPKS_iii */
	void Normalized3x3SobelEdgeFilterPartial<true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int); /* linkage=_ZN13CSOAContainer35Normalized3x3SobelEdgeFilterPartialILb1EEEviiiiPKS_iii */
	void FilterFromPartial<false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int, int, int, const float  *); /* linkage=_ZN13CSOAContainer17FilterFromPartialILb0EEEviiiiPKS_iiiiiPKf */
	void FilterFromPartial<true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int, int, int, const float  *); /* linkage=_ZN13CSOAContainer17FilterFromPartialILb1EEEviiiiPKS_iiiiiPKf */
	float ReduceAttr<MinSIMD<> >(const class CSOAContainer  *, int, const fltx4  &); /* linkage=_ZNK13CSOAContainer10ReduceAttrIXadL_Z7MinSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEfiS5_ */
	float ReduceAttr<MaxSIMD<> >(const class CSOAContainer  *, int, const fltx4  &); /* linkage=_ZNK13CSOAContainer10ReduceAttrIXadL_Z7MaxSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEfiS5_ */
	float ReduceAttr<AddSIMD<> >(const class CSOAContainer  *, int, const fltx4  &); /* linkage=_ZNK13CSOAContainer10ReduceAttrIXadL_Z7AddSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEfiS5_ */
	void Normalize3ComponentVectorInAttributesPartial<false>(class CSOAContainer *, int, int, int, int, int, int, int, class Vector, bool); /* linkage=_ZN13CSOAContainer44Normalize3ComponentVectorInAttributesPartialILb0EEEviiiiiii6Vectorb */
	void Normalize3ComponentVectorInAttributesPartial<true>(class CSOAContainer *, int, int, int, int, int, int, int, class Vector, bool); /* linkage=_ZN13CSOAContainer44Normalize3ComponentVectorInAttributesPartialILb1EEEviiiiiii6Vectorb */
	unsigned char * RowPtr<unsigned char>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrIhEEPT_iii */
	void ApplyBinaryFunctionToAttr<AddSIMD<> >(class CSOAContainer *, int, const fltx4  &); /* linkage=_ZN13CSOAContainer25ApplyBinaryFunctionToAttrIXadL_Z7AddSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEviS5_ */
};

// <04479BFC> ../public/tier0/utlsoacontainer.h:309
// member functions: 310
// member variables: 15
// class size: 1,464
class CSOAContainer {
	/* ../public/tier0/utlsoacontainer.h:316 */
	void CSOAContainer(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:324 */
	void CSOAContainer(CSOAContainer* , int, int, int, ...);
	/* ../public/tier0/utlsoacontainer.h:325 */
	void ~CSOAContainer(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:341 */
	void SetAttributeType(CSOAContainer* , int, EAttributeDataType, bool);
	/* ../public/tier0/utlsoacontainer.h:343 */
	EAttributeDataType GetAttributeType(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:349 */
	void EnsureDataType(CSOAContainer* , int, EAttributeDataType);
	/* ../public/tier0/utlsoacontainer.h:354 */
	void SetAttributeDataTypesFrom(CSOAContainer* , const CSOAContainer& );
	/* ../public/tier0/utlsoacontainer.h:357 */
	void AssertDataType(const CSOAContainer* , int, EAttributeDataType);
	/* ../public/tier0/utlsoacontainer.h:366 */
	size_t ElementSizeInBytes(EAttributeDataType);
	/* ../public/tier0/utlsoacontainer.h:369 */
	void Purge(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:371 */
	void AllocateData(CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:372 */
	void PurgeData(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:375 */
	bool HasAllocatedMemory(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:378 */
	int NumCols(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:379 */
	int NumRows(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:380 */
	int NumSlices(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:382 */
	int Width(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:383 */
	int Height(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:384 */
	int Depth(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:388 */
	int PaddedWidth(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:390 */
	IntAABB_t Bounds(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:393 */
	int NumQuadsPerRow(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:394 */
	int Count(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:395 */
	int NumElements(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:397 */
	bool IsValidCoordinate(const CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:402 */
	bool IsValidCoordinate(const CSOAContainer* , IntVector3D);
	/* ../public/tier0/utlsoacontainer.h:409 */
	size_t RowToRowStep(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:411 */
	const void* ConstRowPtr(const CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:416 */
	FourVectors* ElementPointer4V(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:417 */
	size_t ItemByteStride(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:423 */
	CSOAAttributeIterator FirstAttr(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:430 */
	int AllocateAttributeIndex(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:436 */
	float& FloatValue(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:444 */
	float& FloatValue(const CSOAContainer* , int, IntVector3D);
	/* ../public/tier0/utlsoacontainer.h:450 */
	float& FloatValueClamped(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:456 */
	float& FloatValueWrapped(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:462 */
	float& FloatValueWrappedOrClamped(const CSOAContainer* , int, int, int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:484 */
	void* & PointerValue(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:490 */
	uint64* & U64Value(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:498 */
	Vector VectorValue(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:507 */
	void SetVectorValue(const CSOAContainer* , int, const Vector& , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:516 */
	float InterpolatedPixel(const CSOAContainer* , float, float, int, bool);
	/* ../public/tier0/utlsoacontainer.h:519 */
	float InterpolatedVoxel(const CSOAContainer* , float, float, float, int);
	/* ../public/tier0/utlsoacontainer.h:522 */
	void CalculateBilinearWeights(const CSOAContainer* , float, float, WeightedSampleDescriptor_t* , bool);
	/* ../public/tier0/utlsoacontainer.h:525 */
	float Tex2D(const CSOAContainer* , float, float, int, bool);
	/* ../public/tier0/utlsoacontainer.h:530 */
	CSOAAttributeReference operator[](CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:533 */
	CSOAAttributeReference Attr(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:539 */
	void CopyAttrFrom(CSOAContainer* , const CSOAContainer& , int, int);
	/* ../public/tier0/utlsoacontainer.h:542 */
	void CopyAttrToAttr(CSOAContainer* , int, int);
	/* ../public/tier0/utlsoacontainer.h:545 */
	void CopyRegionFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int, int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:550 */
	void CopyRegionFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:556 */
	void MoveDataFrom(CSOAContainer* , CSOAContainer& );
	/* ../public/tier0/utlsoacontainer.h:559 */
	void Crop(CSOAContainer* , int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:562 */
	void RandomizeAttribute(const CSOAContainer* , int, float, float);
	/* ../public/tier0/utlsoacontainer.h:565 */
	void FillAttr(CSOAContainer* , int, const Vector& );
	/* ../public/tier0/utlsoacontainer.h:568 */
	void FillAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:593 */
	void GenerateUnsignedDistanceField(CSOAContainer* , int, IntAABB_t, float, int, int);
	/* ../public/tier0/utlsoacontainer.h:594 */
	void GenerateSignedDistanceField(CSOAContainer* , int, IntAABB_t, float, int, int);
	/* ../public/tier0/utlsoacontainer.h:601 */
	void ReinitializeSignedDistanceField(CSOAContainer* , int, IntAABB_t, float, bool);
	/* ../public/tier0/utlsoacontainer.h:605 */
	void GaussianBlurUsingSweeping(CSOAContainer* , int, IntAABB_t, float, int);
	/* ../public/tier0/utlsoacontainer.h:609 */
	void FillGutterPixels(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:615 */
	void IntegrateVectorField(CSOAContainer* , IntAABB_t, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:619 */
	void FillAttrWithInterpolatedValues(const CSOAContainer* , int, float, float, float, float);
	/* ../public/tier0/utlsoacontainer.h:620 */
	void FillAttrWithInterpolatedValues(const CSOAContainer* , int, Vector, Vector, const Vector& , const Vector& );
	/* ../public/tier0/utlsoacontainer.h:624 */
	void PackScalarAttributesToVectorAttribute(CSOAContainer* , CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:631 */
	void UnPackVectorAttributeToScalarAttributes(CSOAContainer* , CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:642 */
	void MulAttr(CSOAContainer* , const CSOAContainer& , int, int);
	/* ../public/tier0/utlsoacontainer.h:649 */
	void MulAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:655 */
	void AddToAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:661 */
	void MaxAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:667 */
	void MinAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:672 */
	void ClampAttr(CSOAContainer* , int, float, float);
	/* ../public/tier0/utlsoacontainer.h:678 */
	void NormalizeAttr(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:684 */
	void Normalize3ComponentVectorInAttributes(CSOAContainer* , int, int, int, Vector, bool, bool);
	/* ../public/tier0/utlsoacontainer.h:692 */
	void ScaleAndBiasAttributeToBeBetweenZeroAndOne(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:695 */
	void MultiplyVectorAttribute(CSOAContainer* , CSOAContainer* , int, const Vector& , int);
	/* ../public/tier0/utlsoacontainer.h:700 */
	void SrgbGammaToLinear(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:705 */
	void SrgbGammaToLinearPartial(CSOAContainer* , CSOAContainer* , int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:707 */
	void SrgbLinearToGamma(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:708 */
	void SrgbLinearToGammaPartial(CSOAContainer* , CSOAContainer* , int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:723 */
	float SumAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:726 */
	float AverageFloatAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:729 */
	float MaxAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:732 */
	float MinAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:735 */
	void FindLargestMagnitudeVector(CSOAContainer* , int, int* , int* , int* );
	/* ../public/tier0/utlsoacontainer.h:738 */
	void FindIndicesOfClosestPoint(const CSOAContainer* , int, const Vector& , int* , int* , int* );
	/* ../public/tier0/utlsoacontainer.h:743 */
	void AddGaussianSRBF(CSOAContainer* , float, Vector, int, int);
	/* ../public/tier0/utlsoacontainer.h:746 */
	void AddGaussianSRBF(CSOAContainer* , Vector, Vector, int, int);
	/* ../public/tier0/utlsoacontainer.h:754 */
	void ResampleAttribute(CSOAContainer* , CSOAContainer& , int, int);
	/* ../public/tier0/utlsoacontainer.h:762 */
	void FilterFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:765 */
	void FilterFrom(CSOAContainer* , int, int, int, int, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:777 */
	void QuarterSizeAttrWithBoxFilter(CSOAContainer* , const CSOAContainer& , int, int, CCallQueue* );
	/* ../public/tier0/utlsoacontainer.h:784 */
	void Normalized3x3SobelEdgeFilterFrom(CSOAContainer* , const CSOAContainer& , int, int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:791 */
	void CalculateGradientX(CSOAContainer* , const CSOAContainer& , int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:792 */
	void CalculateGradientY(CSOAContainer* , const CSOAContainer& , int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:797 */
	void GaussianBlur(CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:802 */
	void GaussianBlurFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:807 */
	void FilterInX(CSOAContainer* , int, IntAABB_t, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:809 */
	void FilterInY(CSOAContainer* , int, IntAABB_t, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:811 */
	void FilterInZ(CSOAContainer* , int, IntAABB_t, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:816 */
	void CalculateStandardDeviationFromMoments(CSOAContainer* , int, int, const CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:819 */
	void KMeansQuantization(CSOAContainer* , const int* , int, KMeansQuantizedValue* , int, IKMeansErrorMetric* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:835 */
	void GenerateDistanceField(CSOAContainer* , int, int, int, Rect3D_t* );
	/* ../public/tier0/utlsoacontainer.h:843 */
	int FindClosestMatchingRegion(const WeightedComparisonDescriptor_t* , int, int, IntVector3D* , float* , bool, int);
	/* ../public/tier0/utlsoacontainer.h:850 */
	void ComputeSelfShadowedBumpmapFromHeight(CSOAContainer* , const CSOAContainer* , int, Vector, float, const Vector* , int, const int* , int, bool);
	/* ../public/tier0/utlsoacontainer.h:861 */
	void SetThreadMode(CSOAContainer* , SOAThreadMode_t);
	/* ../public/tier0/utlsoacontainer.h:864 */
	IntAABB_CellRangeReference Indices(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:873 */
	CUtlVector<int, CUtlMemory<int, int> > GetListOfActiveChannels(CSOAContainer* , int);
protected:
	int m_nColumns; /* 0 4 */
	int m_nRows; /* 4 4 */
	int m_nSlices; /* 8 4 */
	int m_nPaddedColumns; /* 12 4 */
	int m_nNumQuadsPerRow; /* 16 4 */
	uint8 * m_pDataMemory; /* 24 8 */
	uint8 * m_pAttributePtrs[32]; /* 32 256 */
	EAttributeDataType m_nDataType[32]; /* 288 128 */
	size_t m_nStrideInBytes[32]; /* 416 256 */
	size_t m_nRowStrideInBytes[32]; /* 672 256 */
	size_t m_nSliceStrideInBytes[32]; /* 928 256 */
	uint32 m_nFieldPresentMask; /* 1184 4 */
	uint8 * m_pConstantDataMemory; /* 1192 8 */
	uint8 * m_pSeparateDataMemory[32]; /* 1200 256 */
	SOAThreadMode_t m_eThreadMode; /* 1456 4 */
	/* ../public/tier0/utlsoacontainer.h:898 */
	void Init(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:918 */
	void UpdateDistanceRow(CSOAContainer* , int, int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:922 */
	void CopyAttrFromPartial(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int);
	/* ../public/tier0/utlsoacontainer.h:923 */
	void FillAttrPartial(CSOAContainer* , int, int, int, int, int, fltx4);
	/* ../public/tier0/utlsoacontainer.h:936 */
	size_t DataMemorySize(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:937 */
	size_t ConstantMemorySize(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:938 */
	size_t AttributeMemorySize(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:939 */
	void AllocateDataMemory(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:940 */
	void AllocateConstantMemory(CSOAContainer* );
	/* tier0_perproject/utlsoacontainer.cpp:3418 */
	void FastSweepPass<false, false, true>(CSOAContainer* , int, int, IntVector3D, IntVector3D, IntVector3D, float, int);
	/* tier0_perproject/utlsoacontainer.cpp:3418 */
	void FastSweepPass<false, false, false>(CSOAContainer* , int, int, IntVector3D, IntVector3D, IntVector3D, float, int);
	/* tier0_perproject/utlsoacontainer.cpp:3418 */
	void FastSweepPass<true, false, true>(CSOAContainer* , int, int, IntVector3D, IntVector3D, IntVector3D, float, int);
	/* tier0_perproject/utlsoacontainer.cpp:3418 */
	void FastSweepPass<true, false, false>(CSOAContainer* , int, int, IntVector3D, IntVector3D, IntVector3D, float, int);
	/* tier0_perproject/utlsoacontainer.cpp:3418 */
	void FastSweepPass<false, true, true>(CSOAContainer* , int, int, IntVector3D, IntVector3D, IntVector3D, float, int);
	/* tier0_perproject/utlsoacontainer.cpp:3418 */
	void FastSweepPass<false, true, false>(CSOAContainer* , int, int, IntVector3D, IntVector3D, IntVector3D, float, int);
	/* tier0_perproject/utlsoacontainer.cpp:3418 */
	void FastSweepPass<true, true, true>(CSOAContainer* , int, int, IntVector3D, IntVector3D, IntVector3D, float, int);
	/* tier0_perproject/utlsoacontainer.cpp:3418 */
	void FastSweepPass<true, true, false>(CSOAContainer* , int, int, IntVector3D, IntVector3D, IntVector3D, float, int);
	/* tier0_perproject/utlsoacontainer.cpp:1763 */
	void QuarterSizeAttrWithBoxFilterPartial<false, false>(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int);
	/* tier0_perproject/utlsoacontainer.cpp:1763 */
	void QuarterSizeAttrWithBoxFilterPartial<false, true>(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int);
	/* tier0_perproject/utlsoacontainer.cpp:1763 */
	void QuarterSizeAttrWithBoxFilterPartial<true, false>(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int);
	/* tier0_perproject/utlsoacontainer.cpp:1763 */
	void QuarterSizeAttrWithBoxFilterPartial<true, true>(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int);
	/* ../public/tier0/utlsoacontainer.h:578 */
	void FastSweepPass<false, false>(CSOAContainer* , int, int, IntVector3D, IntVector3D, IntVector3D, float, int);
	/* ../public/tier0/utlsoacontainer.h:578 */
	void FastSweepPass<true, false>(CSOAContainer* , int, int, IntVector3D, IntVector3D, IntVector3D, float, int);
	/* ../public/tier0/utlsoacontainer.h:578 */
	void FastSweepPass<false, true>(CSOAContainer* , int, int, IntVector3D, IntVector3D, IntVector3D, float, int);
	/* ../public/tier0/utlsoacontainer.h:578 */
	void FastSweepPass<true, true>(CSOAContainer* , int, int, IntVector3D, IntVector3D, IntVector3D, float, int);
	/* tier0_perproject/utlsoacontainer.cpp:2751 */
	void FindClosestMatchingRegionInternal<false, true>(int* , const WeightedComparisonDescriptor_t* , int, int, IntVector3D* , float* , int, int, int, int, int, int, int);
	/* tier0_perproject/utlsoacontainer.cpp:2751 */
	void FindClosestMatchingRegionInternal<false, false>(int* , const WeightedComparisonDescriptor_t* , int, int, IntVector3D* , float* , int, int, int, int, int, int, int);
	/* tier0_perproject/utlsoacontainer.cpp:2751 */
	void FindClosestMatchingRegionInternal<true, true>(int* , const WeightedComparisonDescriptor_t* , int, int, IntVector3D* , float* , int, int, int, int, int, int, int);
	/* tier0_perproject/utlsoacontainer.cpp:2751 */
	void FindClosestMatchingRegionInternal<true, false>(int* , const WeightedComparisonDescriptor_t* , int, int, IntVector3D* , float* , int, int, int, int, int, int, int);
	/* tier0_perproject/utlsoacontainer.cpp:1849 */
	void QuarterSizeAttrWithBoxFilterPartial<false>(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int);
	/* tier0_perproject/utlsoacontainer.cpp:1849 */
	void QuarterSizeAttrWithBoxFilterPartial<true>(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int);
	/* tier0_perproject/utlsoacontainer.cpp:1646 */
	void Normalized3x3SobelEdgeFilterPartial<false>(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int, int);
	/* tier0_perproject/utlsoacontainer.cpp:1646 */
	void Normalized3x3SobelEdgeFilterPartial<true>(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int, int);
	/* tier0_perproject/utlsoacontainer.cpp:1597 */
	void FilterFromPartial<false>(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int, int, int, int, const float* );
	/* tier0_perproject/utlsoacontainer.cpp:1597 */
	void FilterFromPartial<true>(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int, int, int, int, const float* );
	/* ../public/tier0/utlsoacontainer.h:1271 */
	float ReduceAttr<MinSIMD<> >(const CSOAContainer* , int, const fltx4& );
	/* ../public/tier0/utlsoacontainer.h:1271 */
	float ReduceAttr<MaxSIMD<> >(const CSOAContainer* , int, const fltx4& );
	/* ../public/tier0/utlsoacontainer.h:1271 */
	float ReduceAttr<AddSIMD<> >(const CSOAContainer* , int, const fltx4& );
	/* tier0_perproject/utlsoacontainer.cpp:739 */
	void Normalize3ComponentVectorInAttributesPartial<false>(CSOAContainer* , int, int, int, int, int, int, int, Vector, bool);
	/* tier0_perproject/utlsoacontainer.cpp:739 */
	void Normalize3ComponentVectorInAttributesPartial<true>(CSOAContainer* , int, int, int, int, int, int, int, Vector, bool);
	/* ../public/tier0/utlsoacontainer.h:1550 */
	float* RowPtr<__vector(4) float>(const CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:1550 */
	unsigned char* RowPtr<unsigned char>(const CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:1573 */
	float* ElementPointer<float>(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:1233 */
	void ApplyBinaryFunctionToAttr<AddSIMD<> >(CSOAContainer* , int, const fltx4& );
	/* ../public/tier0/utlsoacontainer.h:1233 */
	void ApplyBinaryFunctionToAttr<MulSIMD<> >(CSOAContainer* , int, const fltx4& );
	/* ../public/tier0/utlsoacontainer.h:1550 */
	FourVectors* RowPtr<FourVectors>(const CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:1550 */
	float* RowPtr<float>(const CSOAContainer* , int, int, int);
	void CSOAContainer(class CSOAContainer *); /* linkage=_ZN13CSOAContainerC4Ev */
	void CSOAContainer(class CSOAContainer *, int, int, int, ...); /* linkage=_ZN13CSOAContainerC4Eiiiz */
	void ~CSOAContainer(class CSOAContainer *); /* linkage=_ZN13CSOAContainerD4Ev */
	void SetAttributeType(class CSOAContainer *, int, enum EAttributeDataType, bool); /* linkage=_ZN13CSOAContainer16SetAttributeTypeEi18EAttributeDataTypeb */
	enum EAttributeDataType GetAttributeType(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer16GetAttributeTypeEi */
	void EnsureDataType(class CSOAContainer *, int, enum EAttributeDataType); /* linkage=_ZN13CSOAContainer14EnsureDataTypeEi18EAttributeDataType */
	/* <450ef53> tier0_perproject/utlsoacontainer.cpp:165 */
	void SetAttributeDataTypesFrom(class CSOAContainer *, const class CSOAContainer  &); /* linkage=_ZN13CSOAContainer25SetAttributeDataTypesFromERKS_ */
	void AssertDataType(const class CSOAContainer  *, int, enum EAttributeDataType); /* linkage=_ZNK13CSOAContainer14AssertDataTypeEi18EAttributeDataType */
	size_t ElementSizeInBytes(enum EAttributeDataType); /* linkage=_ZN13CSOAContainer18ElementSizeInBytesE18EAttributeDataType */
	/* <450efbf> tier0_perproject/utlsoacontainer.cpp:79 */
	void Purge(class CSOAContainer *); /* linkage=_ZN13CSOAContainer5PurgeEv */
	void AllocateData(class CSOAContainer *, int, int, int); /* linkage=_ZN13CSOAContainer12AllocateDataEiii */
	void PurgeData(class CSOAContainer *); /* linkage=_ZN13CSOAContainer9PurgeDataEv */
	bool HasAllocatedMemory(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer18HasAllocatedMemoryEi */
	int NumCols(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer7NumColsEv */
	int NumRows(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer7NumRowsEv */
	int NumSlices(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer9NumSlicesEv */
	int Width(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer5WidthEv */
	int Height(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer6HeightEv */
	int Depth(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer5DepthEv */
	int PaddedWidth(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer11PaddedWidthEv */
	class IntAABB_t Bounds(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer6BoundsEv */
	int NumQuadsPerRow(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer14NumQuadsPerRowEv */
	int Count(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer5CountEv */
	int NumElements(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer11NumElementsEv */
	bool IsValidCoordinate(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer17IsValidCoordinateEiii */
	bool IsValidCoordinate(const class CSOAContainer  *, class IntVector3D); /* linkage=_ZNK13CSOAContainer17IsValidCoordinateE11IntVector3D */
	size_t RowToRowStep(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer12RowToRowStepEi */
	const void  * ConstRowPtr(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer11ConstRowPtrEiii */
	class FourVectors * ElementPointer4V(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer16ElementPointer4VEiiii */
	size_t ItemByteStride(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer14ItemByteStrideEi */
	/* <450ee9c> tier0_perproject/utlsoacontainer.cpp:97 */
	class CSOAAttributeIterator FirstAttr(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer9FirstAttrEv */
	/* <450ee1e> tier0_perproject/utlsoacontainer.cpp:86 */
	int AllocateAttributeIndex(class CSOAContainer *); /* linkage=_ZN13CSOAContainer22AllocateAttributeIndexEv */
	float & FloatValue(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer10FloatValueEiiii */
	float & FloatValue(const class CSOAContainer  *, int, class IntVector3D); /* linkage=_ZNK13CSOAContainer10FloatValueEi11IntVector3D */
	float & FloatValueClamped(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer17FloatValueClampedEiiii */
	float & FloatValueWrapped(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer17FloatValueWrappedEiiii */
	float & FloatValueWrappedOrClamped(const class CSOAContainer  *, int, int, int, int, bool); /* linkage=_ZNK13CSOAContainer26FloatValueWrappedOrClampedEiiiib */
	void * & PointerValue(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer12PointerValueEiiii */
	uint64 * & U64Value(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer8U64ValueEiiii */
	class Vector VectorValue(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer11VectorValueEiiii */
	void SetVectorValue(const class CSOAContainer  *, int, const class Vector  &, int, int, int); /* linkage=_ZNK13CSOAContainer14SetVectorValueEiRK6Vectoriii */
	float InterpolatedPixel(const class CSOAContainer  *, float, float, int, bool); /* linkage=_ZNK13CSOAContainer17InterpolatedPixelEffib */
	float InterpolatedVoxel(const class CSOAContainer  *, float, float, float, int); /* linkage=_ZNK13CSOAContainer17InterpolatedVoxelEfffi */
	void CalculateBilinearWeights(const class CSOAContainer  *, float, float, class WeightedSampleDescriptor_t *, bool); /* linkage=_ZNK13CSOAContainer24CalculateBilinearWeightsEffP26WeightedSampleDescriptor_tb */
	float Tex2D(const class CSOAContainer  *, float, float, int, bool); /* linkage=_ZNK13CSOAContainer5Tex2DEffib */
	class CSOAAttributeReference operator[](class CSOAContainer *, int); /* linkage=_ZN13CSOAContainerixEi */
	class CSOAAttributeReference Attr(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer4AttrEi */
	void CopyAttrFrom(class CSOAContainer *, const class CSOAContainer  &, int, int); /* linkage=_ZN13CSOAContainer12CopyAttrFromERKS_ii */
	void CopyAttrToAttr(class CSOAContainer *, int, int); /* linkage=_ZN13CSOAContainer14CopyAttrToAttrEii */
	void CopyRegionFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer14CopyRegionFromERKS_iiiiiiiiiii */
	void CopyRegionFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer14CopyRegionFromERKS_iiiiiiiii */
	void MoveDataFrom(class CSOAContainer *, class CSOAContainer &); /* linkage=_ZN13CSOAContainer12MoveDataFromERS_ */
	void Crop(class CSOAContainer *, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer4CropEiiiiii */
	void RandomizeAttribute(const class CSOAContainer  *, int, float, float); /* linkage=_ZNK13CSOAContainer18RandomizeAttributeEiff */
	void FillAttr(class CSOAContainer *, int, const class Vector  &); /* linkage=_ZN13CSOAContainer8FillAttrEiRK6Vector */
	void FillAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer8FillAttrEif */
	void GenerateUnsignedDistanceField(class CSOAContainer *, int, class IntAABB_t, float, int, int); /* linkage=_ZN13CSOAContainer29GenerateUnsignedDistanceFieldEi9IntAABB_tfii */
	void GenerateSignedDistanceField(class CSOAContainer *, int, class IntAABB_t, float, int, int); /* linkage=_ZN13CSOAContainer27GenerateSignedDistanceFieldEi9IntAABB_tfii */
	void ReinitializeSignedDistanceField(class CSOAContainer *, int, class IntAABB_t, float, bool); /* linkage=_ZN13CSOAContainer31ReinitializeSignedDistanceFieldEi9IntAABB_tfb */
	void GaussianBlurUsingSweeping(class CSOAContainer *, int, class IntAABB_t, float, int); /* linkage=_ZN13CSOAContainer25GaussianBlurUsingSweepingEi9IntAABB_tfi */
	void FillGutterPixels(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer16FillGutterPixelsEi */
	void IntegrateVectorField(class CSOAContainer *, class IntAABB_t, int, int, int, int, int); /* linkage=_ZN13CSOAContainer20IntegrateVectorFieldE9IntAABB_tiiiii */
	void FillAttrWithInterpolatedValues(const class CSOAContainer  *, int, float, float, float, float); /* linkage=_ZNK13CSOAContainer30FillAttrWithInterpolatedValuesEiffff */
	void FillAttrWithInterpolatedValues(const class CSOAContainer  *, int, class Vector, class Vector, const class Vector  &, const class Vector  &); /* linkage=_ZNK13CSOAContainer30FillAttrWithInterpolatedValuesEi6VectorS0_RKS0_S2_ */
	void PackScalarAttributesToVectorAttribute(class CSOAContainer *, class CSOAContainer *, int, int, int, int); /* linkage=_ZN13CSOAContainer37PackScalarAttributesToVectorAttributeEPS_iiii */
	void UnPackVectorAttributeToScalarAttributes(class CSOAContainer *, class CSOAContainer *, int, int, int, int); /* linkage=_ZN13CSOAContainer39UnPackVectorAttributeToScalarAttributesEPS_iiii */
	void MulAttr(class CSOAContainer *, const class CSOAContainer  &, int, int); /* linkage=_ZN13CSOAContainer7MulAttrERKS_ii */
	void MulAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer7MulAttrEif */
	void AddToAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer9AddToAttrEif */
	void MaxAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer7MaxAttrEif */
	void MinAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer7MinAttrEif */
	void ClampAttr(class CSOAContainer *, int, float, float); /* linkage=_ZN13CSOAContainer9ClampAttrEiff */
	void NormalizeAttr(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer13NormalizeAttrEi */
	void Normalize3ComponentVectorInAttributes(class CSOAContainer *, int, int, int, class Vector, bool, bool); /* linkage=_ZN13CSOAContainer37Normalize3ComponentVectorInAttributesEiii6Vectorbb */
	void ScaleAndBiasAttributeToBeBetweenZeroAndOne(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer42ScaleAndBiasAttributeToBeBetweenZeroAndOneEi */
	void MultiplyVectorAttribute(class CSOAContainer *, class CSOAContainer *, int, const class Vector  &, int); /* linkage=_ZN13CSOAContainer23MultiplyVectorAttributeEPS_iRK6Vectori */
	void SrgbGammaToLinear(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer17SrgbGammaToLinearEi */
	void SrgbGammaToLinearPartial(class CSOAContainer *, class CSOAContainer *, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer24SrgbGammaToLinearPartialEPS_iiiiii */
	void SrgbLinearToGamma(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer17SrgbLinearToGammaEi */
	void SrgbLinearToGammaPartial(class CSOAContainer *, class CSOAContainer *, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer24SrgbLinearToGammaPartialEPS_iiiiii */
	/* <450f323> tier0_perproject/utlsoacontainer.cpp:894 */
	float SumAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer17SumAttributeValueEi */
	float AverageFloatAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer26AverageFloatAttributeValueEi */
	/* <450f37d> tier0_perproject/utlsoacontainer.cpp:911 */
	float MaxAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer17MaxAttributeValueEi */
	/* <450f3d7> tier0_perproject/utlsoacontainer.cpp:916 */
	float MinAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer17MinAttributeValueEi */
	void FindLargestMagnitudeVector(class CSOAContainer *, int, int *, int *, int *); /* linkage=_ZN13CSOAContainer26FindLargestMagnitudeVectorEiPiS0_S0_ */
	void FindIndicesOfClosestPoint(const class CSOAContainer  *, int, const class Vector  &, int *, int *, int *); /* linkage=_ZNK13CSOAContainer25FindIndicesOfClosestPointEiRK6VectorPiS3_S3_ */
	void AddGaussianSRBF(class CSOAContainer *, float, class Vector, int, int); /* linkage=_ZN13CSOAContainer15AddGaussianSRBFEf6Vectorii */
	void AddGaussianSRBF(class CSOAContainer *, class Vector, class Vector, int, int); /* linkage=_ZN13CSOAContainer15AddGaussianSRBFE6VectorS0_ii */
	void ResampleAttribute(class CSOAContainer *, class CSOAContainer &, int, int); /* linkage=_ZN13CSOAContainer17ResampleAttributeERS_ii */
	void FilterFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int, const float  *, bool); /* linkage=_ZN13CSOAContainer10FilterFromERKS_iiiiiPKfb */
	void FilterFrom(class CSOAContainer *, int, int, int, int, int, const float  *, bool); /* linkage=_ZN13CSOAContainer10FilterFromEiiiiiPKfb */
	void QuarterSizeAttrWithBoxFilter(class CSOAContainer *, const class CSOAContainer  &, int, int, class CCallQueue *); /* linkage=_ZN13CSOAContainer28QuarterSizeAttrWithBoxFilterERKS_iiP10CCallQueue */
	void Normalized3x3SobelEdgeFilterFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, bool); /* linkage=_ZN13CSOAContainer32Normalized3x3SobelEdgeFilterFromERKS_iiib */
	void CalculateGradientX(class CSOAContainer *, const class CSOAContainer  &, int, int, bool); /* linkage=_ZN13CSOAContainer18CalculateGradientXERKS_iib */
	void CalculateGradientY(class CSOAContainer *, const class CSOAContainer  &, int, int, bool); /* linkage=_ZN13CSOAContainer18CalculateGradientYERKS_iib */
	void GaussianBlur(class CSOAContainer *, int, int, int, int); /* linkage=_ZN13CSOAContainer12GaussianBlurEiiii */
	void GaussianBlurFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int); /* linkage=_ZN13CSOAContainer16GaussianBlurFromERKS_iiiii */
	void FilterInX(class CSOAContainer *, int, class IntAABB_t, int, const float  *, bool); /* linkage=_ZN13CSOAContainer9FilterInXEi9IntAABB_tiPKfb */
	void FilterInY(class CSOAContainer *, int, class IntAABB_t, int, const float  *, bool); /* linkage=_ZN13CSOAContainer9FilterInYEi9IntAABB_tiPKfb */
	void FilterInZ(class CSOAContainer *, int, class IntAABB_t, int, const float  *, bool); /* linkage=_ZN13CSOAContainer9FilterInZEi9IntAABB_tiPKfb */
	void CalculateStandardDeviationFromMoments(class CSOAContainer *, int, int, const class CSOAContainer  *, int, float); /* linkage=_ZN13CSOAContainer37CalculateStandardDeviationFromMomentsEiiPKS_if */
	void KMeansQuantization(class CSOAContainer *, const int  *, int, class KMeansQuantizedValue *, int, class IKMeansErrorMetric *, int, int, int); /* linkage=_ZN13CSOAContainer18KMeansQuantizationEPKiiP20KMeansQuantizedValueiP18IKMeansErrorMetriciii */
	void GenerateDistanceField(class CSOAContainer *, int, int, int, class Rect3D_t *); /* linkage=_ZN13CSOAContainer21GenerateDistanceFieldEiiiP8Rect3D_t */
	int FindClosestMatchingRegion(const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, bool, int); /* linkage=_ZN13CSOAContainer25FindClosestMatchingRegionEPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfbi */
	void ComputeSelfShadowedBumpmapFromHeight(class CSOAContainer *, const class CSOAContainer  *, int, class Vector, float, const class Vector  *, int, const int  *, int, bool); /* linkage=_ZN13CSOAContainer36ComputeSelfShadowedBumpmapFromHeightEPKS_i6VectorfPKS2_iPKiib */
	/* <450f286> tier0_perproject/utlsoacontainer.cpp:310 */
	void SetThreadMode(class CSOAContainer *, enum SOAThreadMode_t); /* linkage=_ZN13CSOAContainer13SetThreadModeE15SOAThreadMode_t */
	class IntAABB_CellRangeReference Indices(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer7IndicesEv */
	class CUtlVector<int, CUtlMemory<int, int> > GetListOfActiveChannels(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer23GetListOfActiveChannelsEi */
	void Init(class CSOAContainer *); /* linkage=_ZN13CSOAContainer4InitEv */
	void UpdateDistanceRow(class CSOAContainer *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer17UpdateDistanceRowEiiiiiii */
	void CopyAttrFromPartial(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer19CopyAttrFromPartialEiiiiPKS_ii */
	/* <450114f> tier0_perproject/utlsoacontainer.cpp:657 */
	void FillAttrPartial(class CSOAContainer *, int, int, int, int, int, fltx4); /* linkage=_ZN13CSOAContainer15FillAttrPartialEiiiiiDv4_f */
	/* <450f174> tier0_perproject/utlsoacontainer.cpp:264 */
	size_t DataMemorySize(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer14DataMemorySizeEv */
	/* <450f201> tier0_perproject/utlsoacontainer.cpp:286 */
	size_t ConstantMemorySize(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer18ConstantMemorySizeEv */
	/* <450f136> tier0_perproject/utlsoacontainer.cpp:253 */
	size_t AttributeMemorySize(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer19AttributeMemorySizeEi */
	void AllocateDataMemory(class CSOAContainer *); /* linkage=_ZN13CSOAContainer18AllocateDataMemoryEv */
	void AllocateConstantMemory(class CSOAContainer *); /* linkage=_ZN13CSOAContainer22AllocateConstantMemoryEv */
	float * ElementPointer<float>(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer14ElementPointerIfEEPT_iiii */
	float * RowPtr<__vector(4) float>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrIDv4_fEEPT_iii */
	void ApplyBinaryFunctionToAttr<MulSIMD<> >(class CSOAContainer *, int, const fltx4  &); /* linkage=_ZN13CSOAContainer25ApplyBinaryFunctionToAttrIXadL_Z7MulSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEviS5_ */
	class FourVectors * RowPtr<FourVectors>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrI11FourVectorsEEPT_iii */
	float * RowPtr<float>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrIfEEPT_iii */
	void FastSweepPass<false, false, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb0ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, false, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb0ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, false, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb0ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, false, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb0ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, true, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb1ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, true, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb1ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, true, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb1ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, true, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb1ELb0EEEvii11IntVector3DS1_S1_fi */
	void QuarterSizeAttrWithBoxFilterPartial<false, false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb0ELb0EEEviiiiPKS_ii */
	void QuarterSizeAttrWithBoxFilterPartial<false, true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb0ELb1EEEviiiiPKS_ii */
	void QuarterSizeAttrWithBoxFilterPartial<true, false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb1ELb0EEEviiiiPKS_ii */
	void QuarterSizeAttrWithBoxFilterPartial<true, true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb1ELb1EEEviiiiPKS_ii */
	void FastSweepPass<false, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb1EEEvii11IntVector3DS1_S1_fi */
	void FindClosestMatchingRegionInternal<false, true>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb0ELb1EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void FindClosestMatchingRegionInternal<false, false>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb0ELb0EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void FindClosestMatchingRegionInternal<true, true>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb1ELb1EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void FindClosestMatchingRegionInternal<true, false>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb1ELb0EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void QuarterSizeAttrWithBoxFilterPartial<false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb0EEEviiiiPKS_ii */
	/* <450fc69> tier0_perproject/utlsoacontainer.cpp:1849 */
	void QuarterSizeAttrWithBoxFilterPartial<true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb1EEEviiiiPKS_ii */
	void Normalized3x3SobelEdgeFilterPartial<false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int); /* linkage=_ZN13CSOAContainer35Normalized3x3SobelEdgeFilterPartialILb0EEEviiiiPKS_iii */
	void Normalized3x3SobelEdgeFilterPartial<true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int); /* linkage=_ZN13CSOAContainer35Normalized3x3SobelEdgeFilterPartialILb1EEEviiiiPKS_iii */
	void FilterFromPartial<false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int, int, int, const float  *); /* linkage=_ZN13CSOAContainer17FilterFromPartialILb0EEEviiiiPKS_iiiiiPKf */
	void FilterFromPartial<true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int, int, int, const float  *); /* linkage=_ZN13CSOAContainer17FilterFromPartialILb1EEEviiiiPKS_iiiiiPKf */
	float ReduceAttr<MinSIMD<> >(const class CSOAContainer  *, int, const fltx4  &); /* linkage=_ZNK13CSOAContainer10ReduceAttrIXadL_Z7MinSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEfiS5_ */
	float ReduceAttr<MaxSIMD<> >(const class CSOAContainer  *, int, const fltx4  &); /* linkage=_ZNK13CSOAContainer10ReduceAttrIXadL_Z7MaxSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEfiS5_ */
	float ReduceAttr<AddSIMD<> >(const class CSOAContainer  *, int, const fltx4  &); /* linkage=_ZNK13CSOAContainer10ReduceAttrIXadL_Z7AddSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEfiS5_ */
	void Normalize3ComponentVectorInAttributesPartial<false>(class CSOAContainer *, int, int, int, int, int, int, int, class Vector, bool); /* linkage=_ZN13CSOAContainer44Normalize3ComponentVectorInAttributesPartialILb0EEEviiiiiii6Vectorb */
	void Normalize3ComponentVectorInAttributesPartial<true>(class CSOAContainer *, int, int, int, int, int, int, int, class Vector, bool); /* linkage=_ZN13CSOAContainer44Normalize3ComponentVectorInAttributesPartialILb1EEEviiiiiii6Vectorb */
	unsigned char * RowPtr<unsigned char>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrIhEEPT_iii */
	void ApplyBinaryFunctionToAttr<AddSIMD<> >(class CSOAContainer *, int, const fltx4  &); /* linkage=_ZN13CSOAContainer25ApplyBinaryFunctionToAttrIXadL_Z7AddSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEviS5_ */
};

// <046ABCEF> ../public/tier0/utlsoacontainer.h:309
// member functions: 277
// member variables: 15
// class size: 1,464
class CSOAContainer {
	/* ../public/tier0/utlsoacontainer.h:316 */
	void CSOAContainer(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:324 */
	void CSOAContainer(CSOAContainer* , int, int, int, ...);
	/* ../public/tier0/utlsoacontainer.h:325 */
	void ~CSOAContainer(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:341 */
	void SetAttributeType(CSOAContainer* , int, EAttributeDataType, bool);
	/* ../public/tier0/utlsoacontainer.h:343 */
	EAttributeDataType GetAttributeType(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:349 */
	void EnsureDataType(CSOAContainer* , int, EAttributeDataType);
	/* ../public/tier0/utlsoacontainer.h:354 */
	void SetAttributeDataTypesFrom(CSOAContainer* , const CSOAContainer& );
	/* ../public/tier0/utlsoacontainer.h:357 */
	void AssertDataType(const CSOAContainer* , int, EAttributeDataType);
	/* ../public/tier0/utlsoacontainer.h:366 */
	size_t ElementSizeInBytes(EAttributeDataType);
	/* ../public/tier0/utlsoacontainer.h:369 */
	void Purge(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:371 */
	void AllocateData(CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:372 */
	void PurgeData(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:375 */
	bool HasAllocatedMemory(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:378 */
	int NumCols(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:379 */
	int NumRows(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:380 */
	int NumSlices(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:382 */
	int Width(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:383 */
	int Height(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:384 */
	int Depth(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:388 */
	int PaddedWidth(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:390 */
	IntAABB_t Bounds(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:393 */
	int NumQuadsPerRow(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:394 */
	int Count(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:395 */
	int NumElements(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:397 */
	bool IsValidCoordinate(const CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:402 */
	bool IsValidCoordinate(const CSOAContainer* , IntVector3D);
	/* ../public/tier0/utlsoacontainer.h:409 */
	size_t RowToRowStep(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:411 */
	const void* ConstRowPtr(const CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:416 */
	FourVectors* ElementPointer4V(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:417 */
	size_t ItemByteStride(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:423 */
	CSOAAttributeIterator FirstAttr(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:430 */
	int AllocateAttributeIndex(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:436 */
	float& FloatValue(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:444 */
	float& FloatValue(const CSOAContainer* , int, IntVector3D);
	/* ../public/tier0/utlsoacontainer.h:450 */
	float& FloatValueClamped(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:456 */
	float& FloatValueWrapped(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:462 */
	float& FloatValueWrappedOrClamped(const CSOAContainer* , int, int, int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:484 */
	void* & PointerValue(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:490 */
	uint64* & U64Value(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:498 */
	Vector VectorValue(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:507 */
	void SetVectorValue(const CSOAContainer* , int, const Vector& , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:516 */
	float InterpolatedPixel(const CSOAContainer* , float, float, int, bool);
	/* ../public/tier0/utlsoacontainer.h:519 */
	float InterpolatedVoxel(const CSOAContainer* , float, float, float, int);
	/* ../public/tier0/utlsoacontainer.h:522 */
	void CalculateBilinearWeights(const CSOAContainer* , float, float, WeightedSampleDescriptor_t* , bool);
	/* ../public/tier0/utlsoacontainer.h:525 */
	float Tex2D(const CSOAContainer* , float, float, int, bool);
	/* ../public/tier0/utlsoacontainer.h:530 */
	CSOAAttributeReference operator[](CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:533 */
	CSOAAttributeReference Attr(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:539 */
	void CopyAttrFrom(CSOAContainer* , const CSOAContainer& , int, int);
	/* ../public/tier0/utlsoacontainer.h:542 */
	void CopyAttrToAttr(CSOAContainer* , int, int);
	/* ../public/tier0/utlsoacontainer.h:545 */
	void CopyRegionFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int, int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:550 */
	void CopyRegionFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:556 */
	void MoveDataFrom(CSOAContainer* , CSOAContainer& );
	/* ../public/tier0/utlsoacontainer.h:559 */
	void Crop(CSOAContainer* , int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:562 */
	void RandomizeAttribute(const CSOAContainer* , int, float, float);
	/* ../public/tier0/utlsoacontainer.h:565 */
	void FillAttr(CSOAContainer* , int, const Vector& );
	/* ../public/tier0/utlsoacontainer.h:568 */
	void FillAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:593 */
	void GenerateUnsignedDistanceField(CSOAContainer* , int, IntAABB_t, float, int, int);
	/* ../public/tier0/utlsoacontainer.h:594 */
	void GenerateSignedDistanceField(CSOAContainer* , int, IntAABB_t, float, int, int);
	/* ../public/tier0/utlsoacontainer.h:601 */
	void ReinitializeSignedDistanceField(CSOAContainer* , int, IntAABB_t, float, bool);
	/* ../public/tier0/utlsoacontainer.h:605 */
	void GaussianBlurUsingSweeping(CSOAContainer* , int, IntAABB_t, float, int);
	/* ../public/tier0/utlsoacontainer.h:609 */
	void FillGutterPixels(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:615 */
	void IntegrateVectorField(CSOAContainer* , IntAABB_t, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:619 */
	void FillAttrWithInterpolatedValues(const CSOAContainer* , int, float, float, float, float);
	/* ../public/tier0/utlsoacontainer.h:620 */
	void FillAttrWithInterpolatedValues(const CSOAContainer* , int, Vector, Vector, const Vector& , const Vector& );
	/* ../public/tier0/utlsoacontainer.h:624 */
	void PackScalarAttributesToVectorAttribute(CSOAContainer* , CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:631 */
	void UnPackVectorAttributeToScalarAttributes(CSOAContainer* , CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:642 */
	void MulAttr(CSOAContainer* , const CSOAContainer& , int, int);
	/* ../public/tier0/utlsoacontainer.h:649 */
	void MulAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:655 */
	void AddToAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:661 */
	void MaxAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:667 */
	void MinAttr(CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:672 */
	void ClampAttr(CSOAContainer* , int, float, float);
	/* ../public/tier0/utlsoacontainer.h:678 */
	void NormalizeAttr(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:684 */
	void Normalize3ComponentVectorInAttributes(CSOAContainer* , int, int, int, Vector, bool, bool);
	/* ../public/tier0/utlsoacontainer.h:692 */
	void ScaleAndBiasAttributeToBeBetweenZeroAndOne(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:695 */
	void MultiplyVectorAttribute(CSOAContainer* , CSOAContainer* , int, const Vector& , int);
	/* ../public/tier0/utlsoacontainer.h:700 */
	void SrgbGammaToLinear(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:705 */
	void SrgbGammaToLinearPartial(CSOAContainer* , CSOAContainer* , int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:707 */
	void SrgbLinearToGamma(CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:708 */
	void SrgbLinearToGammaPartial(CSOAContainer* , CSOAContainer* , int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:723 */
	float SumAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:726 */
	float AverageFloatAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:729 */
	float MaxAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:732 */
	float MinAttributeValue(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:735 */
	void FindLargestMagnitudeVector(CSOAContainer* , int, int* , int* , int* );
	/* ../public/tier0/utlsoacontainer.h:738 */
	void FindIndicesOfClosestPoint(const CSOAContainer* , int, const Vector& , int* , int* , int* );
	/* ../public/tier0/utlsoacontainer.h:743 */
	void AddGaussianSRBF(CSOAContainer* , float, Vector, int, int);
	/* ../public/tier0/utlsoacontainer.h:746 */
	void AddGaussianSRBF(CSOAContainer* , Vector, Vector, int, int);
	/* ../public/tier0/utlsoacontainer.h:754 */
	void ResampleAttribute(CSOAContainer* , CSOAContainer& , int, int);
	/* ../public/tier0/utlsoacontainer.h:762 */
	void FilterFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:765 */
	void FilterFrom(CSOAContainer* , int, int, int, int, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:777 */
	void QuarterSizeAttrWithBoxFilter(CSOAContainer* , const CSOAContainer& , int, int, CCallQueue* );
	/* ../public/tier0/utlsoacontainer.h:784 */
	void Normalized3x3SobelEdgeFilterFrom(CSOAContainer* , const CSOAContainer& , int, int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:791 */
	void CalculateGradientX(CSOAContainer* , const CSOAContainer& , int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:792 */
	void CalculateGradientY(CSOAContainer* , const CSOAContainer& , int, int, bool);
	/* ../public/tier0/utlsoacontainer.h:797 */
	void GaussianBlur(CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:802 */
	void GaussianBlurFrom(CSOAContainer* , const CSOAContainer& , int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:807 */
	void FilterInX(CSOAContainer* , int, IntAABB_t, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:809 */
	void FilterInY(CSOAContainer* , int, IntAABB_t, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:811 */
	void FilterInZ(CSOAContainer* , int, IntAABB_t, int, const float* , bool);
	/* ../public/tier0/utlsoacontainer.h:816 */
	void CalculateStandardDeviationFromMoments(CSOAContainer* , int, int, const CSOAContainer* , int, float);
	/* ../public/tier0/utlsoacontainer.h:819 */
	void KMeansQuantization(CSOAContainer* , const int* , int, KMeansQuantizedValue* , int, IKMeansErrorMetric* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:835 */
	void GenerateDistanceField(CSOAContainer* , int, int, int, Rect3D_t* );
	/* ../public/tier0/utlsoacontainer.h:843 */
	int FindClosestMatchingRegion(const WeightedComparisonDescriptor_t* , int, int, IntVector3D* , float* , bool, int);
	/* ../public/tier0/utlsoacontainer.h:850 */
	void ComputeSelfShadowedBumpmapFromHeight(CSOAContainer* , const CSOAContainer* , int, Vector, float, const Vector* , int, const int* , int, bool);
	/* ../public/tier0/utlsoacontainer.h:861 */
	void SetThreadMode(CSOAContainer* , SOAThreadMode_t);
	/* ../public/tier0/utlsoacontainer.h:864 */
	IntAABB_CellRangeReference Indices(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:873 */
	CUtlVector<int, CUtlMemory<int, int> > GetListOfActiveChannels(CSOAContainer* , int);
protected:
	int m_nColumns; /* 0 4 */
	int m_nRows; /* 4 4 */
	int m_nSlices; /* 8 4 */
	int m_nPaddedColumns; /* 12 4 */
	int m_nNumQuadsPerRow; /* 16 4 */
	uint8 * m_pDataMemory; /* 24 8 */
	uint8 * m_pAttributePtrs[32]; /* 32 256 */
	EAttributeDataType m_nDataType[32]; /* 288 128 */
	size_t m_nStrideInBytes[32]; /* 416 256 */
	size_t m_nRowStrideInBytes[32]; /* 672 256 */
	size_t m_nSliceStrideInBytes[32]; /* 928 256 */
	uint32 m_nFieldPresentMask; /* 1184 4 */
	uint8 * m_pConstantDataMemory; /* 1192 8 */
	uint8 * m_pSeparateDataMemory[32]; /* 1200 256 */
	SOAThreadMode_t m_eThreadMode; /* 1456 4 */
	/* ../public/tier0/utlsoacontainer.h:898 */
	void Init(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:918 */
	void UpdateDistanceRow(CSOAContainer* , int, int, int, int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:922 */
	void CopyAttrFromPartial(CSOAContainer* , int, int, int, int, const CSOAContainer* , int, int);
	/* ../public/tier0/utlsoacontainer.h:923 */
	void FillAttrPartial(CSOAContainer* , int, int, int, int, int, fltx4);
	/* ../public/tier0/utlsoacontainer.h:936 */
	size_t DataMemorySize(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:937 */
	size_t ConstantMemorySize(const CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:938 */
	size_t AttributeMemorySize(const CSOAContainer* , int);
	/* ../public/tier0/utlsoacontainer.h:939 */
	void AllocateDataMemory(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:940 */
	void AllocateConstantMemory(CSOAContainer* );
	/* ../public/tier0/utlsoacontainer.h:1550 */
	float* RowPtr<__vector(4) float>(const CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:1573 */
	float* ElementPointer<float>(const CSOAContainer* , int, int, int, int);
	/* ../public/tier0/utlsoacontainer.h:1233 */
	void ApplyBinaryFunctionToAttr<MulSIMD<> >(CSOAContainer* , int, const fltx4& );
	/* ../public/tier0/utlsoacontainer.h:1550 */
	FourVectors* RowPtr<FourVectors>(const CSOAContainer* , int, int, int);
	/* ../public/tier0/utlsoacontainer.h:1550 */
	float* RowPtr<float>(const CSOAContainer* , int, int, int);
	void CSOAContainer(class CSOAContainer *); /* linkage=_ZN13CSOAContainerC4Ev */
	void CSOAContainer(class CSOAContainer *, int, int, int, ...); /* linkage=_ZN13CSOAContainerC4Eiiiz */
	void ~CSOAContainer(class CSOAContainer *); /* linkage=_ZN13CSOAContainerD4Ev */
	void SetAttributeType(class CSOAContainer *, int, enum EAttributeDataType, bool); /* linkage=_ZN13CSOAContainer16SetAttributeTypeEi18EAttributeDataTypeb */
	enum EAttributeDataType GetAttributeType(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer16GetAttributeTypeEi */
	void EnsureDataType(class CSOAContainer *, int, enum EAttributeDataType); /* linkage=_ZN13CSOAContainer14EnsureDataTypeEi18EAttributeDataType */
	/* <450ef53> tier0_perproject/utlsoacontainer.cpp:165 */
	void SetAttributeDataTypesFrom(class CSOAContainer *, const class CSOAContainer  &); /* linkage=_ZN13CSOAContainer25SetAttributeDataTypesFromERKS_ */
	void AssertDataType(const class CSOAContainer  *, int, enum EAttributeDataType); /* linkage=_ZNK13CSOAContainer14AssertDataTypeEi18EAttributeDataType */
	size_t ElementSizeInBytes(enum EAttributeDataType); /* linkage=_ZN13CSOAContainer18ElementSizeInBytesE18EAttributeDataType */
	/* <450efbf> tier0_perproject/utlsoacontainer.cpp:79 */
	void Purge(class CSOAContainer *); /* linkage=_ZN13CSOAContainer5PurgeEv */
	void AllocateData(class CSOAContainer *, int, int, int); /* linkage=_ZN13CSOAContainer12AllocateDataEiii */
	void PurgeData(class CSOAContainer *); /* linkage=_ZN13CSOAContainer9PurgeDataEv */
	bool HasAllocatedMemory(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer18HasAllocatedMemoryEi */
	int NumCols(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer7NumColsEv */
	int NumRows(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer7NumRowsEv */
	int NumSlices(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer9NumSlicesEv */
	int Width(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer5WidthEv */
	int Height(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer6HeightEv */
	int Depth(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer5DepthEv */
	int PaddedWidth(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer11PaddedWidthEv */
	class IntAABB_t Bounds(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer6BoundsEv */
	int NumQuadsPerRow(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer14NumQuadsPerRowEv */
	int Count(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer5CountEv */
	int NumElements(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer11NumElementsEv */
	bool IsValidCoordinate(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer17IsValidCoordinateEiii */
	bool IsValidCoordinate(const class CSOAContainer  *, class IntVector3D); /* linkage=_ZNK13CSOAContainer17IsValidCoordinateE11IntVector3D */
	size_t RowToRowStep(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer12RowToRowStepEi */
	const void  * ConstRowPtr(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer11ConstRowPtrEiii */
	class FourVectors * ElementPointer4V(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer16ElementPointer4VEiiii */
	size_t ItemByteStride(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer14ItemByteStrideEi */
	/* <450ee9c> tier0_perproject/utlsoacontainer.cpp:97 */
	class CSOAAttributeIterator FirstAttr(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer9FirstAttrEv */
	/* <450ee1e> tier0_perproject/utlsoacontainer.cpp:86 */
	int AllocateAttributeIndex(class CSOAContainer *); /* linkage=_ZN13CSOAContainer22AllocateAttributeIndexEv */
	float & FloatValue(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer10FloatValueEiiii */
	float & FloatValue(const class CSOAContainer  *, int, class IntVector3D); /* linkage=_ZNK13CSOAContainer10FloatValueEi11IntVector3D */
	float & FloatValueClamped(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer17FloatValueClampedEiiii */
	float & FloatValueWrapped(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer17FloatValueWrappedEiiii */
	float & FloatValueWrappedOrClamped(const class CSOAContainer  *, int, int, int, int, bool); /* linkage=_ZNK13CSOAContainer26FloatValueWrappedOrClampedEiiiib */
	void * & PointerValue(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer12PointerValueEiiii */
	uint64 * & U64Value(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer8U64ValueEiiii */
	class Vector VectorValue(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer11VectorValueEiiii */
	void SetVectorValue(const class CSOAContainer  *, int, const class Vector  &, int, int, int); /* linkage=_ZNK13CSOAContainer14SetVectorValueEiRK6Vectoriii */
	float InterpolatedPixel(const class CSOAContainer  *, float, float, int, bool); /* linkage=_ZNK13CSOAContainer17InterpolatedPixelEffib */
	float InterpolatedVoxel(const class CSOAContainer  *, float, float, float, int); /* linkage=_ZNK13CSOAContainer17InterpolatedVoxelEfffi */
	void CalculateBilinearWeights(const class CSOAContainer  *, float, float, class WeightedSampleDescriptor_t *, bool); /* linkage=_ZNK13CSOAContainer24CalculateBilinearWeightsEffP26WeightedSampleDescriptor_tb */
	float Tex2D(const class CSOAContainer  *, float, float, int, bool); /* linkage=_ZNK13CSOAContainer5Tex2DEffib */
	class CSOAAttributeReference operator[](class CSOAContainer *, int); /* linkage=_ZN13CSOAContainerixEi */
	class CSOAAttributeReference Attr(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer4AttrEi */
	void CopyAttrFrom(class CSOAContainer *, const class CSOAContainer  &, int, int); /* linkage=_ZN13CSOAContainer12CopyAttrFromERKS_ii */
	void CopyAttrToAttr(class CSOAContainer *, int, int); /* linkage=_ZN13CSOAContainer14CopyAttrToAttrEii */
	void CopyRegionFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer14CopyRegionFromERKS_iiiiiiiiiii */
	void CopyRegionFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer14CopyRegionFromERKS_iiiiiiiii */
	void MoveDataFrom(class CSOAContainer *, class CSOAContainer &); /* linkage=_ZN13CSOAContainer12MoveDataFromERS_ */
	void Crop(class CSOAContainer *, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer4CropEiiiiii */
	void RandomizeAttribute(const class CSOAContainer  *, int, float, float); /* linkage=_ZNK13CSOAContainer18RandomizeAttributeEiff */
	void FillAttr(class CSOAContainer *, int, const class Vector  &); /* linkage=_ZN13CSOAContainer8FillAttrEiRK6Vector */
	void FillAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer8FillAttrEif */
	void GenerateUnsignedDistanceField(class CSOAContainer *, int, class IntAABB_t, float, int, int); /* linkage=_ZN13CSOAContainer29GenerateUnsignedDistanceFieldEi9IntAABB_tfii */
	void GenerateSignedDistanceField(class CSOAContainer *, int, class IntAABB_t, float, int, int); /* linkage=_ZN13CSOAContainer27GenerateSignedDistanceFieldEi9IntAABB_tfii */
	void ReinitializeSignedDistanceField(class CSOAContainer *, int, class IntAABB_t, float, bool); /* linkage=_ZN13CSOAContainer31ReinitializeSignedDistanceFieldEi9IntAABB_tfb */
	void GaussianBlurUsingSweeping(class CSOAContainer *, int, class IntAABB_t, float, int); /* linkage=_ZN13CSOAContainer25GaussianBlurUsingSweepingEi9IntAABB_tfi */
	void FillGutterPixels(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer16FillGutterPixelsEi */
	void IntegrateVectorField(class CSOAContainer *, class IntAABB_t, int, int, int, int, int); /* linkage=_ZN13CSOAContainer20IntegrateVectorFieldE9IntAABB_tiiiii */
	void FillAttrWithInterpolatedValues(const class CSOAContainer  *, int, float, float, float, float); /* linkage=_ZNK13CSOAContainer30FillAttrWithInterpolatedValuesEiffff */
	void FillAttrWithInterpolatedValues(const class CSOAContainer  *, int, class Vector, class Vector, const class Vector  &, const class Vector  &); /* linkage=_ZNK13CSOAContainer30FillAttrWithInterpolatedValuesEi6VectorS0_RKS0_S2_ */
	void PackScalarAttributesToVectorAttribute(class CSOAContainer *, class CSOAContainer *, int, int, int, int); /* linkage=_ZN13CSOAContainer37PackScalarAttributesToVectorAttributeEPS_iiii */
	void UnPackVectorAttributeToScalarAttributes(class CSOAContainer *, class CSOAContainer *, int, int, int, int); /* linkage=_ZN13CSOAContainer39UnPackVectorAttributeToScalarAttributesEPS_iiii */
	void MulAttr(class CSOAContainer *, const class CSOAContainer  &, int, int); /* linkage=_ZN13CSOAContainer7MulAttrERKS_ii */
	void MulAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer7MulAttrEif */
	void AddToAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer9AddToAttrEif */
	void MaxAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer7MaxAttrEif */
	void MinAttr(class CSOAContainer *, int, float); /* linkage=_ZN13CSOAContainer7MinAttrEif */
	void ClampAttr(class CSOAContainer *, int, float, float); /* linkage=_ZN13CSOAContainer9ClampAttrEiff */
	void NormalizeAttr(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer13NormalizeAttrEi */
	void Normalize3ComponentVectorInAttributes(class CSOAContainer *, int, int, int, class Vector, bool, bool); /* linkage=_ZN13CSOAContainer37Normalize3ComponentVectorInAttributesEiii6Vectorbb */
	void ScaleAndBiasAttributeToBeBetweenZeroAndOne(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer42ScaleAndBiasAttributeToBeBetweenZeroAndOneEi */
	void MultiplyVectorAttribute(class CSOAContainer *, class CSOAContainer *, int, const class Vector  &, int); /* linkage=_ZN13CSOAContainer23MultiplyVectorAttributeEPS_iRK6Vectori */
	void SrgbGammaToLinear(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer17SrgbGammaToLinearEi */
	void SrgbGammaToLinearPartial(class CSOAContainer *, class CSOAContainer *, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer24SrgbGammaToLinearPartialEPS_iiiiii */
	void SrgbLinearToGamma(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer17SrgbLinearToGammaEi */
	void SrgbLinearToGammaPartial(class CSOAContainer *, class CSOAContainer *, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer24SrgbLinearToGammaPartialEPS_iiiiii */
	/* <450f323> tier0_perproject/utlsoacontainer.cpp:894 */
	float SumAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer17SumAttributeValueEi */
	float AverageFloatAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer26AverageFloatAttributeValueEi */
	/* <450f37d> tier0_perproject/utlsoacontainer.cpp:911 */
	float MaxAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer17MaxAttributeValueEi */
	/* <450f3d7> tier0_perproject/utlsoacontainer.cpp:916 */
	float MinAttributeValue(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer17MinAttributeValueEi */
	void FindLargestMagnitudeVector(class CSOAContainer *, int, int *, int *, int *); /* linkage=_ZN13CSOAContainer26FindLargestMagnitudeVectorEiPiS0_S0_ */
	void FindIndicesOfClosestPoint(const class CSOAContainer  *, int, const class Vector  &, int *, int *, int *); /* linkage=_ZNK13CSOAContainer25FindIndicesOfClosestPointEiRK6VectorPiS3_S3_ */
	void AddGaussianSRBF(class CSOAContainer *, float, class Vector, int, int); /* linkage=_ZN13CSOAContainer15AddGaussianSRBFEf6Vectorii */
	void AddGaussianSRBF(class CSOAContainer *, class Vector, class Vector, int, int); /* linkage=_ZN13CSOAContainer15AddGaussianSRBFE6VectorS0_ii */
	void ResampleAttribute(class CSOAContainer *, class CSOAContainer &, int, int); /* linkage=_ZN13CSOAContainer17ResampleAttributeERS_ii */
	void FilterFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int, const float  *, bool); /* linkage=_ZN13CSOAContainer10FilterFromERKS_iiiiiPKfb */
	void FilterFrom(class CSOAContainer *, int, int, int, int, int, const float  *, bool); /* linkage=_ZN13CSOAContainer10FilterFromEiiiiiPKfb */
	void QuarterSizeAttrWithBoxFilter(class CSOAContainer *, const class CSOAContainer  &, int, int, class CCallQueue *); /* linkage=_ZN13CSOAContainer28QuarterSizeAttrWithBoxFilterERKS_iiP10CCallQueue */
	void Normalized3x3SobelEdgeFilterFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, bool); /* linkage=_ZN13CSOAContainer32Normalized3x3SobelEdgeFilterFromERKS_iiib */
	void CalculateGradientX(class CSOAContainer *, const class CSOAContainer  &, int, int, bool); /* linkage=_ZN13CSOAContainer18CalculateGradientXERKS_iib */
	void CalculateGradientY(class CSOAContainer *, const class CSOAContainer  &, int, int, bool); /* linkage=_ZN13CSOAContainer18CalculateGradientYERKS_iib */
	void GaussianBlur(class CSOAContainer *, int, int, int, int); /* linkage=_ZN13CSOAContainer12GaussianBlurEiiii */
	void GaussianBlurFrom(class CSOAContainer *, const class CSOAContainer  &, int, int, int, int, int); /* linkage=_ZN13CSOAContainer16GaussianBlurFromERKS_iiiii */
	void FilterInX(class CSOAContainer *, int, class IntAABB_t, int, const float  *, bool); /* linkage=_ZN13CSOAContainer9FilterInXEi9IntAABB_tiPKfb */
	void FilterInY(class CSOAContainer *, int, class IntAABB_t, int, const float  *, bool); /* linkage=_ZN13CSOAContainer9FilterInYEi9IntAABB_tiPKfb */
	void FilterInZ(class CSOAContainer *, int, class IntAABB_t, int, const float  *, bool); /* linkage=_ZN13CSOAContainer9FilterInZEi9IntAABB_tiPKfb */
	void CalculateStandardDeviationFromMoments(class CSOAContainer *, int, int, const class CSOAContainer  *, int, float); /* linkage=_ZN13CSOAContainer37CalculateStandardDeviationFromMomentsEiiPKS_if */
	void KMeansQuantization(class CSOAContainer *, const int  *, int, class KMeansQuantizedValue *, int, class IKMeansErrorMetric *, int, int, int); /* linkage=_ZN13CSOAContainer18KMeansQuantizationEPKiiP20KMeansQuantizedValueiP18IKMeansErrorMetriciii */
	void GenerateDistanceField(class CSOAContainer *, int, int, int, class Rect3D_t *); /* linkage=_ZN13CSOAContainer21GenerateDistanceFieldEiiiP8Rect3D_t */
	int FindClosestMatchingRegion(const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, bool, int); /* linkage=_ZN13CSOAContainer25FindClosestMatchingRegionEPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfbi */
	void ComputeSelfShadowedBumpmapFromHeight(class CSOAContainer *, const class CSOAContainer  *, int, class Vector, float, const class Vector  *, int, const int  *, int, bool); /* linkage=_ZN13CSOAContainer36ComputeSelfShadowedBumpmapFromHeightEPKS_i6VectorfPKS2_iPKiib */
	/* <450f286> tier0_perproject/utlsoacontainer.cpp:310 */
	void SetThreadMode(class CSOAContainer *, enum SOAThreadMode_t); /* linkage=_ZN13CSOAContainer13SetThreadModeE15SOAThreadMode_t */
	class IntAABB_CellRangeReference Indices(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer7IndicesEv */
	class CUtlVector<int, CUtlMemory<int, int> > GetListOfActiveChannels(class CSOAContainer *, int); /* linkage=_ZN13CSOAContainer23GetListOfActiveChannelsEi */
	void Init(class CSOAContainer *); /* linkage=_ZN13CSOAContainer4InitEv */
	void UpdateDistanceRow(class CSOAContainer *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer17UpdateDistanceRowEiiiiiii */
	void CopyAttrFromPartial(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer19CopyAttrFromPartialEiiiiPKS_ii */
	/* <450114f> tier0_perproject/utlsoacontainer.cpp:657 */
	void FillAttrPartial(class CSOAContainer *, int, int, int, int, int, fltx4); /* linkage=_ZN13CSOAContainer15FillAttrPartialEiiiiiDv4_f */
	/* <450f174> tier0_perproject/utlsoacontainer.cpp:264 */
	size_t DataMemorySize(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer14DataMemorySizeEv */
	/* <450f201> tier0_perproject/utlsoacontainer.cpp:286 */
	size_t ConstantMemorySize(const class CSOAContainer  *); /* linkage=_ZNK13CSOAContainer18ConstantMemorySizeEv */
	/* <450f136> tier0_perproject/utlsoacontainer.cpp:253 */
	size_t AttributeMemorySize(const class CSOAContainer  *, int); /* linkage=_ZNK13CSOAContainer19AttributeMemorySizeEi */
	void AllocateDataMemory(class CSOAContainer *); /* linkage=_ZN13CSOAContainer18AllocateDataMemoryEv */
	void AllocateConstantMemory(class CSOAContainer *); /* linkage=_ZN13CSOAContainer22AllocateConstantMemoryEv */
	float * ElementPointer<float>(const class CSOAContainer  *, int, int, int, int); /* linkage=_ZNK13CSOAContainer14ElementPointerIfEEPT_iiii */
	float * RowPtr<__vector(4) float>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrIDv4_fEEPT_iii */
	void ApplyBinaryFunctionToAttr<MulSIMD<> >(class CSOAContainer *, int, const fltx4  &); /* linkage=_ZN13CSOAContainer25ApplyBinaryFunctionToAttrIXadL_Z7MulSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEviS5_ */
	class FourVectors * RowPtr<FourVectors>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrI11FourVectorsEEPT_iii */
	float * RowPtr<float>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrIfEEPT_iii */
	void FastSweepPass<false, false, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb0ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, false, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb0ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, false, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb0ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, false, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb0ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, true, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb1ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, true, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb1ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, true, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb1ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, true, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb1ELb0EEEvii11IntVector3DS1_S1_fi */
	void QuarterSizeAttrWithBoxFilterPartial<false, false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb0ELb0EEEviiiiPKS_ii */
	void QuarterSizeAttrWithBoxFilterPartial<false, true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb0ELb1EEEviiiiPKS_ii */
	void QuarterSizeAttrWithBoxFilterPartial<true, false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb1ELb0EEEviiiiPKS_ii */
	void QuarterSizeAttrWithBoxFilterPartial<true, true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb1ELb1EEEviiiiPKS_ii */
	void FastSweepPass<false, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, false>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb0EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<false, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb0ELb1EEEvii11IntVector3DS1_S1_fi */
	void FastSweepPass<true, true>(class CSOAContainer *, int, int, class IntVector3D, class IntVector3D, class IntVector3D, float, int); /* linkage=_ZN13CSOAContainer13FastSweepPassILb1ELb1EEEvii11IntVector3DS1_S1_fi */
	void FindClosestMatchingRegionInternal<false, true>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb0ELb1EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void FindClosestMatchingRegionInternal<false, false>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb0ELb0EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void FindClosestMatchingRegionInternal<true, true>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb1ELb1EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void FindClosestMatchingRegionInternal<true, false>(int *, const class WeightedComparisonDescriptor_t  *, int, int, class IntVector3D *, float *, int, int, int, int, int, int, int); /* linkage=_ZN13CSOAContainer33FindClosestMatchingRegionInternalILb1ELb0EEEvPiPK30WeightedComparisonDescriptor_tiiP11IntVector3DPfiiiiiii */
	void QuarterSizeAttrWithBoxFilterPartial<false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb0EEEviiiiPKS_ii */
	/* <450fc69> tier0_perproject/utlsoacontainer.cpp:1849 */
	void QuarterSizeAttrWithBoxFilterPartial<true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int); /* linkage=_ZN13CSOAContainer35QuarterSizeAttrWithBoxFilterPartialILb1EEEviiiiPKS_ii */
	void Normalized3x3SobelEdgeFilterPartial<false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int); /* linkage=_ZN13CSOAContainer35Normalized3x3SobelEdgeFilterPartialILb0EEEviiiiPKS_iii */
	void Normalized3x3SobelEdgeFilterPartial<true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int); /* linkage=_ZN13CSOAContainer35Normalized3x3SobelEdgeFilterPartialILb1EEEviiiiPKS_iii */
	void FilterFromPartial<false>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int, int, int, const float  *); /* linkage=_ZN13CSOAContainer17FilterFromPartialILb0EEEviiiiPKS_iiiiiPKf */
	void FilterFromPartial<true>(class CSOAContainer *, int, int, int, int, const class CSOAContainer  *, int, int, int, int, int, const float  *); /* linkage=_ZN13CSOAContainer17FilterFromPartialILb1EEEviiiiPKS_iiiiiPKf */
	float ReduceAttr<MinSIMD<> >(const class CSOAContainer  *, int, const fltx4  &); /* linkage=_ZNK13CSOAContainer10ReduceAttrIXadL_Z7MinSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEfiS5_ */
	float ReduceAttr<MaxSIMD<> >(const class CSOAContainer  *, int, const fltx4  &); /* linkage=_ZNK13CSOAContainer10ReduceAttrIXadL_Z7MaxSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEfiS5_ */
	float ReduceAttr<AddSIMD<> >(const class CSOAContainer  *, int, const fltx4  &); /* linkage=_ZNK13CSOAContainer10ReduceAttrIXadL_Z7AddSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEfiS5_ */
	void Normalize3ComponentVectorInAttributesPartial<false>(class CSOAContainer *, int, int, int, int, int, int, int, class Vector, bool); /* linkage=_ZN13CSOAContainer44Normalize3ComponentVectorInAttributesPartialILb0EEEviiiiiii6Vectorb */
	void Normalize3ComponentVectorInAttributesPartial<true>(class CSOAContainer *, int, int, int, int, int, int, int, class Vector, bool); /* linkage=_ZN13CSOAContainer44Normalize3ComponentVectorInAttributesPartialILb1EEEviiiiiii6Vectorb */
	unsigned char * RowPtr<unsigned char>(const class CSOAContainer  *, int, int, int); /* linkage=_ZNK13CSOAContainer6RowPtrIhEEPT_iii */
	void ApplyBinaryFunctionToAttr<AddSIMD<> >(class CSOAContainer *, int, const fltx4  &); /* linkage=_ZN13CSOAContainer25ApplyBinaryFunctionToAttrIXadL_Z7AddSIMDIL10ESIMDLevel20EEDv4_fRKS3_S5_EEEEviS5_ */
};

// <047188A2> ../public/tier0/utlsoacontainer.h:325
void CSOAContainer::~CSOAContainer()
{
} /* size: 0 */

// <047039F8> ../public/tier0/utlsoacontainer.h:357
inline void CSOAContainer::AssertDataType(int nAttrIdx, EAttributeDataType nDataType)
{
} /* size: 0 */

// <047BD1D3> ../public/tier0/utlsoacontainer.h:382
inline void CSOAContainer::Width()
{
} /* size: 0 */

// <047BD1BA> ../public/tier0/utlsoacontainer.h:383
inline void CSOAContainer::Height()
{
} /* size: 0 */

// <047039AD> ../public/tier0/utlsoacontainer.h:384
inline void CSOAContainer::Depth()
{
} /* size: 0 */

// <044FFA02> ../public/tier0/utlsoacontainer.h:388
inline void CSOAContainer::PaddedWidth()
{
} /* size: 0 */

// <044FF9E9> ../public/tier0/utlsoacontainer.h:390
inline void CSOAContainer::Bounds()
{
} /* size: 0 */

// <044FF9C3> ../public/tier0/utlsoacontainer.h:402
inline void CSOAContainer::IsValidCoordinate(IntVector3D vCoord)
{
} /* size: 0 */

// <04703963> ../public/tier0/utlsoacontainer.h:436
inline void CSOAContainer::FloatValue(int nAttrIdx, int nX, int nY, int nZ)
{
} /* size: 0 */

// <044FF946> ../public/tier0/utlsoacontainer.h:444
inline void CSOAContainer::FloatValue(int nAttrIdx, IntVector3D vCoord)
{
} /* size: 0 */

// <044FF8FC> ../public/tier0/utlsoacontainer.h:450
inline void CSOAContainer::FloatValueClamped(int nAttrIdx, int nX, int nY, int nZ)
{
} /* size: 0 */

// <044FF8B2> ../public/tier0/utlsoacontainer.h:456
void CSOAContainer::FloatValueWrapped(int nAttrIdx, int nX, int nY, int nZ)
{
} /* size: 0 */

// <044FF85B> ../public/tier0/utlsoacontainer.h:462
void CSOAContainer::FloatValueWrappedOrClamped(int nAttrIdx, int nX, int nY, int nZ, bool bWrap)
{
} /* size: 0 */

// <044CAE44> ../public/tier0/utlsoacontainer.h:578
inline void FastSweepPass<true, CSOAContainer::true>(int nAttr, int nLockAttr, IntVector3D vStartPos, IntVector3D vStepDirections, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
} /* size: 0 */

// <044CADBC> ../public/tier0/utlsoacontainer.h:578
inline void FastSweepPass<false, CSOAContainer::true>(int nAttr, int nLockAttr, IntVector3D vStartPos, IntVector3D vStepDirections, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
} /* size: 0 */

// <044CACAC> ../public/tier0/utlsoacontainer.h:578
inline void FastSweepPass<false, CSOAContainer::false>(int nAttr, int nLockAttr, IntVector3D vStartPos, IntVector3D vStepDirections, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
} /* size: 0 */

// <04703930> ../public/tier0/utlsoacontainer.h:649
inline void CSOAContainer::MulAttr(int nDestAttr, float flScale)
{
} /* size: 0 */

// <044FF7F5> ../public/tier0/utlsoacontainer.h:655
inline void CSOAContainer::AddToAttr(int nDestAttr, float flAddend)
{
} /* size: 0 */

// <0470380D> ../public/tier0/utlsoacontainer.h:898
// function calls: 4
void CSOAContainer::Init()
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
} /* size: 254, inline expansions: 4 (386 bytes) */

// <046912E8> ../public/tier0/utlsoacontainer.h:898
inline void CSOAContainer::Init()
{
} /* size: 0 */

// <00865739> ../public/tier0/utlsoacontainer.h:947
// member function: 1
// member variables: 2
// class size: 32
class CSOAAttributeReferenceBinaryOp<AddSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	CSOAAttributeReference m_opB; /* 16 16 */
	/* ../public/tier0/utlsoacontainer.h:953 */
	void CSOAAttributeReferenceBinaryOp(CSOAAttributeReferenceBinaryOp<AddSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , const CSOAAttributeReference& );
};

// <008657A3> ../public/tier0/utlsoacontainer.h:947
// member function: 1
// member variables: 2
// class size: 32
class CSOAAttributeReferenceBinaryOp<MulSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	CSOAAttributeReference m_opB; /* 16 16 */
	/* ../public/tier0/utlsoacontainer.h:953 */
	void CSOAAttributeReferenceBinaryOp(CSOAAttributeReferenceBinaryOp<MulSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , const CSOAAttributeReference& );
};

// <0086580D> ../public/tier0/utlsoacontainer.h:947
// member function: 1
// member variables: 2
// class size: 32
class CSOAAttributeReferenceBinaryOp<SubSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	CSOAAttributeReference m_opB; /* 16 16 */
	/* ../public/tier0/utlsoacontainer.h:953 */
	void CSOAAttributeReferenceBinaryOp(CSOAAttributeReferenceBinaryOp<SubSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , const CSOAAttributeReference& );
};

// <00865877> ../public/tier0/utlsoacontainer.h:947
// member function: 1
// member variables: 2
// class size: 32
class CSOAAttributeReferenceBinaryOp<DivSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	CSOAAttributeReference m_opB; /* 16 16 */
	/* ../public/tier0/utlsoacontainer.h:953 */
	void CSOAAttributeReferenceBinaryOp(CSOAAttributeReferenceBinaryOp<DivSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , const CSOAAttributeReference& );
};

// <008658E1> ../public/tier0/utlsoacontainer.h:947
// member function: 1
// member variables: 2
// class size: 32
class CSOAAttributeReferenceBinaryOp<Cmp01GtSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	CSOAAttributeReference m_opB; /* 16 16 */
	/* ../public/tier0/utlsoacontainer.h:953 */
	void CSOAAttributeReferenceBinaryOp(CSOAAttributeReferenceBinaryOp<Cmp01GtSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , const CSOAAttributeReference& );
};

// <0086594B> ../public/tier0/utlsoacontainer.h:947
// member function: 1
// member variables: 2
// class size: 32
class CSOAAttributeReferenceBinaryOp<Cmp01GeSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	CSOAAttributeReference m_opB; /* 16 16 */
	/* ../public/tier0/utlsoacontainer.h:953 */
	void CSOAAttributeReferenceBinaryOp(CSOAAttributeReferenceBinaryOp<Cmp01GeSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , const CSOAAttributeReference& );
};

// <008659B5> ../public/tier0/utlsoacontainer.h:947
// member function: 1
// member variables: 2
// class size: 32
class CSOAAttributeReferenceBinaryOp<Cmp01LtSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	CSOAAttributeReference m_opB; /* 16 16 */
	/* ../public/tier0/utlsoacontainer.h:953 */
	void CSOAAttributeReferenceBinaryOp(CSOAAttributeReferenceBinaryOp<Cmp01LtSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , const CSOAAttributeReference& );
};

// <00865A1F> ../public/tier0/utlsoacontainer.h:947
// member function: 1
// member variables: 2
// class size: 32
class CSOAAttributeReferenceBinaryOp<Cmp01LeSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	CSOAAttributeReference m_opB; /* 16 16 */
	/* ../public/tier0/utlsoacontainer.h:953 */
	void CSOAAttributeReferenceBinaryOp(CSOAAttributeReferenceBinaryOp<Cmp01LeSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , const CSOAAttributeReference& );
};

// <00865A89> ../public/tier0/utlsoacontainer.h:947
// member function: 1
// member variables: 2
// class size: 32
class CSOAAttributeReferenceBinaryOp<Cmp01EqSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	CSOAAttributeReference m_opB; /* 16 16 */
	/* ../public/tier0/utlsoacontainer.h:953 */
	void CSOAAttributeReferenceBinaryOp(CSOAAttributeReferenceBinaryOp<Cmp01EqSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , const CSOAAttributeReference& );
};

// <00865AF3> ../public/tier0/utlsoacontainer.h:983
// member function: 1
// member variables: 2
// class size: 24
class CSOAAttributeReferenceBinaryConstantOp<AddSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	float m_flConstantValue; /* 16 4 */
	/* ../public/tier0/utlsoacontainer.h:989 */
	void CSOAAttributeReferenceBinaryConstantOp(CSOAAttributeReferenceBinaryConstantOp<AddSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , float);
};

// <00865B5D> ../public/tier0/utlsoacontainer.h:983
// member function: 1
// member variables: 2
// class size: 24
class CSOAAttributeReferenceBinaryConstantOp<MulSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	float m_flConstantValue; /* 16 4 */
	/* ../public/tier0/utlsoacontainer.h:989 */
	void CSOAAttributeReferenceBinaryConstantOp(CSOAAttributeReferenceBinaryConstantOp<MulSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , float);
};

// <00865BC7> ../public/tier0/utlsoacontainer.h:983
// member function: 1
// member variables: 2
// class size: 24
class CSOAAttributeReferenceBinaryConstantOp<SubSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	float m_flConstantValue; /* 16 4 */
	/* ../public/tier0/utlsoacontainer.h:989 */
	void CSOAAttributeReferenceBinaryConstantOp(CSOAAttributeReferenceBinaryConstantOp<SubSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , float);
};

// <00865C31> ../public/tier0/utlsoacontainer.h:983
// member function: 1
// member variables: 2
// class size: 24
class CSOAAttributeReferenceBinaryConstantOp<DivSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	float m_flConstantValue; /* 16 4 */
	/* ../public/tier0/utlsoacontainer.h:989 */
	void CSOAAttributeReferenceBinaryConstantOp(CSOAAttributeReferenceBinaryConstantOp<DivSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , float);
};

// <00865C9B> ../public/tier0/utlsoacontainer.h:983
// member function: 1
// member variables: 2
// class size: 24
class CSOAAttributeReferenceBinaryConstantOp<Cmp01GtSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	float m_flConstantValue; /* 16 4 */
	/* ../public/tier0/utlsoacontainer.h:989 */
	void CSOAAttributeReferenceBinaryConstantOp(CSOAAttributeReferenceBinaryConstantOp<Cmp01GtSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , float);
};

// <00865D05> ../public/tier0/utlsoacontainer.h:983
// member function: 1
// member variables: 2
// class size: 24
class CSOAAttributeReferenceBinaryConstantOp<Cmp01GeSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	float m_flConstantValue; /* 16 4 */
	/* ../public/tier0/utlsoacontainer.h:989 */
	void CSOAAttributeReferenceBinaryConstantOp(CSOAAttributeReferenceBinaryConstantOp<Cmp01GeSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , float);
};

// <00865D6F> ../public/tier0/utlsoacontainer.h:983
// member function: 1
// member variables: 2
// class size: 24
class CSOAAttributeReferenceBinaryConstantOp<Cmp01LtSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	float m_flConstantValue; /* 16 4 */
	/* ../public/tier0/utlsoacontainer.h:989 */
	void CSOAAttributeReferenceBinaryConstantOp(CSOAAttributeReferenceBinaryConstantOp<Cmp01LtSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , float);
};

// <00865DD9> ../public/tier0/utlsoacontainer.h:983
// member function: 1
// member variables: 2
// class size: 24
class CSOAAttributeReferenceBinaryConstantOp<Cmp01LeSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	float m_flConstantValue; /* 16 4 */
	/* ../public/tier0/utlsoacontainer.h:989 */
	void CSOAAttributeReferenceBinaryConstantOp(CSOAAttributeReferenceBinaryConstantOp<Cmp01LeSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , float);
};

// <00865E43> ../public/tier0/utlsoacontainer.h:983
// member function: 1
// member variables: 2
// class size: 24
class CSOAAttributeReferenceBinaryConstantOp<Cmp01EqSIMD<(ESIMDLevel)20>, CSOAAttributeReference> {
	CSOAAttributeReference m_opA; /* 0 16 */
	float m_flConstantValue; /* 16 4 */
	/* ../public/tier0/utlsoacontainer.h:989 */
	void CSOAAttributeReferenceBinaryConstantOp(CSOAAttributeReferenceBinaryConstantOp<Cmp01EqSIMD<(ESIMDLevel)20>, CSOAAttributeReference>* , const CSOAAttributeReference& , float);
};

// <00865193> ../public/tier0/utlsoacontainer.h:1010
// member functions: 62
// member variables: 2
// class size: 16
class CSOAAttributeReference {
	CSOAContainer * m_pContainer; /* 0 8 */
	int m_nAttributeID; /* 8 4 */
	/* ../public/tier0/utlsoacontainer.h:1018 */
	void operator*=(const CSOAAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1022 */
	void operator+=(const CSOAAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1026 */
	void operator-=(const CSOAAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1030 */
	void operator=(const CSOAAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1035 */
	void operator=(const CSOAAttributeReference* , const CSOAAttributeReference& );
	/* ../public/tier0/utlsoacontainer.h:1042 */
	CSOAAttributeReferenceBinaryOp<AddSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator+(const CSOAAttributeReference* , const CSOAAttributeReference& );
	/* ../public/tier0/utlsoacontainer.h:1043 */
	CSOAAttributeReferenceBinaryOp<MulSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator*(const CSOAAttributeReference* , const CSOAAttributeReference& );
	/* ../public/tier0/utlsoacontainer.h:1044 */
	CSOAAttributeReferenceBinaryOp<SubSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator-(const CSOAAttributeReference* , const CSOAAttributeReference& );
	/* ../public/tier0/utlsoacontainer.h:1045 */
	CSOAAttributeReferenceBinaryOp<DivSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator/(const CSOAAttributeReference* , const CSOAAttributeReference& );
	/* ../public/tier0/utlsoacontainer.h:1046 */
	CSOAAttributeReferenceBinaryOp<Cmp01GtSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator>(const CSOAAttributeReference* , const CSOAAttributeReference& );
	/* ../public/tier0/utlsoacontainer.h:1047 */
	CSOAAttributeReferenceBinaryOp<Cmp01GeSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator>=(const CSOAAttributeReference* , const CSOAAttributeReference& );
	/* ../public/tier0/utlsoacontainer.h:1048 */
	CSOAAttributeReferenceBinaryOp<Cmp01LtSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator<(const CSOAAttributeReference* , const CSOAAttributeReference& );
	/* ../public/tier0/utlsoacontainer.h:1049 */
	CSOAAttributeReferenceBinaryOp<Cmp01LeSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator<=(const CSOAAttributeReference* , const CSOAAttributeReference& );
	/* ../public/tier0/utlsoacontainer.h:1050 */
	CSOAAttributeReferenceBinaryOp<Cmp01EqSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator==(const CSOAAttributeReference* , const CSOAAttributeReference& );
	/* ../public/tier0/utlsoacontainer.h:1058 */
	CSOAAttributeReferenceBinaryConstantOp<AddSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator+(const CSOAAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1059 */
	CSOAAttributeReferenceBinaryConstantOp<MulSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator*(const CSOAAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1060 */
	CSOAAttributeReferenceBinaryConstantOp<SubSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator-(const CSOAAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1061 */
	CSOAAttributeReferenceBinaryConstantOp<DivSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator/(const CSOAAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1062 */
	CSOAAttributeReferenceBinaryConstantOp<Cmp01GtSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator>(const CSOAAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1063 */
	CSOAAttributeReferenceBinaryConstantOp<Cmp01GeSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator>=(const CSOAAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1064 */
	CSOAAttributeReferenceBinaryConstantOp<Cmp01LtSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator<(const CSOAAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1065 */
	CSOAAttributeReferenceBinaryConstantOp<Cmp01LeSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator<=(const CSOAAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1066 */
	CSOAAttributeReferenceBinaryConstantOp<Cmp01EqSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator==(const CSOAAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1068 */
	void CopyTo(const CSOAAttributeReference* , CSOAAttributeReference& );
	/* ../public/tier0/utlsoacontainer.h:1072 */
	int Width(const CSOAAttributeReference* );
	/* ../public/tier0/utlsoacontainer.h:1073 */
	int Height(const CSOAAttributeReference* );
	/* ../public/tier0/utlsoacontainer.h:1074 */
	void SetDimensions(CSOAAttributeReference* , int, int);
	/* ../public/tier0/utlsoacontainer.h:1077 */
	float Element(const CSOAAttributeReference* , int, int);
	/* ../public/tier0/utlsoacontainer.h:1082 */
	void SetElement(CSOAAttributeReference* , int, int, float);
	/* ../public/tier0/utlsoacontainer.h:1088 */
	float* begin(CSOAAttributeReference* );
	/* ../public/tier0/utlsoacontainer.h:1093 */
	float* end(CSOAAttributeReference* );
	void operator*=(const class CSOAAttributeReference  *, float); /* linkage=_ZNK22CSOAAttributeReferencemLEf */
	void operator+=(const class CSOAAttributeReference  *, float); /* linkage=_ZNK22CSOAAttributeReferencepLEf */
	void operator-=(const class CSOAAttributeReference  *, float); /* linkage=_ZNK22CSOAAttributeReferencemIEf */
	void operator=(const class CSOAAttributeReference  *, float); /* linkage=_ZNK22CSOAAttributeReferenceaSEf */
	void operator=(const class CSOAAttributeReference  *, const class CSOAAttributeReference  &); /* linkage=_ZNK22CSOAAttributeReferenceaSERKS_ */
	class CSOAAttributeReferenceBinaryOp<AddSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator+(const class CSOAAttributeReference  *, const class CSOAAttributeReference  &); /* linkage=_ZNK22CSOAAttributeReferenceplERKS_ */
	class CSOAAttributeReferenceBinaryOp<MulSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator*(const class CSOAAttributeReference  *, const class CSOAAttributeReference  &); /* linkage=_ZNK22CSOAAttributeReferencemlERKS_ */
	class CSOAAttributeReferenceBinaryOp<SubSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator-(const class CSOAAttributeReference  *, const class CSOAAttributeReference  &); /* linkage=_ZNK22CSOAAttributeReferencemiERKS_ */
	class CSOAAttributeReferenceBinaryOp<DivSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator/(const class CSOAAttributeReference  *, const class CSOAAttributeReference  &); /* linkage=_ZNK22CSOAAttributeReferencedvERKS_ */
	class CSOAAttributeReferenceBinaryOp<Cmp01GtSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator>(const class CSOAAttributeReference  *, const class CSOAAttributeReference  &); /* linkage=_ZNK22CSOAAttributeReferencegtERKS_ */
	class CSOAAttributeReferenceBinaryOp<Cmp01GeSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator>=(const class CSOAAttributeReference  *, const class CSOAAttributeReference  &); /* linkage=_ZNK22CSOAAttributeReferencegeERKS_ */
	class CSOAAttributeReferenceBinaryOp<Cmp01LtSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator<(const class CSOAAttributeReference  *, const class CSOAAttributeReference  &); /* linkage=_ZNK22CSOAAttributeReferenceltERKS_ */
	class CSOAAttributeReferenceBinaryOp<Cmp01LeSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator<=(const class CSOAAttributeReference  *, const class CSOAAttributeReference  &); /* linkage=_ZNK22CSOAAttributeReferenceleERKS_ */
	class CSOAAttributeReferenceBinaryOp<Cmp01EqSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator==(const class CSOAAttributeReference  *, const class CSOAAttributeReference  &); /* linkage=_ZNK22CSOAAttributeReferenceeqERKS_ */
	class CSOAAttributeReferenceBinaryConstantOp<AddSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator+(const class CSOAAttributeReference  *, float); /* linkage=_ZNK22CSOAAttributeReferenceplEf */
	class CSOAAttributeReferenceBinaryConstantOp<MulSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator*(const class CSOAAttributeReference  *, float); /* linkage=_ZNK22CSOAAttributeReferencemlEf */
	class CSOAAttributeReferenceBinaryConstantOp<SubSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator-(const class CSOAAttributeReference  *, float); /* linkage=_ZNK22CSOAAttributeReferencemiEf */
	class CSOAAttributeReferenceBinaryConstantOp<DivSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator/(const class CSOAAttributeReference  *, float); /* linkage=_ZNK22CSOAAttributeReferencedvEf */
	class CSOAAttributeReferenceBinaryConstantOp<Cmp01GtSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator>(const class CSOAAttributeReference  *, float); /* linkage=_ZNK22CSOAAttributeReferencegtEf */
	class CSOAAttributeReferenceBinaryConstantOp<Cmp01GeSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator>=(const class CSOAAttributeReference  *, float); /* linkage=_ZNK22CSOAAttributeReferencegeEf */
	class CSOAAttributeReferenceBinaryConstantOp<Cmp01LtSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator<(const class CSOAAttributeReference  *, float); /* linkage=_ZNK22CSOAAttributeReferenceltEf */
	class CSOAAttributeReferenceBinaryConstantOp<Cmp01LeSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator<=(const class CSOAAttributeReference  *, float); /* linkage=_ZNK22CSOAAttributeReferenceleEf */
	class CSOAAttributeReferenceBinaryConstantOp<Cmp01EqSIMD<(ESIMDLevel)20>, CSOAAttributeReference> operator==(const class CSOAAttributeReference  *, float); /* linkage=_ZNK22CSOAAttributeReferenceeqEf */
	void CopyTo(const class CSOAAttributeReference  *, class CSOAAttributeReference &); /* linkage=_ZNK22CSOAAttributeReference6CopyToERS_ */
	int Width(const class CSOAAttributeReference  *); /* linkage=_ZNK22CSOAAttributeReference5WidthEv */
	int Height(const class CSOAAttributeReference  *); /* linkage=_ZNK22CSOAAttributeReference6HeightEv */
	void SetDimensions(class CSOAAttributeReference *, int, int); /* linkage=_ZN22CSOAAttributeReference13SetDimensionsEii */
	float Element(const class CSOAAttributeReference  *, int, int); /* linkage=_ZNK22CSOAAttributeReference7ElementEii */
	void SetElement(class CSOAAttributeReference *, int, int, float); /* linkage=_ZN22CSOAAttributeReference10SetElementEiif */
	float * begin(class CSOAAttributeReference *); /* linkage=_ZN22CSOAAttributeReference5beginEv */
	float * end(class CSOAAttributeReference *); /* linkage=_ZN22CSOAAttributeReference3endEv */
};

// <047037E7> ../public/tier0/utlsoacontainer.h:1018
inline void CSOAAttributeReference::operator*=(float flScale)
{
} /* size: 0 */

// <044FF790> ../public/tier0/utlsoacontainer.h:1026
inline void CSOAAttributeReference::operator-=(float flAddend)
{
} /* size: 0 */

// <047037C1> ../public/tier0/utlsoacontainer.h:1030
inline void CSOAAttributeReference::operator=(float flValue)
{
} /* size: 0 */

// <0470379B> ../public/tier0/utlsoacontainer.h:1035
inline void CSOAAttributeReference::operator=(const CSOAAttributeReference& other)
{
} /* size: 0 */

// <04703768> ../public/tier0/utlsoacontainer.h:1077
inline void CSOAAttributeReference::Element(int nRow, int nCol)
{
} /* size: 0 */

// <04703732> ../public/tier0/utlsoacontainer.h:1182
// variable: 1
inline void CSOAContainer::operator[](int nAttrIdx)
{
	CSOAAttributeReference ret; // 1184
} /* size: 0, variables: 1 */

// <04703709> ../public/tier0/utlsoacontainer.h:1190
inline void CSOAContainer::Attr(int nAttrIdx)
{
} /* size: 0 */

// <046DD773> ../public/tier0/utlsoacontainer.h:1233
// variables: 8
void ApplyBinaryFunctionToAttr<MulSIMD<> CSOAContainer::>(int nDestAttr, const fltx4& fl4FnArg1)
{
	{
		FourVectors* pOut; // 1237
		size_t nRowToRowStride; // 1238
		int nRowCtr; // 1239
		{
			int nColCtr; // 1242
		}
	}
	{
		fltx4* pOut; // 1255
		size_t nRowToRowStride; // 1256
		int nRowCtr; // 1257
		{
			int nColCtr; // 1260
		}
	}
} /* size: 0 */

// <044DA50B> ../public/tier0/utlsoacontainer.h:1233
// variables: 8
void ApplyBinaryFunctionToAttr<AddSIMD<> CSOAContainer::>(int nDestAttr, const fltx4& fl4FnArg1)
{
	{
		FourVectors* pOut; // 1237
		size_t nRowToRowStride; // 1238
		int nRowCtr; // 1239
		{
			int nColCtr; // 1242
		}
	}
	{
		fltx4* pOut; // 1255
		size_t nRowToRowStride; // 1256
		int nRowCtr; // 1257
		{
			int nColCtr; // 1260
		}
	}
} /* size: 0 */

// <045033D4> ../public/tier0/utlsoacontainer.h:1271
// variables: 18
// function calls: 31
void ReduceAttr<AddSIMD<> CSOAContainer::>(int nSrcAttr, const fltx4& fl4InitialValue)
{
	fltx4 fl4Result; // 1273
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 1274
	{
		const fltx4* pIn; // 1277
		size_t nRowToRowStride; // 1278
		int nRowCtr; // 1279
		fltx4 fl4LastColumnMask; // 1280
		CSOAContainer::RowPtr<__vector(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 1277
		{
			int i; // 1283
			CSOAContainer::NumQuadsPerRow(); // 1283
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 896
		}
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 896
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
				const fltx4& b);  // 1288
		CSOAContainer::NumRows(); // 1279
		CSOAContainer::NumSlices(); // 1279
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 1280
		CSOAContainer::NumCols(); // 1280
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 1294
		{
			fltx4 retVal; // 1333
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1334
		}
		SplatZSIMD<>(const fltx4& a); // 1294
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 896
		{
			fltx4 retVal; // 1314
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1315
		}
		SplatYSIMD<>(const fltx4& a); // 1293
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 896
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 896
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <04502B7A> ../public/tier0/utlsoacontainer.h:1271
// variables: 18
// function calls: 31
void ReduceAttr<MaxSIMD<> CSOAContainer::>(int nSrcAttr, const fltx4& fl4InitialValue)
{
	fltx4 fl4Result; // 1273
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 1274
	{
		const fltx4* pIn; // 1277
		size_t nRowToRowStride; // 1278
		int nRowCtr; // 1279
		fltx4 fl4LastColumnMask; // 1280
		CSOAContainer::RowPtr<__vector(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 1277
		{
			int i; // 1283
			CSOAContainer::NumQuadsPerRow(); // 1283
			{
				fltx4 retVal; // 2228
				_mm_max_ps(__m128 __A,
						__m128 __B);  // 2229
			}
			MaxSIMD<>(const fltx4& a,
					const fltx4& b);  // 913
		}
		{
			fltx4 retVal; // 2228
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2229
		}
		MaxSIMD<>(const fltx4& a,
				const fltx4& b);  // 913
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
				const fltx4& b);  // 1288
		CSOAContainer::NumRows(); // 1279
		CSOAContainer::NumSlices(); // 1279
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 1280
		CSOAContainer::NumCols(); // 1280
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 1294
		{
			fltx4 retVal; // 1333
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1334
		}
		SplatZSIMD<>(const fltx4& a); // 1294
		{
			fltx4 retVal; // 2228
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2229
		}
		MaxSIMD<>(const fltx4& a,
				const fltx4& b);  // 913
		{
			fltx4 retVal; // 1314
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1315
		}
		SplatYSIMD<>(const fltx4& a); // 1293
		{
			fltx4 retVal; // 2228
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2229
		}
		MaxSIMD<>(const fltx4& a,
				const fltx4& b);  // 913
		{
			fltx4 retVal; // 2228
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2229
		}
		MaxSIMD<>(const fltx4& a,
				const fltx4& b);  // 913
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <04502320> ../public/tier0/utlsoacontainer.h:1271
// variables: 18
// function calls: 31
void ReduceAttr<MinSIMD<> CSOAContainer::>(int nSrcAttr, const fltx4& fl4InitialValue)
{
	fltx4 fl4Result; // 1273
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 1274
	{
		const fltx4* pIn; // 1277
		size_t nRowToRowStride; // 1278
		int nRowCtr; // 1279
		fltx4 fl4LastColumnMask; // 1280
		CSOAContainer::RowPtr<__vector(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 1277
		{
			int i; // 1283
			CSOAContainer::NumQuadsPerRow(); // 1283
			{
				fltx4 retVal; // 2200
				_mm_min_ps(__m128 __A,
						__m128 __B);  // 2201
			}
			MinSIMD<>(const fltx4& a,
					const fltx4& b);  // 918
		}
		{
			fltx4 retVal; // 2200
			_mm_min_ps(__m128 __A,
					__m128 __B);  // 2201
		}
		MinSIMD<>(const fltx4& a,
				const fltx4& b);  // 918
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
				const fltx4& b);  // 1288
		CSOAContainer::NumRows(); // 1279
		CSOAContainer::NumSlices(); // 1279
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 1280
		CSOAContainer::NumCols(); // 1280
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 1294
		{
			fltx4 retVal; // 1333
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1334
		}
		SplatZSIMD<>(const fltx4& a); // 1294
		{
			fltx4 retVal; // 2200
			_mm_min_ps(__m128 __A,
					__m128 __B);  // 2201
		}
		MinSIMD<>(const fltx4& a,
				const fltx4& b);  // 918
		{
			fltx4 retVal; // 1314
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1315
		}
		SplatYSIMD<>(const fltx4& a); // 1293
		{
			fltx4 retVal; // 2200
			_mm_min_ps(__m128 __A,
					__m128 __B);  // 2201
		}
		MinSIMD<>(const fltx4& a,
				const fltx4& b);  // 918
		{
			fltx4 retVal; // 2200
			_mm_min_ps(__m128 __A,
					__m128 __B);  // 2201
		}
		MinSIMD<>(const fltx4& a,
				const fltx4& b);  // 918
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <044D62FA> ../public/tier0/utlsoacontainer.h:1271
// variables: 6
void ReduceAttr<AddSIMD<> CSOAContainer::>(int nSrcAttr, const fltx4& fl4InitialValue)
{
	fltx4 fl4Result; // 1273
	{
		const fltx4* pIn; // 1277
		size_t nRowToRowStride; // 1278
		int nRowCtr; // 1279
		fltx4 fl4LastColumnMask; // 1280
		{
			int i; // 1283
		}
	}
} /* size: 0, variables: 1 */

// <044D626F> ../public/tier0/utlsoacontainer.h:1271
// variables: 6
void ReduceAttr<MaxSIMD<> CSOAContainer::>(int nSrcAttr, const fltx4& fl4InitialValue)
{
	fltx4 fl4Result; // 1273
	{
		const fltx4* pIn; // 1277
		size_t nRowToRowStride; // 1278
		int nRowCtr; // 1279
		fltx4 fl4LastColumnMask; // 1280
		{
			int i; // 1283
		}
	}
} /* size: 0, variables: 1 */

// <044D61E4> ../public/tier0/utlsoacontainer.h:1271
// variables: 6
void ReduceAttr<MinSIMD<> CSOAContainer::>(int nSrcAttr, const fltx4& fl4InitialValue)
{
	fltx4 fl4Result; // 1273
	{
		const fltx4* pIn; // 1277
		size_t nRowToRowStride; // 1278
		int nRowCtr; // 1279
		fltx4 fl4LastColumnMask; // 1280
		{
			int i; // 1283
		}
	}
} /* size: 0, variables: 1 */

// <00865F25> ../public/tier0/utlsoacontainer.h:1304
// member functions: 16
// member variable: 1
// class size: 16
class CSOAConstAttributeReference : public CSOAAttributeReference {
public:
	/* class CSOAAttributeReference <ancestor>; */ /* 0 16 */
	/* ../public/tier0/utlsoacontainer.h:1307 */
	void CSOAConstAttributeReference(CSOAConstAttributeReference* , const CSOAContainer* , int);
private:
	/* ../public/tier0/utlsoacontainer.h:1315 */
	void operator*=(const CSOAConstAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1316 */
	void operator+=(const CSOAConstAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1317 */
	void operator-=(const CSOAConstAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1318 */
	void operator=(const CSOAConstAttributeReference* , float);
	/* ../public/tier0/utlsoacontainer.h:1319 */
	void operator=(const CSOAConstAttributeReference* , const CSOAAttributeReference& );
	/* ../public/tier0/utlsoacontainer.h:1320 */
	void operator=(const CSOAConstAttributeReference* , const CSOAConstAttributeReference& );
	/* ../public/tier0/utlsoacontainer.h:1324 */
	void SetElement(CSOAConstAttributeReference* , int, int, float);
	void CSOAConstAttributeReference(class CSOAConstAttributeReference *, const class CSOAContainer  *, int); /* linkage=_ZN27CSOAConstAttributeReferenceC4EPK13CSOAContaineri */
	void operator*=(const class CSOAConstAttributeReference  *, float); /* linkage=_ZNK27CSOAConstAttributeReferencemLEf */
	void operator+=(const class CSOAConstAttributeReference  *, float); /* linkage=_ZNK27CSOAConstAttributeReferencepLEf */
	void operator-=(const class CSOAConstAttributeReference  *, float); /* linkage=_ZNK27CSOAConstAttributeReferencemIEf */
	void operator=(const class CSOAConstAttributeReference  *, float); /* linkage=_ZNK27CSOAConstAttributeReferenceaSEf */
	void operator=(const class CSOAConstAttributeReference  *, const class CSOAAttributeReference  &); /* linkage=_ZNK27CSOAConstAttributeReferenceaSERK22CSOAAttributeReference */
	void operator=(const class CSOAConstAttributeReference  *, const class CSOAConstAttributeReference  &); /* linkage=_ZNK27CSOAConstAttributeReferenceaSERKS_ */
	void SetElement(class CSOAConstAttributeReference *, int, int, float); /* linkage=_ZN27CSOAConstAttributeReference10SetElementEiif */
};

// <047036E8> ../public/tier0/utlsoacontainer.h:1307
void CSOAConstAttributeReference::CSOAConstAttributeReference(const CSOAContainer* pContainer, int nAttrIdx)
{
} /* size: 0 */

// <047036B5> ../public/tier0/utlsoacontainer.h:1307
inline void CSOAConstAttributeReference::CSOAConstAttributeReference(const CSOAContainer* pContainer, int nAttrIdx)
{
} /* size: 0 */

// <00865675> ../public/tier0/utlsoacontainer.h:1427
// member functions: 2
// member variables: 4
// class size: 704
class KMeansQuantizedValue {
	FourVectors m_vecValuePosition; /* 0 48 */
	fltx4 m_fl4Values[32]; /* 48 512 */
	float m_flValueAccumulators[1][32]; /* 560 128 */
	float m_flWeightAccumulators[1]; /* 688 4 */
	/* ../public/tier0/utlsoacontainer.h:1436 */
	float operator()(KMeansQuantizedValue* , int);
	float [1]:32;
	float [1]:32;
	float [1]:32;
	float operator()(class KMeansQuantizedValue *, int); /* linkage=_ZN20KMeansQuantizedValueclEi */
};

// <0447D16E> ../public/tier0/utlsoacontainer.h:1443
// member function: 1
// member variable: 1
// class size: 256
class KMeansSampleDescriptor {
	fltx4 * m_pInputValues[32]; /* 0 256 */
	/* ../public/tier0/utlsoacontainer.h:1448 */
	const fltx4& operator()(const KMeansSampleDescriptor* , int);
};

// <045010C9> ../public/tier0/utlsoacontainer.h:1464
void IKMeansErrorMetric::PostAdjustQuantizedValue(KMeansQuantizedValue& valueToAdjust)
{
} /* size: 0 */

// <044FF70B> ../public/tier0/utlsoacontainer.h:1464
inline void IKMeansErrorMetric::PostAdjustQuantizedValue(KMeansQuantizedValue& valueToAdjust)
{
} /* size: 0 */

// <045010FA> ../public/tier0/utlsoacontainer.h:1469
void IKMeansErrorMetric::PostStep(const int* pFieldIndices, int nNumFields, KMeansQuantizedValue* pValues, int nNumQuantizedValues, int nIndexField, CSOAContainer& data)
{
} /* size: 0 */

// <044FF69E> ../public/tier0/utlsoacontainer.h:1469
inline void IKMeansErrorMetric::PostStep(const int* pFieldIndices, int nNumFields, KMeansQuantizedValue* pValues, int nNumQuantizedValues, int nIndexField, CSOAContainer& data)
{
} /* size: 0 */

// <0470369E> ../public/tier0/utlsoacontainer.h:1480
void CSOAContainer::CSOAContainer()
{
} /* size: 0 */

// <04703682> ../public/tier0/utlsoacontainer.h:1480
inline void CSOAContainer::CSOAContainer()
{
} /* size: 0 */

// <047BD190> ../public/tier0/utlsoacontainer.h:1489
inline void CSOAContainer::HasAllocatedMemory(int nAttrIdx)
{
} /* size: 0 */

// <047BD173> ../public/tier0/utlsoacontainer.h:1510
inline void CSOAContainer::NumRows()
{
} /* size: 0 */

// <047BD156> ../public/tier0/utlsoacontainer.h:1515
inline void CSOAContainer::NumCols()
{
} /* size: 0 */

// <047BD139> ../public/tier0/utlsoacontainer.h:1519
inline void CSOAContainer::NumSlices()
{
} /* size: 0 */

// <047035B3> ../public/tier0/utlsoacontainer.h:1527
inline void CSOAContainer::NumQuadsPerRow()
{
} /* size: 0 */

// <0470358A> ../public/tier0/utlsoacontainer.h:1545
inline void CSOAContainer::RowToRowStep(int nAttrIdx)
{
} /* size: 0 */

// <046DD869> ../public/tier0/utlsoacontainer.h:1550
inline void CSOAContainer::RowPtr<float>(int nAttributeIdx, int nRowNumber, int nSliceNumber)
{
} /* size: 0 */

// <046DD822> ../public/tier0/utlsoacontainer.h:1550
inline void CSOAContainer::RowPtr<FourVectors>(int nAttributeIdx, int nRowNumber, int nSliceNumber)
{
} /* size: 0 */

// <046CA9F8> ../public/tier0/utlsoacontainer.h:1550
inline void CSOAContainer::RowPtr<__vector(int nAttributeIdx, int nRowNumber, int nSliceNumber)
{
} /* size: 0 */

// <044DA473> ../public/tier0/utlsoacontainer.h:1550
inline void RowPtr<unsigned CSOAContainer::char>(int nAttributeIdx, int nRowNumber, int nSliceNumber)
{
} /* size: 0 */

// <044FF561> ../public/tier0/utlsoacontainer.h:1562
inline const void* CSOAContainer::ConstRowPtr(int nAttributeIdx, int nRowNumber, int nSliceNumber)
{
} /* size: 0 */

// <047B0CD8> ../public/tier0/utlsoacontainer.h:1573
inline void CSOAContainer::ElementPointer<float>(int nAttributeIdx, int nX, int nY, int nZ)
{
} /* size: 0 */

// <044FF538> ../public/tier0/utlsoacontainer.h:1603
inline void CSOAContainer::ItemByteStride(int nAttributeIdx)
{
} /* size: 0 */

// <04703561> ../public/tier0/utlsoacontainer.h:1612
inline void CSOAContainer::MoveDataFrom(CSOAContainer& other)
{
} /* size: 0 */

// <04703538> ../public/tier0/utlsoacontainer.h:1643
// variable: 1
inline void CSOAAttributeIterator::Next()
{
	{
		int i; // 1647
	}
} /* size: 0 */

// <0470351C> ../public/tier0/utlsoacontainer.h:1660
void CSOAAttributeIterator::CSOAAttributeIterator(const CSOAContainer& src)
{
} /* size: 0 */

// <047034F3> ../public/tier0/utlsoacontainer.h:1660
inline void CSOAAttributeIterator::CSOAAttributeIterator(const CSOAContainer& src)
{
} /* size: 0 */

// <044FF4AB> ../public/tier0/utlsoacontainer.h:1665
// variable: 1
inline FourVectors CompressSIMD(const FourVectors& a, const FourVectors& b)
{
	FourVectors ret; // 1667
} /* size: 0, variables: 1 */

// <044FF45A> ../public/tier0/utlsoacontainer.h:1674
// variable: 1
inline FourVectors Compress4SIMD(const FourVectors& a, const FourVectors& b, const FourVectors& c, const FourVectors& d)
{
	FourVectors ret; // 1677
} /* size: 0, variables: 1 */

