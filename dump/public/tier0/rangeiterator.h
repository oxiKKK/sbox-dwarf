
//
// public/tier0/rangeiterator.h
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
//	functions: 6
//	classes: 2
//

// <00013788> ../public/tier0/rangeiterator.h:10
// member functions: 10
// member variable: 1
// class size: 4
class IntegerRangeIterator_t {
	/* ../public/tier0/rangeiterator.h:14 */
	struct IntegerValue_t {
		int m_nValue; /* 0 4 */
		/* ../public/tier0/rangeiterator.h:17 */
		void IntegerValue_t(IntegerValue_t* , int);
		/* ../public/tier0/rangeiterator.h:18 */
		void operator++(IntegerValue_t* );
		/* ../public/tier0/rangeiterator.h:19 */
		int operator*(const IntegerValue_t* );
		/* ../public/tier0/rangeiterator.h:20 */
		int operator!=(const IntegerValue_t* , const IntegerValue_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	int m_nLimit; /* 0 4 */
	/* ../public/tier0/rangeiterator.h:23 */
	void IntegerRangeIterator_t(IntegerRangeIterator_t* , int);
	/* ../public/tier0/rangeiterator.h:24 */
	IntegerValue_t begin(const IntegerRangeIterator_t* );
	/* ../public/tier0/rangeiterator.h:25 */
	IntegerValue_t end(const IntegerRangeIterator_t* );
	void IntegerRangeIterator_t(class IntegerRangeIterator_t *, int); /* linkage=_ZN22IntegerRangeIterator_tC4Ei */
	class IntegerValue_t begin(const class IntegerRangeIterator_t  *); /* linkage=_ZNK22IntegerRangeIterator_t5beginEv */
	class IntegerValue_t end(const class IntegerRangeIterator_t  *); /* linkage=_ZNK22IntegerRangeIterator_t3endEv */
};

// <05812C59> ../../public/tier0/rangeiterator.h:10
// member functions: 10
// member variable: 1
// class size: 4
class IntegerRangeIterator_t {
	/* ../../public/tier0/rangeiterator.h:14 */
	struct IntegerValue_t {
		int m_nValue; /* 0 4 */
		/* ../../public/tier0/rangeiterator.h:17 */
		void IntegerValue_t(IntegerValue_t* , int);
		/* ../../public/tier0/rangeiterator.h:18 */
		void operator++(IntegerValue_t* );
		/* ../../public/tier0/rangeiterator.h:19 */
		int operator*(const IntegerValue_t* );
		/* ../../public/tier0/rangeiterator.h:20 */
		int operator!=(const IntegerValue_t* , const IntegerValue_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	int m_nLimit; /* 0 4 */
	/* ../../public/tier0/rangeiterator.h:23 */
	void IntegerRangeIterator_t(IntegerRangeIterator_t* , int);
	/* ../../public/tier0/rangeiterator.h:24 */
	IntegerValue_t begin(const IntegerRangeIterator_t* );
	/* ../../public/tier0/rangeiterator.h:25 */
	IntegerValue_t end(const IntegerRangeIterator_t* );
	void IntegerRangeIterator_t(class IntegerRangeIterator_t *, int); /* linkage=_ZN22IntegerRangeIterator_tC4Ei */
	class IntegerValue_t begin(const class IntegerRangeIterator_t  *); /* linkage=_ZNK22IntegerRangeIterator_t5beginEv */
	class IntegerValue_t end(const class IntegerRangeIterator_t  *); /* linkage=_ZNK22IntegerRangeIterator_t3endEv */
};

// <064E6CB2> ../public/tier0/rangeiterator.h:17
void IntegerValue_t::IntegerValue_t(int n)
{
} /* size: 0 */

// <064E6C8F> ../public/tier0/rangeiterator.h:17
inline void IntegerValue_t::IntegerValue_t(int n)
{
} /* size: 0 */

// <064E6C1E> ../public/tier0/rangeiterator.h:23
void IntegerRangeIterator_t::IntegerRangeIterator_t(int n)
{
} /* size: 0 */

// <064E6BFB> ../public/tier0/rangeiterator.h:23
inline void IntegerRangeIterator_t::IntegerRangeIterator_t(int n)
{
} /* size: 0 */

// <064E6BE2> ../public/tier0/rangeiterator.h:24
inline void IntegerRangeIterator_t::begin()
{
} /* size: 0 */

// <064E6BC9> ../public/tier0/rangeiterator.h:25
inline void IntegerRangeIterator_t::end()
{
} /* size: 0 */

