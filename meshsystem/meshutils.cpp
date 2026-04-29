
//
// meshsystem/meshutils.cpp
//
//	referenced by: libmeshsystem.so
//
//	functions: 25
//	classes: 3
//	struct: 1
//

// <0022879A> meshsystem/meshutils.cpp:19
void CMeshUtils::CMeshUtils()
{
} /* size: 0 */

// <0022877E> meshsystem/meshutils.cpp:19
inline void CMeshUtils::CMeshUtils()
{
} /* size: 0 */

// <002172C1> meshsystem/meshutils.cpp:19
// function calls: 9
void CMeshUtils::~CMeshUtils()
{
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IMeshUtils, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IMeshUtils, 0>::~CTier3AppSystem(); // 19
} /* size: 49, inline expansions: 9 (242 bytes) */

// <002172A5> meshsystem/meshutils.cpp:19
inline void CMeshUtils::~CMeshUtils()
{
} /* size: 0 */

// <0021266C> meshsystem/meshutils.cpp:19
// member functions: 16
// member variable: 1
// vtable entries: 3
// class size: 48
class CMeshUtils : public CTier3AppSystem<IMeshUtils, 0> {
public:
	/* class CTier3AppSystem<IMeshUtils, 0> <ancestor>; */ /* 0 48 */
	void CMeshUtils(CMeshUtils* , CMeshUtils& );
	void CMeshUtils(CMeshUtils* , const CMeshUtils& );
	void CMeshUtils(CMeshUtils* );
	/* meshsystem/meshutils.cpp:47 */
	virtual InitReturnVal_t Init(CMeshUtils* );
	/* meshsystem/meshutils.cpp:52 */
	virtual void Shutdown(CMeshUtils* );
	/* meshsystem/meshutils.cpp:382 */
	virtual CSceneSkeletonObject* CreateSkeletonSceneObject(CMeshUtils* , ISceneWorld* , ESceneObjectFlags, const matrix3x4_t& , const CModelSkeleton* , VertexColor_t* , ShowSkeletonJointFilter_t);
private:
	/* meshsystem/meshutils.cpp:355 */
	void ComputeBounds(CMeshUtils* , CSceneSkeletonObject* , Vector* , Vector* );
	void ~CMeshUtils(CMeshUtils* );
	void CMeshUtils(class CMeshUtils *, class CMeshUtils &); /* linkage=_ZN10CMeshUtilsC4EOS_ */
	void CMeshUtils(class CMeshUtils *, const class CMeshUtils  &); /* linkage=_ZN10CMeshUtilsC4ERKS_ */
	void CMeshUtils(class CMeshUtils *); /* linkage=_ZN10CMeshUtilsC4Ev */
	virtual enum InitReturnVal_t Init(class CMeshUtils *); /* linkage=_ZN10CMeshUtils4InitEv */
	virtual void Shutdown(class CMeshUtils *); /* linkage=_ZN10CMeshUtils8ShutdownEv */
	virtual class CSceneSkeletonObject * CreateSkeletonSceneObject(class CMeshUtils *, class ISceneWorld *, enum ESceneObjectFlags, const class matrix3x4_t  &, const class CModelSkeleton  *, class VertexColor_t *, class ShowSkeletonJointFilter_t); /* linkage=_ZN10CMeshUtils25CreateSkeletonSceneObjectEP11ISceneWorld17ESceneObjectFlagsRK11matrix3x4_tPK14CModelSkeletonP13VertexColor_t25ShowSkeletonJointFilter_t */
	void ComputeBounds(class CMeshUtils *, class CSceneSkeletonObject *, class Vector *, class Vector *); /* linkage=_ZN10CMeshUtils13ComputeBoundsEP20CSceneSkeletonObjectP6VectorS3_ */
	void ~CMeshUtils(class CMeshUtils *); /* linkage=_ZN10CMeshUtilsD4Ev */
};

// <00228750> meshsystem/meshutils.cpp:47
void CMeshUtils::Init()
{
} /* size: 10 */

// <00228722> meshsystem/meshutils.cpp:52
void CMeshUtils::Shutdown()
{
} /* size: 5 */

// <0022861D> meshsystem/meshutils.cpp:62
// variables: 2
// function call: 1
ResourceManifestDesc_t* InitManifestDesc<ToolSceneSkeleton::CTemplateArg>(CTemplateArg& def)
{
	ResourceManifestDesc_t s_Manifest; // 62
	ManifestEntryGroupList_t s_pManifestEntries; // 62
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 64
} /* size: 170, variables: 2, inline expansions: 1 (50 bytes) */

// <0022817B> meshsystem/meshutils.cpp:68
void SkeletonMeshVertex_t::SkeletonMeshVertex_t()
{
} /* size: 0 */

// <0022815F> meshsystem/meshutils.cpp:68
inline void SkeletonMeshVertex_t::SkeletonMeshVertex_t()
{
} /* size: 0 */

// <0021D9AB> meshsystem/meshutils.cpp:68
inline void SkeletonMeshVertex_t::operator=(const SkeletonMeshVertex_t &)
{
} /* size: 0 */

// <0021923E> meshsystem/meshutils.cpp:68
void SkeletonMeshVertex_t::SkeletonMeshVertex_t(const SkeletonMeshVertex_t &)
{
} /* size: 0 */

// <0021921D> meshsystem/meshutils.cpp:68
inline void SkeletonMeshVertex_t::SkeletonMeshVertex_t(const SkeletonMeshVertex_t &)
{
} /* size: 0 */

// <0021288E> meshsystem/meshutils.cpp:68
// member functions: 3
// member variables: 3
// struct size: 28
struct SkeletonMeshVertex_t {
	Vector m_vPositionOs; /* 0 12 */
	Vector m_vNormalOs; /* 12 12 */
	VertexColor_t m_color; /* 24 4 */
	void SkeletonMeshVertex_t(SkeletonMeshVertex_t* , const SkeletonMeshVertex_t& );
	SkeletonMeshVertex_t& operator=(SkeletonMeshVertex_t* , const SkeletonMeshVertex_t& );
	void SkeletonMeshVertex_t(SkeletonMeshVertex_t* );
};

// <00228606> meshsystem/meshutils.cpp:83
void CInputLayoutRegistration_g_hSkeletonMeshLayout::CInputLayoutRegistration_g_hSkeletonMeshLayout()
{
} /* size: 0 */

// <002285ED> meshsystem/meshutils.cpp:83
inline void CInputLayoutRegistration_g_hSkeletonMeshLayout::CInputLayoutRegistration_g_hSkeletonMeshLayout()
{
} /* size: 0 */

// <0022858F> meshsystem/meshutils.cpp:83
void CInputLayoutRegistration_g_hSkeletonMeshLayout::OnConnect()
{
} /* size: 70 */

// <00212969> meshsystem/meshutils.cpp:83
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 24
class CInputLayoutRegistration_g_hSkeletonMeshLayout : public CPostConnectCallback {
public:
	/* class CPostConnectCallback <ancestor>; */ /* 0 24 */
	void ~CInputLayoutRegistration_g_hSkeletonMeshLayout(CInputLayoutRegistration_g_hSkeletonMeshLayout* );
	void CInputLayoutRegistration_g_hSkeletonMeshLayout(CInputLayoutRegistration_g_hSkeletonMeshLayout* , CInputLayoutRegistration_g_hSkeletonMeshLayout& );
	void CInputLayoutRegistration_g_hSkeletonMeshLayout(CInputLayoutRegistration_g_hSkeletonMeshLayout* , const CInputLayoutRegistration_g_hSkeletonMeshLayout& );
	/* meshsystem/meshutils.cpp:83 */
	void CInputLayoutRegistration_g_hSkeletonMeshLayout(CInputLayoutRegistration_g_hSkeletonMeshLayout* );
	/* meshsystem/meshutils.cpp:83 */
	virtual PostConnectCallbackRetVal_t OnConnect(CInputLayoutRegistration_g_hSkeletonMeshLayout* );
	void ~CInputLayoutRegistration_g_hSkeletonMeshLayout(class CInputLayoutRegistration_g_hSkeletonMeshLayout *); /* linkage=_ZN46CInputLayoutRegistration_g_hSkeletonMeshLayoutD4Ev */
	void CInputLayoutRegistration_g_hSkeletonMeshLayout(class CInputLayoutRegistration_g_hSkeletonMeshLayout *, class CInputLayoutRegistration_g_hSkeletonMeshLayout &); /* linkage=_ZN46CInputLayoutRegistration_g_hSkeletonMeshLayoutC4EOS_ */
	void CInputLayoutRegistration_g_hSkeletonMeshLayout(class CInputLayoutRegistration_g_hSkeletonMeshLayout *, const class CInputLayoutRegistration_g_hSkeletonMeshLayout  &); /* linkage=_ZN46CInputLayoutRegistration_g_hSkeletonMeshLayoutC4ERKS_ */
	void CInputLayoutRegistration_g_hSkeletonMeshLayout(class CInputLayoutRegistration_g_hSkeletonMeshLayout *); /* linkage=_ZN46CInputLayoutRegistration_g_hSkeletonMeshLayoutC4Ev */
	virtual enum PostConnectCallbackRetVal_t OnConnect(class CInputLayoutRegistration_g_hSkeletonMeshLayout *); /* linkage=_ZN46CInputLayoutRegistration_g_hSkeletonMeshLayout9OnConnectEv */
};

// <00228564> meshsystem/meshutils.cpp:90
// variable: 1
int ComputeVertexCountForSkeletonMesh(int nChildCount)
{
	int nVertsPerBone; // 92
} /* size: 0, variables: 1 */

// <00228539> meshsystem/meshutils.cpp:99
// variable: 1
int ComputeIndexCountForSkeletonMesh(int nChildCount)
{
	int nTrisPerBone; // 101
} /* size: 0, variables: 1 */

// <002283B5> meshsystem/meshutils.cpp:108
// variables: 22
void AddBoneGeometryToBuffer(int nJointIdx, const Vector& vParent, const matrix3x4a_t& mChild, float flParentBoneRadius, float flChildBoneRadius, const VertexColor_t& c, CMemoryVertexData<SkeletonMeshVertex_t>& vb, CMemoryIndexData& ib)
{
	const float  flRadius; // 117
	int nStartVertIdx; // 118
	const Vector& vChild; // 120
	Vector vAxis; // 123
	Vector vCapNormal; // 133
	Vector vUp; // 135
	matrix3x4a_t m; // 138
	Vector vPlaneU; // 141
	Vector vPlaneV; // 141
	Vector vDiskCenter; // 146
	float flAngleScale; // 152
	Vector vApexPos; // 172
	{
		int i; // 153
		{
			float flAngle; // 155
			Vector vDir; // 156
		}
	}
	{
		int i; // 163
	}
	{
		int i; // 173
		{
			float flAngle; // 175
			Vector vNormal; // 176
			Vector vPos; // 177
			Vector vDir; // 178
		}
	}
	{
		int i; // 194
	}
} /* size: 0, variables: 12 */

// <002282EF> meshsystem/meshutils.cpp:204
// variables: 8
void AddJointBallGeometryToBuffer(int nJointIdx, const Vector& vCenter, float flRadius, const VertexColor_t& c, CMemoryVertexData<SkeletonMeshVertex_t>& vb, CMemoryIndexData& ib)
{
	int nStartVertIdx; // 208
	{
		int i; // 210
		{
			int j; // 212
			{
				float flU; // 214
				float flV; // 215
				Vector vNormal; // 216
			}
		}
	}
	{
		int i; // 227
		{
			int j; // 229
		}
	}
} /* size: 0, variables: 1 */

// <0022822C> meshsystem/meshutils.cpp:244
// variables: 11
void ComputeJointBallRadii(const CModelSkeleton* pSkeleton, CUtlVector<float, CUtlMemory<float, int> >* pRadiiOut)
{
	int nBoneCount; // 246
	CUtlVector<float, CUtlMemory<float, int> > maxJointLengths; // 248
	{
		int j; // 251
		{
			int nBone; // 253
			int nBoneParent; // 254
			{
				float flBoneLength; // 257
			}
		}
	}
	{
		int j; // 262
		{
			int nBone; // 264
			int nBoneParent; // 265
			{
				float flBoneLength; // 270
			}
		}
	}
	{
		int i; // 282
	}
} /* size: 0, variables: 2 */

// <0021433A> meshsystem/meshutils.cpp:293
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 8
class CSceneSkeletonObjectDesc : public ISceneObjectDescBase<CSceneSkeletonObject> {
public:
	/* class ISceneObjectDescBase<CSceneSkeletonObject> <ancestor>; */ /* 0 8 */
	void ~CSceneSkeletonObjectDesc(CSceneSkeletonObjectDesc* );
	void CSceneSkeletonObjectDesc(CSceneSkeletonObjectDesc* , CSceneSkeletonObjectDesc& );
	void CSceneSkeletonObjectDesc(CSceneSkeletonObjectDesc* , const CSceneSkeletonObjectDesc& );
	void CSceneSkeletonObjectDesc(CSceneSkeletonObjectDesc* );
	/* meshsystem/meshutils.cpp:296 */
	virtual void DrawArray(CSceneSkeletonObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
	/* meshsystem/meshutils.cpp:342 */
	virtual void DrawDebug(CSceneSkeletonObjectDesc* , IRenderContext* , const CMeshDrawPrimitive_t* , ISceneView* , ISceneLayer* );
protected:
	/* meshsystem/meshutils.cpp:345 */
	virtual CSceneObject* Create(CSceneSkeletonObjectDesc* );
	void ~CSceneSkeletonObjectDesc(class CSceneSkeletonObjectDesc *); /* linkage=_ZN24CSceneSkeletonObjectDescD4Ev */
	void CSceneSkeletonObjectDesc(class CSceneSkeletonObjectDesc *, class CSceneSkeletonObjectDesc &); /* linkage=_ZN24CSceneSkeletonObjectDescC4EOS_ */
	void CSceneSkeletonObjectDesc(class CSceneSkeletonObjectDesc *, const class CSceneSkeletonObjectDesc  &); /* linkage=_ZN24CSceneSkeletonObjectDescC4ERKS_ */
	void CSceneSkeletonObjectDesc(class CSceneSkeletonObjectDesc *); /* linkage=_ZN24CSceneSkeletonObjectDescC4Ev */
	virtual void DrawArray(class CSceneSkeletonObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN24CSceneSkeletonObjectDesc9DrawArrayEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_t */
	virtual void DrawDebug(class CSceneSkeletonObjectDesc *, class IRenderContext *, const class CMeshDrawPrimitive_t  *, class ISceneView *, class ISceneLayer *); /* linkage=_ZN24CSceneSkeletonObjectDesc9DrawDebugEP14IRenderContextPK20CMeshDrawPrimitive_tP10ISceneViewP11ISceneLayer */
	virtual class CSceneObject * Create(class CSceneSkeletonObjectDesc *); /* linkage=_ZN24CSceneSkeletonObjectDesc6CreateEv */
};

// <0022185E> meshsystem/meshutils.cpp:296
// variables: 62
// function calls: 460
void CSceneSkeletonObjectDesc::DrawArray(IRenderContext* pRenderContext, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& stats)
{
	const IMaterial2* pMat; // 300
	CRenderAttributes attributes; // 302
	CMemoryIndexData ib; // 306
	CMemoryVertexData<SkeletonMeshVertex_t> vb; // 307
	const char   __FUNCTION__; // 6298
	{
		CSceneSkeletonObject* pObject; // 311
		LODGroupMask_t nCurrentSceneObjectMask; // 312
		{
			int nBoneIndex; // 314
			CUtlVector<int, CUtlMemory<int, int> >& __for_range; // 34226
			iterator __for_begin; // 56268
			iterator __for_end; // 56268
			{
				LODGroupMask_t nJointLodMask; // 317
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 316
				}
				{
					int i; // 324
					{
						int nChild; // 327
						Vector::IsZero(
							float tolerance);  // 126
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 161
						matrix3x4_t::GetOrigin(); // 120
						VectorSubtract(const Vector& a,
								const Vector& b,
								Vector& c);  // 1444
						Vector::Vector(); // 1443
						Vector::operator-(
								const Vector& v);  // 123
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 2764
						matrix3x4_t::GetColumn(
								MatrixAxisType_t nColumn);  // 642
						Vector::operator=(
								const Vector& vOther);  // 642
						MatrixGetColumn(const matrix3x4_t& in,
								MatrixAxisType_t nColumn,
								Vector& out);  // 129
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 1431
						Vector::operator-(); // 133
						Vector::Vector(); // 135
						matrix3x4_t::matrix3x4_t(); // 303
						matrix3x4a_t::matrix3x4a_t(); // 138
						Vector::Vector(); // 141
						Vector::Vector(); // 141
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 2764
						matrix3x4_t::GetColumn(
								MatrixAxisType_t nColumn);  // 642
						MatrixGetColumn(const matrix3x4_t& in,
								MatrixAxisType_t nColumn,
								Vector& out);  // 142
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 1478
						operator*(float fl,
								const Vector& v);  // 146
						VectorSubtract(const Vector& a,
								const Vector& b,
								Vector& c);  // 1444
						Vector::Vector(); // 1443
						Vector::operator-(
								const Vector& v);  // 146
						CUtlMemory<SkeletonMeshVertex_t, int>::operator[](
								int i);  // 602
						CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::Element(
							int i);  // 1201
						VertexColor_t::AsUint32(); // 93
						VertexColor_t::AsUint32Ptr(); // 93
						VertexColor_t::VertexColor_t(
								const VertexColor_t& src);  // 68
						SkeletonMeshVertex_t::SkeletonMeshVertex_t(
									const SkeletonMeshVertex_t  &);  // 1520
						CopyConstruct<SkeletonMeshVertex_t>(SkeletonMeshVertex_t* pMemory,
											const SkeletonMeshVertex_t& src);  // 1201
						CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::AddToTail(
								const SkeletonMeshVertex_t& src);  // 33
						CMemoryVertexData<SkeletonMeshVertex_t>::AdvanceVertex(); // 150
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 2764
						matrix3x4_t::GetColumn(
								MatrixAxisType_t nColumn);  // 642
						MatrixGetColumn(const matrix3x4_t& in,
								MatrixAxisType_t nColumn,
								Vector& out);  // 143
						VertexColor_t::AsUint32(); // 203
						VertexColor_t::operator=(
								const VertexColor_t& src);  // 149
						Vector::operator=(
								const Vector& vOther);  // 148
						{
							int i; // 153
							{
								float flAngle; // 155
								Vector vDir; // 156
								Vector::Vector(); // 1450
								VectorMultiply(const Vector& a,
										vec_t b,
										Vector& c);  // 1451
								Vector::operator*(
										float fl);  // 1478
								operator*(float fl,
										const Vector& v);  // 156
								Vector::Vector(); // 1450
								VectorMultiply(const Vector& a,
										vec_t b,
										Vector& c);  // 1451
								Vector::operator*(
										float fl);  // 1478
								operator*(float fl,
										const Vector& v);  // 156
								Vector::Vector(); // 1436
								VectorAdd(const Vector& a,
										const Vector& b,
										Vector& c);  // 1437
								Vector::operator+(
										const Vector& v);  // 156
								Vector::Vector(); // 1450
								VectorMultiply(const Vector& a,
										vec_t b,
										Vector& c);  // 1451
								Vector::operator*(
										float fl);  // 1478
								operator*(float fl,
										const Vector& v);  // 157
								Vector::Vector(); // 1436
								VectorAdd(const Vector& a,
										const Vector& b,
										Vector& c);  // 1437
								Vector::operator+(
										const Vector& v);  // 157
								CUtlMemory<SkeletonMeshVertex_t, int>::operator[](
										int i);  // 602
								CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::Element(
									int i);  // 1201
								VertexColor_t::AsUint32(); // 93
								VertexColor_t::AsUint32Ptr(); // 93
								VertexColor_t::VertexColor_t(
										const VertexColor_t& src);  // 68
								SkeletonMeshVertex_t::SkeletonMeshVertex_t(
											const SkeletonMeshVertex_t  &);  // 1520
								CopyConstruct<SkeletonMeshVertex_t>(SkeletonMeshVertex_t* pMemory,
													const SkeletonMeshVertex_t& src);  // 1201
								CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::GrowMemory(
										int num);  // 1198
								CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::AddToTail(
										const SkeletonMeshVertex_t& src);  // 33
								CMemoryVertexData<SkeletonMeshVertex_t>::AdvanceVertex(); // 160
								VertexColor_t::AsUint32(); // 203
								VertexColor_t::operator=(
										const VertexColor_t& src);  // 159
								Vector::operator=(
										const Vector& vOther);  // 158
							}
						}
						{
							int i; // 163
							CUtlMemory<int, int>::operator[](
									int i);  // 602
							CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
								int i);  // 1201
							CopyConstruct<int>(int* pMemory,
										const int& src);  // 1201
							CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
							CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
									int num);  // 1198
							CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
									const int& src);  // 68
							CMemoryIndexData::Index(
								int nIndex);  // 165
							CUtlMemory<int, int>::operator[](
									int i);  // 602
							CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
								int i);  // 1201
							CopyConstruct<int>(int* pMemory,
										const int& src);  // 1201
							CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
							CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
									int num);  // 1198
							CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
									const int& src);  // 68
							CMemoryIndexData::Index(
								int nIndex);  // 166
							CUtlMemory<int, int>::operator[](
									int i);  // 602
							CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
								int i);  // 1201
							CopyConstruct<int>(int* pMemory,
										const int& src);  // 1201
							CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
							CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
									int num);  // 1198
							CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
									const int& src);  // 68
							CMemoryIndexData::Index(
								int nIndex);  // 167
						}
						{
							int i; // 173
							{
								float flAngle; // 175
								Vector vNormal; // 176
								Vector vPos; // 177
								Vector vDir; // 178
								Vector::Vector(); // 1450
								VectorMultiply(const Vector& a,
										vec_t b,
										Vector& c);  // 1451
								Vector::operator*(
										float fl);  // 1478
								operator*(float fl,
										const Vector& v);  // 176
								Vector::Vector(); // 1450
								VectorMultiply(const Vector& a,
										vec_t b,
										Vector& c);  // 1451
								Vector::operator*(
										float fl);  // 1478
								operator*(float fl,
										const Vector& v);  // 176
								Vector::Vector(); // 1436
								VectorAdd(const Vector& a,
										const Vector& b,
										Vector& c);  // 1437
								Vector::operator+(
										const Vector& v);  // 176
								VectorMultiply(const Vector& a,
										vec_t b,
										Vector& c);  // 1451
								Vector::Vector(); // 1450
								Vector::operator*(
										float fl);  // 1478
								operator*(float fl,
										const Vector& v);  // 177
								VectorAdd(const Vector& a,
										const Vector& b,
										Vector& c);  // 1437
								Vector::Vector(); // 1436
								Vector::operator+(
										const Vector& v);  // 177
								VectorSubtract(const Vector& a,
										const Vector& b,
										Vector& c);  // 1444
								Vector::Vector(); // 1443
								Vector::operator-(
										const Vector& v);  // 178
								Vector::NormalizeInPlace(); // 179
								DotProduct(const Vector& a,
										const Vector& b);  // 180
								VectorMultiply(const Vector& a,
										vec_t b,
										Vector& c);  // 1451
								Vector::Vector(); // 1450
								Vector::operator*(
										float fl);  // 1478
								operator*(float fl,
										const Vector& v);  // 180
								Vector::NormalizeInPlace(); // 181
								Vector::Vector(); // 1443
								VectorSubtract(const Vector& a,
										const Vector& b,
										Vector& c);  // 1444
								Vector::operator-(
										const Vector& v);  // 180
								Vector::operator=(
										const Vector& vOther);  // 180
								Vector::operator=(
										const Vector& vOther);  // 184
								CUtlMemory<SkeletonMeshVertex_t, int>::operator[](
										int i);  // 602
								CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::Element(
									int i);  // 1201
								VertexColor_t::AsUint32(); // 93
								VertexColor_t::AsUint32Ptr(); // 93
								VertexColor_t::VertexColor_t(
										const VertexColor_t& src);  // 68
								SkeletonMeshVertex_t::SkeletonMeshVertex_t(
											const SkeletonMeshVertex_t  &);  // 1520
								CopyConstruct<SkeletonMeshVertex_t>(SkeletonMeshVertex_t* pMemory,
													const SkeletonMeshVertex_t& src);  // 1201
								CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::GrowMemory(
										int num);  // 1198
								CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::AddToTail(
										const SkeletonMeshVertex_t& src);  // 33
								CMemoryVertexData<SkeletonMeshVertex_t>::AdvanceVertex(); // 186
								VertexColor_t::AsUint32(); // 203
								VertexColor_t::operator=(
										const VertexColor_t& src);  // 185
								CUtlMemory<SkeletonMeshVertex_t, int>::operator[](
										int i);  // 602
								CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::Element(
									int i);  // 1201
								VertexColor_t::AsUint32(); // 93
								VertexColor_t::AsUint32Ptr(); // 93
								VertexColor_t::VertexColor_t(
										const VertexColor_t& src);  // 68
								SkeletonMeshVertex_t::SkeletonMeshVertex_t(
											const SkeletonMeshVertex_t  &);  // 1520
								CopyConstruct<SkeletonMeshVertex_t>(SkeletonMeshVertex_t* pMemory,
													const SkeletonMeshVertex_t& src);  // 1201
								CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::GrowMemory(
										int num);  // 1198
								CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::AddToTail(
										const SkeletonMeshVertex_t& src);  // 33
								CMemoryVertexData<SkeletonMeshVertex_t>::AdvanceVertex(); // 191
								Vector::operator=(
										const Vector& vOther);  // 189
								VertexColor_t::AsUint32(); // 203
								VertexColor_t::operator=(
										const VertexColor_t& src);  // 190
							}
						}
						{
							int i; // 194
							CUtlMemory<int, int>::operator[](
									int i);  // 602
							CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
								int i);  // 1201
							CopyConstruct<int>(int* pMemory,
										const int& src);  // 1201
							CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
							CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
									int num);  // 1198
							CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
									const int& src);  // 68
							CMemoryIndexData::Index(
								int nIndex);  // 196
							CUtlMemory<int, int>::operator[](
									int i);  // 602
							CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
								int i);  // 1201
							CopyConstruct<int>(int* pMemory,
										const int& src);  // 1201
							CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
							CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
									int num);  // 1198
							CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
									const int& src);  // 68
							CMemoryIndexData::Index(
								int nIndex);  // 197
							CUtlMemory<int, int>::operator[](
									int i);  // 602
							CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
								int i);  // 1201
							CopyConstruct<int>(int* pMemory,
										const int& src);  // 1201
							CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
							CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
									int num);  // 1198
							CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
									const int& src);  // 68
							CMemoryIndexData::Index(
								int nIndex);  // 198
						}
						AddBoneGeometryToBuffer(int nJointIdx,
									const Vector& vParent,
									const matrix3x4a_t& mChild,
									float flParentBoneRadius,
									float flChildBoneRadius,
									const VertexColor_t& c,
									CMemoryVertexData<SkeletonMeshVertex_t>& vb,
									CMemoryIndexData& ib);  // 329
						CUtlMemory<int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
								int i);  // 327
						CUtlMemory<VertexColor_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<VertexColor_t, CUtlMemory<VertexColor_t, int> >::operator[](
								int i);  // 332
						CUtlMemory<matrix3x4a_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
								int i);  // 330
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 331
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 331
						CUtlMemory<matrix3x4a_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
								int i);  // 329
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 161
						matrix3x4_t::GetOrigin(); // 329
					}
					CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
							int i);  // 324
					CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 324
				}
				CUtlMemory<VertexColor_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VertexColor_t, CUtlMemory<VertexColor_t, int> >::operator[](
						int i);  // 322
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 161
				matrix3x4_t::GetOrigin(); // 321
				{
					int i; // 210
					{
						int j; // 212
						{
							float flU; // 214
							float flV; // 215
							Vector vNormal; // 216
							CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::ResetDbgInfo(); // 824
							CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::GrowMemory(
									int num);  // 1198
							CUtlMemory<SkeletonMeshVertex_t, int>::operator[](
									int i);  // 602
							CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::Element(
								int i);  // 1201
							VertexColor_t::AsUint32(); // 93
							VertexColor_t::AsUint32Ptr(); // 93
							VertexColor_t::VertexColor_t(
									const VertexColor_t& src);  // 68
							SkeletonMeshVertex_t::SkeletonMeshVertex_t(
										const SkeletonMeshVertex_t  &);  // 1520
							CopyConstruct<SkeletonMeshVertex_t>(SkeletonMeshVertex_t* pMemory,
												const SkeletonMeshVertex_t& src);  // 1201
							CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::AddToTail(
									const SkeletonMeshVertex_t& src);  // 33
							CMemoryVertexData<SkeletonMeshVertex_t>::AdvanceVertex(); // 221
							VectorMA(const Vector& start,
								float scale,
								const Vector& direction,
								Vector& dest);  // 219
							VertexColor_t::AsUint32(); // 203
							VertexColor_t::operator=(
									const VertexColor_t& src);  // 220
							Vector::Vector(
								vec_t X,
								vec_t Y,
								vec_t Z);  // 216
						}
					}
				}
				{
					int i; // 227
					{
						int j; // 229
						CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
								int num);  // 1198
						CUtlMemory<int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
							int i);  // 1201
						CopyConstruct<int>(int* pMemory,
									const int& src);  // 1201
						CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
								const int& src);  // 68
						CMemoryIndexData::Index(
							int nIndex);  // 231
						CUtlMemory<int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
							int i);  // 1201
						CopyConstruct<int>(int* pMemory,
									const int& src);  // 1201
						CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
								const int& src);  // 68
						CMemoryIndexData::Index(
							int nIndex);  // 232
						CUtlMemory<int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
							int i);  // 1201
						CopyConstruct<int>(int* pMemory,
									const int& src);  // 1201
						CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
								const int& src);  // 68
						CMemoryIndexData::Index(
							int nIndex);  // 233
						CUtlMemory<int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
							int i);  // 1201
						CopyConstruct<int>(int* pMemory,
									const int& src);  // 1201
						CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
								const int& src);  // 68
						CMemoryIndexData::Index(
							int nIndex);  // 235
						CUtlMemory<int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
							int i);  // 1201
						CopyConstruct<int>(int* pMemory,
									const int& src);  // 1201
						CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
								const int& src);  // 68
						CMemoryIndexData::Index(
							int nIndex);  // 236
						CUtlMemory<int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
							int i);  // 1201
						CopyConstruct<int>(int* pMemory,
									const int& src);  // 1201
						CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
								const int& src);  // 68
						CMemoryIndexData::Index(
							int nIndex);  // 237
					}
				}
				AddJointBallGeometryToBuffer(int nJointIdx,
								const Vector& vCenter,
								float flRadius,
								const VertexColor_t& c,
								CMemoryVertexData<SkeletonMeshVertex_t>& vb,
								CMemoryIndexData& ib);  // 321
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 322
				CUtlMemory<matrix3x4a_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
						int i);  // 321
				CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
						int i);  // 317
				operator>>(BoneFlags_t a,
						int b);  // 317
			}
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 102
			CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 314
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 104
			CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 314
		}
		CSceneObject::GetCurrentLODGroupMask(); // 312
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetData(); // 300
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::CUtlAttributeList(); // 898
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
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	{
		uint32* pThis; // 978
		const uint32* pDefault; // 979
		CSamplerStateDescBase::CSamplerStateDescBase(); // 927
		{
			float32 flZeros; // 936
			float32 flOnes; // 937
			CSamplerStateDescBase::SetFilterMode(
					RsFilter_t filter);  // 928
			CSamplerStateDescBase::SetTextureAddressModeU(
						RsTextureAddressMode_t addressMode);  // 929
			CSamplerStateDescBase::SetTextureAddressModeV(
						RsTextureAddressMode_t addressMode);  // 930
			CSamplerStateDescBase::SetTextureAddressModeW(
						RsTextureAddressMode_t addressMode);  // 931
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 800
			CSamplerStateDescBase::SetMaxAnisotropy(
					uint32 nMaxAniso);  // 933
			CSamplerStateDescBase::SetMipLodBias(
					float32 flBias);  // 932
			CSamplerStateDescBase::SetBorderColor(
					const float32* pBorderColor);  // 938
			CSamplerStateDescBase::SetComparisonFunc(
						RsComparison_t compFunc);  // 934
			CSamplerStateDescBase::SetMinMaxLod(
					uint32 nMinLod,
					uint32 nMaxLod);  // 935
			CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
							bool bAllow);  // 939
		}
		CSamplerStateDesc::CSamplerStateDesc(
					RsFilter_t filter,
					RsTextureAddressMode_t addressU,
					RsTextureAddressMode_t addressV,
					RsTextureAddressMode_t addressW,
					float32 flMipLodBias,
					uint32 nMaxAniso,
					RsComparison_t comparisonFunc,
					uint32 nMinLod,
					uint32 nMaxLod,
					bool bWhiteBorder,
					bool bAllowGlobalMipBiasOverride);  // 970
		DefaultSamplerStateDesc(void); // 959
		DefaultSamplerStateDesc(void); // 979
	}
	CSamplerStateDescBase::CSamplerStateDescBase(); // 975
	CSamplerStateDesc::CSamplerStateDesc(); // 31
	SamplerAttrForStorage_t::SamplerAttrForStorage_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 248
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::CUtlAttributeList(); // 898
	DescriptorSetAttr_t::DescriptorSetAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 248
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<void::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<void::CUtlIntrusiveList(); // 248
	CUtlAttributeList<void::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlString::CUtlString(); // 117
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::CUtlAttributeList(); // 898
	CRenderAttributes::CRenderAttributes(); // 302
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 303
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 236
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
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
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 11250
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 11260
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 11270
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 317
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
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 309
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 356
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			Vector4D** pValueOut);  // 547
	Vector4D::operator=(
			const Vector4D& vOther);  // 566
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
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 23693
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 23703
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 23713
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 337
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
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 328
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
		AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		uint32 nKey,
		Vector4D nValue);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 236
	CRenderAttributes::SetVectorValue(
			CUtlStringToken nTokenID,
			Vector vValue);  // 303
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 51
	CMemoryIndexData::CMemoryIndexData(); // 306
	CUtlMemory<SkeletonMeshVertex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<SkeletonMeshVertex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::CUtlVector(); // 22
	Vector::Vector(); // 68
	Vector::Vector(); // 68
	VertexColor_t::VertexColor_t(); // 68
	SkeletonMeshVertex_t::SkeletonMeshVertex_t(); // 22
	CMemoryVertexData<SkeletonMeshVertex_t>::CMemoryVertexData(); // 307
	CUtlMemory<SkeletonMeshVertex_t, int>::Purge(); // 903
	CUtlMemory<SkeletonMeshVertex_t, int>::Purge(); // 1799
	CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::Purge(); // 560
	ValidateAlignment<SkeletonMeshVertex_t>(void); // 508
	CUtlMemory<SkeletonMeshVertex_t, int>::Purge(); // 510
	CUtlMemory<SkeletonMeshVertex_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::~CUtlVector(); // 22
	CMemoryVertexData<SkeletonMeshVertex_t>::~CMemoryVertexData(); // 340
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 51
	CMemoryIndexData::~CMemoryIndexData(); // 340
} /* size: 7633, variables: 5, inline expansions: 127 (6315 bytes) */

// <002217F4> meshsystem/meshutils.cpp:342
void CSceneSkeletonObjectDesc::DrawDebug(IRenderContext* pCtx, const CMeshDrawPrimitive_t* pPrimitive, ISceneView* pView, ISceneLayer* pLayer)
{
} /* size: 5 */

// <00220DA6> meshsystem/meshutils.cpp:345
// variable: 1
// function calls: 47
void CSceneSkeletonObjectDesc::Create()
{
	CSceneSkeletonObject* pNew; // 347
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
	IGenericInterface::IGenericInterface(); // 1428
	CUtlStringToken::CUtlStringToken(); // 1428
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1428
	CManagedHandle::CManagedHandle(); // 1428
	CSceneObject::CSceneObject(); // 28
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<matrix3x4a_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVector(); // 28
	CUtlMemory<VertexColor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VertexColor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VertexColor_t, CUtlMemory<VertexColor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VertexColor_t, CUtlMemory<VertexColor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VertexColor_t, CUtlMemory<VertexColor_t, int> >::CUtlVector(); // 28
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::CUtlVector(); // 28
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 28
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 28
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 28
	CSceneSkeletonObject::CSceneSkeletonObject(); // 347
} /* size: 482, variables: 1, inline expansions: 47 (1586 bytes) */

// <002207DF> meshsystem/meshutils.cpp:355
// variables: 4
// function calls: 19
void CMeshUtils::ComputeBounds(CSceneSkeletonObject* pObject, Vector* pMins, Vector* pMaxs)
{
	int nCount; // 360
	{
		int i; // 368
		{
			const matrix3x4_t& t; // 370
			Vector pos; // 371
			CUtlMemory<matrix3x4a_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
					int i);  // 370
			Vector::operator=(
					const Vector& vOther);  // 372
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 371
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1534
			VectorMin(const Vector& a,
					const Vector& b);  // 372
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1539
			VectorMax(const Vector& a,
					const Vector& b);  // 373
			Vector::operator=(
					const Vector& vOther);  // 373
		}
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 357
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 358
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 360
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 378
	Vector::operator-=(
			const Vector& v);  // 378
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 379
	Vector::operator+=(
			const Vector& v);  // 379
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 364
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 363
} /* size: 287, variables: 1, inline expansions: 9 (127 bytes) */

// <0021EE15> meshsystem/meshutils.cpp:382
// variables: 21
// function calls: 94
void CMeshUtils::CreateSkeletonSceneObject(ISceneWorld* pSceneWorld, ESceneObjectFlags nLayerFlags, const matrix3x4_t& rootToWorld, const CModelSkeleton* pSkeleton, VertexColor_t* pColor, ShowSkeletonJointFilter_t filter)
{
	int nBoneCount; // 389
	CSceneSkeletonObject* pNew; // 393
	CTransform t; // 396
	int nVertexCount; // 399
	int nIndexCount; // 400
	Vector mins; // 444
	Vector maxs; // 444
	{
		int j; // 405
		{
			BoneFlags_t nFlags; // 407
			{
				int i; // 420
				CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
						int i);  // 424
				CUtlMemory<int, int>::NumAllocated(); // 1196
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlMemory<int, int>::Base(); // 112
				CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 424
			}
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
					int i);  // 408
			CUtlMemory<VertexColor_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VertexColor_t, CUtlMemory<VertexColor_t, int> >::operator[](
					int i);  // 412
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 416
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 436
			VertexColor_t::Init(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 412
		}
	}
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
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
			float p3);  // 111
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	matrix3x4_t::ToCTransform(); // 396
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 397
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 248
	{
		int i; // 1554
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
			const float& src);  // 250
	{
		int j; // 251
		{
			int nBone; // 253
			int nBoneParent; // 254
			{
				float flBoneLength; // 257
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 257
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 258
			}
		}
	}
	{
		int j; // 262
		{
			int nBone; // 264
			int nBoneParent; // 265
			{
				float flBoneLength; // 270
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 270
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 271
			}
		}
	}
	{
		int i; // 282
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 285
	}
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 287
	ComputeJointBallRadii(const CModelSkeleton* pSkeleton,
				CUtlVector<float, CUtlMemory<float, int> >* pRadiiOut);  // 438
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 441
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 2082
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
	CSceneObject::SetTransform(
			const matrix3x4_t& mTransform);  // 442
	Vector::Vector(); // 444
	Vector::Vector(); // 444
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 446
} /* size: 1773, variables: 7, inline expansions: 48 (2105 bytes) */

