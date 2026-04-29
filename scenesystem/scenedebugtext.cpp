
//
// scenesystem/scenedebugtext.cpp
//
//	referenced by: libengine2.so
//
//	functions: 6
//	class: 1
//

// <02FBC21D> ../scenesystem/scenedebugtext.cpp:11
// member functions: 7
// member variable: 1
// vtable entries: 3
// class size: 8
class CDebugTextObjectDesc : public ISceneObjectDescBase<CSceneDebugTextObject> {
public:
	/* class ISceneObjectDescBase<CSceneDebugTextObject> <ancestor>; */ /* 0 8 */
	void ~CDebugTextObjectDesc(CDebugTextObjectDesc* );
	void CDebugTextObjectDesc(CDebugTextObjectDesc* , CDebugTextObjectDesc& );
	void CDebugTextObjectDesc(CDebugTextObjectDesc* , const CDebugTextObjectDesc& );
	void CDebugTextObjectDesc(CDebugTextObjectDesc* );
	/* ../scenesystem/scenedebugtext.cpp:14 */
	virtual const char* GetTypeName(CDebugTextObjectDesc* );
	/* ../scenesystem/scenedebugtext.cpp:40 */
	virtual void DrawArray(CDebugTextObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
protected:
	/* ../scenesystem/scenedebugtext.cpp:19 */
	virtual CSceneObject* Create(CDebugTextObjectDesc* );
};

// <02FC1B41> ../scenesystem/scenedebugtext.cpp:14
void CDebugTextObjectDesc::GetTypeName()
{
} /* size: 12 */

// <02FC1299> ../scenesystem/scenedebugtext.cpp:19
// variable: 1
// function calls: 33
void CDebugTextObjectDesc::Create()
{
	CSceneDebugTextObject* pNew; // 21
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
	CSceneObject::CSceneObject(); // 2515
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 205
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 211
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 212
	matrix3x4_t::matrix3x4_t(); // 216
	CStrAutoEncode::Set(
		const char* pch);  // 479
	CStrAutoEncode::CStrAutoEncode(
			const char* pch);  // 204
	CTextLayoutInfo::CTextLayoutInfo(); // 2515
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this); // 2515
	Vector::Vector(); // 2515
	Vector::operator=(
			const Vector& vOther);  // 2517
	CSceneDebugTextObject::CSceneDebugTextObject(); // 21
} /* size: 506, variables: 1, inline expansions: 33 (1231 bytes) */

// <02FC1251> ../scenesystem/scenedebugtext.cpp:28
inline float SignedIntervalDistance(float amin, float amax, float bmin, float bmax)
{
} /* size: 0 */

// <02FC11C6> ../scenesystem/scenedebugtext.cpp:33
// variables: 2
bool DoRectanglesIntersect(float flAX0, float flAY0, float flAX1, float flAY1, float flBX0, float flBY0, float flBX1, float flBY1)
{
	float xdelta; // 35
	float ydelta; // 36
} /* size: 0, variables: 2 */

// <02FC0A8D> ../scenesystem/scenedebugtext.cpp:40
// variables: 10
// function calls: 21
void CDebugTextObjectDesc::DrawArray(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& stats)
{
	{
		CSceneDebugTextObject* pObject; // 45
		CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int> >* pLists; // 46
		{
			Vector vOriginWs; // 50
			Vector4D vOriginPs; // 66
			{
				float flMaxDistSqr; // 54
				float flDistToOriginSqr; // 55
				Vector::Vector(); // 194
				Vector::LengthSqr(); // 198
				Vector::DistToSqr(
						const Vector& vOther);  // 55
			}
			{
				float flZoom; // 61
				CFrustum::GetCameraWidth(); // 61
			}
			{
				Vector2D vOriginSs; // 74
				Vector2D mins; // 79
				Vector2D maxs; // 79
				Vector2D::Vector2D(
					vec_t X,
					vec_t Y);  // 75
				Vector2D::Vector2D(); // 79
				Vector2D::Vector2D(); // 79
				Vector2D::operator+=(
						const Vector2D& v);  // 81
				Vector2D::operator+=(
						const Vector2D& v);  // 82
				SignedIntervalDistance(float amin,
							float amax,
							float bmin,
							float bmax);  // 35
				SignedIntervalDistance(float amin,
							float amax,
							float bmin,
							float bmax);  // 36
				DoRectanglesIntersect(float flAX0,
							float flAY0,
							float flAX1,
							float flAY1,
							float flBX0,
							float flBY0,
							float flBX1,
							float flBY1);  // 85
			}
			CSceneObject::GetTransform(); // 50
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 50
			Vector4D::Vector4D(); // 622
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 623
			VMatrix::V4Mul(
				const Vector4D& vIn,
				Vector4D& vOut);  // 623
			CFrustum::TransformPointToHomogenousViewCoordinates(
									const Vector& pnt);  // 66
		}
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 94
	}
} /* size: 1035 */

// <02FC05FD> ../scenesystem/scenedebugtext.cpp:105
// variables: 2
// function calls: 14
void CSceneSystem::CreateTextObject(Vector2D* pEndPos, ISceneWorld* pWorld, const CTextLayoutInfo* pTextInfo, bool bPositionIn3DWorldSpace, const Vector& vLocal3DPosition)
{
	CSceneDebugTextObject* pNew; // 111
	Vector2D endPos; // 115
	Vector2D::operator=(
			const Vector2D& vOther);  // 251
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 257
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 258
	CTextLayoutInfo::operator=(
			const CTextLayoutInfo& info);  // 114
	Vector::operator=(
			const Vector& vOther);  // 113
	Vector2D::operator=(
			const Vector2D& vOther);  // 119
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 121
} /* size: 569, variables: 2, inline expansions: 14 (522 bytes) */

