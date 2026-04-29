
//
// public/tier0/utlblockvector.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 45
//	classes: 12
//

// <069464E0> ../public/tier0/utlblockvector.h:10
void CUtlBlockVector<CVfxStaticComboData, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <069464C3> ../public/tier0/utlblockvector.h:10
inline void CUtlBlockVector<CVfxStaticComboData, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <060E1180> ../public/tier0/utlblockvector.h:10
void CUtlBlockVector<CacheOptimizedTriangle_t, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <060E1164> ../public/tier0/utlblockvector.h:10
inline void CUtlBlockVector<CacheOptimizedTriangle_t, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <060E10B1> ../public/tier0/utlblockvector.h:10
void CUtlBlockVector<Vector2D, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <060E1095> ../public/tier0/utlblockvector.h:10
inline void CUtlBlockVector<Vector2D, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <05BE1AD0> ../public/tier0/utlblockvector.h:10
void CUtlBlockVector<float const::~CUtlBlockVector()
{
} /* size: 0 */

// <05BE1AB4> ../public/tier0/utlblockvector.h:10
inline void CUtlBlockVector<float const::~CUtlBlockVector()
{
} /* size: 0 */

// <05A9F80F> ../public/tier0/utlblockvector.h:10
void CUtlBlockVector<CPackNode, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <05A9F7F3> ../public/tier0/utlblockvector.h:10
inline void CUtlBlockVector<CPackNode, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <044CAB6F> ../public/tier0/utlblockvector.h:10
void CUtlBlockVector<unsigned int, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <044CAB53> ../public/tier0/utlblockvector.h:10
inline void CUtlBlockVector<unsigned int, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <0053BC35> ../public/tier0/utlblockvector.h:10
void CUtlBlockVector<CFontTextureCache::Page_t, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <0053BC19> ../public/tier0/utlblockvector.h:10
inline void CUtlBlockVector<CFontTextureCache::Page_t, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <0023595A> ../public/tier0/utlblockvector.h:10
void CUtlBlockVector<unsigned char, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <0023593E> ../public/tier0/utlblockvector.h:10
inline void CUtlBlockVector<unsigned char, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <00235927> ../public/tier0/utlblockvector.h:10
void CUtlBlockVector<FileHandleTracker_t, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <0023590B> ../public/tier0/utlblockvector.h:10
inline void CUtlBlockVector<FileHandleTracker_t, int>::~CUtlBlockVector()
{
} /* size: 0 */

// <000AFA89> ../public/tier0/utlblockvector.h:10
// member functions: 5
// member variable: 1
// class size: 32
class CUtlBlockVector<CacheOptimizedTriangle_t, int> : public CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> > {
public:
	/* class CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlblockvector.h:13 */
	void CUtlBlockVector(CUtlBlockVector<CacheOptimizedTriangle_t, int>* , int, int);
	class iterator {
	};
	/* ../public/tier0/utlblockvector.h:53 */
	iterator begin(CUtlBlockVector<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockvector.h:54 */
	iterator end(CUtlBlockVector<CacheOptimizedTriangle_t, int>* );
	class const_iterator {
	};
	/* ../public/tier0/utlblockvector.h:95 */
	const_iterator cbegin(CUtlBlockVector<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockvector.h:96 */
	const_iterator cend(CUtlBlockVector<CacheOptimizedTriangle_t, int>* );
};

// <000B4C2D> ../public/tier0/utlblockvector.h:10
// member functions: 11
// member variable: 1
// class size: 32
class CUtlBlockVector<Vector2D, int> : public CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> > {
public:
	/* class CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlblockvector.h:13 */
	void CUtlBlockVector(CUtlBlockVector<Vector2D, int>* , int, int);
	class iterator {
	};
	/* ../public/tier0/utlblockvector.h:53 */
	iterator begin(CUtlBlockVector<Vector2D, int>* );
	/* ../public/tier0/utlblockvector.h:54 */
	iterator end(CUtlBlockVector<Vector2D, int>* );
	class const_iterator {
	};
	/* ../public/tier0/utlblockvector.h:95 */
	const_iterator cbegin(CUtlBlockVector<Vector2D, int>* );
	/* ../public/tier0/utlblockvector.h:96 */
	const_iterator cend(CUtlBlockVector<Vector2D, int>* );
	void CUtlBlockVector(class CUtlBlockVector<Vector2D, int> *, int, int); /* linkage=_ZN15CUtlBlockVectorI8Vector2DiEC4Eii */
	class iterator begin(class CUtlBlockVector<Vector2D, int> *); /* linkage=_ZN15CUtlBlockVectorI8Vector2DiE5beginEv */
	class iterator end(class CUtlBlockVector<Vector2D, int> *); /* linkage=_ZN15CUtlBlockVectorI8Vector2DiE3endEv */
	class const_iterator cbegin(class CUtlBlockVector<Vector2D, int> *); /* linkage=_ZN15CUtlBlockVectorI8Vector2DiE6cbeginEv */
	class const_iterator cend(class CUtlBlockVector<Vector2D, int> *); /* linkage=_ZN15CUtlBlockVectorI8Vector2DiE4cendEv */
	void ~CUtlBlockVector(class CUtlBlockVector<Vector2D, int> *); /* linkage=_ZN15CUtlBlockVectorI8Vector2DiED4Ev */
};

// <0123C494> ../public/tier0/utlblockvector.h:10
// member functions: 11
// member variable: 1
// class size: 32
class CUtlBlockVector<CVfxStaticComboData, int> : public CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> > {
public:
	/* class CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlblockvector.h:13 */
	void CUtlBlockVector(CUtlBlockVector<CVfxStaticComboData, int>* , int, int);
	class iterator {
	};
	/* ../public/tier0/utlblockvector.h:53 */
	iterator begin(CUtlBlockVector<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockvector.h:54 */
	iterator end(CUtlBlockVector<CVfxStaticComboData, int>* );
	class const_iterator {
	};
	/* ../public/tier0/utlblockvector.h:95 */
	const_iterator cbegin(CUtlBlockVector<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockvector.h:96 */
	const_iterator cend(CUtlBlockVector<CVfxStaticComboData, int>* );
	void CUtlBlockVector(class CUtlBlockVector<CVfxStaticComboData, int> *, int, int); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiEC4Eii */
	class iterator begin(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiE5beginEv */
	class iterator end(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiE3endEv */
	class const_iterator cbegin(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiE6cbeginEv */
	class const_iterator cend(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiE4cendEv */
	void ~CUtlBlockVector(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiED4Ev */
};

// <04480F39> ../public/tier0/utlblockvector.h:10
// member functions: 12
// member variable: 1
// class size: 32
class CUtlBlockVector<unsigned int, int> : public CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> > {
public:
	/* class CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlblockvector.h:13 */
	void CUtlBlockVector(CUtlBlockVector<unsigned int, int>* , int, int);
	class iterator {
	};
	/* ../public/tier0/utlblockvector.h:53 */
	iterator begin(CUtlBlockVector<unsigned int, int>* );
	/* ../public/tier0/utlblockvector.h:54 */
	iterator end(CUtlBlockVector<unsigned int, int>* );
	class const_iterator {
	};
	/* ../public/tier0/utlblockvector.h:95 */
	const_iterator cbegin(CUtlBlockVector<unsigned int, int>* );
	/* ../public/tier0/utlblockvector.h:96 */
	const_iterator cend(CUtlBlockVector<unsigned int, int>* );
	void ~CUtlBlockVector(CUtlBlockVector<unsigned int, int>* );
	void CUtlBlockVector(class CUtlBlockVector<unsigned int, int> *, int, int); /* linkage=_ZN15CUtlBlockVectorIjiEC4Eii */
	class iterator begin(class CUtlBlockVector<unsigned int, int> *); /* linkage=_ZN15CUtlBlockVectorIjiE5beginEv */
	class iterator end(class CUtlBlockVector<unsigned int, int> *); /* linkage=_ZN15CUtlBlockVectorIjiE3endEv */
	class const_iterator cbegin(class CUtlBlockVector<unsigned int, int> *); /* linkage=_ZN15CUtlBlockVectorIjiE6cbeginEv */
	class const_iterator cend(class CUtlBlockVector<unsigned int, int> *); /* linkage=_ZN15CUtlBlockVectorIjiE4cendEv */
	void ~CUtlBlockVector(class CUtlBlockVector<unsigned int, int> *); /* linkage=_ZN15CUtlBlockVectorIjiED4Ev */
};

// <05A9C42C> ../public/tier0/utlblockvector.h:10
// member functions: 6
// member variable: 1
// class size: 32
class CUtlBlockVector<CPackNode, int> : public CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> > {
public:
	/* class CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlblockvector.h:13 */
	void CUtlBlockVector(CUtlBlockVector<CPackNode, int>* , int, int);
	class iterator {
	};
	/* ../public/tier0/utlblockvector.h:53 */
	iterator begin(CUtlBlockVector<CPackNode, int>* );
	/* ../public/tier0/utlblockvector.h:54 */
	iterator end(CUtlBlockVector<CPackNode, int>* );
	class const_iterator {
	};
	/* ../public/tier0/utlblockvector.h:95 */
	const_iterator cbegin(CUtlBlockVector<CPackNode, int>* );
	/* ../public/tier0/utlblockvector.h:96 */
	const_iterator cend(CUtlBlockVector<CPackNode, int>* );
	void ~CUtlBlockVector(CUtlBlockVector<CPackNode, int>* );
};

// <05B8C7CC> ../public/tier0/utlblockvector.h:10
// member functions: 6
// member variable: 1
// class size: 32
class CUtlBlockVector<float const*, int> : public CUtlVectorBase<float const*, CUtlBlockMemory<float const*, int> > {
public:
	/* class CUtlVectorBase<float const*, CUtlBlockMemory<float const*, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlblockvector.h:13 */
	void CUtlBlockVector(CUtlBlockVector<float const*, int>* , int, int);
	class iterator {
	};
	/* ../public/tier0/utlblockvector.h:53 */
	iterator begin(CUtlBlockVector<float const*, int>* );
	/* ../public/tier0/utlblockvector.h:54 */
	iterator end(CUtlBlockVector<float const*, int>* );
	class const_iterator {
	};
	/* ../public/tier0/utlblockvector.h:95 */
	const_iterator cbegin(CUtlBlockVector<float const*, int>* );
	/* ../public/tier0/utlblockvector.h:96 */
	const_iterator cend(CUtlBlockVector<float const*, int>* );
	void ~CUtlBlockVector(CUtlBlockVector<float const*, int>* );
};

// <01551164> ../public/tier0/utlblockvector.h:10
// member functions: 12
// member variable: 1
// class size: 32
class CUtlBlockVector<CVfxStaticComboData, int> : public CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> > {
public:
	/* class CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlblockvector.h:13 */
	void CUtlBlockVector(CUtlBlockVector<CVfxStaticComboData, int>* , int, int);
	class iterator {
	};
	/* ../public/tier0/utlblockvector.h:53 */
	iterator begin(CUtlBlockVector<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockvector.h:54 */
	iterator end(CUtlBlockVector<CVfxStaticComboData, int>* );
	class const_iterator {
	};
	/* ../public/tier0/utlblockvector.h:95 */
	const_iterator cbegin(CUtlBlockVector<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockvector.h:96 */
	const_iterator cend(CUtlBlockVector<CVfxStaticComboData, int>* );
	void ~CUtlBlockVector(CUtlBlockVector<CVfxStaticComboData, int>* );
	void CUtlBlockVector(class CUtlBlockVector<CVfxStaticComboData, int> *, int, int); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiEC4Eii */
	class iterator begin(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiE5beginEv */
	class iterator end(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiE3endEv */
	class const_iterator cbegin(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiE6cbeginEv */
	class const_iterator cend(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiE4cendEv */
	void ~CUtlBlockVector(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiED4Ev */
};

// <00048CAE> ../../public/tier0/utlblockvector.h:10
// member functions: 11
// member variable: 1
// class size: 32
class CUtlBlockVector<CVfxStaticComboData, int> : public CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> > {
public:
	/* class CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> > <ancestor>; */ /* 0 32 */
	/* ../../public/tier0/utlblockvector.h:13 */
	void CUtlBlockVector(CUtlBlockVector<CVfxStaticComboData, int>* , int, int);
	class iterator {
	};
	/* ../../public/tier0/utlblockvector.h:53 */
	iterator begin(CUtlBlockVector<CVfxStaticComboData, int>* );
	/* ../../public/tier0/utlblockvector.h:54 */
	iterator end(CUtlBlockVector<CVfxStaticComboData, int>* );
	class const_iterator {
	};
	/* ../../public/tier0/utlblockvector.h:95 */
	const_iterator cbegin(CUtlBlockVector<CVfxStaticComboData, int>* );
	/* ../../public/tier0/utlblockvector.h:96 */
	const_iterator cend(CUtlBlockVector<CVfxStaticComboData, int>* );
	void CUtlBlockVector(class CUtlBlockVector<CVfxStaticComboData, int> *, int, int); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiEC4Eii */
	class iterator begin(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiE5beginEv */
	class iterator end(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiE3endEv */
	class const_iterator cbegin(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiE6cbeginEv */
	class const_iterator cend(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiE4cendEv */
	void ~CUtlBlockVector(class CUtlBlockVector<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockVectorI19CVfxStaticComboDataiED4Ev */
};

// <0050D8C2> ../public/tier0/utlblockvector.h:10
// member functions: 5
// member variable: 1
// class size: 32
class CUtlBlockVector<float const*, int> : public CUtlVectorBase<float const*, CUtlBlockMemory<float const*, int> > {
public:
	/* class CUtlVectorBase<float const*, CUtlBlockMemory<float const*, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlblockvector.h:13 */
	void CUtlBlockVector(CUtlBlockVector<float const*, int>* , int, int);
	class iterator {
	};
	/* ../public/tier0/utlblockvector.h:53 */
	iterator begin(CUtlBlockVector<float const*, int>* );
	/* ../public/tier0/utlblockvector.h:54 */
	iterator end(CUtlBlockVector<float const*, int>* );
	class const_iterator {
	};
	/* ../public/tier0/utlblockvector.h:95 */
	const_iterator cbegin(CUtlBlockVector<float const*, int>* );
	/* ../public/tier0/utlblockvector.h:96 */
	const_iterator cend(CUtlBlockVector<float const*, int>* );
};

// <004DD390> ../public/tier0/utlblockvector.h:10
// member functions: 5
// member variable: 1
// class size: 32
class CUtlBlockVector<CFontTextureCache::Page_t, int> : public CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> > {
public:
	/* class CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlblockvector.h:13 */
	void CUtlBlockVector(CUtlBlockVector<CFontTextureCache::Page_t, int>* , int, int);
	class iterator {
	};
	/* ../public/tier0/utlblockvector.h:53 */
	iterator begin(CUtlBlockVector<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockvector.h:54 */
	iterator end(CUtlBlockVector<CFontTextureCache::Page_t, int>* );
	class const_iterator {
	};
	/* ../public/tier0/utlblockvector.h:95 */
	const_iterator cbegin(CUtlBlockVector<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockvector.h:96 */
	const_iterator cend(CUtlBlockVector<CFontTextureCache::Page_t, int>* );
};

// <0008AE06> ../public/tier0/utlblockvector.h:10
// member functions: 11
// member variable: 1
// class size: 32
class CUtlBlockVector<unsigned char, int> : public CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> > {
public:
	/* class CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlblockvector.h:13 */
	void CUtlBlockVector(CUtlBlockVector<unsigned char, int>* , int, int);
	class iterator {
	};
	/* ../public/tier0/utlblockvector.h:53 */
	iterator begin(CUtlBlockVector<unsigned char, int>* );
	/* ../public/tier0/utlblockvector.h:54 */
	iterator end(CUtlBlockVector<unsigned char, int>* );
	class const_iterator {
	};
	/* ../public/tier0/utlblockvector.h:95 */
	const_iterator cbegin(CUtlBlockVector<unsigned char, int>* );
	/* ../public/tier0/utlblockvector.h:96 */
	const_iterator cend(CUtlBlockVector<unsigned char, int>* );
	void CUtlBlockVector(class CUtlBlockVector<unsigned int, int> *, int, int); /* linkage=_ZN15CUtlBlockVectorIjiEC4Eii */
	class iterator begin(class CUtlBlockVector<unsigned int, int> *); /* linkage=_ZN15CUtlBlockVectorIjiE5beginEv */
	class iterator end(class CUtlBlockVector<unsigned int, int> *); /* linkage=_ZN15CUtlBlockVectorIjiE3endEv */
	class const_iterator cbegin(class CUtlBlockVector<unsigned int, int> *); /* linkage=_ZN15CUtlBlockVectorIjiE6cbeginEv */
	class const_iterator cend(class CUtlBlockVector<unsigned int, int> *); /* linkage=_ZN15CUtlBlockVectorIjiE4cendEv */
	void ~CUtlBlockVector(class CUtlBlockVector<unsigned int, int> *); /* linkage=_ZN15CUtlBlockVectorIjiED4Ev */
};

// <0008DA75> ../public/tier0/utlblockvector.h:10
// member functions: 11
// member variable: 1
// class size: 32
class CUtlBlockVector<FileHandleTracker_t, int> : public CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> > {
public:
	/* class CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlblockvector.h:13 */
	void CUtlBlockVector(CUtlBlockVector<FileHandleTracker_t, int>* , int, int);
	class iterator {
	};
	/* ../public/tier0/utlblockvector.h:53 */
	iterator begin(CUtlBlockVector<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockvector.h:54 */
	iterator end(CUtlBlockVector<FileHandleTracker_t, int>* );
	class const_iterator {
	};
	/* ../public/tier0/utlblockvector.h:95 */
	const_iterator cbegin(CUtlBlockVector<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockvector.h:96 */
	const_iterator cend(CUtlBlockVector<FileHandleTracker_t, int>* );
	void CUtlBlockVector(class CUtlBlockVector<FileHandleTracker_t, int> *, int, int); /* linkage=_ZN15CUtlBlockVectorI19FileHandleTracker_tiEC4Eii */
	class iterator begin(class CUtlBlockVector<FileHandleTracker_t, int> *); /* linkage=_ZN15CUtlBlockVectorI19FileHandleTracker_tiE5beginEv */
	class iterator end(class CUtlBlockVector<FileHandleTracker_t, int> *); /* linkage=_ZN15CUtlBlockVectorI19FileHandleTracker_tiE3endEv */
	class const_iterator cbegin(class CUtlBlockVector<FileHandleTracker_t, int> *); /* linkage=_ZN15CUtlBlockVectorI19FileHandleTracker_tiE6cbeginEv */
	class const_iterator cend(class CUtlBlockVector<FileHandleTracker_t, int> *); /* linkage=_ZN15CUtlBlockVectorI19FileHandleTracker_tiE4cendEv */
	void ~CUtlBlockVector(class CUtlBlockVector<FileHandleTracker_t, int> *); /* linkage=_ZN15CUtlBlockVectorI19FileHandleTracker_tiED4Ev */
};

// <068F87A8> ../public/tier0/utlblockvector.h:13
void CUtlBlockVector<CVfxStaticComboData, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <068F8777> ../public/tier0/utlblockvector.h:13
inline void CUtlBlockVector<CVfxStaticComboData, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <060958FF> ../public/tier0/utlblockvector.h:13
void CUtlBlockVector<CacheOptimizedTriangle_t, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <060958CE> ../public/tier0/utlblockvector.h:13
inline void CUtlBlockVector<CacheOptimizedTriangle_t, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <0609575D> ../public/tier0/utlblockvector.h:13
void CUtlBlockVector<Vector2D, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <0609572C> ../public/tier0/utlblockvector.h:13
inline void CUtlBlockVector<Vector2D, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <05BBA083> ../public/tier0/utlblockvector.h:13
void CUtlBlockVector<float const::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <05BBA052> ../public/tier0/utlblockvector.h:13
inline void CUtlBlockVector<float const::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <05A9F25C> ../public/tier0/utlblockvector.h:13
void CUtlBlockVector<CPackNode, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <05A9F22B> ../public/tier0/utlblockvector.h:13
inline void CUtlBlockVector<CPackNode, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <044A8DB0> ../public/tier0/utlblockvector.h:13
void CUtlBlockVector<unsigned int, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <044A8D7F> ../public/tier0/utlblockvector.h:13
inline void CUtlBlockVector<unsigned int, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <005360E1> ../public/tier0/utlblockvector.h:13
void CUtlBlockVector<CFontTextureCache::Page_t, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <005360B0> ../public/tier0/utlblockvector.h:13
inline void CUtlBlockVector<CFontTextureCache::Page_t, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <0021B1D4> ../public/tier0/utlblockvector.h:13
void CUtlBlockVector<unsigned char, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <0021B1A3> ../public/tier0/utlblockvector.h:13
inline void CUtlBlockVector<unsigned char, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <0021B0E1> ../public/tier0/utlblockvector.h:13
void CUtlBlockVector<FileHandleTracker_t, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <0021B0B0> ../public/tier0/utlblockvector.h:13
inline void CUtlBlockVector<FileHandleTracker_t, int>::CUtlBlockVector(int growSize, int initCapacity)
{
} /* size: 0 */

// <002178D5> ../public/tier0/utlblockvector.h:28
void iterator::iterator(CUtlBlockVector<FileHandleTracker_t, int>* pParent, int nIndex)
{
} /* size: 0 */

// <002178A4> ../public/tier0/utlblockvector.h:28
inline void iterator::iterator(CUtlBlockVector<FileHandleTracker_t, int>* pParent, int nIndex)
{
} /* size: 0 */

// <0021A9D5> ../public/tier0/utlblockvector.h:29
void iterator::~iterator()
{
} /* size: 0 */

// <0021A9BC> ../public/tier0/utlblockvector.h:29
inline void iterator::~iterator()
{
} /* size: 0 */

// <0021A97E> ../public/tier0/utlblockvector.h:33
inline void iterator::operator!=(const iterator& other)
{
} /* size: 0 */

// <0021A965> ../public/tier0/utlblockvector.h:37
inline void iterator::operator++()
{
} /* size: 0 */

// <0021A94C> ../public/tier0/utlblockvector.h:44
inline void iterator::operator*()
{
} /* size: 0 */

// <0021A9EC> ../public/tier0/utlblockvector.h:53
inline void CUtlBlockVector<FileHandleTracker_t, int>::begin()
{
} /* size: 0 */

// <0021A9A3> ../public/tier0/utlblockvector.h:54
inline void CUtlBlockVector<FileHandleTracker_t, int>::end()
{
} /* size: 0 */

