
//
// public/resourcefile/resourcestream.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 126
//	classes: 74
//

// <01351430> ../public/resourcefile/resourcestream.h:40
// variable: 1
inline byte* ResolveOffset(const int32* pOffset)
{
	int offset; // 42
} /* size: 0, variables: 1 */

// <0000B9D6> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<char> {
private:
	char * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<char>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<char>* , char* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<char> operator+(CLockedResource<char>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const char* operator char const*(const CLockedResource<char>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	char* operator char*(CLockedResource<char>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	char* operator->(CLockedResource<char>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const char* operator->(const CLockedResource<char>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<char>* );
};

// <005DB467> ../public/resourcefile/resourcestream.h:55
// member functions: 16
// member variables: 2
// class size: 16
class CLockedResource<unsigned char> {
private:
	unsigned char * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<unsigned char>* , unsigned char* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<unsigned char> operator+(CLockedResource<unsigned char>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const unsigned char* operator unsigned char const*(const CLockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	unsigned char* operator unsigned char*(CLockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	unsigned char* operator->(CLockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const unsigned char* operator->(const CLockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<unsigned char>* );
	void CLockedResource(class CLockedResource<unsigned char> *); /* linkage=_ZN15CLockedResourceIhEC4Ev */
	void CLockedResource(class CLockedResource<unsigned char> *, unsigned char *, uint); /* linkage=_ZN15CLockedResourceIhEC4EPhj */
	class CLockedResource<unsigned char> operator+(class CLockedResource<unsigned char> *, int); /* linkage=_ZN15CLockedResourceIhEplEi */
	const unsigned char  * operator unsigned char const*(const class CLockedResource<unsigned char>  *); /* linkage=_ZNK15CLockedResourceIhEcvPKhEv */
	unsigned char * operator unsigned char*(class CLockedResource<unsigned char> *); /* linkage=_ZN15CLockedResourceIhEcvPhEv */
	unsigned char * operator->(class CLockedResource<unsigned char> *); /* linkage=_ZN15CLockedResourceIhEptEv */
	const unsigned char  * operator->(const class CLockedResource<unsigned char>  *); /* linkage=_ZNK15CLockedResourceIhEptEv */
	uint Count(const class CLockedResource<unsigned char>  *); /* linkage=_ZNK15CLockedResourceIhE5CountEv */
};

// <005DBA72> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<float> {
private:
	float * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<float>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<float>* , float* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<float> operator+(CLockedResource<float>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const float* operator float const*(const CLockedResource<float>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	float* operator float*(CLockedResource<float>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	float* operator->(CLockedResource<float>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const float* operator->(const CLockedResource<float>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<float>* );
};

// <005DBBD3> ../public/resourcefile/resourcestream.h:55
// member functions: 16
// member variables: 2
// class size: 16
class CLockedResource<unsigned int> {
private:
	unsigned int * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<unsigned int>* , unsigned int* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<unsigned int> operator+(CLockedResource<unsigned int>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const unsigned int* operator unsigned int const*(const CLockedResource<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	unsigned int* operator unsigned int*(CLockedResource<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	unsigned int* operator->(CLockedResource<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const unsigned int* operator->(const CLockedResource<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<unsigned int>* );
	void CLockedResource(class CLockedResource<unsigned char> *); /* linkage=_ZN15CLockedResourceIhEC4Ev */
	void CLockedResource(class CLockedResource<unsigned char> *, unsigned char *, uint); /* linkage=_ZN15CLockedResourceIhEC4EPhj */
	class CLockedResource<unsigned char> operator+(class CLockedResource<unsigned char> *, int); /* linkage=_ZN15CLockedResourceIhEplEi */
	const unsigned char  * operator unsigned char const*(const class CLockedResource<unsigned char>  *); /* linkage=_ZNK15CLockedResourceIhEcvPKhEv */
	unsigned char * operator unsigned char*(class CLockedResource<unsigned char> *); /* linkage=_ZN15CLockedResourceIhEcvPhEv */
	unsigned char * operator->(class CLockedResource<unsigned char> *); /* linkage=_ZN15CLockedResourceIhEptEv */
	const unsigned char  * operator->(const class CLockedResource<unsigned char>  *); /* linkage=_ZNK15CLockedResourceIhEptEv */
	uint Count(const class CLockedResource<unsigned char>  *); /* linkage=_ZNK15CLockedResourceIhE5CountEv */
};

// <0091CE32> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<ResourceBlockEntry_t> {
private:
	ResourceBlockEntry_t * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<ResourceBlockEntry_t>* , ResourceBlockEntry_t* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<ResourceBlockEntry_t> operator+(CLockedResource<ResourceBlockEntry_t>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const ResourceBlockEntry_t* operator const ResourceBlockEntry_t*(const CLockedResource<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	ResourceBlockEntry_t* operator ResourceBlockEntry_t*(CLockedResource<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	ResourceBlockEntry_t* operator->(CLockedResource<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const ResourceBlockEntry_t* operator->(const CLockedResource<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<ResourceBlockEntry_t>* );
};

// <017B9703> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<long long unsigned int> {
private:
	long long unsigned int * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<long long unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<long long unsigned int>* , long long unsigned int* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<long long unsigned int> operator+(CLockedResource<long long unsigned int>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const long long unsigned int* operator long long unsigned int const*(const CLockedResource<long long unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	long long unsigned int* operator long long unsigned int*(CLockedResource<long long unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	long long unsigned int* operator->(CLockedResource<long long unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const long long unsigned int* operator->(const CLockedResource<long long unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<long long unsigned int>* );
};

// <017B99C5> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<short unsigned int> {
private:
	short unsigned int * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<short unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<short unsigned int>* , short unsigned int* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<short unsigned int> operator+(CLockedResource<short unsigned int>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const short unsigned int* operator short unsigned int const*(const CLockedResource<short unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	short unsigned int* operator short unsigned int*(CLockedResource<short unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	short unsigned int* operator->(CLockedResource<short unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const short unsigned int* operator->(const CLockedResource<short unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<short unsigned int>* );
};

// <017DDE55> ../public/resourcefile/resourcestream.h:55
// member functions: 16
// member variables: 2
// class size: 16
class CLockedResource<RenderMeshInputLayoutField_t> {
private:
	RenderMeshInputLayoutField_t * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<RenderMeshInputLayoutField_t>* , RenderMeshInputLayoutField_t* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<RenderMeshInputLayoutField_t> operator+(CLockedResource<RenderMeshInputLayoutField_t>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const RenderMeshInputLayoutField_t* operator const RenderMeshInputLayoutField_t*(const CLockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	RenderMeshInputLayoutField_t* operator RenderMeshInputLayoutField_t*(CLockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	RenderMeshInputLayoutField_t* operator->(CLockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const RenderMeshInputLayoutField_t* operator->(const CLockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<RenderMeshInputLayoutField_t>* );
	void CLockedResource(class CLockedResource<RenderMeshInputLayoutField_t> *); /* linkage=_ZN15CLockedResourceI28RenderMeshInputLayoutField_tEC4Ev */
	void CLockedResource(class CLockedResource<RenderMeshInputLayoutField_t> *, class RenderMeshInputLayoutField_t *, uint); /* linkage=_ZN15CLockedResourceI28RenderMeshInputLayoutField_tEC4EPS0_j */
	class CLockedResource<RenderMeshInputLayoutField_t> operator+(class CLockedResource<RenderMeshInputLayoutField_t> *, int); /* linkage=_ZN15CLockedResourceI28RenderMeshInputLayoutField_tEplEi */
	const class RenderMeshInputLayoutField_t  * operator const RenderMeshInputLayoutField_t*(const class CLockedResource<RenderMeshInputLayoutField_t>  *); /* linkage=_ZNK15CLockedResourceI28RenderMeshInputLayoutField_tEcvPKS0_Ev */
	class RenderMeshInputLayoutField_t * operator RenderMeshInputLayoutField_t*(class CLockedResource<RenderMeshInputLayoutField_t> *); /* linkage=_ZN15CLockedResourceI28RenderMeshInputLayoutField_tEcvPS0_Ev */
	class RenderMeshInputLayoutField_t * operator->(class CLockedResource<RenderMeshInputLayoutField_t> *); /* linkage=_ZN15CLockedResourceI28RenderMeshInputLayoutField_tEptEv */
	const class RenderMeshInputLayoutField_t  * operator->(const class CLockedResource<RenderMeshInputLayoutField_t>  *); /* linkage=_ZNK15CLockedResourceI28RenderMeshInputLayoutField_tEptEv */
	uint Count(const class CLockedResource<RenderMeshInputLayoutField_t>  *); /* linkage=_ZNK15CLockedResourceI28RenderMeshInputLayoutField_tE5CountEv */
};

// <017DE67F> ../public/resourcefile/resourcestream.h:55
// member functions: 16
// member variables: 2
// class size: 16
class CLockedResource<RenderMeshBufferData_t> {
private:
	RenderMeshBufferData_t * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<RenderMeshBufferData_t>* , RenderMeshBufferData_t* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<RenderMeshBufferData_t> operator+(CLockedResource<RenderMeshBufferData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const RenderMeshBufferData_t* operator const RenderMeshBufferData_t*(const CLockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	RenderMeshBufferData_t* operator RenderMeshBufferData_t*(CLockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	RenderMeshBufferData_t* operator->(CLockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const RenderMeshBufferData_t* operator->(const CLockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<RenderMeshBufferData_t>* );
	void CLockedResource(class CLockedResource<RenderMeshBufferData_t> *); /* linkage=_ZN15CLockedResourceI22RenderMeshBufferData_tEC4Ev */
	void CLockedResource(class CLockedResource<RenderMeshBufferData_t> *, class RenderMeshBufferData_t *, uint); /* linkage=_ZN15CLockedResourceI22RenderMeshBufferData_tEC4EPS0_j */
	class CLockedResource<RenderMeshBufferData_t> operator+(class CLockedResource<RenderMeshBufferData_t> *, int); /* linkage=_ZN15CLockedResourceI22RenderMeshBufferData_tEplEi */
	const class RenderMeshBufferData_t  * operator const RenderMeshBufferData_t*(const class CLockedResource<RenderMeshBufferData_t>  *); /* linkage=_ZNK15CLockedResourceI22RenderMeshBufferData_tEcvPKS0_Ev */
	class RenderMeshBufferData_t * operator RenderMeshBufferData_t*(class CLockedResource<RenderMeshBufferData_t> *); /* linkage=_ZN15CLockedResourceI22RenderMeshBufferData_tEcvPS0_Ev */
	class RenderMeshBufferData_t * operator->(class CLockedResource<RenderMeshBufferData_t> *); /* linkage=_ZN15CLockedResourceI22RenderMeshBufferData_tEptEv */
	const class RenderMeshBufferData_t  * operator->(const class CLockedResource<RenderMeshBufferData_t>  *); /* linkage=_ZNK15CLockedResourceI22RenderMeshBufferData_tEptEv */
	uint Count(const class CLockedResource<RenderMeshBufferData_t>  *); /* linkage=_ZNK15CLockedResourceI22RenderMeshBufferData_tE5CountEv */
};

// <0184E23D> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<VBIBBlockHeader_t> {
private:
	VBIBBlockHeader_t * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<VBIBBlockHeader_t>* , VBIBBlockHeader_t* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<VBIBBlockHeader_t> operator+(CLockedResource<VBIBBlockHeader_t>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const VBIBBlockHeader_t* operator const VBIBBlockHeader_t*(const CLockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	VBIBBlockHeader_t* operator VBIBBlockHeader_t*(CLockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	VBIBBlockHeader_t* operator->(CLockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const VBIBBlockHeader_t* operator->(const CLockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<VBIBBlockHeader_t>* );
};

// <00E004F6> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<SheetSequenceFrame_t> {
private:
	SheetSequenceFrame_t * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<SheetSequenceFrame_t>* , SheetSequenceFrame_t* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<SheetSequenceFrame_t> operator+(CLockedResource<SheetSequenceFrame_t>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const SheetSequenceFrame_t* operator const SheetSequenceFrame_t*(const CLockedResource<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	SheetSequenceFrame_t* operator SheetSequenceFrame_t*(CLockedResource<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	SheetSequenceFrame_t* operator->(CLockedResource<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const SheetSequenceFrame_t* operator->(const CLockedResource<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<SheetSequenceFrame_t>* );
};

// <00E00655> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<const SheetSequenceFrame_t> {
private:
	const class SheetSequenceFrame_t * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<const SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<const SheetSequenceFrame_t>* , const SheetSequenceFrame_t* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<const SheetSequenceFrame_t> operator+(CLockedResource<const SheetSequenceFrame_t>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const SheetSequenceFrame_t* operator const SheetSequenceFrame_t*(const CLockedResource<const SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	const SheetSequenceFrame_t* operator const SheetSequenceFrame_t*(CLockedResource<const SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	const SheetSequenceFrame_t* operator->(CLockedResource<const SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const SheetSequenceFrame_t* operator->(const CLockedResource<const SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<const SheetSequenceFrame_t>* );
};

// <00E00AD8> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<SequenceFloatParam_t> {
private:
	SequenceFloatParam_t * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<SequenceFloatParam_t>* , SequenceFloatParam_t* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<SequenceFloatParam_t> operator+(CLockedResource<SequenceFloatParam_t>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const SequenceFloatParam_t* operator const SequenceFloatParam_t*(const CLockedResource<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	SequenceFloatParam_t* operator SequenceFloatParam_t*(CLockedResource<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	SequenceFloatParam_t* operator->(CLockedResource<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const SequenceFloatParam_t* operator->(const CLockedResource<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<SequenceFloatParam_t>* );
};

// <00E00C21> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<const SequenceFloatParam_t> {
private:
	const class SequenceFloatParam_t * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<const SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<const SequenceFloatParam_t>* , const SequenceFloatParam_t* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<const SequenceFloatParam_t> operator+(CLockedResource<const SequenceFloatParam_t>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const SequenceFloatParam_t* operator const SequenceFloatParam_t*(const CLockedResource<const SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	const SequenceFloatParam_t* operator const SequenceFloatParam_t*(CLockedResource<const SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	const SequenceFloatParam_t* operator->(CLockedResource<const SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const SequenceFloatParam_t* operator->(const CLockedResource<const SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<const SequenceFloatParam_t>* );
};

// <00E013BA> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<SheetFrameImage_t> {
private:
	SheetFrameImage_t * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<SheetFrameImage_t>* , SheetFrameImage_t* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<SheetFrameImage_t> operator+(CLockedResource<SheetFrameImage_t>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const SheetFrameImage_t* operator const SheetFrameImage_t*(const CLockedResource<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	SheetFrameImage_t* operator SheetFrameImage_t*(CLockedResource<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	SheetFrameImage_t* operator->(CLockedResource<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const SheetFrameImage_t* operator->(const CLockedResource<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<SheetFrameImage_t>* );
};

// <00E01519> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<const SheetFrameImage_t> {
private:
	const class SheetFrameImage_t * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<const SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<const SheetFrameImage_t>* , const SheetFrameImage_t* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<const SheetFrameImage_t> operator+(CLockedResource<const SheetFrameImage_t>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const SheetFrameImage_t* operator const SheetFrameImage_t*(const CLockedResource<const SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	const SheetFrameImage_t* operator const SheetFrameImage_t*(CLockedResource<const SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	const SheetFrameImage_t* operator->(CLockedResource<const SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const SheetFrameImage_t* operator->(const CLockedResource<const SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<const SheetFrameImage_t>* );
};

// <00E019AC> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<SheetSequence_t> {
private:
	SheetSequence_t * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<SheetSequence_t>* , SheetSequence_t* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<SheetSequence_t> operator+(CLockedResource<SheetSequence_t>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const SheetSequence_t* operator const SheetSequence_t*(const CLockedResource<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	SheetSequence_t* operator SheetSequence_t*(CLockedResource<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	SheetSequence_t* operator->(CLockedResource<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const SheetSequence_t* operator->(const CLockedResource<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<SheetSequence_t>* );
};

// <00E01AF5> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<const SheetSequence_t> {
private:
	const class SheetSequence_t * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<const SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<const SheetSequence_t>* , const SheetSequence_t* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<const SheetSequence_t> operator+(CLockedResource<const SheetSequence_t>* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const SheetSequence_t* operator const SheetSequence_t*(const CLockedResource<const SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:70 */
	const SheetSequence_t* operator const SheetSequence_t*(CLockedResource<const SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:72 */
	const SheetSequence_t* operator->(CLockedResource<const SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const SheetSequence_t* operator->(const CLockedResource<const SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<const SheetSequence_t>* );
};

// <0020CD84> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<CResourcePointer<CResourceString> > {
private:
	CResourcePointer<CResourceString> * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<CResourcePointer<CResourceString> >* , CResourcePointer<CResourceString>* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<CResourcePointer<CResourceString> > operator+(CLockedResource<CResourcePointer<CResourceString> >* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const CResourcePointer<CResourceString>* operator const CResourcePointer<CResourceString>*(const CLockedResource<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:70 */
	CResourcePointer<CResourceString>* operator CResourcePointer<CResourceString>*(CLockedResource<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:72 */
	CResourcePointer<CResourceString>* operator->(CLockedResource<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const CResourcePointer<CResourceString>* operator->(const CLockedResource<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<CResourcePointer<CResourceString> >* );
};

// <0020CED9> ../public/resourcefile/resourcestream.h:55
// member functions: 8
// member variables: 2
// class size: 16
class CLockedResource<const CResourcePointer<CResourceString> > {
private:
	const class CResourcePointer<CResourceString> * m_pData; /* 0 8 */
	uint m_nCount; /* 8 4 */
	/* ../public/resourcefile/resourcestream.h:63 */
	void CLockedResource(CLockedResource<const CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:64 */
	void CLockedResource(CLockedResource<const CResourcePointer<CResourceString> >* , const CResourcePointer<CResourceString>* , uint);
	/* ../public/resourcefile/resourcestream.h:67 */
	CLockedResource<const CResourcePointer<CResourceString> > operator+(CLockedResource<const CResourcePointer<CResourceString> >* , int);
	/* ../public/resourcefile/resourcestream.h:69 */
	const CResourcePointer<CResourceString>* operator const CResourcePointer<CResourceString>*(const CLockedResource<const CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:70 */
	const CResourcePointer<CResourceString>* operator const CResourcePointer<CResourceString>*(CLockedResource<const CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:72 */
	const CResourcePointer<CResourceString>* operator->(CLockedResource<const CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:73 */
	const CResourcePointer<CResourceString>* operator->(const CLockedResource<const CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:75 */
	uint Count(const CLockedResource<const CResourcePointer<CResourceString> >* );
};

// <0185B423> ../public/resourcefile/resourcestream.h:64
void CLockedResource<unsigned char>::CLockedResource(unsigned char* pData, uint nCount)
{
} /* size: 0 */

// <0185B3F2> ../public/resourcefile/resourcestream.h:64
inline void CLockedResource<unsigned char>::CLockedResource(unsigned char* pData, uint nCount)
{
} /* size: 0 */

// <018564EA> ../public/resourcefile/resourcestream.h:64
void CLockedResource<VBIBBlockHeader_t>::CLockedResource(VBIBBlockHeader_t* pData, uint nCount)
{
} /* size: 0 */

// <018564B9> ../public/resourcefile/resourcestream.h:64
inline void CLockedResource<VBIBBlockHeader_t>::CLockedResource(VBIBBlockHeader_t* pData, uint nCount)
{
} /* size: 0 */

// <018563F2> ../public/resourcefile/resourcestream.h:64
void CLockedResource<RenderMeshBufferData_t>::CLockedResource(RenderMeshBufferData_t* pData, uint nCount)
{
} /* size: 0 */

// <018563C1> ../public/resourcefile/resourcestream.h:64
inline void CLockedResource<RenderMeshBufferData_t>::CLockedResource(RenderMeshBufferData_t* pData, uint nCount)
{
} /* size: 0 */

// <018562E3> ../public/resourcefile/resourcestream.h:64
void CLockedResource<RenderMeshInputLayoutField_t>::CLockedResource(RenderMeshInputLayoutField_t* pData, uint nCount)
{
} /* size: 0 */

// <018562B2> ../public/resourcefile/resourcestream.h:64
inline void CLockedResource<RenderMeshInputLayoutField_t>::CLockedResource(RenderMeshInputLayoutField_t* pData, uint nCount)
{
} /* size: 0 */

// <0185638F> ../public/resourcefile/resourcestream.h:69
inline void operator const CLockedResource<RenderMeshBufferData_t>::RenderMeshBufferData_t*()
{
} /* size: 0 */

// <01856280> ../public/resourcefile/resourcestream.h:69
inline void operator const CLockedResource<RenderMeshInputLayoutField_t>::RenderMeshInputLayoutField_t*()
{
} /* size: 0 */

// <018561DC> ../public/resourcefile/resourcestream.h:69
inline void operator unsigned char CLockedResource<unsigned char>::const*()
{
} /* size: 0 */

// <01858E9C> ../public/resourcefile/resourcestream.h:70
inline void operator CLockedResource<VBIBBlockHeader_t>::VBIBBlockHeader_t*()
{
} /* size: 0 */

// <018563A8> ../public/resourcefile/resourcestream.h:75
inline void CLockedResource<RenderMeshBufferData_t>::Count()
{
} /* size: 0 */

// <01856299> ../public/resourcefile/resourcestream.h:75
inline void CLockedResource<RenderMeshInputLayoutField_t>::Count()
{
} /* size: 0 */

// <018561F5> ../public/resourcefile/resourcestream.h:75
inline void CLockedResource<unsigned char>::Count()
{
} /* size: 0 */

// <0184EB10> ../public/resourcefile/resourcestream.h:81
// member functions: 24
// member variables: 3
// class size: 16
class CUnlockedResource<VBIBBlockHeader_t> {
private:
	CResourceStream * m_pStream; /* 0 8 */
	uint32 m_nOffset; /* 8 4 */
	uint32 m_nCount; /* 12 4 */
	/* ../public/resourcefile/resourcestream.h:90 */
	void CUnlockedResource(CUnlockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:984 */
	void CUnlockedResource(CUnlockedResource<VBIBBlockHeader_t>* , CResourceStream* , VBIBBlockHeader_t* , uint);
	/* ../public/resourcefile/resourcestream.h:92 */
	bool IsValid(const CUnlockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:93 */
	void Reset(CUnlockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:96 */
	CUnlockedResource<VBIBBlockHeader_t> operator+(CUnlockedResource<VBIBBlockHeader_t>* , int);
	/* ../public/resourcefile/resourcestream.h:102 */
	const VBIBBlockHeader_t* operator const VBIBBlockHeader_t*(const CUnlockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:103 */
	VBIBBlockHeader_t* operator VBIBBlockHeader_t*(CUnlockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:105 */
	VBIBBlockHeader_t* operator->(CUnlockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:106 */
	const VBIBBlockHeader_t* operator->(const CUnlockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:108 */
	uint Count(const CUnlockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:994 */
	VBIBBlockHeader_t* GetPtr(CUnlockedResource<VBIBBlockHeader_t>* );
	/* ../public/resourcefile/resourcestream.h:1000 */
	const VBIBBlockHeader_t* GetPtr(const CUnlockedResource<VBIBBlockHeader_t>* );
	void CUnlockedResource(class CUnlockedResource<VBIBBlockHeader_t> *); /* linkage=_ZN17CUnlockedResourceI17VBIBBlockHeader_tEC4Ev */
	void CUnlockedResource(class CUnlockedResource<VBIBBlockHeader_t> *, class CResourceStream *, class VBIBBlockHeader_t *, uint); /* linkage=_ZN17CUnlockedResourceI17VBIBBlockHeader_tEC4EP15CResourceStreamPS0_j */
	bool IsValid(const class CUnlockedResource<VBIBBlockHeader_t>  *); /* linkage=_ZNK17CUnlockedResourceI17VBIBBlockHeader_tE7IsValidEv */
	void Reset(class CUnlockedResource<VBIBBlockHeader_t> *); /* linkage=_ZN17CUnlockedResourceI17VBIBBlockHeader_tE5ResetEv */
	class CUnlockedResource<VBIBBlockHeader_t> operator+(class CUnlockedResource<VBIBBlockHeader_t> *, int); /* linkage=_ZN17CUnlockedResourceI17VBIBBlockHeader_tEplEi */
	const class VBIBBlockHeader_t  * operator const VBIBBlockHeader_t*(const class CUnlockedResource<VBIBBlockHeader_t>  *); /* linkage=_ZNK17CUnlockedResourceI17VBIBBlockHeader_tEcvPKS0_Ev */
	class VBIBBlockHeader_t * operator VBIBBlockHeader_t*(class CUnlockedResource<VBIBBlockHeader_t> *); /* linkage=_ZN17CUnlockedResourceI17VBIBBlockHeader_tEcvPS0_Ev */
	class VBIBBlockHeader_t * operator->(class CUnlockedResource<VBIBBlockHeader_t> *); /* linkage=_ZN17CUnlockedResourceI17VBIBBlockHeader_tEptEv */
	const class VBIBBlockHeader_t  * operator->(const class CUnlockedResource<VBIBBlockHeader_t>  *); /* linkage=_ZNK17CUnlockedResourceI17VBIBBlockHeader_tEptEv */
	uint Count(const class CUnlockedResource<VBIBBlockHeader_t>  *); /* linkage=_ZNK17CUnlockedResourceI17VBIBBlockHeader_tE5CountEv */
	class VBIBBlockHeader_t * GetPtr(class CUnlockedResource<VBIBBlockHeader_t> *); /* linkage=_ZN17CUnlockedResourceI17VBIBBlockHeader_tE6GetPtrEv */
	const class VBIBBlockHeader_t  * GetPtr(const class CUnlockedResource<VBIBBlockHeader_t>  *); /* linkage=_ZNK17CUnlockedResourceI17VBIBBlockHeader_tE6GetPtrEv */
};

// <0184ED02> ../public/resourcefile/resourcestream.h:81
// member functions: 24
// member variables: 3
// class size: 16
class CUnlockedResource<RenderMeshBufferData_t> {
private:
	CResourceStream * m_pStream; /* 0 8 */
	uint32 m_nOffset; /* 8 4 */
	uint32 m_nCount; /* 12 4 */
	/* ../public/resourcefile/resourcestream.h:90 */
	void CUnlockedResource(CUnlockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:984 */
	void CUnlockedResource(CUnlockedResource<RenderMeshBufferData_t>* , CResourceStream* , RenderMeshBufferData_t* , uint);
	/* ../public/resourcefile/resourcestream.h:92 */
	bool IsValid(const CUnlockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:93 */
	void Reset(CUnlockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:96 */
	CUnlockedResource<RenderMeshBufferData_t> operator+(CUnlockedResource<RenderMeshBufferData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:102 */
	const RenderMeshBufferData_t* operator const RenderMeshBufferData_t*(const CUnlockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:103 */
	RenderMeshBufferData_t* operator RenderMeshBufferData_t*(CUnlockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:105 */
	RenderMeshBufferData_t* operator->(CUnlockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:106 */
	const RenderMeshBufferData_t* operator->(const CUnlockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:108 */
	uint Count(const CUnlockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:994 */
	RenderMeshBufferData_t* GetPtr(CUnlockedResource<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:1000 */
	const RenderMeshBufferData_t* GetPtr(const CUnlockedResource<RenderMeshBufferData_t>* );
	void CUnlockedResource(class CUnlockedResource<RenderMeshBufferData_t> *); /* linkage=_ZN17CUnlockedResourceI22RenderMeshBufferData_tEC4Ev */
	void CUnlockedResource(class CUnlockedResource<RenderMeshBufferData_t> *, class CResourceStream *, class RenderMeshBufferData_t *, uint); /* linkage=_ZN17CUnlockedResourceI22RenderMeshBufferData_tEC4EP15CResourceStreamPS0_j */
	bool IsValid(const class CUnlockedResource<RenderMeshBufferData_t>  *); /* linkage=_ZNK17CUnlockedResourceI22RenderMeshBufferData_tE7IsValidEv */
	void Reset(class CUnlockedResource<RenderMeshBufferData_t> *); /* linkage=_ZN17CUnlockedResourceI22RenderMeshBufferData_tE5ResetEv */
	class CUnlockedResource<RenderMeshBufferData_t> operator+(class CUnlockedResource<RenderMeshBufferData_t> *, int); /* linkage=_ZN17CUnlockedResourceI22RenderMeshBufferData_tEplEi */
	const class RenderMeshBufferData_t  * operator const RenderMeshBufferData_t*(const class CUnlockedResource<RenderMeshBufferData_t>  *); /* linkage=_ZNK17CUnlockedResourceI22RenderMeshBufferData_tEcvPKS0_Ev */
	class RenderMeshBufferData_t * operator RenderMeshBufferData_t*(class CUnlockedResource<RenderMeshBufferData_t> *); /* linkage=_ZN17CUnlockedResourceI22RenderMeshBufferData_tEcvPS0_Ev */
	class RenderMeshBufferData_t * operator->(class CUnlockedResource<RenderMeshBufferData_t> *); /* linkage=_ZN17CUnlockedResourceI22RenderMeshBufferData_tEptEv */
	const class RenderMeshBufferData_t  * operator->(const class CUnlockedResource<RenderMeshBufferData_t>  *); /* linkage=_ZNK17CUnlockedResourceI22RenderMeshBufferData_tEptEv */
	uint Count(const class CUnlockedResource<RenderMeshBufferData_t>  *); /* linkage=_ZNK17CUnlockedResourceI22RenderMeshBufferData_tE5CountEv */
	class RenderMeshBufferData_t * GetPtr(class CUnlockedResource<RenderMeshBufferData_t> *); /* linkage=_ZN17CUnlockedResourceI22RenderMeshBufferData_tE6GetPtrEv */
	const class RenderMeshBufferData_t  * GetPtr(const class CUnlockedResource<RenderMeshBufferData_t>  *); /* linkage=_ZNK17CUnlockedResourceI22RenderMeshBufferData_tE6GetPtrEv */
};

// <0184EEF4> ../public/resourcefile/resourcestream.h:81
// member functions: 24
// member variables: 3
// class size: 16
class CUnlockedResource<RenderMeshInputLayoutField_t> {
private:
	CResourceStream * m_pStream; /* 0 8 */
	uint32 m_nOffset; /* 8 4 */
	uint32 m_nCount; /* 12 4 */
	/* ../public/resourcefile/resourcestream.h:90 */
	void CUnlockedResource(CUnlockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:984 */
	void CUnlockedResource(CUnlockedResource<RenderMeshInputLayoutField_t>* , CResourceStream* , RenderMeshInputLayoutField_t* , uint);
	/* ../public/resourcefile/resourcestream.h:92 */
	bool IsValid(const CUnlockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:93 */
	void Reset(CUnlockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:96 */
	CUnlockedResource<RenderMeshInputLayoutField_t> operator+(CUnlockedResource<RenderMeshInputLayoutField_t>* , int);
	/* ../public/resourcefile/resourcestream.h:102 */
	const RenderMeshInputLayoutField_t* operator const RenderMeshInputLayoutField_t*(const CUnlockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:103 */
	RenderMeshInputLayoutField_t* operator RenderMeshInputLayoutField_t*(CUnlockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:105 */
	RenderMeshInputLayoutField_t* operator->(CUnlockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:106 */
	const RenderMeshInputLayoutField_t* operator->(const CUnlockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:108 */
	uint Count(const CUnlockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:994 */
	RenderMeshInputLayoutField_t* GetPtr(CUnlockedResource<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:1000 */
	const RenderMeshInputLayoutField_t* GetPtr(const CUnlockedResource<RenderMeshInputLayoutField_t>* );
	void CUnlockedResource(class CUnlockedResource<RenderMeshInputLayoutField_t> *); /* linkage=_ZN17CUnlockedResourceI28RenderMeshInputLayoutField_tEC4Ev */
	void CUnlockedResource(class CUnlockedResource<RenderMeshInputLayoutField_t> *, class CResourceStream *, class RenderMeshInputLayoutField_t *, uint); /* linkage=_ZN17CUnlockedResourceI28RenderMeshInputLayoutField_tEC4EP15CResourceStreamPS0_j */
	bool IsValid(const class CUnlockedResource<RenderMeshInputLayoutField_t>  *); /* linkage=_ZNK17CUnlockedResourceI28RenderMeshInputLayoutField_tE7IsValidEv */
	void Reset(class CUnlockedResource<RenderMeshInputLayoutField_t> *); /* linkage=_ZN17CUnlockedResourceI28RenderMeshInputLayoutField_tE5ResetEv */
	class CUnlockedResource<RenderMeshInputLayoutField_t> operator+(class CUnlockedResource<RenderMeshInputLayoutField_t> *, int); /* linkage=_ZN17CUnlockedResourceI28RenderMeshInputLayoutField_tEplEi */
	const class RenderMeshInputLayoutField_t  * operator const RenderMeshInputLayoutField_t*(const class CUnlockedResource<RenderMeshInputLayoutField_t>  *); /* linkage=_ZNK17CUnlockedResourceI28RenderMeshInputLayoutField_tEcvPKS0_Ev */
	class RenderMeshInputLayoutField_t * operator RenderMeshInputLayoutField_t*(class CUnlockedResource<RenderMeshInputLayoutField_t> *); /* linkage=_ZN17CUnlockedResourceI28RenderMeshInputLayoutField_tEcvPS0_Ev */
	class RenderMeshInputLayoutField_t * operator->(class CUnlockedResource<RenderMeshInputLayoutField_t> *); /* linkage=_ZN17CUnlockedResourceI28RenderMeshInputLayoutField_tEptEv */
	const class RenderMeshInputLayoutField_t  * operator->(const class CUnlockedResource<RenderMeshInputLayoutField_t>  *); /* linkage=_ZNK17CUnlockedResourceI28RenderMeshInputLayoutField_tEptEv */
	uint Count(const class CUnlockedResource<RenderMeshInputLayoutField_t>  *); /* linkage=_ZNK17CUnlockedResourceI28RenderMeshInputLayoutField_tE5CountEv */
	class RenderMeshInputLayoutField_t * GetPtr(class CUnlockedResource<RenderMeshInputLayoutField_t> *); /* linkage=_ZN17CUnlockedResourceI28RenderMeshInputLayoutField_tE6GetPtrEv */
	const class RenderMeshInputLayoutField_t  * GetPtr(const class CUnlockedResource<RenderMeshInputLayoutField_t>  *); /* linkage=_ZNK17CUnlockedResourceI28RenderMeshInputLayoutField_tE6GetPtrEv */
};

// <0184F0E6> ../public/resourcefile/resourcestream.h:81
// member functions: 24
// member variables: 3
// class size: 16
class CUnlockedResource<unsigned char> {
private:
	CResourceStream * m_pStream; /* 0 8 */
	uint32 m_nOffset; /* 8 4 */
	uint32 m_nCount; /* 12 4 */
	/* ../public/resourcefile/resourcestream.h:90 */
	void CUnlockedResource(CUnlockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:984 */
	void CUnlockedResource(CUnlockedResource<unsigned char>* , CResourceStream* , unsigned char* , uint);
	/* ../public/resourcefile/resourcestream.h:92 */
	bool IsValid(const CUnlockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:93 */
	void Reset(CUnlockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:96 */
	CUnlockedResource<unsigned char> operator+(CUnlockedResource<unsigned char>* , int);
	/* ../public/resourcefile/resourcestream.h:102 */
	const unsigned char* operator unsigned char const*(const CUnlockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:103 */
	unsigned char* operator unsigned char*(CUnlockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:105 */
	unsigned char* operator->(CUnlockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:106 */
	const unsigned char* operator->(const CUnlockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:108 */
	uint Count(const CUnlockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:994 */
	unsigned char* GetPtr(CUnlockedResource<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:1000 */
	const unsigned char* GetPtr(const CUnlockedResource<unsigned char>* );
	void CUnlockedResource(class CUnlockedResource<unsigned char> *); /* linkage=_ZN17CUnlockedResourceIhEC4Ev */
	void CUnlockedResource(class CUnlockedResource<unsigned char> *, class CResourceStream *, unsigned char *, uint); /* linkage=_ZN17CUnlockedResourceIhEC4EP15CResourceStreamPhj */
	bool IsValid(const class CUnlockedResource<unsigned char>  *); /* linkage=_ZNK17CUnlockedResourceIhE7IsValidEv */
	void Reset(class CUnlockedResource<unsigned char> *); /* linkage=_ZN17CUnlockedResourceIhE5ResetEv */
	class CUnlockedResource<unsigned char> operator+(class CUnlockedResource<unsigned char> *, int); /* linkage=_ZN17CUnlockedResourceIhEplEi */
	const unsigned char  * operator unsigned char const*(const class CUnlockedResource<unsigned char>  *); /* linkage=_ZNK17CUnlockedResourceIhEcvPKhEv */
	unsigned char * operator unsigned char*(class CUnlockedResource<unsigned char> *); /* linkage=_ZN17CUnlockedResourceIhEcvPhEv */
	unsigned char * operator->(class CUnlockedResource<unsigned char> *); /* linkage=_ZN17CUnlockedResourceIhEptEv */
	const unsigned char  * operator->(const class CUnlockedResource<unsigned char>  *); /* linkage=_ZNK17CUnlockedResourceIhEptEv */
	uint Count(const class CUnlockedResource<unsigned char>  *); /* linkage=_ZNK17CUnlockedResourceIhE5CountEv */
	unsigned char * GetPtr(class CUnlockedResource<unsigned char> *); /* linkage=_ZN17CUnlockedResourceIhE6GetPtrEv */
	const unsigned char  * GetPtr(const class CUnlockedResource<unsigned char>  *); /* linkage=_ZNK17CUnlockedResourceIhE6GetPtrEv */
};

// <0185656B> ../public/resourcefile/resourcestream.h:103
inline void operator CUnlockedResource<VBIBBlockHeader_t>::VBIBBlockHeader_t*()
{
} /* size: 0 */

// <01856473> ../public/resourcefile/resourcestream.h:103
inline void operator CUnlockedResource<RenderMeshBufferData_t>::RenderMeshBufferData_t*()
{
} /* size: 0 */

// <01856330> ../public/resourcefile/resourcestream.h:103
inline void operator CUnlockedResource<RenderMeshInputLayoutField_t>::RenderMeshInputLayoutField_t*()
{
} /* size: 0 */

// <0185623A> ../public/resourcefile/resourcestream.h:103
inline void operator unsigned CUnlockedResource<unsigned char>::char*()
{
} /* size: 0 */

// <005DB0AB> ../public/resourcefile/resourcestream.h:118
// member functions: 24
// member variable: 1
// class size: 4
class CResourcePointerBase {
protected:
	int32 m_nOffset; /* 0 4 */
	/* ../public/resourcefile/resourcestream.h:123 */
	void CResourcePointerBase(CResourcePointerBase* );
	/* ../public/resourcefile/resourcestream.h:125 */
	bool operator==(const CResourcePointerBase* , int);
	/* ../public/resourcefile/resourcestream.h:131 */
	bool IsNull(const CResourcePointerBase* );
	/* ../public/resourcefile/resourcestream.h:136 */
	int32 NotNull(const CResourcePointerBase* );
	/* ../public/resourcefile/resourcestream.h:141 */
	int32 GetOffset(const CResourcePointerBase* );
	/* ../public/resourcefile/resourcestream.h:146 */
	const byte* GetUncheckedRawPtr(const CResourcePointerBase* );
	/* ../public/resourcefile/resourcestream.h:152 */
	byte* GetUncheckedRawPtr(CResourcePointerBase* );
	/* ../public/resourcefile/resourcestream.h:158 */
	const byte* GetRawPtr(const CResourcePointerBase* );
	/* ../public/resourcefile/resourcestream.h:163 */
	byte* GetRawPtr(CResourcePointerBase* );
	/* ../public/resourcefile/resourcestream.h:168 */
	void SetRawPtr(CResourcePointerBase* , const void* );
	/* ../public/resourcefile/resourcestream.h:183 */
	void Rebase(CResourcePointerBase* , int);
	/* ../public/resourcefile/resourcestream.h:190 */
	void SetNull(CResourcePointerBase* );
	void CResourcePointerBase(class CResourcePointerBase *); /* linkage=_ZN20CResourcePointerBaseC4Ev */
	bool operator==(const class CResourcePointerBase  *, int); /* linkage=_ZNK20CResourcePointerBaseeqEi */
	bool IsNull(const class CResourcePointerBase  *); /* linkage=_ZNK20CResourcePointerBase6IsNullEv */
	int32 NotNull(const class CResourcePointerBase  *); /* linkage=_ZNK20CResourcePointerBase7NotNullEv */
	int32 GetOffset(const class CResourcePointerBase  *); /* linkage=_ZNK20CResourcePointerBase9GetOffsetEv */
	const byte  * GetUncheckedRawPtr(const class CResourcePointerBase  *); /* linkage=_ZNK20CResourcePointerBase18GetUncheckedRawPtrEv */
	byte * GetUncheckedRawPtr(class CResourcePointerBase *); /* linkage=_ZN20CResourcePointerBase18GetUncheckedRawPtrEv */
	const byte  * GetRawPtr(const class CResourcePointerBase  *); /* linkage=_ZNK20CResourcePointerBase9GetRawPtrEv */
	byte * GetRawPtr(class CResourcePointerBase *); /* linkage=_ZN20CResourcePointerBase9GetRawPtrEv */
	void SetRawPtr(class CResourcePointerBase *, const void  *); /* linkage=_ZN20CResourcePointerBase9SetRawPtrEPKv */
	void Rebase(class CResourcePointerBase *, int); /* linkage=_ZN20CResourcePointerBase6RebaseEi */
	void SetNull(class CResourcePointerBase *); /* linkage=_ZN20CResourcePointerBase7SetNullEv */
};

// <00E03AB4> ../public/resourcefile/resourcestream.h:123
void CResourcePointerBase::CResourcePointerBase()
{
} /* size: 0 */

// <00E03A9B> ../public/resourcefile/resourcestream.h:123
inline void CResourcePointerBase::CResourcePointerBase()
{
} /* size: 0 */

// <026A3F40> ../public/resourcefile/resourcestream.h:131
inline void CResourcePointerBase::IsNull()
{
} /* size: 0 */

// <066E8892> ../public/resourcefile/resourcestream.h:158
inline void CResourcePointerBase::GetRawPtr()
{
} /* size: 0 */

// <026A3F1B> ../public/resourcefile/resourcestream.h:183
inline void CResourcePointerBase::Rebase(int nOffset)
{
} /* size: 0 */

// <00E0394D> ../public/resourcefile/resourcestream.h:197
void CResourcePointer<char>::CResourcePointer()
{
} /* size: 0 */

// <00E03931> ../public/resourcefile/resourcestream.h:197
inline void CResourcePointer<char>::CResourcePointer()
{
} /* size: 0 */

// <005DB5BC> ../public/resourcefile/resourcestream.h:197
// member functions: 25
// member variable: 1
// class size: 4
class CResourcePointer<char> : public CResourcePointerBase {
public:
	/* class CResourcePointerBase <ancestor>; */ /* 0 4 */
	/* ../public/resourcefile/resourcestream.h:200 */
	const char* GetUncheckedPtr(const CResourcePointer<char>* );
	/* ../public/resourcefile/resourcestream.h:208 */
	const char* GetPtr(const CResourcePointer<char>* );
	/* ../public/resourcefile/resourcestream.h:214 */
	const char* operator char const*(const CResourcePointer<char>* );
	/* ../public/resourcefile/resourcestream.h:219 */
	const char* operator->(const CResourcePointer<char>* );
	/* ../public/resourcefile/resourcestream.h:224 */
	void operator=(CResourcePointer<char>* , const char* );
	/* ../public/resourcefile/resourcestream.h:229 */
	void SetPtr(CResourcePointer<char>* , const char* );
	/* ../public/resourcefile/resourcestream.h:238 */
	char* GetUncheckedPtr(CResourcePointer<char>* );
	/* ../public/resourcefile/resourcestream.h:246 */
	char* GetPtr(CResourcePointer<char>* );
	/* ../public/resourcefile/resourcestream.h:252 */
	char* operator char*(CResourcePointer<char>* );
	/* ../public/resourcefile/resourcestream.h:257 */
	char* operator->(CResourcePointer<char>* );
	/* ../public/resourcefile/resourcestream.h:263 */
	void SwapBytes(CResourcePointer<char>* );
	/* ../public/resourcefile/resourcestream.h:267 */
	void SetNull(CResourcePointer<char>* );
	const char  * GetUncheckedPtr(const class CResourcePointer<char>  *); /* linkage=_ZNK16CResourcePointerIcE15GetUncheckedPtrEv */
	const char  * GetPtr(const class CResourcePointer<char>  *); /* linkage=_ZNK16CResourcePointerIcE6GetPtrEv */
	const char  * operator char const*(const class CResourcePointer<char>  *); /* linkage=_ZNK16CResourcePointerIcEcvPKcEv */
	const char  * operator->(const class CResourcePointer<char>  *); /* linkage=_ZNK16CResourcePointerIcEptEv */
	void operator=(class CResourcePointer<char> *, const char  *); /* linkage=_ZN16CResourcePointerIcEaSEPKc */
	void SetPtr(class CResourcePointer<char> *, const char  *); /* linkage=_ZN16CResourcePointerIcE6SetPtrEPKc */
	char * GetUncheckedPtr(class CResourcePointer<char> *); /* linkage=_ZN16CResourcePointerIcE15GetUncheckedPtrEv */
	char * GetPtr(class CResourcePointer<char> *); /* linkage=_ZN16CResourcePointerIcE6GetPtrEv */
	char * operator char*(class CResourcePointer<char> *); /* linkage=_ZN16CResourcePointerIcEcvPcEv */
	char * operator->(class CResourcePointer<char> *); /* linkage=_ZN16CResourcePointerIcEptEv */
	void SwapBytes(class CResourcePointer<char> *); /* linkage=_ZN16CResourcePointerIcE9SwapBytesEv */
	void SetNull(class CResourcePointer<char> *); /* linkage=_ZN16CResourcePointerIcE7SetNullEv */
	void CResourcePointer(class CResourcePointer<char> *); /* linkage=_ZN16CResourcePointerIcEC4Ev */
};

// <0065A5AD> ../public/resourcefile/resourcestream.h:197
// member functions: 24
// member variable: 1
// class size: 4
class CResourcePointer<CSentenceOnDisk_t> : public CResourcePointerBase {
public:
	/* class CResourcePointerBase <ancestor>; */ /* 0 4 */
	/* ../public/resourcefile/resourcestream.h:200 */
	const CSentenceOnDisk_t* GetUncheckedPtr(const CResourcePointer<CSentenceOnDisk_t>* );
	/* ../public/resourcefile/resourcestream.h:208 */
	const CSentenceOnDisk_t* GetPtr(const CResourcePointer<CSentenceOnDisk_t>* );
	/* ../public/resourcefile/resourcestream.h:214 */
	const CSentenceOnDisk_t* operator const CSentenceOnDisk_t*(const CResourcePointer<CSentenceOnDisk_t>* );
	/* ../public/resourcefile/resourcestream.h:219 */
	const CSentenceOnDisk_t* operator->(const CResourcePointer<CSentenceOnDisk_t>* );
	/* ../public/resourcefile/resourcestream.h:224 */
	void operator=(CResourcePointer<CSentenceOnDisk_t>* , const CSentenceOnDisk_t* );
	/* ../public/resourcefile/resourcestream.h:229 */
	void SetPtr(CResourcePointer<CSentenceOnDisk_t>* , const CSentenceOnDisk_t* );
	/* ../public/resourcefile/resourcestream.h:238 */
	CSentenceOnDisk_t* GetUncheckedPtr(CResourcePointer<CSentenceOnDisk_t>* );
	/* ../public/resourcefile/resourcestream.h:246 */
	CSentenceOnDisk_t* GetPtr(CResourcePointer<CSentenceOnDisk_t>* );
	/* ../public/resourcefile/resourcestream.h:252 */
	CSentenceOnDisk_t* operator CSentenceOnDisk_t*(CResourcePointer<CSentenceOnDisk_t>* );
	/* ../public/resourcefile/resourcestream.h:257 */
	CSentenceOnDisk_t* operator->(CResourcePointer<CSentenceOnDisk_t>* );
	/* ../public/resourcefile/resourcestream.h:263 */
	void SwapBytes(CResourcePointer<CSentenceOnDisk_t>* );
	/* ../public/resourcefile/resourcestream.h:267 */
	void SetNull(CResourcePointer<CSentenceOnDisk_t>* );
	const class CSentenceOnDisk_t  * GetUncheckedPtr(const class CResourcePointer<CSentenceOnDisk_t>  *); /* linkage=_ZNK16CResourcePointerI17CSentenceOnDisk_tE15GetUncheckedPtrEv */
	const class CSentenceOnDisk_t  * GetPtr(const class CResourcePointer<CSentenceOnDisk_t>  *); /* linkage=_ZNK16CResourcePointerI17CSentenceOnDisk_tE6GetPtrEv */
	const class CSentenceOnDisk_t  * operator const CSentenceOnDisk_t*(const class CResourcePointer<CSentenceOnDisk_t>  *); /* linkage=_ZNK16CResourcePointerI17CSentenceOnDisk_tEcvPKS0_Ev */
	const class CSentenceOnDisk_t  * operator->(const class CResourcePointer<CSentenceOnDisk_t>  *); /* linkage=_ZNK16CResourcePointerI17CSentenceOnDisk_tEptEv */
	void operator=(class CResourcePointer<CSentenceOnDisk_t> *, const class CSentenceOnDisk_t  *); /* linkage=_ZN16CResourcePointerI17CSentenceOnDisk_tEaSEPKS0_ */
	void SetPtr(class CResourcePointer<CSentenceOnDisk_t> *, const class CSentenceOnDisk_t  *); /* linkage=_ZN16CResourcePointerI17CSentenceOnDisk_tE6SetPtrEPKS0_ */
	class CSentenceOnDisk_t * GetUncheckedPtr(class CResourcePointer<CSentenceOnDisk_t> *); /* linkage=_ZN16CResourcePointerI17CSentenceOnDisk_tE15GetUncheckedPtrEv */
	class CSentenceOnDisk_t * GetPtr(class CResourcePointer<CSentenceOnDisk_t> *); /* linkage=_ZN16CResourcePointerI17CSentenceOnDisk_tE6GetPtrEv */
	class CSentenceOnDisk_t * operator CSentenceOnDisk_t*(class CResourcePointer<CSentenceOnDisk_t> *); /* linkage=_ZN16CResourcePointerI17CSentenceOnDisk_tEcvPS0_Ev */
	class CSentenceOnDisk_t * operator->(class CResourcePointer<CSentenceOnDisk_t> *); /* linkage=_ZN16CResourcePointerI17CSentenceOnDisk_tEptEv */
	void SwapBytes(class CResourcePointer<CSentenceOnDisk_t> *); /* linkage=_ZN16CResourcePointerI17CSentenceOnDisk_tE9SwapBytesEv */
	void SetNull(class CResourcePointer<CSentenceOnDisk_t> *); /* linkage=_ZN16CResourcePointerI17CSentenceOnDisk_tE7SetNullEv */
};

// <0065A96A> ../public/resourcefile/resourcestream.h:197
// member functions: 24
// member variable: 1
// class size: 4
class CResourcePointer<CMorphData_t> : public CResourcePointerBase {
public:
	/* class CResourcePointerBase <ancestor>; */ /* 0 4 */
	/* ../public/resourcefile/resourcestream.h:200 */
	const CMorphData_t* GetUncheckedPtr(const CResourcePointer<CMorphData_t>* );
	/* ../public/resourcefile/resourcestream.h:208 */
	const CMorphData_t* GetPtr(const CResourcePointer<CMorphData_t>* );
	/* ../public/resourcefile/resourcestream.h:214 */
	const CMorphData_t* operator const CMorphData_t*(const CResourcePointer<CMorphData_t>* );
	/* ../public/resourcefile/resourcestream.h:219 */
	const CMorphData_t* operator->(const CResourcePointer<CMorphData_t>* );
	/* ../public/resourcefile/resourcestream.h:224 */
	void operator=(CResourcePointer<CMorphData_t>* , const CMorphData_t* );
	/* ../public/resourcefile/resourcestream.h:229 */
	void SetPtr(CResourcePointer<CMorphData_t>* , const CMorphData_t* );
	/* ../public/resourcefile/resourcestream.h:238 */
	CMorphData_t* GetUncheckedPtr(CResourcePointer<CMorphData_t>* );
	/* ../public/resourcefile/resourcestream.h:246 */
	CMorphData_t* GetPtr(CResourcePointer<CMorphData_t>* );
	/* ../public/resourcefile/resourcestream.h:252 */
	CMorphData_t* operator CMorphData_t*(CResourcePointer<CMorphData_t>* );
	/* ../public/resourcefile/resourcestream.h:257 */
	CMorphData_t* operator->(CResourcePointer<CMorphData_t>* );
	/* ../public/resourcefile/resourcestream.h:263 */
	void SwapBytes(CResourcePointer<CMorphData_t>* );
	/* ../public/resourcefile/resourcestream.h:267 */
	void SetNull(CResourcePointer<CMorphData_t>* );
	const class CMorphData_t  * GetUncheckedPtr(const class CResourcePointer<CMorphData_t>  *); /* linkage=_ZNK16CResourcePointerI12CMorphData_tE15GetUncheckedPtrEv */
	const class CMorphData_t  * GetPtr(const class CResourcePointer<CMorphData_t>  *); /* linkage=_ZNK16CResourcePointerI12CMorphData_tE6GetPtrEv */
	const class CMorphData_t  * operator const CMorphData_t*(const class CResourcePointer<CMorphData_t>  *); /* linkage=_ZNK16CResourcePointerI12CMorphData_tEcvPKS0_Ev */
	const class CMorphData_t  * operator->(const class CResourcePointer<CMorphData_t>  *); /* linkage=_ZNK16CResourcePointerI12CMorphData_tEptEv */
	void operator=(class CResourcePointer<CMorphData_t> *, const class CMorphData_t  *); /* linkage=_ZN16CResourcePointerI12CMorphData_tEaSEPKS0_ */
	void SetPtr(class CResourcePointer<CMorphData_t> *, const class CMorphData_t  *); /* linkage=_ZN16CResourcePointerI12CMorphData_tE6SetPtrEPKS0_ */
	class CMorphData_t * GetUncheckedPtr(class CResourcePointer<CMorphData_t> *); /* linkage=_ZN16CResourcePointerI12CMorphData_tE15GetUncheckedPtrEv */
	class CMorphData_t * GetPtr(class CResourcePointer<CMorphData_t> *); /* linkage=_ZN16CResourcePointerI12CMorphData_tE6GetPtrEv */
	class CMorphData_t * operator CMorphData_t*(class CResourcePointer<CMorphData_t> *); /* linkage=_ZN16CResourcePointerI12CMorphData_tEcvPS0_Ev */
	class CMorphData_t * operator->(class CResourcePointer<CMorphData_t> *); /* linkage=_ZN16CResourcePointerI12CMorphData_tEptEv */
	void SwapBytes(class CResourcePointer<CMorphData_t> *); /* linkage=_ZN16CResourcePointerI12CMorphData_tE9SwapBytesEv */
	void SetNull(class CResourcePointer<CMorphData_t> *); /* linkage=_ZN16CResourcePointerI12CMorphData_tE7SetNullEv */
};

// <0091C90D> ../public/resourcefile/resourcestream.h:197
// member functions: 24
// member variable: 1
// class size: 4
class CResourcePointer<void> : public CResourcePointerBase {
public:
	/* class CResourcePointerBase <ancestor>; */ /* 0 4 */
	/* ../public/resourcefile/resourcestream.h:200 */
	const void* GetUncheckedPtr(const CResourcePointer<void>* );
	/* ../public/resourcefile/resourcestream.h:208 */
	const void* GetPtr(const CResourcePointer<void>* );
	/* ../public/resourcefile/resourcestream.h:214 */
	const void* operator void const*(const CResourcePointer<void>* );
	/* ../public/resourcefile/resourcestream.h:219 */
	const void* operator->(const CResourcePointer<void>* );
	/* ../public/resourcefile/resourcestream.h:224 */
	void operator=(CResourcePointer<void>* , const void* );
	/* ../public/resourcefile/resourcestream.h:229 */
	void SetPtr(CResourcePointer<void>* , const void* );
	/* ../public/resourcefile/resourcestream.h:238 */
	void* GetUncheckedPtr(CResourcePointer<void>* );
	/* ../public/resourcefile/resourcestream.h:246 */
	void* GetPtr(CResourcePointer<void>* );
	/* ../public/resourcefile/resourcestream.h:252 */
	void* operator void*(CResourcePointer<void>* );
	/* ../public/resourcefile/resourcestream.h:257 */
	void* operator->(CResourcePointer<void>* );
	/* ../public/resourcefile/resourcestream.h:263 */
	void SwapBytes(CResourcePointer<void>* );
	/* ../public/resourcefile/resourcestream.h:267 */
	void SetNull(CResourcePointer<void>* );
	const void  * GetUncheckedPtr(const class CResourcePointer<void>  *); /* linkage=_ZNK16CResourcePointerIvE15GetUncheckedPtrEv */
	const void  * GetPtr(const class CResourcePointer<void>  *); /* linkage=_ZNK16CResourcePointerIvE6GetPtrEv */
	const void  * operator void const*(const class CResourcePointer<void>  *); /* linkage=_ZNK16CResourcePointerIvEcvPKvEv */
	const void  * operator->(const class CResourcePointer<void>  *); /* linkage=_ZNK16CResourcePointerIvEptEv */
	void operator=(class CResourcePointer<void> *, const void  *); /* linkage=_ZN16CResourcePointerIvEaSEPKv */
	void SetPtr(class CResourcePointer<void> *, const void  *); /* linkage=_ZN16CResourcePointerIvE6SetPtrEPKv */
	void * GetUncheckedPtr(class CResourcePointer<void> *); /* linkage=_ZN16CResourcePointerIvE15GetUncheckedPtrEv */
	void * GetPtr(class CResourcePointer<void> *); /* linkage=_ZN16CResourcePointerIvE6GetPtrEv */
	void * operator void*(class CResourcePointer<void> *); /* linkage=_ZN16CResourcePointerIvEcvPvEv */
	void * operator->(class CResourcePointer<void> *); /* linkage=_ZN16CResourcePointerIvEptEv */
	void SwapBytes(class CResourcePointer<void> *); /* linkage=_ZN16CResourcePointerIvE9SwapBytesEv */
	void SetNull(class CResourcePointer<void> *); /* linkage=_ZN16CResourcePointerIvE7SetNullEv */
};

// <001E71B0> ../public/resourcefile/resourcestream.h:197
// member functions: 12
// member variable: 1
// class size: 4
class CResourcePointer<CResourceString> : public CResourcePointerBase {
public:
	/* class CResourcePointerBase <ancestor>; */ /* 0 4 */
	/* ../public/resourcefile/resourcestream.h:200 */
	const CResourceString* GetUncheckedPtr(const CResourcePointer<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:208 */
	const CResourceString* GetPtr(const CResourcePointer<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:214 */
	const CResourceString* operator const CResourceString*(const CResourcePointer<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:219 */
	const CResourceString* operator->(const CResourcePointer<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:224 */
	void operator=(CResourcePointer<CResourceString>* , const CResourceString* );
	/* ../public/resourcefile/resourcestream.h:229 */
	void SetPtr(CResourcePointer<CResourceString>* , const CResourceString* );
	/* ../public/resourcefile/resourcestream.h:238 */
	CResourceString* GetUncheckedPtr(CResourcePointer<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:246 */
	CResourceString* GetPtr(CResourcePointer<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:252 */
	CResourceString* operator CResourceString*(CResourcePointer<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:257 */
	CResourceString* operator->(CResourcePointer<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:263 */
	void SwapBytes(CResourcePointer<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:267 */
	void SetNull(CResourcePointer<CResourceString>* );
};

// <066E760E> ../public/resourcefile/resourcestream.h:208
// variable: 1
inline const void* CResourcePointer<void>::GetPtr()
{
	byte* ptr; // 210
} /* size: 0, variables: 1 */

// <066E767A> ../public/resourcefile/resourcestream.h:214
inline const void* operator void CResourcePointer<void>::const*()
{
} /* size: 0 */

// <0269E24C> ../public/resourcefile/resourcestream.h:246
// variable: 1
inline void CResourcePointer<CSentenceOnDisk_t>::GetPtr()
{
	byte* ptr; // 248
} /* size: 0, variables: 1 */

// <0269E226> ../public/resourcefile/resourcestream.h:246
// variable: 1
inline void CResourcePointer<CMorphData_t>::GetPtr()
{
	byte* ptr; // 248
} /* size: 0, variables: 1 */

// <0269EC81> ../public/resourcefile/resourcestream.h:252
inline void operator CResourcePointer<CSentenceOnDisk_t>::CSentenceOnDisk_t*()
{
} /* size: 0 */

// <0269EC68> ../public/resourcefile/resourcestream.h:252
inline void operator CResourcePointer<CMorphData_t>::CMorphData_t*()
{
} /* size: 0 */

// <005DB262> ../public/resourcefile/resourcestream.h:276
// member functions: 26
// member variables: 2
// class size: 8
class CResourceArrayBase {
	/* ../public/resourcefile/resourcestream.h:279 */
	void CResourceArrayBase(CResourceArrayBase* );
	/* ../public/resourcefile/resourcestream.h:285 */
	bool operator==(const CResourceArrayBase* , int);
	/* ../public/resourcefile/resourcestream.h:291 */
	bool IsNull(const CResourceArrayBase* );
	/* ../public/resourcefile/resourcestream.h:296 */
	int32 NotNull(const CResourceArrayBase* );
	/* ../public/resourcefile/resourcestream.h:301 */
	const byte* GetRawPtr(const CResourceArrayBase* );
	/* ../public/resourcefile/resourcestream.h:307 */
	byte* GetRawPtr(CResourceArrayBase* );
	/* ../public/resourcefile/resourcestream.h:313 */
	int Count(const CResourceArrayBase* );
	/* ../public/resourcefile/resourcestream.h:318 */
	void SetCount(CResourceArrayBase* , uint);
	/* ../public/resourcefile/resourcestream.h:325 */
	void WriteDirect(CResourceArrayBase* , int, void* );
	/* ../public/resourcefile/resourcestream.h:340 */
	void SwapMemberBytes(CResourceArrayBase* );
	/* ../public/resourcefile/resourcestream.h:347 */
	void Rebase(CResourceArrayBase* , int);
	/* ../public/resourcefile/resourcestream.h:354 */
	void Reset(CResourceArrayBase* );
private:
	/* ../public/resourcefile/resourcestream.h:360 */
	void CResourceArrayBase(CResourceArrayBase* , const CResourceArrayBase& );
protected:
	int32 m_nOffset; /* 0 4 */
	uint32 m_nCount; /* 4 4 */
	void CResourceArrayBase(class CResourceArrayBase *); /* linkage=_ZN18CResourceArrayBaseC4Ev */
	bool operator==(const class CResourceArrayBase  *, int); /* linkage=_ZNK18CResourceArrayBaseeqEi */
	bool IsNull(const class CResourceArrayBase  *); /* linkage=_ZNK18CResourceArrayBase6IsNullEv */
	int32 NotNull(const class CResourceArrayBase  *); /* linkage=_ZNK18CResourceArrayBase7NotNullEv */
	const byte  * GetRawPtr(const class CResourceArrayBase  *); /* linkage=_ZNK18CResourceArrayBase9GetRawPtrEv */
	byte * GetRawPtr(class CResourceArrayBase *); /* linkage=_ZN18CResourceArrayBase9GetRawPtrEv */
	int Count(const class CResourceArrayBase  *); /* linkage=_ZNK18CResourceArrayBase5CountEv */
	void SetCount(class CResourceArrayBase *, uint); /* linkage=_ZN18CResourceArrayBase8SetCountEj */
	void WriteDirect(class CResourceArrayBase *, int, void *); /* linkage=_ZN18CResourceArrayBase11WriteDirectEiPv */
	void SwapMemberBytes(class CResourceArrayBase *); /* linkage=_ZN18CResourceArrayBase15SwapMemberBytesEv */
	void Rebase(class CResourceArrayBase *, int); /* linkage=_ZN18CResourceArrayBase6RebaseEi */
	void Reset(class CResourceArrayBase *); /* linkage=_ZN18CResourceArrayBase5ResetEv */
	void CResourceArrayBase(class CResourceArrayBase *, const class CResourceArrayBase  &); /* linkage=_ZN18CResourceArrayBaseC4ERKS_ */
};

// <05BE1DF4> ../public/resourcefile/resourcestream.h:279
void CResourceArrayBase::CResourceArrayBase()
{
} /* size: 0 */

// <05BE1DDB> ../public/resourcefile/resourcestream.h:279
inline void CResourceArrayBase::CResourceArrayBase()
{
} /* size: 0 */

// <066E8879> ../public/resourcefile/resourcestream.h:301
inline void CResourceArrayBase::GetRawPtr()
{
} /* size: 0 */

// <066E8860> ../public/resourcefile/resourcestream.h:313
inline void CResourceArrayBase::Count()
{
} /* size: 0 */

// <026A3EF5> ../public/resourcefile/resourcestream.h:347
inline void CResourceArrayBase::Rebase(int nOffset)
{
} /* size: 0 */

// <005DBD34> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<CResourceString> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<CResourceString>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<CResourceString>* , const CResourceArray<CResourceString>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const CResourceString& operator[](const CResourceArray<CResourceString>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	CResourceString& operator[](CResourceArray<CResourceString>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const CResourceString& Element(const CResourceArray<CResourceString>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	CResourceString& Element(CResourceArray<CResourceString>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<CResourceString>& operator=(CResourceArray<CResourceString>* , const CLockedResource<CResourceString>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<CResourceString>& operator=(CResourceArray<CResourceString>* , const CResourceArray<CResourceString>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const CResourceString* GetPtr(const CResourceArray<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	CResourceString* GetPtr(CResourceArray<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const CResourceString* Base(const CResourceArray<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	CResourceString* Base(CResourceArray<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<CResourceString> operator CLockedResource<CResourceString>(CResourceArray<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const CResourceString> operator CLockedResource<const CResourceString>(const CResourceArray<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	CResourceString* begin(CResourceArray<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const CResourceString* begin(const CResourceArray<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	CResourceString* end(CResourceArray<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const CResourceString* end(const CResourceArray<CResourceString>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<CResourceString>* );
};

// <00610ACC> ../public/resourcefile/resourcestream.h:367
// member functions: 42
// member variable: 1
// class size: 8
class CResourceArray<unsigned char> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<unsigned char>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<unsigned char>* , const CResourceArray<unsigned char>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const unsigned char& operator[](const CResourceArray<unsigned char>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	unsigned char& operator[](CResourceArray<unsigned char>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const unsigned char& Element(const CResourceArray<unsigned char>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	unsigned char& Element(CResourceArray<unsigned char>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<unsigned char>& operator=(CResourceArray<unsigned char>* , const CLockedResource<unsigned char>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<unsigned char>& operator=(CResourceArray<unsigned char>* , const CResourceArray<unsigned char>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const unsigned char* GetPtr(const CResourceArray<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	unsigned char* GetPtr(CResourceArray<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const unsigned char* Base(const CResourceArray<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	unsigned char* Base(CResourceArray<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<unsigned char> operator CLockedResource<unsigned char>(CResourceArray<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<unsigned char const> operator CLockedResource<unsigned char const>(const CResourceArray<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	unsigned char* begin(CResourceArray<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const unsigned char* begin(const CResourceArray<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	unsigned char* end(CResourceArray<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const unsigned char* end(const CResourceArray<unsigned char>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<unsigned char>* );
	void CResourceArray(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhEC4Ev */
	void CResourceArray(class CResourceArray<unsigned char> *, const class CResourceArray<unsigned char>  &); /* linkage=_ZN14CResourceArrayIhEC4ERKS0_ */
	const unsigned char  & operator[](const class CResourceArray<unsigned char>  *, int); /* linkage=_ZNK14CResourceArrayIhEixEi */
	unsigned char & operator[](class CResourceArray<unsigned char> *, int); /* linkage=_ZN14CResourceArrayIhEixEi */
	const unsigned char  & Element(const class CResourceArray<unsigned char>  *, int); /* linkage=_ZNK14CResourceArrayIhE7ElementEi */
	unsigned char & Element(class CResourceArray<unsigned char> *, int); /* linkage=_ZN14CResourceArrayIhE7ElementEi */
	class CResourceArray<unsigned char> & operator=(class CResourceArray<unsigned char> *, const class CLockedResource<unsigned char>  &); /* linkage=_ZN14CResourceArrayIhEaSERK15CLockedResourceIhE */
	class CResourceArray<unsigned char> & operator=(class CResourceArray<unsigned char> *, const class CResourceArray<unsigned char>  &); /* linkage=_ZN14CResourceArrayIhEaSERKS0_ */
	const unsigned char  * GetPtr(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhE6GetPtrEv */
	unsigned char * GetPtr(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhE6GetPtrEv */
	const unsigned char  * Base(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhE4BaseEv */
	unsigned char * Base(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhE4BaseEv */
	bool IsEmpty(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhE7IsEmptyEv */
	class CLockedResource<unsigned char> operator CLockedResource<unsigned char>(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhEcv15CLockedResourceIhEEv */
	class CLockedResource<unsigned char const> operator CLockedResource<unsigned char const>(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhEcv15CLockedResourceIKhEEv */
	void CoalescePointerArrayInPlace(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhE27CoalescePointerArrayInPlaceEv */
	unsigned char * begin(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhE5beginEv */
	const unsigned char  * begin(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhE5beginEv */
	unsigned char * end(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhE3endEv */
	const unsigned char  * end(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhE3endEv */
	uint GetDataSize(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhE11GetDataSizeEv */
};

// <00659316> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<float> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<float>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<float>* , const CResourceArray<float>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const float& operator[](const CResourceArray<float>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	float& operator[](CResourceArray<float>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const float& Element(const CResourceArray<float>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	float& Element(CResourceArray<float>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<float>& operator=(CResourceArray<float>* , const CLockedResource<float>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<float>& operator=(CResourceArray<float>* , const CResourceArray<float>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const float* GetPtr(const CResourceArray<float>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	float* GetPtr(CResourceArray<float>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const float* Base(const CResourceArray<float>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	float* Base(CResourceArray<float>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<float>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<float> operator CLockedResource<float>(CResourceArray<float>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<float const> operator CLockedResource<float const>(const CResourceArray<float>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<float>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	float* begin(CResourceArray<float>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const float* begin(const CResourceArray<float>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	float* end(CResourceArray<float>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const float* end(const CResourceArray<float>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<float>* );
};

// <00659640> ../public/resourcefile/resourcestream.h:367
// member functions: 42
// member variable: 1
// class size: 8
class CResourceArray<unsigned int> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<unsigned int>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<unsigned int>* , const CResourceArray<unsigned int>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const unsigned int& operator[](const CResourceArray<unsigned int>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	unsigned int& operator[](CResourceArray<unsigned int>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const unsigned int& Element(const CResourceArray<unsigned int>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	unsigned int& Element(CResourceArray<unsigned int>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<unsigned int>& operator=(CResourceArray<unsigned int>* , const CLockedResource<unsigned int>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<unsigned int>& operator=(CResourceArray<unsigned int>* , const CResourceArray<unsigned int>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const unsigned int* GetPtr(const CResourceArray<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	unsigned int* GetPtr(CResourceArray<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const unsigned int* Base(const CResourceArray<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	unsigned int* Base(CResourceArray<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<unsigned int> operator CLockedResource<unsigned int>(CResourceArray<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<unsigned int const> operator CLockedResource<unsigned int const>(const CResourceArray<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	unsigned int* begin(CResourceArray<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const unsigned int* begin(const CResourceArray<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	unsigned int* end(CResourceArray<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const unsigned int* end(const CResourceArray<unsigned int>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<unsigned int>* );
	void CResourceArray(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhEC4Ev */
	void CResourceArray(class CResourceArray<unsigned char> *, const class CResourceArray<unsigned char>  &); /* linkage=_ZN14CResourceArrayIhEC4ERKS0_ */
	const unsigned char  & operator[](const class CResourceArray<unsigned char>  *, int); /* linkage=_ZNK14CResourceArrayIhEixEi */
	unsigned char & operator[](class CResourceArray<unsigned char> *, int); /* linkage=_ZN14CResourceArrayIhEixEi */
	const unsigned char  & Element(const class CResourceArray<unsigned char>  *, int); /* linkage=_ZNK14CResourceArrayIhE7ElementEi */
	unsigned char & Element(class CResourceArray<unsigned char> *, int); /* linkage=_ZN14CResourceArrayIhE7ElementEi */
	class CResourceArray<unsigned char> & operator=(class CResourceArray<unsigned char> *, const class CLockedResource<unsigned char>  &); /* linkage=_ZN14CResourceArrayIhEaSERK15CLockedResourceIhE */
	class CResourceArray<unsigned char> & operator=(class CResourceArray<unsigned char> *, const class CResourceArray<unsigned char>  &); /* linkage=_ZN14CResourceArrayIhEaSERKS0_ */
	const unsigned char  * GetPtr(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhE6GetPtrEv */
	unsigned char * GetPtr(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhE6GetPtrEv */
	const unsigned char  * Base(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhE4BaseEv */
	unsigned char * Base(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhE4BaseEv */
	bool IsEmpty(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhE7IsEmptyEv */
	class CLockedResource<unsigned char> operator CLockedResource<unsigned char>(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhEcv15CLockedResourceIhEEv */
	class CLockedResource<unsigned char const> operator CLockedResource<unsigned char const>(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhEcv15CLockedResourceIKhEEv */
	void CoalescePointerArrayInPlace(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhE27CoalescePointerArrayInPlaceEv */
	unsigned char * begin(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhE5beginEv */
	const unsigned char  * begin(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhE5beginEv */
	unsigned char * end(class CResourceArray<unsigned char> *); /* linkage=_ZN14CResourceArrayIhE3endEv */
	const unsigned char  * end(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhE3endEv */
	uint GetDataSize(const class CResourceArray<unsigned char>  *); /* linkage=_ZNK14CResourceArrayIhE11GetDataSizeEv */
};

// <0065996A> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<CResourceArray<float> > : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<CResourceArray<float> >* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<CResourceArray<float> >* , const CResourceArray<CResourceArray<float> >& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const CResourceArray<float>& operator[](const CResourceArray<CResourceArray<float> >* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	CResourceArray<float>& operator[](CResourceArray<CResourceArray<float> >* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const CResourceArray<float>& Element(const CResourceArray<CResourceArray<float> >* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	CResourceArray<float>& Element(CResourceArray<CResourceArray<float> >* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<CResourceArray<float> >& operator=(CResourceArray<CResourceArray<float> >* , const CLockedResource<CResourceArray<float> >& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<CResourceArray<float> >& operator=(CResourceArray<CResourceArray<float> >* , const CResourceArray<CResourceArray<float> >& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const CResourceArray<float>* GetPtr(const CResourceArray<CResourceArray<float> >* );
	/* ../public/resourcefile/resourcestream.h:419 */
	CResourceArray<float>* GetPtr(CResourceArray<CResourceArray<float> >* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const CResourceArray<float>* Base(const CResourceArray<CResourceArray<float> >* );
	/* ../public/resourcefile/resourcestream.h:429 */
	CResourceArray<float>* Base(CResourceArray<CResourceArray<float> >* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<CResourceArray<float> >* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<CResourceArray<float> > operator CLockedResource<CResourceArray<float> >(CResourceArray<CResourceArray<float> >* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const CResourceArray<float> > operator CLockedResource<const CResourceArray<float> >(const CResourceArray<CResourceArray<float> >* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<CResourceArray<float> >* );
	/* ../public/resourcefile/resourcestream.h:467 */
	CResourceArray<float>* begin(CResourceArray<CResourceArray<float> >* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const CResourceArray<float>* begin(const CResourceArray<CResourceArray<float> >* );
	/* ../public/resourcefile/resourcestream.h:477 */
	CResourceArray<float>* end(CResourceArray<CResourceArray<float> >* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const CResourceArray<float>* end(const CResourceArray<CResourceArray<float> >* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<CResourceArray<float> >* );
};

// <00659D0C> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<CBasePhonemeTag_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<CBasePhonemeTag_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<CBasePhonemeTag_t>* , const CResourceArray<CBasePhonemeTag_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const CBasePhonemeTag_t& operator[](const CResourceArray<CBasePhonemeTag_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	CBasePhonemeTag_t& operator[](CResourceArray<CBasePhonemeTag_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const CBasePhonemeTag_t& Element(const CResourceArray<CBasePhonemeTag_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	CBasePhonemeTag_t& Element(CResourceArray<CBasePhonemeTag_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<CBasePhonemeTag_t>& operator=(CResourceArray<CBasePhonemeTag_t>* , const CLockedResource<CBasePhonemeTag_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<CBasePhonemeTag_t>& operator=(CResourceArray<CBasePhonemeTag_t>* , const CResourceArray<CBasePhonemeTag_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const CBasePhonemeTag_t* GetPtr(const CResourceArray<CBasePhonemeTag_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	CBasePhonemeTag_t* GetPtr(CResourceArray<CBasePhonemeTag_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const CBasePhonemeTag_t* Base(const CResourceArray<CBasePhonemeTag_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	CBasePhonemeTag_t* Base(CResourceArray<CBasePhonemeTag_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<CBasePhonemeTag_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<CBasePhonemeTag_t> operator CLockedResource<CBasePhonemeTag_t>(CResourceArray<CBasePhonemeTag_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const CBasePhonemeTag_t> operator CLockedResource<const CBasePhonemeTag_t>(const CResourceArray<CBasePhonemeTag_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<CBasePhonemeTag_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	CBasePhonemeTag_t* begin(CResourceArray<CBasePhonemeTag_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const CBasePhonemeTag_t* begin(const CResourceArray<CBasePhonemeTag_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	CBasePhonemeTag_t* end(CResourceArray<CBasePhonemeTag_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const CBasePhonemeTag_t* end(const CResourceArray<CBasePhonemeTag_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<CBasePhonemeTag_t>* );
};

// <0065A053> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<CEmphasisSample_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<CEmphasisSample_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<CEmphasisSample_t>* , const CResourceArray<CEmphasisSample_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const CEmphasisSample_t& operator[](const CResourceArray<CEmphasisSample_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	CEmphasisSample_t& operator[](CResourceArray<CEmphasisSample_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const CEmphasisSample_t& Element(const CResourceArray<CEmphasisSample_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	CEmphasisSample_t& Element(CResourceArray<CEmphasisSample_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<CEmphasisSample_t>& operator=(CResourceArray<CEmphasisSample_t>* , const CLockedResource<CEmphasisSample_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<CEmphasisSample_t>& operator=(CResourceArray<CEmphasisSample_t>* , const CResourceArray<CEmphasisSample_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const CEmphasisSample_t* GetPtr(const CResourceArray<CEmphasisSample_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	CEmphasisSample_t* GetPtr(CResourceArray<CEmphasisSample_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const CEmphasisSample_t* Base(const CResourceArray<CEmphasisSample_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	CEmphasisSample_t* Base(CResourceArray<CEmphasisSample_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<CEmphasisSample_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<CEmphasisSample_t> operator CLockedResource<CEmphasisSample_t>(CResourceArray<CEmphasisSample_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const CEmphasisSample_t> operator CLockedResource<const CEmphasisSample_t>(const CResourceArray<CEmphasisSample_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<CEmphasisSample_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	CEmphasisSample_t* begin(CResourceArray<CEmphasisSample_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const CEmphasisSample_t* begin(const CResourceArray<CEmphasisSample_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	CEmphasisSample_t* end(CResourceArray<CEmphasisSample_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const CEmphasisSample_t* end(const CResourceArray<CEmphasisSample_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<CEmphasisSample_t>* );
};

// <0091CB02> ../public/resourcefile/resourcestream.h:367
// member functions: 42
// member variable: 1
// class size: 8
class CResourceArray<ResourceBlockEntry_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<ResourceBlockEntry_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<ResourceBlockEntry_t>* , const CResourceArray<ResourceBlockEntry_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const ResourceBlockEntry_t& operator[](const CResourceArray<ResourceBlockEntry_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	ResourceBlockEntry_t& operator[](CResourceArray<ResourceBlockEntry_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const ResourceBlockEntry_t& Element(const CResourceArray<ResourceBlockEntry_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	ResourceBlockEntry_t& Element(CResourceArray<ResourceBlockEntry_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<ResourceBlockEntry_t>& operator=(CResourceArray<ResourceBlockEntry_t>* , const CLockedResource<ResourceBlockEntry_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<ResourceBlockEntry_t>& operator=(CResourceArray<ResourceBlockEntry_t>* , const CResourceArray<ResourceBlockEntry_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const ResourceBlockEntry_t* GetPtr(const CResourceArray<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	ResourceBlockEntry_t* GetPtr(CResourceArray<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const ResourceBlockEntry_t* Base(const CResourceArray<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	ResourceBlockEntry_t* Base(CResourceArray<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<ResourceBlockEntry_t> operator CLockedResource<ResourceBlockEntry_t>(CResourceArray<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const ResourceBlockEntry_t> operator CLockedResource<const ResourceBlockEntry_t>(const CResourceArray<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	ResourceBlockEntry_t* begin(CResourceArray<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const ResourceBlockEntry_t* begin(const CResourceArray<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	ResourceBlockEntry_t* end(CResourceArray<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const ResourceBlockEntry_t* end(const CResourceArray<ResourceBlockEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<ResourceBlockEntry_t>* );
	void CResourceArray(class CResourceArray<ResourceBlockEntry_t> *); /* linkage=_ZN14CResourceArrayI20ResourceBlockEntry_tEC4Ev */
	void CResourceArray(class CResourceArray<ResourceBlockEntry_t> *, const class CResourceArray<ResourceBlockEntry_t>  &); /* linkage=_ZN14CResourceArrayI20ResourceBlockEntry_tEC4ERKS1_ */
	const class ResourceBlockEntry_t  & operator[](const class CResourceArray<ResourceBlockEntry_t>  *, int); /* linkage=_ZNK14CResourceArrayI20ResourceBlockEntry_tEixEi */
	class ResourceBlockEntry_t & operator[](class CResourceArray<ResourceBlockEntry_t> *, int); /* linkage=_ZN14CResourceArrayI20ResourceBlockEntry_tEixEi */
	const class ResourceBlockEntry_t  & Element(const class CResourceArray<ResourceBlockEntry_t>  *, int); /* linkage=_ZNK14CResourceArrayI20ResourceBlockEntry_tE7ElementEi */
	class ResourceBlockEntry_t & Element(class CResourceArray<ResourceBlockEntry_t> *, int); /* linkage=_ZN14CResourceArrayI20ResourceBlockEntry_tE7ElementEi */
	class CResourceArray<ResourceBlockEntry_t> & operator=(class CResourceArray<ResourceBlockEntry_t> *, const class CLockedResource<ResourceBlockEntry_t>  &); /* linkage=_ZN14CResourceArrayI20ResourceBlockEntry_tEaSERK15CLockedResourceIS0_E */
	class CResourceArray<ResourceBlockEntry_t> & operator=(class CResourceArray<ResourceBlockEntry_t> *, const class CResourceArray<ResourceBlockEntry_t>  &); /* linkage=_ZN14CResourceArrayI20ResourceBlockEntry_tEaSERKS1_ */
	const class ResourceBlockEntry_t  * GetPtr(const class CResourceArray<ResourceBlockEntry_t>  *); /* linkage=_ZNK14CResourceArrayI20ResourceBlockEntry_tE6GetPtrEv */
	class ResourceBlockEntry_t * GetPtr(class CResourceArray<ResourceBlockEntry_t> *); /* linkage=_ZN14CResourceArrayI20ResourceBlockEntry_tE6GetPtrEv */
	const class ResourceBlockEntry_t  * Base(const class CResourceArray<ResourceBlockEntry_t>  *); /* linkage=_ZNK14CResourceArrayI20ResourceBlockEntry_tE4BaseEv */
	class ResourceBlockEntry_t * Base(class CResourceArray<ResourceBlockEntry_t> *); /* linkage=_ZN14CResourceArrayI20ResourceBlockEntry_tE4BaseEv */
	bool IsEmpty(const class CResourceArray<ResourceBlockEntry_t>  *); /* linkage=_ZNK14CResourceArrayI20ResourceBlockEntry_tE7IsEmptyEv */
	class CLockedResource<ResourceBlockEntry_t> operator CLockedResource<ResourceBlockEntry_t>(class CResourceArray<ResourceBlockEntry_t> *); /* linkage=_ZN14CResourceArrayI20ResourceBlockEntry_tEcv15CLockedResourceIS0_EEv */
	class CLockedResource<const ResourceBlockEntry_t> operator CLockedResource<const ResourceBlockEntry_t>(const class CResourceArray<ResourceBlockEntry_t>  *); /* linkage=_ZNK14CResourceArrayI20ResourceBlockEntry_tEcv15CLockedResourceIKS0_EEv */
	void CoalescePointerArrayInPlace(class CResourceArray<ResourceBlockEntry_t> *); /* linkage=_ZN14CResourceArrayI20ResourceBlockEntry_tE27CoalescePointerArrayInPlaceEv */
	class ResourceBlockEntry_t * begin(class CResourceArray<ResourceBlockEntry_t> *); /* linkage=_ZN14CResourceArrayI20ResourceBlockEntry_tE5beginEv */
	const class ResourceBlockEntry_t  * begin(const class CResourceArray<ResourceBlockEntry_t>  *); /* linkage=_ZNK14CResourceArrayI20ResourceBlockEntry_tE5beginEv */
	class ResourceBlockEntry_t * end(class CResourceArray<ResourceBlockEntry_t> *); /* linkage=_ZN14CResourceArrayI20ResourceBlockEntry_tE3endEv */
	const class ResourceBlockEntry_t  * end(const class CResourceArray<ResourceBlockEntry_t>  *); /* linkage=_ZNK14CResourceArrayI20ResourceBlockEntry_tE3endEv */
	uint GetDataSize(const class CResourceArray<ResourceBlockEntry_t>  *); /* linkage=_ZNK14CResourceArrayI20ResourceBlockEntry_tE11GetDataSizeEv */
};

// <0120E5EE> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<SheetSequenceFrame_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<SheetSequenceFrame_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<SheetSequenceFrame_t>* , const CResourceArray<SheetSequenceFrame_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const SheetSequenceFrame_t& operator[](const CResourceArray<SheetSequenceFrame_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	SheetSequenceFrame_t& operator[](CResourceArray<SheetSequenceFrame_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const SheetSequenceFrame_t& Element(const CResourceArray<SheetSequenceFrame_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	SheetSequenceFrame_t& Element(CResourceArray<SheetSequenceFrame_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<SheetSequenceFrame_t>& operator=(CResourceArray<SheetSequenceFrame_t>* , const CLockedResource<SheetSequenceFrame_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<SheetSequenceFrame_t>& operator=(CResourceArray<SheetSequenceFrame_t>* , const CResourceArray<SheetSequenceFrame_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const SheetSequenceFrame_t* GetPtr(const CResourceArray<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	SheetSequenceFrame_t* GetPtr(CResourceArray<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const SheetSequenceFrame_t* Base(const CResourceArray<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	SheetSequenceFrame_t* Base(CResourceArray<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<SheetSequenceFrame_t> operator CLockedResource<SheetSequenceFrame_t>(CResourceArray<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const SheetSequenceFrame_t> operator CLockedResource<const SheetSequenceFrame_t>(const CResourceArray<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	SheetSequenceFrame_t* begin(CResourceArray<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const SheetSequenceFrame_t* begin(const CResourceArray<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	SheetSequenceFrame_t* end(CResourceArray<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const SheetSequenceFrame_t* end(const CResourceArray<SheetSequenceFrame_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<SheetSequenceFrame_t>* );
};

// <0120EA39> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<SequenceFloatParam_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<SequenceFloatParam_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<SequenceFloatParam_t>* , const CResourceArray<SequenceFloatParam_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const SequenceFloatParam_t& operator[](const CResourceArray<SequenceFloatParam_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	SequenceFloatParam_t& operator[](CResourceArray<SequenceFloatParam_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const SequenceFloatParam_t& Element(const CResourceArray<SequenceFloatParam_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	SequenceFloatParam_t& Element(CResourceArray<SequenceFloatParam_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<SequenceFloatParam_t>& operator=(CResourceArray<SequenceFloatParam_t>* , const CLockedResource<SequenceFloatParam_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<SequenceFloatParam_t>& operator=(CResourceArray<SequenceFloatParam_t>* , const CResourceArray<SequenceFloatParam_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const SequenceFloatParam_t* GetPtr(const CResourceArray<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	SequenceFloatParam_t* GetPtr(CResourceArray<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const SequenceFloatParam_t* Base(const CResourceArray<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	SequenceFloatParam_t* Base(CResourceArray<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<SequenceFloatParam_t> operator CLockedResource<SequenceFloatParam_t>(CResourceArray<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const SequenceFloatParam_t> operator CLockedResource<const SequenceFloatParam_t>(const CResourceArray<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	SequenceFloatParam_t* begin(CResourceArray<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const SequenceFloatParam_t* begin(const CResourceArray<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	SequenceFloatParam_t* end(CResourceArray<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const SequenceFloatParam_t* end(const CResourceArray<SequenceFloatParam_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<SequenceFloatParam_t>* );
};

// <0120EF15> ../public/resourcefile/resourcestream.h:367
// member functions: 42
// member variable: 1
// class size: 8
class CResourceArray<SheetFrameImage_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<SheetFrameImage_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<SheetFrameImage_t>* , const CResourceArray<SheetFrameImage_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const SheetFrameImage_t& operator[](const CResourceArray<SheetFrameImage_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	SheetFrameImage_t& operator[](CResourceArray<SheetFrameImage_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const SheetFrameImage_t& Element(const CResourceArray<SheetFrameImage_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	SheetFrameImage_t& Element(CResourceArray<SheetFrameImage_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<SheetFrameImage_t>& operator=(CResourceArray<SheetFrameImage_t>* , const CLockedResource<SheetFrameImage_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<SheetFrameImage_t>& operator=(CResourceArray<SheetFrameImage_t>* , const CResourceArray<SheetFrameImage_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const SheetFrameImage_t* GetPtr(const CResourceArray<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	SheetFrameImage_t* GetPtr(CResourceArray<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const SheetFrameImage_t* Base(const CResourceArray<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	SheetFrameImage_t* Base(CResourceArray<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<SheetFrameImage_t> operator CLockedResource<SheetFrameImage_t>(CResourceArray<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const SheetFrameImage_t> operator CLockedResource<const SheetFrameImage_t>(const CResourceArray<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	SheetFrameImage_t* begin(CResourceArray<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const SheetFrameImage_t* begin(const CResourceArray<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	SheetFrameImage_t* end(CResourceArray<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const SheetFrameImage_t* end(const CResourceArray<SheetFrameImage_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<SheetFrameImage_t>* );
	void CResourceArray(class CResourceArray<SheetFrameImage_t> *); /* linkage=_ZN14CResourceArrayI17SheetFrameImage_tEC4Ev */
	void CResourceArray(class CResourceArray<SheetFrameImage_t> *, const class CResourceArray<SheetFrameImage_t>  &); /* linkage=_ZN14CResourceArrayI17SheetFrameImage_tEC4ERKS1_ */
	const class SheetFrameImage_t  & operator[](const class CResourceArray<SheetFrameImage_t>  *, int); /* linkage=_ZNK14CResourceArrayI17SheetFrameImage_tEixEi */
	class SheetFrameImage_t & operator[](class CResourceArray<SheetFrameImage_t> *, int); /* linkage=_ZN14CResourceArrayI17SheetFrameImage_tEixEi */
	const class SheetFrameImage_t  & Element(const class CResourceArray<SheetFrameImage_t>  *, int); /* linkage=_ZNK14CResourceArrayI17SheetFrameImage_tE7ElementEi */
	class SheetFrameImage_t & Element(class CResourceArray<SheetFrameImage_t> *, int); /* linkage=_ZN14CResourceArrayI17SheetFrameImage_tE7ElementEi */
	class CResourceArray<SheetFrameImage_t> & operator=(class CResourceArray<SheetFrameImage_t> *, const class CLockedResource<SheetFrameImage_t>  &); /* linkage=_ZN14CResourceArrayI17SheetFrameImage_tEaSERK15CLockedResourceIS0_E */
	class CResourceArray<SheetFrameImage_t> & operator=(class CResourceArray<SheetFrameImage_t> *, const class CResourceArray<SheetFrameImage_t>  &); /* linkage=_ZN14CResourceArrayI17SheetFrameImage_tEaSERKS1_ */
	const class SheetFrameImage_t  * GetPtr(const class CResourceArray<SheetFrameImage_t>  *); /* linkage=_ZNK14CResourceArrayI17SheetFrameImage_tE6GetPtrEv */
	class SheetFrameImage_t * GetPtr(class CResourceArray<SheetFrameImage_t> *); /* linkage=_ZN14CResourceArrayI17SheetFrameImage_tE6GetPtrEv */
	const class SheetFrameImage_t  * Base(const class CResourceArray<SheetFrameImage_t>  *); /* linkage=_ZNK14CResourceArrayI17SheetFrameImage_tE4BaseEv */
	class SheetFrameImage_t * Base(class CResourceArray<SheetFrameImage_t> *); /* linkage=_ZN14CResourceArrayI17SheetFrameImage_tE4BaseEv */
	bool IsEmpty(const class CResourceArray<SheetFrameImage_t>  *); /* linkage=_ZNK14CResourceArrayI17SheetFrameImage_tE7IsEmptyEv */
	class CLockedResource<SheetFrameImage_t> operator CLockedResource<SheetFrameImage_t>(class CResourceArray<SheetFrameImage_t> *); /* linkage=_ZN14CResourceArrayI17SheetFrameImage_tEcv15CLockedResourceIS0_EEv */
	class CLockedResource<const SheetFrameImage_t> operator CLockedResource<const SheetFrameImage_t>(const class CResourceArray<SheetFrameImage_t>  *); /* linkage=_ZNK14CResourceArrayI17SheetFrameImage_tEcv15CLockedResourceIKS0_EEv */
	void CoalescePointerArrayInPlace(class CResourceArray<SheetFrameImage_t> *); /* linkage=_ZN14CResourceArrayI17SheetFrameImage_tE27CoalescePointerArrayInPlaceEv */
	class SheetFrameImage_t * begin(class CResourceArray<SheetFrameImage_t> *); /* linkage=_ZN14CResourceArrayI17SheetFrameImage_tE5beginEv */
	const class SheetFrameImage_t  * begin(const class CResourceArray<SheetFrameImage_t>  *); /* linkage=_ZNK14CResourceArrayI17SheetFrameImage_tE5beginEv */
	class SheetFrameImage_t * end(class CResourceArray<SheetFrameImage_t> *); /* linkage=_ZN14CResourceArrayI17SheetFrameImage_tE3endEv */
	const class SheetFrameImage_t  * end(const class CResourceArray<SheetFrameImage_t>  *); /* linkage=_ZNK14CResourceArrayI17SheetFrameImage_tE3endEv */
	uint GetDataSize(const class CResourceArray<SheetFrameImage_t>  *); /* linkage=_ZNK14CResourceArrayI17SheetFrameImage_tE11GetDataSizeEv */
};

// <0120F397> ../public/resourcefile/resourcestream.h:367
// member functions: 42
// member variable: 1
// class size: 8
class CResourceArray<SheetSequence_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<SheetSequence_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<SheetSequence_t>* , const CResourceArray<SheetSequence_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const SheetSequence_t& operator[](const CResourceArray<SheetSequence_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	SheetSequence_t& operator[](CResourceArray<SheetSequence_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const SheetSequence_t& Element(const CResourceArray<SheetSequence_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	SheetSequence_t& Element(CResourceArray<SheetSequence_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<SheetSequence_t>& operator=(CResourceArray<SheetSequence_t>* , const CLockedResource<SheetSequence_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<SheetSequence_t>& operator=(CResourceArray<SheetSequence_t>* , const CResourceArray<SheetSequence_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const SheetSequence_t* GetPtr(const CResourceArray<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	SheetSequence_t* GetPtr(CResourceArray<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const SheetSequence_t* Base(const CResourceArray<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	SheetSequence_t* Base(CResourceArray<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<SheetSequence_t> operator CLockedResource<SheetSequence_t>(CResourceArray<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const SheetSequence_t> operator CLockedResource<const SheetSequence_t>(const CResourceArray<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	SheetSequence_t* begin(CResourceArray<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const SheetSequence_t* begin(const CResourceArray<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	SheetSequence_t* end(CResourceArray<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const SheetSequence_t* end(const CResourceArray<SheetSequence_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<SheetSequence_t>* );
	void CResourceArray(class CResourceArray<SheetSequence_t> *); /* linkage=_ZN14CResourceArrayI15SheetSequence_tEC4Ev */
	void CResourceArray(class CResourceArray<SheetSequence_t> *, const class CResourceArray<SheetSequence_t>  &); /* linkage=_ZN14CResourceArrayI15SheetSequence_tEC4ERKS1_ */
	const class SheetSequence_t  & operator[](const class CResourceArray<SheetSequence_t>  *, int); /* linkage=_ZNK14CResourceArrayI15SheetSequence_tEixEi */
	class SheetSequence_t & operator[](class CResourceArray<SheetSequence_t> *, int); /* linkage=_ZN14CResourceArrayI15SheetSequence_tEixEi */
	const class SheetSequence_t  & Element(const class CResourceArray<SheetSequence_t>  *, int); /* linkage=_ZNK14CResourceArrayI15SheetSequence_tE7ElementEi */
	class SheetSequence_t & Element(class CResourceArray<SheetSequence_t> *, int); /* linkage=_ZN14CResourceArrayI15SheetSequence_tE7ElementEi */
	class CResourceArray<SheetSequence_t> & operator=(class CResourceArray<SheetSequence_t> *, const class CLockedResource<SheetSequence_t>  &); /* linkage=_ZN14CResourceArrayI15SheetSequence_tEaSERK15CLockedResourceIS0_E */
	class CResourceArray<SheetSequence_t> & operator=(class CResourceArray<SheetSequence_t> *, const class CResourceArray<SheetSequence_t>  &); /* linkage=_ZN14CResourceArrayI15SheetSequence_tEaSERKS1_ */
	const class SheetSequence_t  * GetPtr(const class CResourceArray<SheetSequence_t>  *); /* linkage=_ZNK14CResourceArrayI15SheetSequence_tE6GetPtrEv */
	class SheetSequence_t * GetPtr(class CResourceArray<SheetSequence_t> *); /* linkage=_ZN14CResourceArrayI15SheetSequence_tE6GetPtrEv */
	const class SheetSequence_t  * Base(const class CResourceArray<SheetSequence_t>  *); /* linkage=_ZNK14CResourceArrayI15SheetSequence_tE4BaseEv */
	class SheetSequence_t * Base(class CResourceArray<SheetSequence_t> *); /* linkage=_ZN14CResourceArrayI15SheetSequence_tE4BaseEv */
	bool IsEmpty(const class CResourceArray<SheetSequence_t>  *); /* linkage=_ZNK14CResourceArrayI15SheetSequence_tE7IsEmptyEv */
	class CLockedResource<SheetSequence_t> operator CLockedResource<SheetSequence_t>(class CResourceArray<SheetSequence_t> *); /* linkage=_ZN14CResourceArrayI15SheetSequence_tEcv15CLockedResourceIS0_EEv */
	class CLockedResource<const SheetSequence_t> operator CLockedResource<const SheetSequence_t>(const class CResourceArray<SheetSequence_t>  *); /* linkage=_ZNK14CResourceArrayI15SheetSequence_tEcv15CLockedResourceIKS0_EEv */
	void CoalescePointerArrayInPlace(class CResourceArray<SheetSequence_t> *); /* linkage=_ZN14CResourceArrayI15SheetSequence_tE27CoalescePointerArrayInPlaceEv */
	class SheetSequence_t * begin(class CResourceArray<SheetSequence_t> *); /* linkage=_ZN14CResourceArrayI15SheetSequence_tE5beginEv */
	const class SheetSequence_t  * begin(const class CResourceArray<SheetSequence_t>  *); /* linkage=_ZNK14CResourceArrayI15SheetSequence_tE5beginEv */
	class SheetSequence_t * end(class CResourceArray<SheetSequence_t> *); /* linkage=_ZN14CResourceArrayI15SheetSequence_tE3endEv */
	const class SheetSequence_t  * end(const class CResourceArray<SheetSequence_t>  *); /* linkage=_ZNK14CResourceArrayI15SheetSequence_tE3endEv */
	uint GetDataSize(const class CResourceArray<SheetSequence_t>  *); /* linkage=_ZNK14CResourceArrayI15SheetSequence_tE11GetDataSizeEv */
};

// <017DDB20> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<RenderMeshInputLayoutField_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<RenderMeshInputLayoutField_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<RenderMeshInputLayoutField_t>* , const CResourceArray<RenderMeshInputLayoutField_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const RenderMeshInputLayoutField_t& operator[](const CResourceArray<RenderMeshInputLayoutField_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	RenderMeshInputLayoutField_t& operator[](CResourceArray<RenderMeshInputLayoutField_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const RenderMeshInputLayoutField_t& Element(const CResourceArray<RenderMeshInputLayoutField_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	RenderMeshInputLayoutField_t& Element(CResourceArray<RenderMeshInputLayoutField_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<RenderMeshInputLayoutField_t>& operator=(CResourceArray<RenderMeshInputLayoutField_t>* , const CLockedResource<RenderMeshInputLayoutField_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<RenderMeshInputLayoutField_t>& operator=(CResourceArray<RenderMeshInputLayoutField_t>* , const CResourceArray<RenderMeshInputLayoutField_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const RenderMeshInputLayoutField_t* GetPtr(const CResourceArray<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	RenderMeshInputLayoutField_t* GetPtr(CResourceArray<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const RenderMeshInputLayoutField_t* Base(const CResourceArray<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	RenderMeshInputLayoutField_t* Base(CResourceArray<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<RenderMeshInputLayoutField_t> operator CLockedResource<RenderMeshInputLayoutField_t>(CResourceArray<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const RenderMeshInputLayoutField_t> operator CLockedResource<const RenderMeshInputLayoutField_t>(const CResourceArray<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	RenderMeshInputLayoutField_t* begin(CResourceArray<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const RenderMeshInputLayoutField_t* begin(const CResourceArray<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	RenderMeshInputLayoutField_t* end(CResourceArray<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const RenderMeshInputLayoutField_t* end(const CResourceArray<RenderMeshInputLayoutField_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<RenderMeshInputLayoutField_t>* );
};

// <017DE34A> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<RenderMeshBufferData_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<RenderMeshBufferData_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<RenderMeshBufferData_t>* , const CResourceArray<RenderMeshBufferData_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const RenderMeshBufferData_t& operator[](const CResourceArray<RenderMeshBufferData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	RenderMeshBufferData_t& operator[](CResourceArray<RenderMeshBufferData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const RenderMeshBufferData_t& Element(const CResourceArray<RenderMeshBufferData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	RenderMeshBufferData_t& Element(CResourceArray<RenderMeshBufferData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<RenderMeshBufferData_t>& operator=(CResourceArray<RenderMeshBufferData_t>* , const CLockedResource<RenderMeshBufferData_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<RenderMeshBufferData_t>& operator=(CResourceArray<RenderMeshBufferData_t>* , const CResourceArray<RenderMeshBufferData_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const RenderMeshBufferData_t* GetPtr(const CResourceArray<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	RenderMeshBufferData_t* GetPtr(CResourceArray<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const RenderMeshBufferData_t* Base(const CResourceArray<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	RenderMeshBufferData_t* Base(CResourceArray<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<RenderMeshBufferData_t> operator CLockedResource<RenderMeshBufferData_t>(CResourceArray<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const RenderMeshBufferData_t> operator CLockedResource<const RenderMeshBufferData_t>(const CResourceArray<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	RenderMeshBufferData_t* begin(CResourceArray<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const RenderMeshBufferData_t* begin(const CResourceArray<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	RenderMeshBufferData_t* end(CResourceArray<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const RenderMeshBufferData_t* end(const CResourceArray<RenderMeshBufferData_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<RenderMeshBufferData_t>* );
};

// <02333CC5> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<ResourceReferenceInfo_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<ResourceReferenceInfo_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<ResourceReferenceInfo_t>* , const CResourceArray<ResourceReferenceInfo_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const ResourceReferenceInfo_t& operator[](const CResourceArray<ResourceReferenceInfo_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	ResourceReferenceInfo_t& operator[](CResourceArray<ResourceReferenceInfo_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const ResourceReferenceInfo_t& Element(const CResourceArray<ResourceReferenceInfo_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	ResourceReferenceInfo_t& Element(CResourceArray<ResourceReferenceInfo_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<ResourceReferenceInfo_t>& operator=(CResourceArray<ResourceReferenceInfo_t>* , const CLockedResource<ResourceReferenceInfo_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<ResourceReferenceInfo_t>& operator=(CResourceArray<ResourceReferenceInfo_t>* , const CResourceArray<ResourceReferenceInfo_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const ResourceReferenceInfo_t* GetPtr(const CResourceArray<ResourceReferenceInfo_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	ResourceReferenceInfo_t* GetPtr(CResourceArray<ResourceReferenceInfo_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const ResourceReferenceInfo_t* Base(const CResourceArray<ResourceReferenceInfo_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	ResourceReferenceInfo_t* Base(CResourceArray<ResourceReferenceInfo_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<ResourceReferenceInfo_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<ResourceReferenceInfo_t> operator CLockedResource<ResourceReferenceInfo_t>(CResourceArray<ResourceReferenceInfo_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const ResourceReferenceInfo_t> operator CLockedResource<const ResourceReferenceInfo_t>(const CResourceArray<ResourceReferenceInfo_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<ResourceReferenceInfo_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	ResourceReferenceInfo_t* begin(CResourceArray<ResourceReferenceInfo_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const ResourceReferenceInfo_t* begin(const CResourceArray<ResourceReferenceInfo_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	ResourceReferenceInfo_t* end(CResourceArray<ResourceReferenceInfo_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const ResourceReferenceInfo_t* end(const CResourceArray<ResourceReferenceInfo_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<ResourceReferenceInfo_t>* );
};

// <023C7A0D> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<ResourceManifestGroup_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<ResourceManifestGroup_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<ResourceManifestGroup_t>* , const CResourceArray<ResourceManifestGroup_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const ResourceManifestGroup_t& operator[](const CResourceArray<ResourceManifestGroup_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	ResourceManifestGroup_t& operator[](CResourceArray<ResourceManifestGroup_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const ResourceManifestGroup_t& Element(const CResourceArray<ResourceManifestGroup_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	ResourceManifestGroup_t& Element(CResourceArray<ResourceManifestGroup_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<ResourceManifestGroup_t>& operator=(CResourceArray<ResourceManifestGroup_t>* , const CLockedResource<ResourceManifestGroup_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<ResourceManifestGroup_t>& operator=(CResourceArray<ResourceManifestGroup_t>* , const CResourceArray<ResourceManifestGroup_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const ResourceManifestGroup_t* GetPtr(const CResourceArray<ResourceManifestGroup_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	ResourceManifestGroup_t* GetPtr(CResourceArray<ResourceManifestGroup_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const ResourceManifestGroup_t* Base(const CResourceArray<ResourceManifestGroup_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	ResourceManifestGroup_t* Base(CResourceArray<ResourceManifestGroup_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<ResourceManifestGroup_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<ResourceManifestGroup_t> operator CLockedResource<ResourceManifestGroup_t>(CResourceArray<ResourceManifestGroup_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const ResourceManifestGroup_t> operator CLockedResource<const ResourceManifestGroup_t>(const CResourceArray<ResourceManifestGroup_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<ResourceManifestGroup_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	ResourceManifestGroup_t* begin(CResourceArray<ResourceManifestGroup_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const ResourceManifestGroup_t* begin(const CResourceArray<ResourceManifestGroup_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	ResourceManifestGroup_t* end(CResourceArray<ResourceManifestGroup_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const ResourceManifestGroup_t* end(const CResourceArray<ResourceManifestGroup_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<ResourceManifestGroup_t>* );
};

// <05B9665E> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<ResourceInputDependency_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<ResourceInputDependency_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<ResourceInputDependency_t>* , const CResourceArray<ResourceInputDependency_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const ResourceInputDependency_t& operator[](const CResourceArray<ResourceInputDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	ResourceInputDependency_t& operator[](CResourceArray<ResourceInputDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const ResourceInputDependency_t& Element(const CResourceArray<ResourceInputDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	ResourceInputDependency_t& Element(CResourceArray<ResourceInputDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<ResourceInputDependency_t>& operator=(CResourceArray<ResourceInputDependency_t>* , const CLockedResource<ResourceInputDependency_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<ResourceInputDependency_t>& operator=(CResourceArray<ResourceInputDependency_t>* , const CResourceArray<ResourceInputDependency_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const ResourceInputDependency_t* GetPtr(const CResourceArray<ResourceInputDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	ResourceInputDependency_t* GetPtr(CResourceArray<ResourceInputDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const ResourceInputDependency_t* Base(const CResourceArray<ResourceInputDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	ResourceInputDependency_t* Base(CResourceArray<ResourceInputDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<ResourceInputDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<ResourceInputDependency_t> operator CLockedResource<ResourceInputDependency_t>(CResourceArray<ResourceInputDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const ResourceInputDependency_t> operator CLockedResource<const ResourceInputDependency_t>(const CResourceArray<ResourceInputDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<ResourceInputDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	ResourceInputDependency_t* begin(CResourceArray<ResourceInputDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const ResourceInputDependency_t* begin(const CResourceArray<ResourceInputDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	ResourceInputDependency_t* end(CResourceArray<ResourceInputDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const ResourceInputDependency_t* end(const CResourceArray<ResourceInputDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<ResourceInputDependency_t>* );
};

// <05B969AB> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<ResourceArgumentDependency_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<ResourceArgumentDependency_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<ResourceArgumentDependency_t>* , const CResourceArray<ResourceArgumentDependency_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const ResourceArgumentDependency_t& operator[](const CResourceArray<ResourceArgumentDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	ResourceArgumentDependency_t& operator[](CResourceArray<ResourceArgumentDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const ResourceArgumentDependency_t& Element(const CResourceArray<ResourceArgumentDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	ResourceArgumentDependency_t& Element(CResourceArray<ResourceArgumentDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<ResourceArgumentDependency_t>& operator=(CResourceArray<ResourceArgumentDependency_t>* , const CLockedResource<ResourceArgumentDependency_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<ResourceArgumentDependency_t>& operator=(CResourceArray<ResourceArgumentDependency_t>* , const CResourceArray<ResourceArgumentDependency_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const ResourceArgumentDependency_t* GetPtr(const CResourceArray<ResourceArgumentDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	ResourceArgumentDependency_t* GetPtr(CResourceArray<ResourceArgumentDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const ResourceArgumentDependency_t* Base(const CResourceArray<ResourceArgumentDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	ResourceArgumentDependency_t* Base(CResourceArray<ResourceArgumentDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<ResourceArgumentDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<ResourceArgumentDependency_t> operator CLockedResource<ResourceArgumentDependency_t>(CResourceArray<ResourceArgumentDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const ResourceArgumentDependency_t> operator CLockedResource<const ResourceArgumentDependency_t>(const CResourceArray<ResourceArgumentDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<ResourceArgumentDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	ResourceArgumentDependency_t* begin(CResourceArray<ResourceArgumentDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const ResourceArgumentDependency_t* begin(const CResourceArray<ResourceArgumentDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	ResourceArgumentDependency_t* end(CResourceArray<ResourceArgumentDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const ResourceArgumentDependency_t* end(const CResourceArray<ResourceArgumentDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<ResourceArgumentDependency_t>* );
};

// <05B96CF8> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<ResourceSpecialDependency_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<ResourceSpecialDependency_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<ResourceSpecialDependency_t>* , const CResourceArray<ResourceSpecialDependency_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const ResourceSpecialDependency_t& operator[](const CResourceArray<ResourceSpecialDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	ResourceSpecialDependency_t& operator[](CResourceArray<ResourceSpecialDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const ResourceSpecialDependency_t& Element(const CResourceArray<ResourceSpecialDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	ResourceSpecialDependency_t& Element(CResourceArray<ResourceSpecialDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<ResourceSpecialDependency_t>& operator=(CResourceArray<ResourceSpecialDependency_t>* , const CLockedResource<ResourceSpecialDependency_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<ResourceSpecialDependency_t>& operator=(CResourceArray<ResourceSpecialDependency_t>* , const CResourceArray<ResourceSpecialDependency_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const ResourceSpecialDependency_t* GetPtr(const CResourceArray<ResourceSpecialDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	ResourceSpecialDependency_t* GetPtr(CResourceArray<ResourceSpecialDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const ResourceSpecialDependency_t* Base(const CResourceArray<ResourceSpecialDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	ResourceSpecialDependency_t* Base(CResourceArray<ResourceSpecialDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<ResourceSpecialDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<ResourceSpecialDependency_t> operator CLockedResource<ResourceSpecialDependency_t>(CResourceArray<ResourceSpecialDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const ResourceSpecialDependency_t> operator CLockedResource<const ResourceSpecialDependency_t>(const CResourceArray<ResourceSpecialDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<ResourceSpecialDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	ResourceSpecialDependency_t* begin(CResourceArray<ResourceSpecialDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const ResourceSpecialDependency_t* begin(const CResourceArray<ResourceSpecialDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	ResourceSpecialDependency_t* end(CResourceArray<ResourceSpecialDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const ResourceSpecialDependency_t* end(const CResourceArray<ResourceSpecialDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<ResourceSpecialDependency_t>* );
};

// <05B97045> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<ResourceCustomDependency_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<ResourceCustomDependency_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<ResourceCustomDependency_t>* , const CResourceArray<ResourceCustomDependency_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const ResourceCustomDependency_t& operator[](const CResourceArray<ResourceCustomDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	ResourceCustomDependency_t& operator[](CResourceArray<ResourceCustomDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const ResourceCustomDependency_t& Element(const CResourceArray<ResourceCustomDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	ResourceCustomDependency_t& Element(CResourceArray<ResourceCustomDependency_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<ResourceCustomDependency_t>& operator=(CResourceArray<ResourceCustomDependency_t>* , const CLockedResource<ResourceCustomDependency_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<ResourceCustomDependency_t>& operator=(CResourceArray<ResourceCustomDependency_t>* , const CResourceArray<ResourceCustomDependency_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const ResourceCustomDependency_t* GetPtr(const CResourceArray<ResourceCustomDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	ResourceCustomDependency_t* GetPtr(CResourceArray<ResourceCustomDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const ResourceCustomDependency_t* Base(const CResourceArray<ResourceCustomDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	ResourceCustomDependency_t* Base(CResourceArray<ResourceCustomDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<ResourceCustomDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<ResourceCustomDependency_t> operator CLockedResource<ResourceCustomDependency_t>(CResourceArray<ResourceCustomDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const ResourceCustomDependency_t> operator CLockedResource<const ResourceCustomDependency_t>(const CResourceArray<ResourceCustomDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<ResourceCustomDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	ResourceCustomDependency_t* begin(CResourceArray<ResourceCustomDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const ResourceCustomDependency_t* begin(const CResourceArray<ResourceCustomDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	ResourceCustomDependency_t* end(CResourceArray<ResourceCustomDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const ResourceCustomDependency_t* end(const CResourceArray<ResourceCustomDependency_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<ResourceCustomDependency_t>* );
};

// <05B97392> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<ResourceAdditionalRelatedFile_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<ResourceAdditionalRelatedFile_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<ResourceAdditionalRelatedFile_t>* , const CResourceArray<ResourceAdditionalRelatedFile_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const ResourceAdditionalRelatedFile_t& operator[](const CResourceArray<ResourceAdditionalRelatedFile_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	ResourceAdditionalRelatedFile_t& operator[](CResourceArray<ResourceAdditionalRelatedFile_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const ResourceAdditionalRelatedFile_t& Element(const CResourceArray<ResourceAdditionalRelatedFile_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	ResourceAdditionalRelatedFile_t& Element(CResourceArray<ResourceAdditionalRelatedFile_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<ResourceAdditionalRelatedFile_t>& operator=(CResourceArray<ResourceAdditionalRelatedFile_t>* , const CLockedResource<ResourceAdditionalRelatedFile_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<ResourceAdditionalRelatedFile_t>& operator=(CResourceArray<ResourceAdditionalRelatedFile_t>* , const CResourceArray<ResourceAdditionalRelatedFile_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const ResourceAdditionalRelatedFile_t* GetPtr(const CResourceArray<ResourceAdditionalRelatedFile_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	ResourceAdditionalRelatedFile_t* GetPtr(CResourceArray<ResourceAdditionalRelatedFile_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const ResourceAdditionalRelatedFile_t* Base(const CResourceArray<ResourceAdditionalRelatedFile_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	ResourceAdditionalRelatedFile_t* Base(CResourceArray<ResourceAdditionalRelatedFile_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<ResourceAdditionalRelatedFile_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<ResourceAdditionalRelatedFile_t> operator CLockedResource<ResourceAdditionalRelatedFile_t>(CResourceArray<ResourceAdditionalRelatedFile_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const ResourceAdditionalRelatedFile_t> operator CLockedResource<const ResourceAdditionalRelatedFile_t>(const CResourceArray<ResourceAdditionalRelatedFile_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<ResourceAdditionalRelatedFile_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	ResourceAdditionalRelatedFile_t* begin(CResourceArray<ResourceAdditionalRelatedFile_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const ResourceAdditionalRelatedFile_t* begin(const CResourceArray<ResourceAdditionalRelatedFile_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	ResourceAdditionalRelatedFile_t* end(CResourceArray<ResourceAdditionalRelatedFile_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const ResourceAdditionalRelatedFile_t* end(const CResourceArray<ResourceAdditionalRelatedFile_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<ResourceAdditionalRelatedFile_t>* );
};

// <05B976DF> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<ResourceEditIntData_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<ResourceEditIntData_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<ResourceEditIntData_t>* , const CResourceArray<ResourceEditIntData_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const ResourceEditIntData_t& operator[](const CResourceArray<ResourceEditIntData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	ResourceEditIntData_t& operator[](CResourceArray<ResourceEditIntData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const ResourceEditIntData_t& Element(const CResourceArray<ResourceEditIntData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	ResourceEditIntData_t& Element(CResourceArray<ResourceEditIntData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<ResourceEditIntData_t>& operator=(CResourceArray<ResourceEditIntData_t>* , const CLockedResource<ResourceEditIntData_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<ResourceEditIntData_t>& operator=(CResourceArray<ResourceEditIntData_t>* , const CResourceArray<ResourceEditIntData_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const ResourceEditIntData_t* GetPtr(const CResourceArray<ResourceEditIntData_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	ResourceEditIntData_t* GetPtr(CResourceArray<ResourceEditIntData_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const ResourceEditIntData_t* Base(const CResourceArray<ResourceEditIntData_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	ResourceEditIntData_t* Base(CResourceArray<ResourceEditIntData_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<ResourceEditIntData_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<ResourceEditIntData_t> operator CLockedResource<ResourceEditIntData_t>(CResourceArray<ResourceEditIntData_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const ResourceEditIntData_t> operator CLockedResource<const ResourceEditIntData_t>(const CResourceArray<ResourceEditIntData_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<ResourceEditIntData_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	ResourceEditIntData_t* begin(CResourceArray<ResourceEditIntData_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const ResourceEditIntData_t* begin(const CResourceArray<ResourceEditIntData_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	ResourceEditIntData_t* end(CResourceArray<ResourceEditIntData_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const ResourceEditIntData_t* end(const CResourceArray<ResourceEditIntData_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<ResourceEditIntData_t>* );
};

// <05B97A2C> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<ResourceEditFloatData_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<ResourceEditFloatData_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<ResourceEditFloatData_t>* , const CResourceArray<ResourceEditFloatData_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const ResourceEditFloatData_t& operator[](const CResourceArray<ResourceEditFloatData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	ResourceEditFloatData_t& operator[](CResourceArray<ResourceEditFloatData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const ResourceEditFloatData_t& Element(const CResourceArray<ResourceEditFloatData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	ResourceEditFloatData_t& Element(CResourceArray<ResourceEditFloatData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<ResourceEditFloatData_t>& operator=(CResourceArray<ResourceEditFloatData_t>* , const CLockedResource<ResourceEditFloatData_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<ResourceEditFloatData_t>& operator=(CResourceArray<ResourceEditFloatData_t>* , const CResourceArray<ResourceEditFloatData_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const ResourceEditFloatData_t* GetPtr(const CResourceArray<ResourceEditFloatData_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	ResourceEditFloatData_t* GetPtr(CResourceArray<ResourceEditFloatData_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const ResourceEditFloatData_t* Base(const CResourceArray<ResourceEditFloatData_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	ResourceEditFloatData_t* Base(CResourceArray<ResourceEditFloatData_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<ResourceEditFloatData_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<ResourceEditFloatData_t> operator CLockedResource<ResourceEditFloatData_t>(CResourceArray<ResourceEditFloatData_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const ResourceEditFloatData_t> operator CLockedResource<const ResourceEditFloatData_t>(const CResourceArray<ResourceEditFloatData_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<ResourceEditFloatData_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	ResourceEditFloatData_t* begin(CResourceArray<ResourceEditFloatData_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const ResourceEditFloatData_t* begin(const CResourceArray<ResourceEditFloatData_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	ResourceEditFloatData_t* end(CResourceArray<ResourceEditFloatData_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const ResourceEditFloatData_t* end(const CResourceArray<ResourceEditFloatData_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<ResourceEditFloatData_t>* );
};

// <05B97D79> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<ResourceEditStringData_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<ResourceEditStringData_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<ResourceEditStringData_t>* , const CResourceArray<ResourceEditStringData_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const ResourceEditStringData_t& operator[](const CResourceArray<ResourceEditStringData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	ResourceEditStringData_t& operator[](CResourceArray<ResourceEditStringData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const ResourceEditStringData_t& Element(const CResourceArray<ResourceEditStringData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	ResourceEditStringData_t& Element(CResourceArray<ResourceEditStringData_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<ResourceEditStringData_t>& operator=(CResourceArray<ResourceEditStringData_t>* , const CLockedResource<ResourceEditStringData_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<ResourceEditStringData_t>& operator=(CResourceArray<ResourceEditStringData_t>* , const CResourceArray<ResourceEditStringData_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const ResourceEditStringData_t* GetPtr(const CResourceArray<ResourceEditStringData_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	ResourceEditStringData_t* GetPtr(CResourceArray<ResourceEditStringData_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const ResourceEditStringData_t* Base(const CResourceArray<ResourceEditStringData_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	ResourceEditStringData_t* Base(CResourceArray<ResourceEditStringData_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<ResourceEditStringData_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<ResourceEditStringData_t> operator CLockedResource<ResourceEditStringData_t>(CResourceArray<ResourceEditStringData_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const ResourceEditStringData_t> operator CLockedResource<const ResourceEditStringData_t>(const CResourceArray<ResourceEditStringData_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<ResourceEditStringData_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	ResourceEditStringData_t* begin(CResourceArray<ResourceEditStringData_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const ResourceEditStringData_t* begin(const CResourceArray<ResourceEditStringData_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	ResourceEditStringData_t* end(CResourceArray<ResourceEditStringData_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const ResourceEditStringData_t* end(const CResourceArray<ResourceEditStringData_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<ResourceEditStringData_t>* );
};

// <002D4750> ../public/resourcefile/resourcestream.h:367
// member functions: 42
// member variable: 1
// class size: 8
class CResourceArray<VTEX_ExtraDataEntry_t> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<VTEX_ExtraDataEntry_t>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<VTEX_ExtraDataEntry_t>* , const CResourceArray<VTEX_ExtraDataEntry_t>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const VTEX_ExtraDataEntry_t& operator[](const CResourceArray<VTEX_ExtraDataEntry_t>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	VTEX_ExtraDataEntry_t& operator[](CResourceArray<VTEX_ExtraDataEntry_t>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const VTEX_ExtraDataEntry_t& Element(const CResourceArray<VTEX_ExtraDataEntry_t>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	VTEX_ExtraDataEntry_t& Element(CResourceArray<VTEX_ExtraDataEntry_t>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<VTEX_ExtraDataEntry_t>& operator=(CResourceArray<VTEX_ExtraDataEntry_t>* , const CLockedResource<VTEX_ExtraDataEntry_t>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<VTEX_ExtraDataEntry_t>& operator=(CResourceArray<VTEX_ExtraDataEntry_t>* , const CResourceArray<VTEX_ExtraDataEntry_t>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const VTEX_ExtraDataEntry_t* GetPtr(const CResourceArray<VTEX_ExtraDataEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	VTEX_ExtraDataEntry_t* GetPtr(CResourceArray<VTEX_ExtraDataEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const VTEX_ExtraDataEntry_t* Base(const CResourceArray<VTEX_ExtraDataEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	VTEX_ExtraDataEntry_t* Base(CResourceArray<VTEX_ExtraDataEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<VTEX_ExtraDataEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<VTEX_ExtraDataEntry_t> operator CLockedResource<VTEX_ExtraDataEntry_t>(CResourceArray<VTEX_ExtraDataEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const VTEX_ExtraDataEntry_t> operator CLockedResource<const VTEX_ExtraDataEntry_t>(const CResourceArray<VTEX_ExtraDataEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<VTEX_ExtraDataEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	VTEX_ExtraDataEntry_t* begin(CResourceArray<VTEX_ExtraDataEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const VTEX_ExtraDataEntry_t* begin(const CResourceArray<VTEX_ExtraDataEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	VTEX_ExtraDataEntry_t* end(CResourceArray<VTEX_ExtraDataEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const VTEX_ExtraDataEntry_t* end(const CResourceArray<VTEX_ExtraDataEntry_t>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<VTEX_ExtraDataEntry_t>* );
	void CResourceArray(class CResourceArray<VTEX_ExtraDataEntry_t> *); /* linkage=_ZN14CResourceArrayI21VTEX_ExtraDataEntry_tEC4Ev */
	void CResourceArray(class CResourceArray<VTEX_ExtraDataEntry_t> *, const class CResourceArray<VTEX_ExtraDataEntry_t>  &); /* linkage=_ZN14CResourceArrayI21VTEX_ExtraDataEntry_tEC4ERKS1_ */
	const class VTEX_ExtraDataEntry_t  & operator[](const class CResourceArray<VTEX_ExtraDataEntry_t>  *, int); /* linkage=_ZNK14CResourceArrayI21VTEX_ExtraDataEntry_tEixEi */
	class VTEX_ExtraDataEntry_t & operator[](class CResourceArray<VTEX_ExtraDataEntry_t> *, int); /* linkage=_ZN14CResourceArrayI21VTEX_ExtraDataEntry_tEixEi */
	const class VTEX_ExtraDataEntry_t  & Element(const class CResourceArray<VTEX_ExtraDataEntry_t>  *, int); /* linkage=_ZNK14CResourceArrayI21VTEX_ExtraDataEntry_tE7ElementEi */
	class VTEX_ExtraDataEntry_t & Element(class CResourceArray<VTEX_ExtraDataEntry_t> *, int); /* linkage=_ZN14CResourceArrayI21VTEX_ExtraDataEntry_tE7ElementEi */
	class CResourceArray<VTEX_ExtraDataEntry_t> & operator=(class CResourceArray<VTEX_ExtraDataEntry_t> *, const class CLockedResource<VTEX_ExtraDataEntry_t>  &); /* linkage=_ZN14CResourceArrayI21VTEX_ExtraDataEntry_tEaSERK15CLockedResourceIS0_E */
	class CResourceArray<VTEX_ExtraDataEntry_t> & operator=(class CResourceArray<VTEX_ExtraDataEntry_t> *, const class CResourceArray<VTEX_ExtraDataEntry_t>  &); /* linkage=_ZN14CResourceArrayI21VTEX_ExtraDataEntry_tEaSERKS1_ */
	const class VTEX_ExtraDataEntry_t  * GetPtr(const class CResourceArray<VTEX_ExtraDataEntry_t>  *); /* linkage=_ZNK14CResourceArrayI21VTEX_ExtraDataEntry_tE6GetPtrEv */
	class VTEX_ExtraDataEntry_t * GetPtr(class CResourceArray<VTEX_ExtraDataEntry_t> *); /* linkage=_ZN14CResourceArrayI21VTEX_ExtraDataEntry_tE6GetPtrEv */
	const class VTEX_ExtraDataEntry_t  * Base(const class CResourceArray<VTEX_ExtraDataEntry_t>  *); /* linkage=_ZNK14CResourceArrayI21VTEX_ExtraDataEntry_tE4BaseEv */
	class VTEX_ExtraDataEntry_t * Base(class CResourceArray<VTEX_ExtraDataEntry_t> *); /* linkage=_ZN14CResourceArrayI21VTEX_ExtraDataEntry_tE4BaseEv */
	bool IsEmpty(const class CResourceArray<VTEX_ExtraDataEntry_t>  *); /* linkage=_ZNK14CResourceArrayI21VTEX_ExtraDataEntry_tE7IsEmptyEv */
	class CLockedResource<VTEX_ExtraDataEntry_t> operator CLockedResource<VTEX_ExtraDataEntry_t>(class CResourceArray<VTEX_ExtraDataEntry_t> *); /* linkage=_ZN14CResourceArrayI21VTEX_ExtraDataEntry_tEcv15CLockedResourceIS0_EEv */
	class CLockedResource<const VTEX_ExtraDataEntry_t> operator CLockedResource<const VTEX_ExtraDataEntry_t>(const class CResourceArray<VTEX_ExtraDataEntry_t>  *); /* linkage=_ZNK14CResourceArrayI21VTEX_ExtraDataEntry_tEcv15CLockedResourceIKS0_EEv */
	void CoalescePointerArrayInPlace(class CResourceArray<VTEX_ExtraDataEntry_t> *); /* linkage=_ZN14CResourceArrayI21VTEX_ExtraDataEntry_tE27CoalescePointerArrayInPlaceEv */
	class VTEX_ExtraDataEntry_t * begin(class CResourceArray<VTEX_ExtraDataEntry_t> *); /* linkage=_ZN14CResourceArrayI21VTEX_ExtraDataEntry_tE5beginEv */
	const class VTEX_ExtraDataEntry_t  * begin(const class CResourceArray<VTEX_ExtraDataEntry_t>  *); /* linkage=_ZNK14CResourceArrayI21VTEX_ExtraDataEntry_tE5beginEv */
	class VTEX_ExtraDataEntry_t * end(class CResourceArray<VTEX_ExtraDataEntry_t> *); /* linkage=_ZN14CResourceArrayI21VTEX_ExtraDataEntry_tE3endEv */
	const class VTEX_ExtraDataEntry_t  * end(const class CResourceArray<VTEX_ExtraDataEntry_t>  *); /* linkage=_ZNK14CResourceArrayI21VTEX_ExtraDataEntry_tE3endEv */
	uint GetDataSize(const class CResourceArray<VTEX_ExtraDataEntry_t>  *); /* linkage=_ZNK14CResourceArrayI21VTEX_ExtraDataEntry_tE11GetDataSizeEv */
};

// <001558FF> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<CResourceDiskStructField> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<CResourceDiskStructField>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<CResourceDiskStructField>* , const CResourceArray<CResourceDiskStructField>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const CResourceDiskStructField& operator[](const CResourceArray<CResourceDiskStructField>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	CResourceDiskStructField& operator[](CResourceArray<CResourceDiskStructField>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const CResourceDiskStructField& Element(const CResourceArray<CResourceDiskStructField>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	CResourceDiskStructField& Element(CResourceArray<CResourceDiskStructField>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<CResourceDiskStructField>& operator=(CResourceArray<CResourceDiskStructField>* , const CLockedResource<CResourceDiskStructField>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<CResourceDiskStructField>& operator=(CResourceArray<CResourceDiskStructField>* , const CResourceArray<CResourceDiskStructField>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const CResourceDiskStructField* GetPtr(const CResourceArray<CResourceDiskStructField>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	CResourceDiskStructField* GetPtr(CResourceArray<CResourceDiskStructField>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const CResourceDiskStructField* Base(const CResourceArray<CResourceDiskStructField>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	CResourceDiskStructField* Base(CResourceArray<CResourceDiskStructField>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<CResourceDiskStructField>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<CResourceDiskStructField> operator CLockedResource<CResourceDiskStructField>(CResourceArray<CResourceDiskStructField>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const CResourceDiskStructField> operator CLockedResource<const CResourceDiskStructField>(const CResourceArray<CResourceDiskStructField>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<CResourceDiskStructField>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	CResourceDiskStructField* begin(CResourceArray<CResourceDiskStructField>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const CResourceDiskStructField* begin(const CResourceArray<CResourceDiskStructField>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	CResourceDiskStructField* end(CResourceArray<CResourceDiskStructField>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const CResourceDiskStructField* end(const CResourceArray<CResourceDiskStructField>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<CResourceDiskStructField>* );
};

// <00155DA5> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<CResourceDiskEnumValue> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<CResourceDiskEnumValue>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<CResourceDiskEnumValue>* , const CResourceArray<CResourceDiskEnumValue>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const CResourceDiskEnumValue& operator[](const CResourceArray<CResourceDiskEnumValue>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	CResourceDiskEnumValue& operator[](CResourceArray<CResourceDiskEnumValue>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const CResourceDiskEnumValue& Element(const CResourceArray<CResourceDiskEnumValue>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	CResourceDiskEnumValue& Element(CResourceArray<CResourceDiskEnumValue>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<CResourceDiskEnumValue>& operator=(CResourceArray<CResourceDiskEnumValue>* , const CLockedResource<CResourceDiskEnumValue>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<CResourceDiskEnumValue>& operator=(CResourceArray<CResourceDiskEnumValue>* , const CResourceArray<CResourceDiskEnumValue>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const CResourceDiskEnumValue* GetPtr(const CResourceArray<CResourceDiskEnumValue>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	CResourceDiskEnumValue* GetPtr(CResourceArray<CResourceDiskEnumValue>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const CResourceDiskEnumValue* Base(const CResourceArray<CResourceDiskEnumValue>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	CResourceDiskEnumValue* Base(CResourceArray<CResourceDiskEnumValue>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<CResourceDiskEnumValue>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<CResourceDiskEnumValue> operator CLockedResource<CResourceDiskEnumValue>(CResourceArray<CResourceDiskEnumValue>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const CResourceDiskEnumValue> operator CLockedResource<const CResourceDiskEnumValue>(const CResourceArray<CResourceDiskEnumValue>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<CResourceDiskEnumValue>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	CResourceDiskEnumValue* begin(CResourceArray<CResourceDiskEnumValue>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const CResourceDiskEnumValue* begin(const CResourceArray<CResourceDiskEnumValue>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	CResourceDiskEnumValue* end(CResourceArray<CResourceDiskEnumValue>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const CResourceDiskEnumValue* end(const CResourceArray<CResourceDiskEnumValue>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<CResourceDiskEnumValue>* );
};

// <001561BA> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<CResourceDiskStruct> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<CResourceDiskStruct>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<CResourceDiskStruct>* , const CResourceArray<CResourceDiskStruct>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const CResourceDiskStruct& operator[](const CResourceArray<CResourceDiskStruct>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	CResourceDiskStruct& operator[](CResourceArray<CResourceDiskStruct>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const CResourceDiskStruct& Element(const CResourceArray<CResourceDiskStruct>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	CResourceDiskStruct& Element(CResourceArray<CResourceDiskStruct>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<CResourceDiskStruct>& operator=(CResourceArray<CResourceDiskStruct>* , const CLockedResource<CResourceDiskStruct>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<CResourceDiskStruct>& operator=(CResourceArray<CResourceDiskStruct>* , const CResourceArray<CResourceDiskStruct>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const CResourceDiskStruct* GetPtr(const CResourceArray<CResourceDiskStruct>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	CResourceDiskStruct* GetPtr(CResourceArray<CResourceDiskStruct>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const CResourceDiskStruct* Base(const CResourceArray<CResourceDiskStruct>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	CResourceDiskStruct* Base(CResourceArray<CResourceDiskStruct>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<CResourceDiskStruct>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<CResourceDiskStruct> operator CLockedResource<CResourceDiskStruct>(CResourceArray<CResourceDiskStruct>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const CResourceDiskStruct> operator CLockedResource<const CResourceDiskStruct>(const CResourceArray<CResourceDiskStruct>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<CResourceDiskStruct>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	CResourceDiskStruct* begin(CResourceArray<CResourceDiskStruct>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const CResourceDiskStruct* begin(const CResourceArray<CResourceDiskStruct>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	CResourceDiskStruct* end(CResourceArray<CResourceDiskStruct>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const CResourceDiskStruct* end(const CResourceArray<CResourceDiskStruct>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<CResourceDiskStruct>* );
};

// <00156506> ../public/resourcefile/resourcestream.h:367
// member functions: 21
// member variable: 1
// class size: 8
class CResourceArray<CResourceDiskEnum> : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<CResourceDiskEnum>* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<CResourceDiskEnum>* , const CResourceArray<CResourceDiskEnum>& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const CResourceDiskEnum& operator[](const CResourceArray<CResourceDiskEnum>* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	CResourceDiskEnum& operator[](CResourceArray<CResourceDiskEnum>* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const CResourceDiskEnum& Element(const CResourceArray<CResourceDiskEnum>* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	CResourceDiskEnum& Element(CResourceArray<CResourceDiskEnum>* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<CResourceDiskEnum>& operator=(CResourceArray<CResourceDiskEnum>* , const CLockedResource<CResourceDiskEnum>& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<CResourceDiskEnum>& operator=(CResourceArray<CResourceDiskEnum>* , const CResourceArray<CResourceDiskEnum>& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const CResourceDiskEnum* GetPtr(const CResourceArray<CResourceDiskEnum>* );
	/* ../public/resourcefile/resourcestream.h:419 */
	CResourceDiskEnum* GetPtr(CResourceArray<CResourceDiskEnum>* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const CResourceDiskEnum* Base(const CResourceArray<CResourceDiskEnum>* );
	/* ../public/resourcefile/resourcestream.h:429 */
	CResourceDiskEnum* Base(CResourceArray<CResourceDiskEnum>* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<CResourceDiskEnum>* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<CResourceDiskEnum> operator CLockedResource<CResourceDiskEnum>(CResourceArray<CResourceDiskEnum>* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const CResourceDiskEnum> operator CLockedResource<const CResourceDiskEnum>(const CResourceArray<CResourceDiskEnum>* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<CResourceDiskEnum>* );
	/* ../public/resourcefile/resourcestream.h:467 */
	CResourceDiskEnum* begin(CResourceArray<CResourceDiskEnum>* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const CResourceDiskEnum* begin(const CResourceArray<CResourceDiskEnum>* );
	/* ../public/resourcefile/resourcestream.h:477 */
	CResourceDiskEnum* end(CResourceArray<CResourceDiskEnum>* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const CResourceDiskEnum* end(const CResourceArray<CResourceDiskEnum>* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<CResourceDiskEnum>* );
};

// <001E6A30> ../public/resourcefile/resourcestream.h:367
// member functions: 42
// member variable: 1
// class size: 8
class CResourceArray<CResourcePointer<CResourceString> > : public CResourceArrayBase {
public:
	/* class CResourceArrayBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:370 */
	void CResourceArray(CResourceArray<CResourcePointer<CResourceString> >* );
private:
	/* ../public/resourcefile/resourcestream.h:374 */
	void CResourceArray(CResourceArray<CResourcePointer<CResourceString> >* , const CResourceArray<CResourcePointer<CResourceString> >& );
	/* ../public/resourcefile/resourcestream.h:376 */
	const CResourcePointer<CResourceString>& operator[](const CResourceArray<CResourcePointer<CResourceString> >* , int);
	/* ../public/resourcefile/resourcestream.h:382 */
	CResourcePointer<CResourceString>& operator[](CResourceArray<CResourcePointer<CResourceString> >* , int);
	/* ../public/resourcefile/resourcestream.h:388 */
	const CResourcePointer<CResourceString>& Element(const CResourceArray<CResourcePointer<CResourceString> >* , int);
	/* ../public/resourcefile/resourcestream.h:394 */
	CResourcePointer<CResourceString>& Element(CResourceArray<CResourcePointer<CResourceString> >* , int);
	/* ../public/resourcefile/resourcestream.h:400 */
	CResourceArray<CResourcePointer<CResourceString> >& operator=(CResourceArray<CResourcePointer<CResourceString> >* , const CLockedResource<CResourcePointer<CResourceString> >& );
	/* ../public/resourcefile/resourcestream.h:407 */
	CResourceArray<CResourcePointer<CResourceString> >& operator=(CResourceArray<CResourcePointer<CResourceString> >* , const CResourceArray<CResourcePointer<CResourceString> >& );
	/* ../public/resourcefile/resourcestream.h:414 */
	const CResourcePointer<CResourceString>* GetPtr(const CResourceArray<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:419 */
	CResourcePointer<CResourceString>* GetPtr(CResourceArray<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:424 */
	const CResourcePointer<CResourceString>* Base(const CResourceArray<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:429 */
	CResourcePointer<CResourceString>* Base(CResourceArray<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:434 */
	bool IsEmpty(const CResourceArray<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:439 */
	CLockedResource<CResourcePointer<CResourceString> > operator CLockedResource<CResourcePointer<CResourceString> >(CResourceArray<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:440 */
	CLockedResource<const CResourcePointer<CResourceString> > operator CLockedResource<const CResourcePointer<CResourceString> >(const CResourceArray<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:444 */
	void CoalescePointerArrayInPlace(CResourceArray<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:467 */
	CResourcePointer<CResourceString>* begin(CResourceArray<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:472 */
	const CResourcePointer<CResourceString>* begin(const CResourceArray<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:477 */
	CResourcePointer<CResourceString>* end(CResourceArray<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:482 */
	const CResourcePointer<CResourceString>* end(const CResourceArray<CResourcePointer<CResourceString> >* );
	/* ../public/resourcefile/resourcestream.h:487 */
	uint GetDataSize(const CResourceArray<CResourcePointer<CResourceString> >* );
	void CResourceArray(class CResourceArray<CResourcePointer<CResourceString> > *); /* linkage=_ZN14CResourceArrayI16CResourcePointerI15CResourceStringEEC4Ev */
	void CResourceArray(class CResourceArray<CResourcePointer<CResourceString> > *, const class CResourceArray<CResourcePointer<CResourceString> >  &); /* linkage=_ZN14CResourceArrayI16CResourcePointerI15CResourceStringEEC4ERKS3_ */
	const class CResourcePointer<CResourceString>  & operator[](const class CResourceArray<CResourcePointer<CResourceString> >  *, int); /* linkage=_ZNK14CResourceArrayI16CResourcePointerI15CResourceStringEEixEi */
	class CResourcePointer<CResourceString> & operator[](class CResourceArray<CResourcePointer<CResourceString> > *, int); /* linkage=_ZN14CResourceArrayI16CResourcePointerI15CResourceStringEEixEi */
	const class CResourcePointer<CResourceString>  & Element(const class CResourceArray<CResourcePointer<CResourceString> >  *, int); /* linkage=_ZNK14CResourceArrayI16CResourcePointerI15CResourceStringEE7ElementEi */
	class CResourcePointer<CResourceString> & Element(class CResourceArray<CResourcePointer<CResourceString> > *, int); /* linkage=_ZN14CResourceArrayI16CResourcePointerI15CResourceStringEE7ElementEi */
	class CResourceArray<CResourcePointer<CResourceString> > & operator=(class CResourceArray<CResourcePointer<CResourceString> > *, const class CLockedResource<CResourcePointer<CResourceString> >  &); /* linkage=_ZN14CResourceArrayI16CResourcePointerI15CResourceStringEEaSERK15CLockedResourceIS2_E */
	class CResourceArray<CResourcePointer<CResourceString> > & operator=(class CResourceArray<CResourcePointer<CResourceString> > *, const class CResourceArray<CResourcePointer<CResourceString> >  &); /* linkage=_ZN14CResourceArrayI16CResourcePointerI15CResourceStringEEaSERKS3_ */
	const class CResourcePointer<CResourceString>  * GetPtr(const class CResourceArray<CResourcePointer<CResourceString> >  *); /* linkage=_ZNK14CResourceArrayI16CResourcePointerI15CResourceStringEE6GetPtrEv */
	class CResourcePointer<CResourceString> * GetPtr(class CResourceArray<CResourcePointer<CResourceString> > *); /* linkage=_ZN14CResourceArrayI16CResourcePointerI15CResourceStringEE6GetPtrEv */
	const class CResourcePointer<CResourceString>  * Base(const class CResourceArray<CResourcePointer<CResourceString> >  *); /* linkage=_ZNK14CResourceArrayI16CResourcePointerI15CResourceStringEE4BaseEv */
	class CResourcePointer<CResourceString> * Base(class CResourceArray<CResourcePointer<CResourceString> > *); /* linkage=_ZN14CResourceArrayI16CResourcePointerI15CResourceStringEE4BaseEv */
	bool IsEmpty(const class CResourceArray<CResourcePointer<CResourceString> >  *); /* linkage=_ZNK14CResourceArrayI16CResourcePointerI15CResourceStringEE7IsEmptyEv */
	class CLockedResource<CResourcePointer<CResourceString> > operator CLockedResource<CResourcePointer<CResourceString> >(class CResourceArray<CResourcePointer<CResourceString> > *); /* linkage=_ZN14CResourceArrayI16CResourcePointerI15CResourceStringEEcv15CLockedResourceIS2_EEv */
	class CLockedResource<const CResourcePointer<CResourceString> > operator CLockedResource<const CResourcePointer<CResourceString> >(const class CResourceArray<CResourcePointer<CResourceString> >  *); /* linkage=_ZNK14CResourceArrayI16CResourcePointerI15CResourceStringEEcv15CLockedResourceIKS2_EEv */
	void CoalescePointerArrayInPlace(class CResourceArray<CResourcePointer<CResourceString> > *); /* linkage=_ZN14CResourceArrayI16CResourcePointerI15CResourceStringEE27CoalescePointerArrayInPlaceEv */
	class CResourcePointer<CResourceString> * begin(class CResourceArray<CResourcePointer<CResourceString> > *); /* linkage=_ZN14CResourceArrayI16CResourcePointerI15CResourceStringEE5beginEv */
	const class CResourcePointer<CResourceString>  * begin(const class CResourceArray<CResourcePointer<CResourceString> >  *); /* linkage=_ZNK14CResourceArrayI16CResourcePointerI15CResourceStringEE5beginEv */
	class CResourcePointer<CResourceString> * end(class CResourceArray<CResourcePointer<CResourceString> > *); /* linkage=_ZN14CResourceArrayI16CResourcePointerI15CResourceStringEE3endEv */
	const class CResourcePointer<CResourceString>  * end(const class CResourceArray<CResourcePointer<CResourceString> >  *); /* linkage=_ZNK14CResourceArrayI16CResourcePointerI15CResourceStringEE3endEv */
	uint GetDataSize(const class CResourceArray<CResourcePointer<CResourceString> >  *); /* linkage=_ZNK14CResourceArrayI16CResourcePointerI15CResourceStringEE11GetDataSizeEv */
};

// <05BB9AE6> ../public/resourcefile/resourcestream.h:370
void CResourceArray<ResourceBlockEntry_t>::CResourceArray()
{
} /* size: 0 */

// <05BB9ACD> ../public/resourcefile/resourcestream.h:370
inline void CResourceArray<ResourceBlockEntry_t>::CResourceArray()
{
} /* size: 0 */

// <01853C31> ../public/resourcefile/resourcestream.h:370
void CResourceArray<RenderMeshBufferData_t>::CResourceArray()
{
} /* size: 0 */

// <01853C18> ../public/resourcefile/resourcestream.h:370
inline void CResourceArray<RenderMeshBufferData_t>::CResourceArray()
{
} /* size: 0 */

// <01853B82> ../public/resourcefile/resourcestream.h:370
void CResourceArray<RenderMeshInputLayoutField_t>::CResourceArray()
{
} /* size: 0 */

// <01853B69> ../public/resourcefile/resourcestream.h:370
inline void CResourceArray<RenderMeshInputLayoutField_t>::CResourceArray()
{
} /* size: 0 */

// <01853B39> ../public/resourcefile/resourcestream.h:370
inline void CResourceArray<unsigned char>::CResourceArray()
{
} /* size: 0 */

// <00E022E6> ../public/resourcefile/resourcestream.h:370
void CResourceArray<SheetSequenceFrame_t>::CResourceArray()
{
} /* size: 0 */

// <00E022CD> ../public/resourcefile/resourcestream.h:370
inline void CResourceArray<SheetSequenceFrame_t>::CResourceArray()
{
} /* size: 0 */

// <00E022B6> ../public/resourcefile/resourcestream.h:370
void CResourceArray<SequenceFloatParam_t>::CResourceArray()
{
} /* size: 0 */

// <00E0229D> ../public/resourcefile/resourcestream.h:370
inline void CResourceArray<SequenceFloatParam_t>::CResourceArray()
{
} /* size: 0 */

// <00E02260> ../public/resourcefile/resourcestream.h:370
void CResourceArray<SheetFrameImage_t>::CResourceArray()
{
} /* size: 0 */

// <00E02247> ../public/resourcefile/resourcestream.h:370
inline void CResourceArray<SheetFrameImage_t>::CResourceArray()
{
} /* size: 0 */

// <00E0220A> ../public/resourcefile/resourcestream.h:370
void CResourceArray<SheetSequence_t>::CResourceArray()
{
} /* size: 0 */

// <00E021F1> ../public/resourcefile/resourcestream.h:370
inline void CResourceArray<SheetSequence_t>::CResourceArray()
{
} /* size: 0 */

// <0020D600> ../public/resourcefile/resourcestream.h:370
void CResourceArray<CResourcePointer<CResourceString> >::CResourceArray()
{
} /* size: 0 */

// <0020D5E7> ../public/resourcefile/resourcestream.h:370
inline void CResourceArray<CResourcePointer<CResourceString> >::CResourceArray()
{
} /* size: 0 */

// <066E7697> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<ResourceBlockEntry_t>::operator[](int nIndex)
{
} /* size: 0 */

// <05BB70E2> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<ResourceEditStringData_t>::operator[](int nIndex)
{
} /* size: 0 */

// <04CBBB5B> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<RenderMeshInputLayoutField_t>::operator[](int nIndex)
{
} /* size: 0 */

// <04CBB23D> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<RenderMeshBufferData_t>::operator[](int nIndex)
{
} /* size: 0 */

// <023EAFB5> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<CResourceString>::operator[](int nIndex)
{
} /* size: 0 */

// <023EAF6B> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<ResourceManifestGroup_t>::operator[](int nIndex)
{
} /* size: 0 */

// <02358B10> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<ResourceReferenceInfo_t>::operator[](int nIndex)
{
} /* size: 0 */

// <0127C2A8> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<SheetSequence_t>::operator[](int nIndex)
{
} /* size: 0 */

// <00F45578> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<SheetSequenceFrame_t>::operator[](int nIndex)
{
} /* size: 0 */

// <00307154> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<VTEX_ExtraDataEntry_t>::operator[](int nIndex)
{
} /* size: 0 */

// <001665FD> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<unsigned char>::operator[](int nIndex)
{
} /* size: 0 */

// <001665D7> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<CResourceDiskStructField>::operator[](int nIndex)
{
} /* size: 0 */

// <001665B1> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<CResourceDiskStruct>::operator[](int nIndex)
{
} /* size: 0 */

// <0016624C> ../public/resourcefile/resourcestream.h:376
inline void CResourceArray<CResourceDiskEnum>::operator[](int nIndex)
{
} /* size: 0 */

// <012779EE> ../public/resourcefile/resourcestream.h:382
inline void CResourceArray<SheetFrameImage_t>::operator[](int nIndex)
{
} /* size: 0 */

// <01858E22> ../public/resourcefile/resourcestream.h:400
inline void CResourceArray<RenderMeshBufferData_t>::operator=(const CLockedResource<RenderMeshBufferData_t>& lockedResource)
{
} /* size: 0 */

// <01858D82> ../public/resourcefile/resourcestream.h:400
inline void CResourceArray<RenderMeshInputLayoutField_t>::operator=(const CLockedResource<RenderMeshInputLayoutField_t>& lockedResource)
{
} /* size: 0 */

// <01858CEF> ../public/resourcefile/resourcestream.h:400
inline void CResourceArray<unsigned char>::operator=(const CLockedResource<unsigned char>& lockedResource)
{
} /* size: 0 */

// <00E02323> ../public/resourcefile/resourcestream.h:407
inline void CResourceArray<SheetSequenceFrame_t>::operator=(const CResourceArray<SheetSequenceFrame_t>& that)
{
} /* size: 0 */

// <00E022FD> ../public/resourcefile/resourcestream.h:407
inline void CResourceArray<SequenceFloatParam_t>::operator=(const CResourceArray<SequenceFloatParam_t>& that)
{
} /* size: 0 */

// <00E02277> ../public/resourcefile/resourcestream.h:407
inline void CResourceArray<SheetFrameImage_t>::operator=(const CResourceArray<SheetFrameImage_t>& that)
{
} /* size: 0 */

// <00E02221> ../public/resourcefile/resourcestream.h:407
inline void CResourceArray<SheetSequence_t>::operator=(const CResourceArray<SheetSequence_t>& that)
{
} /* size: 0 */

// <0020D617> ../public/resourcefile/resourcestream.h:407
inline void CResourceArray<CResourcePointer<CResourceString> >::operator=(const CResourceArray<CResourcePointer<CResourceString> >& that)
{
} /* size: 0 */

// <066E76BD> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<ResourceBlockEntry_t>::GetPtr()
{
} /* size: 0 */

// <05BB404D> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<ResourceEditStringData_t>::GetPtr()
{
} /* size: 0 */

// <04CB852A> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<RenderMeshInputLayoutField_t>::GetPtr()
{
} /* size: 0 */

// <04CB8494> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<RenderMeshBufferData_t>::GetPtr()
{
} /* size: 0 */

// <0254D854> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<unsigned char>::GetPtr()
{
} /* size: 0 */

// <023EA6FA> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<CResourceString>::GetPtr()
{
} /* size: 0 */

// <023E9A19> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<ResourceManifestGroup_t>::GetPtr()
{
} /* size: 0 */

// <0235430B> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<ResourceReferenceInfo_t>::GetPtr()
{
} /* size: 0 */

// <0126D3E5> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<SheetSequence_t>::GetPtr()
{
} /* size: 0 */

// <00F45173> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<SheetSequenceFrame_t>::GetPtr()
{
} /* size: 0 */

// <00E021D8> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<SequenceFloatParam_t>::GetPtr()
{
} /* size: 0 */

// <00304EBF> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<VTEX_ExtraDataEntry_t>::GetPtr()
{
} /* size: 0 */

// <0020D59A> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<CResourcePointer<CResourceString> >::GetPtr()
{
} /* size: 0 */

// <00165309> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<CResourceDiskStructField>::GetPtr()
{
} /* size: 0 */

// <001652F0> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<CResourceDiskStruct>::GetPtr()
{
} /* size: 0 */

// <001637BA> ../public/resourcefile/resourcestream.h:414
inline void CResourceArray<CResourceDiskEnum>::GetPtr()
{
} /* size: 0 */

// <0126A842> ../public/resourcefile/resourcestream.h:419
inline void CResourceArray<SheetFrameImage_t>::GetPtr()
{
} /* size: 0 */

// <04CBBBD8> ../public/resourcefile/resourcestream.h:424
inline void CResourceArray<unsigned char>::Base()
{
} /* size: 0 */

// <0030687A> ../public/resourcefile/resourcestream.h:424
inline void CResourceArray<unsigned int>::Base()
{
} /* size: 0 */

// <00306861> ../public/resourcefile/resourcestream.h:424
inline void CResourceArray<float>::Base()
{
} /* size: 0 */

// <0184E3CE> ../public/resourcefile/resourcestream.h:496
// member functions: 74
// member variables: 6
// vtable entry: 1
// class size: 32
class CResourceStream {
	void CResourceStream(CResourceStream* , const CResourceStream& );
	int ()(void) * * _vptr.CResourceStream; /* 0 8 */
	/* ../public/resourcefile/resourcestream.h:500 */
	void CResourceStream(CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:501 */
	virtual void ~CResourceStream(CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:505 */
	void* AllocateBytes(CResourceStream* , uint);
	/* ../public/resourcefile/resourcestream.h:506 */
	void WriteBytes(CResourceStream* , const void* , uint);
	/* ../public/resourcefile/resourcestream.h:791 */
	CLockedResource<float> WriteFloat(CResourceStream* , float);
	/* ../public/resourcefile/resourcestream.h:797 */
	CLockedResource<long long unsigned int> WriteU64(CResourceStream* , uint64);
	/* ../public/resourcefile/resourcestream.h:802 */
	CLockedResource<unsigned int> WriteU32(CResourceStream* , uint32);
	/* ../public/resourcefile/resourcestream.h:807 */
	CLockedResource<short unsigned int> WriteU16(CResourceStream* , uint16);
	/* ../public/resourcefile/resourcestream.h:812 */
	CLockedResource<unsigned char> WriteByte(CResourceStream* , byte);
	/* ../public/resourcefile/resourcestream.h:817 */
	CLockedResource<char> WriteString(CResourceStream* , const char* );
	/* ../public/resourcefile/resourcestream.h:834 */
	CLockedResource<char> WriteUniqueString(CResourceStream* , const char* );
	/* ../public/resourcefile/resourcestream.h:850 */
	CLockedResource<char> WriteStringMaxLen(CResourceStream* , const char* , int);
	/* ../public/resourcefile/resourcestream.h:523 */
	void Align(CResourceStream* , uint, int);
	/* ../public/resourcefile/resourcestream.h:769 */
	void AlignPointer(CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:871 */
	uint32 Tell(const CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:890 */
	uint32 Tell(const CResourceStream* , const void* );
	/* ../public/resourcefile/resourcestream.h:898 */
	const void* TellPtr(const CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:877 */
	void Rollback(CResourceStream* , uint32);
	/* ../public/resourcefile/resourcestream.h:883 */
	void Rollback(CResourceStream* , const void* );
	/* ../public/resourcefile/resourcestream.h:903 */
	void* Compile(CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:916 */
	uint GetTotalSize(const CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:537 */
	void Barrier(CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:538 */
	void PrintStats(CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:539 */
	void ClearStats(CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:922 */
	void* GetDataPtr(CResourceStream* , uint);
	/* ../public/resourcefile/resourcestream.h:935 */
	void Clear(CResourceStream* );
protected:
	/* ../public/resourcefile/resourcestream.h:547 */
	void EnsureAvailable(CResourceStream* , uint);
	/* ../public/resourcefile/resourcestream.h:558 */
	virtual void Commit(CResourceStream* , uint);
	uint8 * m_pData; /* 8 8 */
	uint m_nCommitted; /* 16 4 */
	uint m_nUsed; /* 20 4 */
	uint m_nAlignBits; /* 24 4 */
	uint m_nMaxAlignment; /* 28 4 */
	/* ../public/resourcefile/resourcestream.h:763 */
	CUnlockedResource<unsigned char> AllocateUnaligned<unsigned char>(CResourceStream* , uint);
	/* ../public/resourcefile/resourcestream.h:763 */
	CUnlockedResource<RenderMeshInputLayoutField_t> AllocateUnaligned<RenderMeshInputLayoutField_t>(CResourceStream* , uint);
	/* ../public/resourcefile/resourcestream.h:763 */
	CUnlockedResource<RenderMeshBufferData_t> AllocateUnaligned<RenderMeshBufferData_t>(CResourceStream* , uint);
	/* ../public/resourcefile/resourcestream.h:763 */
	CUnlockedResource<VBIBBlockHeader_t> AllocateUnaligned<VBIBBlockHeader_t>(CResourceStream* , uint);
	/* ../public/resourcefile/resourcestream.h:747 */
	CLockedResource<unsigned char> Allocate<unsigned char>(CResourceStream* , uint);
	/* ../public/resourcefile/resourcestream.h:747 */
	CLockedResource<RenderMeshInputLayoutField_t> Allocate<RenderMeshInputLayoutField_t>(CResourceStream* , uint);
	/* ../public/resourcefile/resourcestream.h:747 */
	CLockedResource<RenderMeshBufferData_t> Allocate<RenderMeshBufferData_t>(CResourceStream* , uint);
	/* ../public/resourcefile/resourcestream.h:747 */
	CLockedResource<VBIBBlockHeader_t> Allocate<VBIBBlockHeader_t>(CResourceStream* , uint);
	void CResourceStream(class CResourceStream *, const class CResourceStream  &); /* linkage=_ZN15CResourceStreamC4ERKS_ */
	void CResourceStream(class CResourceStream *); /* linkage=_ZN15CResourceStreamC4Ev */
	virtual void ~CResourceStream(class CResourceStream *); /* linkage=_ZN15CResourceStreamD4Ev */
	/* <66eedb4> resourcefile/resourcestream.cpp:192 */
	void * AllocateBytes(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream13AllocateBytesEj */
	void WriteBytes(class CResourceStream *, const void  *, uint); /* linkage=_ZN15CResourceStream10WriteBytesEPKvj */
	class CLockedResource<float> WriteFloat(class CResourceStream *, float); /* linkage=_ZN15CResourceStream10WriteFloatEf */
	class CLockedResource<long long unsigned int> WriteU64(class CResourceStream *, uint64); /* linkage=_ZN15CResourceStream8WriteU64Ey */
	class CLockedResource<unsigned int> WriteU32(class CResourceStream *, uint32); /* linkage=_ZN15CResourceStream8WriteU32Ej */
	class CLockedResource<short unsigned int> WriteU16(class CResourceStream *, uint16); /* linkage=_ZN15CResourceStream8WriteU16Et */
	class CLockedResource<unsigned char> WriteByte(class CResourceStream *, byte); /* linkage=_ZN15CResourceStream9WriteByteEh */
	class CLockedResource<char> WriteString(class CResourceStream *, const char  *); /* linkage=_ZN15CResourceStream11WriteStringEPKc */
	class CLockedResource<char> WriteUniqueString(class CResourceStream *, const char  *); /* linkage=_ZN15CResourceStream17WriteUniqueStringEPKc */
	class CLockedResource<char> WriteStringMaxLen(class CResourceStream *, const char  *, int); /* linkage=_ZN15CResourceStream17WriteStringMaxLenEPKci */
	void Align(class CResourceStream *, uint, int); /* linkage=_ZN15CResourceStream5AlignEji */
	void AlignPointer(class CResourceStream *); /* linkage=_ZN15CResourceStream12AlignPointerEv */
	uint32 Tell(const class CResourceStream  *); /* linkage=_ZNK15CResourceStream4TellEv */
	uint32 Tell(const class CResourceStream  *, const void  *); /* linkage=_ZNK15CResourceStream4TellEPKv */
	const void  * TellPtr(const class CResourceStream  *); /* linkage=_ZNK15CResourceStream7TellPtrEv */
	void Rollback(class CResourceStream *, uint32); /* linkage=_ZN15CResourceStream8RollbackEj */
	void Rollback(class CResourceStream *, const void  *); /* linkage=_ZN15CResourceStream8RollbackEPKv */
	void * Compile(class CResourceStream *); /* linkage=_ZN15CResourceStream7CompileEv */
	uint GetTotalSize(const class CResourceStream  *); /* linkage=_ZNK15CResourceStream12GetTotalSizeEv */
	void Barrier(class CResourceStream *); /* linkage=_ZN15CResourceStream7BarrierEv */
	void PrintStats(class CResourceStream *); /* linkage=_ZN15CResourceStream10PrintStatsEv */
	void ClearStats(class CResourceStream *); /* linkage=_ZN15CResourceStream10ClearStatsEv */
	void * GetDataPtr(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream10GetDataPtrEj */
	void Clear(class CResourceStream *); /* linkage=_ZN15CResourceStream5ClearEv */
	void EnsureAvailable(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream15EnsureAvailableEj */
	virtual void Commit(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream6CommitEj */
	class CUnlockedResource<unsigned char> AllocateUnaligned<unsigned char>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream17AllocateUnalignedIhEE17CUnlockedResourceIT_Ej */
	class CUnlockedResource<RenderMeshInputLayoutField_t> AllocateUnaligned<RenderMeshInputLayoutField_t>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream17AllocateUnalignedI28RenderMeshInputLayoutField_tEE17CUnlockedResourceIT_Ej */
	class CUnlockedResource<RenderMeshBufferData_t> AllocateUnaligned<RenderMeshBufferData_t>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream17AllocateUnalignedI22RenderMeshBufferData_tEE17CUnlockedResourceIT_Ej */
	class CUnlockedResource<VBIBBlockHeader_t> AllocateUnaligned<VBIBBlockHeader_t>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream17AllocateUnalignedI17VBIBBlockHeader_tEE17CUnlockedResourceIT_Ej */
	class CLockedResource<unsigned char> Allocate<unsigned char>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream8AllocateIhEE15CLockedResourceIT_Ej */
	class CLockedResource<RenderMeshInputLayoutField_t> Allocate<RenderMeshInputLayoutField_t>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream8AllocateI28RenderMeshInputLayoutField_tEE15CLockedResourceIT_Ej */
	class CLockedResource<RenderMeshBufferData_t> Allocate<RenderMeshBufferData_t>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream8AllocateI22RenderMeshBufferData_tEE15CLockedResourceIT_Ej */
	class CLockedResource<VBIBBlockHeader_t> Allocate<VBIBBlockHeader_t>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream8AllocateI17VBIBBlockHeader_tEE15CLockedResourceIT_Ej */
};

// <066EC83B> ../public/resourcefile/resourcestream.h:496
// member functions: 66
// member variables: 6
// vtable entry: 1
// class size: 32
class CResourceStream {
	void CResourceStream(CResourceStream* , const CResourceStream& );
	int ()(void) * * _vptr.CResourceStream; /* 0 8 */
	/* resourcefile/resourcestream.cpp:13 */
	void CResourceStream(CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:501 */
	virtual void ~CResourceStream(CResourceStream* );
	/* resourcefile/resourcestream.cpp:192 */
	void* AllocateBytes(CResourceStream* , uint);
	/* ../public/resourcefile/resourcestream.h:506 */
	void WriteBytes(CResourceStream* , const void* , uint);
	/* ../public/resourcefile/resourcestream.h:791 */
	CLockedResource<float> WriteFloat(CResourceStream* , float);
	/* ../public/resourcefile/resourcestream.h:797 */
	CLockedResource<long long unsigned int> WriteU64(CResourceStream* , uint64);
	/* ../public/resourcefile/resourcestream.h:802 */
	CLockedResource<unsigned int> WriteU32(CResourceStream* , uint32);
	/* ../public/resourcefile/resourcestream.h:807 */
	CLockedResource<short unsigned int> WriteU16(CResourceStream* , uint16);
	/* ../public/resourcefile/resourcestream.h:812 */
	CLockedResource<unsigned char> WriteByte(CResourceStream* , byte);
	/* ../public/resourcefile/resourcestream.h:817 */
	CLockedResource<char> WriteString(CResourceStream* , const char* );
	/* ../public/resourcefile/resourcestream.h:834 */
	CLockedResource<char> WriteUniqueString(CResourceStream* , const char* );
	/* ../public/resourcefile/resourcestream.h:850 */
	CLockedResource<char> WriteStringMaxLen(CResourceStream* , const char* , int);
	/* resourcefile/resourcestream.cpp:273 */
	void Align(CResourceStream* , uint, int);
	/* ../public/resourcefile/resourcestream.h:769 */
	void AlignPointer(CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:871 */
	uint32 Tell(const CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:890 */
	uint32 Tell(const CResourceStream* , const void* );
	/* ../public/resourcefile/resourcestream.h:898 */
	const void* TellPtr(const CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:877 */
	void Rollback(CResourceStream* , uint32);
	/* ../public/resourcefile/resourcestream.h:883 */
	void Rollback(CResourceStream* , const void* );
	/* ../public/resourcefile/resourcestream.h:903 */
	void* Compile(CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:916 */
	uint GetTotalSize(const CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:537 */
	void Barrier(CResourceStream* );
	/* resourcefile/resourcestream.cpp:294 */
	void PrintStats(CResourceStream* );
	/* resourcefile/resourcestream.cpp:299 */
	void ClearStats(CResourceStream* );
	/* ../public/resourcefile/resourcestream.h:922 */
	void* GetDataPtr(CResourceStream* , uint);
	/* ../public/resourcefile/resourcestream.h:935 */
	void Clear(CResourceStream* );
protected:
	/* ../public/resourcefile/resourcestream.h:547 */
	void EnsureAvailable(CResourceStream* , uint);
	/* ../public/resourcefile/resourcestream.h:558 */
	virtual void Commit(CResourceStream* , uint);
	uint8 * m_pData; /* 8 8 */
	uint m_nCommitted; /* 16 4 */
	uint m_nUsed; /* 20 4 */
	uint m_nAlignBits; /* 24 4 */
	uint m_nMaxAlignment; /* 28 4 */
	void CResourceStream(class CResourceStream *, const class CResourceStream  &); /* linkage=_ZN15CResourceStreamC4ERKS_ */
	void CResourceStream(class CResourceStream *); /* linkage=_ZN15CResourceStreamC4Ev */
	virtual void ~CResourceStream(class CResourceStream *); /* linkage=_ZN15CResourceStreamD4Ev */
	/* <66eedb4> resourcefile/resourcestream.cpp:192 */
	void * AllocateBytes(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream13AllocateBytesEj */
	void WriteBytes(class CResourceStream *, const void  *, uint); /* linkage=_ZN15CResourceStream10WriteBytesEPKvj */
	class CLockedResource<float> WriteFloat(class CResourceStream *, float); /* linkage=_ZN15CResourceStream10WriteFloatEf */
	class CLockedResource<long long unsigned int> WriteU64(class CResourceStream *, uint64); /* linkage=_ZN15CResourceStream8WriteU64Ey */
	class CLockedResource<unsigned int> WriteU32(class CResourceStream *, uint32); /* linkage=_ZN15CResourceStream8WriteU32Ej */
	class CLockedResource<short unsigned int> WriteU16(class CResourceStream *, uint16); /* linkage=_ZN15CResourceStream8WriteU16Et */
	class CLockedResource<unsigned char> WriteByte(class CResourceStream *, byte); /* linkage=_ZN15CResourceStream9WriteByteEh */
	class CLockedResource<char> WriteString(class CResourceStream *, const char  *); /* linkage=_ZN15CResourceStream11WriteStringEPKc */
	class CLockedResource<char> WriteUniqueString(class CResourceStream *, const char  *); /* linkage=_ZN15CResourceStream17WriteUniqueStringEPKc */
	class CLockedResource<char> WriteStringMaxLen(class CResourceStream *, const char  *, int); /* linkage=_ZN15CResourceStream17WriteStringMaxLenEPKci */
	void Align(class CResourceStream *, uint, int); /* linkage=_ZN15CResourceStream5AlignEji */
	void AlignPointer(class CResourceStream *); /* linkage=_ZN15CResourceStream12AlignPointerEv */
	uint32 Tell(const class CResourceStream  *); /* linkage=_ZNK15CResourceStream4TellEv */
	uint32 Tell(const class CResourceStream  *, const void  *); /* linkage=_ZNK15CResourceStream4TellEPKv */
	const void  * TellPtr(const class CResourceStream  *); /* linkage=_ZNK15CResourceStream7TellPtrEv */
	void Rollback(class CResourceStream *, uint32); /* linkage=_ZN15CResourceStream8RollbackEj */
	void Rollback(class CResourceStream *, const void  *); /* linkage=_ZN15CResourceStream8RollbackEPKv */
	void * Compile(class CResourceStream *); /* linkage=_ZN15CResourceStream7CompileEv */
	uint GetTotalSize(const class CResourceStream  *); /* linkage=_ZNK15CResourceStream12GetTotalSizeEv */
	void Barrier(class CResourceStream *); /* linkage=_ZN15CResourceStream7BarrierEv */
	void PrintStats(class CResourceStream *); /* linkage=_ZN15CResourceStream10PrintStatsEv */
	void ClearStats(class CResourceStream *); /* linkage=_ZN15CResourceStream10ClearStatsEv */
	void * GetDataPtr(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream10GetDataPtrEj */
	void Clear(class CResourceStream *); /* linkage=_ZN15CResourceStream5ClearEv */
	void EnsureAvailable(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream15EnsureAvailableEj */
	virtual void Commit(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream6CommitEj */
	class CUnlockedResource<unsigned char> AllocateUnaligned<unsigned char>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream17AllocateUnalignedIhEE17CUnlockedResourceIT_Ej */
	class CUnlockedResource<RenderMeshInputLayoutField_t> AllocateUnaligned<RenderMeshInputLayoutField_t>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream17AllocateUnalignedI28RenderMeshInputLayoutField_tEE17CUnlockedResourceIT_Ej */
	class CUnlockedResource<RenderMeshBufferData_t> AllocateUnaligned<RenderMeshBufferData_t>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream17AllocateUnalignedI22RenderMeshBufferData_tEE17CUnlockedResourceIT_Ej */
	class CUnlockedResource<VBIBBlockHeader_t> AllocateUnaligned<VBIBBlockHeader_t>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream17AllocateUnalignedI17VBIBBlockHeader_tEE17CUnlockedResourceIT_Ej */
	class CLockedResource<unsigned char> Allocate<unsigned char>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream8AllocateIhEE15CLockedResourceIT_Ej */
	class CLockedResource<RenderMeshInputLayoutField_t> Allocate<RenderMeshInputLayoutField_t>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream8AllocateI28RenderMeshInputLayoutField_tEE15CLockedResourceIT_Ej */
	class CLockedResource<RenderMeshBufferData_t> Allocate<RenderMeshBufferData_t>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream8AllocateI22RenderMeshBufferData_tEE15CLockedResourceIT_Ej */
	class CLockedResource<VBIBBlockHeader_t> Allocate<VBIBBlockHeader_t>(class CResourceStream *, uint); /* linkage=_ZN15CResourceStream8AllocateI17VBIBBlockHeader_tEE15CLockedResourceIT_Ej */
};

// <066EE7A0> ../public/resourcefile/resourcestream.h:501
void CResourceStream::~CResourceStream()
{
} /* size: 0 */

// <066EE770> ../public/resourcefile/resourcestream.h:501
inline void CResourceStream::~CResourceStream()
{
} /* size: 0 */

// <066EE6FD> ../public/resourcefile/resourcestream.h:547
// variables: 3
inline void CResourceStream::EnsureAvailable(uint nAddCapacity)
{
	const char   __FUNCTION__; // 32647
	uint nNewCommit; // 550
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 549
	}
} /* size: 0, variables: 2 */

// <066EBD93> ../public/resourcefile/resourcestream.h:573
// member functions: 18
// member variables: 3
// vtable entry: 1
// class size: 40
class CResourceStreamVM : public CResourceStream {
	/* ../public/resourcefile/resourcestream.h:585 */
	enum {
		COMMIT_STEP = 65536,
	};
public:
	/* class CResourceStream <ancestor>; */ /* 0 32 */
	void CResourceStreamVM(CResourceStreamVM* , const CResourceStreamVM& );
	/* resourcefile/resourcestream.cpp:23 */
	void CResourceStreamVM(CResourceStreamVM* , uint);
	/* resourcefile/resourcestream.cpp:35 */
	virtual void ~CResourceStreamVM(CResourceStreamVM* );
	/* resourcefile/resourcestream.cpp:165 */
	void CloneStream(CResourceStreamVM* , CResourceStreamVM& );
protected:
	/* resourcefile/resourcestream.cpp:201 */
	virtual void Commit(CResourceStreamVM* , uint);
	/* resourcefile/resourcestream.cpp:120 */
	void ReserveVirtualMemory(CResourceStreamVM* , uint);
	/* resourcefile/resourcestream.cpp:145 */
	void ReleaseVirtualMemory(CResourceStreamVM* );
	uint m_nReserved; /* 32 4 */
	uint32 m_nAllocStatsId; /* 36 4 */
	/* resourcefile/resourcestream.cpp:233 */
	void RegisterAllocation(CResourceStreamVM* );
	/* resourcefile/resourcestream.cpp:253 */
	void RegisterDeallocation(CResourceStreamVM* );
	void CResourceStreamVM(class CResourceStreamVM *, const class CResourceStreamVM  &); /* linkage=_ZN17CResourceStreamVMC4ERKS_ */
	void CResourceStreamVM(class CResourceStreamVM *, uint); /* linkage=_ZN17CResourceStreamVMC4Ej */
	virtual void ~CResourceStreamVM(class CResourceStreamVM *); /* linkage=_ZN17CResourceStreamVMD4Ev */
	void CloneStream(class CResourceStreamVM *, class CResourceStreamVM &); /* linkage=_ZN17CResourceStreamVM11CloneStreamERS_ */
	virtual void Commit(class CResourceStreamVM *, uint); /* linkage=_ZN17CResourceStreamVM6CommitEj */
	void ReserveVirtualMemory(class CResourceStreamVM *, uint); /* linkage=_ZN17CResourceStreamVM20ReserveVirtualMemoryEj */
	/* <66eed63> resourcefile/resourcestream.cpp:145 */
	void ReleaseVirtualMemory(class CResourceStreamVM *); /* linkage=_ZN17CResourceStreamVM20ReleaseVirtualMemoryEv */
	/* <66eee74> resourcefile/resourcestream.cpp:233 */
	void RegisterAllocation(class CResourceStreamVM *); /* linkage=_ZN17CResourceStreamVM18RegisterAllocationEv */
	void RegisterDeallocation(class CResourceStreamVM *); /* linkage=_ZN17CResourceStreamVM20RegisterDeallocationEv */
};

// <01850659> ../public/resourcefile/resourcestream.h:577
void CResourceStreamVM::CResourceStreamVM(uint nReserveSize)
{
} /* size: 0 */

// <018505E1> ../public/resourcefile/resourcestream.h:578
void CResourceStreamVM::~CResourceStreamVM()
{
} /* size: 0 */

// <066ECDE1> ../public/resourcefile/resourcestream.h:599
// member functions: 16
// member variables: 2
// vtable entry: 1
// class size: 40
class CResourceStreamFixed : public CResourceStream {
public:
	/* class CResourceStream <ancestor>; */ /* 0 32 */
	void CResourceStreamFixed(CResourceStreamFixed* , const CResourceStreamFixed& );
private:
	bool m_bOwnMemory; /* 32 1 */
	/* resourcefile/resourcestream.cpp:52 */
	void CResourceStreamFixed(CResourceStreamFixed* , uint);
	/* resourcefile/resourcestream.cpp:42 */
	void CResourceStreamFixed(CResourceStreamFixed* , void* , uint);
	/* resourcefile/resourcestream.cpp:61 */
	virtual void ~CResourceStreamFixed(CResourceStreamFixed* );
	/* ../public/resourcefile/resourcestream.h:607 */
	uint8* Detach(CResourceStreamFixed* );
	/* ../public/resourcefile/resourcestream.h:977 */
	int GetSlack(CResourceStreamFixed* );
	/* ../public/resourcefile/resourcestream.h:615 */
	uint8* GetEnd(CResourceStreamFixed* );
	/* resourcefile/resourcestream.cpp:73 */
	virtual void Commit(CResourceStreamFixed* , uint);
	void CResourceStreamFixed(class CResourceStreamFixed *, const class CResourceStreamFixed  &); /* linkage=_ZN20CResourceStreamFixedC4ERKS_ */
	void CResourceStreamFixed(class CResourceStreamFixed *, uint); /* linkage=_ZN20CResourceStreamFixedC4Ej */
	void CResourceStreamFixed(class CResourceStreamFixed *, void *, uint); /* linkage=_ZN20CResourceStreamFixedC4EPvj */
	virtual void ~CResourceStreamFixed(class CResourceStreamFixed *); /* linkage=_ZN20CResourceStreamFixedD4Ev */
	uint8 * Detach(class CResourceStreamFixed *); /* linkage=_ZN20CResourceStreamFixed6DetachEv */
	int GetSlack(class CResourceStreamFixed *); /* linkage=_ZN20CResourceStreamFixed8GetSlackEv */
	uint8 * GetEnd(class CResourceStreamFixed *); /* linkage=_ZN20CResourceStreamFixed6GetEndEv */
	/* <66eec33> resourcefile/resourcestream.cpp:73 */
	virtual void Commit(class CResourceStreamFixed *, uint); /* linkage=_ZN20CResourceStreamFixed6CommitEj */
};

// <066ECCD9> ../public/resourcefile/resourcestream.h:619
// member functions: 12
// member variable: 1
// vtable entry: 1
// class size: 32
class CResourceStreamGrowable : public CResourceStream {
public:
	/* class CResourceStream <ancestor>; */ /* 0 32 */
	void CResourceStreamGrowable(CResourceStreamGrowable* , const CResourceStreamGrowable& );
	/* resourcefile/resourcestream.cpp:82 */
	void CResourceStreamGrowable(CResourceStreamGrowable* , uint);
	/* resourcefile/resourcestream.cpp:97 */
	virtual void ~CResourceStreamGrowable(CResourceStreamGrowable* );
	/* resourcefile/resourcestream.cpp:103 */
	virtual void Commit(CResourceStreamGrowable* , uint);
	/* ../public/resourcefile/resourcestream.h:626 */
	uint GetAllocatedSize(const CResourceStreamGrowable* );
	/* ../public/resourcefile/resourcestream.h:627 */
	uint8* Detach(CResourceStreamGrowable* );
	void CResourceStreamGrowable(class CResourceStreamGrowable *, const class CResourceStreamGrowable  &); /* linkage=_ZN23CResourceStreamGrowableC4ERKS_ */
	void CResourceStreamGrowable(class CResourceStreamGrowable *, uint); /* linkage=_ZN23CResourceStreamGrowableC4Ej */
	virtual void ~CResourceStreamGrowable(class CResourceStreamGrowable *); /* linkage=_ZN23CResourceStreamGrowableD4Ev */
	/* <66ee9e4> resourcefile/resourcestream.cpp:103 */
	virtual void Commit(class CResourceStreamGrowable *, uint); /* linkage=_ZN23CResourceStreamGrowable6CommitEj */
	uint GetAllocatedSize(const class CResourceStreamGrowable  *); /* linkage=_ZNK23CResourceStreamGrowable16GetAllocatedSizeEv */
	uint8 * Detach(class CResourceStreamGrowable *); /* linkage=_ZN23CResourceStreamGrowable6DetachEv */
};

// <00E0391A> ../public/resourcefile/resourcestream.h:663
void CResourceString::CResourceString()
{
} /* size: 0 */

// <00E038FC> ../public/resourcefile/resourcestream.h:663
inline void CResourceString::CResourceString()
{
} /* size: 0 */

// <005DB774> ../public/resourcefile/resourcestream.h:663
// member functions: 21
// member variable: 1
// class size: 4
class CResourceString : public CResourcePointer<char> {
public:
	/* class CResourcePointer<char> <ancestor>; */ /* 0 4 */
	/* ../public/resourcefile/resourcestream.h:666 */
	CResourceString& operator=(CResourceString* , const CLockedResource<char>& );
	/* ../public/resourcefile/resourcestream.h:672 */
	CResourceString& operator=(CResourceString* , const CResourcePointerBase& );
	/* ../public/resourcefile/resourcestream.h:680 */
	const char* GetPtr(const CResourceString* );
	/* ../public/resourcefile/resourcestream.h:692 */
	char* GetPtr(CResourceString* );
	/* ../public/resourcefile/resourcestream.h:704 */
	const char* operator char const*(const CResourceString* );
	/* ../public/resourcefile/resourcestream.h:716 */
	void Unsafe_OutOfBoundsCopy(CResourceString* , const char* );
	/* ../public/resourcefile/resourcestream.h:724 */
	bool IsEmpty(const CResourceString* );
	/* ../public/resourcefile/resourcestream.h:729 */
	uint GetDataSize(const CResourceString* );
private:
	/* ../public/resourcefile/resourcestream.h:738 */
	bool operator==(const CResourceString* , const CResourceString& );
	/* ../public/resourcefile/resourcestream.h:739 */
	bool operator!=(const CResourceString* , const CResourceString& );
	class CResourceString & operator=(class CResourceString *, const class CLockedResource<char>  &); /* linkage=_ZN15CResourceStringaSERK15CLockedResourceIcE */
	class CResourceString & operator=(class CResourceString *, const class CResourcePointerBase  &); /* linkage=_ZN15CResourceStringaSERK20CResourcePointerBase */
	const char  * GetPtr(const class CResourceString  *); /* linkage=_ZNK15CResourceString6GetPtrEv */
	char * GetPtr(class CResourceString *); /* linkage=_ZN15CResourceString6GetPtrEv */
	const char  * operator char const*(const class CResourceString  *); /* linkage=_ZNK15CResourceStringcvPKcEv */
	void Unsafe_OutOfBoundsCopy(class CResourceString *, const char  *); /* linkage=_ZN15CResourceString22Unsafe_OutOfBoundsCopyEPKc */
	bool IsEmpty(const class CResourceString  *); /* linkage=_ZNK15CResourceString7IsEmptyEv */
	uint GetDataSize(const class CResourceString  *); /* linkage=_ZNK15CResourceString11GetDataSizeEv */
	bool operator==(const class CResourceString  *, const class CResourceString  &); /* linkage=_ZNK15CResourceStringeqERKS_ */
	bool operator!=(const class CResourceString  *, const class CResourceString  &); /* linkage=_ZNK15CResourceStringneERKS_ */
	void CResourceString(class CResourceString *); /* linkage=_ZN15CResourceStringC4Ev */
};

// <0016EBFB> ../public/resourcefile/resourcestream.h:680
inline void CResourceString::GetPtr()
{
} /* size: 0 */

// <05BE1D90> ../public/resourcefile/resourcestream.h:704
inline void operator char CResourceString::const*()
{
} /* size: 0 */

// <01858EB5> ../public/resourcefile/resourcestream.h:747
// variables: 3
inline void CResourceStream::Allocate<VBIBBlockHeader_t>(uint nCount)
{
	uint nAlignment; // 750
	VBIBBlockHeader_t* ptr; // 752
	{
		uint i; // 754
	}
} /* size: 0, variables: 2 */

// <01858E48> ../public/resourcefile/resourcestream.h:747
// variables: 3
inline void CResourceStream::Allocate<RenderMeshBufferData_t>(uint nCount)
{
	uint nAlignment; // 750
	RenderMeshBufferData_t* ptr; // 752
	{
		uint i; // 754
	}
} /* size: 0, variables: 2 */

// <01858DA8> ../public/resourcefile/resourcestream.h:747
// variables: 3
inline void CResourceStream::Allocate<RenderMeshInputLayoutField_t>(uint nCount)
{
	uint nAlignment; // 750
	RenderMeshInputLayoutField_t* ptr; // 752
	{
		uint i; // 754
	}
} /* size: 0, variables: 2 */

// <01858D15> ../public/resourcefile/resourcestream.h:747
// variables: 3
inline void Allocate<unsigned CResourceStream::char>(uint nCount)
{
	uint nAlignment; // 750
	unsigned char* ptr; // 752
	{
		uint i; // 754
	}
} /* size: 0, variables: 2 */

// <01856584> ../public/resourcefile/resourcestream.h:763
inline void CResourceStream::AllocateUnaligned<VBIBBlockHeader_t>(uint nCount)
{
} /* size: 0 */

// <0185648C> ../public/resourcefile/resourcestream.h:763
inline void CResourceStream::AllocateUnaligned<RenderMeshBufferData_t>(uint nCount)
{
} /* size: 0 */

// <01856349> ../public/resourcefile/resourcestream.h:763
inline void CResourceStream::AllocateUnaligned<RenderMeshInputLayoutField_t>(uint nCount)
{
} /* size: 0 */

// <01856253> ../public/resourcefile/resourcestream.h:763
inline void AllocateUnaligned<unsigned CResourceStream::char>(uint nCount)
{
} /* size: 0 */

// <018758DD> ../public/resourcefile/resourcestream.h:871
inline void CResourceStream::Tell()
{
} /* size: 0 */

// <018758B2> ../public/resourcefile/resourcestream.h:922
inline void* CResourceStream::GetDataPtr(uint nOffset)
{
} /* size: 0 */

// <01853CA1> ../public/resourcefile/resourcestream.h:984
void CUnlockedResource<VBIBBlockHeader_t>::CUnlockedResource(CResourceStream* pStream, VBIBBlockHeader_t* pData, uint nCount)
{
} /* size: 0 */

// <01853BF2> ../public/resourcefile/resourcestream.h:984
void CUnlockedResource<RenderMeshBufferData_t>::CUnlockedResource(CResourceStream* pStream, RenderMeshBufferData_t* pData, uint nCount)
{
} /* size: 0 */

// <01853B13> ../public/resourcefile/resourcestream.h:984
void CUnlockedResource<RenderMeshInputLayoutField_t>::CUnlockedResource(CResourceStream* pStream, RenderMeshInputLayoutField_t* pData, uint nCount)
{
} /* size: 0 */

// <01853A94> ../public/resourcefile/resourcestream.h:984
void CUnlockedResource<unsigned char>::CUnlockedResource(CResourceStream* pStream, unsigned char* pData, uint nCount)
{
} /* size: 0 */

// <01853C48> ../public/resourcefile/resourcestream.h:994
inline void CUnlockedResource<VBIBBlockHeader_t>::GetPtr()
{
} /* size: 0 */

// <01853B99> ../public/resourcefile/resourcestream.h:994
inline void CUnlockedResource<RenderMeshBufferData_t>::GetPtr()
{
} /* size: 0 */

// <01853ABA> ../public/resourcefile/resourcestream.h:994
inline void CUnlockedResource<RenderMeshInputLayoutField_t>::GetPtr()
{
} /* size: 0 */

// <01853A3B> ../public/resourcefile/resourcestream.h:994
inline void CUnlockedResource<unsigned char>::GetPtr()
{
} /* size: 0 */

// <001E7397> ../public/resourcefile/resourcestream.h:1019
// member function: 1
// class size: 1
class CSchemaTypeOf<CResourcePointer<CResourceString> > {
	/* ../public/resourcefile/resourcestream.h:1019 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00DDD683> ../public/resourcefile/resourcestream.h:1020
// member function: 1
// class size: 1
class CSchemaTypeOf<CResourceArray<SheetSequenceFrame_t> > {
	/* ../public/resourcefile/resourcestream.h:1020 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00DDD6B6> ../public/resourcefile/resourcestream.h:1020
// member function: 1
// class size: 1
class CSchemaTypeOf<CResourceArray<SequenceFloatParam_t> > {
	/* ../public/resourcefile/resourcestream.h:1020 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00DDD6E9> ../public/resourcefile/resourcestream.h:1020
// member function: 1
// class size: 1
class CSchemaTypeOf<CResourceArray<SheetFrameImage_t> > {
	/* ../public/resourcefile/resourcestream.h:1020 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00DDD74D> ../public/resourcefile/resourcestream.h:1020
// member function: 1
// class size: 1
class CSchemaTypeOf<CResourceArray<SheetSequence_t> > {
	/* ../public/resourcefile/resourcestream.h:1020 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <001E69FD> ../public/resourcefile/resourcestream.h:1020
// member function: 1
// class size: 1
class CSchemaTypeOf<CResourceArray<CResourcePointer<CResourceString> > > {
	/* ../public/resourcefile/resourcestream.h:1020 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00DE79DD> ../public/resourcefile/resourcestream.h:1021
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <00D81011> ../public/resourcefile/resourcestream.h:1021
// member function: 1
// class size: 1
class CSchemaTypeOf<CResourceString> {
	/* ../public/resourcefile/resourcestream.h:1021 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

