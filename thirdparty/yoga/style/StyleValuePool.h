
//
// thirdparty/yoga/style/StyleValuePool.h
//
//	referenced by: libengine2.so
//
//	functions: 21
//

// <02ABDD75> ../thirdparty/yoga/style/StyleValuePool.h:27
void StyleValuePool::~StyleValuePool()
{
} /* size: 0 */

// <02ABDD59> ../thirdparty/yoga/style/StyleValuePool.h:27
inline void StyleValuePool::~StyleValuePool()
{
} /* size: 0 */

// <02ABDC3B> ../thirdparty/yoga/style/StyleValuePool.h:27
void StyleValuePool::StyleValuePool()
{
} /* size: 0 */

// <02ABDC1F> ../thirdparty/yoga/style/StyleValuePool.h:27
inline void StyleValuePool::StyleValuePool()
{
} /* size: 0 */

// <02ABD5F7> ../thirdparty/yoga/style/StyleValuePool.h:27
void StyleValuePool::StyleValuePool(StyleValuePool &)
{
} /* size: 0 */

// <02ABD5D6> ../thirdparty/yoga/style/StyleValuePool.h:27
inline void StyleValuePool::StyleValuePool(StyleValuePool &)
{
} /* size: 0 */

// <02AAA310> ../thirdparty/yoga/style/StyleValuePool.h:27
inline void StyleValuePool::operator=(StyleValuePool &)
{
} /* size: 0 */

// <0293B8AB> ../thirdparty/yoga/style/StyleValuePool.h:27
inline void StyleValuePool::operator=(const StyleValuePool &)
{
} /* size: 0 */

// <028F2FAE> ../thirdparty/yoga/style/StyleValuePool.h:27
void StyleValuePool::StyleValuePool(const StyleValuePool &)
{
} /* size: 0 */

// <028F2F8D> ../thirdparty/yoga/style/StyleValuePool.h:27
inline void StyleValuePool::StyleValuePool(const StyleValuePool &)
{
} /* size: 0 */

// <0293C98F> ../thirdparty/yoga/style/StyleValuePool.h:29
// variable: 1
inline void StyleValuePool::store(StyleValueHandle& handle, StyleLength length)
{
	{
		Type type; // 35
	}
} /* size: 0 */

// <0293C95E> ../thirdparty/yoga/style/StyleValuePool.h:42
inline void StyleValuePool::store(StyleValueHandle& handle, FloatOptional number)
{
} /* size: 0 */

// <02AC6639> ../thirdparty/yoga/style/StyleValuePool.h:50
// variable: 1
// function calls: 20
void StyleValuePool::getLength(StyleValueHandle handle)
{
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 51
	{
		float value; // 59
		StyleValueHandle::value(); // 60
		unpackInlineInteger(uint16_t value); // 61
		isinf<float>(float value); // 41
		StyleLength::StyleLength(
				FloatOptional value,
				Unit unit);  // 43
		percent(float value); // 65
		isinf<float>(float value); // 35
		points(float value); // 64
		array<unsigned int, 4>::operator[](
				size_type __n);  // 98
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
		get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
		operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
		vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
		vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned int, std::allocator<unsigned int> >::operator[](
				size_type __n);  // 1316
		vector<unsigned int, std::allocator<unsigned int> >::at(
			size_type __n);  // 100
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 96
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 60
		bit_cast<float, unsigned int>(const unsigned int& __from); // 60
	}
} /* size: 335, inline expansions: 2 (0 bytes) */

// <02AC5F56> ../thirdparty/yoga/style/StyleValuePool.h:50
// variable: 1
inline void StyleValuePool::getLength(StyleValueHandle handle)
{
	{
		float value; // 59
	}
} /* size: 0 */

// <02AC5F23> ../thirdparty/yoga/style/StyleValuePool.h:69
// variable: 1
inline void StyleValuePool::getNumber(StyleValueHandle handle)
{
	{
		float value; // 74
	}
} /* size: 0 */

// <029FA585> ../thirdparty/yoga/style/StyleValuePool.h:69
// variable: 1
// function calls: 16
void StyleValuePool::getNumber(StyleValueHandle handle)
{
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 70
	{
		float value; // 74
		StyleValueHandle::value(); // 75
		unpackInlineInteger(uint16_t value); // 76
		FloatOptional::FloatOptional(
				float value);  // 77
		array<unsigned int, 4>::operator[](
				size_type __n);  // 98
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
		get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
		operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
		vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
		vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned int, std::allocator<unsigned int> >::operator[](
				size_type __n);  // 1316
		vector<unsigned int, std::allocator<unsigned int> >::at(
			size_type __n);  // 100
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 96
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 75
		bit_cast<float, unsigned int>(const unsigned int& __from); // 75
	}
} /* size: 131, inline expansions: 2 (0 bytes) */

// <0293DCA7> ../thirdparty/yoga/style/StyleValuePool.h:82
// variables: 3
// function calls: 82
void StyleValuePool::storeValue(StyleValueHandle& handle, float value, Type type)
{
	{
		short unsigned int newIndex; // 95
		bit_cast<unsigned int, float>(const float& __from); // 95
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
		get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 489
		operator bool(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 854
		operator==<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer<4>::Overflow> >(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer<4>:: __x,
																nullptr_t);  // 40
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
		get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
		operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 44
		construct_at<unsigned int, unsigned int const&>(unsigned int* __location); // 676
		construct<unsigned int, unsigned int const&>(allocator_type& __a,
								unsigned int* __p);  // 1421
		vector<unsigned int, std::allocator<unsigned int> >::size(); // 2199
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 2202
		vector<unsigned int, std::allocator<unsigned int> >::_M_check_len(
				size_type __n,
				const char* __s);  // 566
		__normal_iterator<unsigned int::__normal_iterator(
					unsigned int* const& __i);  // 999
		vector<unsigned int, std::allocator<unsigned int> >::begin(); // 571
		__normal_iterator<unsigned int::__normal_iterator(
					unsigned int* const& __i);  // 1019
		vector<unsigned int, std::allocator<unsigned int> >::end(); // 571
		__new_allocator<unsigned int>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<unsigned int>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<unsigned int, std::allocator<unsigned int> >::_M_allocate(
				size_t __n);  // 572
		{
			_Guard_alloc __guard; // 576
			construct_at<unsigned int, unsigned int const&>(unsigned int* __location); // 676
			construct<unsigned int, unsigned int const&>(allocator_type& __a,
									unsigned int* __p);  // 586
			_Guard_alloc::_Guard_alloc(
					pointer __s,
					size_type __l,
					_Base& __vect);  // 576
			__relocate_a_1<unsigned int, unsigned int>(unsigned int* __first,
									unsigned int* __last,
									unsigned int* __result,
									allocator<unsigned int>& __alloc);  // 1359
			__relocate_a<unsigned int*, unsigned int*, std::allocator<unsigned int> >(unsigned int* __first,
													unsigned int* __last,
													unsigned int* __result,
													allocator<unsigned int>& __alloc);  // 539
			_S_relocate(pointer __first,
					pointer __last,
					pointer __result,
					_Tp_alloc_type& __alloc);  // 599
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
					size_t __n);  // 1883
			_Guard_alloc::~_Guard_alloc(); // 640
		}
		vector<unsigned int, std::allocator<unsigned int> >::_M_realloc_append<unsigned int const&>(); // 1427
		vector<unsigned int, std::allocator<unsigned int> >::push_back(
				const value_type& __x);  // 44
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
		get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
		operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 45
		_Bvector_impl::_M_end_addr(); // 1249
		_Bit_iterator_base::_M_bump_up(); // 206
		_Bit_iterator_base::_M_bump_up(); // 351
		_Bit_iterator::operator++(
				int);  // 1250
		_Bit_reference::_Bit_reference(
				_Bit_type* __x,
				_Bit_type __y);  // 335
		_Bit_iterator::operator*(); // 1250
		vector<bool, std::allocator<bool> >::push_back(
				bool __x);  // 45
		array<unsigned int, 4>::operator[](
				size_type __n);  // 36
		__new_allocator<unsigned int>::__new_allocator(); // 168
		allocator<unsigned int>::allocator(); // 148
		_Vector_impl_data::_Vector_impl_data(); // 148
		_Vector_impl::_Vector_impl(); // 321
		_Vector_base<unsigned int, std::allocator<unsigned int> >::_Vector_base(); // 561
		vector<unsigned int, std::allocator<unsigned int> >::vector(); // 122
		__new_allocator<long unsigned int>::__new_allocator(); // 168
		allocator<long unsigned int>::allocator(); // 605
		_Bit_iterator_base::_Bit_iterator_base(
					_Bit_type* __x,
					unsigned int __y);  // 319
		_Bit_iterator::_Bit_iterator(); // 558
		_Bit_iterator_base::_Bit_iterator_base(
					_Bit_type* __x,
					unsigned int __y);  // 319
		_Bit_iterator::_Bit_iterator(); // 558
		_Bvector_impl_data::_Bvector_impl_data(); // 605
		_Bvector_impl::_Bvector_impl(); // 656
		_Bvector_base<std::allocator<bool> >::_Bvector_base(); // 787
		vector<bool, std::allocator<bool> >::vector(); // 122
		Overflow::Overflow(); // 1084
		_Head_base<1, std::default_delete<facebook::yoga::SmallValueBuffer<4>::Overflow>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<facebook::yoga::SmallValueBuffer<4>::Overflow> >::_Tuple_impl(); // 303
		_Head_base<0, facebook::yoga::SmallValueBuffer<4>::Overflow::_Head_base(); // 303
		_Tuple_impl<0, facebook::yoga::SmallValueBuffer<4>::Overflow::_Tuple_impl(); // 966
		tuple<facebook::yoga::SmallValueBuffer<4>::Overflow::tuple(); // 169
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer this); // 169
		__uniq_ptr_impl(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer this,
				pointer __p);  // 234
		__uniq_ptr_data(const __uniq_ptr_data<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer this,
				pointer);  // 311
		unique_ptr<>(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer<4>:: this,
				pointer __p);  // 1084
		make_unique<facebook::yoga::SmallValueBuffer<4>::Overflow>(void); // 41
		reset(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer this,
			pointer __p);  // 184
		operator=(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer this,
				__uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer<4>::O __u);  // 236
		operator=(const __uniq_ptr_data<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer this,
				__uniq_ptr_data<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer<4>::O);  // 408
		operator=(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer<4>:: this,
				unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer<4>::Overfl);  // 41
		{
			Overflow *& __ptr; // 396
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer this); // 396
		}
		~unique_ptr(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer<4>:: this); // 41
		SmallValueBuffer<4>::push(
			uint32_t value);  // 95
		StyleValueHandle::setValue(
			uint16_t value);  // 96
		StyleValueHandle::setValueIsIndexed(); // 97
	}
} /* size: 0 */

// <0293C86B> ../thirdparty/yoga/style/StyleValuePool.h:82
// variables: 2
inline void StyleValuePool::storeValue(StyleValueHandle& handle, float value, Type type)
{
	{
		short unsigned int newIndex; // 89
	}
	{
		short unsigned int newIndex; // 95
	}
} /* size: 0 */

// <0293C83D> ../thirdparty/yoga/style/StyleValuePool.h:101
// variables: 2
inline void isIntegerPackable(float f)
{
	const uint16_t  kMaxInlineAbsValue; // 102
	int i; // 104
} /* size: 0, variables: 2 */

// <0293C81A> ../thirdparty/yoga/style/StyleValuePool.h:109
// variable: 1
inline void packInlineInteger(float value)
{
	uint16_t isNegative; // 110
} /* size: 0, variables: 1 */

// <02AC5EE4> ../thirdparty/yoga/style/StyleValuePool.h:116
// variables: 3
inline void unpackInlineInteger(uint16_t value)
{
	const uint16_t  kValueSignMask; // 117
	const uint16_t  kValueMagnitudeMask; // 118
	const bool  isNegative; // 119
} /* size: 0, variables: 3 */

