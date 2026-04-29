
//
// scenesystem/utils/renderutils.cpp
//
//	referenced by: libengine2.so
//
//	functions: 36
//	classes: 2
//

// <03C41865> ../scenesystem/utils/renderutils.cpp:21
inline HMaterial WireframeMaterial(bool bZBuffered)
{
} /* size: 0 */

// <03C41835> ../scenesystem/utils/renderutils.cpp:28
inline HMaterial VertexLitMaterial(bool bZBuffered, bool bTranslucent)
{
} /* size: 0 */

// <03C3F364> ../scenesystem/utils/renderutils.cpp:40
// variables: 21
// function calls: 120
void CSceneUtils::RenderWireframeSphere(ISceneWorld* pWorld, const Vector& vCenter, float flRadius, int nTheta, int nPhi, Color c, bool bZBuffer, bool bDeleteAtFrameEnd)
{
	int nVertices; // 45
	int nIndices; // 46
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> meshBuilder; // 48
	uint8 chRed; // 51
	uint8 chGreen; // 52
	uint8 chBlue; // 53
	uint8 chAlpha; // 54
	int i; // 56
	int j; // 56
	CSceneObject* pObj; // 94
	{
		float u; // 61
		float v; // 62
		float theta; // 63
		float phi; // 64
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 116
		VertexPos_t::Position3f(
				float x,
				float y,
				float z);  // 1189
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1190
		{
			int i; // 345
			Vector::operator[](
					int i);  // 347
			Vector::operator[](
					int i);  // 352
		}
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
				const Vector& point);  // 1190
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3f(
				float x,
				float y,
				float z);  // 66
		VertexColor_t::Init(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 428
		VertexColorUVPos_t::Color4ub(
			unsigned char r,
			unsigned char g,
			unsigned char b,
			unsigned char a);  // 1229
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
			unsigned char r,
			unsigned char g,
			unsigned char b,
			unsigned char a);  // 69
		{
		}
		Vector::operator=(
				const Vector& vOther);  // 103
		VertexPos_t::operator=(
				const VertexPos_t  &);  // 257
		Vector2D::operator=(
				const Vector2D& vOther);  // 257
		VertexUVPos_t::operator=(
				const VertexUVPos_t  &);  // 372
		VertexColor_t::AsUint32(); // 203
		VertexColor_t::operator=(
				const VertexColor_t& src);  // 372
		VertexColorUVPos_t::operator=(
				const VertexColorUVPos_t  &);  // 572
		Vector::operator=(
				const Vector& vOther);  // 572
		Vector4D::operator=(
				const Vector4D& vOther);  // 572
		VertexUVPosColorNormalAndTangent_t::operator=(
				const VertexUVPosColorNormalAndTangent_t  &);  // 355
		{
		}
		CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
		CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 70
	}
	{
		uint16 idx; // 78
		{
		}
		CIndexDataBase<short unsigned int>::SetCurrentIndexValue(
					short unsigned int nIndex);  // 1076
		{
		}
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Index(
			short unsigned int idx);  // 80
		{
		}
		{
		}
		CIndexDataBase<short unsigned int>::AdvanceIndexCount(
					int nNumIndices);  // 900
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceIndex(); // 81
		{
		}
		{
		}
		CIndexDataBase<short unsigned int>::SetCurrentIndexValue(
					short unsigned int nIndex);  // 1076
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Index(
			short unsigned int idx);  // 83
		{
		}
		{
		}
		CIndexDataBase<short unsigned int>::AdvanceIndexCount(
					int nNumIndices);  // 900
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceIndex(); // 84
		{
		}
		{
		}
		CIndexDataBase<short unsigned int>::SetCurrentIndexValue(
					short unsigned int nIndex);  // 1076
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Index(
			short unsigned int idx);  // 86
		{
		}
		{
		}
		CIndexDataBase<short unsigned int>::AdvanceIndexCount(
					int nNumIndices);  // 900
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceIndex(); // 87
		{
		}
		{
		}
		CIndexDataBase<short unsigned int>::SetCurrentIndexValue(
					short unsigned int nIndex);  // 1076
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Index(
			short unsigned int idx);  // 89
		{
		}
		{
		}
		CIndexDataBase<short unsigned int>::AdvanceIndexCount(
					int nNumIndices);  // 900
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceIndex(); // 90
	}
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 623
	{
		RenderInputLayoutField_t posColorUVNormalTangentLayout; // 625
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
				int nLineNumber);  // 39
		CThreadSyncValue<bool>::Load(); // 34
		CTSInputLayoutCreator::IsInitialized(); // 40
		CThreadSyncValue<bool>::Store(
			bool value);  // 43
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
		CTSInputLayoutCreator::CreateLayout(
				const char* pLayoutName,
				int nFieldCount,
				const RenderInputLayoutField_t* pFieldDescs);  // 634
	}
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 638
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 621
	GetLayout(void); // 330
	Vector::Vector(); // 328
	Vector::Vector(); // 328
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 331
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 332
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::CMeshBuilder2(); // 48
	{
	}
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
	{
	}
	{
	}
	CVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(
		int nMaxVertexCount);  // 605
	{
		LockDesc_t desc; // 459
		bool bOk; // 460
	}
	{
	}
	{
	}
	CIndexData<short unsigned int>::Lock(
		int nMaxIndexCount);  // 611
	{
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Begin(
		MaterialPrimitiveType2_t type,
		int nVertexCount,
		int nIndexCount);  // 49
	WireframeMaterial(bool bZBuffered); // 94
	Vector::Vector(); // 11
	Vector::Vector(); // 11
	MeshBuilderBuffers_t::MeshBuilderBuffers_t(); // 800
	{
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 754
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 1007
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseVertexData(); // 756
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 760
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 757
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::GetLayout(); // 759
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 768
	Vector::operator=(
			const Vector& vOther);  // 771
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 778
	Vector::operator=(
			const Vector& vOther);  // 770
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 777
	CIndexData<short unsigned int>::ReleaseBuffer(); // 784
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 785
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 751
	{
	}
	CIndexDataBase<short unsigned int>::Base(); // 1014
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseIndexData(); // 762
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 801
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::EndAndExtract(
			bool bPurge);  // 94
	{
	}
	MaterialPrimTypeToRenderPrimType(MaterialPrimitiveType2_t type); // 557
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 408
	Vector::Vector(); // 408
	Vector::Vector(); // 408
	SceneObjectCreationInfo_t::SceneObjectCreationInfo_t(); // 548
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 556
	Vector::operator=(
			const Vector& vOther);  // 559
	Vector::operator=(
			const Vector& vOther);  // 560
	ISceneSystem::CreateSceneObjectFromStaticBuffers(
						ESceneObjectFlags nFlags,
						ISceneWorld* pWorld,
						const MeshBuilderBuffers_t& buffers,
						HMaterial hMaterial,
						bool bDeleteAtFrameEnd);  // 94
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 95
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 96
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 399
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 400
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 401
	CIndexDataBase<short unsigned int>::Base(); // 408
	CIndexData<short unsigned int>::ReleaseBuffer(); // 409
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 410
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ClearBuffers(); // 339
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::~CMeshBuilder2(); // 98
} /* size: 0, variables: 10, inline expansions: 67 (5298 bytes) */

// <03C3C4E1> ../scenesystem/utils/renderutils.cpp:104
// variables: 29
// function calls: 155
CSceneObject* RenderSphereInternal(ISceneWorld* pWorld, const Vector& vCenter, float flRadius, int nTheta, int nPhi, Color c, HMaterial hMaterial, bool bInsideOut, bool bDeleteAtFrameEnd)
{
	uint8 chRed; // 106
	uint8 chGreen; // 107
	uint8 chBlue; // 108
	uint8 chAlpha; // 109
	int nTriangles; // 112
	int nIndices; // 113
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> meshBuilder; // 117
	float flOONPhi; // 121
	float flOONTheta; // 122
	int i; // 124
	int j; // 124
	CSceneObject* pObj; // 185
	matrix3x4_t mTransform; // 187
	Vector4D color; // 191
	{
		float u; // 129
		float v; // 130
		float theta; // 131
		float phi; // 132
		Vector vecPos; // 134
		Vector vecNormal; // 139
		Vector4D vecTangent; // 142
		Vector::Vector(); // 134
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 142
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 116
		VertexPos_t::Position3f(
				float x,
				float y,
				float z);  // 1189
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1190
		{
			int i; // 345
			Vector::operator[](
					int i);  // 347
			Vector::operator[](
					int i);  // 352
		}
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
				const Vector& point);  // 1190
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3f(
				float x,
				float y,
				float z);  // 145
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 588
		VertexUVPosColorNormalAndTangent_t::Normal3f(
			float nx,
			float ny,
			float nz);  // 1201
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Normal3f(
			float nx,
			float ny,
			float nz);  // 146
		VertexColor_t::Init(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 428
		VertexColorUVPos_t::Color4ub(
			unsigned char r,
			unsigned char g,
			unsigned char b,
			unsigned char a);  // 1229
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
			unsigned char r,
			unsigned char g,
			unsigned char b,
			unsigned char a);  // 147
		Vector4D::operator=(
				const Vector4D& vOther);  // 610
		VertexUVPosColorNormalAndTangent_t::TangentBasis(
				const Vector4D& val);  // 1274
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TangentBasis(
				const Vector4D& vecTangent);  // 148
		VertexUVPos_t::TexCoord(
			int nStage,
			const Vector4D& vecUV);  // 287
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 287
		VertexUVPos_t::TexCoord2f(
				int nStage,
				float s,
				float t);  // 1261
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TexCoord2f(
				int nStage,
				float s,
				float t);  // 149
		{
		}
		Vector::operator=(
				const Vector& vOther);  // 103
		VertexPos_t::operator=(
				const VertexPos_t  &);  // 257
		Vector2D::operator=(
				const Vector2D& vOther);  // 257
		VertexUVPos_t::operator=(
				const VertexUVPos_t  &);  // 372
		VertexColor_t::AsUint32(); // 203
		VertexColor_t::operator=(
				const VertexColor_t& src);  // 372
		VertexColorUVPos_t::operator=(
				const VertexColorUVPos_t  &);  // 572
		Vector::operator=(
				const Vector& vOther);  // 572
		Vector4D::operator=(
				const Vector4D& vOther);  // 572
		VertexUVPosColorNormalAndTangent_t::operator=(
				const VertexUVPosColorNormalAndTangent_t  &);  // 355
		{
		}
		CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
		CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 150
	}
	{
		uint16 idx; // 161
		{
		}
		CIndexDataBase<short unsigned int>::SetCurrentIndexValue(
					short unsigned int nIndex);  // 1076
		{
		}
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Index(
			short unsigned int idx);  // 163
		{
		}
		{
		}
		CIndexDataBase<short unsigned int>::AdvanceIndexCount(
					int nNumIndices);  // 900
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceIndex(); // 164
		{
		}
		{
		}
		CIndexDataBase<short unsigned int>::SetCurrentIndexValue(
					short unsigned int nIndex);  // 1076
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Index(
			short unsigned int idx);  // 166
		{
		}
		{
		}
		CIndexDataBase<short unsigned int>::AdvanceIndexCount(
					int nNumIndices);  // 900
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceIndex(); // 167
	}
	{
		uint16 idx; // 174
		{
		}
		CIndexDataBase<short unsigned int>::SetCurrentIndexValue(
					short unsigned int nIndex);  // 1076
		{
		}
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Index(
			short unsigned int idx);  // 176
		{
		}
		{
		}
		CIndexDataBase<short unsigned int>::AdvanceIndexCount(
					int nNumIndices);  // 900
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceIndex(); // 177
		{
		}
		{
		}
		CIndexDataBase<short unsigned int>::SetCurrentIndexValue(
					short unsigned int nIndex);  // 1076
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Index(
			short unsigned int idx);  // 179
		{
		}
		{
		}
		CIndexDataBase<short unsigned int>::AdvanceIndexCount(
					int nNumIndices);  // 900
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceIndex(); // 180
	}
	Vector::Vector(); // 328
	Vector::Vector(); // 328
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 623
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 638
	{
		RenderInputLayoutField_t posColorUVNormalTangentLayout; // 625
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
				int nLineNumber);  // 39
		CThreadSyncValue<bool>::Load(); // 34
		CTSInputLayoutCreator::IsInitialized(); // 40
		CThreadSyncValue<bool>::Store(
			bool value);  // 43
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
		CTSInputLayoutCreator::CreateLayout(
				const char* pLayoutName,
				int nFieldCount,
				const RenderInputLayoutField_t* pFieldDescs);  // 634
	}
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 621
	GetLayout(void); // 330
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 331
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 332
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::CMeshBuilder2(); // 117
	{
	}
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
	{
	}
	{
	}
	CVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(
		int nMaxVertexCount);  // 605
	{
		LockDesc_t desc; // 459
		bool bOk; // 460
	}
	{
	}
	{
	}
	CIndexData<short unsigned int>::Lock(
		int nMaxIndexCount);  // 611
	{
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Begin(
		MaterialPrimitiveType2_t type,
		int nVertexCount,
		int nIndexCount);  // 118
	{
	}
	MaterialPrimTypeToRenderPrimType(MaterialPrimitiveType2_t type); // 557
	Vector::operator=(
			const Vector& vOther);  // 559
	Vector::operator=(
			const Vector& vOther);  // 560
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 408
	Vector::Vector(); // 408
	Vector::Vector(); // 408
	SceneObjectCreationInfo_t::SceneObjectCreationInfo_t(); // 548
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 556
	ISceneSystem::CreateSceneObjectFromStaticBuffers(
						ESceneObjectFlags nFlags,
						ISceneWorld* pWorld,
						const MeshBuilderBuffers_t& buffers,
						HMaterial hMaterial,
						bool bDeleteAtFrameEnd);  // 185
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 186
	matrix3x4_t::matrix3x4_t(); // 187
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 189
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 2082
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
	CSceneObject::SetTransform(
			const matrix3x4_t& mTransform);  // 190
	Vector4DSubtract(const Vector4D& a,
			const Vector4D& b,
			Vector4D& c);  // 708
	Vector4D::LengthSqr(); // 709
	Vector4D::Vector4D(); // 707
	Vector4D::DistToSqr(
			const Vector4D& vOther);  // 417
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 417
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 423
	CSceneObject::SetTintRGBA_Gamma(
				const Vector4D& vTint);  // 415
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 431
	CSceneObject::SetTintRGBA_Gamma(
				const Vector4D& vTint);  // 192
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 191
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 195
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 199
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 399
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 400
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 401
	CIndexDataBase<short unsigned int>::Base(); // 408
	CIndexData<short unsigned int>::ReleaseBuffer(); // 409
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 410
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ClearBuffers(); // 339
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::~CMeshBuilder2(); // 202
	Vector::Vector(); // 11
	Vector::Vector(); // 11
	MeshBuilderBuffers_t::MeshBuilderBuffers_t(); // 800
	{
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 754
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 1007
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseVertexData(); // 756
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 760
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 757
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::GetLayout(); // 759
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 768
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 778
	Vector::operator=(
			const Vector& vOther);  // 771
	Vector::operator=(
			const Vector& vOther);  // 770
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 777
	CIndexData<short unsigned int>::ReleaseBuffer(); // 784
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 785
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 751
	{
	}
	CIndexDataBase<short unsigned int>::Base(); // 1014
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseIndexData(); // 762
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 801
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::EndAndExtract(
			bool bPurge);  // 185
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 185
} /* size: 0, variables: 14, inline expansions: 90 (6800 bytes) */

// <03C3C34B> ../scenesystem/utils/renderutils.cpp:204
// function calls: 2
void CSceneUtils::RenderSphere(ISceneWorld* pWorld, const Vector& vCenter, float flRadius, int nTheta, int nPhi, Color c, HMaterial hMaterial, bool bInsideOut, bool bDeleteAtFrameEnd)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 206
} /* size: 94, inline expansions: 2 (22 bytes) */

// <03C3C133> ../scenesystem/utils/renderutils.cpp:209
// variables: 2
// function calls: 3
void CSceneUtils::RenderSphere(ISceneWorld* pWorld, const Vector& vCenter, float flRadius, int nTheta, int nPhi, Color c, bool bZBuffer, bool bInsideOut, bool bDeleteAtFrameEnd)
{
	HMaterial hMaterial; // 211
	CSceneObject* pObj; // 212
	VertexLitMaterial(bool bZBuffered,
				bool bTranslucent);  // 211
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 212
} /* size: 226, variables: 2, inline expansions: 3 (95 bytes) */

// <03C46164> ../scenesystem/utils/renderutils.cpp:240
// variables: 3
// function calls: 10
void GenerateBoxVertices(const Vector& vOrigin, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Vector* pVerts)
{
	matrix3x4_t fRotateMatrix; // 243
	Vector vecPos; // 246
	{
		int i; // 247
		Vector::operator[](
				int i);  // 249
		Vector::operator[](
				int i);  // 250
		Vector::operator[](
				int i);  // 251
		VectorRotate(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 253
		Vector::operator+=(
				const Vector& v);  // 254
		Vector::operator[](
				int i);  // 249
		Vector::operator[](
				int i);  // 250
		Vector::operator[](
				int i);  // 251
	}
	matrix3x4_t::matrix3x4_t(); // 243
	Vector::Vector(); // 246
} /* size: 331, variables: 2, inline expansions: 2 (0 bytes) */

// <03C3C0C4> ../scenesystem/utils/renderutils.cpp:240
// variables: 3
void GenerateBoxVertices(const Vector& vOrigin, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Vector* pVerts)
{
	matrix3x4_t fRotateMatrix; // 243
	Vector vecPos; // 246
	{
		int i; // 247
	}
} /* size: 0, variables: 2 */

// <03C39B45> ../scenesystem/utils/renderutils.cpp:262
// variables: 16
// function calls: 137
void CSceneUtils::RenderWireframeBox(ISceneWorld* pWorld, const Vector& vOrigin, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Color c, bool bZBuffer, bool bDeleteAtFrameEnd)
{
	Vector p; // 264
	Vector vCenter; // 265
	uint8 chRed; // 268
	uint8 chGreen; // 269
	uint8 chBlue; // 270
	uint8 chAlpha; // 271
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> meshBuilder; // 273
	HMaterial hMaterial; // 293
	CSceneObject* pObj; // 294
	matrix3x4_t mTransform; // 297
	{
		int i; // 277
		{
			int* pFaceIndex; // 279
			{
				int j; // 281
				Vector::Init(
					vec_t ix,
					vec_t iy,
					vec_t iz);  // 121
				VertexPos_t::Position3fv(
						const float* v);  // 1196
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1197
				{
					int i; // 345
					Vector::operator[](
							int i);  // 347
					Vector::operator[](
							int i);  // 352
				}
				CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
						const Vector& point);  // 1197
				CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
						const float* v);  // 283
				VertexColor_t::Init(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 428
				VertexColorUVPos_t::Color4ub(
					unsigned char r,
					unsigned char g,
					unsigned char b,
					unsigned char a);  // 1229
				CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
					unsigned char r,
					unsigned char g,
					unsigned char b,
					unsigned char a);  // 284
				{
				}
				Vector::operator=(
						const Vector& vOther);  // 103
				VertexPos_t::operator=(
						const VertexPos_t  &);  // 257
				Vector2D::operator=(
						const Vector2D& vOther);  // 257
				VertexUVPos_t::operator=(
						const VertexUVPos_t  &);  // 372
				VertexColor_t::AsUint32(); // 203
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 372
				VertexColorUVPos_t::operator=(
						const VertexColorUVPos_t  &);  // 572
				Vector::operator=(
						const Vector& vOther);  // 572
				Vector4D::operator=(
						const Vector4D& vOther);  // 572
				VertexUVPosColorNormalAndTangent_t::operator=(
						const VertexUVPosColorNormalAndTangent_t  &);  // 355
				{
				}
				CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
				CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
				CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 285
				Vector::Init(
					vec_t ix,
					vec_t iy,
					vec_t iz);  // 121
				VertexPos_t::Position3fv(
						const float* v);  // 1196
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1197
				{
					int i; // 345
					Vector::operator[](
							int i);  // 347
					Vector::operator[](
							int i);  // 352
				}
				CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
						const Vector& point);  // 1197
				CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
						const float* v);  // 287
				VertexColor_t::Init(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 428
				VertexColorUVPos_t::Color4ub(
					unsigned char r,
					unsigned char g,
					unsigned char b,
					unsigned char a);  // 1229
				CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
					unsigned char r,
					unsigned char g,
					unsigned char b,
					unsigned char a);  // 288
				{
				}
				Vector::operator=(
						const Vector& vOther);  // 103
				VertexPos_t::operator=(
						const VertexPos_t  &);  // 257
				Vector2D::operator=(
						const Vector2D& vOther);  // 257
				VertexUVPos_t::operator=(
						const VertexUVPos_t  &);  // 372
				VertexColor_t::AsUint32(); // 203
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 372
				VertexColorUVPos_t::operator=(
						const VertexColorUVPos_t  &);  // 572
				Vector::operator=(
						const Vector& vOther);  // 572
				Vector4D::operator=(
						const Vector4D& vOther);  // 572
				VertexUVPosColorNormalAndTangent_t::operator=(
						const VertexUVPosColorNormalAndTangent_t  &);  // 355
				{
				}
				CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
				CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
				CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 289
			}
		}
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 265
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 623
	{
		RenderInputLayoutField_t posColorUVNormalTangentLayout; // 625
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
				int nLineNumber);  // 39
		CThreadSyncValue<bool>::Load(); // 34
		CTSInputLayoutCreator::IsInitialized(); // 40
		CThreadSyncValue<bool>::Store(
			bool value);  // 43
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
		CTSInputLayoutCreator::CreateLayout(
				const char* pLayoutName,
				int nFieldCount,
				const RenderInputLayoutField_t* pFieldDescs);  // 634
	}
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 638
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 621
	GetLayout(void); // 330
	Vector::Vector(); // 328
	Vector::Vector(); // 328
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 331
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 332
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::CMeshBuilder2(); // 273
	VertexLitMaterial(bool bZBuffered,
				bool bTranslucent);  // 293
	Vector::Vector(); // 11
	Vector::Vector(); // 11
	MeshBuilderBuffers_t::MeshBuilderBuffers_t(); // 800
	{
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 754
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 1007
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseVertexData(); // 756
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 760
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 757
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::GetLayout(); // 759
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 768
	Vector::operator=(
			const Vector& vOther);  // 771
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 778
	Vector::operator=(
			const Vector& vOther);  // 770
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 777
	CIndexData<short unsigned int>::ReleaseBuffer(); // 784
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 785
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 751
	{
	}
	CIndexDataBase<short unsigned int>::Base(); // 1014
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseIndexData(); // 762
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 801
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::EndAndExtract(
			bool bPurge);  // 294
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 294
	{
	}
	MaterialPrimTypeToRenderPrimType(MaterialPrimitiveType2_t type); // 557
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 408
	Vector::Vector(); // 408
	Vector::Vector(); // 408
	SceneObjectCreationInfo_t::SceneObjectCreationInfo_t(); // 548
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 556
	Vector::operator=(
			const Vector& vOther);  // 559
	Vector::operator=(
			const Vector& vOther);  // 560
	ISceneSystem::CreateSceneObjectFromStaticBuffers(
						ESceneObjectFlags nFlags,
						ISceneWorld* pWorld,
						const MeshBuilderBuffers_t& buffers,
						HMaterial hMaterial,
						bool bDeleteAtFrameEnd);  // 294
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 295
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 296
	matrix3x4_t::matrix3x4_t(); // 297
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 299
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 2082
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
	CSceneObject::SetTransform(
			const matrix3x4_t& mTransform);  // 300
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 399
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 400
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 401
	CIndexDataBase<short unsigned int>::Base(); // 408
	CIndexData<short unsigned int>::ReleaseBuffer(); // 409
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 410
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ClearBuffers(); // 339
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::~CMeshBuilder2(); // 302
} /* size: 0, variables: 10, inline expansions: 77 (4825 bytes) */

// <03C365F3> ../scenesystem/utils/renderutils.cpp:308
// variables: 22
// function calls: 195
CSceneObject* RenderBoxInternal(ISceneWorld* pWorld, const Vector& vOrigin, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Color c, HMaterial hMaterial, bool bInsideOut, bool bDeleteAtFrameEnd)
{
	Vector p; // 310
	Vector vCenter; // 311
	QAngle vAngles; // 312
	uint8 chRed; // 315
	uint8 chGreen; // 316
	uint8 chBlue; // 317
	uint8 chAlpha; // 318
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> meshBuilder; // 320
	Vector vecNormal; // 324
	CSceneObject* pObj; // 357
	matrix3x4_t mTransform; // 359
	Vector4D color; // 362
	{
		int i; // 325
		{
			int* ppFaceIndices; // 330
			{
				int j; // 331
				{
					int i0; // 333
					int i1; // 334
					int i2; // 335
					Vector::Init(
						vec_t ix,
						vec_t iy,
						vec_t iz);  // 121
					VertexPos_t::Position3fv(
							const float* v);  // 1196
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1197
					{
						int i; // 345
						Vector::operator[](
								int i);  // 347
						Vector::operator[](
								int i);  // 352
					}
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
							const Vector& point);  // 1197
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
							const float* v);  // 337
					VertexColor_t::Init(
						uint8 ir,
						uint8 ig,
						uint8 ib,
						uint8 ia);  // 428
					VertexColorUVPos_t::Color4ub(
						unsigned char r,
						unsigned char g,
						unsigned char b,
						unsigned char a);  // 1229
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
						unsigned char r,
						unsigned char g,
						unsigned char b,
						unsigned char a);  // 338
					Vector::Init(
						vec_t ix,
						vec_t iy,
						vec_t iz);  // 598
					VertexUVPosColorNormalAndTangent_t::Normal3fv(
							const float* n);  // 1202
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Normal3fv(
							const float* n);  // 339
					{
					}
					Vector::operator=(
							const Vector& vOther);  // 103
					VertexPos_t::operator=(
							const VertexPos_t  &);  // 257
					Vector2D::operator=(
							const Vector2D& vOther);  // 257
					VertexUVPos_t::operator=(
							const VertexUVPos_t  &);  // 372
					VertexColor_t::AsUint32(); // 203
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 372
					VertexColorUVPos_t::operator=(
							const VertexColorUVPos_t  &);  // 572
					Vector::operator=(
							const Vector& vOther);  // 572
					Vector4D::operator=(
							const Vector4D& vOther);  // 572
					VertexUVPosColorNormalAndTangent_t::operator=(
							const VertexUVPosColorNormalAndTangent_t  &);  // 355
					{
					}
					CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
					CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 341
					Vector4D::Vector4D(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 287
					VertexUVPos_t::TexCoord(
						int nStage,
						const Vector4D& vecUV);  // 287
					VertexUVPos_t::TexCoord2f(
							int nStage,
							float s,
							float t);  // 1261
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TexCoord2f(
							int nStage,
							float s,
							float t);  // 340
					Vector::Init(
						vec_t ix,
						vec_t iy,
						vec_t iz);  // 121
					VertexPos_t::Position3fv(
							const float* v);  // 1196
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1197
					{
						int i; // 345
						Vector::operator[](
								int i);  // 347
						Vector::operator[](
								int i);  // 352
					}
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
							const Vector& point);  // 1197
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
							const float* v);  // 343
					VertexColor_t::Init(
						uint8 ir,
						uint8 ig,
						uint8 ib,
						uint8 ia);  // 428
					VertexColorUVPos_t::Color4ub(
						unsigned char r,
						unsigned char g,
						unsigned char b,
						unsigned char a);  // 1229
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
						unsigned char r,
						unsigned char g,
						unsigned char b,
						unsigned char a);  // 344
					Vector::Init(
						vec_t ix,
						vec_t iy,
						vec_t iz);  // 598
					VertexUVPosColorNormalAndTangent_t::Normal3fv(
							const float* n);  // 1202
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Normal3fv(
							const float* n);  // 345
					Vector4D::Vector4D(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 287
					VertexUVPos_t::TexCoord(
						int nStage,
						const Vector4D& vecUV);  // 287
					VertexUVPos_t::TexCoord2f(
							int nStage,
							float s,
							float t);  // 1261
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TexCoord2f(
							int nStage,
							float s,
							float t);  // 346
					{
					}
					Vector::operator=(
							const Vector& vOther);  // 103
					VertexPos_t::operator=(
							const VertexPos_t  &);  // 257
					Vector2D::operator=(
							const Vector2D& vOther);  // 257
					VertexUVPos_t::operator=(
							const VertexUVPos_t  &);  // 372
					VertexColor_t::AsUint32(); // 203
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 372
					VertexColorUVPos_t::operator=(
							const VertexColorUVPos_t  &);  // 572
					Vector::operator=(
							const Vector& vOther);  // 572
					Vector4D::operator=(
							const Vector4D& vOther);  // 572
					VertexUVPosColorNormalAndTangent_t::operator=(
							const VertexUVPosColorNormalAndTangent_t  &);  // 355
					{
					}
					CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
					CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 347
					Vector::Init(
						vec_t ix,
						vec_t iy,
						vec_t iz);  // 121
					VertexPos_t::Position3fv(
							const float* v);  // 1196
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1197
					{
						int i; // 345
						Vector::operator[](
								int i);  // 347
						Vector::operator[](
								int i);  // 352
					}
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
							const Vector& point);  // 1197
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
							const float* v);  // 349
					VertexColor_t::Init(
						uint8 ir,
						uint8 ig,
						uint8 ib,
						uint8 ia);  // 428
					VertexColorUVPos_t::Color4ub(
						unsigned char r,
						unsigned char g,
						unsigned char b,
						unsigned char a);  // 1229
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
						unsigned char r,
						unsigned char g,
						unsigned char b,
						unsigned char a);  // 350
					Vector::Init(
						vec_t ix,
						vec_t iy,
						vec_t iz);  // 598
					VertexUVPosColorNormalAndTangent_t::Normal3fv(
							const float* n);  // 1202
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Normal3fv(
							const float* n);  // 351
					Vector4D::Vector4D(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 287
					VertexUVPos_t::TexCoord(
						int nStage,
						const Vector4D& vecUV);  // 287
					VertexUVPos_t::TexCoord2f(
							int nStage,
							float s,
							float t);  // 1261
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TexCoord2f(
							int nStage,
							float s,
							float t);  // 352
					{
					}
					Vector::operator=(
							const Vector& vOther);  // 103
					VertexPos_t::operator=(
							const VertexPos_t  &);  // 257
					Vector2D::operator=(
							const Vector2D& vOther);  // 257
					VertexUVPos_t::operator=(
							const VertexUVPos_t  &);  // 372
					VertexColor_t::AsUint32(); // 203
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 372
					VertexColorUVPos_t::operator=(
							const VertexColorUVPos_t  &);  // 572
					Vector::operator=(
							const Vector& vOther);  // 572
					Vector4D::operator=(
							const Vector4D& vOther);  // 572
					VertexUVPosColorNormalAndTangent_t::operator=(
							const VertexUVPosColorNormalAndTangent_t  &);  // 355
					{
					}
					CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
					CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
					CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 353
				}
			}
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 327
			Vector::operator[](
					int i);  // 328
		}
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 311
	QAngle::QAngle(
		vec_t flPitchDegrees,
		vec_t flYawDegrees,
		vec_t flRollDegrees);  // 312
	Vector::Vector(); // 328
	Vector::Vector(); // 328
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 623
	{
		RenderInputLayoutField_t posColorUVNormalTangentLayout; // 625
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
				int nLineNumber);  // 39
		CThreadSyncValue<bool>::Load(); // 34
		CTSInputLayoutCreator::IsInitialized(); // 40
		CThreadSyncValue<bool>::Store(
			bool value);  // 43
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
		CTSInputLayoutCreator::CreateLayout(
				const char* pLayoutName,
				int nFieldCount,
				const RenderInputLayoutField_t* pFieldDescs);  // 634
	}
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 638
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 621
	GetLayout(void); // 330
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 331
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 332
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::CMeshBuilder2(); // 320
	Vector::Vector(); // 324
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 357
	Vector::Vector(); // 11
	Vector::Vector(); // 11
	MeshBuilderBuffers_t::MeshBuilderBuffers_t(); // 800
	{
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 754
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 1007
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseVertexData(); // 756
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 760
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 757
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::GetLayout(); // 759
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 778
	Vector::operator=(
			const Vector& vOther);  // 771
	Vector::operator=(
			const Vector& vOther);  // 770
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 777
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 768
	CIndexData<short unsigned int>::ReleaseBuffer(); // 784
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 785
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 751
	{
	}
	CIndexDataBase<short unsigned int>::Base(); // 1014
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseIndexData(); // 762
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 801
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::EndAndExtract(
			bool bPurge);  // 357
	{
	}
	MaterialPrimTypeToRenderPrimType(MaterialPrimitiveType2_t type); // 557
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 408
	Vector::Vector(); // 408
	Vector::Vector(); // 408
	SceneObjectCreationInfo_t::SceneObjectCreationInfo_t(); // 548
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 556
	Vector::operator=(
			const Vector& vOther);  // 559
	Vector::operator=(
			const Vector& vOther);  // 560
	ISceneSystem::CreateSceneObjectFromStaticBuffers(
						ESceneObjectFlags nFlags,
						ISceneWorld* pWorld,
						const MeshBuilderBuffers_t& buffers,
						HMaterial hMaterial,
						bool bDeleteAtFrameEnd);  // 357
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 358
	matrix3x4_t::matrix3x4_t(); // 359
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 2082
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
	CSceneObject::SetTransform(
			const matrix3x4_t& mTransform);  // 361
	Vector4DSubtract(const Vector4D& a,
			const Vector4D& b,
			Vector4D& c);  // 708
	Vector4D::LengthSqr(); // 709
	Vector4D::Vector4D(); // 707
	Vector4D::DistToSqr(
			const Vector4D& vOther);  // 417
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 417
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 423
	CSceneObject::SetTintRGBA_Gamma(
				const Vector4D& vTint);  // 415
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 431
	CSceneObject::SetTintRGBA_Gamma(
				const Vector4D& vTint);  // 363
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 362
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 366
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 370
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 399
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 400
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 401
	CIndexDataBase<short unsigned int>::Base(); // 408
	CIndexData<short unsigned int>::ReleaseBuffer(); // 409
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 410
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ClearBuffers(); // 339
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::~CMeshBuilder2(); // 373
} /* size: 0, variables: 12, inline expansions: 89 (6429 bytes) */

// <03C36455> ../scenesystem/utils/renderutils.cpp:375
// function calls: 2
void CSceneUtils::RenderBox(ISceneWorld* pWorld, const Vector& vOrigin, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Color c, HMaterial hMaterial, bool bInsideOut, bool bDeleteAtFrameEnd)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 377
} /* size: 100, inline expansions: 2 (22 bytes) */

// <03C3622A> ../scenesystem/utils/renderutils.cpp:380
// variables: 2
// function calls: 3
void CSceneUtils::RenderBox(ISceneWorld* pWorld, const Vector& vOrigin, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Color c, bool bZBuffer, bool bInsideOut, bool bDeleteAtFrameEnd)
{
	HMaterial hMaterial; // 382
	CSceneObject* pObj; // 383
	VertexLitMaterial(bool bZBuffered,
				bool bTranslucent);  // 382
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 383
} /* size: 210, variables: 2, inline expansions: 3 (74 bytes) */

// <03C360A6> ../scenesystem/utils/renderutils.cpp:388
// variable: 1
// function calls: 2
void CSceneUtils::RenderAxes(ISceneWorld* pWorld, const Vector& vOrigin, float flScale, bool bZBuffer, bool bDeleteAtFrameEnd)
{
	matrix3x4_t mTransform; // 390
	matrix3x4_t::matrix3x4_t(); // 390
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 392
} /* size: 185, variables: 1, inline expansions: 2 (44 bytes) */

// <03C323B6> ../scenesystem/utils/renderutils.cpp:397
// variables: 9
// function calls: 224
void CSceneUtils::RenderAxes(ISceneWorld* pWorld, const matrix3x4_t& transform, float flScale, bool bZBuffer, bool bDeleteAtFrameEnd)
{
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> meshBuilder; // 399
	CSceneObject* pObj; // 426
	Vector::Vector(); // 328
	Vector::Vector(); // 328
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 623
	{
		RenderInputLayoutField_t posColorUVNormalTangentLayout; // 625
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
				int nLineNumber);  // 39
		CThreadSyncValue<bool>::Load(); // 34
		CTSInputLayoutCreator::IsInitialized(); // 40
		CThreadSyncValue<bool>::Store(
			bool value);  // 43
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
		CTSInputLayoutCreator::CreateLayout(
				const char* pLayoutName,
				int nFieldCount,
				const RenderInputLayoutField_t* pFieldDescs);  // 634
	}
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 638
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 621
	GetLayout(void); // 330
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 331
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 332
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::CMeshBuilder2(); // 399
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 116
	VertexPos_t::Position3f(
			float x,
			float y,
			float z);  // 1189
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1190
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1190
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3f(
			float x,
			float y,
			float z);  // 402
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 403
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 404
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 116
	VertexPos_t::Position3f(
			float x,
			float y,
			float z);  // 1189
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1190
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1190
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3f(
			float x,
			float y,
			float z);  // 406
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 407
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 408
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 116
	VertexPos_t::Position3f(
			float x,
			float y,
			float z);  // 1189
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1190
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1190
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3f(
			float x,
			float y,
			float z);  // 410
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 411
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 412
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 116
	VertexPos_t::Position3f(
			float x,
			float y,
			float z);  // 1189
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1190
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1190
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3f(
			float x,
			float y,
			float z);  // 414
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 415
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 416
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 116
	VertexPos_t::Position3f(
			float x,
			float y,
			float z);  // 1189
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1190
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1190
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3f(
			float x,
			float y,
			float z);  // 418
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 419
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 420
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 116
	VertexPos_t::Position3f(
			float x,
			float y,
			float z);  // 1189
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1190
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1190
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3f(
			float x,
			float y,
			float z);  // 422
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 423
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 424
	WireframeMaterial(bool bZBuffered); // 426
	Vector::Vector(); // 11
	Vector::Vector(); // 11
	MeshBuilderBuffers_t::MeshBuilderBuffers_t(); // 800
	{
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 754
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 1007
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseVertexData(); // 756
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 757
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::GetLayout(); // 759
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 760
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 768
	Vector::operator=(
			const Vector& vOther);  // 771
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 778
	Vector::operator=(
			const Vector& vOther);  // 770
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 777
	CIndexData<short unsigned int>::ReleaseBuffer(); // 784
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 785
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 751
	{
	}
	CIndexDataBase<short unsigned int>::Base(); // 1014
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseIndexData(); // 762
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 801
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::EndAndExtract(
			bool bPurge);  // 426
	{
	}
	MaterialPrimTypeToRenderPrimType(MaterialPrimitiveType2_t type); // 557
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 408
	Vector::Vector(); // 408
	Vector::Vector(); // 408
	SceneObjectCreationInfo_t::SceneObjectCreationInfo_t(); // 548
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 556
	Vector::operator=(
			const Vector& vOther);  // 559
	Vector::operator=(
			const Vector& vOther);  // 560
	ISceneSystem::CreateSceneObjectFromStaticBuffers(
						ESceneObjectFlags nFlags,
						ISceneWorld* pWorld,
						const MeshBuilderBuffers_t& buffers,
						HMaterial hMaterial,
						bool bDeleteAtFrameEnd);  // 426
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 427
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 428
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 2082
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
	CSceneObject::SetTransform(
			const matrix3x4_t& mTransform);  // 429
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 399
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 400
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 401
	CIndexDataBase<short unsigned int>::Base(); // 408
	CIndexData<short unsigned int>::ReleaseBuffer(); // 409
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 410
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ClearBuffers(); // 339
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::~CMeshBuilder2(); // 431
} /* size: 0, variables: 2, inline expansions: 198 (13361 bytes) */

// <03C30306> ../scenesystem/utils/renderutils.cpp:436
// variables: 9
// function calls: 124
void CSceneUtils::RenderLine(ISceneWorld* pWorld, const Vector& v1, const Vector& v2, Color c, bool bZBuffer, bool bDeleteAtFrameEnd)
{
	uint8 chRed; // 438
	uint8 chGreen; // 439
	uint8 chBlue; // 440
	uint8 chAlpha; // 441
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> meshBuilder; // 443
	CSceneObject* pObj; // 454
	Vector::Vector(); // 328
	Vector::Vector(); // 328
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 623
	{
		RenderInputLayoutField_t posColorUVNormalTangentLayout; // 625
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
				int nLineNumber);  // 39
		CThreadSyncValue<bool>::Load(); // 34
		CTSInputLayoutCreator::IsInitialized(); // 40
		CThreadSyncValue<bool>::Store(
			bool value);  // 43
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
		CTSInputLayoutCreator::CreateLayout(
				const char* pLayoutName,
				int nFieldCount,
				const RenderInputLayoutField_t* pFieldDescs);  // 634
	}
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 638
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 621
	GetLayout(void); // 330
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 331
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 332
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::CMeshBuilder2(); // 443
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 446
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 447
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 448
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 450
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 451
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 452
	WireframeMaterial(bool bZBuffered); // 454
	Vector::Vector(); // 11
	Vector::Vector(); // 11
	MeshBuilderBuffers_t::MeshBuilderBuffers_t(); // 800
	{
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 754
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 1007
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseVertexData(); // 756
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 760
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 757
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::GetLayout(); // 759
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 768
	Vector::operator=(
			const Vector& vOther);  // 771
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 778
	Vector::operator=(
			const Vector& vOther);  // 770
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 777
	CIndexData<short unsigned int>::ReleaseBuffer(); // 784
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 785
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 751
	{
	}
	CIndexDataBase<short unsigned int>::Base(); // 1014
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseIndexData(); // 762
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 801
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::EndAndExtract(
			bool bPurge);  // 454
	{
	}
	MaterialPrimTypeToRenderPrimType(MaterialPrimitiveType2_t type); // 557
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 408
	Vector::Vector(); // 408
	Vector::Vector(); // 408
	SceneObjectCreationInfo_t::SceneObjectCreationInfo_t(); // 548
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 556
	Vector::operator=(
			const Vector& vOther);  // 559
	Vector::operator=(
			const Vector& vOther);  // 560
	ISceneSystem::CreateSceneObjectFromStaticBuffers(
						ESceneObjectFlags nFlags,
						ISceneWorld* pWorld,
						const MeshBuilderBuffers_t& buffers,
						HMaterial hMaterial,
						bool bDeleteAtFrameEnd);  // 454
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 455
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 456
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 399
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 400
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 401
	CIndexDataBase<short unsigned int>::Base(); // 408
	CIndexData<short unsigned int>::ReleaseBuffer(); // 409
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 410
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ClearBuffers(); // 339
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::~CMeshBuilder2(); // 458
} /* size: 0, variables: 6, inline expansions: 106 (6906 bytes) */

// <03C2D15A> ../scenesystem/utils/renderutils.cpp:464
// variables: 14
// function calls: 187
CSceneObject* RenderTriangleInternal(ISceneWorld* pWorld, const Vector& p1, const Vector& p2, const Vector& p3, Color c, HMaterial hMaterial, bool bDeleteAtFrameEnd)
{
	uint8 chRed; // 466
	uint8 chGreen; // 467
	uint8 chBlue; // 468
	uint8 chAlpha; // 469
	Vector vecNormal; // 471
	Vector vecDelta1; // 472
	Vector vecDelta2; // 472
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> meshBuilder; // 478
	CSceneObject* pObj; // 499
	Vector4D color; // 501
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 473
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 474
	Vector::Vector(); // 471
	Vector::Vector(); // 472
	Vector::Vector(); // 472
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 475
	Vector::Vector(); // 328
	Vector::Vector(); // 328
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 623
	{
		RenderInputLayoutField_t posColorUVNormalTangentLayout; // 625
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
				int nLineNumber);  // 39
		CThreadSyncValue<bool>::Load(); // 34
		CTSInputLayoutCreator::IsInitialized(); // 40
		CThreadSyncValue<bool>::Store(
			bool value);  // 43
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
		CTSInputLayoutCreator::CreateLayout(
				const char* pLayoutName,
				int nFieldCount,
				const RenderInputLayoutField_t* pFieldDescs);  // 634
	}
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 638
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 621
	GetLayout(void); // 330
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 331
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 332
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::CMeshBuilder2(); // 478
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 481
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 482
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 598
	VertexUVPosColorNormalAndTangent_t::Normal3fv(
			const float* n);  // 1202
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Normal3fv(
			const float* n);  // 483
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 485
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 287
	VertexUVPos_t::TexCoord(
		int nStage,
		const Vector4D& vecUV);  // 287
	VertexUVPos_t::TexCoord2f(
			int nStage,
			float s,
			float t);  // 1261
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TexCoord2f(
			int nStage,
			float s,
			float t);  // 484
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 487
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 488
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 598
	VertexUVPosColorNormalAndTangent_t::Normal3fv(
			const float* n);  // 1202
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Normal3fv(
			const float* n);  // 489
	VertexUVPos_t::TexCoord(
		int nStage,
		const Vector4D& vecUV);  // 287
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 287
	VertexUVPos_t::TexCoord2f(
			int nStage,
			float s,
			float t);  // 1261
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TexCoord2f(
			int nStage,
			float s,
			float t);  // 490
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 491
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 493
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 494
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 598
	VertexUVPosColorNormalAndTangent_t::Normal3fv(
			const float* n);  // 1202
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Normal3fv(
			const float* n);  // 495
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 497
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 287
	VertexUVPos_t::TexCoord(
		int nStage,
		const Vector4D& vecUV);  // 287
	VertexUVPos_t::TexCoord2f(
			int nStage,
			float s,
			float t);  // 1261
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TexCoord2f(
			int nStage,
			float s,
			float t);  // 496
	Vector::Vector(); // 11
	Vector::Vector(); // 11
	MeshBuilderBuffers_t::MeshBuilderBuffers_t(); // 800
	{
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 754
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 1007
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseVertexData(); // 756
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 760
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 757
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::GetLayout(); // 759
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 768
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 778
	Vector::operator=(
			const Vector& vOther);  // 771
	Vector::operator=(
			const Vector& vOther);  // 770
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 777
	CIndexData<short unsigned int>::ReleaseBuffer(); // 784
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 785
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 751
	{
	}
	CIndexDataBase<short unsigned int>::Base(); // 1014
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseIndexData(); // 762
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 801
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::EndAndExtract(
			bool bPurge);  // 499
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 499
	{
	}
	MaterialPrimTypeToRenderPrimType(MaterialPrimitiveType2_t type); // 557
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 408
	Vector::Vector(); // 408
	Vector::Vector(); // 408
	SceneObjectCreationInfo_t::SceneObjectCreationInfo_t(); // 548
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 556
	Vector::operator=(
			const Vector& vOther);  // 559
	Vector::operator=(
			const Vector& vOther);  // 560
	ISceneSystem::CreateSceneObjectFromStaticBuffers(
						ESceneObjectFlags nFlags,
						ISceneWorld* pWorld,
						const MeshBuilderBuffers_t& buffers,
						HMaterial hMaterial,
						bool bDeleteAtFrameEnd);  // 499
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 500
	Vector4DSubtract(const Vector4D& a,
			const Vector4D& b,
			Vector4D& c);  // 708
	Vector4D::LengthSqr(); // 709
	Vector4D::Vector4D(); // 707
	Vector4D::DistToSqr(
			const Vector4D& vOther);  // 417
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 417
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 423
	CSceneObject::SetTintRGBA_Gamma(
				const Vector4D& vTint);  // 415
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 431
	CSceneObject::SetTintRGBA_Gamma(
				const Vector4D& vTint);  // 502
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 501
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 505
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 509
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 399
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 400
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 401
	CIndexDataBase<short unsigned int>::Base(); // 408
	CIndexData<short unsigned int>::ReleaseBuffer(); // 409
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 410
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ClearBuffers(); // 339
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::~CMeshBuilder2(); // 512
} /* size: 0, variables: 10, inline expansions: 167 (9225 bytes) */

// <03C2CFF2> ../scenesystem/utils/renderutils.cpp:514
// function calls: 2
void CSceneUtils::RenderTriangle(ISceneWorld* pWorld, const Vector& p1, const Vector& p2, const Vector& p3, Color c, HMaterial hMaterial, bool bDeleteAtFrameEnd)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 516
} /* size: 90, inline expansions: 2 (22 bytes) */

// <03C2CE00> ../scenesystem/utils/renderutils.cpp:519
// variables: 2
// function calls: 3
void CSceneUtils::RenderTriangle(ISceneWorld* pWorld, const Vector& p1, const Vector& p2, const Vector& p3, Color c, bool bZBuffer, bool bDeleteAtFrameEnd)
{
	HMaterial hMaterial; // 521
	CSceneObject* pObj; // 522
	VertexLitMaterial(bool bZBuffered,
				bool bTranslucent);  // 521
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 522
} /* size: 196, variables: 2, inline expansions: 3 (81 bytes) */

// <03C2A915> ../scenesystem/utils/renderutils.cpp:531
// variables: 9
// function calls: 138
void DrawAxes(const Vector& origin, Vector* pts, int idx, Color c, CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>& meshBuilder)
{
	Vector start; // 533
	Vector temp; // 533
	int endidx; // 539
	Vector::Vector(); // 533
	Vector::Vector(); // 533
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 534
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 535
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 536
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 537
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 541
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 540
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 542
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 543
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 545
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 546
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 547
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 551
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 550
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 552
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 553
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 555
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 556
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 557
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 561
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 560
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 562
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 563
} /* size: 0, variables: 3, inline expansions: 132 (8670 bytes) */

// <03C2785F> ../scenesystem/utils/renderutils.cpp:566
// variables: 9
// function calls: 182
void DrawExtrusionFace(const Vector& start, const Vector& end, Vector* pts, int idx1, int idx2, Color c, CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>& meshBuilder)
{
	Vector temp; // 569
	Vector::Vector(); // 569
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 570
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 571
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 572
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 573
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 576
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 575
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 577
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 578
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 580
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 581
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 582
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 585
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 584
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 586
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 587
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 589
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 590
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 591
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 594
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 593
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 595
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 596
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 598
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 599
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 600
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 121
	VertexPos_t::Position3fv(
			const float* v);  // 1196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1197
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1197
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(
			const float* v);  // 603
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 602
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 604
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 605
} /* size: 0, variables: 1, inline expansions: 174 (11147 bytes) */

// <03C25E6B> ../scenesystem/utils/renderutils.cpp:608
// variables: 18
// function calls: 89
void CSceneUtils::RenderWireframeSweptBox(ISceneWorld* pWorld, const Vector& vStart, const Vector& vEnd, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Color c, bool bZBuffer, bool bDeleteAtFrameEnd)
{
	Color cActual; // 610
	matrix3x4_t fRotateMatrix; // 613
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> meshBuilder; // 616
	Vector vDelta; // 619
	Vector temp; // 623
	Vector pts; // 624
	float dot; // 625
	int minidx; // 626
	int maxidx; // 645
	CSceneObject* pObj; // 666
	{
		int i; // 627
		Vector::operator[](
				int i);  // 629
		Vector::operator[](
				int i);  // 630
		Vector::operator[](
				int i);  // 631
		VectorRotate(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 634
		DotProduct(const Vector& a,
				const Vector& b);  // 637
		Vector::operator[](
				int i);  // 629
		Vector::operator[](
				int i);  // 630
		Vector::operator[](
				int i);  // 631
	}
	{
		int j; // 652
		{
			int dirflag1; // 654
			int dirflag2; // 655
			int idx1; // 657
			int idx2; // 657
			int idx3; // 657
		}
	}
	Vector::Vector(); // 328
	Vector::Vector(); // 328
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 623
	{
		RenderInputLayoutField_t posColorUVNormalTangentLayout; // 625
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
				int nLineNumber);  // 39
		CThreadSyncValue<bool>::Load(); // 34
		CTSInputLayoutCreator::IsInitialized(); // 40
		CThreadSyncValue<bool>::Store(
			bool value);  // 43
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
		CTSInputLayoutCreator::CreateLayout(
				const char* pLayoutName,
				int nFieldCount,
				const RenderInputLayoutField_t* pFieldDescs);  // 634
	}
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 638
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 621
	GetLayout(void); // 330
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 331
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 332
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::CMeshBuilder2(); // 616
	Vector::Vector(); // 623
	Vector::Vector(); // 619
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 620
	WireframeMaterial(bool bZBuffered); // 666
	Vector::Vector(); // 11
	Vector::Vector(); // 11
	MeshBuilderBuffers_t::MeshBuilderBuffers_t(); // 800
	{
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 754
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 1007
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseVertexData(); // 756
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 760
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 757
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::GetLayout(); // 759
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 768
	Vector::operator=(
			const Vector& vOther);  // 771
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 778
	Vector::operator=(
			const Vector& vOther);  // 770
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 777
	CIndexData<short unsigned int>::ReleaseBuffer(); // 784
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 785
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 751
	{
	}
	CIndexDataBase<short unsigned int>::Base(); // 1014
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseIndexData(); // 762
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 801
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::EndAndExtract(
			bool bPurge);  // 666
	{
	}
	MaterialPrimTypeToRenderPrimType(MaterialPrimitiveType2_t type); // 557
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 408
	Vector::Vector(); // 408
	Vector::Vector(); // 408
	SceneObjectCreationInfo_t::SceneObjectCreationInfo_t(); // 548
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 556
	Vector::operator=(
			const Vector& vOther);  // 559
	Vector::operator=(
			const Vector& vOther);  // 560
	ISceneSystem::CreateSceneObjectFromStaticBuffers(
						ESceneObjectFlags nFlags,
						ISceneWorld* pWorld,
						const MeshBuilderBuffers_t& buffers,
						HMaterial hMaterial,
						bool bDeleteAtFrameEnd);  // 666
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 667
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 668
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 399
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 400
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 401
	CIndexDataBase<short unsigned int>::Base(); // 408
	CIndexData<short unsigned int>::ReleaseBuffer(); // 409
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 410
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ClearBuffers(); // 339
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::~CMeshBuilder2(); // 670
} /* size: 0, variables: 10, inline expansions: 67 (4425 bytes) */

// <03C220BE> ../scenesystem/utils/renderutils.cpp:676
// variables: 14
// function calls: 220
void CSceneUtils::RenderQuad(ISceneWorld* pWorld, HMaterial hMaterial, float x, float y, float w, float h, float z, float s0, float t0, float s1, float t1, const Color& clr, bool bDeleteAtFrameEnd)
{
	Vector vecNormal; // 679
	Vector vecDelta1; // 680
	Vector vecDelta2; // 680
	Vector p1; // 681
	Vector p2; // 682
	Vector p3; // 683
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> meshBuilder; // 689
	CSceneObject* pObj; // 716
	Vector4D color; // 718
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 684
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 685
	Vector::Vector(); // 679
	Vector::Vector(); // 680
	Vector::Vector(); // 680
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 681
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 682
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 683
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 686
	Vector::Vector(); // 328
	Vector::Vector(); // 328
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 623
	{
		RenderInputLayoutField_t posColorUVNormalTangentLayout; // 625
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
				int nLineNumber);  // 39
		CThreadSyncValue<bool>::Load(); // 34
		CTSInputLayoutCreator::IsInitialized(); // 40
		CThreadSyncValue<bool>::Store(
			bool value);  // 43
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
		CTSInputLayoutCreator::CreateLayout(
				const char* pLayoutName,
				int nFieldCount,
				const RenderInputLayoutField_t* pFieldDescs);  // 634
	}
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 638
	CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
	CTSInputLayoutCreator::CTSInputLayoutCreator(); // 621
	GetLayout(void); // 330
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 331
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 332
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::CMeshBuilder2(); // 689
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 692
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 116
	VertexPos_t::Position3f(
			float x,
			float y,
			float z);  // 1189
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1190
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1190
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3f(
			float x,
			float y,
			float z);  // 694
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 287
	VertexUVPos_t::TexCoord(
		int nStage,
		const Vector4D& vecUV);  // 287
	VertexUVPos_t::TexCoord2f(
			int nStage,
			float s,
			float t);  // 1261
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TexCoord2f(
			int nStage,
			float s,
			float t);  // 693
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 598
	VertexUVPosColorNormalAndTangent_t::Normal3fv(
			const float* n);  // 1202
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Normal3fv(
			const float* n);  // 695
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 696
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 698
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1190
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 116
	VertexPos_t::Position3f(
			float x,
			float y,
			float z);  // 1189
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1190
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3f(
			float x,
			float y,
			float z);  // 700
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 287
	VertexUVPos_t::TexCoord(
		int nStage,
		const Vector4D& vecUV);  // 287
	VertexUVPos_t::TexCoord2f(
			int nStage,
			float s,
			float t);  // 1261
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TexCoord2f(
			int nStage,
			float s,
			float t);  // 699
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 598
	VertexUVPosColorNormalAndTangent_t::Normal3fv(
			const float* n);  // 1202
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Normal3fv(
			const float* n);  // 701
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 702
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 704
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 116
	VertexPos_t::Position3f(
			float x,
			float y,
			float z);  // 1189
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1190
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1190
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3f(
			float x,
			float y,
			float z);  // 706
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 287
	VertexUVPos_t::TexCoord(
		int nStage,
		const Vector4D& vecUV);  // 287
	VertexUVPos_t::TexCoord2f(
			int nStage,
			float s,
			float t);  // 1261
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TexCoord2f(
			int nStage,
			float s,
			float t);  // 705
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 598
	VertexUVPosColorNormalAndTangent_t::Normal3fv(
			const float* n);  // 1202
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Normal3fv(
			const float* n);  // 707
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 708
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 428
	VertexColorUVPos_t::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 1229
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(
		unsigned char r,
		unsigned char g,
		unsigned char b,
		unsigned char a);  // 710
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 116
	VertexPos_t::Position3f(
			float x,
			float y,
			float z);  // 1189
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1190
	{
		int i; // 345
		Vector::operator[](
				int i);  // 347
		Vector::operator[](
				int i);  // 352
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(
			const Vector& point);  // 1190
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3f(
			float x,
			float y,
			float z);  // 712
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 287
	VertexUVPos_t::TexCoord(
		int nStage,
		const Vector4D& vecUV);  // 287
	VertexUVPos_t::TexCoord2f(
			int nStage,
			float s,
			float t);  // 1261
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TexCoord2f(
			int nStage,
			float s,
			float t);  // 711
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 598
	VertexUVPosColorNormalAndTangent_t::Normal3fv(
			const float* n);  // 1202
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Normal3fv(
			const float* n);  // 713
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 572
	Vector::operator=(
			const Vector& vOther);  // 572
	Vector4D::operator=(
			const Vector4D& vOther);  // 572
	VertexUVPosColorNormalAndTangent_t::operator=(
			const VertexUVPosColorNormalAndTangent_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 887
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 714
	Vector::Vector(); // 11
	Vector::Vector(); // 11
	MeshBuilderBuffers_t::MeshBuilderBuffers_t(); // 800
	{
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 754
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 1007
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseVertexData(); // 756
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 760
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount(); // 757
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::GetLayout(); // 759
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount(); // 768
	Vector::operator=(
			const Vector& vOther);  // 771
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 778
	Vector::operator=(
			const Vector& vOther);  // 770
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 777
	CIndexData<short unsigned int>::ReleaseBuffer(); // 784
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 785
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 751
	{
	}
	CIndexDataBase<short unsigned int>::Base(); // 1014
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseIndexData(); // 762
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(
			MeshBuilderBuffers_t* pBuffers,
			bool bPurge);  // 801
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::EndAndExtract(
			bool bPurge);  // 716
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 716
	{
	}
	MaterialPrimTypeToRenderPrimType(MaterialPrimitiveType2_t type); // 557
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 408
	Vector::Vector(); // 408
	Vector::Vector(); // 408
	SceneObjectCreationInfo_t::SceneObjectCreationInfo_t(); // 548
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 556
	Vector::operator=(
			const Vector& vOther);  // 559
	Vector::operator=(
			const Vector& vOther);  // 560
	ISceneSystem::CreateSceneObjectFromStaticBuffers(
						ESceneObjectFlags nFlags,
						ISceneWorld* pWorld,
						const MeshBuilderBuffers_t& buffers,
						HMaterial hMaterial,
						bool bDeleteAtFrameEnd);  // 716
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 717
	Vector4DSubtract(const Vector4D& a,
			const Vector4D& b,
			Vector4D& c);  // 708
	Vector4D::LengthSqr(); // 709
	Vector4D::Vector4D(); // 707
	Vector4D::DistToSqr(
			const Vector4D& vOther);  // 417
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 417
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 423
	CSceneObject::SetTintRGBA_Gamma(
				const Vector4D& vTint);  // 415
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 431
	CSceneObject::SetTintRGBA_Gamma(
				const Vector4D& vTint);  // 719
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 718
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 722
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 726
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 399
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 400
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 401
	CIndexDataBase<short unsigned int>::Base(); // 408
	CIndexData<short unsigned int>::ReleaseBuffer(); // 409
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 410
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ClearBuffers(); // 339
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::~CMeshBuilder2(); // 729
} /* size: 0, variables: 9, inline expansions: 198 (12425 bytes) */

// <03C21F98> ../scenesystem/utils/renderutils.cpp:734
void CSceneUtils::DrawScreenSpaceRectangle(ISceneWorld* pWorld, HMaterial hMaterial, int nDestX, int nDestY, int nWidth, int nHeight, float flSrcTextureX0, float flSrcTextureY0, float flSrcTextureX1, float flSrcTextureY1, int nSrcTextureWidth, int nSrcTextureHeight, int nXDice, int nYDice, float fDepth, bool bDeleteAtFrameEnd)
{
} /* size: 7 */

// <03C21F1D> ../scenesystem/utils/renderutils.cpp:882
void CSceneUtils::DrawNDCSpaceUntexturedPolygon(ISceneWorld* pWorld, HMaterial hMaterial, int nVertexCount, Vector2D* pScreenSpaceCoordinates, bool bDeleteAtFrameEnd)
{
} /* size: 7 */

// <03C21ED7> ../scenesystem/utils/renderutils.cpp:920
void C6FaceSkyboxObject::C6FaceSkyboxObject()
{
} /* size: 0 */

// <03C21EBA> ../scenesystem/utils/renderutils.cpp:920
inline void C6FaceSkyboxObject::C6FaceSkyboxObject()
{
} /* size: 0 */

// <03C172C6> ../scenesystem/utils/renderutils.cpp:920
// function calls: 20
void C6FaceSkyboxObject::~C6FaceSkyboxObject()
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 920
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
	CSceneObject::~CSceneObject(); // 920
} /* size: 249, inline expansions: 20 (840 bytes) */

// <03C16E2D> ../scenesystem/utils/renderutils.cpp:920
// function calls: 22
void C6FaceSkyboxObject::~C6FaceSkyboxObject()
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 920
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
	IGenericInterface::~IGenericInterface(); // 1436
	CSceneObject::~CSceneObject(); // 920
	C6FaceSkyboxObject::~C6FaceSkyboxObject(); // 920
} /* size: 257, inline expansions: 22 (1047 bytes) */

// <03C16E10> ../scenesystem/utils/renderutils.cpp:920
inline void C6FaceSkyboxObject::~C6FaceSkyboxObject()
{
} /* size: 0 */

// <03C1563B> ../scenesystem/utils/renderutils.cpp:920
// member functions: 8
// member variables: 2
// class size: 288
class C6FaceSkyboxObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void C6FaceSkyboxObject(C6FaceSkyboxObject* , C6FaceSkyboxObject& );
	void C6FaceSkyboxObject(C6FaceSkyboxObject* , const C6FaceSkyboxObject& );
	void C6FaceSkyboxObject(C6FaceSkyboxObject* );
	HMaterialStrong m_hSkyFaces[6]; /* 232 48 */
	virtual void ~C6FaceSkyboxObject(C6FaceSkyboxObject* );
	void C6FaceSkyboxObject(class C6FaceSkyboxObject *, class C6FaceSkyboxObject &); /* linkage=_ZN18C6FaceSkyboxObjectC4EOS_ */
	void C6FaceSkyboxObject(class C6FaceSkyboxObject *, const class C6FaceSkyboxObject  &); /* linkage=_ZN18C6FaceSkyboxObjectC4ERKS_ */
	void C6FaceSkyboxObject(class C6FaceSkyboxObject *); /* linkage=_ZN18C6FaceSkyboxObjectC4Ev */
	virtual void ~C6FaceSkyboxObject(class C6FaceSkyboxObject *); /* linkage=_ZN18C6FaceSkyboxObjectD4Ev */
} __attribute__((__aligned__(16)));

// <03C14C50> ../scenesystem/utils/renderutils.cpp:926
// member functions: 18
// member variable: 1
// vtable entries: 4
// class size: 8
class C6FaceSkyboxObjectDesc : public CBaseNonPooledSceneObjectDesc<C6FaceSkyboxObject> {
public:
	/* class CBaseNonPooledSceneObjectDesc<C6FaceSkyboxObject> <ancestor>; */ /* 0 8 */
	void ~C6FaceSkyboxObjectDesc(C6FaceSkyboxObjectDesc* );
	void C6FaceSkyboxObjectDesc(C6FaceSkyboxObjectDesc* , C6FaceSkyboxObjectDesc& );
	void C6FaceSkyboxObjectDesc(C6FaceSkyboxObjectDesc* , const C6FaceSkyboxObjectDesc& );
	void C6FaceSkyboxObjectDesc(C6FaceSkyboxObjectDesc* );
	/* ../scenesystem/utils/renderutils.cpp:929 */
	virtual const char* GetTypeName(C6FaceSkyboxObjectDesc* );
	/* ../scenesystem/utils/renderutils.cpp:1054 */
	virtual void DrawArray(C6FaceSkyboxObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/utils/renderutils.cpp:1066 */
	virtual void GeneratePrimitives(C6FaceSkyboxObjectDesc* , CSceneObject* , const GeneratePrimitivesArgs_t& , GeneratePrimitivesFlags_t, CMeshPrimitiveOutputBuffer& );
protected:
	/* ../scenesystem/utils/renderutils.cpp:1015 */
	void DrawObject(C6FaceSkyboxObjectDesc* , IRenderContext* , const C6FaceSkyboxObject* , const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/utils/renderutils.cpp:947 */
	virtual CSceneObject* Create(C6FaceSkyboxObjectDesc* );
	void ~C6FaceSkyboxObjectDesc(class C6FaceSkyboxObjectDesc *); /* linkage=_ZN22C6FaceSkyboxObjectDescD4Ev */
	void C6FaceSkyboxObjectDesc(class C6FaceSkyboxObjectDesc *, class C6FaceSkyboxObjectDesc &); /* linkage=_ZN22C6FaceSkyboxObjectDescC4EOS_ */
	void C6FaceSkyboxObjectDesc(class C6FaceSkyboxObjectDesc *, const class C6FaceSkyboxObjectDesc  &); /* linkage=_ZN22C6FaceSkyboxObjectDescC4ERKS_ */
	void C6FaceSkyboxObjectDesc(class C6FaceSkyboxObjectDesc *); /* linkage=_ZN22C6FaceSkyboxObjectDescC4Ev */
	virtual const char  * GetTypeName(class C6FaceSkyboxObjectDesc *); /* linkage=_ZN22C6FaceSkyboxObjectDesc11GetTypeNameEv */
	virtual void DrawArray(class C6FaceSkyboxObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN22C6FaceSkyboxObjectDesc9DrawArrayEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_t */
	virtual void GeneratePrimitives(class C6FaceSkyboxObjectDesc *, class CSceneObject *, const class GeneratePrimitivesArgs_t  &, enum GeneratePrimitivesFlags_t, class CMeshPrimitiveOutputBuffer &); /* linkage=_ZN22C6FaceSkyboxObjectDesc18GeneratePrimitivesEP12CSceneObjectRKN16ISceneObjectDesc24GeneratePrimitivesArgs_tE25GeneratePrimitivesFlags_tR26CMeshPrimitiveOutputBuffer */
	void DrawObject(class C6FaceSkyboxObjectDesc *, class IRenderContext *, const class C6FaceSkyboxObject  *, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN22C6FaceSkyboxObjectDesc10DrawObjectEP14IRenderContextPK18C6FaceSkyboxObjectPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_t */
	virtual class CSceneObject * Create(class C6FaceSkyboxObjectDesc *); /* linkage=_ZN22C6FaceSkyboxObjectDesc6CreateEv */
};

// <03C21EEE> ../scenesystem/utils/renderutils.cpp:929
void C6FaceSkyboxObjectDesc::GetTypeName()
{
} /* size: 12 */

// <03C21A77> ../scenesystem/utils/renderutils.cpp:947
// function calls: 18
void C6FaceSkyboxObjectDesc::Create()
{
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
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1428
	CUtlStringToken::CUtlStringToken(); // 1428
	CManagedHandle::CManagedHandle(); // 1428
	CSceneObject::CSceneObject(); // 920
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 920
	C6FaceSkyboxObject::C6FaceSkyboxObject(); // 949
} /* size: 210, inline expansions: 18 (501 bytes) */

// <03C2180B> ../scenesystem/utils/renderutils.cpp:974
// variables: 5
// function calls: 6
void MakeSkyVec(const Vector& vViewOrigin, float s, float t, int axis, float zFar, Vector& position, Vector2D& texCoord)
{
	Vector v; // 976
	Vector b; // 976
	int j; // 977
	int k; // 977
	float width; // 978
	Vector::Vector(); // 976
	Vector::Vector(); // 976
	Vector::operator[](
			int i);  // 1001
	Vector::operator[](
			int i);  // 1002
	VectorCopy(const Vector& src,
			Vector& dst);  // 1010
	Vector::operator[](
			int i);  // 999
} /* size: 317, variables: 5, inline expansions: 6 (21 bytes) */

// <03C1EA54> ../scenesystem/utils/renderutils.cpp:1015
// variables: 19
// function calls: 178
void C6FaceSkyboxObjectDesc::DrawObject(IRenderContext* pCtx, const C6FaceSkyboxObject* pObj, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& stats)
{
	const Vector& vViewPos; // 1017
	float flZFar; // 1018
	{
		int i; // 1020
		{
			Vector positionArray; // 1022
			Vector2D texCoordArray; // 1023
			{
				IMaterialMode* pMode; // 1026
				CMeshBuilder2<VertexUVPos_t>* pMeshBuilder; // 1035
				CRenderAttributes attributes; // 1047
				{
					int j; // 1038
					Vector::Init(
						vec_t ix,
						vec_t iy,
						vec_t iz);  // 121
					VertexPos_t::Position3fv(
							const float* v);  // 1196
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1197
					{
						int i; // 345
						Vector::operator[](
								int i);  // 347
						Vector::operator[](
								int i);  // 352
					}
					CMeshBuilder2<VertexUVPos_t>::AutoUpdateBounds(
							const Vector& point);  // 1197
					CMeshBuilder2<VertexUVPos_t>::Position3fv(
							const float* v);  // 1040
					Vector4D::Vector4D(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 294
					VertexUVPos_t::TexCoord(
						int nStage,
						const Vector4D& vecUV);  // 294
					VertexUVPos_t::TexCoord2fv(
							int nStage,
							const float* st);  // 1262
					CMeshBuilder2<VertexUVPos_t>::TexCoord2fv(
							int nStage,
							const float* st);  // 1041
					{
					}
					Vector::operator=(
							const Vector& vOther);  // 103
					VertexPos_t::operator=(
							const VertexPos_t  &);  // 257
					Vector2D::operator=(
							const Vector2D& vOther);  // 257
					VertexUVPos_t::operator=(
							const VertexUVPos_t  &);  // 355
					{
					}
					CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 270
					CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 887
					CMeshBuilder2<VertexUVPos_t>::AdvanceVertex(); // 1042
				}
				CStrongHandle<InfoForResourceTypeIMaterial2>::operator->(); // 1026
				ISceneLayer::GetShaderMode(); // 1026
				Vector::Vector(); // 328
				Vector::Vector(); // 328
				CThreadSyncValue<bool>::Load(); // 34
				CTSInputLayoutCreator::IsInitialized(); // 352
				CThreadSyncValue<bool>::Load(); // 60
				{
				}
				CTSInputLayoutCreator::GetLayout(); // 364
				{
					RenderInputLayoutField_t uvTestLayout; // 354
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
							int nLineNumber);  // 39
					CThreadSyncValue<bool>::Load(); // 34
					CTSInputLayoutCreator::IsInitialized(); // 40
					CThreadSyncValue<bool>::Store(
						bool value);  // 43
					ThreadInterlockedExchange64(volatile int64* p,
									int64 value);  // 874
					CThreadFastMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 944
					Unlock(CThreadFastMutex& lock,
						const char* pFileName,
						int nLineNumber);  // 983
					CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
					CTSInputLayoutCreator::CreateLayout(
							const char* pLayoutName,
							int nFieldCount,
							const RenderInputLayoutField_t* pFieldDescs);  // 360
				}
				GetLayout(void); // 348
				CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
				CTSInputLayoutCreator::CTSInputLayoutCreator(); // 350
				GetLayout(void); // 330
				Vector::Init(
					vec_t ix,
					vec_t iy,
					vec_t iz);  // 331
				Vector::Init(
					vec_t ix,
					vec_t iy,
					vec_t iz);  // 332
				CMeshBuilder2<VertexUVPos_t>::CMeshBuilder2(); // 1035
				{
				}
				{
					LockDesc_t desc; // 557
					bool bOk; // 558
				}
				{
				}
				CVertexData<VertexUVPos_t>::Lock(
					int nMaxVertexCount);  // 559
				{
				}
				{
					LockDesc_t desc; // 459
					bool bOk; // 460
				}
				{
				}
				CIndexData<short unsigned int>::Lock(
					int nMaxIndexCount);  // 565
				{
				}
				CMeshBuilder2<VertexUVPos_t>::Begin(
					MaterialPrimitiveType2_t type,
					int numPrimitives);  // 1036
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
				CUtlString::CUtlString(); // 117
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 39
				SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
				CUtlAttributeListChunk<CUtlString, 2, CUtlString>::CUtlAttributeListChunk(); // 248
				CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
				CUtlAttributeList<CUtlString, 2, CUtlString, 2>::CUtlAttributeList(); // 898
				CRenderAttributes::CRenderAttributes(); // 1047
				{
				}
				Vector::Vector(); // 11
				Vector::Vector(); // 11
				MeshBuilderBuffers_t::MeshBuilderBuffers_t(); // 705
				{
				}
				CVertexDataBase<VertexUVPos_t>::Base(); // 1007
				CMeshBuilder2<VertexUVPos_t>::BaseVertexData(); // 756
				CMeshBuilder2<VertexUVPos_t>::VertexRenderCount(); // 757
				CMeshBuilder2<VertexUVPos_t>::GetLayout(); // 759
				CMeshBuilder2<VertexUVPos_t>::IndexRenderCount(); // 760
				CMeshBuilder2<VertexUVPos_t>::IndexRenderCount(); // 768
				Vector::operator=(
						const Vector& vOther);  // 770
				Vector::operator=(
						const Vector& vOther);  // 771
				{
				}
				CIndexDataBase<short unsigned int>::Base(); // 1014
				CMeshBuilder2<VertexUVPos_t>::BaseIndexData(); // 762
				CMeshBuilder2<VertexUVPos_t>::VertexRenderCount(); // 754
				{
				}
				CMeshBuilder2<VertexUVPos_t>::ExtractBuffers(
						MeshBuilderBuffers_t* pBuffers,
						bool bPurge);  // 706
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 707
				CMeshBuilder2<VertexUVPos_t>::Draw(
					IRenderContext* pCtx,
					IMaterialMode* pMode,
					const CRenderAttributes* pAttributes);  // 695
				CMeshBuilder2<VertexUVPos_t>::Draw(
					IRenderContext* pCtx,
					IMaterialMode* pMode,
					const CRenderAttributes* pAttributes);  // 1048
				{
				}
				CIndexDataBase<short unsigned int>::Base(); // 408
				CIndexData<short unsigned int>::ReleaseBuffer(); // 409
				{
				}
				{
				}
				CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
				CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
				CIndexData<short unsigned int>::~CIndexData(); // 410
				CVertexDataBase<VertexUVPos_t>::Base(); // 399
				CVertexData<VertexUVPos_t>::ReleaseBuffer(); // 400
				{
				}
				{
				}
				CVertexDataBase<VertexUVPos_t>::~CVertexDataBase(); // 194
				CVertexDataBase<VertexUVPos_t>::~CVertexDataBase(); // 462
				CVertexData<VertexUVPos_t>::~CVertexData(); // 401
				CMeshBuilder2<VertexUVPos_t>::ClearBuffers(); // 339
				CMeshBuilder2<VertexUVPos_t>::~CMeshBuilder2(); // 1049
			}
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 1024
			CStrongHandle<InfoForResourceTypeIMaterial2>::operator!=(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 1024
		}
	}
	CFrustum::GetCameraFarPlane(); // 1018
	CFrustum::GetCameraPosition(); // 1017
} /* size: 0, variables: 2, inline expansions: 2 (40 bytes) */

// <03C1E941> ../scenesystem/utils/renderutils.cpp:1054
// variables: 2
void C6FaceSkyboxObjectDesc::DrawArray(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& stats)
{
	{
		int r; // 1059
		{
			const C6FaceSkyboxObject* pObj; // 1061
		}
	}
} /* size: 113 */

// <03C1E454> ../scenesystem/utils/renderutils.cpp:1066
// variable: 1
// function calls: 23
void C6FaceSkyboxObjectDesc::GeneratePrimitives(CSceneObject* pObject, const GeneratePrimitivesArgs_t& gpArgs, GeneratePrimitivesFlags_t gpFlags, CMeshPrimitiveOutputBuffer& outBuf)
{
	CMeshDrawPrimitive_t& out; // 1069
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
	CMeshPrimitiveOutputBuffer::Next(); // 1069
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1070
	CMeshDrawPrimitive_t::SetMaterial(
			const IMaterial2* pMaterial);  // 2490
	Vector4D::operator=(
			const Vector4D& vOther);  // 2494
	LightProbeVolumeBinding_t::Invalidate(); // 2492
	CMeshDrawPrimitive_t::InitForObject(
			const CSceneObject* pObj,
			const Vector4D& vRGBAModulation,
			const ISceneLayer* pLayer);  // 1070
	GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeFallback(); // 1074
	CSceneObject::GetTransform(); // 1076
} /* size: 407, variables: 1, inline expansions: 23 (977 bytes) */

// <03C1E0D5> ../scenesystem/utils/renderutils.cpp:1084
// variables: 2
// function calls: 11
void CSceneUtils::Create6FaceSkybox(ISceneWorld* pSceneWorld, HMaterial* hFaceMaterials, CUtlStringToken layerMatchId)
{
	C6FaceSkyboxObject* pNew; // 1086
	{
		int i; // 1089
		CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 570
		CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
			ResourceHandleTyped_t hResource);  // 673
		CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1091
	}
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 1087
	CSceneObject::SetLayerMatchID(
			CUtlStringToken nTok);  // 1088
	CSceneObject::SetBoundsInfinite(); // 1093
} /* size: 260, variables: 1, inline expansions: 6 (183 bytes) */

