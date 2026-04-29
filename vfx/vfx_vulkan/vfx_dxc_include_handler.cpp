
//
// vfx/vfx_vulkan/vfx_dxc_include_handler.cpp
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 7
//

// <0018E8D5> vfx/vfx_vulkan/vfx_dxc_include_handler.cpp:9
// function calls: 2
void CVfxDxcIncludeHandler::CVfxDxcIncludeHandler(IDxcUtils* pDxcUtils, ShaderCompileContext* context)
{
	IUnknown::IUnknown(); // 234
	IDxcIncludeHandler::IDxcIncludeHandler(); // 9
} /* size: 41, inline expansions: 2 (0 bytes) */

// <0018E8A4> vfx/vfx_vulkan/vfx_dxc_include_handler.cpp:9
void CVfxDxcIncludeHandler::CVfxDxcIncludeHandler(IDxcUtils* pDxcUtils, ShaderCompileContext* context)
{
} /* size: 0 */

// <0018E858> vfx/vfx_vulkan/vfx_dxc_include_handler.cpp:15
void CVfxDxcIncludeHandler::QueryInterface(REFIID riid, void** ppvObject)
{
} /* size: 10 */

// <0018E82A> vfx/vfx_vulkan/vfx_dxc_include_handler.cpp:22
void CVfxDxcIncludeHandler::AddRef()
{
} /* size: 17 */

// <0018E7CC> vfx/vfx_vulkan/vfx_dxc_include_handler.cpp:27
// variable: 1
void CVfxDxcIncludeHandler::Release()
{
	long unsigned int ref; // 29
} /* size: 52, variables: 1 */

// <001899F9> vfx/vfx_vulkan/vfx_dxc_include_handler.cpp:38
bool ReadVfxFile(const char *, CUtlBuffer &)
{
} /* size: 0 */

// <0018CFB4> vfx/vfx_vulkan/vfx_dxc_include_handler.cpp:40
// variables: 9
// function calls: 87
void CVfxDxcIncludeHandler::LoadSource(LPCWSTR pWFilename, IDxcBlob** ppIncludeSource)
{
	CStrAutoEncode strFilename; // 48
	CUtlString pFilename; // 49
	IDxcBlobEncoding* source; // 63
	CUtlBuffer buf; // 65
	CUtlBuffer* cache; // 66
	HRESULT hr; // 107
	{
		const char* pCurFilename; // 80
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 80
		CUtlString::Get(); // 86
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 86
	}
	CStrAutoEncode::Set(
		const uchar32* pch32);  // 492
	CStrAutoEncode::CStrAutoEncode(
			const uchar32* pch32);  // 48
	CStrAutoEncode::ToString(); // 49
	CUtlString::CUtlString(
			const char* pString);  // 49
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 57
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 66
	__glibcxx_rwlock_rdlock(pthread_rwlock_t* __rwlock); // 236
	__shared_mutex_pthread::lock_shared(); // 433
	shared_mutex::lock_shared(); // 745
	shared_lock<std::shared_mutex>::shared_lock(
			mutex_type& __m);  // 105
	CUtlRBTree<CUtlMap<char const::FindAltKeyType<char const*>(
					const char* const& search);  // 243
	CUtlMap<char const::Find(
		const KeyType_t& key);  // 360
	CUtlDict<CUtlBuffer::Find(
		const char* pName);  // 107
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 539
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 92
	CUtlMap<char const::operator[](
			IndexType_t i);  // 180
	CUtlDict<CUtlBuffer::Element(
		int i);  // 207
	CUtlDict<CUtlBuffer::operator[](
			int i);  // 110
	__glibcxx_rwlock_unlock(pthread_rwlock_t* __rwlock); // 220
	__shared_mutex_pthread::unlock(); // 260
	__shared_mutex_pthread::unlock_shared(); // 435
	shared_mutex::unlock_shared(); // 771
	shared_lock<std::shared_mutex>::~shared_lock(); // 111
	ShaderCompileContext::GetInclude(
			const char* name);  // 66
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 70
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 99
	__glibcxx_rwlock_wrlock(pthread_rwlock_t* __rwlock); // 200
	__shared_mutex_pthread::lock(); // 427
	shared_mutex::lock(); // 144
	unique_lock<std::shared_mutex>::lock(); // 75
	unique_lock<std::shared_mutex>::unique_lock(
			mutex_type& __m);  // 89
	CUtlRBTree<CUtlMap<char const::FindAltKeyType<char const*>(
					const char* const& search);  // 243
	CUtlMap<char const::Find(
		const KeyType_t& key);  // 360
	CUtlDict<CUtlBuffer::Find(
		const char* pName);  // 91
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 539
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 92
	CUtlMap<char const::operator[](
			IndexType_t i);  // 180
	CUtlDict<CUtlBuffer::Element(
		int i);  // 207
	CUtlDict<CUtlBuffer::operator[](
			int i);  // 93
	__glibcxx_rwlock_unlock(pthread_rwlock_t* __rwlock); // 220
	__shared_mutex_pthread::unlock(); // 429
	shared_mutex::unlock(); // 203
	unique_lock<std::shared_mutex>::unlock(); // 114
	unique_lock<std::shared_mutex>::~unique_lock(); // 101
	CUtlBuffer::TellMaxPut(); // 95
	CUtlBuffer::TellMaxPut(); // 96
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 96
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 539
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 617
	CUtlRBTree<CUtlMap<char const::RightChild(
			int i);  // 1677
	CUtlRBTree<CUtlMap<char const::FindInsertionPosition(
				const Node_t& insert,
				bool bCheckForDuplicates,
				int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		int newNode; // 1709
		{
		}
	}
	{
		int newNode; // 1696
	}
	CUtlRBTree<CUtlMap<char const::Insert(
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 207
	CUtlMap<char const::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 343
	CUtlDict<CUtlBuffer::Insert(
		const char* pName,
		CUtlBuffer* const& element,
		ERBTreeInsertBehavior eInsertBehavior);  // 98
	ShaderCompileContext::StoreInclude(
			const char* name,
			CUtlBuffer& buffer);  // 99
	CUtlBuffer::TellMaxPut(); // 107
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 107
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 117
	CUtlString::~CUtlString(); // 117
	CStrAutoEncode::~CStrAutoEncode(); // 117
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 110
	CUtlString::Get(); // 59
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 59
} /* size: 0, variables: 6, inline expansions: 82 (2680 bytes) */

