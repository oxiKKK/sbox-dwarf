
//
// worldrenderer/world.cpp
//
//	referenced by: libengine2.so
//
//	functions: 85
//

// <0101F70E> worldrenderer/world.cpp:29
// function calls: 12
void CWorldSceneObjectRef::CWorldSceneObjectRef()
{
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 31
	{
	}
	AlignedByteArrayExplicit_t<1, VertexBufferHandle_t__::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1, VertexBufferHandle_t__::AlignedByteArray_t(); // 228
	CUtlMemory<VertexBufferHandle_t__::CUtlMemory(
			VertexBufferHandle_t__** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<VertexBufferHandle_t__::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<VertexBufferHandle_t__::CUtlMemoryFixedGrowable_Base(
					VertexBufferHandle_t__** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<1, VertexBufferHandle_t__::Base(); // 231
	CUtlMemoryFixedGrowable<VertexBufferHandle_t__::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<VertexBufferHandle_t__::ResetDbgInfo(); // 530
	CUtlVectorBase<VertexBufferHandle_t__::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<VertexBufferHandle_t__::CUtlVectorFixedGrowable(
				int growSize);  // 31
} /* size: 127, inline expansions: 12 (269 bytes) */

// <0101F6F5> worldrenderer/world.cpp:29
void CWorldSceneObjectRef::CWorldSceneObjectRef()
{
} /* size: 0 */

// <0101F2A4> worldrenderer/world.cpp:36
// variables: 2
// function calls: 20
void CWorldSceneObjectRef::~CWorldSceneObjectRef()
{
	{
		int i; // 43
	}
	{
		int i; // 43
		CUtlVectorBase<VertexBufferHandle_t__::Count(); // 43
		CUtlMemory<VertexBufferHandle_t__::operator[](
				int i);  // 588
		CUtlVectorBase<VertexBufferHandle_t__::operator[](
				int i);  // 45
	}
	CUtlVectorBase<VertexBufferHandle_t__::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<1, VertexBufferHandle_t__::Base(); // 237
	CUtlMemory<VertexBufferHandle_t__::IsExternallyAllocated(); // 577
	CUtlMemory<VertexBufferHandle_t__::ConvertToExternalMemory(
				VertexBufferHandle_t__** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<VertexBufferHandle_t__::Purge_FixedGrowable(
				VertexBufferHandle_t__** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<VertexBufferHandle_t__::Purge_FixedGrowable(
				VertexBufferHandle_t__** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<VertexBufferHandle_t__::Purge(
		int numElements);  // 1799
	CUtlVectorBase<VertexBufferHandle_t__::ResetDbgInfo(); // 1800
	CUtlVectorBase<VertexBufferHandle_t__::Purge(); // 560
	ValidateAlignment<VertexBufferHandle_t__*>(void); // 508
	CUtlMemory<VertexBufferHandle_t__::Purge(); // 903
	CUtlMemory<VertexBufferHandle_t__::Purge(); // 510
	CUtlMemory<VertexBufferHandle_t__::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<VertexBufferHandle_t__::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<VertexBufferHandle_t__::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<VertexBufferHandle_t__::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<VertexBufferHandle_t__::~CUtlVectorFixedGrowable(); // 47
} /* size: 222, inline expansions: 17 (517 bytes) */

// <0101F23C> worldrenderer/world.cpp:36
void CWorldSceneObjectRef::~CWorldSceneObjectRef()
{
} /* size: 36 */

// <0101F217> worldrenderer/world.cpp:36
// variable: 1
void CWorldSceneObjectRef::~CWorldSceneObjectRef()
{
	{
		int i; // 43
	}
} /* size: 0 */

// <0101DD02> worldrenderer/world.cpp:48
// variables: 14
// function calls: 80
void CWorldRendererBakedLightingInfo::Init(const BakedLightingInfo_t& bakedLightingInfo)
{
	bool bInvalidLightmaps; // 50
	bool bLoadDebugLightmaps; // 52
	const char   __FUNCTION__; // 21600
	{
		BakedLightingConstantBuffer_t bakedLightingConstantBuffer; // 91
		int i; // 97
		{
			int i; // 59
			{
				CPathBufferString resourceName; // 63
				CPathBufferString baseName; // 64
				CUtlStringToken strtok; // 68
				CUtlSymbolLarge::String(); // 148
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 148
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CBufferString* pOutBuffer,
						bool bAppend);  // 172
				ResourceGetName(ResourceHandle_t hResource,
						CBufferString* pOutBuffer,
						bool bAppend);  // 897
				CStrongHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
						CBufferString* pOutName,
						bool bAppend);  // 65
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 66
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 68
				CUtlStringToken::CUtlStringToken(); // 121
				{
				}
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 119
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 68
				CUtlStringToken::operator==(
						const CUtlStringToken& other);  // 69
				AlignedByteArrayExplicit_t<5, CUtlStringToken, 4>::Base(); // 268
				CUtlMemoryFixed<CUtlStringToken, 5>::Base(); // 112
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 5> >::Base(); // 368
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 5> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 5> >::GrowMemory(
						int num);  // 1198
				AlignedByteArrayExplicit_t<5, CUtlStringToken, 4>::Base(); // 268
				CUtlMemoryFixed<CUtlStringToken, 5>::Base(); // 272
				CUtlMemoryFixed<CUtlStringToken, 5>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 5> >::Element(
					int i);  // 1201
				CopyConstruct<CUtlStringToken>(CUtlStringToken* pMemory,
								const CUtlStringToken& src);  // 1201
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 5> >::AddToTail(
						const CUtlStringToken& src);  // 72
				CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCT this,
						int i);  // 73
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 73
				AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 268
				CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5>::Base(); // 112
				Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this); // 368
				ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this); // 824
				GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this,
						int num);  // 1198
				AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 268
				CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5>::Base(); // 272
				CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this,
					int i);  // 1201
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1520
				CopyConstruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
												const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1201
				AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this,
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 73
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 74
				CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCT this,
						int i);  // 74
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 75
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 75
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 63
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 64
			}
			Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCT this); // 59
			CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCT this,
					int i);  // 61
			CStrongHandle<InfoForResourceTypeCTextureBase>::HasIdentity(); // 61
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
		}
		{
			HRenderTexture hLightmapHandle; // 98
			CUtlVectorFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5>& __for_range; // 35373
			iterator __for_begin; // 60207
			iterator __for_end; // 60207
			Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeC this); // 104
			end(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this); // 98
			AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 268
			CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5>::Base(); // 112
			Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this); // 102
			begin(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this); // 98
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 98
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 103
		}
		LightmapGameVersionNumber(void); // 57
		Vector4D::Vector4D(); // 85
		BakedLightingConstantBuffer_t::BakedLightingConstantBuffer_t(); // 91
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 92
	}
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCT this); // 108
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <0101DCB1> worldrenderer/world.cpp:117
int WorldNodeDistCompare(const WorldNodeSortElement_t* pOne, const WorldNodeSortElement_t* pTwo)
{
} /* size: 106 */

// <0101D4BD> worldrenderer/world.cpp:134
// variables: 7
// function calls: 32
void CNodeSceneObjectData::SetRenderingFlags(ESceneObjectFlags nRenderingFlags, bool bOverwriteFlags, bool bVisible, uint64 nLayerVisiblityFlags)
{
	int nSceneObjects; // 140
	{
		int s; // 144
		{
			ESceneObjectFlags nOriginalFlags; // 146
			CUtlMemory<CWorldSceneObjectRef::operator[](
					int i);  // 588
			CUtlVectorBase<CWorldSceneObjectRef::operator[](
					int i);  // 146
			CWorldSceneObjectRef::SceneObject(); // 146
			CSceneObject::GetOriginalFlags(); // 146
			CSceneObject::MirrorFlags(); // 1901
			CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
								ESceneObjectFlags flags);  // 1934
			CSceneObject::ChangeFlags(
					ESceneObjectFlags nNewFlags,
					ESceneObjectFlags nNewFlagsMask);  // 147
		}
	}
	{
		int s; // 152
		{
			ESceneObjectFlags nOriginalFlags; // 154
			CUtlMemory<CWorldSceneObjectRef::operator[](
					int i);  // 588
			CUtlVectorBase<CWorldSceneObjectRef::operator[](
					int i);  // 154
			CWorldSceneObjectRef::SceneObject(); // 154
			CSceneObject::GetOriginalFlags(); // 154
			CSceneObject::MirrorFlags(); // 1901
			CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
								ESceneObjectFlags flags);  // 1940
			CSceneObject::SetFlags(
				ESceneObjectFlags nFlagsToOR);  // 155
		}
	}
	{
		int s; // 161
		CUtlMemory<CWorldSceneObjectRef::operator[](
				int i);  // 588
		CUtlVectorBase<CWorldSceneObjectRef::operator[](
				int i);  // 166
		CWorldSceneObjectRef::SceneObject(); // 166
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1981
		CSceneObject::EnableRendering(); // 166
		CUtlMemory<signed char, int>::operator[](
				int i);  // 588
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::operator[](
				int i);  // 164
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1976
		CSceneObject::DisableRendering(); // 170
	}
	{
		int s; // 176
		CUtlMemory<CWorldSceneObjectRef::operator[](
				int i);  // 588
		CUtlVectorBase<CWorldSceneObjectRef::operator[](
				int i);  // 178
		CWorldSceneObjectRef::SceneObject(); // 178
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1976
		CSceneObject::DisableRendering(); // 178
	}
	CUtlVectorBase<CWorldSceneObjectRef::Count(); // 140
} /* size: 551, variables: 1, inline expansions: 1 (4 bytes) */

// <01023D47> worldrenderer/world.cpp:183
// function call: 1
void CNodeSceneObjectData::GetNumSceneObjects()
{
	CUtlVectorBase<CWorldSceneObjectRef::Count(); // 185
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0101D4A1> worldrenderer/world.cpp:183
void CNodeSceneObjectData::GetNumSceneObjects()
{
} /* size: 0 */

// <0101C8E0> worldrenderer/world.cpp:188
// variables: 7
// function calls: 41
void CWorld::AddEntityLumpAndChildren_R(HEntityLump hLump)
{
	const CEntityLump* pLump; // 190
	const char   __FUNCTION__; // 22159
	const char* pUniqueId; // 197
	const int  nChildLumps; // 203
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
	{
		int c; // 204
		{
			HEntityLump hChildLump; // 206
			CWeakHandle<InfoForResourceTypeCEntityLump>::Init(
				const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 273
			CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 207
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCEntityLump>(const CWeakHandle<InfoForResourceTypeCEntityLump>& hResource); // 190
	CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::NumAllocated(); // 1196
	CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::Base(); // 112
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, this); // 368
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, this); // 824
	CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::IsGrowable(); // 823
	CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, this,
			int num);  // 1198
	CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, this,
		int i);  // 1201
	CWeakHandle<InfoForResourceTypeCEntityLump>::Init(
		const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 273
	CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 1520
	CopyConstruct<CWeakHandle<InfoForResourceTypeCEntityLump> >(CWeakHandle<InfoForResourceTypeCEntityLump>* pMemory,
									const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 1201
	AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, this,
			const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 195
	V_isempty(const char* pszString); // 198
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 200
	CUtlStringToken::GetHashCode(); // 206
	DefaultHashFunctor<CUtlStringToken>::operator(
			const CUtlStringToken& token);  // 249
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, int>::Base(); // 650
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, int>::Count(); // 651
	CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >::IdealIndex(
			uint32 slotmask);  // 667
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 154
	DefaultEqualFunctor<CUtlStringToken>::operator(
			Arg_t a,
			Arg_t b);  // 670
	DoLookup<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump>, DefaultHashFunctor<CUtlStringToke this,
					const CUtlStringToken& x,
					unsigned int h,
					handle_t* pPreviousInChain);  // 716
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, int>::operator[](
			int i);  // 720
	CWeakHandle<InfoForResourceTypeCEntityLump>::Init(
		const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 273
	CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 64
	CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >::CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >(
											const CUtlStringToken& k,
											const CWeakHandle<InfoForResourceTypeCEntityLump>& v);  // 1514
	Construct<CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, const CUtlStringToken&, const CWeakHandle<InfoForResourceTypeCEntityLump>&>(CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >* pMemory); // 720
	DoInsert<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump>, DefaultHashFunctor<CUtlStringToken>, De this,
					const CUtlStringToken& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
	DoInsert<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump>, DefaultHashFunctor<CUtlStringToken>, De this,
					const CUtlStringToken& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
	Insert(const CUtlHashtable<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump>, DefaultHashFunctor<CUtlStringToken>, De this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 200
} /* size: 0, variables: 4, inline expansions: 39 (1789 bytes) */

// <010247FB> worldrenderer/world.cpp:211
// variables: 3
// function calls: 10
void CWorld::EnsureEntityLumps()
{
	int nRootLumps; // 217
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntity this); // 213
	Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoFo this); // 217
	{
		int r; // 218
		{
			HEntityLump hLump; // 220
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
					int i);  // 220
			CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCEntityLump>::GetHandle(); // 220
			CWeakHandle<InfoForResourceTypeCEntityLump>::Init(
				const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 273
			CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 221
		}
	}
	CWorld::EnsureEntityLumps(); // 211
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0101C8A1> worldrenderer/world.cpp:211
// variables: 3
void CWorld::EnsureEntityLumps()
{
	int nRootLumps; // 217
	{
		int r; // 218
		{
			HEntityLump hLump; // 220
		}
	}
} /* size: 0, variables: 1 */

// <0101C570> worldrenderer/world.cpp:225
// variables: 4
// function calls: 11
void CWorld::Init(ISceneWorld* pSceneWorld)
{
	const char   __FUNCTION__; // 21600
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntity this); // 213
	Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoFo this); // 217
	{
		int r; // 218
		{
			HEntityLump hLump; // 220
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
					int i);  // 220
			CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCEntityLump>::GetHandle(); // 220
			CWeakHandle<InfoForResourceTypeCEntityLump>::Init(
				const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 273
			CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 221
		}
	}
	CWorld::EnsureEntityLumps(); // 211
	CWorld::EnsureEntityLumps(); // 232
} /* size: 0, variables: 1, inline expansions: 4 (173 bytes) */

// <0101B987> worldrenderer/world.cpp:235
// variables: 11
// function calls: 45
void CWorld::CreateAndDispatchLoadRequests(const Vector& vEye)
{
	int nNodes; // 237
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > nodeList; // 256
	{
		int n; // 243
		{
			int nNodeID; // 245
			AABB_t Bounds; // 246
			AABB_t::GetMinDistToPoint(
						const Vector& vPoint);  // 248
			CUtlMemory<WorldNodeSortElement_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::operator[](
					int i);  // 248
			CUtlMemory<WorldNodeSortElement_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::operator[](
					int i);  // 249
			CUtlMemory<WorldNodeSortElement_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::operator[](
					int i);  // 250
			CUtlMemory<WorldNodeSortElement_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::operator[](
					int i);  // 251
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 245
		}
	}
	{
		int n; // 257
		{
			int nIndex; // 259
			int nNodeID; // 260
			CUtlMemory<WorldNodeSortElement_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::operator[](
					int i);  // 259
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 260
		}
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 237
	CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::Count(); // 934
	CUtlMemory<WorldNodeSortElement_t, int>::Base(); // 112
	CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::Base(); // 937
	{
		int i; // 949
		{
			int j; // 951
			CUtlMemory<WorldNodeSortElement_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::Element(
				int i);  // 953
			CUtlMemory<WorldNodeSortElement_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::Element(
				int i);  // 953
			CUtlMemory<WorldNodeSortElement_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::Element(
				int i);  // 955
			CUtlMemory<WorldNodeSortElement_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::Element(
				int i);  // 955
			swap<WorldNodeSortElement_t>(WorldNodeSortElement_t& __a,
							WorldNodeSortElement_t& __b);  // 19
			V_swap<WorldNodeSortElement_t>(WorldNodeSortElement_t& x,
							WorldNodeSortElement_t& y);  // 955
		}
	}
	CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::Sort(
		int (*pfnCompare)(const WorldNodeSortElement_t *, const WorldNodeSortElement_t *));  // 253
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 256
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
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 266
} /* size: 731, variables: 2, inline expansions: 16 (801 bytes) */

// <0101B7BC> worldrenderer/world.cpp:268
// variables: 4
// function calls: 5
void CWorld::Shutdown()
{
	int nCount; // 270
	int nNodes; // 277
	{
		int i; // 271
		CUtlMemory<HResourceManifest__::operator[](
				int i);  // 588
		CUtlVectorBase<HResourceManifest__::operator[](
				int i);  // 273
	}
	{
		int n; // 278
	}
	CUtlVectorBase<HResourceManifest__::Count(); // 270
	CUtlVectorBase<HResourceManifest__::RemoveAll(); // 275
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 277
} /* size: 147, variables: 2, inline expansions: 3 (23 bytes) */

// <0102359D> worldrenderer/world.cpp:285
// function call: 1
void CWorld::GetNumNodes()
{
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 287
} /* size: 19, inline expansions: 1 (3 bytes) */

// <0101B7A3> worldrenderer/world.cpp:285
void CWorld::GetNumNodes()
{
} /* size: 0 */

// <0101B729> worldrenderer/world.cpp:290
// variables: 2
void CWorld::GetBuilderParams()
{
	const char   __FUNCTION__; // 21914
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 292
	}
} /* size: 0, variables: 1 */

// <0101B6FB> worldrenderer/world.cpp:297
void CWorld::HasInvalidBakedLighting()
{
} /* size: 18 */

// <0101B6CD> worldrenderer/world.cpp:302
void CWorld::HasPreviewBakedLighting()
{
} /* size: 15 */

// <0101B66E> worldrenderer/world.cpp:307
// function call: 1
void CWorld::BakedLightingInfo()
{
	CWorldRendererBakedLightingInfo::GetBakedLightingInfo(); // 309
} /* size: 12, inline expansions: 1 (7 bytes) */

// <0101B49E> worldrenderer/world.cpp:312
// variables: 5
// function calls: 3
void CWorld::IsAncestor(int nNodeInQuestion, int nPotentialAncestor)
{
	const NodeData_t* pNodeData; // 314
	int nChildren; // 315
	{
		int c; // 316
		{
			int nChild; // 318
			{
				bool bIsAncestorOfChild; // 325
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 318
		}
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 315
} /* size: 175, variables: 2, inline expansions: 1 (4 bytes) */

// <0101B314> worldrenderer/world.cpp:334
// variables: 3
// function calls: 3
void CWorld::GetNodeData(int n)
{
	const char   __FUNCTION__; // 21784
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 336
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 337
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 337
	CUtlMemory<NodeData_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::operator[](
			int i);  // 339
} /* size: 0, variables: 1, inline expansions: 3 (22 bytes) */

// <0101B070> worldrenderer/world.cpp:342
// variables: 4
// function calls: 8
void CWorld::GetNodeBounds(int n)
{
	const char   __FUNCTION__; // 21833
	AABB_t box; // 347
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 344
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 345
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 345
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 347
	CUtlMemory<NodeData_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::operator[](
			int i);  // 348
	Vector::operator=(
			const Vector& vOther);  // 348
	Vector::operator=(
			const Vector& vOther);  // 349
} /* size: 0, variables: 2, inline expansions: 8 (46 bytes) */

// <0101AEE6> worldrenderer/world.cpp:353
// variables: 3
// function calls: 3
void CWorld::GetNodeMinDistance(int n)
{
	const char   __FUNCTION__; // 21968
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 355
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 356
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 356
	CUtlMemory<NodeData_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::operator[](
			int i);  // 358
} /* size: 0, variables: 1, inline expansions: 3 (6 bytes) */

// <01019FC7> worldrenderer/world.cpp:361
// variables: 16
// function calls: 55
void CWorld::SetWorldTransform(const matrix3x4a_t& mTransform)
{
	const int  nNumNodes; // 365
	const char   __FUNCTION__; // 21941
	{
		int iNode; // 366
		{
			CWorldNode* pWorldNode; // 368
			const WorldNode_t* pWorldNodeData; // 372
			int nSceneObjects; // 373
			CUtlVector<AABB_t, CUtlMemory<AABB_t, int> > boundsGroups; // 399
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 374
			}
			{
				int s; // 376
				{
					const SceneObject_t* pMapSceneObjectData; // 378
					CWorldSceneObjectRef* pSceneObjectRef; // 382
					CSceneObject* pSceneObject; // 386
					matrix3x4_t mOriginalTransform; // 390
					matrix3x4_t mTransform; // 393
					CUtlMemory<SceneObject_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::operator[](
							int i);  // 378
					CUtlMemory<CWorldSceneObjectRef::operator[](
							int i);  // 588
					CUtlVectorBase<CWorldSceneObjectRef::operator[](
							int i);  // 382
					CWorldSceneObjectRef::SceneObject(); // 386
					matrix3x4_t::matrix3x4_t(); // 390
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 91
					V_memcpy(void* dest,
						const void* src,
						size_t count);  // 391
					matrix3x4_t::matrix3x4_t(); // 393
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
							const matrix3x4_t& mTransform);  // 396
				}
			}
			{
				int i; // 401
				CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Count(); // 401
				CUtlMemory<AABB_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator[](
						int i);  // 403
				TransformAABB(const matrix3x4_t& matTransform,
						const AABB_t& boundsIn,
						AABB_t* pBoundsOut);  // 403
				CUtlMemory<AABB_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator[](
						int i);  // 403
			}
			CWorldNode::GetWorldNodeData(); // 372
			CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::Count(); // 373
			CUtlVectorBase<CWorldSceneObjectRef::Count(); // 374
			CUtlMemory<AABB_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<AABB_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >::CUtlVector(); // 399
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Count(); // 400
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<AABB_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::GrowVector(
					int num);  // 1445
			{
				int i; // 1451
			}
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::SetCount(
				int count);  // 400
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::RemoveAll(); // 1798
			CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<AABB_t, int>::Purge(); // 903
			CUtlMemory<AABB_t, int>::Purge(); // 1799
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Purge(); // 560
			ValidateAlignment<AABB_t>(void); // 508
			CUtlMemory<AABB_t, int>::Purge(); // 510
			CUtlMemory<AABB_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >::~CUtlVector(); // 407
		}
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 287
	CWorld::GetNumNodes(); // 365
} /* size: 0, variables: 2, inline expansions: 2 (19 bytes) */

// <01019F99> worldrenderer/world.cpp:410
void CWorld::GetWorldTransform()
{
} /* size: 9 */

// <01019F56> worldrenderer/world.cpp:415
void CWorld::SetLoadSun(bool bLoadSun)
{
} /* size: 29 */

// <01019F28> worldrenderer/world.cpp:420
void CWorld::GetLoadSun()
{
} /* size: 15 */

// <01019EFA> worldrenderer/world.cpp:426
void CWorld::ClearOutstandingLoadRequests()
{
} /* size: 5 */

// <010193BD> worldrenderer/world.cpp:444
// variables: 10
// function calls: 42
void CWorld::GetLayerNames(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutLayerNames)
{
	CUtlSymbolTable uniqueLayerNames; // 446
	const int  nNumNodes; // 449
	const int  nNumLayerNames; // 466
	{
		int iNode; // 450
		{
			CWorldNode* pWorldNode; // 452
			{
				const WorldNode_t* pWorldNodeData; // 455
				const int  nNumLayers; // 457
				{
					int iLayer; // 458
					CUtlMemory<CUtlString, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
							int i);  // 460
					CUtlString::Get(); // 460
				}
				CWorldNode::GetWorldNodeData(); // 455
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 457
			}
		}
	}
	{
		int iLayer; // 469
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1249
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1514
		Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1252
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				CUtlString& src);  // 471
		CUtlString::~CUtlString(); // 471
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 609
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
			int i);  // 110
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 186
		CUtlSymbolTable::StringFromIndex(
				const blockpooloffset_t& index);  // 110
		CUtlSymbolTable::GetElementString(
				int nElement);  // 471
		CUtlString::CUtlString(
				const char* pString);  // 471
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 287
	CWorld::GetNumNodes(); // 449
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 466
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 467
	CUtlMemory<CUtlString, int>::IsGrowable(); // 881
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CUtlString, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::EnsureCapacity(
			int num);  // 468
} /* size: 857, variables: 3, inline expansions: 10 (439 bytes) */

// <0101925B> worldrenderer/world.cpp:480
// variables: 4
// function calls: 2
void CWorld::SetLayerVisiblity(const char* pLayerName, bool bVisible)
{
	bool bFoundLayer; // 482
	const int  nNumNodes; // 484
	{
		int iNode; // 485
		{
			CWorldNode* pWorldNode; // 487
		}
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 287
	CWorld::GetNumNodes(); // 484
} /* size: 165, variables: 2, inline expansions: 2 (17 bytes) */

// <01023DD2> worldrenderer/world.cpp:506
// variable: 1
// function call: 1
void CWorld::GetNodeLayerVisibilityFlags(int nNode)
{
	CWorldNode* pWorldNode; // 508
	CWorldNode::GetLayerVisibilityFlags(); // 512
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01019228> worldrenderer/world.cpp:506
// variable: 1
void CWorld::GetNodeLayerVisibilityFlags(int nNode)
{
	CWorldNode* pWorldNode; // 508
} /* size: 0, variables: 1 */

// <01018D62> worldrenderer/world.cpp:519
// variables: 5
// function calls: 17
void CWorld::GetWorldNodeSceneObjects(CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >* pOutSceneObjects)
{
	const int  nNumWorldNodes; // 524
	{
		int iNode; // 525
		{
			const int  nNumSceneObjects; // 527
			{
				int iSceneObject; // 528
				{
					CWorldSceneObjectRef* pSceneObjectRef; // 530
					CUtlMemory<CWorldSceneObjectRef::operator[](
							int i);  // 588
					CUtlVectorBase<CWorldSceneObjectRef::operator[](
							int i);  // 530
					CUtlMemory<CSceneObject::NumAllocated(); // 1196
					CUtlMemory<CSceneObject::Base(); // 112
					CUtlVectorBase<CSceneObject::Base(); // 368
					CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 824
					CUtlMemory<CSceneObject::IsGrowable(); // 823
					CUtlMemory<CSceneObject::IsExternallyAllocated(); // 859
					CUtlMemory<CSceneObject::IsExternallyAllocated(); // 861
					CUtlMemory<CSceneObject::Grow(
						int num);  // 806
					CUtlVectorBase<CSceneObject::GrowMemory(
							int num);  // 1198
					CUtlMemory<CSceneObject::operator[](
							int i);  // 602
					CUtlVectorBase<CSceneObject::Element(
						int i);  // 1201
					CopyConstruct<CSceneObject*>(CSceneObject** pMemory,
									CSceneObject* const& src);  // 1201
					CUtlVectorBase<CSceneObject::AddToTail(
							CSceneObject* const& src);  // 533
				}
			}
			CUtlVectorBase<CWorldSceneObjectRef::Count(); // 527
		}
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 524
} /* size: 444, variables: 1, inline expansions: 1 (3 bytes) */

// <0101882C> worldrenderer/world.cpp:539
// variables: 2
// function calls: 18
void CWorld::BeginTraversal(WorldTraversalId_t nTraversalID)
{
	uint16 nIndex; // 541
	WorldTraversal_t* pTraversal; // 545
	CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::FindAltKeyType<long long unsigned int>(
						const long long unsigned int& search);  // 243
	CUtlMap<long long unsigned int, WorldTraversal_t::Find(
		const KeyType_t& key);  // 541
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::Element(
		short unsigned int i);  // 92
	CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
			IndexType_t i);  // 545
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 548
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 548
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 102
	CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 1344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 173
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 1344
	CUtlVectorBase<int, CUtlMemory<int, int> >::CopyArray(
			const int* pArray,
			int size);  // 548
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 554
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 555
} /* size: 206, variables: 2, inline expansions: 18 (186 bytes) */

// <01017EBD> worldrenderer/world.cpp:558
// variables: 13
// function calls: 24
void CWorld::BuildRenderList(WorldTraversalId_t nTraversalID, WorldNodeFlags_t nSkipFlags, ESceneObjectFlags nObjectUpdateFlags, const Vector& vEyePointIn, float flLODScale, float flFarPlane, float flElapsedTime)
{
	Vector vEyePoint; // 573
	WorldTraversal_t* pTraversal; // 576
	int nAccumFlags; // 585
	uint nLastFrameTraversalCount; // 590
	Vector vVisibleBoundsMin; // 593
	Vector vVisibleBoundsMax; // 594
	int nThisFrameNodes; // 595
	{
		int n; // 598
		{
			int nNode; // 600
			uint64 nLayerVisibilityFlags; // 602
			CNodeSceneObjectData* pNode; // 603
			{
				AABB_t bounds; // 618
				{
					Color boxColor; // 625
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 46
					Color::Color(
						int _r,
						int _g,
						int _b);  // 625
				}
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 618
				VectorMin(const Vector& a,
						const Vector& b,
						Vector& result);  // 619
				ConVar::GetInt(); // 351
				ConVar::GetBool(); // 623
				VectorMax(const Vector& a,
						const Vector& b,
						Vector& result);  // 620
			}
			CWorldNode::GetLayerVisibilityFlags(); // 512
			CWorld::GetNodeLayerVisibilityFlags(
							int nNode);  // 602
			CUtlVectorBase<CWorldSceneObjectRef::Count(); // 185
			CNodeSceneObjectData::GetNumSceneObjects(); // 616
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 600
		}
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 566
	VectorITransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 574
	Vector::Vector(); // 573
	Vector::operator=(
			const Vector& vOther);  // 52
	WorldTraversal_t::Init(
		Vector vEyePoint,
		WorldNodeFlags_t nSkipFlags,
		ESceneObjectFlags nObjectUpdateFlags,
		float flLODScale,
		float flFarPlane);  // 577
	CUtlVectorBase<CWorldNode::Count(); // 595
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 593
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 594
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 639
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 640
} /* size: 905, variables: 7, inline expansions: 10 (180 bytes) */

// <01017BE6> worldrenderer/world.cpp:646
// variables: 5
// function calls: 8
void CWorld::EndTraversal(WorldTraversalId_t nTraversalID)
{
	uint16 nIndex; // 648
	WorldTraversal_t* pTraversal; // 652
	int nPrevFrameNodes; // 657
	{
		int n; // 658
		{
			int nNode; // 660
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 660
		}
	}
	CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::FindAltKeyType<long long unsigned int>(
						const long long unsigned int& search);  // 243
	CUtlMap<long long unsigned int, WorldTraversal_t::Find(
		const KeyType_t& key);  // 648
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::Element(
		short unsigned int i);  // 92
	CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
			IndexType_t i);  // 652
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 657
} /* size: 180, variables: 3, inline expansions: 6 (44 bytes) */

// <010242B7> worldrenderer/world.cpp:672
// variables: 4
// function calls: 19
void CWorld::PrecacheAllWorldNodes(WorldNodeFlags_t nCacheFlags, ResourceManifestLoadBehavior_t nManifestLoadBehavior, bool bBlockUntilFinished)
{
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > nodeList; // 679
	int nNodes; // 680
	{
	}
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 679
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 680
	{
		int n; // 682
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 685
	}
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
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 689
	CWorld::PrecacheAllWorldNodes(
				WorldNodeFlags_t nCacheFlags,
				ResourceManifestLoadBehavior_t nManifestLoadBehavior,
				bool bBlockUntilFinished);  // 672
} /* size: 0, variables: 2, inline expansions: 13 (851 bytes) */

// <01017B3B> worldrenderer/world.cpp:672
// variables: 5
void CWorld::PrecacheAllWorldNodes(WorldNodeFlags_t nCacheFlags, ResourceManifestLoadBehavior_t nManifestLoadBehavior, bool bBlockUntilFinished)
{
	const char   __FUNCTION__; // 22039
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > nodeList; // 679
	int nNodes; // 680
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		int n; // 682
	}
} /* size: 0, variables: 3 */

// <01017A39> worldrenderer/world.cpp:691
// function call: 1
void CWorld::GetCompileFingerprint(uint64* pOutTime, uint64* pOutFingerprint)
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 693
	}
} /* size: 0 */

// <01017912> worldrenderer/world.cpp:704
// variables: 3
// function calls: 3
void CWorld::AreAllNodesCached()
{
	const char   __FUNCTION__; // 21941
	{
		int nNode; // 709
		CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 709
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 716
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 716
	CUtlVectorBase<HResourceManifest__::Count(); // 716
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <01017490> worldrenderer/world.cpp:722
// variables: 5
// function calls: 17
void CWorld::FindEntityLumpIndex(const char* pLumpName)
{
	int nLumps; // 724
	{
		int i; // 733
		{
			const CEntityLump* pEntityLump; // 735
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCEntityLump>(const CWeakHandle<InfoForResourceTypeCEntityLump>& hResource); // 735
			CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, this,
					int i);  // 735
		}
	}
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntity this); // 213
	Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoFo this); // 217
	{
		int r; // 218
		{
			HEntityLump hLump; // 220
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
					int i);  // 220
			CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCEntityLump>::GetHandle(); // 220
			CWeakHandle<InfoForResourceTypeCEntityLump>::Init(
				const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 273
			CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 221
		}
	}
	CWorld::EnsureEntityLumps(); // 211
	CWorld::EnsureEntityLumps(); // 747
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntity this); // 748
	CWorld::GetEntityLumpCount(); // 724
} /* size: 313, variables: 1, inline expansions: 6 (308 bytes) */

// <01024AA7> worldrenderer/world.cpp:745
// variables: 2
// function calls: 12
void CWorld::GetEntityLumpCount()
{
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntity this); // 213
	Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoFo this); // 217
	{
		int r; // 218
		{
			HEntityLump hLump; // 220
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
					int i);  // 220
			CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCEntityLump>::GetHandle(); // 220
			CWeakHandle<InfoForResourceTypeCEntityLump>::Init(
				const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 273
			CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 221
		}
	}
	CWorld::EnsureEntityLumps(); // 211
	CWorld::EnsureEntityLumps(); // 747
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntity this); // 748
} /* size: 0, inline expansions: 5 (0 bytes) */

// <01017477> worldrenderer/world.cpp:745
void CWorld::GetEntityLumpCount()
{
} /* size: 0 */

// <01023DA1> worldrenderer/world.cpp:752
void CWorld::LoadEntityLumpManifest(const char* pLumpName)
{
} /* size: 0 */

// <0101742C> worldrenderer/world.cpp:757
void CWorld::ReleaseEntityLumpManifest(const char* pLumpName)
{
} /* size: 0 */

// <010173B1> worldrenderer/world.cpp:762
// variable: 1
void CWorld::IsEntityManifestLoaded(const char* pEntityLumpName)
{
	int nIndex; // 764
} /* size: 21, variables: 1 */

// <01015994> worldrenderer/world.cpp:771
// variables: 15
// function calls: 98
void CWorld::GetEntityList(const char* pLumpName)
{
	int nIndex; // 790
	const CEntityLump* pLump; // 796
	{
		CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > s_defaultKeyvalues; // 777
		{
			CEntityKeyValues* pKeyValues; // 780
			CEntityKeyValuesModifyScope modifyScope; // 783
			CEntityKeyValues::AddRef(); // 782
			CEntityKeyValuesModifyScope::CEntityKeyValuesModifyScope(
							CEntityKeyValues* pKeyValues);  // 783
			{
				int i; // 93
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
				AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
					int i);  // 442
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
						int i);  // 95
			}
			CEntityKeyValues::FindKeyHash(
					CUtlStringToken key);  // 227
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 109
			{
				ElemType_t* pNew; // 168
				ElemType_t* pBase; // 169
				AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
				CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 169
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 85
				V_memcpy(void* dest,
					const void* src,
					ptrdiff_t count);  // 91
				UtlTraitsMoveRawMemoryRange<unsigned int>(unsigned int* pFrom,
										unsigned int* pFromEnd,
										unsigned int* pTo);  // 170
			}
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::EnsureCapacity(
					int nCapacity,
					bool bConservative);  // 629
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
			AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
					int i);  // 106
			{
				int* _pCrash; // 313
			}
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 313
			{
				ElemType_t* pNew; // 347
				ElemType_t* pBase; // 348
				CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
				CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 348
				Min<short int>(const short int& val1,
						const short int& val2);  // 349
			}
			CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::EnsureCapacity(
					int nCapacity,
					bool bConservative);  // 629
			CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
			CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 630
			CVariantBase<CEntityVariantAllocator>::CVariantBase(); // 53
			KeyValueInfo_t::KeyValueInfo_t(); // 1479
			Construct<CEntityKeyValues::KeyValueInfo_t>(KeyValueInfo_t* pMemory); // 63
			UtlTraitsConstructRange<CEntityKeyValues::KeyValueInfo_t>(KeyValueInfo_t* pStart,
											KeyValueInfo_t* pEnd);  // 631
			AddToTailGetPtr(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 660
			AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
			CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
			CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 438
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
					int i);  // 108
			CVariantBase<CEntityVariantAllocator>::Free(); // 600
			{
				int nLen; // 604
				CVariantBase<CEntityVariantAllocator>::Allocate(
					uint nSize);  // 605
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 75
				V_memcpy(void* dest,
					const void* src,
					int count);  // 606
			}
			CVariantBase<CEntityVariantAllocator>::CopyData(
				const char* pString,
				bool bForceCopy);  // 598
			CVariantBase<CEntityVariantAllocator>::CopyData(
				const char* pString,
				bool bForceCopy);  // 160
			CVariantBase<CEntityVariantAllocator>::operator=(
					const char* psz);  // 108
			CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
			CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 438
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
					int i);  // 109
			CEntityKeyValues::AddKeyValue<char const*>(
						CUtlStringToken key,
						const char* const& value,
						const char* pAttributeName);  // 230
			CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
			CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 438
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
					int i);  // 234
			CVariantBase<CEntityVariantAllocator>::Free(); // 600
			{
				int nLen; // 604
				CVariantBase<CEntityVariantAllocator>::Allocate(
					uint nSize);  // 605
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 75
				V_memcpy(void* dest,
					const void* src,
					int count);  // 606
			}
			CVariantBase<CEntityVariantAllocator>::CopyData(
				const char* pString,
				bool bForceCopy);  // 598
			CVariantBase<CEntityVariantAllocator>::CopyData(
				const char* pString,
				bool bForceCopy);  // 160
			CVariantBase<CEntityVariantAllocator>::operator=(
					const char* psz);  // 239
			CEntityKeyValues::SetValue(
				CUtlStringToken key,
				const char* pString);  // 784
			CUtlMemory<const CEntityKeyValues::NumAllocated(); // 1196
			CUtlMemory<const CEntityKeyValues::operator[](
					int i);  // 602
			CUtlVectorBase<const CEntityKeyValues::Element(
				int i);  // 1201
			CopyConstruct<const CEntityKeyValues*>(const CEntityKeyValues ** pMemory,
								const CEntityKeyValues* const& src);  // 1201
			CUtlMemory<const CEntityKeyValues::Base(); // 112
			CUtlVectorBase<const CEntityKeyValues::Base(); // 368
			CUtlVectorBase<const CEntityKeyValues::ResetDbgInfo(); // 824
			CUtlVectorBase<const CEntityKeyValues::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<const CEntityKeyValues::AddToTail(
					const CEntityKeyValues* const& src);  // 785
			CEntityKeyValuesModifyScope::~CEntityKeyValuesModifyScope(); // 786
		}
		CUtlVectorBase<const CEntityKeyValues::Count(); // 778
		CUtlMemory<const CEntityKeyValues::ValidateGrowSize(); // 475
		CUtlMemory<const CEntityKeyValues::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<const CEntityKeyValues::ResetDbgInfo(); // 530
		CUtlVectorBase<const CEntityKeyValues::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<const CEntityKeyValues::CUtlVector(); // 777
	}
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntity this); // 213
	Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoFo this); // 217
	{
		int r; // 218
		{
			HEntityLump hLump; // 220
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
					int i);  // 220
			CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCEntityLump>::GetHandle(); // 220
			CWeakHandle<InfoForResourceTypeCEntityLump>::Init(
				const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 273
			CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 221
		}
	}
	CWorld::EnsureEntityLumps(); // 211
	CWorld::EnsureEntityLumps(); // 773
	CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, this,
			int i);  // 796
	CWeakHandle<InfoForResourceTypeCEntityLump>::operator ResourceHandle_t(); // 796
	CInterlockedIntT<int, 4>::operator int(); // 294
	ResourceHandleToData<CEntityLump>(const ResourceBindingBase_t* hResource); // 796
} /* size: 1827, variables: 2, inline expansions: 9 (193 bytes) */

// <01014C41> worldrenderer/world.cpp:805
// variables: 5
// function calls: 51
void CWorld::FindEntitiesByClassname(const char* pClassname, const char* pLumpName, CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >& entityList)
{
	const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >* pEntities; // 807
	int nEntities; // 811
	{
		int e; // 812
		{
			const CEntityKeyValues* pEntityKV; // 814
			CUtlMemory<const CEntityKeyValues::operator[](
					int i);  // 609
			CUtlVectorBase<const CEntityKeyValues::Element(
				int i);  // 814
			{
				int i; // 93
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
				AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
					int i);  // 442
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
						int i);  // 95
			}
			CEntityKeyValues::FindKeyHash(
					CUtlStringToken key);  // 185
			CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValu this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValu this,
					int i);  // 186
			CEntityKeyValues::GetValue(
				CUtlStringToken key);  // 196
			CUtlString::CUtlString(); // 197
			CUtlMemory<char, int>::Grow(
				int num);  // 806
			CUtlVectorBase<char, CUtlMemory<char, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<char, CUtlMemory<char, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<char, CUtlMemory<char, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount(
				int count);  // 1138
			CUtlMemory<char, int>::Purge(); // 903
			CUtlMemory<char, int>::Purge(); // 1799
			CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
			ValidateAlignment<char>(void); // 508
			CUtlMemory<char, int>::Purge(); // 510
			CUtlMemory<char, int>::~CUtlMemory(); // 562
			CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
			CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 1149
			CUtlString::Clear(); // 1146
			V_strlen(const char* str); // 1136
			CUtlMemory<char, int>::ValidateGrowSize(); // 475
			CUtlMemory<char, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<char, CUtlMemory<char, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<char, CUtlMemory<char, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<char, CUtlMemory<char, int> >::CUtlVector(); // 1137
			CVariantBase<CEntityVariantAllocator>::AssignTo(
				CUtlString* pString);  // 204
			CUtlString::Get(); // 206
			CUtlString::Get(); // 99
			CUtlString::String(); // 207
			CUtlString::~CUtlString(); // 211
			CEntityKeyValues::GetValueString(
					CUtlStringToken key,
					const char* pDefaultValue);  // 815
			CUtlMemory<const CEntityKeyValues::NumAllocated(); // 1196
			CUtlMemory<const CEntityKeyValues::operator[](
					int i);  // 602
			CUtlVectorBase<const CEntityKeyValues::Element(
				int i);  // 1201
			CopyConstruct<const CEntityKeyValues*>(const CEntityKeyValues ** pMemory,
								const CEntityKeyValues* const& src);  // 1201
			CUtlMemory<const CEntityKeyValues::Base(); // 112
			CUtlVectorBase<const CEntityKeyValues::Base(); // 368
			CUtlVectorBase<const CEntityKeyValues::ResetDbgInfo(); // 824
			CUtlVectorBase<const CEntityKeyValues::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<const CEntityKeyValues::AddToTail(
					const CEntityKeyValues* const& src);  // 817
		}
	}
	CUtlVectorBase<const CEntityKeyValues::Count(); // 811
} /* size: 754, variables: 2, inline expansions: 1 (4 bytes) */

// <01014BFE> worldrenderer/world.cpp:822
bool CWorldSceneObjectRef_CompareFunc(CWorldSceneObjectRef* const& a, CWorldSceneObjectRef* const& b)
{
} /* size: 20 */

// <01014BC9> worldrenderer/world.cpp:827
unsigned int CWorldSceneObjectRef_KeyFunc(CWorldSceneObjectRef* const& a)
{
} /* size: 11 */

// <01012574> worldrenderer/world.cpp:832
// variables: 11
// function calls: 159
void CWorld::CWorld(HWorld hWorld, bool bIsEmptyWorld, bool bPrecacheOnly, ResourceManifestLoadPriority_t priority)
{
	{
		CPathBufferString worldName; // 840
		int nNodes; // 859
		{
			int n; // 865
		}
		{
			bool bBakedLightingEnabled; // 888
			bool bBakedLightingRequired; // 891
		}
	}
	{
	}
	AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<5, CWeakHandle<InfoForResourceTypeCTextureBase> >::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this); // 530
	CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this,
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 157
	{
	}
	AlignedByteArrayExplicit_t<5, CUtlStringToken, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<5, CUtlStringToken>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CUtlStringToken, 5>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 5> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 5> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CUtlStringToken, 5>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 157
	CSceneSystemBakedLightingInfo::CSceneSystemBakedLightingInfo(); // 100
	CWorldRendererBakedLightingInfo::CWorldRendererBakedLightingInfo(); // 833
	CStrongHandle<InfoForResourceTypeWorld_t>::CStrongHandle(); // 833
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 833
	CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<WorldNodeSortElement_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<WorldNodeSortElement_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::CUtlVector(); // 833
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 833
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap<long long unsigned int, WorldTraversal_t::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 833
	{
		int ndxBucket; // 116
		CUtlVectorBase<CWorldSceneObjectRef::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<CWorldSceneObjectRef::NumAllocated(); // 782
		CUtlMemory<CWorldSceneObjectRef::Base(); // 112
		CUtlVectorBase<CWorldSceneObjectRef::Base(); // 368
		CUtlVectorBase<CWorldSceneObjectRef::ResetDbgInfo(); // 824
		CUtlVectorBase<CWorldSceneObjectRef::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CWorldSceneObjectRef::GrowVector(
				int num);  // 1445
		CUtlVectorBase<CWorldSceneObjectRef::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CWorldSceneObjectRef::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CWorldSceneObjectRef::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<CWorldSceneObjectRef::SetCount(
			int count);  // 118
		CUtlMemory<CUtlVector<CWorldSceneObjectRef::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::operator[](
				int i);  // 119
		CUtlMemory<CWorldSceneObjectRef::SetGrowSize(
				int nSize);  // 318
		CUtlVectorBase<CWorldSceneObjectRef::SetGrowSize(
				int size);  // 119
		CUtlMemory<CUtlVector<CWorldSceneObjectRef::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::operator[](
				int i);  // 118
	}
	IsPowerOfTwo(int value); // 124
	CUtlMemory<CUtlVector<CWorldSceneObjectRef::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<CWorldSceneObjectRef::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<CWorldSceneObjectRef::CUtlVector(); // 112
	CUtlHash<CWorldSceneObjectRef::CUtlHash(
		int bucketCount,
		int growCount,
		int initCount,
		CompareFunc_t compareFunc,
		KeyFunc_t keyFunc);  // 833
	Vector::Vector(); // 833
	Vector::Vector(); // 833
	Vector::Vector(); // 833
	Vector::Vector(); // 833
	CUtlString::CUtlString(); // 833
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump>, DefaultHashFunctor<CUtlStringToken>, De this); // 178
	CUtlHashtable(const CUtlHashtable<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump>, DefaultHashFunctor<CUtlStringToken>, De this,
			int minimumSize);  // 833
	{
		CPathBufferString worldName; // 840
		int nNodes; // 859
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 840
		CWeakHandle<InfoForResourceTypeWorld_t>::operator ResourceHandle_t(); // 844
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 845
		CUtlString::operator=(
				const char* src);  // 845
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 846
		CUtlString::~CUtlString(); // 846
		CWeakHandle<InfoForResourceTypeWorld_t>::GetBinding(); // 673
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 570
		CStrongHandle<InfoForResourceTypeWorld_t>::Init(
			ResourceHandleTyped_t hResource);  // 673
		CStrongHandle<InfoForResourceTypeWorld_t>::operator=(
				const CWeakHandle<InfoForResourceTypeWorld_t>& src);  // 854
		CStrongHandle<InfoForResourceTypeWorld_t>::GetData(); // 855
		CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::Count(); // 1636
		{
		}
		CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::SetLessFunc(
				const LessFunc_t& func);  // 1634
		CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::SetLessFunc(
				const LessFunc_t& func);  // 201
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 201
		CUtlMap<long long unsigned int, WorldTraversal_t::SetLessFunc(
				LessFunc_t func);  // 856
		CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 859
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 863
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 864
		{
			int n; // 865
			CWeakHandle<InfoForResourceTypeCWorldNode>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 867
			CStrongHandle<InfoForResourceTypeCWorldNode>::Init(
				ResourceHandleTyped_t hResource);  // 673
			CStrongHandle<InfoForResourceTypeCWorldNode>::operator=(
					const CWeakHandle<InfoForResourceTypeCWorldNode>& src);  // 867
			CUtlMemory<NodeData_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::operator[](
					int i);  // 870
			VectorMax(const Vector& a,
					const Vector& b,
					Vector& result);  // 871
			VectorMin(const Vector& a,
					const Vector& b,
					Vector& result);  // 870
			CUtlMemory<NodeData_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::operator[](
					int i);  // 871
		}
		matrix3x4_t::SetToIdentity(); // 874
		{
			bool bBakedLightingEnabled; // 888
			bool bBakedLightingRequired; // 891
			KeyValues::GetBool(
				const char* keyName,
				bool defaultValue);  // 888
		}
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 896
		CStrongHandle<InfoForResourceTypeCWorldNode>::CStrongHandle(); // 860
		ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this); // 530
		{
		}
		AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<5, CWeakHandle<InfoForResourceTypeCTextureBase> >::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this,
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 157
		{
		}
		AlignedByteArrayExplicit_t<5, CUtlStringToken, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<5, CUtlStringToken>::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<CUtlStringToken, 5>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 5> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 5> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<CUtlStringToken, 5>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 157
		CSceneSystemBakedLightingInfo::CSceneSystemBakedLightingInfo(); // 100
		CWorldRendererBakedLightingInfo::CWorldRendererBakedLightingInfo(); // 124
		CUtlMemory<signed char, int>::ValidateGrowSize(); // 475
		CUtlMemory<signed char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<signed char, CUtlMemory<signed char, int> >::CUtlVector(); // 124
		CUtlMemory<signed char, int>::ValidateGrowSize(); // 475
		CUtlMemory<signed char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<signed char, CUtlMemory<signed char, int> >::CUtlVector(); // 124
		CUtlMemory<CWorldSceneObjectRef::ValidateGrowSize(); // 475
		CUtlMemory<CWorldSceneObjectRef::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CWorldSceneObjectRef::ResetDbgInfo(); // 530
		CUtlVectorBase<CWorldSceneObjectRef::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CWorldSceneObjectRef::CUtlVector(); // 124
		CUtlMemory<VertexBufferHandle_t__::ValidateGrowSize(); // 475
		CUtlMemory<VertexBufferHandle_t__::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<VertexBufferHandle_t__::ResetDbgInfo(); // 530
		CUtlVectorBase<VertexBufferHandle_t__::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<VertexBufferHandle_t__::CUtlVector(); // 124
		CNodeSceneObjectData::CNodeSceneObjectData(); // 861
		CUtlString::operator=(
				const char* src);  // 850
	}
	CUtlMemory<HResourceManifest__::ValidateGrowSize(); // 475
	CUtlMemory<HResourceManifest__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HResourceManifest__::ResetDbgInfo(); // 530
	CUtlVectorBase<HResourceManifest__::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HResourceManifest__::CUtlVector(); // 833
	CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, this); // 530
	CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int this); // 833
} /* size: 0, inline expansions: 63 (1410 bytes) */

// <010124DD> worldrenderer/world.cpp:832
// variables: 5
void CWorld::CWorld(HWorld hWorld, bool bIsEmptyWorld, bool bPrecacheOnly, ResourceManifestLoadPriority_t priority)
{
	{
		CPathBufferString worldName; // 840
		int nNodes; // 859
		{
			int n; // 865
		}
		{
			bool bBakedLightingEnabled; // 888
			bool bBakedLightingRequired; // 891
		}
	}
} /* size: 0 */

// <0100F661> worldrenderer/world.cpp:898
// variables: 9
// function calls: 232
void CWorld::~CWorld()
{
	{
		{
		}
		{
			short unsigned int trav; // 910
		}
	}
	{
		{
			int nNodes; // 944
			CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 944
			{
				int n; // 945
			}
		}
		CWorld::UncacheAllWorldNodes(); // 901
		CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::Count(); // 178
		{
			int ndxBucket; // 179
			CUtlMemory<CUtlVector<CWorldSceneObjectRef::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::operator[](
					int i);  // 181
			CUtlVectorBase<CWorldSceneObjectRef::Count(); // 181
		}
		CUtlHash<CWorldSceneObjectRef::Count()(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigne this); // 904
		{
		}
		CStrongHandle<InfoForResourceTypeCWorldNode>::~CStrongHandle(); // 906
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 5> >::Purge(); // 560
		ValidateAlignment<CUtlStringToken>(void); // 258
		CUtlMemoryFixed<CUtlStringToken, 5>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 5> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<CUtlStringToken, 5>::~CUtlVectorFixed(); // 157
		Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this); // 560
		ValidateAlignment<CWeakHandle<InfoForResourceTypeCTextureBase> >(void); // 258
		CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5>::~CUtlMemoryFixed(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this); // 461
		CUtlVectorFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5>::~CUtlVectorFixed(); // 157
		CSceneSystemBakedLightingInfo::~CSceneSystemBakedLightingInfo(); // 110
		CWorldRendererBakedLightingInfo::~CWorldRendererBakedLightingInfo(); // 120
		CUtlVectorBase<VertexBufferHandle_t__::RemoveAll(); // 1798
		CUtlMemory<VertexBufferHandle_t__::IsExternallyAllocated(); // 905
		CUtlMemory<VertexBufferHandle_t__::Purge(); // 903
		CUtlMemory<VertexBufferHandle_t__::Purge(); // 1799
		CUtlMemory<VertexBufferHandle_t__::Base(); // 112
		CUtlVectorBase<VertexBufferHandle_t__::Base(); // 368
		CUtlVectorBase<VertexBufferHandle_t__::ResetDbgInfo(); // 1800
		CUtlVectorBase<VertexBufferHandle_t__::Purge(); // 560
		CUtlMemory<VertexBufferHandle_t__::IsExternallyAllocated(); // 905
		CUtlMemory<VertexBufferHandle_t__::Purge(); // 903
		CUtlMemory<VertexBufferHandle_t__::Purge(); // 510
		ValidateAlignment<VertexBufferHandle_t__*>(void); // 508
		CUtlMemory<VertexBufferHandle_t__::~CUtlMemory(); // 562
		CUtlVectorBase<VertexBufferHandle_t__::~CUtlVectorBase(); // 410
		CUtlVector<VertexBufferHandle_t__::~CUtlVector(); // 120
		CUtlVectorBase<CWorldSceneObjectRef::RemoveAll(); // 1798
		CUtlMemory<CWorldSceneObjectRef::IsExternallyAllocated(); // 905
		CUtlMemory<CWorldSceneObjectRef::Purge(); // 903
		CUtlMemory<CWorldSceneObjectRef::Purge(); // 1799
		CUtlMemory<CWorldSceneObjectRef::Base(); // 112
		CUtlVectorBase<CWorldSceneObjectRef::Base(); // 368
		CUtlVectorBase<CWorldSceneObjectRef::ResetDbgInfo(); // 1800
		CUtlVectorBase<CWorldSceneObjectRef::Purge(); // 560
		CUtlMemory<CWorldSceneObjectRef::IsExternallyAllocated(); // 905
		CUtlMemory<CWorldSceneObjectRef::Purge(); // 903
		CUtlMemory<CWorldSceneObjectRef::Purge(); // 510
		ValidateAlignment<CWorldSceneObjectRef*>(void); // 508
		CUtlMemory<CWorldSceneObjectRef::~CUtlMemory(); // 562
		CUtlVectorBase<CWorldSceneObjectRef::~CUtlVectorBase(); // 410
		CUtlVector<CWorldSceneObjectRef::~CUtlVector(); // 120
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::RemoveAll(); // 1798
		CUtlMemory<signed char, int>::Purge(); // 903
		CUtlMemory<signed char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<signed char, int>::Purge(); // 1799
		CUtlMemory<signed char, int>::Base(); // 112
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::Base(); // 368
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::Purge(); // 560
		CUtlMemory<signed char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<signed char, int>::Purge(); // 903
		CUtlMemory<signed char, int>::Purge(); // 510
		ValidateAlignment<signed char>(void); // 508
		CUtlMemory<signed char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<signed char, CUtlMemory<signed char, int> >::~CUtlVector(); // 120
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::RemoveAll(); // 1798
		CUtlMemory<signed char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<signed char, int>::Purge(); // 903
		CUtlMemory<signed char, int>::Purge(); // 1799
		CUtlMemory<signed char, int>::Base(); // 112
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::Base(); // 368
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::Purge(); // 560
		CUtlMemory<signed char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<signed char, int>::Purge(); // 903
		CUtlMemory<signed char, int>::Purge(); // 510
		ValidateAlignment<signed char>(void); // 508
		CUtlMemory<signed char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<signed char, CUtlMemory<signed char, int> >::~CUtlVector(); // 120
		CNodeSceneObjectData::~CNodeSceneObjectData(); // 907
		{
			short unsigned int trav; // 910
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
					short unsigned int i);  // 611
			CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::LeftChild(
					short unsigned int i);  // 1329
			CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::FirstInorder(); // 351
			CUtlMap<long long unsigned int, WorldTraversal_t::FirstInorder()(long long unsigned int const& this); // 910
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::Element(
				short unsigned int i);  // 92
			CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
					IndexType_t i);  // 912
			CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
			CUtlMemory<int, int>::IsExternallyAllocated(); // 905
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 36
			CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
			CUtlMemory<int, int>::IsExternallyAllocated(); // 905
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 36
			CUtlVectorBase<CWorldNode::RemoveAll(); // 1798
			CUtlMemory<CWorldNode::IsExternallyAllocated(); // 905
			CUtlMemory<CWorldNode::Purge(); // 903
			CUtlMemory<CWorldNode::Purge(); // 1799
			CUtlVectorBase<CWorldNode::Purge(); // 560
			ValidateAlignment<CWorldNode*>(void); // 508
			CUtlMemory<CWorldNode::Purge(); // 510
			CUtlMemory<CWorldNode::~CUtlMemory(); // 562
			CUtlVectorBase<CWorldNode::~CUtlVectorBase(); // 410
			CUtlVector<CWorldNode::~CUtlVector(); // 36
			WorldTraversal_t::~WorldTraversal_t(); // 912
			CUtlMap<long long unsigned int, WorldTraversal_t::NextInorder(
					IndexType_t i);  // 910
			InvalidIndex(void); // 910
		}
		{
			entry_t* table; // 896
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, int>::Base(); // 896
			{
				int i; // 897
				CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, int>::Count(); // 897
				CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >::IsValid(); // 899
				CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >::MarkInvalid(); // 901
				Destruct<CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > >(CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >* pMemory); // 902
			}
		}
		RemoveAll(const CUtlHashtable<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump>, DefaultHashFunctor<CUtlStringToken>, De this); // 188
		ValidateAlignment<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > >(void); // 508
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, int>::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, int>::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, int>::~CUtlMemory(); // 188
		~CUtlHashtable(const CUtlHashtable<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump>, DefaultHashFunctor<CUtlStringToken>, De this); // 914
		RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, this); // 1798
		CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::Purge(); // 903
		CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, this); // 560
		ValidateAlignment<CWeakHandle<InfoForResourceTypeCEntityLump> >(void); // 508
		CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::Purge(); // 510
		CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, this); // 410
		~CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int this); // 914
		CUtlVectorBase<HResourceManifest__::RemoveAll(); // 1798
		CUtlMemory<HResourceManifest__::IsExternallyAllocated(); // 905
		CUtlMemory<HResourceManifest__::Purge(); // 903
		CUtlMemory<HResourceManifest__::Purge(); // 1799
		CUtlVectorBase<HResourceManifest__::Purge(); // 560
		ValidateAlignment<HResourceManifest__*>(void); // 508
		CUtlMemory<HResourceManifest__::Purge(); // 510
		CUtlMemory<HResourceManifest__::~CUtlMemory(); // 562
		CUtlVectorBase<HResourceManifest__::~CUtlVectorBase(); // 410
		CUtlVector<HResourceManifest__::~CUtlVector(); // 914
		CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::Count(); // 226
		{
			int ndxBucket; // 227
			CUtlMemory<CUtlVector<CWorldSceneObjectRef::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::operator[](
					int i);  // 229
			CUtlVectorBase<CWorldSceneObjectRef::RemoveAll(); // 1798
			CUtlMemory<CWorldSceneObjectRef::IsExternallyAllocated(); // 905
			CUtlMemory<CWorldSceneObjectRef::Purge(); // 903
			CUtlMemory<CWorldSceneObjectRef::Purge(); // 1799
			CUtlVectorBase<CWorldSceneObjectRef::ResetDbgInfo(); // 1800
			CUtlVectorBase<CWorldSceneObjectRef::Purge(); // 229
		}
		CUtlHash<CWorldSceneObjectRef::Purge()(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int this); // 134
		{
			int i; // 1721
			CUtlMemory<CUtlVector<CWorldSceneObjectRef::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::Element(
				int i);  // 1723
			CUtlVectorBase<CWorldSceneObjectRef::RemoveAll(); // 1798
			CUtlMemory<CWorldSceneObjectRef::IsExternallyAllocated(); // 905
			CUtlMemory<CWorldSceneObjectRef::Purge(); // 903
			CUtlMemory<CWorldSceneObjectRef::Purge(); // 1799
			CUtlVectorBase<CWorldSceneObjectRef::Purge(); // 560
			ValidateAlignment<CWorldSceneObjectRef*>(void); // 508
			CUtlMemory<CWorldSceneObjectRef::Purge(); // 510
			CUtlMemory<CWorldSceneObjectRef::~CUtlMemory(); // 562
			CUtlVectorBase<CWorldSceneObjectRef::~CUtlVectorBase(); // 410
			CUtlVector<CWorldSceneObjectRef::~CUtlVector(); // 1526
			Destruct<CUtlVector<CWorldSceneObjectRef*> >(CUtlVector<CWorldSceneObjectRef*, CUtlMemory<CWorldSceneObjectRef*, int> >* pMemory); // 1723
		}
		CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::RemoveAll(); // 1798
		CUtlMemory<CUtlVector<CWorldSceneObjectRef::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlVector<CWorldSceneObjectRef::Purge(); // 903
		CUtlMemory<CUtlVector<CWorldSceneObjectRef::Purge(); // 1799
		CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::Purge(); // 560
		ValidateAlignment<CUtlVector<CWorldSceneObjectRef*> >(void); // 508
		CUtlMemory<CUtlVector<CWorldSceneObjectRef::Purge(); // 510
		CUtlMemory<CUtlVector<CWorldSceneObjectRef::~CUtlMemory(); // 562
		CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::~CUtlVectorBase(); // 410
		CUtlVector<CUtlVector<CWorldSceneObjectRef::~CUtlVector(); // 135
		CUtlHash<CWorldSceneObjectRef::~CUtlHash()(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int this); // 914
		CUtlString::~CUtlString(); // 914
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::IsExternallyAllocated(); // 905
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::Purge(); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::InvalidIterator(); // 1288
		CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::Purge(); // 509
		ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t*>::Node_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::~CUtlMemory(); // 510
		CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::~CUtlRBTree(); // 47
		CUtlMap<long long unsigned int, WorldTraversal_t::~CUtlMap()(long long unsigned int const&, long this); // 914
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 5> >::Purge(); // 560
		ValidateAlignment<CUtlStringToken>(void); // 258
		CUtlMemoryFixed<CUtlStringToken, 5>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 5> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<CUtlStringToken, 5>::~CUtlVectorFixed(); // 157
		Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this); // 560
		ValidateAlignment<CWeakHandle<InfoForResourceTypeCTextureBase> >(void); // 258
		CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5>::~CUtlMemoryFixed(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextur this); // 461
		CUtlVectorFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5>::~CUtlVectorFixed(); // 157
		CSceneSystemBakedLightingInfo::~CSceneSystemBakedLightingInfo(); // 110
		CWorldRendererBakedLightingInfo::~CWorldRendererBakedLightingInfo(); // 914
		CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::RemoveAll(); // 1798
		CUtlMemory<WorldNodeSortElement_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<WorldNodeSortElement_t, int>::Purge(); // 903
		CUtlMemory<WorldNodeSortElement_t, int>::Purge(); // 1799
		CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::Purge(); // 560
		ValidateAlignment<WorldNodeSortElement_t>(void); // 508
		CUtlMemory<WorldNodeSortElement_t, int>::Purge(); // 510
		CUtlMemory<WorldNodeSortElement_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> >::~CUtlVector(); // 914
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 914
		CStrongHandle<InfoForResourceTypeWorld_t>::~CStrongHandle(); // 914
	}
} /* size: 0 */

// <0100F610> worldrenderer/world.cpp:898
// variables: 3
void CWorld::~CWorld()
{
	const char   __FUNCTION__; // 21676
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 904
	}
	{
		short unsigned int trav; // 910
	}
} /* size: 0, variables: 1 */

// <0100F535> worldrenderer/world.cpp:916
// function calls: 3
void CWorld::ForceBlockingLoad()
{
	CUtlVectorBase<HResourceManifest__::Count(); // 919
	CUtlMemory<HResourceManifest__::operator[](
			int i);  // 588
	CUtlVectorBase<HResourceManifest__::operator[](
			int i);  // 921
} /* size: 97, inline expansions: 3 (0 bytes) */

// <0100F356> worldrenderer/world.cpp:925
// variables: 3
// function calls: 4
void CWorld::GetNode(int n)
{
	const char   __FUNCTION__; // 21676
	CWorldNode* pWorldNode; // 936
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 927
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 930
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 930
	CStrongHandle<InfoForResourceTypeCWorldNode>::IsLoaded(); // 933
	CStrongHandle<InfoForResourceTypeCWorldNode>::GetData(); // 936
} /* size: 0, variables: 2, inline expansions: 3 (42 bytes) */

// <01024223> worldrenderer/world.cpp:940
// variables: 2
// function call: 1
void CWorld::UncacheAllWorldNodes()
{
	{
		int nNodes; // 944
		CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 944
		{
			int n; // 945
		}
	}
} /* size: 81 */

// <0100F307> worldrenderer/world.cpp:940
// variables: 2
void CWorld::UncacheAllWorldNodes()
{
	{
		int nNodes; // 944
		{
			int n; // 945
		}
	}
} /* size: 0 */

// <0100F185> worldrenderer/world.cpp:952
// variable: 1
// function calls: 5
void CWorld::FindTraversal(WorldTraversalId_t nTraversalID)
{
	uint16 nIndex; // 954
	CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::FindAltKeyType<long long unsigned int>(
						const long long unsigned int& search);  // 243
	CUtlMap<long long unsigned int, WorldTraversal_t::Find(
		const KeyType_t& key);  // 954
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::Element(
		short unsigned int i);  // 92
	CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
			IndexType_t i);  // 960
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0100E76A> worldrenderer/world.cpp:963
// variables: 4
// function calls: 36
void CWorld::FindOrCreateTraversal(WorldTraversalId_t nTraversalID)
{
	uint16 nIndex; // 965
	{
		WorldTraversal_t* pTraversal; // 968
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 969
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::LeftChild(
				short unsigned int i);  // 1667
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::Element(
			short unsigned int i);  // 1665
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1665
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1669
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
				short unsigned int i);  // 617
		CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::RightChild(
				short unsigned int i);  // 1677
		CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::FindInsertionPosition(
					const Node_t& insert,
					bool bCheckForDuplicates,
					short unsigned int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		{
			short unsigned int newNode; // 1709
			{
			}
		}
		{
			short unsigned int newNode; // 1696
		}
		CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::Insert(
			const Node_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 207
		Node_t::Node_t(
			const KeyType_t& k,
			const ElemType_t& e);  // 207
		CUtlMap<long long unsigned int, WorldTraversal_t::Insert(
			const KeyType_t& key,
			const ElemType_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 971
		Vector::Vector(); // 36
		CUtlMemory<CWorldNode::ValidateGrowSize(); // 475
		CUtlMemory<CWorldNode::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CWorldNode::ResetDbgInfo(); // 530
		CUtlVectorBase<CWorldNode::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CWorldNode::CUtlVector(); // 36
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 36
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 36
		WorldTraversal_t::WorldTraversal_t(); // 968
	}
	CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::FindAltKeyType<long long unsigned int>(
						const long long unsigned int& search);  // 243
	CUtlMap<long long unsigned int, WorldTraversal_t::Find(
		const KeyType_t& key);  // 965
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<long long unsigned int, WorldTraversal_t::Element(
		short unsigned int i);  // 92
	CUtlMap<long long unsigned int, WorldTraversal_t::operator[](
			IndexType_t i);  // 974
} /* size: 0, variables: 1, inline expansions: 5 (44 bytes) */

// <0100E220> worldrenderer/world.cpp:977
// variables: 8
// function calls: 13
void CWorld::BuildLoadList(WorldTraversal_t* pTraversal, int nNode, float flElapsedTime)
{
	const NodeData_t* pNodeData; // 981
	AABB_t Bounds; // 982
	float flMinCameraDist; // 983
	float flCameraDist; // 986
	bool bLoadThis; // 987
	{
		int nChildren; // 999
		{
			int c; // 1000
			{
				BuildListAction_t ra; // 1002
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1002
			}
		}
	}
	AABB_t::GetMinAxialDistanceToPoint(
					const Vector& vPoint);  // 986
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 994
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
			const int& src);  // 1026
} /* size: 560, variables: 5, inline expansions: 11 (265 bytes) */

// <0100DA33> worldrenderer/world.cpp:1037
// variables: 12
// function calls: 24
void CWorld::BuildRenderList_Internal(WorldTraversal_t* pTraversal, int nNode, float flElapsedTime, int& nAccumFlags)
{
	const NodeData_t* pNodeData; // 1042
	AABB_t Bounds; // 1043
	float flMinCameraDist; // 1044
	float flCameraDist; // 1047
	bool bRenderThis; // 1048
	int nChildren; // 1054
	const char   __FUNCTION__; // 22110
	{
		int nCurrentNodeCount; // 1060
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1061
		}
		{
			int c; // 1063
			{
				BuildListAction_t ra; // 1065
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1065
			}
		}
		CUtlVectorBase<CWorldNode::Count(); // 1060
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1061
	}
	{
		CWorldNode* pNode; // 1089
		CUtlMemory<CWorldNode::NumAllocated(); // 1247
		CUtlMemory<CWorldNode::operator[](
				int i);  // 602
		CUtlVectorBase<CWorldNode::Element(
			int i);  // 1252
		Construct<CWorldNode*, CWorldNode*>(CWorldNode** pMemory); // 1252
		CUtlMemory<CWorldNode::Base(); // 112
		CUtlVectorBase<CWorldNode::Base(); // 368
		CUtlVectorBase<CWorldNode::ResetDbgInfo(); // 824
		CUtlVectorBase<CWorldNode::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CWorldNode::AddToTail(
				CWorldNode *& src);  // 1099
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
				const int& src);  // 1100
	}
	AABB_t::GetMinAxialDistanceToPoint(
					const Vector& vPoint);  // 1047
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1054
} /* size: 0, variables: 7, inline expansions: 2 (136 bytes) */

// <0100D88C> worldrenderer/world.cpp:1113
// variables: 4
// function calls: 3
void CWorld::NodeCanRender(int nNode)
{
	EWorldNodeStatusFlags_t nStatus; // 1115
	{
		CNodeSceneObjectData* pNodeData; // 1121
		int nObjects; // 1122
		{
			int i; // 1123
			CUtlMemory<CWorldSceneObjectRef::operator[](
					int i);  // 588
			CUtlVectorBase<CWorldSceneObjectRef::operator[](
					int i);  // 1125
		}
		CUtlVectorBase<CWorldSceneObjectRef::Count(); // 1122
	}
} /* size: 228, variables: 1 */

// <0100D781> worldrenderer/world.cpp:1137
// variables: 3
// function call: 1
void CWorld::GetNodeStatus(int nNode)
{
	const char   __FUNCTION__; // 21833
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1139
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1140
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 1140
} /* size: 0, variables: 1, inline expansions: 1 (4 bytes) */

// <0100D661> worldrenderer/world.cpp:1145
// variables: 3
// function call: 1
void CWorld::SetNodeStatus(int nNode, EWorldNodeStatusFlags_t nStatus)
{
	const char   __FUNCTION__; // 21833
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1147
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1148
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 1148
} /* size: 0, variables: 1, inline expansions: 1 (4 bytes) */

// <0100D541> worldrenderer/world.cpp:1153
// variables: 3
// function call: 1
void CWorld::ChangeNodeStatus(int nNode, EWorldNodeStatusFlags_t nStatus)
{
	const char   __FUNCTION__; // 21914
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1155
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1156
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 1156
} /* size: 0, variables: 1, inline expansions: 1 (4 bytes) */

// <0100CEE2> worldrenderer/world.cpp:1161
// variables: 7
// function calls: 18
void CWorld::FixupNodeData(int nNode)
{
	const char   __FUNCTION__; // 21833
	const char* pWorldNodePrefix; // 1166
	CResourceName worldNodeName; // 1167
	CWorldNode* pWorldNode; // 1171
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1163
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1164
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1172
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 1164
	CUtlMemory<NodeData_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::operator[](
			int i);  // 1166
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1166
	CWeakHandle<InfoForResourceTypeCWorldNode>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 703
	CWeakHandle<InfoForResourceTypeCWorldNode>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 705
	IResourceSystem::FindOrRegisterResourceByName<431366240118>(
							const CResourceName& resourceName,
							bool bWarnIfNotLoaded);  // 1169
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCWorldNode>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCWorldNode>::operator=(
			const CWeakHandle<InfoForResourceTypeCWorldNode>& src);  // 1169
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1179
} /* size: 0, variables: 4, inline expansions: 18 (399 bytes) */

// <01023E6E> worldrenderer/world.cpp:1181
// variables: 3
// function calls: 14
void CWorld::IsNodeCached(int nNode)
{
	const char* pWorldNodePrefix; // 1186
	CResourceName worldNodeName; // 1187
	ResourceHandle_t hWorldNode; // 1189
	CUtlMemory<NodeData_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::operator[](
			int i);  // 1186
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1186
	CWeakHandle<InfoForResourceTypeCWorldNode>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 705
	CWeakHandle<InfoForResourceTypeCWorldNode>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 703
	IResourceSystem::FindOrRegisterResourceByName<431366240118>(
							const CResourceName& resourceName,
							bool bWarnIfNotLoaded);  // 1189
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1195
	CWorld::IsNodeCached(
			int nNode);  // 1181
} /* size: 0, variables: 3, inline expansions: 14 (379 bytes) */

// <0100CE95> worldrenderer/world.cpp:1181
// variables: 3
void CWorld::IsNodeCached(int nNode)
{
	const char* pWorldNodePrefix; // 1186
	CResourceName worldNodeName; // 1187
	ResourceHandle_t hWorldNode; // 1189
} /* size: 0, variables: 3 */

// <0100CD77> worldrenderer/world.cpp:1197
// variables: 3
// function call: 1
void CWorld::IsNodeRenderable(int nNode)
{
	const char   __FUNCTION__; // 21914
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1199
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 1200
} /* size: 0, variables: 1, inline expansions: 1 (4 bytes) */

// <0100C5C6> worldrenderer/world.cpp:1205
// variables: 5
// function calls: 27
void CWorld::AddNodeToCacheList(int nNode, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& nodeList)
{
	const char   __FUNCTION__; // 21968
	const char* pWorldNodePrefix; // 1216
	CPathBufferString worldNodeName; // 1217
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1207
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1208
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 1208
	CUtlMemory<NodeData_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::operator[](
			int i);  // 1216
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1216
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 1217
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1220
	CUtlString::CUtlString(
			const char* pString);  // 1220
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1252
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1514
	Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			CUtlString& src);  // 1220
	CUtlString::~CUtlString(); // 1220
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1223
} /* size: 0, variables: 3, inline expansions: 27 (600 bytes) */

// <0100C541> worldrenderer/world.cpp:1225
// variable: 1
void OnWorldNodesLoadedCallback(HResourceManifest hManifest, void* pContext)
{
	CWorld* pWorld; // 1227
} /* size: 18, variables: 1 */

// <0100C4C6> worldrenderer/world.cpp:1231
// variable: 1
void OnWorldNodesLoadedCallbackDoNotDeleteManifest(HResourceManifest hManifest, void* pContext)
{
	CWorld* pWorld; // 1233
} /* size: 14, variables: 1 */

// <0100BF3C> worldrenderer/world.cpp:1238
// variables: 4
// function calls: 17
void CWorld::CacheNodes(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& nodeList, ResourceManifestLoadBehavior_t nManifestLoadBehavior, bool bBlockUntilManifestLoaded)
{
	int nNodes; // 1240
	const char ** ppNodeNames; // 1244
	HResourceManifest hManifest; // 1253
	{
		int n; // 1245
		CUtlString::Get(); // 1247
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1240
	ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
					int nCount,
					const char ** ppResourceFiles,
					ResourceManifestLoadBehavior_t nLoadBehavior,
					const char* pDebugName,
					ResourceManifestLoadPriority_t nPriority);  // 777
	IResourceSystem::CreateResourceManifest(
				int nCount,
				const char ** ppResourceFiles,
				ResourceManifestLoadBehavior_t nLoadBehavior,
				const char* pDebugName,
				ResourceManifestLoadPriority_t nPriority);  // 1253
	CUtlMemory<HResourceManifest__::NumAllocated(); // 1196
	CUtlMemory<HResourceManifest__::Base(); // 112
	CUtlVectorBase<HResourceManifest__::Base(); // 368
	CUtlVectorBase<HResourceManifest__::ResetDbgInfo(); // 824
	CUtlMemory<HResourceManifest__::IsGrowable(); // 823
	CUtlMemory<HResourceManifest__::IsExternallyAllocated(); // 859
	CUtlMemory<HResourceManifest__::IsExternallyAllocated(); // 861
	CUtlMemory<HResourceManifest__::Grow(
		int num);  // 806
	CUtlVectorBase<HResourceManifest__::GrowMemory(
			int num);  // 1198
	CUtlMemory<HResourceManifest__::operator[](
			int i);  // 602
	CUtlVectorBase<HResourceManifest__::Element(
		int i);  // 1201
	CopyConstruct<HResourceManifest__*>(HResourceManifest__** pMemory,
						HResourceManifest__* const& src);  // 1201
	CUtlVectorBase<HResourceManifest__::AddToTail(
			HResourceManifest__* const& src);  // 1265
} /* size: 704, variables: 3, inline expansions: 16 (940 bytes) */

// <0100B8CC> worldrenderer/world.cpp:1270
// variables: 8
// function calls: 24
void CWorld::OnWorldNodesLoaded(HResourceManifest hManifest)
{
	int nToLoad; // 1273
	const char   __FUNCTION__; // 21968
	{
		int n; // 1274
		{
			int nNodeID; // 1276
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1276
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1114
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<int, CUtlMemory<int, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<int, CUtlMemory<int, int> >::Remove(
				int elem);  // 1281
		}
	}
	{
		bool bFound; // 1298
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1300
		}
		{
			int i; // 1531
			CUtlVectorBase<HResourceManifest__::Count(); // 1531
			CUtlMemory<HResourceManifest__::operator[](
					int i);  // 609
			CUtlVectorBase<HResourceManifest__::Element(
				int i);  // 1533
		}
		CUtlVectorBase<HResourceManifest__::Find(
			HResourceManifest__* const& src);  // 1629
		CUtlMemory<HResourceManifest__::operator[](
				int i);  // 602
		CUtlVectorBase<HResourceManifest__::Element(
			int i);  // 1575
		Destruct<HResourceManifest__*>(HResourceManifest__** pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<HResourceManifest__::operator[](
					int i);  // 602
			CUtlVectorBase<HResourceManifest__::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlVectorBase<HResourceManifest__::FastRemove(
				int elem);  // 1632
		CUtlVectorBase<HResourceManifest__::FindAndFastRemove(
					HResourceManifest__* const& src);  // 1298
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1273
} /* size: 0, variables: 2, inline expansions: 1 (15 bytes) */

// <0100B526> worldrenderer/world.cpp:1305
// variables: 5
// function calls: 10
void CWorld::UncacheNode(int nNode)
{
	const char   __FUNCTION__; // 21784
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1307
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1308
	}
	{
		CWorldNode* pWorldNode; // 1313
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1314
		}
		CWeakHandle<InfoForResourceTypeCWorldNode>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1321
		CStrongHandle<InfoForResourceTypeCWorldNode>::Init(
			ResourceHandleTyped_t hResource);  // 673
		CStrongHandle<InfoForResourceTypeCWorldNode>::operator=(
				const CWeakHandle<InfoForResourceTypeCWorldNode>& src);  // 1321
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Count(); // 1308
	CWeakHandle<InfoForResourceTypeCWorldNode>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1311
	CStrongHandle<InfoForResourceTypeCWorldNode>::operator!=(
			const CWeakHandle<InfoForResourceTypeCWorldNode>& hResource);  // 1311
} /* size: 0, variables: 1, inline expansions: 5 (8 bytes) */

// <0100B458> worldrenderer/world.cpp:1327
// function calls: 2
void CWorld::GetVisibleBounds(Vector& vBoundsMin, Vector& vBoundsMax)
{
	Vector::operator=(
			const Vector& vOther);  // 1329
	Vector::operator=(
			const Vector& vOther);  // 1330
} /* size: 94, inline expansions: 2 (76 bytes) */

// <0100B308> worldrenderer/world.cpp:1334
// function calls: 2
void CWorld::GetWorldBounds(Vector& vBoundsMin, Vector& vBoundsMax)
{
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1342
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1343
} /* size: 133, inline expansions: 2 (34 bytes) */

// <0100AC25> worldrenderer/world.cpp:1352
// variables: 3
// function calls: 24
void CWorld::FindObjectRef(uint32 nObjectId)
{
	CWorldSceneObjectRef test; // 1357
	UtlHashHandle_t nHandle; // 1359
	{
		int bucketCount; // 249
		CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::Count(); // 249
	}
	CUtlMemory<CUtlVector<CWorldSceneObjectRef::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::operator[](
			int i);  // 254
	CUtlVectorBase<CWorldSceneObjectRef::Count(); // 255
	CUtlMemory<CWorldSceneObjectRef::operator[](
			int i);  // 609
	CUtlVectorBase<CWorldSceneObjectRef::Element(
		int i);  // 258
	CUtlHash<CWorldSceneObjectRef::DoFind(
		CWorldSceneObjectRef* const& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	CUtlHash<CWorldSceneObjectRef::BuildHandle(
			int ndxBucket,
			int ndxKeyData);  // 280
	CUtlHash<CWorldSceneObjectRef::Find(
		CWorldSceneObjectRef* const& src);  // 1359
	CUtlHash<CWorldSceneObjectRef::GetBucketIndex(
			UtlHashHandle_t handle);  // 403
	CUtlMemory<CUtlVector<CWorldSceneObjectRef::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::operator[](
			int i);  // 406
	CUtlMemory<CWorldSceneObjectRef::operator[](
			int i);  // 602
	CUtlVectorBase<CWorldSceneObjectRef::Element(
		int i);  // 406
	CUtlHash<CWorldSceneObjectRef::operator[](
			UtlHashHandle_t handle);  // 1366
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 1366
	CUtlMemory<CUtlVector<CWorldSceneObjectRef::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::operator[](
			int i);  // 406
	CUtlMemory<CWorldSceneObjectRef::operator[](
			int i);  // 602
	CUtlVectorBase<CWorldSceneObjectRef::Element(
		int i);  // 406
	CUtlHash<CWorldSceneObjectRef::operator[](
			UtlHashHandle_t handle);  // 1367
} /* size: 0, variables: 2, inline expansions: 23 (876 bytes) */

// <0100A5AF> worldrenderer/world.cpp:1372
// variables: 2
// function calls: 21
void CWorld::InsertObjectRef(uint32 nObjectId, CSceneObject* pSceneObject)
{
	CWorldSceneObjectRef* pNew; // 1374
	{
		int bucketCount; // 249
		CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::Count(); // 249
	}
	CUtlMemory<CUtlVector<CWorldSceneObjectRef::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::operator[](
			int i);  // 254
	CUtlVectorBase<CWorldSceneObjectRef::Count(); // 255
	CUtlMemory<CWorldSceneObjectRef::operator[](
			int i);  // 609
	CUtlVectorBase<CWorldSceneObjectRef::Element(
		int i);  // 258
	CUtlHash<CWorldSceneObjectRef::DoFind(
		CWorldSceneObjectRef* const& src,
		unsigned int* pBucket,
		int* pIndex);  // 294
	{
	}
	{
	}
	CUtlHash<CWorldSceneObjectRef::BuildHandle(
			int ndxBucket,
			int ndxKeyData);  // 296
	CUtlMemory<CUtlVector<CWorldSceneObjectRef::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::operator[](
			int i);  // 299
	CUtlMemory<CWorldSceneObjectRef::NumAllocated(); // 1196
	CUtlMemory<CWorldSceneObjectRef::operator[](
			int i);  // 602
	CUtlVectorBase<CWorldSceneObjectRef::Element(
		int i);  // 1201
	CopyConstruct<CWorldSceneObjectRef*>(CWorldSceneObjectRef** pMemory,
						CWorldSceneObjectRef* const& src);  // 1201
	CUtlMemory<CWorldSceneObjectRef::Base(); // 112
	CUtlVectorBase<CWorldSceneObjectRef::Base(); // 368
	CUtlVectorBase<CWorldSceneObjectRef::ResetDbgInfo(); // 824
	CUtlVectorBase<CWorldSceneObjectRef::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CWorldSceneObjectRef::AddToTail(
			CWorldSceneObjectRef* const& src);  // 299
	{
	}
	{
	}
	CUtlHash<CWorldSceneObjectRef::BuildHandle(
			int ndxBucket,
			int ndxKeyData);  // 301
	CUtlHash<CWorldSceneObjectRef::Insert(
		CWorldSceneObjectRef* const& src);  // 1379
} /* size: 0, variables: 1, inline expansions: 20 (976 bytes) */

// <01009B9D> worldrenderer/world.cpp:1386
// variables: 7
// function calls: 38
void CWorld::ReleaseSceneObjectRef(CWorldSceneObjectRef* pObjectRef)
{
	const char   __FUNCTION__; // 22039
	{
		int nRef; // 1390
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1392
		}
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 1390
	}
	{
		int nRef; // 1396
		{
			UtlHashHandle_t nHandle; // 1399
			{
				int bucketCount; // 249
				CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::Count(); // 249
			}
			CUtlMemory<CUtlVector<CWorldSceneObjectRef::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::operator[](
					int i);  // 254
			CUtlVectorBase<CWorldSceneObjectRef::Count(); // 255
			CUtlMemory<CWorldSceneObjectRef::operator[](
					int i);  // 609
			CUtlVectorBase<CWorldSceneObjectRef::Element(
				int i);  // 258
			CUtlHash<CWorldSceneObjectRef::DoFind(
				CWorldSceneObjectRef* const& src,
				unsigned int* pBucket,
				int* pIndex);  // 278
			{
			}
			{
			}
			CUtlHash<CWorldSceneObjectRef::BuildHandle(
					int ndxBucket,
					int ndxKeyData);  // 280
			CUtlHash<CWorldSceneObjectRef::Find(
				CWorldSceneObjectRef* const& src);  // 1399
			CUtlHash<CWorldSceneObjectRef::GetBucketIndex(
					UtlHashHandle_t handle);  // 155
			CUtlHash<CWorldSceneObjectRef::GetKeyDataIndex(
					UtlHashHandle_t handle);  // 156
			CUtlMemory<CUtlVector<CWorldSceneObjectRef::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::operator[](
					int i);  // 164
			CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::Count(); // 162
			CUtlVectorBase<CWorldSceneObjectRef::Count(); // 164
			CUtlHash<CWorldSceneObjectRef::IsValidHandle(
					UtlHashHandle_t handle);  // 349
			CUtlMemory<CWorldSceneObjectRef::operator[](
					int i);  // 602
			CUtlVectorBase<CWorldSceneObjectRef::Element(
				int i);  // 1575
			{
				const bool  bNotLast; // 1578
				CUtlMemory<CWorldSceneObjectRef::operator[](
						int i);  // 602
				CUtlVectorBase<CWorldSceneObjectRef::Element(
					int i);  // 1584
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1584
			}
			Destruct<CWorldSceneObjectRef*>(CWorldSceneObjectRef** pMemory); // 1575
			CUtlVectorBase<CWorldSceneObjectRef::FastRemove(
					int elem);  // 357
			{
			}
			CUtlMemory<CUtlVector<CWorldSceneObjectRef::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<CWorldSceneObjectRef::operator[](
					int i);  // 355
			CUtlVectorBase<CWorldSceneObjectRef::IsValidIndex(
					int i);  // 355
			CUtlHash<CWorldSceneObjectRef::Remove(
				UtlHashHandle_t handle);  // 1400
		}
		CRefCountServiceBase<true, CRefMT>::GetRefCount(); // 1396
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 1403
	}
} /* size: 0, variables: 1 */

// <01009B3E> worldrenderer/world.cpp:1407
// function call: 1
void CWorld::GetNumOutstandingLoadRequests()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1409
} /* size: 0, inline expansions: 1 (0 bytes) */

