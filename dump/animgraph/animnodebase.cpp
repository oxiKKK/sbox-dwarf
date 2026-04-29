
//
// animgraph/animnodebase.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 46
//

// <0108A20D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:12
void IAnimNode::GetTypeInfo()
{
} /* size: 0 */

// <0108A07A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:12
// function calls: 3
void* IAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimNode>::CastTo(
		IAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01089EE7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:12
// function calls: 3
const void* IAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimNode>::CastTo(
		const IAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0109474C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:15
void MyTypeInfo(void)
{
} /* size: 12 */

// <01089E4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:15
void CAnimNodeBase::GetTypeInfo()
{
} /* size: 12 */

// <01089CBB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:15
// function calls: 3
void* CAnimNodeBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimNodeBase>::CastTo(
		CAnimNodeBase* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (206 bytes) */

// <01089B28> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:15
// function calls: 3
const void* CAnimNodeBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimNodeBase>::CastTo(
		const CAnimNodeBase* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (206 bytes) */

// <010898C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:19
// function calls: 9
void CAnimNodeBase::CAnimNodeBase()
{
	Object::Object(); // 30
	IAnimNode::IAnimNode(); // 19
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 19
	CUtlString::CUtlString(
			const char* pString);  // 19
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 19
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 19
	AnimNodeID::AnimNodeID(); // 19
	CUtlString::CUtlString(); // 19
} /* size: 110, inline expansions: 9 (63 bytes) */

// <010898AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:19
void CAnimNodeBase::CAnimNodeBase()
{
} /* size: 0 */

// <0109476A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:25
// function calls: 14
void CAnimNodeBase::GetContext()
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphContext>(CAnimGraphContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 370
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 406
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 27
} /* size: 89, inline expansions: 14 (333 bytes) */

// <01094A35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:31
void CAnimNodeBase::GetContext()
{
} /* size: 9 */

// <01093F9C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:37
// function calls: 13
void CAnimNodeBase::SetContext(const CAnimGraphContextPtr& context)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphContext>(CAnimGraphContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 370
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 406
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 39
} /* size: 97, inline expansions: 13 (287 bytes) */

// <01089853> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:37
void CAnimNodeBase::SetContext(const CAnimGraphContextPtr& context)
{
} /* size: 0 */

// <01089777> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:43
// variables: 2
// function calls: 2
void CAnimNodeBase::GetGraph()
{
	const char   __FUNCTION__; // 19832
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 45
	}
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator bool(); // 45
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 47
} /* size: 0, variables: 1, inline expansions: 2 (8 bytes) */

// <0108969B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:51
// variables: 2
// function calls: 2
void CAnimNodeBase::GetGraph()
{
	const char   __FUNCTION__; // 19832
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 53
	}
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator bool(); // 53
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 55
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <010900C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:59
void CAnimNodeBase::GetName()
{
} /* size: 9 */

// <010895C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:65
// function call: 1
void CAnimNodeBase::SetInputConnection(int index, CNodeConnection connection)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 67
} /* size: 65, inline expansions: 1 (5 bytes) */

// <0108959D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:71
void CAnimNodeBase::GetOutputID(int index)
{
} /* size: 0 */

// <0108955F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:77
void CAnimNodeBase::GetOutputIndex(AnimOutputID outputID)
{
} /* size: 7 */

// <01089531> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:83
void CAnimNodeBase::GetOutputCount()
{
} /* size: 7 */

// <01089519> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:89
void CAnimNodeBase::HasOutputs()
{
} /* size: 0 */

// <010894B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:95
// function call: 1
void CAnimNodeBase::GetOutputNodeID(AnimOutputID outputID)
{
	AnimNodeID::AnimNodeID(); // 97
} /* size: 14, inline expansions: 1 (6 bytes) */

// <01089246> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:101
// variables: 2
// function calls: 7
void CAnimNodeBase::GetOutputNodeLocation(AnimOutputID outputID, const AnimNodePath& nodePath)
{
	const char   __FUNCTION__; // 20168
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 103
	}
	AnimNodeID::AnimNodeID(); // 20
	CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimNodeID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(); // 20
	AnimNodeLocation_t::AnimNodeLocation_t(); // 105
} /* size: 55, variables: 1, inline expansions: 7 (12 bytes) */

// <010891E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:109
// function call: 1
void CAnimNodeBase::GetChildOutputID(int index)
{
	AnimOutputID::AnimOutputID(); // 111
} /* size: 14, inline expansions: 1 (6 bytes) */

// <01088ED6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:115
// variable: 1
// function calls: 10
void CAnimNodeBase::GetUIName()
{
	{
		const FriendlyName* pFriendlyName; // 119
		MyTypeID(void); // 53
		CAttributeContainer::GetAttribute<Attribute::FriendlyName>(); // 119
		FriendlyName::Get(); // 122
		CUtlString::CUtlString(
				const char* pString);  // 122
		CClassInfo::GetName(); // 126
		CUtlString::CUtlString(
				const char* pString);  // 126
	}
	CUtlString::IsEmpty(); // 117
	operator==(const CUtlString& utlString,
			const char* pString);  // 117
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 131
} /* size: 336, inline expansions: 4 (82 bytes) */

// <01088EA8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:137
void CAnimNodeBase::IsRootNode()
{
} /* size: 7 */

// <01088E7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:143
void CAnimNodeBase::GetPosition()
{
} /* size: 9 */

// <01088D39> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:149
// function calls: 4
void CAnimNodeBase::SetName(const CUtlString& name)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 151
} /* size: 86, inline expansions: 4 (106 bytes) */

// <010900F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:155
// function call: 1
void CAnimNodeBase::GetNodeID()
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 157
} /* size: 13, inline expansions: 1 (5 bytes) */

// <01088D20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:155
void CAnimNodeBase::GetNodeID()
{
} /* size: 0 */

// <01088CA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:161
// function call: 1
void CAnimNodeBase::SetNodeID(AnimNodeID newID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 163
} /* size: 10, inline expansions: 1 (5 bytes) */

// <01088C2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:167
// function call: 1
void CAnimNodeBase::SetPosition(const Vector2D& pos)
{
	Vector2D::operator=(
			const Vector2D& vOther);  // 169
} /* size: 24, inline expansions: 1 (19 bytes) */

// <0109014A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:173
void CAnimNodeBase::GetNote()
{
} /* size: 9 */

// <01088AD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:179
// function calls: 4
void CAnimNodeBase::SetNote(const CUtlString& name)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 181
} /* size: 86, inline expansions: 4 (106 bytes) */

// <01088AA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:185
void CAnimNodeBase::ShowVisualizer()
{
} /* size: 10 */

// <01088A75> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:191
void CAnimNodeBase::GetParentCount()
{
} /* size: 10 */

// <01092D1B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:197
// function calls: 2
void CAnimNodeBase::GetParentName(int parentIndex)
{
	CUtlString::CUtlString(
			const char* pString);  // 199
	CAnimNodeBase::GetParentName(
			int parentIndex);  // 197
} /* size: 146, inline expansions: 2 (99 bytes) */

// <01088A3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:197
// variable: 1
void CAnimNodeBase::GetParentName(int parentIndex)
{
	CUtlString sParentPlugName; // 199
} /* size: 0, variables: 1 */

// <01088A22> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:204
void CAnimNodeBase::GetParamCount()
{
} /* size: 0 */

// <01088963> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:210
// variables: 2
// function call: 1
void CAnimNodeBase::GetParamID(int index)
{
	const char   __FUNCTION__; // 19886
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
	AnimParamID::AnimParamID(); // 214
} /* size: 43, variables: 1, inline expansions: 1 (6 bytes) */

// <0108894B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:218
void CAnimNodeBase::GetTagCount()
{
} /* size: 0 */

// <0108888C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:224
// variables: 2
// function call: 1
void CAnimNodeBase::GetTagID(int index)
{
	const char   __FUNCTION__; // 19832
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 226
	}
	AnimTagID::AnimTagID(); // 228
} /* size: 43, variables: 1, inline expansions: 1 (6 bytes) */

// <01087AB1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:232
// variables: 8
// function calls: 49
void CAnimNodeBase::LogInternal(LogSeverity logSeverity, const char* pModelName, const AnimNodeLocation_t& nodeLocation, const char* pMsgFormat, typedef __va_list_tag __va_list_tag* args)
{
	CUtlString str; // 234
	const char* pName; // 240
	CUtlString path; // 242
	IAnimNodeManager* pNodeManager; // 244
	const CUtlString  message; // 262
	{
		int i; // 246
		{
			IAnimNode* pNode; // 251
			CUtlString::~CUtlString(); // 255
			CUtlString::~CUtlString(); // 255
			CUtlMemory<AnimNodeID, int>::operator[](
					int i);  // 595
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator[](
					int i);  // 257
			AnimNodeID::AnimNodeID(
					const AnimNodeID& rhs);  // 257
			CUtlMemory<AnimNodeID, int>::operator[](
					int i);  // 595
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator[](
					int i);  // 251
			AnimNodeID::AnimNodeID(
					const AnimNodeID& rhs);  // 251
		}
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 246
	}
	CUtlString::CUtlString(); // 234
	CUtlString::CUtlString(); // 242
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 244
	CUtlString::Get(); // 99
	CUtlString::String(); // 260
	CUtlString::~CUtlString(); // 260
	CUtlString::Get(); // 99
	CUtlString::String(); // 262
	CUtlString::Get(); // 99
	CUtlString::String(); // 262
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 262
	CUtlString::CUtlString(
			const char* pString);  // 262
	CUtlString::Get(); // 99
	CUtlString::String(); // 263
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 262
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 263
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 198
	LoggingMetaData_t::LoggingMetaData_t(
				uint64 TypeID,
				uint8* pData,
				size_t nDataSize,
				LoggingVerbosity_t verbosity);  // 171
	{
		int nLinkCommandLen; // 174
		V_strlen(const char* str); // 174
		DWordSwapC<unsigned int>(unsigned int dw); // 181
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 182
	}
	CLoggingMetaCommandLink::CLoggingMetaCommandLink(
				const char* pLinkCommand,
				LoggingVerbosity_t verbosity,
				CommandLinkFlags_e nFlags);  // 198
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 198
	CLoggingMetaCommandLinkOpenAsset::CLoggingMetaCommandLinkOpenAsset(
					const char* pAssetName);  // 263
	CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 194
	CLoggingMetaCommandLinkOpenAsset::~CLoggingMetaCommandLinkOpenAsset(); // 263
	CUtlString::~CUtlString(); // 264
	CUtlString::~CUtlString(); // 264
	CUtlString::~CUtlString(); // 264
} /* size: 1277, variables: 5, inline expansions: 36 (1597 bytes) */

// <010879B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:266
// variable: 1
// function call: 1
void CAnimNodeBase::LogAnimInfo(const CAnimGraphInitContext& context, const char* pMsgFormat, ...)
{
	va_list args; // 268
	CAnimGraphInitContext::GetNodeLocation(); // 270
} /* size: 235, variables: 1, inline expansions: 1 (4 bytes) */

// <010878B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:275
// variable: 1
// function call: 1
void CAnimNodeBase::LogAnimWarning(const CAnimGraphInitContext& context, const char* pMsgFormat, ...)
{
	va_list args; // 277
	CAnimGraphInitContext::GetNodeLocation(); // 279
} /* size: 238, variables: 1, inline expansions: 1 (4 bytes) */

// <010877BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:284
// variable: 1
// function call: 1
void CAnimNodeBase::LogAnimError(const CAnimGraphInitContext& context, const char* pMsgFormat, ...)
{
	va_list args; // 286
	CAnimGraphInitContext::GetNodeLocation(); // 288
} /* size: 238, variables: 1, inline expansions: 1 (4 bytes) */

