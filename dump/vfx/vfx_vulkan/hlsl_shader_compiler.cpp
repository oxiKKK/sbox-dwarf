
//
// vfx/vfx_vulkan/hlsl_shader_compiler.cpp
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 55
//	classes: 4
//	structs: 2
//

// <0013AFC1> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:27
void DxcAttributeOptions_t::DxcAttributeOptions_t()
{
} /* size: 0 */

// <0013AFA5> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:27
inline void DxcAttributeOptions_t::DxcAttributeOptions_t()
{
} /* size: 0 */

// <0013AF8E> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:27
void DxcAttributeOptions_t::~DxcAttributeOptions_t()
{
} /* size: 0 */

// <0013AF72> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:27
inline void DxcAttributeOptions_t::~DxcAttributeOptions_t()
{
} /* size: 0 */

// <0011E3CF> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:27
// member functions: 2
// member variables: 6
// struct size: 24
struct DxcAttributeOptions_t {
	int32 m_nGlobalCBufferBinding; /* 0 4 */
	int32 m_nGlobalCBufferSet; /* 4 4 */
	CUtlString m_strTargetSpirVEnv; /* 8 8 */
	bool m_bForceLoopUnrollPass; /* 16 1 */
	bool m_bGenerateDebugInfo; /* 17 1 */
	uint16 m_nRequiredSubgroupSize; /* 18 2 */
	void ~DxcAttributeOptions_t(DxcAttributeOptions_t* );
	void DxcAttributeOptions_t(DxcAttributeOptions_t* );
};

// <001426EF> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:42
void CSource2Malloc::CSource2Malloc()
{
} /* size: 0 */

// <001426D3> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:42
inline void CSource2Malloc::CSource2Malloc()
{
} /* size: 0 */

// <0012A2F8> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:42
// member functions: 13
// member variables: 2
// vtable entries: 9
// struct size: 16
struct CSource2Malloc : public IMalloc {
public:
	/* struct IMalloc <ancestor>; */ /* 0 8 */
	void ~CSource2Malloc(CSource2Malloc* );
	void CSource2Malloc(CSource2Malloc* , CSource2Malloc& );
	void CSource2Malloc(CSource2Malloc* , const CSource2Malloc& );
	void CSource2Malloc(CSource2Malloc* );
	ULONG RefCount; /* 8 8 */
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:50 */
	virtual void* Alloc(CSource2Malloc* , SIZE_T);
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:56 */
	virtual void* Realloc(CSource2Malloc* , void* , SIZE_T);
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:62 */
	virtual void Free(CSource2Malloc* , void* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:67 */
	virtual SIZE_T GetSize(CSource2Malloc* , void* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:72 */
	virtual int DidAlloc(CSource2Malloc* , void* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:77 */
	virtual void HeapMinimize(CSource2Malloc* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:84 */
	virtual ULONG AddRef(CSource2Malloc* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:89 */
	virtual ULONG Release(CSource2Malloc* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:94 */
	virtual HRESULT QueryInterface(CSource2Malloc* , REFIID, void** );
};

// <001429CA> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:50
// function call: 1
void* CSource2Malloc::Alloc(SIZE_T cb)
{
	Max<long unsigned int>(const long unsigned int& val1,
				const long unsigned int& val2);  // 52
} /* size: 24, inline expansions: 1 (15 bytes) */

// <00142914> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:56
// function call: 1
void* CSource2Malloc::Realloc(void* pv, SIZE_T cb)
{
	Max<long unsigned int>(const long unsigned int& val1,
				const long unsigned int& val2);  // 58
} /* size: 27, inline expansions: 1 (15 bytes) */

// <001428B5> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:62
void CSource2Malloc::Free(void* pv)
{
} /* size: 12 */

// <00142856> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:67
void CSource2Malloc::GetSize(void* pv)
{
} /* size: 12 */

// <00142818> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:72
void CSource2Malloc::DidAlloc(void* pv)
{
} /* size: 10 */

// <001427E8> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:77
void CSource2Malloc::HeapMinimize()
{
} /* size: 5 */

// <001427B8> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:84
void CSource2Malloc::AddRef()
{
} /* size: 17 */

// <00142788> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:89
void CSource2Malloc::Release()
{
} /* size: 17 */

// <0014273A> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:94
void CSource2Malloc::QueryInterface(REFIID iid, void** ppvObject)
{
} /* size: 10 */

// <001426A9> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:100
// variable: 1
IMalloc* GetDxcMalloc(void)
{
	CSource2Malloc Instance; // 102
} /* size: 0, variables: 1 */

// <0013C7E3> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
void CCOMPtr<IDxcBlobUtf8>::CCOMPtr()
{
} /* size: 0 */

// <0013C7C7> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
inline void CCOMPtr<IDxcBlobUtf8>::CCOMPtr()
{
} /* size: 0 */

// <0013C7B0> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
void CCOMPtr<IDxcBlobUtf8>::~CCOMPtr()
{
} /* size: 0 */

// <0013C794> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
inline void CCOMPtr<IDxcBlobUtf8>::~CCOMPtr()
{
} /* size: 0 */

// <0013C77D> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
void CCOMPtr<IDxcBlob>::CCOMPtr()
{
} /* size: 0 */

// <0013C761> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
inline void CCOMPtr<IDxcBlob>::CCOMPtr()
{
} /* size: 0 */

// <0013C74A> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
void CCOMPtr<IDxcBlob>::~CCOMPtr()
{
} /* size: 0 */

// <0013C72E> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
inline void CCOMPtr<IDxcBlob>::~CCOMPtr()
{
} /* size: 0 */

// <0013C717> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
void CCOMPtr<IDxcResult>::CCOMPtr()
{
} /* size: 0 */

// <0013C6FB> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
inline void CCOMPtr<IDxcResult>::CCOMPtr()
{
} /* size: 0 */

// <0013C6E4> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
void CCOMPtr<IDxcResult>::~CCOMPtr()
{
} /* size: 0 */

// <0013C6C8> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
inline void CCOMPtr<IDxcResult>::~CCOMPtr()
{
} /* size: 0 */

// <0012545A> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
// member functions: 3
// member variable: 1
// class size: 8
class CCOMPtr<IDxcBlobUtf8> : public CAutoRelease<IDxcBlobUtf8> {
public:
	/* class CAutoRelease<IDxcBlobUtf8> <ancestor>; */ /* 0 8 */
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:113 */
	IDxcBlobUtf8** operator&(CCOMPtr<IDxcBlobUtf8>* );
	void ~CCOMPtr(CCOMPtr<IDxcBlobUtf8>* );
	void CCOMPtr(CCOMPtr<IDxcBlobUtf8>* );
};

// <00125727> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
// member functions: 6
// member variable: 1
// class size: 8
class CCOMPtr<IDxcBlob> : public CAutoRelease<IDxcBlob> {
public:
	/* class CAutoRelease<IDxcBlob> <ancestor>; */ /* 0 8 */
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:113 */
	IDxcBlob** operator&(CCOMPtr<IDxcBlob>* );
	void ~CCOMPtr(CCOMPtr<IDxcBlob>* );
	void CCOMPtr(CCOMPtr<IDxcBlob>* );
	class IDxcBlob * * operator&(class CCOMPtr<IDxcBlob> *); /* linkage=_ZN7CCOMPtrI8IDxcBlobEadEv */
	void ~CCOMPtr(class CCOMPtr<IDxcBlob> *); /* linkage=_ZN7CCOMPtrI8IDxcBlobED4Ev */
	void CCOMPtr(class CCOMPtr<IDxcBlob> *); /* linkage=_ZN7CCOMPtrI8IDxcBlobEC4Ev */
};

// <001259F4> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:110
// member functions: 6
// member variable: 1
// class size: 8
class CCOMPtr<IDxcResult> : public CAutoRelease<IDxcResult> {
public:
	/* class CAutoRelease<IDxcResult> <ancestor>; */ /* 0 8 */
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:113 */
	IDxcResult** operator&(CCOMPtr<IDxcResult>* );
	void ~CCOMPtr(CCOMPtr<IDxcResult>* );
	void CCOMPtr(CCOMPtr<IDxcResult>* );
	class IDxcResult * * operator&(class CCOMPtr<IDxcResult> *); /* linkage=_ZN7CCOMPtrI10IDxcResultEadEv */
	void ~CCOMPtr(class CCOMPtr<IDxcResult> *); /* linkage=_ZN7CCOMPtrI10IDxcResultED4Ev */
	void CCOMPtr(class CCOMPtr<IDxcResult> *); /* linkage=_ZN7CCOMPtrI10IDxcResultEC4Ev */
};

// <001311C9> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:113
inline void CCOMPtr<IDxcResult>::operator&()
{
} /* size: 0 */

// <00131197> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:113
inline void CCOMPtr<IDxcBlobUtf8>::operator&()
{
} /* size: 0 */

// <0013114C> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:113
inline void CCOMPtr<IDxcBlob>::operator&()
{
} /* size: 0 */

// <0014212E> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:122
// variables: 8
// function calls: 16
void CHLSLShaderCompiler::CHLSLShaderCompiler()
{
	{
		IDxcCompiler3* pDxcCompiler; // 131
		IDxcUtils* pDxcUtils; // 132
		IMalloc* pMemoryAllocator; // 135
		HRESULT hr; // 137
	}
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 129
	CUtlString::CUtlString(); // 129
	{
		IDxcCompiler3* pDxcCompiler; // 131
		IDxcUtils* pDxcUtils; // 132
		IMalloc* pMemoryAllocator; // 135
		HRESULT hr; // 137
		IUnknown::IUnknown(); // 587
		IMalloc::IMalloc(); // 42
		CSource2Malloc::CSource2Malloc(); // 102
		GetDxcMalloc(void); // 135
		__emulated_uuidof<IDxcCompiler3>(void); // 137
		__emulated_uuidof<IDxcUtils>(void); // 143
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 146
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 140
	}
} /* size: 533, inline expansions: 6 (88 bytes) */

// <001420E0> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:122
// variables: 4
void CHLSLShaderCompiler::CHLSLShaderCompiler()
{
	{
		IDxcCompiler3* pDxcCompiler; // 131
		IDxcUtils* pDxcUtils; // 132
		IMalloc* pMemoryAllocator; // 135
		HRESULT hr; // 137
	}
} /* size: 0 */

// <00141E75> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:154
// function calls: 11
void CHLSLShaderCompiler::~CHLSLShaderCompiler()
{
	CUtlString::~CUtlString(); // 167
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 167
} /* size: 122, inline expansions: 11 (146 bytes) */

// <00141E59> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:154
void CHLSLShaderCompiler::~CHLSLShaderCompiler()
{
} /* size: 0 */

// <0013C816> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:169
void DxcArguments::~DxcArguments()
{
} /* size: 0 */

// <0013C7FA> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:169
inline void DxcArguments::~DxcArguments()
{
} /* size: 0 */

// <00123BB5> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:169
// member functions: 8
// member variables: 2
// class size: 48
class DxcArguments {
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:172 */
	void AddArgument(DxcArguments* , const char* , const char* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:183 */
	const wchar_t* * GetArguments(DxcArguments* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.cpp:193 */
	size_t GetNumArguments(const DxcArguments* );
private:
	vector<wchar_t const*, std::allocator<wchar_t const*> > m_ArgumentArr; /* 0 24 */
	vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > > > m_Arguments; /* 24 24 */
	void ~DxcArguments(DxcArguments* );
	void AddArgument(class DxcArguments *, const char  *, const char  *); /* linkage=_ZN12DxcArguments11AddArgumentEPKcS1_ */
	const wchar_t  * * GetArguments(class DxcArguments *); /* linkage=_ZN12DxcArguments12GetArgumentsEv */
	size_t GetNumArguments(const class DxcArguments  *); /* linkage=_ZNK12DxcArguments15GetNumArgumentsEv */
	void ~DxcArguments(class DxcArguments *); /* linkage=_ZN12DxcArgumentsD4Ev */
};

// <0013D671> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:172
// variables: 6
// function calls: 310
void DxcArguments::AddArgument(const char* pArgument, const char* pValue)
{
	CStrAutoEncode strAutoEncode; // 174
	{
		CStrAutoEncode strAutoEncode2; // 178
		CStrAutoEncode::Set(
			const char* pch);  // 479
		CStrAutoEncode::CStrAutoEncode(
				const char* pch);  // 178
		CStrAutoEncode::ToUTF32(); // 592
		CStrAutoEncode::ToWString(); // 179
		__new_allocator<wchar_t>::__new_allocator(
				const __new_allocator<wchar_t>  &);  // 173
		allocator<wchar_t>::allocator(
				const allocator<wchar_t>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<wchar_t>& __a);  // 707
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 707
		{
			const wchar_t* __end; // 713
			length(const char_type* __s); // 713
			__distance<wchar_t const*>(const wchar_t* __first,
							const wchar_t* __last,
							random_access_iterator_tag);  // 153
			distance<wchar_t const*>(const wchar_t* __first,
						const wchar_t* __last);  // 231
			_Guard::_Guard(
				basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __s);  // 251
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 253
			assign(char_type& __c1,
				const char_type& __c2);  // 451
			wmemcpy(wchar_t* __s1,
				const wchar_t* __s2,
				size_t __n);  // 560
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(wchar_t* __d,
				const wchar_t* __s,
				size_type __n);  // 489
			_S_copy_chars<wchar_t const*>(wchar_t* __p,
							const wchar_t* __k1,
							const wchar_t* __k2);  // 253
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_length(
					size_type __length);  // 272
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 273
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_set_length(
					size_type __n);  // 257
			_Guard::~_Guard(); // 258
			__new_allocator<wchar_t>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<wchar_t>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 142
			_S_allocate(_Char_alloc_type& __a,
					size_type __n);  // 164
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_create(
					size_type& __capacity,
					size_type __old_capacity);  // 235
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
				pointer __p);  // 235
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_capacity(
					size_type __capacity);  // 236
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_construct<wchar_t const*>(
							const wchar_t* __beg,
							const wchar_t* __end,
							forward_iterator_tag);  // 714
		}
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::basic_string<>(
				const wchar_t* __s,
				const allocator<wchar_t>& __a);  // 179
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_get_allocator(); // 743
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 743
		__new_allocator<wchar_t>::__new_allocator(
				const __new_allocator<wchar_t>  &);  // 173
		allocator<wchar_t>::allocator(
				const allocator<wchar_t>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<wchar_t>& __a);  // 743
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 280
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 280
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_is_local(); // 745
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 753
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
			pointer __p);  // 753
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_capacity(
				size_type __capacity);  // 754
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::size(); // 1176
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::length(); // 760
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_length(
				size_type __length);  // 760
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_use_local_data(); // 761
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
			pointer __p);  // 761
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_set_length(
				size_type __n);  // 762
		wmemcpy(wchar_t* __s1,
			const wchar_t* __s2,
			size_t __n);  // 560
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 748
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_init_local_buf(); // 747
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::length(); // 749
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::basic_string(
				basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >& __str);  // 110
		construct_at<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __location); // 676
		construct<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(allocator_type& __a,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __p);  // 117
		__normal_iterator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::__normal_iterator(
					basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* const& __i);  // 1019
		end(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 1371
		__normal_iterator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::__normal_iterator(
					basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* const& __i);  // 1160
		__normal_iterator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::operator-(
				difference_type __n);  // 1371
		back(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 125
		size(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this); // 2199
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 2202
		_M_check_len(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this,
				size_type __n,
				const char* __s);  // 566
		__normal_iterator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::__normal_iterator(
					basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* const& __i);  // 999
		begin(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 571
		__normal_iterator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::__normal_iterator(
					basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* const& __i);  // 1019
		end(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 571
		__new_allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_M_allocate(const _Vector_base<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this,
				size_t __n);  // 572
		{
			_Guard_alloc __guard; // 576
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 280
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 280
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_is_local(); // 745
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_get_allocator(); // 743
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 743
			__new_allocator<wchar_t>::__new_allocator(
					const __new_allocator<wchar_t>  &);  // 173
			allocator<wchar_t>::allocator(
					const allocator<wchar_t>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<wchar_t>& __a);  // 743
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 753
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
				pointer __p);  // 753
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_capacity(
					size_type __capacity);  // 754
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::size(); // 1176
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::length(); // 760
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_length(
					size_type __length);  // 760
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
				pointer __p);  // 761
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_set_length(
					size_type __n);  // 762
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_use_local_data(); // 761
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_init_local_buf(); // 747
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::length(); // 749
			wmemcpy(wchar_t* __s1,
				const wchar_t* __s2,
				size_t __n);  // 560
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 748
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::basic_string(
					basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >& __str);  // 110
			construct_at<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __location); // 676
			construct<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(allocator_type& __a,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __p);  // 586
			_Guard_alloc::_Guard_alloc(
					pointer __s,
					size_type __l,
					_Base& __vect);  // 576
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 753
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
				pointer __p);  // 753
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_capacity(
					size_type __capacity);  // 754
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::size(); // 1176
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::length(); // 760
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_length(
					size_type __length);  // 760
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_use_local_data(); // 761
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
				pointer __p);  // 761
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_set_length(
					size_type __n);  // 762
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_get_allocator(); // 743
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 743
			__new_allocator<wchar_t>::__new_allocator(
					const __new_allocator<wchar_t>  &);  // 173
			allocator<wchar_t>::allocator(
					const allocator<wchar_t>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<wchar_t>& __a);  // 743
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 280
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 280
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_is_local(); // 745
			wmemcpy(wchar_t* __s1,
				const wchar_t* __s2,
				size_t __n);  // 560
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 748
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_init_local_buf(); // 747
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::length(); // 749
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::basic_string(
					basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >& __str);  // 110
			construct_at<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __location); // 676
			construct<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(allocator_type& __a,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __p);  // 1288
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_dispose(); // 896
			allocator<wchar_t>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::~basic_string(); // 88
			destroy_at<std::__cxx11::basic_string<wchar_t> >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __location); // 698
			destroy<std::__cxx11::basic_string<wchar_t> >(allocator_type& __a,
									basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __p);  // 1289
			__relocate_object_a<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t>, std::allocator<std::__cxx11::basic_string<wchar_t> > >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __dest,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __orig,
																allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >& __alloc);  // 1317
			__relocate_a_1<std::__cxx11::basic_string<wchar_t>*, std::__cxx11::basic_string<wchar_t>*, std::allocator<std::__cxx11::basic_string<wchar_t> > >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __first,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __last,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __result,
																allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >& __alloc);  // 1359
			__relocate_a<std::__cxx11::basic_string<wchar_t>*, std::__cxx11::basic_string<wchar_t>*, std::allocator<std::__cxx11::basic_string<wchar_t> > >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __first,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __last,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __result,
																allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >& __alloc);  // 539
			_S_relocate(pointer __first,
					pointer __last,
					pointer __result,
					_Tp_alloc_type& __alloc);  // 599
			__new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::deallocate(
					basic_string<char, std::char_traits<char>, std::allocator<char> >* __p,
					size_type __n);  // 215
			allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::deallocate(
					basic_string<char, std::char_traits<char>, std::allocator<char> >* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_M_deallocate(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
					pointer __p,
					size_t __n);  // 392
			_M_deallocate(const _Vector_base<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this,
					pointer __p,
					size_t __n);  // 1883
			_Guard_alloc::~_Guard_alloc(); // 640
		}
		_M_realloc_append<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 123
		emplace_back<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 1434
		push_back(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this,
				value_type& __x);  // 179
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 280
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 280
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_is_local(); // 298
		__new_allocator<wchar_t>::deallocate(
				wchar_t* __p,
				size_type __n);  // 215
		allocator<wchar_t>::deallocate(
				wchar_t* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_destroy(
				size_type __size);  // 299
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_dispose(); // 896
		allocator<wchar_t>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::~basic_string(); // 179
		allocator<wchar_t>::~allocator(); // 179
		CStrAutoEncode::~CStrAutoEncode(); // 180
	}
	CStrAutoEncode::Set(
		const char* pch);  // 479
	CStrAutoEncode::CStrAutoEncode(
			const char* pch);  // 174
	CStrAutoEncode::ToUTF32(); // 592
	CStrAutoEncode::ToWString(); // 175
	__new_allocator<wchar_t>::__new_allocator(
			const __new_allocator<wchar_t>  &);  // 173
	allocator<wchar_t>::allocator(
			const allocator<wchar_t>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<wchar_t>& __a);  // 707
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 707
	{
		const wchar_t* __end; // 713
		length(const char_type* __s); // 713
		__distance<wchar_t const*>(const wchar_t* __first,
						const wchar_t* __last,
						random_access_iterator_tag);  // 153
		distance<wchar_t const*>(const wchar_t* __first,
					const wchar_t* __last);  // 231
		_Guard::_Guard(
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __s);  // 251
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		wmemcpy(wchar_t* __s1,
			const wchar_t* __s2,
			size_t __n);  // 560
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(wchar_t* __d,
			const wchar_t* __s,
			size_type __n);  // 489
		_S_copy_chars<wchar_t const*>(wchar_t* __p,
						const wchar_t* __k1,
						const wchar_t* __k2);  // 253
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_length(
				size_type __length);  // 272
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		__new_allocator<wchar_t>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<wchar_t>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
			pointer __p);  // 235
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_construct<wchar_t const*>(
						const wchar_t* __beg,
						const wchar_t* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::basic_string<>(
			const wchar_t* __s,
			const allocator<wchar_t>& __a);  // 175
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_get_allocator(); // 743
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 743
	__new_allocator<wchar_t>::__new_allocator(
			const __new_allocator<wchar_t>  &);  // 173
	allocator<wchar_t>::allocator(
			const allocator<wchar_t>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<wchar_t>& __a);  // 743
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 280
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 280
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_is_local(); // 745
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 753
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
		pointer __p);  // 753
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_capacity(
			size_type __capacity);  // 754
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::size(); // 1176
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::length(); // 760
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_length(
			size_type __length);  // 760
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_use_local_data(); // 761
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
		pointer __p);  // 761
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_set_length(
			size_type __n);  // 762
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_init_local_buf(); // 747
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::length(); // 749
	wmemcpy(wchar_t* __s1,
		const wchar_t* __s2,
		size_t __n);  // 560
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::basic_string(
			basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >& __str);  // 110
	construct_at<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __location); // 676
	construct<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(allocator_type& __a,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __p);  // 117
	__normal_iterator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::__normal_iterator(
				basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* const& __i);  // 1019
	end(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 1371
	__normal_iterator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::__normal_iterator(
				basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* const& __i);  // 1160
	__normal_iterator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::operator-(
			difference_type __n);  // 1371
	back(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 125
	size(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this); // 2199
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 2202
	_M_check_len(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this,
			size_type __n,
			const char* __s);  // 566
	__normal_iterator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::__normal_iterator(
				basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* const& __i);  // 999
	begin(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 571
	__normal_iterator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::__normal_iterator(
				basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* const& __i);  // 1019
	end(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 571
	__new_allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_M_allocate(const _Vector_base<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this,
			size_t __n);  // 572
	{
		_Guard_alloc __guard; // 576
		_Guard_alloc::_Guard_alloc(
				pointer __s,
				size_type __l,
				_Base& __vect);  // 576
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 280
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 280
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_is_local(); // 745
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_get_allocator(); // 743
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 743
		__new_allocator<wchar_t>::__new_allocator(
				const __new_allocator<wchar_t>  &);  // 173
		allocator<wchar_t>::allocator(
				const allocator<wchar_t>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<wchar_t>& __a);  // 743
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 753
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
			pointer __p);  // 753
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_capacity(
				size_type __capacity);  // 754
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::size(); // 1176
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::length(); // 760
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_length(
				size_type __length);  // 760
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
			pointer __p);  // 761
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_set_length(
				size_type __n);  // 762
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_use_local_data(); // 761
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_init_local_buf(); // 747
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::length(); // 749
		wmemcpy(wchar_t* __s1,
			const wchar_t* __s2,
			size_t __n);  // 560
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 748
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::basic_string(
				basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >& __str);  // 110
		construct_at<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __location); // 676
		construct<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(allocator_type& __a,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __p);  // 586
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 753
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
			pointer __p);  // 753
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_capacity(
				size_type __capacity);  // 754
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::size(); // 1176
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::length(); // 760
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_length(
				size_type __length);  // 760
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_use_local_data(); // 761
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(
			pointer __p);  // 761
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_set_length(
				size_type __n);  // 762
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_get_allocator(); // 743
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 743
		__new_allocator<wchar_t>::__new_allocator(
				const __new_allocator<wchar_t>  &);  // 173
		allocator<wchar_t>::allocator(
				const allocator<wchar_t>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<wchar_t>& __a);  // 743
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 280
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 280
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_is_local(); // 745
		wmemcpy(wchar_t* __s1,
			const wchar_t* __s2,
			size_t __n);  // 560
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 748
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_init_local_buf(); // 747
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::length(); // 749
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::basic_string(
				basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >& __str);  // 110
		construct_at<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __location); // 676
		construct<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(allocator_type& __a,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __p);  // 1288
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_dispose(); // 896
		allocator<wchar_t>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::~basic_string(); // 88
		destroy_at<std::__cxx11::basic_string<wchar_t> >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __location); // 698
		destroy<std::__cxx11::basic_string<wchar_t> >(allocator_type& __a,
								basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __p);  // 1289
		__relocate_object_a<std::__cxx11::basic_string<wchar_t>, std::__cxx11::basic_string<wchar_t>, std::allocator<std::__cxx11::basic_string<wchar_t> > >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __dest,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __orig,
																allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >& __alloc);  // 1317
		__relocate_a_1<std::__cxx11::basic_string<wchar_t>*, std::__cxx11::basic_string<wchar_t>*, std::allocator<std::__cxx11::basic_string<wchar_t> > >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __first,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __last,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __result,
																allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >& __alloc);  // 1359
		__relocate_a<std::__cxx11::basic_string<wchar_t>*, std::__cxx11::basic_string<wchar_t>*, std::allocator<std::__cxx11::basic_string<wchar_t> > >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __first,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __last,
																basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __result,
																allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >& __alloc);  // 539
		_S_relocate(pointer __first,
				pointer __last,
				pointer __result,
				_Tp_alloc_type& __alloc);  // 599
		__new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::deallocate(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* __p,
				size_type __n);  // 215
		allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::deallocate(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_M_deallocate(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
				pointer __p,
				size_t __n);  // 392
		_M_deallocate(const _Vector_base<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this,
				pointer __p,
				size_t __n);  // 1883
		_Guard_alloc::~_Guard_alloc(); // 640
	}
	_M_realloc_append<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 123
	emplace_back<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 1434
	push_back(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this,
			value_type& __x);  // 175
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 280
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_local_data(); // 280
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_is_local(); // 298
	__new_allocator<wchar_t>::deallocate(
			wchar_t* __p,
			size_type __n);  // 215
	allocator<wchar_t>::deallocate(
			wchar_t* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_destroy(
			size_type __size);  // 299
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_dispose(); // 896
	allocator<wchar_t>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::~basic_string(); // 175
	allocator<wchar_t>::~allocator(); // 175
	CStrAutoEncode::~CStrAutoEncode(); // 181
} /* size: 2307, variables: 1, inline expansions: 65 (3224 bytes) */

// <0013C8AC> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:183
// variables: 7
// function calls: 57
void DxcArguments::GetArguments()
{
	{
		const basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >& arg; // 186
		vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > > >& __for_range; // 50097
		iterator __for_begin; // 12729
		iterator __for_end; // 12729
		__normal_iterator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::__normal_iterator(
					basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* const& __i);  // 999
		begin(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 186
		__normal_iterator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::__normal_iterator(
					basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* const& __i);  // 1019
		end(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 186
		construct_at<wchar_t const*, wchar_t const*>(const wchar_t ** __location); // 676
		construct<wchar_t const*, wchar_t const*>(allocator_type& __a,
								const wchar_t ** __p);  // 117
		__normal_iterator<wchar_t const::__normal_iterator(
					const wchar_t ** const& __i);  // 1019
		vector<wchar_t const::end(); // 1371
		__normal_iterator<wchar_t const::__normal_iterator(
					const wchar_t ** const& __i);  // 1160
		__normal_iterator<wchar_t const::operator-(
				difference_type __n);  // 1371
		vector<wchar_t const::back(); // 125
		vector<wchar_t const::size(); // 2199
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 2202
		vector<wchar_t const::_M_check_len(
				size_type __n,
				const char* __s);  // 566
		__normal_iterator<wchar_t const::__normal_iterator(
					const wchar_t ** const& __i);  // 999
		vector<wchar_t const::begin(); // 571
		__normal_iterator<wchar_t const::__normal_iterator(
					const wchar_t ** const& __i);  // 1019
		vector<wchar_t const::end(); // 571
		__new_allocator<wchar_t const::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<wchar_t const::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<wchar_t const::_M_allocate(
				size_t __n);  // 572
		{
			_Guard_alloc __guard; // 576
			construct_at<wchar_t const*, wchar_t const*>(const wchar_t ** __location); // 676
			construct<wchar_t const*, wchar_t const*>(allocator_type& __a,
									const wchar_t ** __p);  // 586
			__relocate_a_1<wchar_t const*, wchar_t const*>(const wchar_t ** __first,
									const wchar_t ** __last,
									const wchar_t ** __result,
									allocator<wchar_t const*>& __alloc);  // 1359
			__relocate_a<wchar_t const**, wchar_t const**, std::allocator<wchar_t const*> >(const wchar_t ** __first,
													const wchar_t ** __last,
													const wchar_t ** __result,
													allocator<wchar_t const*>& __alloc);  // 539
			_S_relocate(pointer __first,
					pointer __last,
					pointer __result,
					_Tp_alloc_type& __alloc);  // 599
			_Guard_alloc::_Guard_alloc(
					pointer __s,
					size_type __l,
					_Base& __vect);  // 576
			__new_allocator<long unsigned int>::deallocate(
					long unsigned int* __p,
					size_type __n);  // 215
			allocator<long unsigned int>::deallocate(
					long unsigned int* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 392
			_Vector_base<wchar_t const::_M_deallocate(
					pointer __p,
					size_t __n);  // 1883
			_Guard_alloc::~_Guard_alloc(); // 640
		}
		vector<wchar_t const::_M_realloc_append<wchar_t const*>(); // 123
		vector<wchar_t const::emplace_back<wchar_t const*>(); // 1434
		vector<wchar_t const::push_back(
				value_type& __x);  // 188
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 2874
		basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::c_str(); // 188
	}
	size(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this); // 195
	DxcArguments::GetNumArguments(); // 185
	vector<wchar_t const::capacity(); // 72
	{
		const size_type  __old_size; // 74
		pointer __tmp; // 75
		vector<wchar_t const::size(); // 74
		__new_allocator<wchar_t const::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<wchar_t const::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<wchar_t const::_M_allocate(
				size_t __n);  // 79
		__relocate_a_1<wchar_t const*, wchar_t const*>(const wchar_t ** __first,
								const wchar_t ** __last,
								const wchar_t ** __result,
								allocator<wchar_t const*>& __alloc);  // 1359
		__relocate_a<wchar_t const**, wchar_t const**, std::allocator<wchar_t const*> >(const wchar_t ** __first,
												const wchar_t ** __last,
												const wchar_t ** __result,
												allocator<wchar_t const*>& __alloc);  // 539
		_S_relocate(pointer __first,
				pointer __last,
				pointer __result,
				_Tp_alloc_type& __alloc);  // 80
		__new_allocator<long unsigned int>::deallocate(
				long unsigned int* __p,
				size_type __n);  // 215
		allocator<long unsigned int>::deallocate(
				long unsigned int* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 392
		_Vector_base<wchar_t const::_M_deallocate(
				pointer __p,
				size_t __n);  // 93
	}
	vector<wchar_t const::reserve(
		size_type __n);  // 185
	vector<wchar_t const::data(); // 190
} /* size: 515, inline expansions: 5 (201 bytes) */

// <0013C893> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:193
inline void DxcArguments::GetNumArguments()
{
} /* size: 0 */

// <0013AFD8> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:202
// variables: 10
// function calls: 83
void CHLSLShaderCompiler::PreprocessShader(ShaderCompileContext* context, const char* pShaderSource, CUtlString& preprocessedShaderSource, CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >& macros, const char* pDebugName)
{
	DxcArguments arguments; // 204
	CCOMPtr<IDxcBlobUtf8> pErrors; // 219
	CCOMPtr<IDxcBlob> pDxcBlob; // 220
	DxcBuffer sourceBuffer; // 222
	CVfxDxcIncludeHandler dxcIncludeHandler; // 228
	CCOMPtr<IDxcResult> pDxcResult; // 230
	HRESULT hr; // 231
	const char* pSource; // 265
	{
		int i; // 209
		{
			CUtlString format; // 213
			CUtlMemory<VfxShaderMacro_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
					int i);  // 211
			CUtlString::CUtlString(); // 213
			CUtlString::Get(); // 216
			CUtlString::~CUtlString(); // 217
		}
		CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::Count(); // 209
	}
	CAutoRelease<IDxcBlobUtf8>::CAutoRelease(
			IDxcBlobUtf8* p);  // 110
	CCOMPtr<IDxcBlobUtf8>::CCOMPtr(); // 219
	CAutoRelease<IDxcBlob>::CAutoRelease(
			IDxcBlob* p);  // 110
	CCOMPtr<IDxcBlob>::CCOMPtr(); // 220
	V_strlen(const char* str); // 224
	CAutoRelease<IDxcResult>::CAutoRelease(
			IDxcResult* p);  // 110
	CCOMPtr<IDxcResult>::CCOMPtr(); // 230
	CAutoRelease<IDxcResult>::AsPPType(); // 115
	CCOMPtr<IDxcResult>::operator&(); // 231
	size(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this); // 195
	DxcArguments::GetNumArguments(); // 231
	CAutoRelease<IDxcResult>::operator->(); // 242
	{
	}
	CAutoRelease<IDxcBlobUtf8>::AsPPType(); // 115
	CCOMPtr<IDxcBlobUtf8>::operator&(); // 242
	CAutoRelease<IDxcBlobUtf8>::operator CAutoRelease<IDxcBlobUtf8>::bool_type(); // 243
	CAutoRelease<IDxcResult>::operator->(); // 249
	CAutoRelease<IDxcResult>::operator->(); // 257
	{
	}
	CAutoRelease<IDxcBlob>::AsPPType(); // 115
	CCOMPtr<IDxcBlob>::operator&(); // 257
	CAutoRelease<IDxcBlob>::operator->(); // 265
	CAutoRelease<IDxcResult>::Detach(); // 200
	CAutoRelease<IDxcResult>::Reset(); // 183
	CAutoRelease<IDxcResult>::~CAutoRelease(); // 110
	CCOMPtr<IDxcResult>::~CCOMPtr(); // 269
	CAutoRelease<IDxcBlob>::Detach(); // 200
	CAutoRelease<IDxcBlob>::Reset(); // 183
	CAutoRelease<IDxcBlob>::~CAutoRelease(); // 110
	CCOMPtr<IDxcBlob>::~CCOMPtr(); // 269
	CAutoRelease<IDxcBlobUtf8>::Detach(); // 200
	CAutoRelease<IDxcBlobUtf8>::Reset(); // 183
	CAutoRelease<IDxcBlobUtf8>::~CAutoRelease(); // 110
	CCOMPtr<IDxcBlobUtf8>::~CCOMPtr(); // 269
	_M_get_Tp_allocator(const _Vector_base<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this); // 803
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 280
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_is_local(); // 298
	__new_allocator<wchar_t>::deallocate(
			wchar_t* __p,
			size_type __n);  // 215
	allocator<wchar_t>::deallocate(
			wchar_t* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_destroy(
			size_type __size);  // 299
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_dispose(); // 896
	allocator<wchar_t>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::~basic_string(); // 88
	destroy_at<std::__cxx11::basic_string<wchar_t> >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __location); // 164
	_Destroy<std::__cxx11::basic_string<wchar_t> >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __pointer); // 226
	_Destroy<std::__cxx11::basic_string<wchar_t>*>(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __first,
							basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __last);  // 1045
	_Destroy<std::__cxx11::basic_string<wchar_t>*, std::__cxx11::basic_string<wchar_t> >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __first,
												basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __last,
												allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > > &);  // 802
	__new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::deallocate(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __p,
			size_type __n);  // 215
	allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::deallocate(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_M_deallocate(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
			pointer __p,
			size_t __n);  // 392
	_M_deallocate(const _Vector_base<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this,
			pointer __p,
			size_t __n);  // 375
	allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	~_Vector_base(const _Vector_base<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this); // 805
	~vector(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 169
	_Vector_base<wchar_t const::_M_get_Tp_allocator(); // 803
	_Destroy<wchar_t const**, wchar_t const*>(const wchar_t ** __first,
							const wchar_t ** __last,
							allocator<wchar_t const*> &);  // 802
	__new_allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_type __n);  // 215
	allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<wchar_t const::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<wchar_t const::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<wchar_t const::~_Vector_base(); // 805
	vector<wchar_t const::~vector(); // 169
	DxcArguments::~DxcArguments(); // 269
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 252
	CAutoRelease<IDxcBlobUtf8>::operator->(); // 245
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 245
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 234
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 260
} /* size: 0, variables: 8, inline expansions: 77 (1311 bytes) */

// <0013833C> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:272
// variables: 8
// function calls: 162
void CHLSLShaderCompiler::CompileShader(IShaderCompileContext* context, VfxProgram_t programType, VfxCompileTarget_t compileTarget, const char* pShaderSource, const char* pMainEntryPointName, uint nVfxCompileShaderFlags, const char* pDebugName)
{
	CCOMPtr<IDxcBlobUtf8> pErrors; // 274
	CCOMPtr<IDxcBlob> pDxcBlob; // 275
	DxcArguments arguments; // 283
	DxcBuffer sourceBuffer; // 349
	CCOMPtr<IDxcResult> pDxcResult; // 354
	HRESULT hr; // 356
	{
		int nDescriptorSet; // 324
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 327
		GetBindingStartOffsetHLSLToSPIRV(VfxCompileTarget_t compileTarget,
						VfxProgram_t programType,
						VfxRegisterType_t regType,
						uint32 nDescriptorSet);  // 327
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 327
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 328
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 328
		GetBindingStartOffsetHLSLToSPIRV(VfxCompileTarget_t compileTarget,
						VfxProgram_t programType,
						VfxRegisterType_t regType,
						uint32 nDescriptorSet);  // 331
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 331
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 331
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 332
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 332
		GetBindingStartOffsetHLSLToSPIRV(VfxCompileTarget_t compileTarget,
						VfxProgram_t programType,
						VfxRegisterType_t regType,
						uint32 nDescriptorSet);  // 335
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 335
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 335
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 336
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 336
		GetBindingStartOffsetHLSLToSPIRV(VfxCompileTarget_t compileTarget,
						VfxProgram_t programType,
						VfxRegisterType_t regType,
						uint32 nDescriptorSet);  // 339
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 339
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 339
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 340
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 340
	}
	{
		DxcAttributeOptions_t dxcAttributeOptions; // 397
		CUtlString::CUtlString(); // 27
		DxcAttributeOptions_t::DxcAttributeOptions_t(); // 397
		CUtlString::~CUtlString(); // 27
		DxcAttributeOptions_t::~DxcAttributeOptions_t(); // 401
	}
	CAutoRelease<IDxcBlobUtf8>::CAutoRelease(
			IDxcBlobUtf8* p);  // 110
	CCOMPtr<IDxcBlobUtf8>::CCOMPtr(); // 274
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 281
	CAutoRelease<IDxcBlob>::CAutoRelease(
			IDxcBlob* p);  // 110
	CCOMPtr<IDxcBlob>::CCOMPtr(); // 275
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 320
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 320
	V_strlen(const char* str); // 351
	CAutoRelease<IDxcResult>::CAutoRelease(
			IDxcResult* p);  // 110
	CCOMPtr<IDxcResult>::CCOMPtr(); // 354
	CAutoRelease<IDxcResult>::AsPPType(); // 115
	CCOMPtr<IDxcResult>::operator&(); // 356
	size(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this); // 195
	DxcArguments::GetNumArguments(); // 356
	CAutoRelease<IDxcResult>::operator->(); // 363
	{
	}
	CAutoRelease<IDxcBlobUtf8>::AsPPType(); // 115
	CCOMPtr<IDxcBlobUtf8>::operator&(); // 363
	CAutoRelease<IDxcBlobUtf8>::operator CAutoRelease<IDxcBlobUtf8>::bool_type(); // 364
	CAutoRelease<IDxcBlobUtf8>::operator->(); // 366
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 366
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 366
	CAutoRelease<IDxcResult>::operator->(); // 372
	CAutoRelease<IDxcResult>::operator->(); // 381
	{
	}
	CAutoRelease<IDxcBlob>::AsPPType(); // 115
	CCOMPtr<IDxcBlob>::operator&(); // 381
	CAutoRelease<IDxcBlob>::operator->(); // 389
	CAutoRelease<IDxcBlob>::operator->(); // 390
	CAutoRelease<IDxcBlob>::operator->(); // 390
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 393
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 393
	CAutoRelease<IDxcResult>::Detach(); // 200
	CAutoRelease<IDxcResult>::Reset(); // 183
	CAutoRelease<IDxcResult>::~CAutoRelease(); // 110
	CCOMPtr<IDxcResult>::~CCOMPtr(); // 404
	_M_get_Tp_allocator(const _Vector_base<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this); // 803
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_data(); // 280
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_is_local(); // 298
	__new_allocator<wchar_t>::deallocate(
			wchar_t* __p,
			size_type __n);  // 215
	allocator<wchar_t>::deallocate(
			wchar_t* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_destroy(
			size_type __size);  // 299
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::_M_dispose(); // 896
	allocator<wchar_t>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::~basic_string(); // 88
	destroy_at<std::__cxx11::basic_string<wchar_t> >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __location); // 164
	_Destroy<std::__cxx11::basic_string<wchar_t> >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __pointer); // 226
	_Destroy<std::__cxx11::basic_string<wchar_t>*>(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __first,
							basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __last);  // 1045
	_Destroy<std::__cxx11::basic_string<wchar_t>*, std::__cxx11::basic_string<wchar_t> >(basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __first,
												basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >* __last,
												allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > > &);  // 802
	__new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::deallocate(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __p,
			size_type __n);  // 215
	allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::deallocate(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_M_deallocate(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
			pointer __p,
			size_t __n);  // 392
	_M_deallocate(const _Vector_base<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this,
			pointer __p,
			size_t __n);  // 375
	allocator<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	~_Vector_base(const _Vector_base<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocat this); // 805
	~vector(const vector<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std this); // 169
	_Vector_base<wchar_t const::_M_get_Tp_allocator(); // 803
	_Destroy<wchar_t const**, wchar_t const*>(const wchar_t ** __first,
							const wchar_t ** __last,
							allocator<wchar_t const*> &);  // 802
	__new_allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_type __n);  // 215
	allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<wchar_t const::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<wchar_t const::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<wchar_t const::~_Vector_base(); // 805
	vector<wchar_t const::~vector(); // 169
	DxcArguments::~DxcArguments(); // 404
	CAutoRelease<IDxcBlob>::Detach(); // 200
	CAutoRelease<IDxcBlob>::Reset(); // 183
	CAutoRelease<IDxcBlob>::~CAutoRelease(); // 110
	CCOMPtr<IDxcBlob>::~CCOMPtr(); // 404
	CAutoRelease<IDxcBlobUtf8>::Detach(); // 200
	CAutoRelease<IDxcBlobUtf8>::Reset(); // 183
	CAutoRelease<IDxcBlobUtf8>::~CAutoRelease(); // 110
	CCOMPtr<IDxcBlobUtf8>::~CCOMPtr(); // 404
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 359
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 384
} /* size: 0, variables: 6, inline expansions: 98 (1869 bytes) */

// <00148C28> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:407
void CHLSLShaderCompiler::GetActiveUniforms(CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >& activeUniforms)
{
} /* size: 13 */

// <001380D9> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:413
// variables: 5
// function calls: 6
void CHLSLShaderCompiler::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >& activeUniformBlocks)
{
	bool bResult; // 415
	{
		VfxUniformBlockInfo_t& uniformBlockInfo; // 421
		CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >& __for_range; // 47726
		iterator __for_begin; // 16095
		iterator __for_end; // 16095
		CUtlMemory<VfxUniformBlockInfo_t, int>::Base(); // 112
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Base(); // 102
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::begin(); // 421
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Count(); // 104
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::end(); // 421
		operator==(const CUtlString& utlString,
				const char* pString);  // 423
	}
} /* size: 119, variables: 1 */

// <00137EC2> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:437
// function calls: 7
void CHLSLShaderCompiler::GetBinaryShader(uint8** ppBinaryOut, uint32* pBinarySizeOut)
{
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 439
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 447
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 447
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 447
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 452
} /* size: 115, inline expansions: 7 (41 bytes) */

// <00137E55> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:460
void CHLSLShaderCompiler::GetThreadGroupSize(uint32* pThreadGroupSizeOut)
{
} /* size: 13 */

// <00137DCC> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:465
void CHLSLShaderCompiler::GetOutputVertices(uint32* pOutputVertices, uint32* pOutputTotalComponents)
{
} /* size: 13 */

// <001376E3> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:473
// variables: 7
// function calls: 29
void CHLSLShaderCompiler::ValidateUniqueBindings()
{
	bool bNoDuplicates; // 475
	CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> > activeUniforms; // 476
	{
		int32 nCurUniform; // 479
		{
			const VfxUniformInfo_t& curUniform; // 481
			{
				int32 nCompareUniform; // 484
				{
					const VfxUniformInfo_t& compareUniform; // 486
					CUtlMemory<VfxUniformInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
							int i);  // 486
					CUtlString::Get(); // 502
					CUtlString::Get(); // 502
				}
				CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Count(); // 484
			}
			CUtlMemory<VfxUniformInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
					int i);  // 481
		}
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Count(); // 479
	}
	CHLSLShaderCompiler::GetActiveUniforms(
				CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >& activeUniforms);  // 477
	CUtlMemory<VfxUniformInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxUniformInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::CUtlVector(); // 476
	CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 903
	CUtlMemory<VfxUniformInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 1799
	{
		int i; // 1721
		CUtlMemory<VfxUniformInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 17
		VfxUniformInfo_t::~VfxUniformInfo_t(); // 1526
		Destruct<VfxUniformInfo_t>(VfxUniformInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::RemoveAll(); // 1798
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Purge(); // 560
	ValidateAlignment<VfxUniformInfo_t>(void); // 508
	CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 510
	CUtlMemory<VfxUniformInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::~CUtlVector(); // 511
} /* size: 639, variables: 2, inline expansions: 16 (568 bytes) */

// <00137676> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:513
void CHLSLShaderCompiler::GetEntryPoints(CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& entryPoints)
{
} /* size: 13 */

// <001476BB> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:521
// function call: 1
void SPVRemapperErrorCallback(const string& msg)
{
	SPVRemapperErrorCallback(const string& msg); // 521
} /* size: 77, inline expansions: 1 (25 bytes) */

// <00137659> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:521
void SPVRemapperErrorCallback(const string& msg)
{
} /* size: 0 */

// <00134006> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:529
// variables: 25
// function calls: 220
void CHLSLShaderCompiler::PostProcessSPIRV(const DxcAttributeOptions_t& options)
{
	CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> > tempUniformBlockInfo; // 536
	Optimizer optimizer; // 553
	vector<unsigned int, std::allocator<unsigned int> > spirVOriginal; // 596
	vector<unsigned int, std::allocator<unsigned int> > spirVOptimized; // 597
	OptimizerOptions optimizerOptions; // 600
	{
		const VfxUniformBlockInfo_t& uniformBlockInfo; // 538
		CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >& __for_range; // 47726
		iterator __for_begin; // 16095
		iterator __for_end; // 16095
		CUtlMemory<VfxUniformBlockInfo_t, int>::Base(); // 112
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Base(); // 102
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::begin(); // 538
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Count(); // 104
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::end(); // 538
		operator==(const CUtlString& utlString,
				const char* pString);  // 540
	}
	{
		bool bSPVDocInitialized; // 612
		CThreadMutex spvDocInitializedMutex; // 613
		spirvbin_t spvRemapper; // 627
		__new_allocator<unsigned int>::__new_allocator(); // 168
		allocator<unsigned int>::allocator(); // 148
		_Vector_impl_data::_Vector_impl_data(); // 148
		_Vector_impl::_Vector_impl(); // 321
		_Vector_base<unsigned int, std::allocator<unsigned int> >::_Vector_base(); // 561
		vector<unsigned int, std::allocator<unsigned int> >::vector(); // 115
		__new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::__new_allocator(); // 168
		allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::allocator(); // 148
		_Vector_impl_data::_Vector_impl_data(); // 148
		_Vector_impl::_Vector_impl(); // 321
		_Vector_base(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this); // 561
		vector(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 115
		_Hash_code_base(const _Hash_code_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<const st this); // 1395
		_Hashtable_base(const _Hashtable_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<const st this); // 513
		_Hashtable_alloc(const _Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::__cxx11::basic_string<char, std::cha this); // 513
		_Prime_rehash_policy::_Prime_rehash_policy(
					float __z);  // 513
		_Hash_node_base::_Hash_node_base(); // 513
		_Hashtable(const _Hashtable<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<const std::__ this); // 151
		unordered_map(const unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned int, std::h this); // 115
		_Prime_rehash_policy::_Prime_rehash_policy(
					float __z);  // 513
		_Hash_code_base(const _Hash_code_base<unsigned int, std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, std::__detail: this); // 1395
		_Hashtable_base(const _Hashtable_base<unsigned int, std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, std::__detail: this); // 513
		_Hashtable_alloc(const _Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, uns this); // 513
		_Hash_node_base::_Hash_node_base(); // 513
		_Hashtable(const _Hashtable<unsigned int, std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, std::allocator<std: this); // 151
		unordered_map(const unordered_map<unsigned int, std::pair<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned this); // 115
		_Rb_tree_header::_M_reset(); // 174
		_Rb_tree_header::_Rb_tree_header(); // 1314
		__new_allocator<std::_Rb_tree_node<int> >::__new_allocator(); // 168
		allocator<std::_Rb_tree_node<int> >::allocator(); // 1314
		_Rb_tree_key_compare<std::less<int> >::_Rb_tree_key_compare(); // 1314
		_Rb_tree_impl<std::less<int>, true>::_Rb_tree_impl(); // 1553
		_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_Rb_tree(); // 172
		set<int, std::less<int>, std::allocator<int> >::set(); // 115
		_Prime_rehash_policy::_Prime_rehash_policy(
					float __z);  // 513
		_Hash_code_base(const _Hash_code_base<unsigned int, std::pair<unsigned int const, int>, std::__detail::_Select1st, std::hash<unsigned int this); // 1395
		_Hashtable_base(const _Hashtable_base<unsigned int, std::pair<unsigned int const, int>, std::__detail::_Select1st, std::equal_to<unsigned this); // 513
		_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> > >::_Hashtable_alloc(); // 513
		_Hash_node_base::_Hash_node_base(); // 513
		_Hashtable(const _Hashtable<unsigned int, std::pair<unsigned int const, int>, std::allocator<std::pair<unsigned int const, int> >, s this); // 151
		unordered_map(const unordered_map<unsigned int, int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<uns this); // 115
		__new_allocator<long unsigned int>::__new_allocator(); // 168
		allocator<long unsigned int>::allocator(); // 148
		_Vector_impl_data::_Vector_impl_data(); // 148
		_Vector_impl::_Vector_impl(); // 321
		_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_Vector_base(); // 561
		vector<long unsigned int, std::allocator<long unsigned int> >::vector(); // 115
		_Prime_rehash_policy::_Prime_rehash_policy(
					float __z);  // 513
		_Hash_code_base(const _Hash_code_base<unsigned int, std::pair<unsigned int const, int>, std::__detail::_Select1st, std::hash<unsigned int this); // 1395
		_Hashtable_base(const _Hashtable_base<unsigned int, std::pair<unsigned int const, int>, std::__detail::_Select1st, std::equal_to<unsigned this); // 513
		_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> > >::_Hashtable_alloc(); // 513
		_Hash_node_base::_Hash_node_base(); // 513
		_Hashtable(const _Hashtable<unsigned int, std::pair<unsigned int const, int>, std::allocator<std::pair<unsigned int const, int> >, s this); // 151
		unordered_map(const unordered_map<unsigned int, int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<uns this); // 115
		_Prime_rehash_policy::_Prime_rehash_policy(
					float __z);  // 513
		_Hash_code_base(const _Hash_code_base<unsigned int, std::pair<unsigned int const, unsigned int>, std::__detail::_Select1st, std::hash<uns this); // 1395
		_Hashtable_base(const _Hashtable_base<unsigned int, std::pair<unsigned int const, unsigned int>, std::__detail::_Select1st, std::equal_to this); // 513
		_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, unsigned int>, false> > >::_Hashtable_alloc(); // 513
		_Hash_node_base::_Hash_node_base(); // 513
		_Hashtable(const _Hashtable<unsigned int, std::pair<unsigned int const, unsigned int>, std::allocator<std::pair<unsigned int const, this); // 151
		unordered_map(const unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std: this); // 115
		_Vector_impl_data::_Vector_impl_data(); // 148
		__new_allocator<std::pair<unsigned int, unsigned int> >::__new_allocator(); // 168
		allocator<std::pair<unsigned int, unsigned int> >::allocator(); // 148
		_Vector_impl::_Vector_impl(); // 321
		_Vector_base<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >::_Vector_base(); // 561
		vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >::vector(); // 115
		__new_allocator<unsigned int>::__new_allocator(); // 168
		allocator<unsigned int>::allocator(); // 148
		_Vector_impl_data::_Vector_impl_data(); // 148
		_Vector_impl::_Vector_impl(); // 321
		_Vector_base<unsigned int, std::allocator<unsigned int> >::_Vector_base(); // 561
		vector<unsigned int, std::allocator<unsigned int> >::vector(); // 115
		spirvbin_t::spirvbin_t(
				int verbose);  // 627
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 616
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 623
		CThreadMutex::CThreadMutex(
				const char* pName);  // 613
		{
			_M_create<void (&)(const std::__cxx11::basic_string<char>&)>(union _Any_data& __dest,
											void ()(const basic_string<char, std::char_traits<char>, std::allocator<char> > &)& __f,
											true_type); // 217
			_M_init_functor<void (&)(const std::__cxx11::basic_string<char>&)>(union _Any_data& __functor,
												void ()(const basic_string<char, std::char_traits<char>, std::allocator<char> > &)& __f); // 451
			_M_not_empty_function<void(const std::__cxx11::basic_string<char>&)>(void (*__fp)(const basic_string<char, std::char_traits<char>, std::allocator<char> > &)); // 449
		}
		_Function_base::_Function_base(); // 439
		function<void(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)>::function<void (
										void ()(const basic_string<char, std::char_traits<char>, std::allocator<char> > &)& __f); // 620
		_M_create<void (* const&)(const std::__cxx11::basic_string<char>&)>(union _Any_data& __dest,
											void ()(const basic_string<char, std::char_traits<char>, std::allocator<char> > &)* const& __f,
											true_type); // 217
		_M_init_functor<void (* const&)(const std::__cxx11::basic_string<char>&)>(union _Any_data& __functor,
												void ()(const basic_string<char, std::char_traits<char>, std::allocator<char> > &)* const& __f); // 200
		_M_manager(union _Any_data& __dest,
				const union _Any_data& __source,
				_Manager_operation __op);  // 284
		_M_manager(union _Any_data& __dest,
				const union _Any_data& __source,
				_Manager_operation __op);  // 393
		_Function_base::_Function_base(); // 389
		function<void(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)>::operator bool()>* this); // 391
		function<void(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)>::function(
			const function<void(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)>& __x); // 473
		swap<std::_Any_data>(union _Any_data& __a,
					union _Any_data& __b);  // 560
		swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>(bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __a,
												bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __b); // 561
		function<void(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)>::swap(
			function<void(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)>& __x); // 473
		_Function_base::~_Function_base(); // 336
		function<void(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)>::~function()>* this); // 473
		function<void(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)>::operator=(
				const function<void(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)>& __x); // 132
		registerErrorHandler(errorfn_t handler); // 620
		_Function_base::~_Function_base(); // 336
		function<void(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)>::~function()>* this); // 620
	}
	CUtlMemory<VfxUniformBlockInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxUniformBlockInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::CUtlVector(); // 536
	_Function_base::_Function_base(); // 439
	{
		_M_not_empty_function<CHLSLShaderCompiler::PostProcessSPIRV(const DxcAttributeOptions_t&)::<lambda(spv_message_level_t, char const*, const spv_position_t&, char const*)> >(const &); // 449
		_M_init_functor<CHLSLShaderCompiler::PostProcessSPIRV(const DxcAttributeOptions_t&)::<lambda(spv_message_level_t, char const*, const spv_position_t&, char const*)> >(union _Any_data& __functor,
																class& __f); // 451
	}
	function<void(spv_message_level_t, char const::function<CHLSLShaderCompiler::PostProcessSPIRV(
																class& __f);  // 556
	_Function_base::~_Function_base(); // 336
	function<void(spv_message_level_t, char const::~function()>* this); // 556
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
		length(const char_type* __s); // 713
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 589
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 589
	allocator<char>::~allocator(); // 589
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 598
	{
		const size_type  __size; // 762
		size_type __navail; // 763
		{
			pointer __old_start; // 784
			pointer __old_finish; // 785
			const size_type  __len; // 787
			pointer __new_start; // 789
			vector<unsigned int, std::allocator<unsigned int> >::_M_check_len(
					size_type __n,
					const char* __s);  // 788
			__new_allocator<unsigned int>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<unsigned int>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<unsigned int, std::allocator<unsigned int> >::_M_allocate(
					size_t __n);  // 789
			{
				_Guard_alloc __guard; // 792
				{
					value_type* __val; // 892
					__fill_a1<unsigned int*, unsigned int>(unsigned int* __first,
										unsigned int* __last,
										const unsigned int& __value);  // 979
					__fill_a<unsigned int*, unsigned int>(unsigned int* __first,
										unsigned int* __last,
										const unsigned int& __value);  // 1148
					__fill_n_a<unsigned int*, long unsigned int, unsigned int>(unsigned int* __first,
													long unsigned int __n,
													const unsigned int& __value,
													random_access_iterator_tag);  // 1178
					fill_n<unsigned int*, long unsigned int, unsigned int>(unsigned int* __first,
												long unsigned int __n,
												const unsigned int& __value);  // 896
					_Construct<unsigned int>(unsigned int* __p); // 894
				}
				__uninit_default_n<unsigned int*, long unsigned int>(unsigned int* __first,
											long unsigned int __n);  // 888
				__uninit_default_n<unsigned int*, long unsigned int>(unsigned int* __first,
											long unsigned int __n);  // 947
				__uninitialized_default_n<unsigned int*, long unsigned int>(unsigned int* __first,
												long unsigned int __n);  // 1002
				__uninitialized_default_n_a<unsigned int*, long unsigned int, unsigned int>(unsigned int* __first,
														long unsigned int __n,
														allocator<unsigned int> &);  // 794
				_Guard_alloc::_Guard_alloc(
						pointer __s,
						size_type __l,
						_Base& __vect);  // 792
				_Guard_alloc::~_Guard_alloc(); // 835
			}
		}
	}
	vector<unsigned int, std::allocator<unsigned int> >::_M_default_append(
				size_type __n);  // 1146
	vector<unsigned int, std::allocator<unsigned int> >::resize(
		size_type __new_size);  // 598
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 599
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 599
	OptimizerOptions::OptimizerOptions(); // 600
	OptimizerOptions::set_run_validator(
				bool run);  // 601
	vector<unsigned int, std::allocator<unsigned int> >::size(); // 602
	vector<unsigned int, std::allocator<unsigned int> >::operator[](
			size_type __n);  // 605
	vector<unsigned int, std::allocator<unsigned int> >::size(); // 605
	vector<unsigned int, std::allocator<unsigned int> >::size(); // 634
	vector<unsigned int, std::allocator<unsigned int> >::size(); // 635
	OptimizerOptions::~OptimizerOptions(); // 637
	_Vector_base<unsigned int, std::allocator<unsigned int> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned int*, unsigned int>(unsigned int* __first,
						unsigned int* __last,
						allocator<unsigned int> &);  // 802
	__new_allocator<unsigned int>::deallocate(
			unsigned int* __p,
			size_type __n);  // 215
	allocator<unsigned int>::deallocate(
			unsigned int* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned int, std::allocator<unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<unsigned int, std::allocator<unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<unsigned int>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<unsigned int, std::allocator<unsigned int> >::~_Vector_base(); // 805
	vector<unsigned int, std::allocator<unsigned int> >::~vector(); // 637
	_Vector_base<unsigned int, std::allocator<unsigned int> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned int*, unsigned int>(unsigned int* __first,
						unsigned int* __last,
						allocator<unsigned int> &);  // 802
	__new_allocator<unsigned int>::deallocate(
			unsigned int* __p,
			size_type __n);  // 215
	allocator<unsigned int>::deallocate(
			unsigned int* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned int, std::allocator<unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<unsigned int, std::allocator<unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<unsigned int>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<unsigned int, std::allocator<unsigned int> >::~_Vector_base(); // 805
	vector<unsigned int, std::allocator<unsigned int> >::~vector(); // 637
	{
		int i; // 1721
		CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 42
		VfxUniformBlockInfo_t::~VfxUniformBlockInfo_t(); // 1526
		Destruct<VfxUniformBlockInfo_t>(VfxUniformBlockInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxUniformBlockInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 903
	CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Purge(); // 560
	ValidateAlignment<VfxUniformBlockInfo_t>(void); // 508
	CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 510
	CUtlMemory<VfxUniformBlockInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::~CUtlVector(); // 637
} /* size: 0, variables: 5, inline expansions: 73 (1497 bytes) */

// <00133A87> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:642
// variable: 1
// function calls: 19
void CHLSLShaderCompiler::FixResourceBindingsSPIRV()
{
	CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > bindingNumberChanges; // 650
	GetBindingStartOffsetHLSLToSPIRV(VfxCompileTarget_t compileTarget,
					VfxProgram_t programType,
					VfxRegisterType_t regType,
					uint32 nDescriptorSet);  // 646
	CUtlString::CUtlString(
			const char* pString);  // 646
	CUtlString::~CUtlString(); // 646
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > this); // 530
	CUtlVectorBase(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >::CUtlVector(); // 650
	Count(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, i this); // 657
	RemoveAll(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > this); // 1798
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::Purge(); // 903
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > this); // 560
	ValidateAlignment<CVfxSpirVReflect::BindingNumberChange_t>(void); // 508
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::Purge(); // 510
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > this); // 410
	CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >::~CUtlVector(); // 661
} /* size: 303, variables: 1, inline expansions: 19 (271 bytes) */

// <0014768C> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:663
int CompareUInt32Func(const uint32* a, const uint32* b)
{
} /* size: 15 */

// <00131F78> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:672
// variables: 21
// function calls: 117
void CHLSLShaderCompiler::ComputeBindingChangesForResourceType(VfxRegisterType_t nRegisterType, int32 nLimit, CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >& bindingNumberChangesOut)
{
	CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> > activeUniformBlocks; // 674
	CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> > activeUniforms; // 676
	CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > bindingNumberChanges; // 679
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > vecBindings; // 680
	uint32 nNextBinding; // 730
	int32 nCurBinding; // 731
	{
		const VfxUniformBlockInfo_t& blockInfo; // 683
		CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >& __for_range; // 47726
		iterator __for_begin; // 16095
		iterator __for_end; // 16095
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Count(); // 104
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::end(); // 683
		CUtlMemory<VfxUniformBlockInfo_t, int>::Base(); // 112
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Base(); // 102
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::begin(); // 683
		GetBindingStartOffsetHLSLToSPIRV(VfxCompileTarget_t compileTarget,
						VfxProgram_t programType,
						VfxRegisterType_t regType,
						uint32 nDescriptorSet);  // 693
		CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
			int i);  // 1252
		Construct<CVfxSpirVReflect::BindingNumberChange_t, CVfxSpirVReflect::BindingNumberChange_t>(BindingNumberChange_t* pMemory); // 1252
		ResetDbgInfo(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > this); // 824
		GrowMemory(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
				int num);  // 1249
		AddToTail(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
				BindingNumberChange_t& src);  // 695
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
			int i);  // 1252
		Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
				unsigned int& src);  // 699
	}
	{
		const VfxUniformInfo_t& uniformInfo; // 705
		CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >& __for_range; // 47353
		iterator __for_begin; // 21657
		iterator __for_end; // 21657
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Count(); // 104
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::end(); // 705
		CUtlMemory<VfxUniformInfo_t, int>::Base(); // 112
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Base(); // 102
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::begin(); // 705
		GetBindingStartOffsetHLSLToSPIRV(VfxCompileTarget_t compileTarget,
						VfxProgram_t programType,
						VfxRegisterType_t regType,
						uint32 nDescriptorSet);  // 715
		CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
			int i);  // 1252
		Construct<CVfxSpirVReflect::BindingNumberChange_t, CVfxSpirVReflect::BindingNumberChange_t>(BindingNumberChange_t* pMemory); // 1252
		ResetDbgInfo(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > this); // 824
		GrowMemory(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
				int num);  // 1249
		AddToTail(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
				BindingNumberChange_t& src);  // 717
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
			int i);  // 1252
		Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
				unsigned int& src);  // 721
	}
	{
		BindingNumberChange_t& bindingNumberChange; // 732
		CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >& __for_range; // 48282
		iterator __for_begin; // 27365
		iterator __for_end; // 27365
		end(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > this); // 732
	}
	CUtlMemory<VfxUniformBlockInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxUniformBlockInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::CUtlVector(); // 674
	CUtlMemory<VfxUniformInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxUniformInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::CUtlVector(); // 676
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > this); // 530
	CUtlVectorBase(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >::CUtlVector(); // 679
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 680
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Sort(
		int (*pfnCompare)(const unsigned int *, const unsigned int *));  // 727
	GetBindingStartOffsetHLSLToSPIRV(VfxCompileTarget_t compileTarget,
					VfxProgram_t programType,
					VfxRegisterType_t regType,
					uint32 nDescriptorSet);  // 730
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 752
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::Purge(); // 903
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > this); // 560
	ValidateAlignment<CVfxSpirVReflect::BindingNumberChange_t>(void); // 508
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::Purge(); // 510
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > this); // 410
	CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >::~CUtlVector(); // 752
	{
		int i; // 1721
		CUtlMemory<VfxUniformInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 17
		VfxUniformInfo_t::~VfxUniformInfo_t(); // 1526
		Destruct<VfxUniformInfo_t>(VfxUniformInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 903
	CUtlMemory<VfxUniformInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Purge(); // 560
	ValidateAlignment<VfxUniformInfo_t>(void); // 508
	CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 510
	CUtlMemory<VfxUniformInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::~CUtlVector(); // 752
	{
		int i; // 1721
		CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 42
		VfxUniformBlockInfo_t::~VfxUniformBlockInfo_t(); // 1526
		Destruct<VfxUniformBlockInfo_t>(VfxUniformBlockInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxUniformBlockInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 903
	CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Purge(); // 560
	ValidateAlignment<VfxUniformBlockInfo_t>(void); // 508
	CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 510
	CUtlMemory<VfxUniformBlockInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::~CUtlVector(); // 752
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::NumAllocated(); // 782
	CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > this); // 368
	ResetDbgInfo(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > this); // 824
	GrowMemory(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
			int i);  // 1502
		CopyConstruct<CVfxSpirVReflect::BindingNumberChange_t>(BindingNumberChange_t* pMemory,
									const BindingNumberChange_t& src);  // 1502
	}
	InsertMultipleBefore(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
				int elem,
				int num,
				const BindingNumberChange_t* pToInsert);  // 1476
	InsertMultipleBefore(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
				int elem,
				int num,
				const BindingNumberChange_t* pToInsert);  // 1303
	AddMultipleToTail(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  this,
				int num,
				const BindingNumberChange_t* pToCopy);  // 750
} /* size: 2094, variables: 6, inline expansions: 67 (2762 bytes) */

