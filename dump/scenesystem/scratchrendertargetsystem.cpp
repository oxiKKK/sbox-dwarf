
//
// scenesystem/scratchrendertargetsystem.cpp
//
//	referenced by: libengine2.so
//
//	functions: 68
//	class: 1
//

// <0374EF82> ../scenesystem/scratchrendertargetsystem.cpp:33
// variable: 1
inline void CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(HSceneViewRenderTarget hTarget)
{
	int nIndex; // 35
} /* size: 0, variables: 1 */

// <0374EF31> ../scenesystem/scratchrendertargetsystem.cpp:39
// variables: 2
inline void CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(HSceneViewRenderTarget hTarget)
{
	const char   __FUNCTION__; // 14383
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 44
	}
} /* size: 0, variables: 1 */

// <0374EEC8> ../scenesystem/scratchrendertargetsystem.cpp:52
// variables: 4
inline void CScratchRenderTargetSystem::IndexToRenderTargetHandle(int nIndex)
{
	const char   __FUNCTION__; // 14248
	uintp nViewIndex; // 55
	uintp nHandle; // 56
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 54
	}
} /* size: 0, variables: 3 */

// <0374EDF3> ../scenesystem/scratchrendertargetsystem.cpp:60
// function calls: 2
void CScratchRenderTargetSystem::Init(CSceneView* pOwner)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 63
} /* size: 62, inline expansions: 2 (88 bytes) */

// <0374ED90> ../scenesystem/scratchrendertargetsystem.cpp:67
void CScratchRenderTargetSystem::PushNamedRenderTargetScope(const char* pName)
{
} /* size: 61 */

// <0374ED0F> ../scenesystem/scratchrendertargetsystem.cpp:72
// variables: 2
void CScratchRenderTargetSystem::PopNamedRenderTargetScope()
{
	const char   __FUNCTION__; // 14248
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 75
	}
} /* size: 0, variables: 1 */

// <0374EB53> ../scenesystem/scratchrendertargetsystem.cpp:78
// variables: 4
// function calls: 5
void CScratchRenderTargetSystem::FindRenderTargetById(const RenderTargetId_t& id)
{
	int nCount; // 80
	const char   __FUNCTION__; // 14118
	{
		int i; // 81
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
		}
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this,
				int i);  // 83
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this,
				int i);  // 86
	}
	Count(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this); // 80
} /* size: 0, variables: 2, inline expansions: 1 (4 bytes) */

// <03758475> ../scenesystem/scratchrendertargetsystem.cpp:97
// function calls: 5
void CScratchRenderTargetSystem::InitRenderTargetInfo(RenderTargetInfo_t& info)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 99
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 99
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0374EB2B> ../scenesystem/scratchrendertargetsystem.cpp:97
void CScratchRenderTargetSystem::InitRenderTargetInfo(RenderTargetInfo_t& info)
{
} /* size: 0 */

// <0375857D> ../scenesystem/scratchrendertargetsystem.cpp:116
// variable: 1
// function calls: 8
void CScratchRenderTargetSystem::GetRenderTargetName(HSceneViewRenderTarget hTarget, CBufferString* pBuf)
{
	int nIndex; // 118
	CSceneView::GetViewIndex(); // 42
	CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
					HSceneViewRenderTarget hTarget);  // 44
	{
		CUtlMemory<CSceneView::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneView::operator[](
				int i);  // 1751
		CSceneSystem::GetViewByIndex(
				int nIndex);  // 44
	}
	CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
					HSceneViewRenderTarget hTarget);  // 118
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this,
			int i);  // 119
} /* size: 199, variables: 1, inline expansions: 5 (208 bytes) */

// <0374EAEB> ../scenesystem/scratchrendertargetsystem.cpp:116
// variable: 1
void CScratchRenderTargetSystem::GetRenderTargetName(HSceneViewRenderTarget hTarget, CBufferString* pBuf)
{
	int nIndex; // 118
} /* size: 0, variables: 1 */

// <0374DBDA> ../scenesystem/scratchrendertargetsystem.cpp:122
// variables: 11
// function calls: 55
void CScratchRenderTargetSystem::FindOrCreateRenderTarget(const char* pName, HRenderTexture hTexture, SceneViewRenderTargetFlags_t nFlags)
{
	RenderTargetId_t id; // 130
	const CTextureDesc* pDesc; // 133
	RenderMultisampleType_t nMultisampleType; // 134
	int nIndex; // 135
	const char   __FUNCTION__; // 14221
	{
		RenderTargetInfo_t& info; // 139
		{
			CBufferString idName; // 143
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 143
			CBufferString::~CBufferString(); // 147
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 145
		}
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 139
	}
	{
		RenderTargetInfo_t& info; // 155
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
		}
		{
			SwapChainBuffer_t buf; // 166
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 168
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 167
		}
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::NumAllocated(); // 1143
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 1148
		RenderTargetId_t::RenderTargetId_t(); // 135
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 135
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 142
		CTextureDesc::CTextureDesc(); // 135
		CUtlMemory<ImageFormat, int>::ValidateGrowSize(); // 475
		CUtlMemory<ImageFormat, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> >::CUtlVector(); // 135
		RenderTargetInfo_t::RenderTargetInfo_t(); // 1479
		Construct<CScratchRenderTargetSystem::RenderTargetInfo_t>(RenderTargetInfo_t* pMemory); // 1148
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 368
		ResetDbgInfo(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 824
		GrowMemory(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 152
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 155
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 99
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 99
		CScratchRenderTargetSystem::InitRenderTargetInfo(
					RenderTargetInfo_t& info);  // 156
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 159
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 164
		CTextureDesc::operator=(
				const CTextureDesc& rhs);  // 178
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 124
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 124
	RenderTargetId_t::RenderTargetId_t(
			const RenderTargetId_t  &);  // 130
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 133
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 134
	{
	}
	CSceneView::GetViewIndex(); // 55
	CScratchRenderTargetSystem::IndexToRenderTargetHandle(
					int nIndex);  // 183
	RenderTargetId_t::~RenderTargetId_t(); // 184
} /* size: 0, variables: 5, inline expansions: 12 (187 bytes) */

// <0374DA7B> ../scenesystem/scratchrendertargetsystem.cpp:186
// variable: 1
// function calls: 2
void CScratchRenderTargetSystem::FindOrCreateRenderTarget(const char* pName, SwapChainHandle_t hSwapChain, SwapChainBuffer_t nType, SceneViewRenderTargetFlags_t nFlags)
{
	HRenderTexture hTexture; // 188
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 189
} /* size: 119, variables: 1, inline expansions: 2 (16 bytes) */

// <0374CC94> ../scenesystem/scratchrendertargetsystem.cpp:192
// variables: 10
// function calls: 53
void CScratchRenderTargetSystem::FindOrCreateRenderTarget(const char* pName, const SceneViewRenderTargetInfo_t& rtInfo, SceneViewRenderTargetFlags_t nFlags)
{
	CScratchRenderTargetEditScope srtEditScope; // 194
	RenderTargetId_t id; // 196
	int nIndex; // 207
	const char   __FUNCTION__; // 14221
	{
		CBufferString idName; // 201
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 201
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 203
		CBufferString::~CBufferString(); // 205
	}
	{
		RenderTargetInfo_t& info; // 211
		{
			CBufferString idName; // 216
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 216
			CBufferString::~CBufferString(); // 220
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 218
		}
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 211
	}
	{
		ImageFormat fmt; // 224
		RenderTargetInfo_t& info; // 233
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 229
		}
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::NumAllocated(); // 1143
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 1148
		RenderTargetId_t::RenderTargetId_t(); // 135
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 135
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 142
		CTextureDesc::CTextureDesc(); // 135
		CUtlMemory<ImageFormat, int>::ValidateGrowSize(); // 475
		CUtlMemory<ImageFormat, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> >::CUtlVector(); // 135
		RenderTargetInfo_t::RenderTargetInfo_t(); // 1479
		Construct<CScratchRenderTargetSystem::RenderTargetInfo_t>(RenderTargetInfo_t* pMemory); // 1148
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 368
		ResetDbgInfo(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 824
		GrowMemory(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 232
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 99
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 99
		CScratchRenderTargetSystem::InitRenderTargetInfo(
					RenderTargetInfo_t& info);  // 234
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 233
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 1715
	CSceneSystem::IncrementSRTMutexLockCount(
					int nAmount);  // 1716
	CScratchRenderTargetEditScope::CScratchRenderTargetEditScope(); // 194
	RenderTargetId_t::RenderTargetId_t(
			const RenderTargetId_t  &);  // 196
	{
	}
	CSceneView::GetViewIndex(); // 55
	CScratchRenderTargetSystem::IndexToRenderTargetHandle(
					int nIndex);  // 248
	RenderTargetId_t::~RenderTargetId_t(); // 249
	CSceneSystem::IncrementSRTMutexLockCount(
					int nAmount);  // 1721
	CSceneSystem::GetScratchRenderTargetMutex(); // 1722
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1722
	CScratchRenderTargetEditScope::~CScratchRenderTargetEditScope(); // 249
} /* size: 0, variables: 4, inline expansions: 11 (431 bytes) */

// <0374C8DD> ../scenesystem/scratchrendertargetsystem.cpp:251
// variables: 3
// function calls: 10
void CScratchRenderTargetSystem::FindOrCreateRenderTarget(const char* pName, const char* pOtherName)
{
	RenderTargetId_t otherId; // 253
	int nOtherIndex; // 256
	{
		CBufferString idName; // 259
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 259
		CBufferString::~CBufferString(); // 263
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 261
	}
	RenderTargetId_t::RenderTargetId_t(
			const RenderTargetId_t  &);  // 253
	{
	}
	CSceneView::GetViewIndex(); // 55
	CScratchRenderTargetSystem::IndexToRenderTargetHandle(
					int nIndex);  // 265
	RenderTargetId_t::~RenderTargetId_t(); // 266
} /* size: 0, variables: 2, inline expansions: 4 (119 bytes) */

// <0374BB16> ../scenesystem/scratchrendertargetsystem.cpp:272
// variables: 8
// function calls: 55
void CScratchRenderTargetSystem::FindOrCreateRenderTarget(const char* pName, HSceneViewRenderTarget hOtherTarget)
{
	RenderTargetId_t id; // 280
	int nOtherIndex; // 284
	int nIndex; // 290
	{
		RenderTargetInfo_t& info; // 294
		RenderTargetInfo_t& otherInfo; // 295
		{
			CBufferString idName; // 300
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 300
			CBufferString::~CBufferString(); // 304
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 302
		}
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 295
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 294
		{
		}
		CSceneView::GetViewIndex(); // 55
		CScratchRenderTargetSystem::IndexToRenderTargetHandle(
						int nIndex);  // 305
	}
	{
		RenderTargetInfo_t& info; // 311
		RenderTargetInfo_t& otherInfo; // 318
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::NumAllocated(); // 1143
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 1148
		RenderTargetId_t::RenderTargetId_t(); // 135
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 135
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 142
		CTextureDesc::CTextureDesc(); // 135
		CUtlMemory<ImageFormat, int>::ValidateGrowSize(); // 475
		CUtlMemory<ImageFormat, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> >::CUtlVector(); // 135
		RenderTargetInfo_t::RenderTargetInfo_t(); // 1479
		Construct<CScratchRenderTargetSystem::RenderTargetInfo_t>(RenderTargetInfo_t* pMemory); // 1148
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 368
		ResetDbgInfo(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 824
		GrowMemory(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 310
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 99
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 99
		CScratchRenderTargetSystem::InitRenderTargetInfo(
					RenderTargetInfo_t& info);  // 312
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 311
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 318
		CTextureDesc::operator=(
				const CTextureDesc& rhs);  // 319
		{
		}
		CSceneView::GetViewIndex(); // 55
		CScratchRenderTargetSystem::IndexToRenderTargetHandle(
						int nIndex);  // 328
	}
	RenderTargetId_t::RenderTargetId_t(
			const RenderTargetId_t  &);  // 280
	CSceneView::GetViewIndex(); // 42
	CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
					HSceneViewRenderTarget hTarget);  // 44
	{
		CUtlMemory<CSceneView::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneView::operator[](
				int i);  // 1751
		CSceneSystem::GetViewByIndex(
				int nIndex);  // 44
	}
	CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
					HSceneViewRenderTarget hTarget);  // 284
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 285
	RenderTargetId_t::~RenderTargetId_t(); // 330
} /* size: 0, variables: 3, inline expansions: 7 (275 bytes) */

// <0374AB3A> ../scenesystem/scratchrendertargetsystem.cpp:336
// variables: 16
// function calls: 59
void CScratchRenderTargetSystem::FindOrCreateRenderTarget(const char* pName, ISceneView* pIOtherView, HSceneViewRenderTarget hOtherTarget, SceneViewRenderTargetUsageFlags_t nUsageFlags)
{
	RenderTargetId_t id; // 362
	CSceneView* pOtherView; // 365
	CScratchRenderTargetSystem* pOtherRTSystem; // 366
	int nOtherIndex; // 367
	int nIndex; // 375
	RenderTargetInfo_t& otherInfo; // 393
	RenderTargetInfo_t& info; // 403
	{
		RenderTargetInfo_t& info; // 379
		RenderTargetInfo_t& otherInfo; // 380
		{
			CBufferString idName; // 384
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 384
			CBufferString::~CBufferString(); // 388
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 386
		}
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 380
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 379
		{
		}
		CSceneView::GetViewIndex(); // 55
		CScratchRenderTargetSystem::IndexToRenderTargetHandle(
						int nIndex);  // 389
	}
	{
		bool bWrites; // 424
		bool bReads; // 425
		bool bReadFirst; // 426
		bool bDiscardEDRam; // 427
		RenderTargetInfo_t* pInfo; // 429
		{
			CScratchRenderTargetSystem* pOtherRTSystemTmp; // 432
			CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
					int i);  // 433
		}
	}
	CSceneView::GetPriority(); // 356
	CSceneView::GetPriority(); // 356
	RenderTargetId_t::RenderTargetId_t(
			const RenderTargetId_t  &);  // 362
	CSceneView::GetViewIndex(); // 42
	CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
					HSceneViewRenderTarget hTarget);  // 44
	{
		CUtlMemory<CSceneView::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneView::operator[](
				int i);  // 1751
		CSceneSystem::GetViewByIndex(
				int nIndex);  // 44
	}
	CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
					HSceneViewRenderTarget hTarget);  // 367
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 370
	RenderTargetId_t::~RenderTargetId_t(); // 454
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::NumAllocated(); // 1143
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
		int i);  // 1148
	RenderTargetId_t::RenderTargetId_t(); // 135
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 135
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 135
	CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::ResetDbgInfo(); // 530
	CUtlMemory<ImageFormat, int>::ValidateGrowSize(); // 475
	CUtlMemory<ImageFormat, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> >::CUtlVector(); // 135
	RenderTargetInfo_t::RenderTargetInfo_t(); // 1479
	Construct<CScratchRenderTargetSystem::RenderTargetInfo_t>(RenderTargetInfo_t* pMemory); // 1148
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 368
	ResetDbgInfo(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 824
	GrowMemory(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 402
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 99
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 99
	CScratchRenderTargetSystem::InitRenderTargetInfo(
				RenderTargetInfo_t& info);  // 404
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 403
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 407
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 411
	{
	}
	CSceneView::GetViewIndex(); // 55
	CScratchRenderTargetSystem::IndexToRenderTargetHandle(
					int nIndex);  // 453
} /* size: 0, variables: 7, inline expansions: 42 (1468 bytes) */

// <0374A90D> ../scenesystem/scratchrendertargetsystem.cpp:460
// variable: 1
// function calls: 8
void CScratchRenderTargetSystem::MarkRenderTargetRead(HSceneViewRenderTarget hTarget)
{
	int nIndex; // 465
	CSceneView::GetViewIndex(); // 42
	CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
					HSceneViewRenderTarget hTarget);  // 44
	{
		CUtlMemory<CSceneView::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneView::operator[](
				int i);  // 1751
		CSceneSystem::GetViewByIndex(
				int nIndex);  // 44
	}
	CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
					HSceneViewRenderTarget hTarget);  // 465
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 466
} /* size: 208, variables: 1, inline expansions: 5 (182 bytes) */

// <0374A560> ../scenesystem/scratchrendertargetsystem.cpp:473
// variables: 3
// function calls: 14
void CScratchRenderTargetSystem::GetRenderTargetTexture(HSceneViewRenderTarget hTarget)
{
	const char   __FUNCTION__; // 14167
	int nIndex; // 486
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 478
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 479
	CSceneView::GetViewIndex(); // 42
	CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
					HSceneViewRenderTarget hTarget);  // 44
	{
		CUtlMemory<CSceneView::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneView::operator[](
				int i);  // 1751
		CSceneSystem::GetViewByIndex(
				int nIndex);  // 44
	}
	CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
					HSceneViewRenderTarget hTarget);  // 486
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 487
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 487
} /* size: 0, variables: 2, inline expansions: 11 (246 bytes) */

// <0374A286> ../scenesystem/scratchrendertargetsystem.cpp:490
// variables: 2
// function calls: 10
void CScratchRenderTargetSystem::GetRenderTargetInfo(HSceneViewRenderTarget hTarget, OtherTargetInfo_t* pInfo)
{
	int nIndex; // 502
	const RenderTargetInfo_t& info; // 503
	CSceneView::GetViewIndex(); // 42
	CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
					HSceneViewRenderTarget hTarget);  // 44
	{
		CUtlMemory<CSceneView::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneView::operator[](
				int i);  // 1751
		CSceneSystem::GetViewByIndex(
				int nIndex);  // 44
	}
	CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
					HSceneViewRenderTarget hTarget);  // 502
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this,
			int i);  // 503
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 504
} /* size: 0, variables: 2, inline expansions: 7 (0 bytes) */

// <03749E36> ../scenesystem/scratchrendertargetsystem.cpp:510
// variables: 6
// function calls: 16
void CScratchRenderTargetSystem::ForceIdenticalDimensions(HSceneViewRenderTarget hTarget1, HSceneViewRenderTarget hTarget2)
{
	int nTarget1; // 515
	int nTarget2; // 516
	const RenderTargetInfo_t& target1; // 519
	const RenderTargetInfo_t& target2; // 522
	int nTargetIndex; // 526
	int nMatchIndex; // 527
	CSceneView::GetViewIndex(); // 42
	CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
					HSceneViewRenderTarget hTarget);  // 44
	{
		CUtlMemory<CSceneView::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneView::operator[](
				int i);  // 1751
		CSceneSystem::GetViewByIndex(
				int nIndex);  // 44
	}
	CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
					HSceneViewRenderTarget hTarget);  // 515
	CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
					HSceneViewRenderTarget hTarget);  // 44
	{
		CUtlMemory<CSceneView::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneView::operator[](
				int i);  // 1751
		CSceneSystem::GetViewByIndex(
				int nIndex);  // 44
	}
	CSceneView::GetViewIndex(); // 42
	CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
					HSceneViewRenderTarget hTarget);  // 516
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 519
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 522
} /* size: 0, variables: 6, inline expansions: 10 (0 bytes) */

// <03749C6B> ../scenesystem/scratchrendertargetsystem.cpp:546
// variables: 2
// function calls: 4
void CScratchRenderTargetSystem::FindRenderTarget(const char* pName)
{
	RenderTargetId_t id; // 548
	int nIndex; // 551
	RenderTargetId_t::RenderTargetId_t(
			const RenderTargetId_t  &);  // 548
	RenderTargetId_t::~RenderTargetId_t(); // 555
	{
	}
	CSceneView::GetViewIndex(); // 55
	CScratchRenderTargetSystem::IndexToRenderTargetHandle(
					int nIndex);  // 553
} /* size: 0, variables: 2, inline expansions: 4 (108 bytes) */

// <037498FE> ../scenesystem/scratchrendertargetsystem.cpp:557
// variables: 7
// function calls: 9
void CScratchRenderTargetSystem::GetRenderTargetInfo(HSceneViewRenderTarget hTarget, SceneViewRenderTargetInfo_t* pInfo)
{
	const CScratchRenderTargetSystem* pSystem; // 568
	int nViewIndex; // 569
	const char   __FUNCTION__; // 14091
	int nIndex; // 589
	const RenderTargetInfo_t& info; // 590
	{
		CSceneView* pOtherView; // 574
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 577
		}
		CUtlMemory<CSceneView::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneView::operator[](
				int i);  // 1751
		CSceneSystem::GetViewByIndex(
				int nIndex);  // 574
	}
	CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
					HSceneViewRenderTarget hTarget);  // 569
	CSceneView::GetViewIndex(); // 572
	CSceneView::GetViewIndex(); // 42
	{
	}
	CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
					HSceneViewRenderTarget hTarget);  // 589
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this,
			int i);  // 590
} /* size: 0, variables: 5, inline expansions: 6 (197 bytes) */

// <03749664> ../scenesystem/scratchrendertargetsystem.cpp:601
// variables: 2
// function calls: 7
void CScratchRenderTargetSystem::UpdateLayerDiscardibility(const RenderTargetInfo_t& target, bool bMSAA, CSceneLayer* pLayer, LayerInfo_t* pInfo)
{
	{
		bool bTargetMSAA; // 607
	}
	{
		CBufferString idName; // 627
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 627
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 629
		CSceneView::GetDebugName(); // 629
		CBufferString::~CBufferString(); // 633
	}
} /* size: 398 */

// <037491D4> ../scenesystem/scratchrendertargetsystem.cpp:641
// variables: 3
// function calls: 14
void CScratchRenderTargetSystem::UpdateSwapChainAndMultisampleType(const RenderTargetInfo_t& target, bool bMSAA, CSceneLayer* pLayer, LayerInfo_t* pInfo)
{
	RenderMultisampleType_t nNewMultisampleType; // 660
	{
		CBufferString idName; // 651
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 651
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 653
		CSceneView::GetDebugName(); // 653
		CBufferString::~CBufferString(); // 657
	}
	{
		CBufferString idName; // 667
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 667
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 669
		CSceneView::GetDebugName(); // 669
		CBufferString::~CBufferString(); // 673
	}
} /* size: 679, variables: 1 */

// <03758A5D> ../scenesystem/scratchrendertargetsystem.cpp:683
// variables: 4
// function calls: 23
void CScratchRenderTargetSystem::UpdateRenderTargetMatchState(int nTargetIndex, int nMatchIndex)
{
	{
	}
	{
		RenderTargetInfo_t& target; // 688
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 688
		{
		}
		{
			int nCount; // 692
			Count(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this); // 692
			{
				int i; // 694
				CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
						int i);  // 696
			}
		}
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 703
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 705
		{
			int i; // 1531
			CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Count(); // 1531
			CUtlMemory<ImageFormat, int>::operator[](
					int i);  // 609
			CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Element(
				int i);  // 1533
		}
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Find(
			const ImageFormat& src);  // 705
		CUtlMemory<ImageFormat, int>::NumAllocated(); // 1196
		CUtlMemory<ImageFormat, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Element(
			int i);  // 1201
		CopyConstruct<ImageFormat>(ImageFormat* pMemory,
						const ImageFormat& src);  // 1201
		CUtlMemory<ImageFormat, int>::Base(); // 112
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Base(); // 368
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::AddToTail(
				const ImageFormat& src);  // 706
	}
	CScratchRenderTargetSystem::UpdateRenderTargetMatchState(
					int nTargetIndex,
					int nMatchIndex);  // 683
} /* size: 0, inline expansions: 1 (414 bytes) */

// <0374910F> ../scenesystem/scratchrendertargetsystem.cpp:683
// variables: 6
void CScratchRenderTargetSystem::UpdateRenderTargetMatchState(int nTargetIndex, int nMatchIndex)
{
	const char   __FUNCTION__; // 14329
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 685
	}
	{
		RenderTargetInfo_t& target; // 688
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 689
		}
		{
			int nCount; // 692
			{
				int i; // 694
			}
		}
	}
} /* size: 0, variables: 1 */

// <037476C8> ../scenesystem/scratchrendertargetsystem.cpp:715
// variables: 42
// function calls: 59
void CScratchRenderTargetSystem::ComputeLayerInfo(CSceneLayer* pLayer, int hLayerHandle, LayerInfo_t* pInfo)
{
	const char   __FUNCTION__; // 14020
	const SceneLayerOutputs_t& output; // 743
	int nMustMatchRenderTargetSize; // 747
	bool bDiscardColorContents; // 748
	bool bDiscardDepthStencilContents; // 749
	bool bModifiesColorTargets; // 750
	bool bModifiesDepthStencilTarget; // 751
	bool bPreservesColorTargets; // 752
	bool bPreservesDepthTargets; // 753
	bool bPreservesStencilTargets; // 754
	bool bClearsColorTargets; // 755
	bool bClearsDepthTargets; // 756
	bool bClearsStencilTargets; // 757
	int nClearFlags; // 802
	int nTestClearFlag; // 808
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 717
	}
	{
		int i; // 732
	}
	{
		int j; // 809
		{
			int nIndex; // 811
			RenderTargetInfo_t& target; // 824
			uint64 nMask; // 826
			OutputInfo_t& info; // 832
			bool bDiscardColorTarget; // 836
			bool bActuallyUsingMSAA; // 846
			int nMatchSizeIndex; // 849
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 815
				ISceneLayer::GetDebugName(); // 815
				CSceneView::GetDebugName(); // 815
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 820
				ISceneLayer::GetDebugName(); // 820
				CSceneView::GetDebugName(); // 820
			}
			CSceneView::GetViewIndex(); // 42
			CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
							HSceneViewRenderTarget hTarget);  // 44
			{
				CUtlMemory<CSceneView::operator[](
						int i);  // 595
				CUtlVectorBase<CSceneView::operator[](
						int i);  // 1751
				CSceneSystem::GetViewByIndex(
						int nIndex);  // 44
			}
			CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
							HSceneViewRenderTarget hTarget);  // 814
			Count(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this); // 815
			CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
					int i);  // 824
			ISceneLayer::GetStencilDependency(); // 836
		}
	}
	{
		int nIndex; // 857
		RenderTargetInfo_t& target; // 858
		int nMask; // 860
		OutputInfo_t& info; // 866
		bool bActuallyUsingMSAA; // 886
		int nMatchSizeIndex; // 889
		{
			bool bHasStencil; // 873
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 877
			}
		}
		CSceneView::GetViewIndex(); // 42
		CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
						HSceneViewRenderTarget hTarget);  // 44
		{
			CUtlMemory<CSceneView::operator[](
					int i);  // 595
			CUtlVectorBase<CSceneView::operator[](
					int i);  // 1751
			CSceneSystem::GetViewByIndex(
					int nIndex);  // 44
		}
		CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
						HSceneViewRenderTarget hTarget);  // 857
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 858
	}
	{
		int j; // 897
		CSceneView::GetViewIndex(); // 42
		CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
						HSceneViewRenderTarget hTarget);  // 44
		{
			CUtlMemory<CSceneView::operator[](
					int i);  // 595
			CUtlVectorBase<CSceneView::operator[](
					int i);  // 1751
			CSceneSystem::GetViewByIndex(
					int nIndex);  // 44
		}
		CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
						HSceneViewRenderTarget hTarget);  // 899
	}
	Count(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this); // 717
	ISceneLayer::GetDebugName(); // 724
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 737
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 738
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 739
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 740
	CSceneView::GetViewIndex(); // 42
	CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
					HSceneViewRenderTarget hTarget);  // 44
	{
		CUtlMemory<CSceneView::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneView::operator[](
				int i);  // 1751
		CSceneSystem::GetViewByIndex(
				int nIndex);  // 44
	}
	CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
					HSceneViewRenderTarget hTarget);  // 904
	CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::GetRoot(); // 911
	{
		int i; // 95
	}
	CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::VisitAllAttributes<CScratchRenderTargetSystem::ComputeLayerInfo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 15921
		CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 15931
		CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 15941
		CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
		}
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::VisitAllAttributes<CScratchRenderTargetSystem::ComputeLayerInfo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::VisitAllAttributes<CScratchRenderTargetSystem::ComputeLayerInfo(
																 f);  // 911
	CSceneView::GetDebugName(); // 763
	CSceneView::GetDebugName(); // 771
	CSceneView::GetDebugName(); // 787
	CSceneView::GetDebugName(); // 779
	CSceneView::GetDebugName(); // 795
} /* size: 0, variables: 15, inline expansions: 21 (793 bytes) */

// <03747519> ../scenesystem/scratchrendertargetsystem.cpp:974
// variables: 13
void CScratchRenderTargetSystem::MarkUnusedLayers(int nLayerCount, LayerInfo_t* pLayerInfo)
{
	bool* pRemoveLayer; // 981
	int nDiscardableLayerCount; // 982
	int* pDiscardableLayers; // 983
	uint64 nTotalDiscardMask; // 1005
	bool bDone; // 1006
	{
		int i; // 984
	}
	{
		int i; // 1012
		{
			int nLayerIndex; // 1014
			LayerInfo_t& outputLayer; // 1020
			bool bOutputUsed; // 1022
			{
				int j; // 1024
				{
					LayerInfo_t& inputLayer; // 1030
					bool bDiscardOccurred; // 1040
				}
			}
		}
	}
} /* size: 653, variables: 5 */

// <037470F3> ../scenesystem/scratchrendertargetsystem.cpp:1065
// variables: 2
// function calls: 14
void CScratchRenderTargetSystem::RemoveUnusedLayers(int& nLayerCount, LayerInfo_t* pLayerInfo)
{
	{
		int i; // 1067
		{
			int nLayerHandle; // 1072
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 1074
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::IsIdxValid(
					int i);  // 588
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::IsIdxAfter(
					int i,
					const Iterator_t& it);  // 591
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 594
			CUtlLinkedList<CSceneLayer::IsValidIndex(
					int i);  // 583
			CUtlLinkedList<CSceneLayer::IsValidIndex(
					int i);  // 749
			IndexInRange(int index); // 749
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 367
			CUtlLinkedList<CSceneLayer::InternalElement(
					int i);  // 752
			Destruct<CSceneLayer*>(CSceneLayer** pMemory); // 753
			{
			}
			CUtlLinkedList<CSceneLayer::Free(
				int elem);  // 907
			CUtlLinkedList<CSceneLayer::Remove(
				int elem);  // 1075
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 1079
		}
	}
} /* size: 0 */

// <03746EE9> ../scenesystem/scratchrendertargetsystem.cpp:1087
// variables: 2
// function calls: 7
void CScratchRenderTargetSystem::ComputeLayerInfo(LayerInfo_t* pLayerInfo)
{
	{
		int l; // 1089
		int i; // 1089
		CUtlLinkedList<CSceneLayer::Head(); // 1089
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 494
		CUtlLinkedList<CSceneLayer::operator[](
				int i);  // 1091
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 368
		CUtlLinkedList<CSceneLayer::InternalElement(
				int i);  // 550
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 1089
	}
	CUtlLinkedList<CSceneLayer::Count(); // 1093
} /* size: 136, inline expansions: 1 (14 bytes) */

// <03746BF4> ../scenesystem/scratchrendertargetsystem.cpp:1100
// variables: 3
// function calls: 7
void CScratchRenderTargetSystem::UpdateOutputResolveMask(OutputInfo_t& info, RenderMultisampleType_t nSrcMSAAType, RenderMultisampleType_t nDestMSAAType, bool bSamplingFromOriginal, bool bOutputWasManualResolve, const char* pLayerName, const RenderTargetId_t& renderTargetId)
{
	const char   __FUNCTION__; // 14194
	{
		CBufferString idName; // 1107
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 1107
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1109
		CSceneView::GetDebugName(); // 1109
		CBufferString::~CBufferString(); // 1113
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1117
	}
} /* size: 0, variables: 1 */

// <03746595> ../scenesystem/scratchrendertargetsystem.cpp:1136
// variables: 17
// function calls: 17
void CScratchRenderTargetSystem::ComputeResolvesForLayer(int nLayerIndex, LayerInfo_t& srcLayer, const char* pLayerName, LayerInfo_t* pLayerInfo)
{
	const char   __FUNCTION__; // 14194
	{
		int j; // 1145
		{
			int nRTIndex; // 1147
			uint64 nMask; // 1148
			RenderMultisampleType_t nInputMultisampleType; // 1150
			bool bFound; // 1151
			RenderTargetInfo_t& inputTarget; // 1227
			{
				int k; // 1153
				{
					LayerInfo_t& outputLayer; // 1155
					int o; // 1162
					CSceneLayer* pOutputLayer; // 1172
					bool bInputUsedAsOutput; // 1188
					RenderTargetInfo_t& target; // 1191
					RenderMultisampleType_t nOutputMultisampleType; // 1192
					bool bOutputWasManualResolve; // 1215
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1168
					}
					CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
							int i);  // 494
					CUtlLinkedList<CSceneLayer::operator[](
							int i);  // 1172
					CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
							int i);  // 1191
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1204
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1204
				}
			}
			{
				CBufferString idName; // 1230
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 1230
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 1232
				CSceneView::GetDebugName(); // 1232
				CBufferString::~CBufferString(); // 1235
			}
			CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
					int i);  // 1227
		}
	}
} /* size: 0, variables: 1 */

// <0374640B> ../scenesystem/scratchrendertargetsystem.cpp:1243
// variables: 5
// function calls: 2
void CScratchRenderTargetSystem::ComputeRenderTargetResolves(int nLayerCount, LayerInfo_t* pLayerInfo)
{
	{
		int i; // 1245
		{
			LayerInfo_t& srcLayer; // 1247
			CSceneLayer* pSrcLayer; // 1251
			const char* pLayerName; // 1252
			bool bManualResolveLayer; // 1255
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 1251
		}
	}
} /* size: 145 */

// <03745D0E> ../scenesystem/scratchrendertargetsystem.cpp:1268
// variables: 11
// function calls: 23
void CScratchRenderTargetSystem::AdjustUsageScopeForExternalReferences(int nRenderTargetCount, RenderTargetState_t* pState, int nLayerCount, const LayerInfo_t* pLayerInfo)
{
	{
		int i; // 1272
		{
			RenderTargetInfo_t& info; // 1274
			RenderTargetStateAlias_t& alias; // 1277
			{
				int nFirstUse; // 1286
				bool bFirstUseWasRead; // 1298
				CScratchRenderTargetSystem* pOtherSystem; // 1309
				const RenderTargetInfo_t& otherInfo; // 1310
				{
					const LayerInfo_t& lInfo; // 1305
				}
				{
					CBufferString idName; // 1313
					const char* pLayerName; // 1315
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 1313
					CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
							int i);  // 494
					CUtlLinkedList<CSceneLayer::operator[](
							int i);  // 1318
					ISceneLayer::GetDebugName(); // 1318
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 776
					CBufferString::String(); // 1320
					CSceneView::GetDebugName(); // 1320
					CBufferString::~CBufferString(); // 1323
				}
				CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
						int i);  // 1309
				CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
						int i);  // 1310
			}
			{
				CBufferString idName; // 1343
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 1343
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 1345
				CSceneView::GetDebugName(); // 1345
				CBufferString::~CBufferString(); // 1348
			}
			CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
					int i);  // 1274
		}
	}
} /* size: 958 */

// <0374544F> ../scenesystem/scratchrendertargetsystem.cpp:1373
// variables: 12
// function calls: 30
void CScratchRenderTargetSystem::ValidateRenderTargetWrite(int nRenderTargetIndex, int nLayerIndex, const LayerInfo_t* pLayerInfo, LayerOutputType_t nOutputType, bool bFirstWrite)
{
	RenderTargetInfo_t& target; // 1379
	int nMask; // 1380
	bool bIsLayerDiscarded; // 1381
	CSceneLayer* pLayer; // 1382
	uint64 nDoesntModifyFlag; // 1383
	{
		bool bOk; // 1391
		CBufferString idName; // 1407
		{
			int l; // 1392
			{
				CSceneLayer* pTestLayer; // 1397
				CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
						int i);  // 494
				CUtlLinkedList<CSceneLayer::operator[](
						int i);  // 1397
			}
		}
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 1407
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1409
		ISceneLayer::GetDebugName(); // 1409
		CSceneView::GetDebugName(); // 1409
		CBufferString::~CBufferString(); // 1413
	}
	{
		CBufferString idName; // 1435
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 1435
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1437
		ISceneLayer::GetDebugName(); // 1437
		CSceneView::GetDebugName(); // 1437
		CBufferString::~CBufferString(); // 1441
	}
	{
		bool bIsLayerPreserved; // 1444
		{
			CBufferString idName; // 1447
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 1447
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 1449
			ISceneLayer::GetDebugName(); // 1449
			CSceneView::GetDebugName(); // 1449
			CBufferString::~CBufferString(); // 1453
		}
	}
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 1379
	CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
			int i);  // 494
	CUtlLinkedList<CSceneLayer::operator[](
			int i);  // 1382
} /* size: 920, variables: 5, inline expansions: 4 (56 bytes) */

// <03744B30> ../scenesystem/scratchrendertargetsystem.cpp:1461
// variables: 22
// function calls: 27
void CScratchRenderTargetSystem::ComputeRenderTargetUsageScope(RenderTargetState_t* pState, int nLayerCount, const LayerInfo_t* pLayerInfo)
{
	int nRenderTargetCount; // 1464
	{
		int i; // 1465
		{
			int a; // 1469
			{
				RenderTargetStateAlias_t& alias; // 1471
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1472
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 1472
			}
		}
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 1467
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int i);  // 1478
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1480
	}
	{
		int l; // 1485
		{
			const LayerInfo_t& layer; // 1487
			CSceneLayer* pLayer; // 1488
			bool bIsManualResolveLayer; // 1489
			{
				int i; // 1495
				{
					int nIndex; // 1497
					RenderTargetAliasType_t nAlias; // 1498
					RenderTargetStateAlias_t& alias; // 1499
					{
						RenderTargetInfo_t& target; // 1504
						{
							CBufferString idName; // 1507
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 1507
							CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
									int i);  // 588
							operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
									int i);  // 1508
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 776
							CBufferString::String(); // 1509
							ISceneLayer::GetDebugName(); // 1509
							CSceneView::GetDebugName(); // 1509
							CBufferString::~CBufferString(); // 1512
						}
						CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
								int i);  // 588
						operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
								int i);  // 1504
					}
					CScratchRenderTargetSystem::GetInputAlias(
							const LayerInfo_t& layer,
							int nInputIndex);  // 1498
				}
			}
			{
				int o; // 1520
				{
					int nIndex; // 1522
					const OutputInfo_t& info; // 1523
					bool bResolveToNonMSAA; // 1525
					bool bResolveToMSAA; // 1526
					RenderTargetStateAlias_t& original; // 1528
					{
						RenderTargetStateAlias_t& noMsaaCopy; // 1539
					}
					{
						RenderTargetStateAlias_t& msaaCopy; // 1545
					}
				}
			}
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 1488
		}
	}
	Count(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this); // 1464
} /* size: 1218, variables: 1, inline expansions: 1 (17 bytes) */

// <037432D8> ../scenesystem/scratchrendertargetsystem.cpp:1558
void CScratchRTAllocator::CScratchRTAllocator()
{
} /* size: 0 */

// <037432BA> ../scenesystem/scratchrendertargetsystem.cpp:1558
inline void CScratchRTAllocator::CScratchRTAllocator()
{
} /* size: 0 */

// <03734D91> ../scenesystem/scratchrendertargetsystem.cpp:1558
// member functions: 14
// member variables: 5
// class size: 8,472
class CScratchRTAllocator {
	/* ../scenesystem/scratchrendertargetsystem.cpp:1570 */
	enum {
		MAX_ACTUAL_RENDERTARGETS = 256,
	};
	/* ../scenesystem/scratchrendertargetsystem.cpp:1561 */
	void Init(CScratchRTAllocator* , CSceneView* , RenderTargetState_t* );
	/* ../scenesystem/scratchrendertargetsystem.cpp:1562 */
	bool Allocate(CScratchRTAllocator* , RenderTargetStateAlias_t& , int, bool);
	/* ../scenesystem/scratchrendertargetsystem.cpp:1563 */
	void Free(CScratchRTAllocator* , RenderTargetStateAlias_t& , int, bool);
	/* ../scenesystem/scratchrendertargetsystem.cpp:1564 */
	void AssignPreviouslyAllocatedTexture(CScratchRTAllocator* , RenderTargetStateAlias_t& , int);
	/* ../scenesystem/scratchrendertargetsystem.cpp:1566 */
	void GetTargetsWithMatchingDimensionsForAllFormats(int& , int& , CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> >& , RenderMultisampleType_t, RuntimeTextureSpecificationFlags_t, RenderTargetSizeType_t);
private:
	/* ../scenesystem/scratchrendertargetsystem.cpp:1574 */
	int FindBestFitScratchRenderTarget(CScratchRTAllocator* , const CTextureDesc& , RenderMultisampleType_t, RenderTargetSizeType_t);
	CSceneView * m_pView; /* 0 8 */
	RenderTargetState_t * m_pState; /* 8 8 */
	int m_nScratchRTCount; /* 16 4 */
	bool m_pUsed[256]; /* 20 256 */
	SceneScratchRenderTargetDesc_t m_pDesc[256]; /* 280 8192 */
	void CScratchRTAllocator(CScratchRTAllocator* );
	void Init(class CScratchRTAllocator *, class CSceneView *, class RenderTargetState_t *); /* linkage=_ZN19CScratchRTAllocator4InitEP10CSceneViewPN26CScratchRenderTargetSystem19RenderTargetState_tE */
	bool Allocate(class CScratchRTAllocator *, class RenderTargetStateAlias_t &, int, bool); /* linkage=_ZN19CScratchRTAllocator8AllocateERN26CScratchRenderTargetSystem24RenderTargetStateAlias_tEib */
	/* <3758797> ../scenesystem/scratchrendertargetsystem.cpp:1905 */
	void Free(class CScratchRTAllocator *, class RenderTargetStateAlias_t &, int, bool); /* linkage=_ZN19CScratchRTAllocator4FreeERN26CScratchRenderTargetSystem24RenderTargetStateAlias_tEib */
	void AssignPreviouslyAllocatedTexture(class CScratchRTAllocator *, class RenderTargetStateAlias_t &, int); /* linkage=_ZN19CScratchRTAllocator32AssignPreviouslyAllocatedTextureERN26CScratchRenderTargetSystem24RenderTargetStateAlias_tEi */
	void GetTargetsWithMatchingDimensionsForAllFormats(int &, int &, class CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> > &, enum RenderMultisampleType_t, enum RuntimeTextureSpecificationFlags_t, enum RenderTargetSizeType_t); /* linkage=_ZN19CScratchRTAllocator45GetTargetsWithMatchingDimensionsForAllFormatsERiS0_R10CUtlVectorI11ImageFormat10CUtlMemoryIS2_iEE23RenderMultisampleType_t34RuntimeTextureSpecificationFlags_t22RenderTargetSizeType_t */
	int FindBestFitScratchRenderTarget(class CScratchRTAllocator *, const class CTextureDesc  &, enum RenderMultisampleType_t, enum RenderTargetSizeType_t); /* linkage=_ZN19CScratchRTAllocator30FindBestFitScratchRenderTargetERK12CTextureDesc23RenderMultisampleType_t22RenderTargetSizeType_t */
	void CScratchRTAllocator(class CScratchRTAllocator *); /* linkage=_ZN19CScratchRTAllocatorC4Ev */
};

// <03744237> ../scenesystem/scratchrendertargetsystem.cpp:1583
// variables: 16
// function calls: 30
void CScratchRenderTargetSystem::ComputeDesiredRenderTargetSizes(RenderTargetState_t* pState)
{
	int nCount; // 1585
	const char   __FUNCTION__; // 14410
	{
		int i; // 1586
		{
			RenderTargetInfo_t& info; // 1588
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1596
			}
			{
				RenderTargetInfo_t& otherInfo; // 1613
				CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
						int i);  // 1613
			}
			{
				bool bFoundForcedSize; // 1623
				int nBestWidth; // 1624
				int nBestHeight; // 1625
				bool bCheckForBestRT; // 1626
				{
					int j; // 1627
					{
						const RenderTargetInfo_t& testInfo; // 1629
						bool bForceSize; // 1637
						{
							CBufferString idName1; // 1644
							CBufferString idName2; // 1646
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 1644
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 1646
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 776
							CBufferString::String(); // 1648
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 776
							CBufferString::String(); // 1648
							CSceneView::GetDebugName(); // 1648
							CBufferString::~CBufferString(); // 1653
							CBufferString::~CBufferString(); // 1653
						}
						CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
								int i);  // 588
						operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
								int i);  // 1629
					}
					Count(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this); // 1627
				}
				{
					RenderTargetSizeType_t nBestFitSizeType; // 1674
					CUtlMemory<ImageFormat, int>::NumAllocated(); // 1196
					CUtlMemory<ImageFormat, int>::operator[](
							int i);  // 602
					CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Element(
						int i);  // 1201
					CopyConstruct<ImageFormat>(ImageFormat* pMemory,
									const ImageFormat& src);  // 1201
					CUtlMemory<ImageFormat, int>::Base(); // 112
					CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Base(); // 368
					CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::AddToTail(
							const ImageFormat& src);  // 1680
				}
			}
			CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
					int i);  // 1588
		}
	}
	Count(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this); // 1585
} /* size: 0, variables: 2, inline expansions: 1 (17 bytes) */

// <037440F8> ../scenesystem/scratchrendertargetsystem.cpp:1692
// variables: 2
// function call: 1
void CScratchRTAllocator::Init(CSceneView* pView, RenderTargetState_t* pState)
{
	const char   __FUNCTION__; // 13726
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1698
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1700
} /* size: 0, variables: 1, inline expansions: 1 (11 bytes) */

// <03743CAE> ../scenesystem/scratchrendertargetsystem.cpp:1703
// variables: 16
// function calls: 8
void GetTargetsWithMatchingDimensionsForAllFormats(int& nBestWidth, int& nBestHeight, CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> >& formatList, RenderMultisampleType_t nMultisampleType, RuntimeTextureSpecificationFlags_t nTextureSpecFlags, RenderTargetSizeType_t nRTTSizeType)
{
	SceneScratchRenderTargetDesc_t pDescs; // 1705
	int nScratchRenderTargets; // 1706
	int nValidTargets; // 1710
	SceneScratchRenderTargetDesc_t** pValidList; // 1711
	int nFormats; // 1739
	bool* pFormatMatched; // 1740
	int nBestTargetsMatched; // 1741
	{
		int i; // 1712
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 1721
	}
	{
		int nTry; // 1743
		{
			int nTargetsMatched; // 1745
			int nFormatsMatched; // 1746
			int nTestWidth; // 1749
			int nTestHeight; // 1750
			{
				int i; // 1752
				{
					SceneScratchRenderTargetDesc_t* pTestTarget; // 1754
					{
						int f; // 1759
						CUtlMemory<ImageFormat, int>::operator[](
								int i);  // 588
						CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::operator[](
								int i);  // 1761
					}
				}
			}
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 1747
		}
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 512
	SceneScratchRenderTargetDesc_t::SceneScratchRenderTargetDesc_t(); // 1705
	CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Count(); // 1739
} /* size: 887, variables: 7, inline expansions: 3 (46 bytes) */

// <03743B91> ../scenesystem/scratchrendertargetsystem.cpp:1788
// variables: 5
// function call: 1
void CScratchRTAllocator::FindBestFitScratchRenderTarget(const CTextureDesc& info, RenderMultisampleType_t nMultisampleType, RenderTargetSizeType_t nRTTSizeType)
{
	int nBestMatch; // 1790
	int nBestAreaDifference; // 1791
	int nArea; // 1794
	{
		int i; // 1795
		{
			int nAreaDifference; // 1830
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 1810
		}
	}
} /* size: 303, variables: 3 */

// <037435FF> ../scenesystem/scratchrendertargetsystem.cpp:1841
// variables: 9
// function calls: 13
void CScratchRTAllocator::Allocate(RenderTargetStateAlias_t& alias, int nRenderTarget, bool bMSAA)
{
	CScratchRenderTargetEditScope srtEditScope; // 1843
	RenderTargetInfo_t& target; // 1845
	const char   __FUNCTION__; // 13824
	RenderMultisampleType_t nMultisampleType; // 1849
	int nRTIndex; // 1850
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1846
	}
	{
		SceneScratchRenderTargetInfo_t scratchInfo; // 1863
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						int nWidth,
						int nHeight,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 1863
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1869
	}
	{
		const bool  bExactDimensions; // 1874
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 1715
	CSceneSystem::GetScratchRenderTargetMutex(); // 1715
	CSceneSystem::IncrementSRTMutexLockCount(
					int nAmount);  // 1716
	CScratchRenderTargetEditScope::CScratchRenderTargetEditScope(); // 1843
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 1845
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1879
	CSceneSystem::IncrementSRTMutexLockCount(
					int nAmount);  // 1721
	CSceneSystem::GetScratchRenderTargetMutex(); // 1722
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1722
	CScratchRenderTargetEditScope::~CScratchRenderTargetEditScope(); // 1882
} /* size: 0, variables: 5, inline expansions: 12 (326 bytes) */

// <03743332> ../scenesystem/scratchrendertargetsystem.cpp:1884
// variables: 6
// function calls: 7
void CScratchRTAllocator::AssignPreviouslyAllocatedTexture(RenderTargetStateAlias_t& alias, int nRenderTarget)
{
	RenderTargetInfo_t& target; // 1886
	HRenderTexture hOtherTexture; // 1887
	bool bFoundMatch; // 1889
	const char   __FUNCTION__; // 14437
	{
		int j; // 1890
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1892
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1898
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1902
	}
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 1886
	{
	}
	CSceneView::GetViewIndex(); // 55
	CScratchRenderTargetSystem::IndexToRenderTargetHandle(
					int nIndex);  // 1887
} /* size: 0, variables: 4, inline expansions: 4 (131 bytes) */

// <03758797> ../scenesystem/scratchrendertargetsystem.cpp:1905
void CScratchRTAllocator::Free(RenderTargetStateAlias_t& alias, int nRenderTarget, bool bMSAA)
{
} /* size: 0 */

// <03742A3E> ../scenesystem/scratchrendertargetsystem.cpp:1914
// variables: 22
// function calls: 22
void CScratchRenderTargetSystem::AssignTexturesToRenderTargets(int nRenderTargetCount, RenderTargetState_t* pState, int nLayerCount, LayerInfo_t* pLayerInfo)
{
	CScratchRTAllocator allocator; // 1916
	const char   __FUNCTION__; // 14356
	{
		int i; // 1921
		{
			RenderTargetInfo_t& target; // 1923
			RenderTargetStateAlias_t& alias; // 1934
			CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
					int i);  // 1923
		}
	}
	{
		int l; // 1941
		{
			const LayerInfo_t& layer; // 1943
			{
				int i; // 1946
				{
					int amax; // 1948
					{
						int a; // 1949
						CScratchRTAllocator::Free(
							RenderTargetStateAlias_t& alias,
							int nRenderTarget,
							bool bMSAA);  // 1954
					}
				}
			}
			{
				int i; // 1960
				{
					RenderTargetInfo_t& target; // 1962
					int amax; // 1965
					{
						int a; // 1966
						{
							RenderTargetType_t targetType; // 1972
							bool bMSAA; // 1979
							RenderTargetStateAlias_t& alias; // 1980
							{
								CBufferString idName; // 1986
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1996
								}
								CBufferString::ReadBuffer(); // 1374
								CBufferString::ReadBuffer(); // 776
								CBufferString::String(); // 1989
								CBufferString::InitMinConstruct(
										bool bGrowable);  // 712
								CBufferString::CBufferString(); // 1986
								CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
										int i);  // 494
								CUtlLinkedList<CSceneLayer::operator[](
										int i);  // 1989
								CSceneView::GetDebugName(); // 1989
								CBufferString::~CBufferString(); // 1997
							}
							CScratchRenderTargetSystem::IsAliasMultisampled(
										const RenderTargetState_t& state,
										RenderTargetAliasType_t nAlias);  // 1979
						}
					}
					CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
							int i);  // 1962
				}
			}
		}
	}
	{
		int i; // 2004
		{
			RenderTargetInfo_t& target; // 2006
			RenderTargetStateAlias_t& original; // 2010
			CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
					int i);  // 2006
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2011
		}
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 512
	SceneScratchRenderTargetDesc_t::SceneScratchRenderTargetDesc_t(); // 1558
	CScratchRTAllocator::CScratchRTAllocator(); // 1916
} /* size: 0, variables: 2, inline expansions: 3 (60 bytes) */

// <037427A8> ../scenesystem/scratchrendertargetsystem.cpp:2019
// variables: 3
// function calls: 8
void GetTextureInfo(HRenderTexture hTexture, int* pWidth, int* pHeight, RenderMultisampleType_t* pType)
{
	const char   __FUNCTION__; // 13971
	const CTextureDesc* pMainDesc; // 2022
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2021
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 2021
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 2021
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2022
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2023
} /* size: 0, variables: 2, inline expansions: 8 (57 bytes) */

// <03742006> ../scenesystem/scratchrendertargetsystem.cpp:2032
// variables: 12
// function calls: 25
void CScratchRenderTargetSystem::ComputeInternalLayerFlags()
{
	{
		CSceneLayer* pCurLayer; // 2034
		CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short unsigned int>, int> >& __for_range; // 49086
		iterator __for_begin; // 55532
		iterator __for_end; // 55532
		{
			{
				int i; // 95
				operator()(const class* __closure,
						uint32 nAttributeKey,
						const RenderTargetAttribute_t& attributeValue); // 99
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::VisitAllAttributes<CScratchRenderTargetSystem::ComputeInternalLayerFlags(
																 f);  // 432
			{
				const OverflowChunk_t& p; // 433
				const CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 15605
				CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 15615
				CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 15625
				CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::begin(); // 433
				CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::end(); // 433
				{
					int i; // 95
					operator()(const class* __closure,
							uint32 nAttributeKey,
							const RenderTargetAttribute_t& attributeValue); // 99
				}
				CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::VisitAllAttributes<CScratchRenderTargetSystem::ComputeInternalLayerFlags(
																 f);  // 435
				CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 433
			}
			CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::VisitAllAttributes<CScratchRenderTargetSystem::ComputeInternalLayerFlags(
																 f);  // 2036
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 482
			CUtlLinkedList<CSceneLayer::Element(
				int i);  // 317
			_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::operator*(); // 2034
		}
		CUtlLinkedList<CSceneLayer::Head(); // 334
		_CUtlLinkedList_constiterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_constiterator_t(
						const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
						IndexType_t index);  // 264
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_iterator_t(
						const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
						IndexType_t index);  // 334
		CUtlLinkedList<CSceneLayer::begin(); // 2034
		_CUtlLinkedList_constiterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_constiterator_t(
						const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
						IndexType_t index);  // 264
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_iterator_t(
						const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
						IndexType_t index);  // 343
		CUtlLinkedList<CSceneLayer::end(); // 2034
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 368
		CUtlLinkedList<CSceneLayer::InternalElement(
				int i);  // 550
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 272
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::operator++(); // 2034
	}
} /* size: 221 */

// <037587D6> ../scenesystem/scratchrendertargetsystem.cpp:2051
void CScratchRenderTargetSystem::TestRenderTargetBindingValidity(int nLayerCount, const LayerInfo_t* pLayerInfo)
{
} /* size: 0 */

// <03756CC9> ../scenesystem/scratchrendertargetsystem.cpp:2051
// variables: 11
// function calls: 30
void CScratchRenderTargetSystem::TestRenderTargetBindingValidity(int nLayerCount, const LayerInfo_t* pLayerInfo)
{
	{
		int l; // 2057
		{
			const LayerInfo_t& layer; // 2059
			CSceneLayer* pLayer; // 2060
			const RenderTargetDesc_t& desc; // 2061
			int nWidth; // 2074
			int nHeight; // 2074
			RenderMultisampleType_t nMultisampleType; // 2075
			int nMainWidth; // 2076
			int nMainHeight; // 2076
			RenderMultisampleType_t nMainMultisampleType; // 2077
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 2060
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 233
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 233
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 234
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 234
			RenderTargetDesc_t::IsValid(); // 2062
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2078
			{
				int i; // 2079
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2081
				CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
						int i);  // 494
				CUtlLinkedList<CSceneLayer::operator[](
						int i);  // 2084
				CSceneView::GetDebugName(); // 2084
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 2091
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 2091
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2093
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 2096
			CSceneView::GetDebugName(); // 2096
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 2064
			CSceneView::GetDebugName(); // 2064
		}
	}
} /* size: 989 */

// <03741F3D> ../scenesystem/scratchrendertargetsystem.cpp:2051
// variables: 11
void CScratchRenderTargetSystem::TestRenderTargetBindingValidity(int nLayerCount, const LayerInfo_t* pLayerInfo)
{
	{
		int l; // 2057
		{
			const LayerInfo_t& layer; // 2059
			CSceneLayer* pLayer; // 2060
			const RenderTargetDesc_t& desc; // 2061
			int nWidth; // 2074
			int nHeight; // 2074
			RenderMultisampleType_t nMultisampleType; // 2075
			int nMainWidth; // 2076
			int nMainHeight; // 2076
			RenderMultisampleType_t nMainMultisampleType; // 2077
			{
				int i; // 2079
			}
		}
	}
} /* size: 0 */

// <0373D7AD> ../scenesystem/scratchrendertargetsystem.cpp:2111
// variables: 123
// function calls: 283
void CScratchRenderTargetSystem::ComputeRenderTargetBindings(int nRenderTargetCount, RenderTargetState_t* pState, int nLayerCount, const LayerInfo_t* pLayerInfo)
{
	const char   __FUNCTION__; // 14302
	{
		int l; // 2113
		{
			const LayerInfo_t& layer; // 2115
			CSceneLayer* pLayer; // 2116
			RenderTargetDesc_t& desc; // 2130
			{
				int i; // 2119
				{
					int nRTIndex; // 2121
					RenderTargetAliasType_t nAliasType; // 2122
					RenderTargetStateAlias_t& alias; // 2123
					HRenderTexture hTexture; // 2124
					CScratchRenderTargetSystem::GetInputAlias(
							const LayerInfo_t& layer,
							int nInputIndex);  // 2122
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2124
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
						CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 2845
						CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 2855
						CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 2865
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
						CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 13489
						CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 13499
						CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 13509
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
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
					TextureAttrForStorage_t::operator=(
							const TextureAttr_t& other);  // 566
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
							int32 nSingleMipLevelToBind);  // 2125
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2125
				}
			}
			{
				int i; // 2135
			}
			{
				int nRTIndex; // 2142
				int nTotalHeight; // 2144
				int nTotalWidth; // 2144
				RenderTargetStateAlias_t& alias; // 2147
				HRenderTexture hOutputTexture; // 2148
				RenderMultisampleType_t nType; // 2150
				Vector vec; // 2155
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2149
				}
				Vector4D::operator=(
						const Vector4D& vOther);  // 551
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
					CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 3171
					CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 3181
					CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 3191
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
					CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 13917
					CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 13927
					CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 13937
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
				Vector4D::Vector4D(
					const Vector4D& vOther);  // 571
				CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
					const CUtlStringToken& nTok,
					Vector4D nValue);  // 236
				Vector4D::Vector4D(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 236
				CRenderAttributes::SetVectorValue(
						CUtlStringToken nTokenID,
						Vector vValue);  // 248
				ISceneLayer::SetAttr(
					CUtlStringToken nTokenID,
					const Vector& vecValue);  // 2156
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2148
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 2149
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2151
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 2155
			}
			{
				int i; // 2159
				{
					const OutputInfo_t& info; // 2162
					bool bUsingMSAA; // 2163
					int nRTIndex; // 2166
					int nResolveIndex; // 2168
					RenderTargetStateAlias_t& alias; // 2204
					HRenderTexture hOutputTexture; // 2205
					int nOverrideColor; // 2206
					int nOverrideDepth; // 2207
					const CTextureDesc* pOutputTextureDesc; // 2208
					const int  nArrayCount; // 2209
					const bool  bCanOverrideArrayIndex; // 2210
					 SelectArrayIndex; // 2212
					{
						RenderTargetStateAlias_t& noMsaaState; // 2171
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2172
						}
						CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
						FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
						StaticInvalidHandle(void); // 2172
						CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 2172
						CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
						CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2175
						CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
						CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2180
					}
					{
						RenderTargetStateAlias_t& msaaState; // 2189
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2188
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2190
						}
						CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
						FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
						StaticInvalidHandle(void); // 2190
						CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 2190
						CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
						CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2193
						CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
						CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2198
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2225
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2244
					}
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2205
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2208
					{
					}
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 179
					{
					}
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 181
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 182
					CTextureDesc::GetArrayCount(); // 2209
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
					FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
					StaticInvalidHandle(void); // 2225
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2229
					operator()(const class* __closure,
							int nOverrideIndex,
							int nDefaultIndex); // 2230
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2240
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
						CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 2845
						CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 2855
						CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 2865
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
						CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 13489
						CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 13499
						CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 13509
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
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
					TextureAttrForStorage_t::operator=(
							const TextureAttr_t& other);  // 566
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
							int32 nSingleMipLevelToBind);  // 2240
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2235
					operator()(const class* __closure,
							int nOverrideIndex,
							int nDefaultIndex); // 2236
				}
			}
			{
				int i; // 2249
				{
					InputSceneViewRenderTarget_t& input; // 2251
					int nRTIndex; // 2253
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2252
					}
					CUtlMemory<ISceneLayer::InputSceneViewRenderTarget_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<ISceneLayer::InputSceneViewRenderTarget_t, CUtlMemoryFixedGrowable<ISceneLayer::InputSceneViewRender this,
							int i);  // 2251
					CSceneView::GetViewIndex(); // 42
					CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
									HSceneViewRenderTarget hTarget);  // 44
					{
						CUtlMemory<CSceneView::operator[](
								int i);  // 595
						CUtlVectorBase<CSceneView::operator[](
								int i);  // 1751
						CSceneSystem::GetViewByIndex(
								int nIndex);  // 44
					}
					CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
									HSceneViewRenderTarget hTarget);  // 2253
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2254
				}
				Count(const CUtlVectorBase<ISceneLayer::InputSceneViewRenderTarget_t, CUtlMemoryFixedGrowable<ISceneLayer::InputSceneView this); // 2249
			}
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 2116
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 2131
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2131
		}
	}
	CScratchRenderTargetSystem::TestRenderTargetBindingValidity(
					int nLayerCount,
					const LayerInfo_t* pLayerInfo);  // 2258
} /* size: 0, variables: 1, inline expansions: 1 (69 bytes) */

// <03758846> ../scenesystem/scratchrendertargetsystem.cpp:2273
// variable: 1
void CScratchRenderTargetSystem::OutputLayerInfo(int nLayerCount, const LayerInfo_t* pLayerInfo)
{
	CBufferString idName; // 2283
} /* size: 0, variables: 1 */

// <03757506> ../scenesystem/scratchrendertargetsystem.cpp:2273
// variables: 8
// function calls: 16
void CScratchRenderTargetSystem::OutputLayerInfo(int nLayerCount, const LayerInfo_t* pLayerInfo)
{
	CBufferString idName; // 2283
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 2283
	CSceneView::GetDebugName(); // 2284
	{
		int i; // 2285
		{
			const LayerInfo_t& layer; // 2287
			const char* pLayerName; // 2288
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 2288
			{
				int j; // 2292
				{
					const RenderTargetInfo_t& target; // 2294
					CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
							int i);  // 2294
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 776
					CBufferString::String(); // 2297
				}
			}
			{
				int j; // 2301
				{
					const RenderTargetInfo_t& target; // 2303
					CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
							int i);  // 2303
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 776
					CBufferString::String(); // 2305
				}
			}
		}
	}
	CBufferString::~CBufferString(); // 2310
} /* size: 775, variables: 1, inline expansions: 4 (46 bytes) */

// <0373D702> ../scenesystem/scratchrendertargetsystem.cpp:2273
// variables: 8
void CScratchRenderTargetSystem::OutputLayerInfo(int nLayerCount, const LayerInfo_t* pLayerInfo)
{
	CBufferString idName; // 2283
	{
		int i; // 2285
		{
			const LayerInfo_t& layer; // 2287
			const char* pLayerName; // 2288
			{
				int j; // 2292
				{
					const RenderTargetInfo_t& target; // 2294
				}
			}
			{
				int j; // 2301
				{
					const RenderTargetInfo_t& target; // 2303
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <037588D2> ../scenesystem/scratchrendertargetsystem.cpp:2319
// variable: 1
void CScratchRenderTargetSystem::OutputRenderTargetUsage(int nRenderTargetCount, const RenderTargetState_t* pState, LayerInfo_t* pLayerInfo)
{
	int nLayerCount; // 2331
} /* size: 0, variables: 1 */

// <03757B18> ../scenesystem/scratchrendertargetsystem.cpp:2319
// variables: 7
// function calls: 13
void CScratchRenderTargetSystem::OutputRenderTargetUsage(int nRenderTargetCount, const RenderTargetState_t* pState, LayerInfo_t* pLayerInfo)
{
	int nLayerCount; // 2331
	CSceneView::GetDebugName(); // 2329
	CUtlLinkedList<CSceneLayer::Count(); // 2331
	{
		int i; // 2332
		{
			int r; // 2335
			{
				int amax; // 2337
				{
					int a; // 2338
					{
						CBufferString renderTargetName; // 2343
						const RenderTargetInfo_t& target; // 2344
						CBufferString::InitMinConstruct(
								bool bGrowable);  // 712
						CBufferString::CBufferString(); // 2343
						CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
								int i);  // 588
						operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
								int i);  // 2344
						CBufferString::~CBufferString(); // 2347
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 776
						CBufferString::String(); // 2346
					}
				}
			}
		}
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 494
		CUtlLinkedList<CSceneLayer::operator[](
				int i);  // 2334
		ISceneLayer::GetDebugName(); // 2334
	}
} /* size: 688, variables: 1, inline expansions: 2 (21 bytes) */

// <0373D65E> ../scenesystem/scratchrendertargetsystem.cpp:2319
// variables: 7
void CScratchRenderTargetSystem::OutputRenderTargetUsage(int nRenderTargetCount, const RenderTargetState_t* pState, LayerInfo_t* pLayerInfo)
{
	int nLayerCount; // 2331
	{
		int i; // 2332
		{
			int r; // 2335
			{
				int amax; // 2337
				{
					int a; // 2338
					{
						CBufferString renderTargetName; // 2343
						const RenderTargetInfo_t& target; // 2344
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <03758972> ../scenesystem/scratchrendertargetsystem.cpp:2355
// variable: 1
void CScratchRenderTargetSystem::OutputRenderTargetInfo(int nRenderTargetCount, const RenderTargetState_t* pState)
{
	CBufferString renderTargetName; // 2365
} /* size: 0, variables: 1 */

// <03757F97> ../scenesystem/scratchrendertargetsystem.cpp:2355
// variables: 9
// function calls: 10
void CScratchRenderTargetSystem::OutputRenderTargetInfo(int nRenderTargetCount, const RenderTargetState_t* pState)
{
	CBufferString renderTargetName; // 2365
	CSceneView::GetDebugName(); // 2363
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 2365
	{
		int i; // 2366
		{
			const RenderTargetInfo_t& target; // 2368
			const RenderTargetState_t& state; // 2369
			int amax; // 2377
			CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
					int i);  // 2368
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 2371
			{
				int a; // 2378
				{
					const RenderTargetStateAlias_t& alias; // 2380
					bool bFoundUsage; // 2381
					bool bMSAA; // 2387
					CScratchRenderTargetSystem::IsAliasMultisampled(
								const RenderTargetState_t& state,
								RenderTargetAliasType_t nAlias);  // 2387
				}
			}
		}
	}
	CBufferString::~CBufferString(); // 2405
} /* size: 866, variables: 1, inline expansions: 4 (49 bytes) */

// <0373D5A7> ../scenesystem/scratchrendertargetsystem.cpp:2355
// variables: 9
void CScratchRenderTargetSystem::OutputRenderTargetInfo(int nRenderTargetCount, const RenderTargetState_t* pState)
{
	CBufferString renderTargetName; // 2365
	{
		int i; // 2366
		{
			const RenderTargetInfo_t& target; // 2368
			const RenderTargetState_t& state; // 2369
			int amax; // 2377
			{
				int a; // 2378
				{
					const RenderTargetStateAlias_t& alias; // 2380
					bool bFoundUsage; // 2381
					bool bMSAA; // 2387
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <037589FE> ../scenesystem/scratchrendertargetsystem.cpp:2407
void CScratchRenderTargetSystem::OutputRenderTargetBindings()
{
} /* size: 0 */

// <0375623A> ../scenesystem/scratchrendertargetsystem.cpp:2407
// variables: 16
// function calls: 33
void CScratchRenderTargetSystem::OutputRenderTargetBindings()
{
	CUtlLinkedList<CSceneLayer::Count(); // 2415
	CSceneView::GetDebugName(); // 2415
	{
		int l; // 2416
		int i; // 2416
		CUtlLinkedList<CSceneLayer::Head(); // 2416
		{
			CSceneLayer* pLayer; // 2418
			const char* pLayerName; // 2419
			bool bHasOutputRenderAttributesHeader; // 2443
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 2418
			{
				int j; // 2424
				{
					HRenderTexture hTexture; // 2426
					const CTextureDesc* pTextureDesc; // 2427
					RenderMultisampleType_t nType; // 2428
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2426
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2427
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2428
					CStrongHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 2429
				}
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 2433
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 2433
			{
				HRenderTexture hTexture; // 2435
				const CTextureDesc* pTextureDesc; // 2436
				RenderMultisampleType_t nType; // 2437
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2435
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2436
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2437
				CStrongHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 2438
			}
			{
				const OverflowChunk_t& p; // 433
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 15362
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 15372
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 15382
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 433
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::VisitAllAttributes<CScratchRenderTargetSystem::OutputRenderTargetBindings(
																 f);  // 2444
		}
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 368
		CUtlLinkedList<CSceneLayer::InternalElement(
				int i);  // 550
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 2416
	}
} /* size: 949, inline expansions: 2 (22 bytes) */

// <0373D3FE> ../scenesystem/scratchrendertargetsystem.cpp:2407
// variables: 12
void CScratchRenderTargetSystem::OutputRenderTargetBindings()
{
	{
		int l; // 2416
		int i; // 2416
		{
			CSceneLayer* pLayer; // 2418
			const char* pLayerName; // 2419
			bool bHasOutputRenderAttributesHeader; // 2443
			{
				int j; // 2424
				{
					HRenderTexture hTexture; // 2426
					const CTextureDesc* pTextureDesc; // 2427
					RenderMultisampleType_t nType; // 2428
				}
			}
			{
				HRenderTexture hTexture; // 2435
				const CTextureDesc* pTextureDesc; // 2436
				RenderMultisampleType_t nType; // 2437
			}
		}
	}
} /* size: 0 */

// <0373C1BF> ../scenesystem/scratchrendertargetsystem.cpp:2465
// variables: 22
// function calls: 63
void CScratchRenderTargetSystem::ValidateLegalRenderTargets()
{
	CBufferString srtName; // 2472
	int nSRTViewIndex; // 2473
	const char   __FUNCTION__; // 14275
	{
		int l; // 2476
		{
			CSceneLayer* pLayer; // 2478
			const SceneLayerOutputs_t& output; // 2480
			{
				int j; // 2481
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2483
				}
				{
					CSceneView* pOtherView; // 2487
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2489
						CSceneView::GetDebugName(); // 2489
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 776
						CBufferString::String(); // 2489
						CSceneView::GetDebugName(); // 2489
					}
					CUtlMemory<CSceneView::operator[](
							int i);  // 595
					CUtlVectorBase<CSceneView::operator[](
							int i);  // 1751
					CSceneSystem::GetViewByIndex(
							int nIndex);  // 2487
				}
				CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
								HSceneViewRenderTarget hTarget);  // 2484
				CSceneView::GetViewIndex(); // 2485
			}
			{
				CSceneView* pOtherView; // 2500
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2502
					CSceneView::GetDebugName(); // 2502
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 776
					CBufferString::String(); // 2502
					CSceneView::GetDebugName(); // 2502
				}
				CUtlMemory<CSceneView::operator[](
						int i);  // 595
				CUtlVectorBase<CSceneView::operator[](
						int i);  // 1751
				CSceneSystem::GetViewByIndex(
						int nIndex);  // 2500
			}
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 2478
			CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
							HSceneViewRenderTarget hTarget);  // 2497
			CSceneView::GetViewIndex(); // 2498
			CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::GetRoot(); // 2508
			{
				int i; // 95
				CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
								HSceneViewRenderTarget hTarget);  // 2510
				CSceneView::GetViewIndex(); // 2511
				{
					CSceneView* pOtherView; // 2513
					CUtlMemory<CSceneView::operator[](
							int i);  // 595
					CUtlVectorBase<CSceneView::operator[](
							int i);  // 1751
					CSceneSystem::GetViewByIndex(
							int nIndex);  // 2513
					{
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 776
						CBufferString::String(); // 2515
					}
				}
				operator()(const class* __closure,
						uint32 nAttributeKey,
						const RenderTargetAttribute_t& attributeValue); // 99
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::VisitAllAttributes<CScratchRenderTargetSystem::ValidateLegalRenderTargets(
																 f);  // 432
			{
				const OverflowChunk_t& p; // 433
				const CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 15268
				CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 15278
				CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 15288
				CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::begin(); // 433
				CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::end(); // 433
				{
					int i; // 95
					CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
									HSceneViewRenderTarget hTarget);  // 2510
					CSceneView::GetViewIndex(); // 2511
					{
						CSceneView* pOtherView; // 2513
						CUtlMemory<CSceneView::operator[](
								int i);  // 595
						CUtlVectorBase<CSceneView::operator[](
								int i);  // 1751
						CSceneSystem::GetViewByIndex(
								int nIndex);  // 2513
						CSceneView::GetViewIndex(); // 42
						{
						}
						CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
										HSceneViewRenderTarget hTarget);  // 118
						CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this,
								int i);  // 119
						CScratchRenderTargetSystem::GetRenderTargetName(
									HSceneViewRenderTarget hTarget,
									CBufferString* pBuf);  // 2514
						{
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 776
							CBufferString::String(); // 2515
						}
					}
					operator()(const class* __closure,
							uint32 nAttributeKey,
							const RenderTargetAttribute_t& attributeValue); // 99
				}
				CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::VisitAllAttributes<CScratchRenderTargetSystem::ValidateLegalRenderTargets(
																 f);  // 435
				CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 433
			}
			CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::VisitAllAttributes<CScratchRenderTargetSystem::ValidateLegalRenderTargets(
																 f);  // 2508
		}
		CUtlLinkedList<CSceneLayer::Head(); // 2476
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 368
		CUtlLinkedList<CSceneLayer::InternalElement(
				int i);  // 550
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 2476
	}
	CSceneView::GetViewIndex(); // 2469
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 2472
	CBufferString::~CBufferString(); // 2522
} /* size: 0, variables: 3, inline expansions: 4 (38 bytes) */

// <0373BAEF> ../scenesystem/scratchrendertargetsystem.cpp:2528
// variables: 5
// function calls: 16
void CScratchRenderTargetSystem::ComputeRenderTargetAllocations()
{
	CScratchRenderTargetEditScope srtEditScope; // 2530
	int nRenderTargetCount; // 2535
	LayerInfo_t* pLayerInfo; // 2545
	int nLayerCount; // 2546
	RenderTargetState_t* pState; // 2555
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 1715
	CSceneSystem::GetScratchRenderTargetMutex(); // 1715
	CSceneSystem::IncrementSRTMutexLockCount(
					int nAmount);  // 1716
	CScratchRenderTargetEditScope::CScratchRenderTargetEditScope(); // 2530
	Count(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this); // 2535
	CUtlLinkedList<CSceneLayer::Count(); // 2545
	CScratchRenderTargetSystem::OutputLayerInfo(
			int nLayerCount,
			const LayerInfo_t* pLayerInfo);  // 2552
	CScratchRenderTargetSystem::OutputRenderTargetUsage(
				int nRenderTargetCount,
				const RenderTargetState_t* pState,
				LayerInfo_t* pLayerInfo);  // 2560
	CScratchRenderTargetSystem::OutputRenderTargetInfo(
				int nRenderTargetCount,
				const RenderTargetState_t* pState);  // 2562
	CScratchRenderTargetSystem::OutputRenderTargetBindings(); // 2564
	CSceneSystem::IncrementSRTMutexLockCount(
					int nAmount);  // 1721
	CScratchRenderTargetEditScope::~CScratchRenderTargetEditScope(); // 2567
	CSceneSystem::IncrementSRTMutexLockCount(
					int nAmount);  // 1721
	CSceneSystem::GetScratchRenderTargetMutex(); // 1722
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1722
	CScratchRenderTargetEditScope::~CScratchRenderTargetEditScope(); // 2567
} /* size: 773, variables: 5, inline expansions: 16 (435 bytes) */

// <0373B7B0> ../scenesystem/scratchrendertargetsystem.cpp:2569
// variables: 2
// function calls: 12
void CScratchRenderTargetSystem::IsNonSampleableRenderTarget(HSceneViewRenderTarget hRenderTarget)
{
	int nIndex; // 2574
	const RenderTargetInfo_t& target; // 2575
	CSceneView::GetViewIndex(); // 42
	CScratchRenderTargetSystem::RenderTargetHandleToViewIndex(
					HSceneViewRenderTarget hTarget);  // 44
	{
		CUtlMemory<CSceneView::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneView::operator[](
				int i);  // 1751
		CSceneSystem::GetViewByIndex(
				int nIndex);  // 44
	}
	CScratchRenderTargetSystem::RenderTargetHandleToLocalIndex(
					HSceneViewRenderTarget hTarget);  // 2574
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSy this,
			int i);  // 2575
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2579
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2579
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

