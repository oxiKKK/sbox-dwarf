
//
// thirdparty/spirv-tools/include/SPIRV/SPVRemapper.h
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 6
//

// <00145DDF> ../../thirdparty/spirv-tools/include/SPIRV/SPVRemapper.h:115
void spirvbin_t::spirvbin_t(int verbose)
{
} /* size: 0 */

// <00145DBA> ../../thirdparty/spirv-tools/include/SPIRV/SPVRemapper.h:115
inline void spirvbin_t::spirvbin_t(int verbose)
{
} /* size: 0 */

// <00142B36> ../../thirdparty/spirv-tools/include/SPIRV/SPVRemapper.h:118
// variables: 6
// function calls: 209
void spirvbin_t::~spirvbin_t()
{
	_Vector_base<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >::_M_get_Tp_allocator(); // 803
	_Destroy<std::pair<unsigned int, unsigned int>*, std::pair<unsigned int, unsigned int> >(pair<unsigned int, unsigned int>* __first,
												pair<unsigned int, unsigned int>* __last,
												allocator<std::pair<unsigned int, unsigned int> > &);  // 802
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
	_Vector_base<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<std::pair<unsigned int, unsigned int> >::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >::~_Vector_base(); // 805
	vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >::~vector(); // 118
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
	vector<unsigned int, std::allocator<unsigned int> >::~vector(); // 118
	_M_begin(const _Hashtable<unsigned int, std::pair<unsigned int const, unsigned int>, std::allocator<std::pair<unsigned int c this); // 1852
	{
		__node_ptr __tmp; // 1592
		_Hash_node<std::pair<unsigned int const, unsigned int>, false>::_M_next(); // 1593
		__new_allocator<std::__detail::_Hash_node<std::pair<unsigned int const, unsigned int>, false> >::deallocate(
				_Hash_node<std::pair<unsigned int const, unsigned int>, false>* __p,
				size_type __n);  // 215
		allocator<std::__detail::_Hash_node<std::pair<unsigned int const, unsigned int>, false> >::deallocate(
				_Hash_node<std::pair<unsigned int const, unsigned int>, false>* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 1583
		_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, unsigned int>, false> > >::_M_deallocate_node_ptr(
					__node_ptr __n);  // 1573
		_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, unsigned int>, false> > >::_M_deallocate_node(
					__node_ptr __n);  // 1594
	}
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, unsigned int>, false> > >::_M_deallocate_nodes(
				__node_ptr __n);  // 1852
	_M_uses_single_bucket(const _Hashtable<unsigned int, std::pair<unsigned int const, unsigned int>, std::allocator<std::pair<unsigned int c this,
				__buckets_ptr __bkts);  // 419
	__new_allocator<std::__detail::_Hash_node_base::__new_allocator(); // 183
	allocator<std::__detail::_Hash_node_base::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, unsigned int>, false> >(
													const allocator<std::__detail::_Hash_node<std::pair<unsigned int const, unsigned int>, false> >  &);  // 1618
	__new_allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_type __n);  // 215
	allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 1619
	allocator<std::__detail::_Hash_node_base::~allocator(); // 1620
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, unsigned int>, false> > >::_M_deallocate_buckets(
				__buckets_ptr __bkts,
				size_t __bkt_count);  // 422
	_M_deallocate_buckets(const _Hashtable<unsigned int, std::pair<unsigned int const, unsigned int>, std::allocator<std::pair<unsigned int const,  this,
				__buckets_ptr __bkts,
				size_type __bkt_count);  // 427
	_M_deallocate_buckets(const _Hashtable<unsigned int, std::pair<unsigned int const, unsigned int>, std::allocator<std::pair<unsigned int const, this); // 1853
	allocator<std::__detail::_Hash_node<std::pair<unsigned int const, unsigned int>, false> >::~allocator(); // 1013
	~_Hashtable_ebo_helper(const _Hashtable_ebo_helper<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, unsigned int>, false> this); // 1472
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, unsigned int>, false> > >::~_Hashtable_alloc(); // 1854
	~_Hashtable(const _Hashtable<unsigned int, std::pair<unsigned int const, unsigned int>, std::allocator<std::pair<unsigned int const, this); // 112
	~unordered_map(const unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std: this); // 118
	_M_begin(const _Hashtable<unsigned int, std::pair<unsigned int const, int>, std::allocator<std::pair<unsigned int const, int this); // 1852
	{
		__node_ptr __tmp; // 1592
		_Hash_node<std::pair<unsigned int const, int>, false>::_M_next(); // 1593
		__new_allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> >::deallocate(
				_Hash_node<std::pair<unsigned int const, int>, false>* __p,
				size_type __n);  // 215
		allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> >::deallocate(
				_Hash_node<std::pair<unsigned int const, int>, false>* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 1583
		_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> > >::_M_deallocate_node_ptr(
					__node_ptr __n);  // 1573
		_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> > >::_M_deallocate_node(
					__node_ptr __n);  // 1594
	}
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> > >::_M_deallocate_nodes(
				__node_ptr __n);  // 1852
	_M_uses_single_bucket(const _Hashtable<unsigned int, std::pair<unsigned int const, int>, std::allocator<std::pair<unsigned int const, int this,
				__buckets_ptr __bkts);  // 419
	__new_allocator<std::__detail::_Hash_node_base::__new_allocator(); // 183
	allocator<std::__detail::_Hash_node_base::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> >(
											const allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> >  &);  // 1618
	__new_allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_type __n);  // 215
	allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 1619
	allocator<std::__detail::_Hash_node_base::~allocator(); // 1620
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> > >::_M_deallocate_buckets(
				__buckets_ptr __bkts,
				size_t __bkt_count);  // 422
	_M_deallocate_buckets(const _Hashtable<unsigned int, std::pair<unsigned int const, int>, std::allocator<std::pair<unsigned int const, int> >, s this,
				__buckets_ptr __bkts,
				size_type __bkt_count);  // 427
	_M_deallocate_buckets(const _Hashtable<unsigned int, std::pair<unsigned int const, int>, std::allocator<std::pair<unsigned int const, int> >, s this); // 1853
	allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> >::~allocator(); // 1013
	~_Hashtable_ebo_helper(const _Hashtable_ebo_helper<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> >, true> this); // 1472
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> > >::~_Hashtable_alloc(); // 1854
	~_Hashtable(const _Hashtable<unsigned int, std::pair<unsigned int const, int>, std::allocator<std::pair<unsigned int const, int> >, s this); // 112
	~unordered_map(const unordered_map<unsigned int, int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<uns this); // 118
	_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_begin_node(); // 1609
	{
		_Node_ptr __y; // 2589
		_S_right(_Node_ptr __x); // 2588
		_S_left(_Node_ptr __x); // 2589
		_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_destroy_node(
				_Node_ptr __p);  // 1273
		__new_allocator<std::_Rb_tree_node<int> >::deallocate(
				_Rb_tree_node<int>* __p,
				size_type __n);  // 215
		allocator<std::_Rb_tree_node<int> >::deallocate(
				_Rb_tree_node<int>* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 1191
		_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_put_node(
				_Node_ptr __p);  // 1274
		_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_drop_node(
				_Node_ptr __p);  // 2590
	}
	_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_erase(
		_Node_ptr __x);  // 1609
	allocator<std::_Rb_tree_node<int> >::~allocator(); // 1303
	_Rb_tree_impl<std::less<int>, true>::~_Rb_tree_impl(); // 1609
	_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::~_Rb_tree(); // 305
	set<int, std::less<int>, std::allocator<int> >::~set(); // 118
	_M_begin(const _Hashtable<unsigned int, std::pair<unsigned int const, int>, std::allocator<std::pair<unsigned int const, int this); // 1852
	{
		__node_ptr __tmp; // 1592
		_Hash_node<std::pair<unsigned int const, int>, false>::_M_next(); // 1593
		__new_allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> >::deallocate(
				_Hash_node<std::pair<unsigned int const, int>, false>* __p,
				size_type __n);  // 215
		allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> >::deallocate(
				_Hash_node<std::pair<unsigned int const, int>, false>* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 1583
		_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> > >::_M_deallocate_node_ptr(
					__node_ptr __n);  // 1573
		_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> > >::_M_deallocate_node(
					__node_ptr __n);  // 1594
	}
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> > >::_M_deallocate_nodes(
				__node_ptr __n);  // 1852
	_M_uses_single_bucket(const _Hashtable<unsigned int, std::pair<unsigned int const, int>, std::allocator<std::pair<unsigned int const, int this,
				__buckets_ptr __bkts);  // 419
	__new_allocator<std::__detail::_Hash_node_base::__new_allocator(); // 183
	allocator<std::__detail::_Hash_node_base::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> >(
											const allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> >  &);  // 1618
	__new_allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_type __n);  // 215
	allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 1619
	allocator<std::__detail::_Hash_node_base::~allocator(); // 1620
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> > >::_M_deallocate_buckets(
				__buckets_ptr __bkts,
				size_t __bkt_count);  // 422
	_M_deallocate_buckets(const _Hashtable<unsigned int, std::pair<unsigned int const, int>, std::allocator<std::pair<unsigned int const, int> >, s this,
				__buckets_ptr __bkts,
				size_type __bkt_count);  // 427
	_M_deallocate_buckets(const _Hashtable<unsigned int, std::pair<unsigned int const, int>, std::allocator<std::pair<unsigned int const, int> >, s this); // 1853
	allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> >::~allocator(); // 1013
	~_Hashtable_ebo_helper(const _Hashtable_ebo_helper<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> >, true> this); // 1472
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, int>, false> > >::~_Hashtable_alloc(); // 1854
	~_Hashtable(const _Hashtable<unsigned int, std::pair<unsigned int const, int>, std::allocator<std::pair<unsigned int const, int> >, s this); // 112
	~unordered_map(const unordered_map<unsigned int, int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<uns this); // 118
	_M_begin(const _Hashtable<unsigned int, std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, std::allocato this); // 1852
	{
		__node_ptr __tmp; // 1592
		_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, false>::_M_next(); // 1593
		deallocate(const __new_allocator<std::__detail::_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, fa this,
				_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, false>* __p,
				size_type __n);  // 215
		deallocate(const allocator<std::__detail::_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, false> > this,
				_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, false>* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 1583
		_M_deallocate_node_ptr(const _Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, uns this,
					__node_ptr __n);  // 1573
		_M_deallocate_node(const _Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, uns this,
					__node_ptr __n);  // 1594
	}
	_M_deallocate_nodes(const _Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, uns this,
				__node_ptr __n);  // 1852
	_M_uses_single_bucket(const _Hashtable<unsigned int, std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, std::allocato this,
				__buckets_ptr __bkts);  // 419
	__new_allocator<std::__detail::_Hash_node_base::__new_allocator(); // 183
	allocator<std::__detail::_Hash_node_base::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, false> >(
																const allocator<std::__detail::_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, false> >);  // 1618
	__new_allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_type __n);  // 215
	allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 1619
	allocator<std::__detail::_Hash_node_base::~allocator(); // 1620
	_M_deallocate_buckets(const _Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, uns this,
				__buckets_ptr __bkts,
				size_t __bkt_count);  // 422
	_M_deallocate_buckets(const _Hashtable<unsigned int, std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, std::allocator<std: this,
				__buckets_ptr __bkts,
				size_type __bkt_count);  // 427
	_M_deallocate_buckets(const _Hashtable<unsigned int, std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, std::allocator<std: this); // 1853
	~allocator(const allocator<std::__detail::_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, false> > this); // 1013
	~_Hashtable_ebo_helper(const _Hashtable_ebo_helper<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, std::pair<unsigned int this); // 1472
	~_Hashtable_alloc(const _Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned int const, std::pair<unsigned int, uns this); // 1854
	~_Hashtable(const _Hashtable<unsigned int, std::pair<unsigned int const, std::pair<unsigned int, unsigned int> >, std::allocator<std: this); // 112
	~unordered_map(const unordered_map<unsigned int, std::pair<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned this); // 118
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_get_Tp_allocator(); // 803
	_Destroy<long unsigned int*, long unsigned int>(long unsigned int* __first,
							long unsigned int* __last,
							allocator<long unsigned int> &);  // 802
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
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<long unsigned int>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::~_Vector_base(); // 805
	vector<long unsigned int, std::allocator<long unsigned int> >::~vector(); // 118
	_M_begin(const _Hashtable<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<const s this); // 1852
	{
		__node_ptr __tmp; // 1592
		_M_next(const _Hash_node<std::pair<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, u this); // 1593
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
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 302
		pair<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned int>::~pair(); // 88
		destroy_at<std::pair<const std::__cxx11::basic_string<char>, unsigned int> >(pair<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned int>* __location); // 698
		destroy<std::pair<const std::__cxx11::basic_string<char>, unsigned int> >(allocator_type& __a,
												pair<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned int>* __p);  // 1572
		deallocate(const __new_allocator<std::__detail::_Hash_node<std::pair<const std::__cxx11::basic_string<char, std::char_traits<char>,  this,
				_Hash_node<std::pair<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned int> __p,
				size_type __n);  // 215
		deallocate(const allocator<std::__detail::_Hash_node<std::pair<const std::__cxx11::basic_string<char, std::char_traits<char>, std::a this,
				_Hash_node<std::pair<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned int> __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 1583
		_M_deallocate_node_ptr(const _Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::__cxx11::basic_string<char, std::cha this,
					__node_ptr __n);  // 1573
		_M_deallocate_node(const _Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::__cxx11::basic_string<char, std::cha this,
					__node_ptr __n);  // 1594
	}
	_M_deallocate_nodes(const _Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::__cxx11::basic_string<char, std::cha this,
				__node_ptr __n);  // 1852
	_M_uses_single_bucket(const _Hashtable<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<const s this,
				__buckets_ptr __bkts);  // 419
	__new_allocator<std::__detail::_Hash_node_base::__new_allocator(); // 183
	allocator<std::__detail::_Hash_node_base::allocator<std::__detail::_Hash_node<std::pair<const std::__cxx11::basic_string<char>, unsigned int>, true> >(
															const allocator<std::__detail::_Hash_node<std::pair<const std::__cxx11::basic_string<char, std::char_traits<char>, std::a);  // 1618
	__new_allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_type __n);  // 215
	allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 1619
	allocator<std::__detail::_Hash_node_base::~allocator(); // 1620
	_M_deallocate_buckets(const _Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::__cxx11::basic_string<char, std::cha this,
				__buckets_ptr __bkts,
				size_t __bkt_count);  // 422
	_M_deallocate_buckets(const _Hashtable<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<const std::__ this,
				__buckets_ptr __bkts,
				size_type __bkt_count);  // 427
	_M_deallocate_buckets(const _Hashtable<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<const std::__ this); // 1853
	~allocator(const allocator<std::__detail::_Hash_node<std::pair<const std::__cxx11::basic_string<char, std::char_traits<char>, std::a this); // 1013
	~_Hashtable_ebo_helper(const _Hashtable_ebo_helper<std::allocator<std::__detail::_Hash_node<std::pair<const std::__cxx11::basic_string<char, std this); // 1472
	~_Hashtable_alloc(const _Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::__cxx11::basic_string<char, std::cha this); // 1854
	~_Hashtable(const _Hashtable<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<const std::__ this); // 112
	~unordered_map(const unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned int, std::h this); // 118
	_M_get_Tp_allocator(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this); // 803
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 88
	destroy_at<std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 164
	_Destroy<std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __pointer); // 226
	_Destroy<std::__cxx11::basic_string<char>*>(basic_string<char, std::char_traits<char>, std::allocator<char> >* __first,
							basic_string<char, std::char_traits<char>, std::allocator<char> >* __last);  // 1045
	_Destroy<std::__cxx11::basic_string<char>*, std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __first,
											basic_string<char, std::char_traits<char>, std::allocator<char> >* __last,
											allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > &);  // 802
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
	_M_deallocate(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
			pointer __p,
			size_t __n);  // 375
	allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	~_Vector_base(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this); // 805
	~vector(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 118
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
	_Vector_base<unsigned int, std::allocator<unsigned int> >::~_Vector_base(); // 805
	vector<unsigned int, std::allocator<unsigned int> >::~vector(); // 118
} /* size: 667, inline expansions: 157 (2607 bytes) */

// <00142ACF> ../../thirdparty/spirv-tools/include/SPIRV/SPVRemapper.h:118
void spirvbin_t::~spirvbin_t()
{
} /* size: 36 */

// <00142AB6> ../../thirdparty/spirv-tools/include/SPIRV/SPVRemapper.h:118
inline void spirvbin_t::~spirvbin_t()
{
} /* size: 0 */

// <00142A9F> ../../thirdparty/spirv-tools/include/SPIRV/SPVRemapper.h:132
inline void registerErrorHandler(errorfn_t handler)
{
} /* size: 0 */

