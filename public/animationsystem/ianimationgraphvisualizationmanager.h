
//
// public/animationsystem/ianimationgraphvisualizationmanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 72
//	classes: 14
//

// <00B70CCF> ../public/animationsystem/ianimationgraphvisualizationmanager.h:7
// member functions: 14
// member variables: 2
// vtable entries: 2
// class size: 40
class IAnimationGraphVisualizerInfo {
	int ()(void) * * _vptr.IAnimationGraphVisualizerInfo; /* 0 8 */
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:10 */
	virtual void ~IAnimationGraphVisualizerInfo(IAnimationGraphVisualizerInfo* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:11 */
	void IAnimationGraphVisualizerInfo(IAnimationGraphVisualizerInfo* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:13 */
	virtual const char* GetName(const IAnimationGraphVisualizerInfo* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:14 */
	virtual void GetSubVisualizerNamesAndValues(const IAnimationGraphVisualizerInfo* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , CUtlVector<long long int, CUtlMemory<long long int, int> >& );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:18 */
	bool ShouldVisualize(const IAnimationGraphVisualizerInfo* , int);
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:28 */
	void SetShouldVisualize(IAnimationGraphVisualizerInfo* , int, bool);
private:
	CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> > m_ShouldVisualize; /* 8 32 */
	void IAnimationGraphVisualizerInfo(class IAnimationGraphVisualizerInfo *, const class IAnimationGraphVisualizerInfo  &); /* linkage=_ZN29IAnimationGraphVisualizerInfoC4ERKS_ */
	virtual void ~IAnimationGraphVisualizerInfo(class IAnimationGraphVisualizerInfo *); /* linkage=_ZN29IAnimationGraphVisualizerInfoD4Ev */
	void IAnimationGraphVisualizerInfo(class IAnimationGraphVisualizerInfo *); /* linkage=_ZN29IAnimationGraphVisualizerInfoC4Ev */
	virtual const char  * GetName(const class IAnimationGraphVisualizerInfo  *); /* linkage=_ZNK29IAnimationGraphVisualizerInfo7GetNameEv */
	virtual void GetSubVisualizerNamesAndValues(const class IAnimationGraphVisualizerInfo  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, class CUtlVector<long long int, CUtlMemory<long long int, int> > &); /* linkage=_ZNK29IAnimationGraphVisualizerInfo30GetSubVisualizerNamesAndValuesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEERS0_IxS2_IxiEE */
	bool ShouldVisualize(const class IAnimationGraphVisualizerInfo  *, int); /* linkage=_ZNK29IAnimationGraphVisualizerInfo15ShouldVisualizeEi */
	void SetShouldVisualize(class IAnimationGraphVisualizerInfo *, int, bool); /* linkage=_ZN29IAnimationGraphVisualizerInfo18SetShouldVisualizeEib */
	void EnumToNameValueVectors<FootLockSubVisualization>(class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, class CUtlVector<long long int, CUtlMemory<long long int, int> > &); /* linkage=_ZN29IAnimationGraphVisualizerInfo22EnumToNameValueVectorsI24FootLockSubVisualizationEEvR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEERS2_IxS4_IxiEE */
};

// <00DA888B> ../public/animationsystem/ianimationgraphvisualizationmanager.h:7
// member functions: 15
// member variables: 2
// vtable entries: 2
// class size: 40
class IAnimationGraphVisualizerInfo {
	void IAnimationGraphVisualizerInfo(IAnimationGraphVisualizerInfo* , const IAnimationGraphVisualizerInfo& );
	int ()(void) * * _vptr.IAnimationGraphVisualizerInfo; /* 0 8 */
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:10 */
	virtual void ~IAnimationGraphVisualizerInfo(IAnimationGraphVisualizerInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:11 */
	void IAnimationGraphVisualizerInfo(IAnimationGraphVisualizerInfo* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:13 */
	virtual const char* GetName(const IAnimationGraphVisualizerInfo* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:14 */
	virtual void GetSubVisualizerNamesAndValues(const IAnimationGraphVisualizerInfo* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , CUtlVector<long long int, CUtlMemory<long long int, int> >& );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:18 */
	bool ShouldVisualize(const IAnimationGraphVisualizerInfo* , int);
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:28 */
	void SetShouldVisualize(IAnimationGraphVisualizerInfo* , int, bool);
private:
	CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> > m_ShouldVisualize; /* 8 32 */
	void IAnimationGraphVisualizerInfo(class IAnimationGraphVisualizerInfo *, const class IAnimationGraphVisualizerInfo  &); /* linkage=_ZN29IAnimationGraphVisualizerInfoC4ERKS_ */
	virtual void ~IAnimationGraphVisualizerInfo(class IAnimationGraphVisualizerInfo *); /* linkage=_ZN29IAnimationGraphVisualizerInfoD4Ev */
	void IAnimationGraphVisualizerInfo(class IAnimationGraphVisualizerInfo *); /* linkage=_ZN29IAnimationGraphVisualizerInfoC4Ev */
	virtual const char  * GetName(const class IAnimationGraphVisualizerInfo  *); /* linkage=_ZNK29IAnimationGraphVisualizerInfo7GetNameEv */
	virtual void GetSubVisualizerNamesAndValues(const class IAnimationGraphVisualizerInfo  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, class CUtlVector<long long int, CUtlMemory<long long int, int> > &); /* linkage=_ZNK29IAnimationGraphVisualizerInfo30GetSubVisualizerNamesAndValuesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEERS0_IxS2_IxiEE */
	bool ShouldVisualize(const class IAnimationGraphVisualizerInfo  *, int); /* linkage=_ZNK29IAnimationGraphVisualizerInfo15ShouldVisualizeEi */
	void SetShouldVisualize(class IAnimationGraphVisualizerInfo *, int, bool); /* linkage=_ZN29IAnimationGraphVisualizerInfo18SetShouldVisualizeEib */
	void EnumToNameValueVectors<FootLockSubVisualization>(class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, class CUtlVector<long long int, CUtlMemory<long long int, int> > &); /* linkage=_ZN29IAnimationGraphVisualizerInfo22EnumToNameValueVectorsI24FootLockSubVisualizationEEvR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEERS2_IxS4_IxiEE */
};

// <017016B5> ../public/animationsystem/ianimationgraphvisualizationmanager.h:7
// member functions: 15
// member variables: 2
// vtable entries: 2
// class size: 40
class IAnimationGraphVisualizerInfo {
	void IAnimationGraphVisualizerInfo(IAnimationGraphVisualizerInfo* , const IAnimationGraphVisualizerInfo& );
	int ()(void) * * _vptr.IAnimationGraphVisualizerInfo; /* 0 8 */
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:10 */
	virtual void ~IAnimationGraphVisualizerInfo(IAnimationGraphVisualizerInfo* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:11 */
	void IAnimationGraphVisualizerInfo(IAnimationGraphVisualizerInfo* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:13 */
	virtual const char* GetName(const IAnimationGraphVisualizerInfo* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:14 */
	virtual void GetSubVisualizerNamesAndValues(const IAnimationGraphVisualizerInfo* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , CUtlVector<long long int, CUtlMemory<long long int, int> >& );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:18 */
	bool ShouldVisualize(const IAnimationGraphVisualizerInfo* , int);
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:28 */
	void SetShouldVisualize(IAnimationGraphVisualizerInfo* , int, bool);
private:
	CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> > m_ShouldVisualize; /* 8 32 */
	void IAnimationGraphVisualizerInfo(class IAnimationGraphVisualizerInfo *, const class IAnimationGraphVisualizerInfo  &); /* linkage=_ZN29IAnimationGraphVisualizerInfoC4ERKS_ */
	virtual void ~IAnimationGraphVisualizerInfo(class IAnimationGraphVisualizerInfo *); /* linkage=_ZN29IAnimationGraphVisualizerInfoD4Ev */
	void IAnimationGraphVisualizerInfo(class IAnimationGraphVisualizerInfo *); /* linkage=_ZN29IAnimationGraphVisualizerInfoC4Ev */
	virtual const char  * GetName(const class IAnimationGraphVisualizerInfo  *); /* linkage=_ZNK29IAnimationGraphVisualizerInfo7GetNameEv */
	virtual void GetSubVisualizerNamesAndValues(const class IAnimationGraphVisualizerInfo  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, class CUtlVector<long long int, CUtlMemory<long long int, int> > &); /* linkage=_ZNK29IAnimationGraphVisualizerInfo30GetSubVisualizerNamesAndValuesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEERS0_IxS2_IxiEE */
	bool ShouldVisualize(const class IAnimationGraphVisualizerInfo  *, int); /* linkage=_ZNK29IAnimationGraphVisualizerInfo15ShouldVisualizeEi */
	void SetShouldVisualize(class IAnimationGraphVisualizerInfo *, int, bool); /* linkage=_ZN29IAnimationGraphVisualizerInfo18SetShouldVisualizeEib */
	void EnumToNameValueVectors<FootLockSubVisualization>(class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, class CUtlVector<long long int, CUtlMemory<long long int, int> > &); /* linkage=_ZN29IAnimationGraphVisualizerInfo22EnumToNameValueVectorsI24FootLockSubVisualizationEEvR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEERS2_IxS4_IxiEE */
};

// <017CF172> ../public/animationsystem/ianimationgraphvisualizationmanager.h:7
// member functions: 16
// member variables: 2
// vtable entries: 2
// class size: 40
class IAnimationGraphVisualizerInfo {
	void IAnimationGraphVisualizerInfo(IAnimationGraphVisualizerInfo* , const IAnimationGraphVisualizerInfo& );
	int ()(void) * * _vptr.IAnimationGraphVisualizerInfo; /* 0 8 */
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:10 */
	virtual void ~IAnimationGraphVisualizerInfo(IAnimationGraphVisualizerInfo* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:11 */
	void IAnimationGraphVisualizerInfo(IAnimationGraphVisualizerInfo* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:13 */
	virtual const char* GetName(const IAnimationGraphVisualizerInfo* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:14 */
	virtual void GetSubVisualizerNamesAndValues(const IAnimationGraphVisualizerInfo* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , CUtlVector<long long int, CUtlMemory<long long int, int> >& );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:18 */
	bool ShouldVisualize(const IAnimationGraphVisualizerInfo* , int);
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:28 */
	void SetShouldVisualize(IAnimationGraphVisualizerInfo* , int, bool);
private:
	CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> > m_ShouldVisualize; /* 8 32 */
protected:
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:43 */
	void EnumToNameValueVectors<FootLockSubVisualization>(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , CUtlVector<long long int, CUtlMemory<long long int, int> >& );
	void IAnimationGraphVisualizerInfo(class IAnimationGraphVisualizerInfo *, const class IAnimationGraphVisualizerInfo  &); /* linkage=_ZN29IAnimationGraphVisualizerInfoC4ERKS_ */
	virtual void ~IAnimationGraphVisualizerInfo(class IAnimationGraphVisualizerInfo *); /* linkage=_ZN29IAnimationGraphVisualizerInfoD4Ev */
	void IAnimationGraphVisualizerInfo(class IAnimationGraphVisualizerInfo *); /* linkage=_ZN29IAnimationGraphVisualizerInfoC4Ev */
	virtual const char  * GetName(const class IAnimationGraphVisualizerInfo  *); /* linkage=_ZNK29IAnimationGraphVisualizerInfo7GetNameEv */
	virtual void GetSubVisualizerNamesAndValues(const class IAnimationGraphVisualizerInfo  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, class CUtlVector<long long int, CUtlMemory<long long int, int> > &); /* linkage=_ZNK29IAnimationGraphVisualizerInfo30GetSubVisualizerNamesAndValuesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEERS0_IxS2_IxiEE */
	bool ShouldVisualize(const class IAnimationGraphVisualizerInfo  *, int); /* linkage=_ZNK29IAnimationGraphVisualizerInfo15ShouldVisualizeEi */
	void SetShouldVisualize(class IAnimationGraphVisualizerInfo *, int, bool); /* linkage=_ZN29IAnimationGraphVisualizerInfo18SetShouldVisualizeEib */
	void EnumToNameValueVectors<FootLockSubVisualization>(class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, class CUtlVector<long long int, CUtlMemory<long long int, int> > &); /* linkage=_ZN29IAnimationGraphVisualizerInfo22EnumToNameValueVectorsI24FootLockSubVisualizationEEvR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEERS2_IxS4_IxiEE */
};

// <01971128> ../public/animationsystem/ianimationgraphvisualizationmanager.h:10
void IAnimationGraphVisualizerInfo::~IAnimationGraphVisualizerInfo()
{
} /* size: 0 */

// <019710F8> ../public/animationsystem/ianimationgraphvisualizationmanager.h:10
inline void IAnimationGraphVisualizerInfo::~IAnimationGraphVisualizerInfo()
{
} /* size: 0 */

// <01914226> ../public/animationsystem/ianimationgraphvisualizationmanager.h:11
void IAnimationGraphVisualizerInfo::IAnimationGraphVisualizerInfo()
{
} /* size: 0 */

// <00E81DF1> ../public/animationsystem/ianimationgraphvisualizationmanager.h:18
inline void IAnimationGraphVisualizerInfo::ShouldVisualize(int nSubVisualization)
{
} /* size: 0 */

// <017EE830> ../public/animationsystem/ianimationgraphvisualizationmanager.h:43
// variables: 7
// function calls: 40
void EnumToNameValueVectors<FootLockSubVisualization>(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& names, CUtlVector<long long int, CUtlMemory<long long int, int> >& values)
{
	CSchemaType* pSchemaType; // 45
	CSchemaType_DeclaredEnum* pDeclaredEnum; // 46
	EnumIntrospectionHandle_t hEnum; // 47
	int nNumValues; // 49
	{
		int n; // 53
		{
			EnumeratorIntrospectionHandle_t pEnumerator; // 55
			const char* pFriendlyName; // 57
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 64
			CUtlString::operator=(
					const char* src);  // 64
			CSchemaEnumeratorInfo::GetValue(); // 67
			CUtlMemory<long long int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::operator[](
					int i);  // 67
			CSchemaEnumInfo::GetEnumerator(
					int i);  // 55
			CSchemaMetadataSet::CSchemaMetadataSet(
						uint16 nNumEntries,
						const SchemaMetadataEntryData_t* pEntries);  // 16
			CSchemaEnumeratorInfo::GetMetadata(); // 88
			SchemaMetaGetPtr2(EnumeratorIntrospectionHandle_t enumeratorInfo,
						const char* pKey);  // 26
			TagName(void); // 26
			GetPtr(EnumeratorIntrospectionHandle_t pObj); // 26
			GetValue(EnumeratorIntrospectionHandle_t pObj,
				const char* defaultValue);  // 57
			CSchemaEnumeratorInfo::GetName(); // 60
			CUtlString::operator=(
					const char* src);  // 60
		}
	}
	SchemaTypeScope(void); // 23
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<FootLockSubVisualization>(void); // 45
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredEnum>(); // 46
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 744
	CSchemaType_DeclaredEnum::LookupEnum(); // 740
	CSchemaType_DeclaredEnum::LookupEnum(); // 709
	CSchemaType_DeclaredEnum::GetEnum(); // 47
	CSchemaEnumInfo::GetEnumeratorCount(); // 49
	CUtlMemory<long long int, int>::NumAllocated(); // 782
	CUtlMemory<long long int, int>::IsGrowable(); // 823
	CUtlMemory<long long int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<long long int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<long long int, int>::Grow(
		int num);  // 806
	CUtlMemory<long long int, int>::Base(); // 112
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Base(); // 368
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::SetCount(
		int count);  // 51
} /* size: 678, variables: 4, inline expansions: 25 (1972 bytes) */

// <00E5B3BB> ../public/animationsystem/ianimationgraphvisualizationmanager.h:76
void IAnimationGraphVisualizerRegistry::IAnimationGraphVisualizerRegistry()
{
} /* size: 0 */

// <00E5B39F> ../public/animationsystem/ianimationgraphvisualizationmanager.h:76
inline void IAnimationGraphVisualizerRegistry::IAnimationGraphVisualizerRegistry()
{
} /* size: 0 */

// <00C0A127> ../public/animationsystem/ianimationgraphvisualizationmanager.h:76
// member functions: 8
// member variable: 1
// vtable entries: 2
// class size: 8
class IAnimationGraphVisualizerRegistry {
	int ()(void) * * _vptr.IAnimationGraphVisualizerRegistry; /* 0 8 */
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:79 */
	virtual void ~IAnimationGraphVisualizerRegistry(IAnimationGraphVisualizerRegistry* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:80 */
	virtual void Register(IAnimationGraphVisualizerRegistry* , IAnimationGraphVisualizerInfo* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:82 */
	virtual CUtlVector<IAnimationGraphVisualizerInfo*, CUtlMemory<IAnimationGraphVisualizerInfo*, int> > GetVisualizers(IAnimationGraphVisualizerRegistry* );
	void IAnimationGraphVisualizerRegistry(class IAnimationGraphVisualizerRegistry *, const class IAnimationGraphVisualizerRegistry  &); /* linkage=_ZN33IAnimationGraphVisualizerRegistryC4ERKS_ */
	void IAnimationGraphVisualizerRegistry(class IAnimationGraphVisualizerRegistry *); /* linkage=_ZN33IAnimationGraphVisualizerRegistryC4Ev */
	virtual void ~IAnimationGraphVisualizerRegistry(class IAnimationGraphVisualizerRegistry *); /* linkage=_ZN33IAnimationGraphVisualizerRegistryD4Ev */
	virtual void Register(class IAnimationGraphVisualizerRegistry *, class IAnimationGraphVisualizerInfo *); /* linkage=_ZN33IAnimationGraphVisualizerRegistry8RegisterEP29IAnimationGraphVisualizerInfo */
	virtual class CUtlVector<IAnimationGraphVisualizerInfo*, CUtlMemory<IAnimationGraphVisualizerInfo*, int> > GetVisualizers(class IAnimationGraphVisualizerRegistry *); /* linkage=_ZN33IAnimationGraphVisualizerRegistry14GetVisualizersEv */
};

// <00DF2CD8> ../public/animationsystem/ianimationgraphvisualizationmanager.h:76
// member functions: 10
// member variable: 1
// vtable entries: 2
// class size: 8
class IAnimationGraphVisualizerRegistry {
	void IAnimationGraphVisualizerRegistry(IAnimationGraphVisualizerRegistry* , const IAnimationGraphVisualizerRegistry& );
	void IAnimationGraphVisualizerRegistry(IAnimationGraphVisualizerRegistry* );
	int ()(void) * * _vptr.IAnimationGraphVisualizerRegistry; /* 0 8 */
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:79 */
	virtual void ~IAnimationGraphVisualizerRegistry(IAnimationGraphVisualizerRegistry* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:80 */
	virtual void Register(IAnimationGraphVisualizerRegistry* , IAnimationGraphVisualizerInfo* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:82 */
	virtual CUtlVector<IAnimationGraphVisualizerInfo*, CUtlMemory<IAnimationGraphVisualizerInfo*, int> > GetVisualizers(IAnimationGraphVisualizerRegistry* );
	void IAnimationGraphVisualizerRegistry(class IAnimationGraphVisualizerRegistry *, const class IAnimationGraphVisualizerRegistry  &); /* linkage=_ZN33IAnimationGraphVisualizerRegistryC4ERKS_ */
	void IAnimationGraphVisualizerRegistry(class IAnimationGraphVisualizerRegistry *); /* linkage=_ZN33IAnimationGraphVisualizerRegistryC4Ev */
	virtual void ~IAnimationGraphVisualizerRegistry(class IAnimationGraphVisualizerRegistry *); /* linkage=_ZN33IAnimationGraphVisualizerRegistryD4Ev */
	virtual void Register(class IAnimationGraphVisualizerRegistry *, class IAnimationGraphVisualizerInfo *); /* linkage=_ZN33IAnimationGraphVisualizerRegistry8RegisterEP29IAnimationGraphVisualizerInfo */
	virtual class CUtlVector<IAnimationGraphVisualizerInfo*, CUtlMemory<IAnimationGraphVisualizerInfo*, int> > GetVisualizers(class IAnimationGraphVisualizerRegistry *); /* linkage=_ZN33IAnimationGraphVisualizerRegistry14GetVisualizersEv */
};

// <00E81DDA> ../public/animationsystem/ianimationgraphvisualizationmanager.h:79
void IAnimationGraphVisualizerRegistry::~IAnimationGraphVisualizerRegistry()
{
} /* size: 0 */

// <00E81DAA> ../public/animationsystem/ianimationgraphvisualizationmanager.h:79
inline void IAnimationGraphVisualizerRegistry::~IAnimationGraphVisualizerRegistry()
{
} /* size: 0 */

// <00AA6E23> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:93
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <0026135A> ../public/animationsystem/ianimationgraphvisualizationmanager.h:93
// member functions: 2
// class size: 1
class CSchemaTypeOf<CAnimationGraphVisualizerPrimitiveType> {
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:93 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:93 */
	const char* GetEnumName(void);
};

// <00AA6B0C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:96
inline void CAnimationGraphVisualizerPrimitiveBase::operator=(const CAnimationGraphVisualizerPrimitiveBase &)
{
} /* size: 0 */

// <00A976E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:96
// member functions: 42
// member variables: 2
// static member variable: 1
// vtable entries: 3
// class size: 16
class CAnimationGraphVisualizerPrimitiveBase {
	CAnimationGraphVisualizerPrimitiveBase& operator=(CAnimationGraphVisualizerPrimitiveBase* , CAnimationGraphVisualizerPrimitiveBase& );
	CAnimationGraphVisualizerPrimitiveBase& operator=(CAnimationGraphVisualizerPrimitiveBase* , const CAnimationGraphVisualizerPrimitiveBase& );
	void ~CAnimationGraphVisualizerPrimitiveBase(CAnimationGraphVisualizerPrimitiveBase* );
	void CAnimationGraphVisualizerPrimitiveBase(CAnimationGraphVisualizerPrimitiveBase* , CAnimationGraphVisualizerPrimitiveBase& );
	void CAnimationGraphVisualizerPrimitiveBase(CAnimationGraphVisualizerPrimitiveBase* , const CAnimationGraphVisualizerPrimitiveBase& );
	int ()(void) * * _vptr.CAnimationGraphVisualizerPrimitiveBase; /* 0 8 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:98 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:98 */
	CAnimationGraphVisualizerPrimitiveBase* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:77 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:106 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:52 */
	void Schema_CompileTimeVerificationFunction(CAnimationGraphVisualizerPrimitiveBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:98 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:98 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:98 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimationGraphVisualizerPrimitiveBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:99 */
	void KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerPrimitiveBase* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:99 */
	CAnimationGraphVisualizerPrimitiveBase* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:114 */
	virtual void KV3TransferSave(const CAnimationGraphVisualizerPrimitiveBase* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:124 */
	virtual void KV3TransferLoad(CAnimationGraphVisualizerPrimitiveBase* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:119 */
	void KV3TransferSave_CAnimationGraphVisualizerPrimitiveBase(const CAnimationGraphVisualizerPrimitiveBase* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:129 */
	void KV3TransferLoad_CAnimationGraphVisualizerPrimitiveBase(CAnimationGraphVisualizerPrimitiveBase* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:102 */
	void CAnimationGraphVisualizerPrimitiveBase(CAnimationGraphVisualizerPrimitiveBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:106 */
	void CAnimationGraphVisualizerPrimitiveBase(CAnimationGraphVisualizerPrimitiveBase* , CAnimationGraphVisualizerPrimitiveType);
	CAnimationGraphVisualizerPrimitiveType m_Type; /* 8 4 */
	class CAnimationGraphVisualizerPrimitiveBase & operator=(class CAnimationGraphVisualizerPrimitiveBase *, class CAnimationGraphVisualizerPrimitiveBase &); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBaseaSEOS_ */
	class CAnimationGraphVisualizerPrimitiveBase & operator=(class CAnimationGraphVisualizerPrimitiveBase *, const class CAnimationGraphVisualizerPrimitiveBase  &); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBaseaSERKS_ */
	void ~CAnimationGraphVisualizerPrimitiveBase(class CAnimationGraphVisualizerPrimitiveBase *); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBaseD4Ev */
	void CAnimationGraphVisualizerPrimitiveBase(class CAnimationGraphVisualizerPrimitiveBase *, class CAnimationGraphVisualizerPrimitiveBase &); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBaseC4EOS_ */
	void CAnimationGraphVisualizerPrimitiveBase(class CAnimationGraphVisualizerPrimitiveBase *, const class CAnimationGraphVisualizerPrimitiveBase  &); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBaseC4ERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBase17GetPrimaryBindingEv */
	class CAnimationGraphVisualizerPrimitiveBase * Schema_MarkHelperFn(void); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBase19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBase15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <aac825> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:106 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBase32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAnimationGraphVisualizerPrimitiveBase *); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBase38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBase20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBase22Schema_StaticClassnameEv */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimationGraphVisualizerPrimitiveBase  *); /* linkage=_ZNK38CAnimationGraphVisualizerPrimitiveBase21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAnimationGraphVisualizerPrimitiveBase  *, char &); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBase31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAnimationGraphVisualizerPrimitiveBase * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBase32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAnimationGraphVisualizerPrimitiveBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK38CAnimationGraphVisualizerPrimitiveBase15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimationGraphVisualizerPrimitiveBase *, class CKV3TransferLoadContext *); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBase15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimationGraphVisualizerPrimitiveBase(const class CAnimationGraphVisualizerPrimitiveBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK38CAnimationGraphVisualizerPrimitiveBase54KV3TransferSave_CAnimationGraphVisualizerPrimitiveBaseEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimationGraphVisualizerPrimitiveBase(class CAnimationGraphVisualizerPrimitiveBase *, class CKV3TransferLoadContext *); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBase54KV3TransferLoad_CAnimationGraphVisualizerPrimitiveBaseEP23CKV3TransferLoadContext */
	void CAnimationGraphVisualizerPrimitiveBase(class CAnimationGraphVisualizerPrimitiveBase *); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBaseC4Ev */
	void CAnimationGraphVisualizerPrimitiveBase(class CAnimationGraphVisualizerPrimitiveBase *, enum CAnimationGraphVisualizerPrimitiveType); /* linkage=_ZN38CAnimationGraphVisualizerPrimitiveBaseC4E38CAnimationGraphVisualizerPrimitiveType */
};

// <00E81DA4> ../public/animationsystem/ianimationgraphvisualizationmanager.h:98
void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00E81D8C> ../public/animationsystem/ianimationgraphvisualizationmanager.h:98
void CAnimationGraphVisualizerPrimitiveBase::Schema_DynamicBinding()
{
} /* size: 0 */

// <00AA6E17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:98
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <00AA6D5F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:98
// function calls: 3
void CAnimationGraphVisualizerPrimitiveBase::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 106
	Schema_VerifyBindingIsRegistered(void); // 98
	GetPrimaryBinding(void); // 98
} /* size: 75, inline expansions: 3 (78 bytes) */

// <00AA6D48> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:102
void CAnimationGraphVisualizerPrimitiveBase::CAnimationGraphVisualizerPrimitiveBase()
{
} /* size: 0 */

// <00AA6D2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:102
inline void CAnimationGraphVisualizerPrimitiveBase::CAnimationGraphVisualizerPrimitiveBase()
{
} /* size: 0 */

// <00E81D70> ../public/animationsystem/ianimationgraphvisualizationmanager.h:106
void CAnimationGraphVisualizerPrimitiveBase::CAnimationGraphVisualizerPrimitiveBase(CAnimationGraphVisualizerPrimitiveType type)
{
} /* size: 0 */

// <00E81D4B> ../public/animationsystem/ianimationgraphvisualizationmanager.h:106
inline void CAnimationGraphVisualizerPrimitiveBase::CAnimationGraphVisualizerPrimitiveBase(CAnimationGraphVisualizerPrimitiveType type)
{
} /* size: 0 */

// <00E5A74E> ../public/animationsystem/ianimationgraphvisualizationmanager.h:115
void CAnimationGraphVisualizerText::~CAnimationGraphVisualizerText()
{
} /* size: 0 */

// <00E5A732> ../public/animationsystem/ianimationgraphvisualizationmanager.h:115
inline void CAnimationGraphVisualizerText::~CAnimationGraphVisualizerText()
{
} /* size: 0 */

// <00AA6166> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:115
inline void CAnimationGraphVisualizerText::operator=(const CAnimationGraphVisualizerText &)
{
} /* size: 0 */

// <00A979A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:115
// member functions: 42
// member variables: 4
// static member variable: 1
// vtable entries: 3
// class size: 48
class CAnimationGraphVisualizerText : public CAnimationGraphVisualizerPrimitiveBase {
public:
	/* class CAnimationGraphVisualizerPrimitiveBase <ancestor>; */ /* 0 16 */
	void ~CAnimationGraphVisualizerText(CAnimationGraphVisualizerText* );
	void CAnimationGraphVisualizerText(CAnimationGraphVisualizerText* , CAnimationGraphVisualizerText& );
	void CAnimationGraphVisualizerText(CAnimationGraphVisualizerText* , const CAnimationGraphVisualizerText& );
	CAnimationGraphVisualizerText& operator=(CAnimationGraphVisualizerText* , CAnimationGraphVisualizerText& );
	CAnimationGraphVisualizerText& operator=(CAnimationGraphVisualizerText* , const CAnimationGraphVisualizerText& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:117 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:117 */
	CAnimationGraphVisualizerText* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:184 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:213 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:142 */
	void Schema_CompileTimeVerificationFunction(CAnimationGraphVisualizerText* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:117 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:117 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:117 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimationGraphVisualizerText* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:118 */
	void KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerText* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:118 */
	CAnimationGraphVisualizerText* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:221 */
	virtual void KV3TransferSave(const CAnimationGraphVisualizerText* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:236 */
	virtual void KV3TransferLoad(CAnimationGraphVisualizerText* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:226 */
	void KV3TransferSave_CAnimationGraphVisualizerText(const CAnimationGraphVisualizerText* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:241 */
	void KV3TransferLoad_CAnimationGraphVisualizerText(CAnimationGraphVisualizerText* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:120 */
	void CAnimationGraphVisualizerText(CAnimationGraphVisualizerText* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:124 */
	void CAnimationGraphVisualizerText(CAnimationGraphVisualizerText* , const VectorAligned& , const Color& , const CUtlString& );
	VectorAligned m_vWsPosition __attribute__((__aligned__(16))); /* 16 16 */
	Color m_Color; /* 32 4 */
	CUtlString m_Text; /* 40 8 */
	void ~CAnimationGraphVisualizerText(class CAnimationGraphVisualizerText *); /* linkage=_ZN29CAnimationGraphVisualizerTextD4Ev */
	void CAnimationGraphVisualizerText(class CAnimationGraphVisualizerText *, class CAnimationGraphVisualizerText &); /* linkage=_ZN29CAnimationGraphVisualizerTextC4EOS_ */
	void CAnimationGraphVisualizerText(class CAnimationGraphVisualizerText *, const class CAnimationGraphVisualizerText  &); /* linkage=_ZN29CAnimationGraphVisualizerTextC4ERKS_ */
	class CAnimationGraphVisualizerText & operator=(class CAnimationGraphVisualizerText *, class CAnimationGraphVisualizerText &); /* linkage=_ZN29CAnimationGraphVisualizerTextaSEOS_ */
	class CAnimationGraphVisualizerText & operator=(class CAnimationGraphVisualizerText *, const class CAnimationGraphVisualizerText  &); /* linkage=_ZN29CAnimationGraphVisualizerTextaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN29CAnimationGraphVisualizerText17GetPrimaryBindingEv */
	class CAnimationGraphVisualizerText * Schema_MarkHelperFn(void); /* linkage=_ZN29CAnimationGraphVisualizerText19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN29CAnimationGraphVisualizerText15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <aac872> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:213 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN29CAnimationGraphVisualizerText32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAnimationGraphVisualizerText *); /* linkage=_ZN29CAnimationGraphVisualizerText38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN29CAnimationGraphVisualizerText20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN29CAnimationGraphVisualizerText22Schema_StaticClassnameEv */
	/* <aab750> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:117 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimationGraphVisualizerText  *); /* linkage=_ZNK29CAnimationGraphVisualizerText21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAnimationGraphVisualizerText  *, char &); /* linkage=_ZN29CAnimationGraphVisualizerText31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAnimationGraphVisualizerText * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN29CAnimationGraphVisualizerText32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAnimationGraphVisualizerText  *, class CKV3TransferSaveContext *); /* linkage=_ZNK29CAnimationGraphVisualizerText15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimationGraphVisualizerText *, class CKV3TransferLoadContext *); /* linkage=_ZN29CAnimationGraphVisualizerText15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimationGraphVisualizerText(const class CAnimationGraphVisualizerText  *, class CKV3TransferSaveContext *); /* linkage=_ZNK29CAnimationGraphVisualizerText45KV3TransferSave_CAnimationGraphVisualizerTextEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimationGraphVisualizerText(class CAnimationGraphVisualizerText *, class CKV3TransferLoadContext *); /* linkage=_ZN29CAnimationGraphVisualizerText45KV3TransferLoad_CAnimationGraphVisualizerTextEP23CKV3TransferLoadContext */
	void CAnimationGraphVisualizerText(class CAnimationGraphVisualizerText *); /* linkage=_ZN29CAnimationGraphVisualizerTextC4Ev */
	void CAnimationGraphVisualizerText(class CAnimationGraphVisualizerText *, const class VectorAligned  &, const class Color  &, const class CUtlString  &); /* linkage=_ZN29CAnimationGraphVisualizerTextC4ERK13VectorAlignedRK5ColorRK10CUtlString */
} __attribute__((__aligned__(16)));

// <00E81D45> ../public/animationsystem/ianimationgraphvisualizationmanager.h:117
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00E81D3F> ../public/animationsystem/ianimationgraphvisualizationmanager.h:117
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <00E81D27> ../public/animationsystem/ianimationgraphvisualizationmanager.h:117
void CAnimationGraphVisualizerText::Schema_DynamicBinding()
{
} /* size: 0 */

// <00AAB750> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:117
// function calls: 3
void CAnimationGraphVisualizerText::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 213
	Schema_VerifyBindingIsRegistered(void); // 117
	GetPrimaryBinding(void); // 117
} /* size: 75, inline expansions: 3 (78 bytes) */

// <00AA6CC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:117
inline void CAnimationGraphVisualizerText::Schema_DynamicBinding()
{
} /* size: 0 */

// <00E81D04> ../public/animationsystem/ianimationgraphvisualizationmanager.h:118
inline void KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerText* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <00AA6CB2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:120
void CAnimationGraphVisualizerText::CAnimationGraphVisualizerText()
{
} /* size: 0 */

// <00AA6C99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:120
inline void CAnimationGraphVisualizerText::CAnimationGraphVisualizerText()
{
} /* size: 0 */

// <00E81CDE> ../public/animationsystem/ianimationgraphvisualizationmanager.h:124
void CAnimationGraphVisualizerText::CAnimationGraphVisualizerText(const VectorAligned& vWsPosition, const Color& color, const CUtlString& text)
{
} /* size: 0 */

// <00E81CA1> ../public/animationsystem/ianimationgraphvisualizationmanager.h:124
inline void CAnimationGraphVisualizerText::CAnimationGraphVisualizerText(const VectorAligned& vWsPosition, const Color& color, const CUtlString& text)
{
} /* size: 0 */

// <00AA43F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:138
inline void CAnimationGraphVisualizerSphere::operator=(const CAnimationGraphVisualizerSphere &)
{
} /* size: 0 */

// <00A97C86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:138
// member functions: 42
// member variables: 4
// static member variable: 1
// vtable entries: 3
// class size: 48
class CAnimationGraphVisualizerSphere : public CAnimationGraphVisualizerPrimitiveBase {
public:
	/* class CAnimationGraphVisualizerPrimitiveBase <ancestor>; */ /* 0 16 */
	void ~CAnimationGraphVisualizerSphere(CAnimationGraphVisualizerSphere* );
	void CAnimationGraphVisualizerSphere(CAnimationGraphVisualizerSphere* , CAnimationGraphVisualizerSphere& );
	void CAnimationGraphVisualizerSphere(CAnimationGraphVisualizerSphere* , const CAnimationGraphVisualizerSphere& );
	CAnimationGraphVisualizerSphere& operator=(CAnimationGraphVisualizerSphere* , CAnimationGraphVisualizerSphere& );
	CAnimationGraphVisualizerSphere& operator=(CAnimationGraphVisualizerSphere* , const CAnimationGraphVisualizerSphere& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:140 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:140 */
	CAnimationGraphVisualizerSphere* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:301 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:330 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:259 */
	void Schema_CompileTimeVerificationFunction(CAnimationGraphVisualizerSphere* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:140 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:140 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:140 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimationGraphVisualizerSphere* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:141 */
	void KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerSphere* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:141 */
	CAnimationGraphVisualizerSphere* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:338 */
	virtual void KV3TransferSave(const CAnimationGraphVisualizerSphere* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:353 */
	virtual void KV3TransferLoad(CAnimationGraphVisualizerSphere* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:343 */
	void KV3TransferSave_CAnimationGraphVisualizerSphere(const CAnimationGraphVisualizerSphere* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:358 */
	void KV3TransferLoad_CAnimationGraphVisualizerSphere(CAnimationGraphVisualizerSphere* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:143 */
	void CAnimationGraphVisualizerSphere(CAnimationGraphVisualizerSphere* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:146 */
	void CAnimationGraphVisualizerSphere(CAnimationGraphVisualizerSphere* , const VectorAligned& , float, const Color& );
	VectorAligned m_vWsPosition __attribute__((__aligned__(16))); /* 16 16 */
	float m_flRadius; /* 32 4 */
	Color m_Color; /* 36 4 */
	void ~CAnimationGraphVisualizerSphere(class CAnimationGraphVisualizerSphere *); /* linkage=_ZN31CAnimationGraphVisualizerSphereD4Ev */
	void CAnimationGraphVisualizerSphere(class CAnimationGraphVisualizerSphere *, class CAnimationGraphVisualizerSphere &); /* linkage=_ZN31CAnimationGraphVisualizerSphereC4EOS_ */
	void CAnimationGraphVisualizerSphere(class CAnimationGraphVisualizerSphere *, const class CAnimationGraphVisualizerSphere  &); /* linkage=_ZN31CAnimationGraphVisualizerSphereC4ERKS_ */
	class CAnimationGraphVisualizerSphere & operator=(class CAnimationGraphVisualizerSphere *, class CAnimationGraphVisualizerSphere &); /* linkage=_ZN31CAnimationGraphVisualizerSphereaSEOS_ */
	class CAnimationGraphVisualizerSphere & operator=(class CAnimationGraphVisualizerSphere *, const class CAnimationGraphVisualizerSphere  &); /* linkage=_ZN31CAnimationGraphVisualizerSphereaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN31CAnimationGraphVisualizerSphere17GetPrimaryBindingEv */
	class CAnimationGraphVisualizerSphere * Schema_MarkHelperFn(void); /* linkage=_ZN31CAnimationGraphVisualizerSphere19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN31CAnimationGraphVisualizerSphere15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <aac8bf> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:330 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN31CAnimationGraphVisualizerSphere32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAnimationGraphVisualizerSphere *); /* linkage=_ZN31CAnimationGraphVisualizerSphere38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN31CAnimationGraphVisualizerSphere20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN31CAnimationGraphVisualizerSphere22Schema_StaticClassnameEv */
	/* <aab804> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:140 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimationGraphVisualizerSphere  *); /* linkage=_ZNK31CAnimationGraphVisualizerSphere21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAnimationGraphVisualizerSphere  *, char &); /* linkage=_ZN31CAnimationGraphVisualizerSphere31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAnimationGraphVisualizerSphere * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN31CAnimationGraphVisualizerSphere32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAnimationGraphVisualizerSphere  *, class CKV3TransferSaveContext *); /* linkage=_ZNK31CAnimationGraphVisualizerSphere15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimationGraphVisualizerSphere *, class CKV3TransferLoadContext *); /* linkage=_ZN31CAnimationGraphVisualizerSphere15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimationGraphVisualizerSphere(const class CAnimationGraphVisualizerSphere  *, class CKV3TransferSaveContext *); /* linkage=_ZNK31CAnimationGraphVisualizerSphere47KV3TransferSave_CAnimationGraphVisualizerSphereEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimationGraphVisualizerSphere(class CAnimationGraphVisualizerSphere *, class CKV3TransferLoadContext *); /* linkage=_ZN31CAnimationGraphVisualizerSphere47KV3TransferLoad_CAnimationGraphVisualizerSphereEP23CKV3TransferLoadContext */
	void CAnimationGraphVisualizerSphere(class CAnimationGraphVisualizerSphere *); /* linkage=_ZN31CAnimationGraphVisualizerSphereC4Ev */
	void CAnimationGraphVisualizerSphere(class CAnimationGraphVisualizerSphere *, const class VectorAligned  &, float, const class Color  &); /* linkage=_ZN31CAnimationGraphVisualizerSphereC4ERK13VectorAlignedfRK5Color */
} __attribute__((__aligned__(16)));

// <00E81C7D> ../public/animationsystem/ianimationgraphvisualizationmanager.h:140
void CAnimationGraphVisualizerSphere::Schema_DynamicBinding()
{
} /* size: 0 */

// <00AAB804> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:140
// function calls: 3
void CAnimationGraphVisualizerSphere::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 330
	Schema_VerifyBindingIsRegistered(void); // 140
	GetPrimaryBinding(void); // 140
} /* size: 75, inline expansions: 3 (78 bytes) */

// <00AA6C74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:140
inline void CAnimationGraphVisualizerSphere::Schema_DynamicBinding()
{
} /* size: 0 */

// <00E81C5A> ../public/animationsystem/ianimationgraphvisualizationmanager.h:141
inline void KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerSphere* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <00AA6C5D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:143
void CAnimationGraphVisualizerSphere::CAnimationGraphVisualizerSphere()
{
} /* size: 0 */

// <00AA6C44> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:143
inline void CAnimationGraphVisualizerSphere::CAnimationGraphVisualizerSphere()
{
} /* size: 0 */

// <00E81C34> ../public/animationsystem/ianimationgraphvisualizationmanager.h:146
void CAnimationGraphVisualizerSphere::CAnimationGraphVisualizerSphere(const VectorAligned& vWsPosition, float flRadius, const Color& color)
{
} /* size: 0 */

// <00E81BF7> ../public/animationsystem/ianimationgraphvisualizationmanager.h:146
inline void CAnimationGraphVisualizerSphere::CAnimationGraphVisualizerSphere(const VectorAligned& vWsPosition, float flRadius, const Color& color)
{
} /* size: 0 */

// <00AA256E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:160
inline void CAnimationGraphVisualizerLine::operator=(const CAnimationGraphVisualizerLine &)
{
} /* size: 0 */

// <00A97F6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:160
// member functions: 42
// member variables: 4
// static member variable: 1
// vtable entries: 3
// class size: 64
class CAnimationGraphVisualizerLine : public CAnimationGraphVisualizerPrimitiveBase {
public:
	/* class CAnimationGraphVisualizerPrimitiveBase <ancestor>; */ /* 0 16 */
	void ~CAnimationGraphVisualizerLine(CAnimationGraphVisualizerLine* );
	void CAnimationGraphVisualizerLine(CAnimationGraphVisualizerLine* , CAnimationGraphVisualizerLine& );
	void CAnimationGraphVisualizerLine(CAnimationGraphVisualizerLine* , const CAnimationGraphVisualizerLine& );
	CAnimationGraphVisualizerLine& operator=(CAnimationGraphVisualizerLine* , CAnimationGraphVisualizerLine& );
	CAnimationGraphVisualizerLine& operator=(CAnimationGraphVisualizerLine* , const CAnimationGraphVisualizerLine& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:162 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:162 */
	CAnimationGraphVisualizerLine* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:418 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:447 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:376 */
	void Schema_CompileTimeVerificationFunction(CAnimationGraphVisualizerLine* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:162 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:162 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:162 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimationGraphVisualizerLine* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:163 */
	void KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerLine* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:163 */
	CAnimationGraphVisualizerLine* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:455 */
	virtual void KV3TransferSave(const CAnimationGraphVisualizerLine* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:470 */
	virtual void KV3TransferLoad(CAnimationGraphVisualizerLine* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:460 */
	void KV3TransferSave_CAnimationGraphVisualizerLine(const CAnimationGraphVisualizerLine* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:475 */
	void KV3TransferLoad_CAnimationGraphVisualizerLine(CAnimationGraphVisualizerLine* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:165 */
	void CAnimationGraphVisualizerLine(CAnimationGraphVisualizerLine* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:168 */
	void CAnimationGraphVisualizerLine(CAnimationGraphVisualizerLine* , const VectorAligned& , const VectorAligned& , const Color& );
	VectorAligned m_vWsPositionStart __attribute__((__aligned__(16))); /* 16 16 */
	VectorAligned m_vWsPositionEnd __attribute__((__aligned__(16))); /* 32 16 */
	Color m_Color; /* 48 4 */
	void ~CAnimationGraphVisualizerLine(class CAnimationGraphVisualizerLine *); /* linkage=_ZN29CAnimationGraphVisualizerLineD4Ev */
	void CAnimationGraphVisualizerLine(class CAnimationGraphVisualizerLine *, class CAnimationGraphVisualizerLine &); /* linkage=_ZN29CAnimationGraphVisualizerLineC4EOS_ */
	void CAnimationGraphVisualizerLine(class CAnimationGraphVisualizerLine *, const class CAnimationGraphVisualizerLine  &); /* linkage=_ZN29CAnimationGraphVisualizerLineC4ERKS_ */
	class CAnimationGraphVisualizerLine & operator=(class CAnimationGraphVisualizerLine *, class CAnimationGraphVisualizerLine &); /* linkage=_ZN29CAnimationGraphVisualizerLineaSEOS_ */
	class CAnimationGraphVisualizerLine & operator=(class CAnimationGraphVisualizerLine *, const class CAnimationGraphVisualizerLine  &); /* linkage=_ZN29CAnimationGraphVisualizerLineaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN29CAnimationGraphVisualizerLine17GetPrimaryBindingEv */
	class CAnimationGraphVisualizerLine * Schema_MarkHelperFn(void); /* linkage=_ZN29CAnimationGraphVisualizerLine19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN29CAnimationGraphVisualizerLine15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <aac90d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:447 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN29CAnimationGraphVisualizerLine32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAnimationGraphVisualizerLine *); /* linkage=_ZN29CAnimationGraphVisualizerLine38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN29CAnimationGraphVisualizerLine20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN29CAnimationGraphVisualizerLine22Schema_StaticClassnameEv */
	/* <aab8b9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:162 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimationGraphVisualizerLine  *); /* linkage=_ZNK29CAnimationGraphVisualizerLine21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAnimationGraphVisualizerLine  *, char &); /* linkage=_ZN29CAnimationGraphVisualizerLine31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAnimationGraphVisualizerLine * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN29CAnimationGraphVisualizerLine32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAnimationGraphVisualizerLine  *, class CKV3TransferSaveContext *); /* linkage=_ZNK29CAnimationGraphVisualizerLine15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimationGraphVisualizerLine *, class CKV3TransferLoadContext *); /* linkage=_ZN29CAnimationGraphVisualizerLine15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimationGraphVisualizerLine(const class CAnimationGraphVisualizerLine  *, class CKV3TransferSaveContext *); /* linkage=_ZNK29CAnimationGraphVisualizerLine45KV3TransferSave_CAnimationGraphVisualizerLineEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimationGraphVisualizerLine(class CAnimationGraphVisualizerLine *, class CKV3TransferLoadContext *); /* linkage=_ZN29CAnimationGraphVisualizerLine45KV3TransferLoad_CAnimationGraphVisualizerLineEP23CKV3TransferLoadContext */
	void CAnimationGraphVisualizerLine(class CAnimationGraphVisualizerLine *); /* linkage=_ZN29CAnimationGraphVisualizerLineC4Ev */
	void CAnimationGraphVisualizerLine(class CAnimationGraphVisualizerLine *, const class VectorAligned  &, const class VectorAligned  &, const class Color  &); /* linkage=_ZN29CAnimationGraphVisualizerLineC4ERK13VectorAlignedS2_RK5Color */
} __attribute__((__aligned__(16)));

// <00E81BD3> ../public/animationsystem/ianimationgraphvisualizationmanager.h:162
void CAnimationGraphVisualizerLine::Schema_DynamicBinding()
{
} /* size: 0 */

// <00AAB8B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:162
// function calls: 3
void CAnimationGraphVisualizerLine::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 447
	Schema_VerifyBindingIsRegistered(void); // 162
	GetPrimaryBinding(void); // 162
} /* size: 75, inline expansions: 3 (78 bytes) */

// <00AA6C1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:162
inline void CAnimationGraphVisualizerLine::Schema_DynamicBinding()
{
} /* size: 0 */

// <00E81BB0> ../public/animationsystem/ianimationgraphvisualizationmanager.h:163
inline void KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerLine* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <00AA6C08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:165
void CAnimationGraphVisualizerLine::CAnimationGraphVisualizerLine()
{
} /* size: 0 */

// <00AA6BEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:165
inline void CAnimationGraphVisualizerLine::CAnimationGraphVisualizerLine()
{
} /* size: 0 */

// <00E81B8A> ../public/animationsystem/ianimationgraphvisualizationmanager.h:168
void CAnimationGraphVisualizerLine::CAnimationGraphVisualizerLine(const VectorAligned& vWsPositionStart, const VectorAligned& vWsPositionEnd, const Color& color)
{
} /* size: 0 */

// <00E81B4D> ../public/animationsystem/ianimationgraphvisualizationmanager.h:168
inline void CAnimationGraphVisualizerLine::CAnimationGraphVisualizerLine(const VectorAligned& vWsPositionStart, const VectorAligned& vWsPositionEnd, const Color& color)
{
} /* size: 0 */

// <00AA0972> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:182
inline void CAnimationGraphVisualizerPie::operator=(const CAnimationGraphVisualizerPie &)
{
} /* size: 0 */

// <00A98259> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:182
// member functions: 42
// member variables: 5
// static member variable: 1
// vtable entries: 3
// class size: 80
class CAnimationGraphVisualizerPie : public CAnimationGraphVisualizerPrimitiveBase {
public:
	/* class CAnimationGraphVisualizerPrimitiveBase <ancestor>; */ /* 0 16 */
	void ~CAnimationGraphVisualizerPie(CAnimationGraphVisualizerPie* );
	void CAnimationGraphVisualizerPie(CAnimationGraphVisualizerPie* , CAnimationGraphVisualizerPie& );
	void CAnimationGraphVisualizerPie(CAnimationGraphVisualizerPie* , const CAnimationGraphVisualizerPie& );
	CAnimationGraphVisualizerPie& operator=(CAnimationGraphVisualizerPie* , CAnimationGraphVisualizerPie& );
	CAnimationGraphVisualizerPie& operator=(CAnimationGraphVisualizerPie* , const CAnimationGraphVisualizerPie& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:184 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:184 */
	CAnimationGraphVisualizerPie* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:538 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:567 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:493 */
	void Schema_CompileTimeVerificationFunction(CAnimationGraphVisualizerPie* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:184 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:184 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:184 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimationGraphVisualizerPie* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:185 */
	void KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerPie* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:185 */
	CAnimationGraphVisualizerPie* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:575 */
	virtual void KV3TransferSave(const CAnimationGraphVisualizerPie* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:591 */
	virtual void KV3TransferLoad(CAnimationGraphVisualizerPie* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:580 */
	void KV3TransferSave_CAnimationGraphVisualizerPie(const CAnimationGraphVisualizerPie* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:596 */
	void KV3TransferLoad_CAnimationGraphVisualizerPie(CAnimationGraphVisualizerPie* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:187 */
	void CAnimationGraphVisualizerPie(CAnimationGraphVisualizerPie* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:190 */
	void CAnimationGraphVisualizerPie(CAnimationGraphVisualizerPie* , const VectorAligned& , const VectorAligned& , const VectorAligned& , const Color& );
	VectorAligned m_vWsCenter __attribute__((__aligned__(16))); /* 16 16 */
	VectorAligned m_vWsStart __attribute__((__aligned__(16))); /* 32 16 */
	VectorAligned m_vWsEnd __attribute__((__aligned__(16))); /* 48 16 */
	Color m_Color; /* 64 4 */
	void ~CAnimationGraphVisualizerPie(class CAnimationGraphVisualizerPie *); /* linkage=_ZN28CAnimationGraphVisualizerPieD4Ev */
	void CAnimationGraphVisualizerPie(class CAnimationGraphVisualizerPie *, class CAnimationGraphVisualizerPie &); /* linkage=_ZN28CAnimationGraphVisualizerPieC4EOS_ */
	void CAnimationGraphVisualizerPie(class CAnimationGraphVisualizerPie *, const class CAnimationGraphVisualizerPie  &); /* linkage=_ZN28CAnimationGraphVisualizerPieC4ERKS_ */
	class CAnimationGraphVisualizerPie & operator=(class CAnimationGraphVisualizerPie *, class CAnimationGraphVisualizerPie &); /* linkage=_ZN28CAnimationGraphVisualizerPieaSEOS_ */
	class CAnimationGraphVisualizerPie & operator=(class CAnimationGraphVisualizerPie *, const class CAnimationGraphVisualizerPie  &); /* linkage=_ZN28CAnimationGraphVisualizerPieaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN28CAnimationGraphVisualizerPie17GetPrimaryBindingEv */
	class CAnimationGraphVisualizerPie * Schema_MarkHelperFn(void); /* linkage=_ZN28CAnimationGraphVisualizerPie19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN28CAnimationGraphVisualizerPie15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <aac95b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:567 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN28CAnimationGraphVisualizerPie32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAnimationGraphVisualizerPie *); /* linkage=_ZN28CAnimationGraphVisualizerPie38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN28CAnimationGraphVisualizerPie20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN28CAnimationGraphVisualizerPie22Schema_StaticClassnameEv */
	/* <aab96e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:184 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimationGraphVisualizerPie  *); /* linkage=_ZNK28CAnimationGraphVisualizerPie21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAnimationGraphVisualizerPie  *, char &); /* linkage=_ZN28CAnimationGraphVisualizerPie31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAnimationGraphVisualizerPie * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN28CAnimationGraphVisualizerPie32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAnimationGraphVisualizerPie  *, class CKV3TransferSaveContext *); /* linkage=_ZNK28CAnimationGraphVisualizerPie15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimationGraphVisualizerPie *, class CKV3TransferLoadContext *); /* linkage=_ZN28CAnimationGraphVisualizerPie15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimationGraphVisualizerPie(const class CAnimationGraphVisualizerPie  *, class CKV3TransferSaveContext *); /* linkage=_ZNK28CAnimationGraphVisualizerPie44KV3TransferSave_CAnimationGraphVisualizerPieEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimationGraphVisualizerPie(class CAnimationGraphVisualizerPie *, class CKV3TransferLoadContext *); /* linkage=_ZN28CAnimationGraphVisualizerPie44KV3TransferLoad_CAnimationGraphVisualizerPieEP23CKV3TransferLoadContext */
	void CAnimationGraphVisualizerPie(class CAnimationGraphVisualizerPie *); /* linkage=_ZN28CAnimationGraphVisualizerPieC4Ev */
	void CAnimationGraphVisualizerPie(class CAnimationGraphVisualizerPie *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, const class Color  &); /* linkage=_ZN28CAnimationGraphVisualizerPieC4ERK13VectorAlignedS2_S2_RK5Color */
} __attribute__((__aligned__(16)));

// <00E81B29> ../public/animationsystem/ianimationgraphvisualizationmanager.h:184
void CAnimationGraphVisualizerPie::Schema_DynamicBinding()
{
} /* size: 0 */

// <00AAB96E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:184
// function calls: 3
void CAnimationGraphVisualizerPie::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 567
	Schema_VerifyBindingIsRegistered(void); // 184
	GetPrimaryBinding(void); // 184
} /* size: 75, inline expansions: 3 (78 bytes) */

// <00AA6BCA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:184
inline void CAnimationGraphVisualizerPie::Schema_DynamicBinding()
{
} /* size: 0 */

// <00E81B06> ../public/animationsystem/ianimationgraphvisualizationmanager.h:185
inline void KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerPie* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <00AA6BB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:187
void CAnimationGraphVisualizerPie::CAnimationGraphVisualizerPie()
{
} /* size: 0 */

// <00AA6B9A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:187
inline void CAnimationGraphVisualizerPie::CAnimationGraphVisualizerPie()
{
} /* size: 0 */

// <00E81ADB> ../public/animationsystem/ianimationgraphvisualizationmanager.h:190
void CAnimationGraphVisualizerPie::CAnimationGraphVisualizerPie(const VectorAligned& vWsCenter, const VectorAligned& vWsStart, const VectorAligned& vWsEnd, const Color& color)
{
} /* size: 0 */

// <00E81A92> ../public/animationsystem/ianimationgraphvisualizationmanager.h:190
inline void CAnimationGraphVisualizerPie::CAnimationGraphVisualizerPie(const VectorAligned& vWsCenter, const VectorAligned& vWsStart, const VectorAligned& vWsEnd, const Color& color)
{
} /* size: 0 */

// <00A9E574> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:206
inline void CAnimationGraphVisualizerAxis::operator=(const CAnimationGraphVisualizerAxis &)
{
} /* size: 0 */

// <00A98558> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:206
// member functions: 42
// member variables: 3
// static member variable: 1
// vtable entries: 3
// class size: 64
class CAnimationGraphVisualizerAxis : public CAnimationGraphVisualizerPrimitiveBase {
public:
	/* class CAnimationGraphVisualizerPrimitiveBase <ancestor>; */ /* 0 16 */
	void ~CAnimationGraphVisualizerAxis(CAnimationGraphVisualizerAxis* );
	void CAnimationGraphVisualizerAxis(CAnimationGraphVisualizerAxis* , CAnimationGraphVisualizerAxis& );
	void CAnimationGraphVisualizerAxis(CAnimationGraphVisualizerAxis* , const CAnimationGraphVisualizerAxis& );
	CAnimationGraphVisualizerAxis& operator=(CAnimationGraphVisualizerAxis* , CAnimationGraphVisualizerAxis& );
	CAnimationGraphVisualizerAxis& operator=(CAnimationGraphVisualizerAxis* , const CAnimationGraphVisualizerAxis& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:208 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:208 */
	CAnimationGraphVisualizerAxis* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:654 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:683 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:615 */
	void Schema_CompileTimeVerificationFunction(CAnimationGraphVisualizerAxis* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:208 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:208 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:208 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimationGraphVisualizerAxis* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:209 */
	void KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerAxis* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:209 */
	CAnimationGraphVisualizerAxis* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:691 */
	virtual void KV3TransferSave(const CAnimationGraphVisualizerAxis* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:705 */
	virtual void KV3TransferLoad(CAnimationGraphVisualizerAxis* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:696 */
	void KV3TransferSave_CAnimationGraphVisualizerAxis(const CAnimationGraphVisualizerAxis* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:710 */
	void KV3TransferLoad_CAnimationGraphVisualizerAxis(CAnimationGraphVisualizerAxis* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:211 */
	void CAnimationGraphVisualizerAxis(CAnimationGraphVisualizerAxis* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:214 */
	void CAnimationGraphVisualizerAxis(CAnimationGraphVisualizerAxis* , const CTransform& , float);
	CTransform m_xWsTransform __attribute__((__aligned__(16))); /* 16 32 */
	float m_flAxisSize; /* 48 4 */
	void ~CAnimationGraphVisualizerAxis(class CAnimationGraphVisualizerAxis *); /* linkage=_ZN29CAnimationGraphVisualizerAxisD4Ev */
	void CAnimationGraphVisualizerAxis(class CAnimationGraphVisualizerAxis *, class CAnimationGraphVisualizerAxis &); /* linkage=_ZN29CAnimationGraphVisualizerAxisC4EOS_ */
	void CAnimationGraphVisualizerAxis(class CAnimationGraphVisualizerAxis *, const class CAnimationGraphVisualizerAxis  &); /* linkage=_ZN29CAnimationGraphVisualizerAxisC4ERKS_ */
	class CAnimationGraphVisualizerAxis & operator=(class CAnimationGraphVisualizerAxis *, class CAnimationGraphVisualizerAxis &); /* linkage=_ZN29CAnimationGraphVisualizerAxisaSEOS_ */
	class CAnimationGraphVisualizerAxis & operator=(class CAnimationGraphVisualizerAxis *, const class CAnimationGraphVisualizerAxis  &); /* linkage=_ZN29CAnimationGraphVisualizerAxisaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN29CAnimationGraphVisualizerAxis17GetPrimaryBindingEv */
	class CAnimationGraphVisualizerAxis * Schema_MarkHelperFn(void); /* linkage=_ZN29CAnimationGraphVisualizerAxis19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN29CAnimationGraphVisualizerAxis15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <aac9a9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/ianimationgraphvisualizationmanager_h_schema.gen_cpp:683 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN29CAnimationGraphVisualizerAxis32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAnimationGraphVisualizerAxis *); /* linkage=_ZN29CAnimationGraphVisualizerAxis38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN29CAnimationGraphVisualizerAxis20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN29CAnimationGraphVisualizerAxis22Schema_StaticClassnameEv */
	/* <aaba23> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:208 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimationGraphVisualizerAxis  *); /* linkage=_ZNK29CAnimationGraphVisualizerAxis21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAnimationGraphVisualizerAxis  *, char &); /* linkage=_ZN29CAnimationGraphVisualizerAxis31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAnimationGraphVisualizerAxis * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN29CAnimationGraphVisualizerAxis32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAnimationGraphVisualizerAxis  *, class CKV3TransferSaveContext *); /* linkage=_ZNK29CAnimationGraphVisualizerAxis15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimationGraphVisualizerAxis *, class CKV3TransferLoadContext *); /* linkage=_ZN29CAnimationGraphVisualizerAxis15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimationGraphVisualizerAxis(const class CAnimationGraphVisualizerAxis  *, class CKV3TransferSaveContext *); /* linkage=_ZNK29CAnimationGraphVisualizerAxis45KV3TransferSave_CAnimationGraphVisualizerAxisEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimationGraphVisualizerAxis(class CAnimationGraphVisualizerAxis *, class CKV3TransferLoadContext *); /* linkage=_ZN29CAnimationGraphVisualizerAxis45KV3TransferLoad_CAnimationGraphVisualizerAxisEP23CKV3TransferLoadContext */
	void CAnimationGraphVisualizerAxis(class CAnimationGraphVisualizerAxis *); /* linkage=_ZN29CAnimationGraphVisualizerAxisC4Ev */
	void CAnimationGraphVisualizerAxis(class CAnimationGraphVisualizerAxis *, const class CTransform  &, float); /* linkage=_ZN29CAnimationGraphVisualizerAxisC4ERK10CTransformf */
} __attribute__((__aligned__(16)));

// <00E81A6E> ../public/animationsystem/ianimationgraphvisualizationmanager.h:208
void CAnimationGraphVisualizerAxis::Schema_DynamicBinding()
{
} /* size: 0 */

// <00AABA23> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:208
// function calls: 3
void CAnimationGraphVisualizerAxis::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 683
	Schema_VerifyBindingIsRegistered(void); // 208
	GetPrimaryBinding(void); // 208
} /* size: 75, inline expansions: 3 (78 bytes) */

// <00AA6B75> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:208
inline void CAnimationGraphVisualizerAxis::Schema_DynamicBinding()
{
} /* size: 0 */

// <00E81A4B> ../public/animationsystem/ianimationgraphvisualizationmanager.h:209
inline void KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerAxis* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <00AA6B5E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:211
void CAnimationGraphVisualizerAxis::CAnimationGraphVisualizerAxis()
{
} /* size: 0 */

// <00AA6B45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationgraphvisualizationmanager.h:211
inline void CAnimationGraphVisualizerAxis::CAnimationGraphVisualizerAxis()
{
} /* size: 0 */

// <00E81A2A> ../public/animationsystem/ianimationgraphvisualizationmanager.h:214
void CAnimationGraphVisualizerAxis::CAnimationGraphVisualizerAxis(const CTransform& xTransform, float flAxisSize)
{
} /* size: 0 */

// <00E819F9> ../public/animationsystem/ianimationgraphvisualizationmanager.h:214
inline void CAnimationGraphVisualizerAxis::CAnimationGraphVisualizerAxis(const CTransform& xTransform, float flAxisSize)
{
} /* size: 0 */

// <00E8131C> ../public/animationsystem/ianimationgraphvisualizationmanager.h:226
void IAnimationGraphVisualizationManager::IAnimationGraphVisualizationManager()
{
} /* size: 0 */

// <00E81300> ../public/animationsystem/ianimationgraphvisualizationmanager.h:226
inline void IAnimationGraphVisualizationManager::IAnimationGraphVisualizationManager()
{
} /* size: 0 */

// <00DF197F> ../public/animationsystem/ianimationgraphvisualizationmanager.h:226
// member functions: 24
// member variable: 1
// vtable entries: 9
// class size: 8
class IAnimationGraphVisualizationManager : public IAnimationDebugRenderer {
public:
	/* class IAnimationDebugRenderer <ancestor>; */ /* 0 8 */
	void IAnimationGraphVisualizationManager(IAnimationGraphVisualizationManager* , const IAnimationGraphVisualizationManager& );
	void IAnimationGraphVisualizationManager(IAnimationGraphVisualizationManager* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:229 */
	virtual void ~IAnimationGraphVisualizationManager(IAnimationGraphVisualizationManager* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:231 */
	virtual const KeyValues3& GetVisualizerPrimitivesData(const IAnimationGraphVisualizationManager* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:234 */
	virtual void Line(IAnimationGraphVisualizationManager* , const VectorAligned& , const VectorAligned& , const VertexColor_t& , const CUtlString& );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:236 */
	virtual void Sphere(IAnimationGraphVisualizationManager* , const VectorAligned& , float, const VertexColor_t& , const CUtlString& );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:238 */
	virtual void AddPie(IAnimationGraphVisualizationManager* , const VectorAligned& , const VectorAligned& , const VectorAligned& , const VertexColor_t& , const CUtlString& );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:240 */
	virtual void AddText(IAnimationGraphVisualizationManager* , const VectorAligned& , const VertexColor_t& , const CUtlString& );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:242 */
	virtual void AddAxis(IAnimationGraphVisualizationManager* , const VectorAligned& , const QuaternionAligned& , float, const CUtlString& );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:243 */
	virtual void AddAxis(IAnimationGraphVisualizationManager* , const CTransform& , float, const CUtlString& );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:245 */
	virtual void ClearVisualizerPrimitivesData(IAnimationGraphVisualizationManager* );
	/* ../public/animationsystem/ianimationgraphvisualizationmanager.h:247 */
	virtual IAnimationGraphVisualizationManager* GetVisualizerIfShouldVisualize(IAnimationGraphVisualizationManager* , const IAnimationGraphVisualizerInfo* , int);
	void IAnimationGraphVisualizationManager(class IAnimationGraphVisualizationManager *, const class IAnimationGraphVisualizationManager  &); /* linkage=_ZN35IAnimationGraphVisualizationManagerC4ERKS_ */
	void IAnimationGraphVisualizationManager(class IAnimationGraphVisualizationManager *); /* linkage=_ZN35IAnimationGraphVisualizationManagerC4Ev */
	virtual void ~IAnimationGraphVisualizationManager(class IAnimationGraphVisualizationManager *); /* linkage=_ZN35IAnimationGraphVisualizationManagerD4Ev */
	virtual const class KeyValues3  & GetVisualizerPrimitivesData(const class IAnimationGraphVisualizationManager  *); /* linkage=_ZNK35IAnimationGraphVisualizationManager27GetVisualizerPrimitivesDataEv */
	virtual void Line(class IAnimationGraphVisualizationManager *, const class VectorAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN35IAnimationGraphVisualizationManager4LineERK13VectorAlignedS2_RK13VertexColor_tRK10CUtlString */
	virtual void Sphere(class IAnimationGraphVisualizationManager *, const class VectorAligned  &, float, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN35IAnimationGraphVisualizationManager6SphereERK13VectorAlignedfRK13VertexColor_tRK10CUtlString */
	virtual void AddPie(class IAnimationGraphVisualizationManager *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN35IAnimationGraphVisualizationManager6AddPieERK13VectorAlignedS2_S2_RK13VertexColor_tRK10CUtlString */
	virtual void AddText(class IAnimationGraphVisualizationManager *, const class VectorAligned  &, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN35IAnimationGraphVisualizationManager7AddTextERK13VectorAlignedRK13VertexColor_tRK10CUtlString */
	virtual void AddAxis(class IAnimationGraphVisualizationManager *, const class VectorAligned  &, const class QuaternionAligned  &, float, const class CUtlString  &); /* linkage=_ZN35IAnimationGraphVisualizationManager7AddAxisERK13VectorAlignedRK17QuaternionAlignedfRK10CUtlString */
	virtual void AddAxis(class IAnimationGraphVisualizationManager *, const class CTransform  &, float, const class CUtlString  &); /* linkage=_ZN35IAnimationGraphVisualizationManager7AddAxisERK10CTransformfRK10CUtlString */
	virtual void ClearVisualizerPrimitivesData(class IAnimationGraphVisualizationManager *); /* linkage=_ZN35IAnimationGraphVisualizationManager29ClearVisualizerPrimitivesDataEv */
	virtual class IAnimationGraphVisualizationManager * GetVisualizerIfShouldVisualize(class IAnimationGraphVisualizationManager *, const class IAnimationGraphVisualizerInfo  *, int); /* linkage=_ZN35IAnimationGraphVisualizationManager30GetVisualizerIfShouldVisualizeEPK29IAnimationGraphVisualizerInfoi */
};

// <00E819E2> ../public/animationsystem/ianimationgraphvisualizationmanager.h:229
void IAnimationGraphVisualizationManager::~IAnimationGraphVisualizationManager()
{
} /* size: 0 */

// <00E819B2> ../public/animationsystem/ianimationgraphvisualizationmanager.h:229
inline void IAnimationGraphVisualizationManager::~IAnimationGraphVisualizationManager()
{
} /* size: 0 */

