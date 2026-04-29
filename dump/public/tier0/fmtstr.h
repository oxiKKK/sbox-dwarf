
//
// public/tier0/fmtstr.h
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
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 47
//	classes: 8
//

// <000802FF> ../public/tier0/fmtstr.h:25
// member functions: 40
// member variable: 1
// class size: 264
class CFmtStrN<256> {
	/* ../public/tier0/fmtstr.h:28 */
	void CFmtStrN(CFmtStrN<256>* );
	/* ../public/tier0/fmtstr.h:32 */
	void ~CFmtStrN(CFmtStrN<256>* );
	/* ../public/tier0/fmtstr.h:44 */
	void CFmtStrN(CFmtStrN<256>* , const char* , ...);
	/* ../public/tier0/fmtstr.h:53 */
	const char* sprintf(CFmtStrN<256>* , const char* , ...);
	/* ../public/tier0/fmtstr.h:63 */
	const char* Format(CFmtStrN<256>* , const char* , ...);
	/* ../public/tier0/fmtstr.h:73 */
	const char* sprintf_argv(CFmtStrN<256>* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/tier0/fmtstr.h:80 */
	const char* Get(const CFmtStrN<256>* );
	/* ../public/tier0/fmtstr.h:81 */
	const char* String(const CFmtStrN<256>* );
	/* ../public/tier0/fmtstr.h:83 */
	const char* operator char const*(const CFmtStrN<256>* );
	/* ../public/tier0/fmtstr.h:84 */
	char* Access(CFmtStrN<256>* );
	/* ../public/tier0/fmtstr.h:86 */
	int Length(const CFmtStrN<256>* );
	/* ../public/tier0/fmtstr.h:87 */
	void SetLength(CFmtStrN<256>* , int);
	/* ../public/tier0/fmtstr.h:89 */
	void Clear(CFmtStrN<256>* );
	/* ../public/tier0/fmtstr.h:91 */
	CFmtStrN<256>& operator=(CFmtStrN<256>* , const char* );
	/* ../public/tier0/fmtstr.h:97 */
	CFmtStrN<256>& operator+=(CFmtStrN<256>* , const char* );
	/* ../public/tier0/fmtstr.h:103 */
	void AppendFormat(CFmtStrN<256>* , const char* , ...);
	/* ../public/tier0/fmtstr.h:111 */
	void AppendFormatV(CFmtStrN<256>* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/tier0/fmtstr.h:116 */
	void Append(CFmtStrN<256>* , const char* );
	/* ../public/tier0/fmtstr.h:122 */
	void Append(CFmtStrN<256>* , char);
	/* ../public/tier0/fmtstr.h:127 */
	void AppendIndent(CFmtStrN<256>* , uint32, char);
private:
	CBufferStringN<256> m_string; /* 0 264 */
	void CFmtStrN(class CFmtStrN<256> *); /* linkage=_ZN8CFmtStrNILi256EEC4Ev */
	void ~CFmtStrN(class CFmtStrN<256> *); /* linkage=_ZN8CFmtStrNILi256EED4Ev */
	void CFmtStrN(class CFmtStrN<256> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi256EEC4EPKcz */
	const char  * sprintf(class CFmtStrN<256> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi256EE7sprintfEPKcz */
	const char  * Format(class CFmtStrN<256> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi256EE6FormatEPKcz */
	const char  * sprintf_argv(class CFmtStrN<256> *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN8CFmtStrNILi256EE12sprintf_argvEPKcP13__va_list_tag */
	const char  * Get(const class CFmtStrN<256>  *); /* linkage=_ZNK8CFmtStrNILi256EE3GetEv */
	const char  * String(const class CFmtStrN<256>  *); /* linkage=_ZNK8CFmtStrNILi256EE6StringEv */
	const char  * operator char const*(const class CFmtStrN<256>  *); /* linkage=_ZNK8CFmtStrNILi256EEcvPKcEv */
	char * Access(class CFmtStrN<256> *); /* linkage=_ZN8CFmtStrNILi256EE6AccessEv */
	int Length(const class CFmtStrN<256>  *); /* linkage=_ZNK8CFmtStrNILi256EE6LengthEv */
	void SetLength(class CFmtStrN<256> *, int); /* linkage=_ZN8CFmtStrNILi256EE9SetLengthEi */
	void Clear(class CFmtStrN<256> *); /* linkage=_ZN8CFmtStrNILi256EE5ClearEv */
	class CFmtStrN<256> & operator=(class CFmtStrN<256> *, const char  *); /* linkage=_ZN8CFmtStrNILi256EEaSEPKc */
	class CFmtStrN<256> & operator+=(class CFmtStrN<256> *, const char  *); /* linkage=_ZN8CFmtStrNILi256EEpLEPKc */
	void AppendFormat(class CFmtStrN<256> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi256EE12AppendFormatEPKcz */
	void AppendFormatV(class CFmtStrN<256> *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN8CFmtStrNILi256EE13AppendFormatVEPKcP13__va_list_tag */
	void Append(class CFmtStrN<256> *, const char  *); /* linkage=_ZN8CFmtStrNILi256EE6AppendEPKc */
	void Append(class CFmtStrN<256> *, char); /* linkage=_ZN8CFmtStrNILi256EE6AppendEc */
	void AppendIndent(class CFmtStrN<256> *, uint32, char); /* linkage=_ZN8CFmtStrNILi256EE12AppendIndentEjc */
};

// <000805EB> ../public/tier0/fmtstr.h:25
// member functions: 40
// member variable: 1
// class size: 1,032
class CFmtStrN<1024> {
	/* ../public/tier0/fmtstr.h:28 */
	void CFmtStrN(CFmtStrN<1024>* );
	/* ../public/tier0/fmtstr.h:32 */
	void ~CFmtStrN(CFmtStrN<1024>* );
	/* ../public/tier0/fmtstr.h:44 */
	void CFmtStrN(CFmtStrN<1024>* , const char* , ...);
	/* ../public/tier0/fmtstr.h:53 */
	const char* sprintf(CFmtStrN<1024>* , const char* , ...);
	/* ../public/tier0/fmtstr.h:63 */
	const char* Format(CFmtStrN<1024>* , const char* , ...);
	/* ../public/tier0/fmtstr.h:73 */
	const char* sprintf_argv(CFmtStrN<1024>* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/tier0/fmtstr.h:80 */
	const char* Get(const CFmtStrN<1024>* );
	/* ../public/tier0/fmtstr.h:81 */
	const char* String(const CFmtStrN<1024>* );
	/* ../public/tier0/fmtstr.h:83 */
	const char* operator char const*(const CFmtStrN<1024>* );
	/* ../public/tier0/fmtstr.h:84 */
	char* Access(CFmtStrN<1024>* );
	/* ../public/tier0/fmtstr.h:86 */
	int Length(const CFmtStrN<1024>* );
	/* ../public/tier0/fmtstr.h:87 */
	void SetLength(CFmtStrN<1024>* , int);
	/* ../public/tier0/fmtstr.h:89 */
	void Clear(CFmtStrN<1024>* );
	/* ../public/tier0/fmtstr.h:91 */
	CFmtStrN<1024>& operator=(CFmtStrN<1024>* , const char* );
	/* ../public/tier0/fmtstr.h:97 */
	CFmtStrN<1024>& operator+=(CFmtStrN<1024>* , const char* );
	/* ../public/tier0/fmtstr.h:103 */
	void AppendFormat(CFmtStrN<1024>* , const char* , ...);
	/* ../public/tier0/fmtstr.h:111 */
	void AppendFormatV(CFmtStrN<1024>* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/tier0/fmtstr.h:116 */
	void Append(CFmtStrN<1024>* , const char* );
	/* ../public/tier0/fmtstr.h:122 */
	void Append(CFmtStrN<1024>* , char);
	/* ../public/tier0/fmtstr.h:127 */
	void AppendIndent(CFmtStrN<1024>* , uint32, char);
private:
	CBufferStringN<1024> m_string; /* 0 1032 */
	void CFmtStrN(class CFmtStrN<1024> *); /* linkage=_ZN8CFmtStrNILi1024EEC4Ev */
	void ~CFmtStrN(class CFmtStrN<1024> *); /* linkage=_ZN8CFmtStrNILi1024EED4Ev */
	void CFmtStrN(class CFmtStrN<1024> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi1024EEC4EPKcz */
	const char  * sprintf(class CFmtStrN<1024> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi1024EE7sprintfEPKcz */
	const char  * Format(class CFmtStrN<1024> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi1024EE6FormatEPKcz */
	const char  * sprintf_argv(class CFmtStrN<1024> *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN8CFmtStrNILi1024EE12sprintf_argvEPKcP13__va_list_tag */
	const char  * Get(const class CFmtStrN<1024>  *); /* linkage=_ZNK8CFmtStrNILi1024EE3GetEv */
	const char  * String(const class CFmtStrN<1024>  *); /* linkage=_ZNK8CFmtStrNILi1024EE6StringEv */
	const char  * operator char const*(const class CFmtStrN<1024>  *); /* linkage=_ZNK8CFmtStrNILi1024EEcvPKcEv */
	char * Access(class CFmtStrN<1024> *); /* linkage=_ZN8CFmtStrNILi1024EE6AccessEv */
	int Length(const class CFmtStrN<1024>  *); /* linkage=_ZNK8CFmtStrNILi1024EE6LengthEv */
	void SetLength(class CFmtStrN<1024> *, int); /* linkage=_ZN8CFmtStrNILi1024EE9SetLengthEi */
	void Clear(class CFmtStrN<1024> *); /* linkage=_ZN8CFmtStrNILi1024EE5ClearEv */
	class CFmtStrN<1024> & operator=(class CFmtStrN<1024> *, const char  *); /* linkage=_ZN8CFmtStrNILi1024EEaSEPKc */
	class CFmtStrN<1024> & operator+=(class CFmtStrN<1024> *, const char  *); /* linkage=_ZN8CFmtStrNILi1024EEpLEPKc */
	void AppendFormat(class CFmtStrN<1024> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi1024EE12AppendFormatEPKcz */
	void AppendFormatV(class CFmtStrN<1024> *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN8CFmtStrNILi1024EE13AppendFormatVEPKcP13__va_list_tag */
	void Append(class CFmtStrN<1024> *, const char  *); /* linkage=_ZN8CFmtStrNILi1024EE6AppendEPKc */
	void Append(class CFmtStrN<1024> *, char); /* linkage=_ZN8CFmtStrNILi1024EE6AppendEc */
	void AppendIndent(class CFmtStrN<1024> *, uint32, char); /* linkage=_ZN8CFmtStrNILi1024EE12AppendIndentEjc */
};

// <0011D669> ../public/tier0/fmtstr.h:25
// member functions: 40
// member variable: 1
// class size: 2,056
class CFmtStrN<2048> {
	/* ../public/tier0/fmtstr.h:28 */
	void CFmtStrN(CFmtStrN<2048>* );
	/* ../public/tier0/fmtstr.h:32 */
	void ~CFmtStrN(CFmtStrN<2048>* );
	/* ../public/tier0/fmtstr.h:44 */
	void CFmtStrN(CFmtStrN<2048>* , const char* , ...);
	/* ../public/tier0/fmtstr.h:53 */
	const char* sprintf(CFmtStrN<2048>* , const char* , ...);
	/* ../public/tier0/fmtstr.h:63 */
	const char* Format(CFmtStrN<2048>* , const char* , ...);
	/* ../public/tier0/fmtstr.h:73 */
	const char* sprintf_argv(CFmtStrN<2048>* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/tier0/fmtstr.h:80 */
	const char* Get(const CFmtStrN<2048>* );
	/* ../public/tier0/fmtstr.h:81 */
	const char* String(const CFmtStrN<2048>* );
	/* ../public/tier0/fmtstr.h:83 */
	const char* operator char const*(const CFmtStrN<2048>* );
	/* ../public/tier0/fmtstr.h:84 */
	char* Access(CFmtStrN<2048>* );
	/* ../public/tier0/fmtstr.h:86 */
	int Length(const CFmtStrN<2048>* );
	/* ../public/tier0/fmtstr.h:87 */
	void SetLength(CFmtStrN<2048>* , int);
	/* ../public/tier0/fmtstr.h:89 */
	void Clear(CFmtStrN<2048>* );
	/* ../public/tier0/fmtstr.h:91 */
	CFmtStrN<2048>& operator=(CFmtStrN<2048>* , const char* );
	/* ../public/tier0/fmtstr.h:97 */
	CFmtStrN<2048>& operator+=(CFmtStrN<2048>* , const char* );
	/* ../public/tier0/fmtstr.h:103 */
	void AppendFormat(CFmtStrN<2048>* , const char* , ...);
	/* ../public/tier0/fmtstr.h:111 */
	void AppendFormatV(CFmtStrN<2048>* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/tier0/fmtstr.h:116 */
	void Append(CFmtStrN<2048>* , const char* );
	/* ../public/tier0/fmtstr.h:122 */
	void Append(CFmtStrN<2048>* , char);
	/* ../public/tier0/fmtstr.h:127 */
	void AppendIndent(CFmtStrN<2048>* , uint32, char);
private:
	CBufferStringN<2048> m_string; /* 0 2056 */
	void CFmtStrN(class CFmtStrN<2048> *); /* linkage=_ZN8CFmtStrNILi2048EEC4Ev */
	void ~CFmtStrN(class CFmtStrN<2048> *); /* linkage=_ZN8CFmtStrNILi2048EED4Ev */
	void CFmtStrN(class CFmtStrN<2048> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi2048EEC4EPKcz */
	const char  * sprintf(class CFmtStrN<2048> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi2048EE7sprintfEPKcz */
	const char  * Format(class CFmtStrN<2048> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi2048EE6FormatEPKcz */
	const char  * sprintf_argv(class CFmtStrN<2048> *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN8CFmtStrNILi2048EE12sprintf_argvEPKcP13__va_list_tag */
	const char  * Get(const class CFmtStrN<2048>  *); /* linkage=_ZNK8CFmtStrNILi2048EE3GetEv */
	const char  * String(const class CFmtStrN<2048>  *); /* linkage=_ZNK8CFmtStrNILi2048EE6StringEv */
	const char  * operator char const*(const class CFmtStrN<2048>  *); /* linkage=_ZNK8CFmtStrNILi2048EEcvPKcEv */
	char * Access(class CFmtStrN<2048> *); /* linkage=_ZN8CFmtStrNILi2048EE6AccessEv */
	int Length(const class CFmtStrN<2048>  *); /* linkage=_ZNK8CFmtStrNILi2048EE6LengthEv */
	void SetLength(class CFmtStrN<2048> *, int); /* linkage=_ZN8CFmtStrNILi2048EE9SetLengthEi */
	void Clear(class CFmtStrN<2048> *); /* linkage=_ZN8CFmtStrNILi2048EE5ClearEv */
	class CFmtStrN<2048> & operator=(class CFmtStrN<2048> *, const char  *); /* linkage=_ZN8CFmtStrNILi2048EEaSEPKc */
	class CFmtStrN<2048> & operator+=(class CFmtStrN<2048> *, const char  *); /* linkage=_ZN8CFmtStrNILi2048EEpLEPKc */
	void AppendFormat(class CFmtStrN<2048> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi2048EE12AppendFormatEPKcz */
	void AppendFormatV(class CFmtStrN<2048> *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN8CFmtStrNILi2048EE13AppendFormatVEPKcP13__va_list_tag */
	void Append(class CFmtStrN<2048> *, const char  *); /* linkage=_ZN8CFmtStrNILi2048EE6AppendEPKc */
	void Append(class CFmtStrN<2048> *, char); /* linkage=_ZN8CFmtStrNILi2048EE6AppendEc */
	void AppendIndent(class CFmtStrN<2048> *, uint32, char); /* linkage=_ZN8CFmtStrNILi2048EE12AppendIndentEjc */
};

// <001238BC> ../../public/tier0/fmtstr.h:25
// member functions: 40
// member variable: 1
// class size: 264
class CFmtStrN<256> {
	/* ../../public/tier0/fmtstr.h:28 */
	void CFmtStrN(CFmtStrN<256>* );
	/* ../../public/tier0/fmtstr.h:32 */
	void ~CFmtStrN(CFmtStrN<256>* );
	/* ../../public/tier0/fmtstr.h:44 */
	void CFmtStrN(CFmtStrN<256>* , const char* , ...);
	/* ../../public/tier0/fmtstr.h:53 */
	const char* sprintf(CFmtStrN<256>* , const char* , ...);
	/* ../../public/tier0/fmtstr.h:63 */
	const char* Format(CFmtStrN<256>* , const char* , ...);
	/* ../../public/tier0/fmtstr.h:73 */
	const char* sprintf_argv(CFmtStrN<256>* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../../public/tier0/fmtstr.h:80 */
	const char* Get(const CFmtStrN<256>* );
	/* ../../public/tier0/fmtstr.h:81 */
	const char* String(const CFmtStrN<256>* );
	/* ../../public/tier0/fmtstr.h:83 */
	const char* operator char const*(const CFmtStrN<256>* );
	/* ../../public/tier0/fmtstr.h:84 */
	char* Access(CFmtStrN<256>* );
	/* ../../public/tier0/fmtstr.h:86 */
	int Length(const CFmtStrN<256>* );
	/* ../../public/tier0/fmtstr.h:87 */
	void SetLength(CFmtStrN<256>* , int);
	/* ../../public/tier0/fmtstr.h:89 */
	void Clear(CFmtStrN<256>* );
	/* ../../public/tier0/fmtstr.h:91 */
	CFmtStrN<256>& operator=(CFmtStrN<256>* , const char* );
	/* ../../public/tier0/fmtstr.h:97 */
	CFmtStrN<256>& operator+=(CFmtStrN<256>* , const char* );
	/* ../../public/tier0/fmtstr.h:103 */
	void AppendFormat(CFmtStrN<256>* , const char* , ...);
	/* ../../public/tier0/fmtstr.h:111 */
	void AppendFormatV(CFmtStrN<256>* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../../public/tier0/fmtstr.h:116 */
	void Append(CFmtStrN<256>* , const char* );
	/* ../../public/tier0/fmtstr.h:122 */
	void Append(CFmtStrN<256>* , char);
	/* ../../public/tier0/fmtstr.h:127 */
	void AppendIndent(CFmtStrN<256>* , uint32, char);
private:
	CBufferStringN<256> m_string; /* 0 264 */
	void CFmtStrN(class CFmtStrN<256> *); /* linkage=_ZN8CFmtStrNILi256EEC4Ev */
	void ~CFmtStrN(class CFmtStrN<256> *); /* linkage=_ZN8CFmtStrNILi256EED4Ev */
	void CFmtStrN(class CFmtStrN<256> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi256EEC4EPKcz */
	const char  * sprintf(class CFmtStrN<256> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi256EE7sprintfEPKcz */
	const char  * Format(class CFmtStrN<256> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi256EE6FormatEPKcz */
	const char  * sprintf_argv(class CFmtStrN<256> *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN8CFmtStrNILi256EE12sprintf_argvEPKcP13__va_list_tag */
	const char  * Get(const class CFmtStrN<256>  *); /* linkage=_ZNK8CFmtStrNILi256EE3GetEv */
	const char  * String(const class CFmtStrN<256>  *); /* linkage=_ZNK8CFmtStrNILi256EE6StringEv */
	const char  * operator char const*(const class CFmtStrN<256>  *); /* linkage=_ZNK8CFmtStrNILi256EEcvPKcEv */
	char * Access(class CFmtStrN<256> *); /* linkage=_ZN8CFmtStrNILi256EE6AccessEv */
	int Length(const class CFmtStrN<256>  *); /* linkage=_ZNK8CFmtStrNILi256EE6LengthEv */
	void SetLength(class CFmtStrN<256> *, int); /* linkage=_ZN8CFmtStrNILi256EE9SetLengthEi */
	void Clear(class CFmtStrN<256> *); /* linkage=_ZN8CFmtStrNILi256EE5ClearEv */
	class CFmtStrN<256> & operator=(class CFmtStrN<256> *, const char  *); /* linkage=_ZN8CFmtStrNILi256EEaSEPKc */
	class CFmtStrN<256> & operator+=(class CFmtStrN<256> *, const char  *); /* linkage=_ZN8CFmtStrNILi256EEpLEPKc */
	void AppendFormat(class CFmtStrN<256> *, const char  *, ...); /* linkage=_ZN8CFmtStrNILi256EE12AppendFormatEPKcz */
	void AppendFormatV(class CFmtStrN<256> *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN8CFmtStrNILi256EE13AppendFormatVEPKcP13__va_list_tag */
	void Append(class CFmtStrN<256> *, const char  *); /* linkage=_ZN8CFmtStrNILi256EE6AppendEPKc */
	void Append(class CFmtStrN<256> *, char); /* linkage=_ZN8CFmtStrNILi256EE6AppendEc */
	void AppendIndent(class CFmtStrN<256> *, uint32, char); /* linkage=_ZN8CFmtStrNILi256EE12AppendIndentEjc */
};

// <056BE226> ../public/tier0/fmtstr.h:28
void CFmtStrN<256>::CFmtStrN()
{
} /* size: 0 */

// <056BE20D> ../public/tier0/fmtstr.h:28
inline void CFmtStrN<256>::CFmtStrN()
{
} /* size: 0 */

// <0023416E> ../public/tier0/fmtstr.h:28
void CFmtStrN<1024>::CFmtStrN()
{
} /* size: 0 */

// <00234155> ../public/tier0/fmtstr.h:28
inline void CFmtStrN<1024>::CFmtStrN()
{
} /* size: 0 */

// <00133817> ../public/tier0/fmtstr.h:28
void CFmtStrN<2048>::CFmtStrN()
{
} /* size: 0 */

// <001337FE> ../public/tier0/fmtstr.h:28
inline void CFmtStrN<2048>::CFmtStrN()
{
} /* size: 0 */

// <06A6DE2F> ../public/tier0/fmtstr.h:32
void CFmtStrN<256>::~CFmtStrN()
{
} /* size: 0 */

// <06A6DE16> ../public/tier0/fmtstr.h:32
inline void CFmtStrN<256>::~CFmtStrN()
{
} /* size: 0 */

// <02EB3DEF> ../public/tier0/fmtstr.h:32
void CFmtStrN<1024>::~CFmtStrN()
{
} /* size: 0 */

// <02EB3DD6> ../public/tier0/fmtstr.h:32
inline void CFmtStrN<1024>::~CFmtStrN()
{
} /* size: 0 */

// <0067815C> ../public/tier0/fmtstr.h:32
// function calls: 2
void CFmtStrN<256>::~CFmtStrN()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
} /* size: 9, inline expansions: 2 (10 bytes) */

// <001337E7> ../public/tier0/fmtstr.h:32
void CFmtStrN<2048>::~CFmtStrN()
{
} /* size: 0 */

// <001337CE> ../public/tier0/fmtstr.h:32
inline void CFmtStrN<2048>::~CFmtStrN()
{
} /* size: 0 */

// <06A6DE79> ../public/tier0/fmtstr.h:44
// variables: 2
// function calls: 6
void CFmtStrN<256>::CFmtStrN(const char* pszFormat, ...)
{
	{
		va_list va; // 46
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<256>::CBufferStringN(); // 45
	{
		va_list va; // 46
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 1029
		CBufferString::FormatV(
			const char* pFormat,
			typedef __va_list_tag __va_list_tag* marker);  // 48
	}
} /* size: 221, inline expansions: 3 (37 bytes) */

// <06A6DE46> ../public/tier0/fmtstr.h:44
// variable: 1
inline void CFmtStrN<256>::CFmtStrN(const char* pszFormat, ...)
{
	{
		va_list va; // 46
	}
} /* size: 0 */

// <02EA8386> ../public/tier0/fmtstr.h:44
// variables: 2
// function calls: 6
void CFmtStrN<1024>::CFmtStrN(const char* pszFormat, ...)
{
	{
		va_list va; // 46
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<1024>::CBufferStringN(); // 45
	{
		va_list va; // 46
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 1029
		CBufferString::FormatV(
			const char* pFormat,
			typedef __va_list_tag __va_list_tag* marker);  // 48
	}
} /* size: 221, inline expansions: 3 (37 bytes) */

// <02EA8353> ../public/tier0/fmtstr.h:44
// variable: 1
inline void CFmtStrN<1024>::CFmtStrN(const char* pszFormat, ...)
{
	{
		va_list va; // 46
	}
} /* size: 0 */

// <023583EC> ../public/tier0/fmtstr.h:53
// variable: 1
// function calls: 8
void CFmtStrN<256>::sprintf(const char* pszFormat, ...)
{
	va_list va; // 55
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1029
	CBufferString::FormatV(
		const char* pFormat,
		typedef __va_list_tag __va_list_tag* marker);  // 57
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<256>::Get(); // 59
} /* size: 267, variables: 1, inline expansions: 8 (215 bytes) */

// <001335E9> ../public/tier0/fmtstr.h:53
// variable: 1
// function calls: 8
void CFmtStrN<2048>::sprintf(const char* pszFormat, ...)
{
	va_list va; // 55
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1029
	CBufferString::FormatV(
		const char* pFormat,
		typedef __va_list_tag __va_list_tag* marker);  // 57
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<2048>::Get(); // 59
} /* size: 267, variables: 1, inline expansions: 8 (215 bytes) */

// <0013330A> ../public/tier0/fmtstr.h:53
// variable: 1
// function calls: 8
void CFmtStrN<1024>::sprintf(const char* pszFormat, ...)
{
	va_list va; // 55
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1029
	CBufferString::FormatV(
		const char* pFormat,
		typedef __va_list_tag __va_list_tag* marker);  // 57
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<1024>::Get(); // 59
} /* size: 267, variables: 1, inline expansions: 8 (215 bytes) */

// <056BE027> ../public/tier0/fmtstr.h:63
// variable: 1
// function calls: 8
void CFmtStrN<256>::Format(const char* pszFormat, ...)
{
	va_list va; // 65
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1029
	CBufferString::FormatV(
		const char* pFormat,
		typedef __va_list_tag __va_list_tag* marker);  // 67
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<256>::Get(); // 69
} /* size: 267, variables: 1, inline expansions: 8 (215 bytes) */

// <002340F5> ../public/tier0/fmtstr.h:73
void CFmtStrN<1024>::sprintf_argv(const char* pszFormat, typedef __va_list_tag __va_list_tag* arg_ptr)
{
} /* size: 0 */

// <056BE00E> ../public/tier0/fmtstr.h:80
inline void CFmtStrN<256>::Get()
{
} /* size: 0 */

// <00231AF6> ../public/tier0/fmtstr.h:80
inline void CFmtStrN<1024>::Get()
{
} /* size: 0 */

// <001335AC> ../public/tier0/fmtstr.h:80
inline void CFmtStrN<2048>::Get()
{
} /* size: 0 */

// <068FBB60> ../public/tier0/fmtstr.h:81
inline void CFmtStrN<256>::String()
{
} /* size: 0 */

// <02EB3DBD> ../public/tier0/fmtstr.h:81
inline void CFmtStrN<1024>::String()
{
} /* size: 0 */

// <06A6DDFD> ../public/tier0/fmtstr.h:83
inline void operator char CFmtStrN<256>::const*()
{
} /* size: 0 */

// <056E464F> ../public/tier0/fmtstr.h:84
inline void CFmtStrN<256>::Access()
{
} /* size: 0 */

// <001332F1> ../public/tier0/fmtstr.h:84
inline void CFmtStrN<1024>::Access()
{
} /* size: 0 */

// <008ABAE5> ../public/tier0/fmtstr.h:86
inline void CFmtStrN<256>::Length()
{
} /* size: 0 */

// <0058E025> ../public/tier0/fmtstr.h:91
inline void CFmtStrN<256>::operator=(const char* pchValue)
{
} /* size: 0 */

// <008ABA64> ../public/tier0/fmtstr.h:103
// variable: 1
void CFmtStrN<256>::AppendFormat(const char* pchFormat, ...)
{
	va_list va; // 105
} /* size: 179, variables: 1 */

// <002352CC> ../public/tier0/fmtstr.h:166
// member functions: 60
// member variable: 1
// class size: 28
class CNumStr {
	/* ../public/tier0/fmtstr.h:169 */
	void CNumStr(CNumStr* );
	/* ../public/tier0/fmtstr.h:171 */
	void CNumStr(CNumStr* , bool);
	/* ../public/tier0/fmtstr.h:173 */
	void CNumStr(CNumStr* , int8);
	/* ../public/tier0/fmtstr.h:174 */
	void CNumStr(CNumStr* , uint8);
	/* ../public/tier0/fmtstr.h:175 */
	void CNumStr(CNumStr* , int16);
	/* ../public/tier0/fmtstr.h:176 */
	void CNumStr(CNumStr* , uint16);
	/* ../public/tier0/fmtstr.h:177 */
	void CNumStr(CNumStr* , int32);
	/* ../public/tier0/fmtstr.h:178 */
	void CNumStr(CNumStr* , uint32);
	/* ../public/tier0/fmtstr.h:179 */
	void CNumStr(CNumStr* , int64);
	/* ../public/tier0/fmtstr.h:180 */
	void CNumStr(CNumStr* , uint64);
	/* ../public/tier0/fmtstr.h:183 */
	void CNumStr(CNumStr* , lint64);
	/* ../public/tier0/fmtstr.h:184 */
	void CNumStr(CNumStr* , ulint64);
	/* ../public/tier0/fmtstr.h:187 */
	void CNumStr(CNumStr* , double);
	/* ../public/tier0/fmtstr.h:188 */
	void CNumStr(CNumStr* , float);
	/* ../public/tier0/fmtstr.h:190 */
	void SetBool(CNumStr* , bool);
	/* ../public/tier0/fmtstr.h:192 */
	void SetInt8(CNumStr* , int8);
	/* ../public/tier0/fmtstr.h:193 */
	void SetUint8(CNumStr* , uint8);
	/* ../public/tier0/fmtstr.h:194 */
	void SetInt16(CNumStr* , int16);
	/* ../public/tier0/fmtstr.h:195 */
	void SetUint16(CNumStr* , uint16);
	/* ../public/tier0/fmtstr.h:196 */
	void SetInt32(CNumStr* , int32);
	/* ../public/tier0/fmtstr.h:197 */
	void SetUint32(CNumStr* , uint32);
	/* ../public/tier0/fmtstr.h:198 */
	void SetInt64(CNumStr* , int64);
	/* ../public/tier0/fmtstr.h:199 */
	void SetUint64(CNumStr* , uint64);
	/* ../public/tier0/fmtstr.h:201 */
	void SetDouble(CNumStr* , double);
	/* ../public/tier0/fmtstr.h:202 */
	void SetFloat(CNumStr* , float);
	/* ../public/tier0/fmtstr.h:204 */
	void SetHexUint64(CNumStr* , uint64);
	/* ../public/tier0/fmtstr.h:206 */
	const char* operator char const*(const CNumStr* );
	/* ../public/tier0/fmtstr.h:207 */
	char* Access(CNumStr* );
	/* ../public/tier0/fmtstr.h:208 */
	const char* String(const CNumStr* );
	/* ../public/tier0/fmtstr.h:210 */
	void AddQuotes(CNumStr* );
protected:
	char m_szBuf[28]; /* 0 28 */
	void CNumStr(class CNumStr *); /* linkage=_ZN7CNumStrC4Ev */
	void CNumStr(class CNumStr *, bool); /* linkage=_ZN7CNumStrC4Eb */
	void CNumStr(class CNumStr *, int8); /* linkage=_ZN7CNumStrC4Ea */
	void CNumStr(class CNumStr *, uint8); /* linkage=_ZN7CNumStrC4Eh */
	void CNumStr(class CNumStr *, int16); /* linkage=_ZN7CNumStrC4Es */
	void CNumStr(class CNumStr *, uint16); /* linkage=_ZN7CNumStrC4Et */
	void CNumStr(class CNumStr *, int32); /* linkage=_ZN7CNumStrC4Ei */
	void CNumStr(class CNumStr *, uint32); /* linkage=_ZN7CNumStrC4Ej */
	void CNumStr(class CNumStr *, int64); /* linkage=_ZN7CNumStrC4Ex */
	void CNumStr(class CNumStr *, uint64); /* linkage=_ZN7CNumStrC4Ey */
	void CNumStr(class CNumStr *, lint64); /* linkage=_ZN7CNumStrC4El */
	void CNumStr(class CNumStr *, ulint64); /* linkage=_ZN7CNumStrC4Em */
	void CNumStr(class CNumStr *, double); /* linkage=_ZN7CNumStrC4Ed */
	void CNumStr(class CNumStr *, float); /* linkage=_ZN7CNumStrC4Ef */
	void SetBool(class CNumStr *, bool); /* linkage=_ZN7CNumStr7SetBoolEb */
	void SetInt8(class CNumStr *, int8); /* linkage=_ZN7CNumStr7SetInt8Ea */
	void SetUint8(class CNumStr *, uint8); /* linkage=_ZN7CNumStr8SetUint8Eh */
	void SetInt16(class CNumStr *, int16); /* linkage=_ZN7CNumStr8SetInt16Es */
	void SetUint16(class CNumStr *, uint16); /* linkage=_ZN7CNumStr9SetUint16Et */
	void SetInt32(class CNumStr *, int32); /* linkage=_ZN7CNumStr8SetInt32Ei */
	void SetUint32(class CNumStr *, uint32); /* linkage=_ZN7CNumStr9SetUint32Ej */
	void SetInt64(class CNumStr *, int64); /* linkage=_ZN7CNumStr8SetInt64Ex */
	void SetUint64(class CNumStr *, uint64); /* linkage=_ZN7CNumStr9SetUint64Ey */
	void SetDouble(class CNumStr *, double); /* linkage=_ZN7CNumStr9SetDoubleEd */
	void SetFloat(class CNumStr *, float); /* linkage=_ZN7CNumStr8SetFloatEf */
	void SetHexUint64(class CNumStr *, uint64); /* linkage=_ZN7CNumStr12SetHexUint64Ey */
	const char  * operator char const*(const class CNumStr  *); /* linkage=_ZNK7CNumStrcvPKcEv */
	char * Access(class CNumStr *); /* linkage=_ZN7CNumStr6AccessEv */
	const char  * String(const class CNumStr  *); /* linkage=_ZNK7CNumStr6StringEv */
	void AddQuotes(class CNumStr *); /* linkage=_ZN7CNumStr9AddQuotesEv */
};

// <0023F3D3> ../public/tier0/fmtstr.h:169
void CNumStr::CNumStr()
{
} /* size: 0 */

// <0023F3BA> ../public/tier0/fmtstr.h:169
inline void CNumStr::CNumStr()
{
} /* size: 0 */

// <0023F39E> ../public/tier0/fmtstr.h:177
void CNumStr::CNumStr(int32 n32)
{
} /* size: 0 */

// <0023F379> ../public/tier0/fmtstr.h:177
inline void CNumStr::CNumStr(int32 n32)
{
} /* size: 0 */

// <0023F35D> ../public/tier0/fmtstr.h:180
void CNumStr::CNumStr(uint64 un64)
{
} /* size: 0 */

// <0023F338> ../public/tier0/fmtstr.h:180
inline void CNumStr::CNumStr(uint64 un64)
{
} /* size: 0 */

// <0023F31C> ../public/tier0/fmtstr.h:188
void CNumStr::CNumStr(float f)
{
} /* size: 0 */

// <0023F2F9> ../public/tier0/fmtstr.h:188
inline void CNumStr::CNumStr(float f)
{
} /* size: 0 */

// <0023F2D4> ../public/tier0/fmtstr.h:196
inline void CNumStr::SetInt32(int32 n32)
{
} /* size: 0 */

// <0023F2AF> ../public/tier0/fmtstr.h:197
inline void CNumStr::SetUint32(uint32 un32)
{
} /* size: 0 */

// <0023F28A> ../public/tier0/fmtstr.h:199
inline void CNumStr::SetUint64(uint64 un64)
{
} /* size: 0 */

// <0023F267> ../public/tier0/fmtstr.h:202
inline void CNumStr::SetFloat(float f)
{
} /* size: 0 */

// <0023F24E> ../public/tier0/fmtstr.h:206
inline void operator char CNumStr::const*()
{
} /* size: 0 */

// <0023F235> ../public/tier0/fmtstr.h:208
inline void CNumStr::String()
{
} /* size: 0 */

// <0019C5B8> ../public/tier0/fmtstr.h:262
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class IOutputStream {
	void ~IOutputStream(IOutputStream* );
	void IOutputStream(IOutputStream* , IOutputStream& );
	void IOutputStream(IOutputStream* , const IOutputStream& );
	void IOutputStream(IOutputStream* );
	int ()(void) * * _vptr.IOutputStream; /* 0 8 */
	/* ../public/tier0/fmtstr.h:265 */
	virtual void PutChar(IOutputStream* , char);
	/* ../public/tier0/fmtstr.h:266 */
	virtual void Finish(IOutputStream* );
	void ~IOutputStream(class IOutputStream *); /* linkage=_ZN13IOutputStreamD4Ev */
	void IOutputStream(class IOutputStream *, class IOutputStream &); /* linkage=_ZN13IOutputStreamC4EOS_ */
	void IOutputStream(class IOutputStream *, const class IOutputStream  &); /* linkage=_ZN13IOutputStreamC4ERKS_ */
	void IOutputStream(class IOutputStream *); /* linkage=_ZN13IOutputStreamC4Ev */
	virtual void PutChar(class IOutputStream *, char); /* linkage=_ZN13IOutputStream7PutCharEc */
	virtual void Finish(class IOutputStream *); /* linkage=_ZN13IOutputStream6FinishEv */
};

// <0019C6C5> ../public/tier0/fmtstr.h:269
// member functions: 6
// member variables: 3
// vtable entries: 2
// class size: 24
class CStringOutputStream : public IOutputStream {
public:
	/* class IOutputStream <ancestor>; */ /* 0 8 */
private:
	char * m_pBufOut; /* 8 8 */
	char * m_pLimit; /* 16 8 */
	/* tier0/fmtstr.cpp:14 */
	virtual void PutChar(CStringOutputStream* , char);
	/* tier0/fmtstr.cpp:24 */
	virtual void Finish(CStringOutputStream* );
	/* ../public/tier0/fmtstr.h:278 */
	void CStringOutputStream(CStringOutputStream* , char* , size_t);
	/* <19caeb> tier0/fmtstr.cpp:14 */
	virtual void PutChar(class CStringOutputStream *, char); /* linkage=_ZN19CStringOutputStream7PutCharEc */
	virtual void Finish(class CStringOutputStream *); /* linkage=_ZN19CStringOutputStream6FinishEv */
	void CStringOutputStream(class CStringOutputStream *, char *, size_t); /* linkage=_ZN19CStringOutputStreamC4EPcm */
};

// <0019C501> ../public/tier0/fmtstr.h:291
// member functions: 4
// member variables: 4
// class size: 16
class CIntFormatter {
private:
	int64 m_nValue; /* 0 8 */
	bool m_bSigned:1; /* 8: 0 1 */
	bool m_bLeadingZeros:1; /* 8: 1 1 */
	uint8 m_nBase; /* 9 1 */
	/* ../public/tier0/fmtstr.h:299 */
	void CIntFormatter(CIntFormatter* , int);
	/* ../public/tier0/fmtstr.h:307 */
	void FormatData(const CIntFormatter* , IOutputStream* );
	void CIntFormatter(class CIntFormatter *, int); /* linkage=_ZN13CIntFormatterC4Ei */
	void FormatData(const class CIntFormatter  *, class IOutputStream *); /* linkage=_ZNK13CIntFormatter10FormatDataEP13IOutputStream */
};

