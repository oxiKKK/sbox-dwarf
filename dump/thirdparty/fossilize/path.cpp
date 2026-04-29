
//
// thirdparty/fossilize/path.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 26
//

// <01A87A18> thirdparty/fossilize/path.cpp:48
void join_helper<const std::__cxx11::basic_string<char>&>(ostringstream& stream, const basic_string<char, std::char_traits<char>, std::allocator<char> >& t)
{
} /* size: 0 */

// <01A884FD> thirdparty/fossilize/path.cpp:54
void join_helper<const std::__cxx11::basic_string<char>&, char const*, const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&>(ostringstream& stream, const basic_string<char, std::char_traits<char>, std::allocator<char> >& t)
{
} /* size: 0 */

// <01A87DC8> thirdparty/fossilize/path.cpp:54
void join_helper<char const*, const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&>(ostringstream& stream, const char *& t)
{
} /* size: 0 */

// <01A88E78> thirdparty/fossilize/path.cpp:62
// variables: 10
// function calls: 109
void join<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&, char const*, const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&>(void)
{
	ostringstream stream; // 64
	basic_ios<char, std::char_traits<char> >::basic_ios(); // 814
	basic_ostream<char, std::char_traits<char> >::basic_ostream(
			const int  __in_chrg,
			const void **  __vtt_parm);  // 814
	basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 136
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 590
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
	allocator<char>::~allocator(); // 590
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 593
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 136
	basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
			openmode __mode);  // 814
	basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >::basic_ostringstream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 64
	operator<< <char, std::char_traits<char>, std::allocator<char> >(basic_ostream<char, std::char_traits<char> >& __os,
									const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 56
	length(const char_type* __s); // 740
	basic_ios<char, std::char_traits<char> >::rdstate(); // 167
	operator|(_Ios_Iostate __a,
			_Ios_Iostate __b);  // 167
	basic_ios<char, std::char_traits<char> >::setstate(
		iostate __state);  // 737
	operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
						const char* __s);  // 734
	operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
						const char* __s);  // 56
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 4372
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2887
	basic_string<char, std::char_traits<char>, std::allocator<char> >::data(); // 4372
	operator<< <char, std::char_traits<char>, std::allocator<char> >(basic_ostream<char, std::char_traits<char> >& __os,
									const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 50
	join_helper<const std::__cxx11::basic_string<char>&>(ostringstream& stream,
								const basic_string<char, std::char_traits<char>, std::allocator<char> >& t);  // 57
	join_helper<char const*, const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&>(ostringstream& stream,
															const char  *& t);  // 57
	join_helper<const std::__cxx11::basic_string<char>&, char const*, const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&>(ostringstream& stream,
																const basic_string<char, std::char_traits<char>, std::allocator<char> >& t);  // 65
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 2908
	basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator(); // 254
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 602
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 602
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 605
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 604
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const allocator<char>& __a);  // 254
	{
		char_type* __hi; // 255
		{
			char_type* __pptr; // 447
			basic_streambuf<char, std::char_traits<char> >::pptr(); // 447
			{
				char_type* __egptr; // 449
				basic_streambuf<char, std::char_traits<char> >::egptr(); // 449
			}
		}
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_M_high_mark(); // 255
		basic_streambuf<char, std::char_traits<char> >::pbase(); // 256
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
				size_type __n1,
				size_type __n2,
				const char* __s);  // 546
		{
			pointer __p; // 553
			const size_type  __how_much; // 555
			less<char const::operator(
					const char* __x,
					const char* __y);  // 440
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_disjunct(
					const char* __s);  // 568
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			assign(char_type& __c1,
				const char_type& __c2);  // 451
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 573
		}
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 363
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 368
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 374
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 375
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_mutate(
				size_type __pos,
				size_type __len1,
				const char* __s,
				size_type __len2);  // 579
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 581
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_replace(
				size_type __pos,
				size_type __len1,
				const char* __s,
				const size_type  __len2);  // 1888
		basic_string<char, std::char_traits<char>, std::allocator<char> >::assign<char*>(
				char* __first,
				char* __last);  // 256
		{
			const size_type  __rsize; // 313
			const size_type  __capacity; // 314
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 328
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
			basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 313
			{
				size_type __new_capacity; // 318
				pointer __tmp; // 319
				__new_allocator<char>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<char>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 142
				_S_allocate(_Char_alloc_type& __a,
						size_type __n);  // 164
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
						size_type& __capacity,
						size_type __old_capacity);  // 319
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
						size_type __capacity);  // 322
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
					pointer __p);  // 321
			}
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
			assign(char_type& __c1,
				const char_type& __c2);  // 451
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 326
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
		}
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_assign(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1771
		basic_string<char, std::char_traits<char>, std::allocator<char> >::assign(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 906
		basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 258
	}
	allocator<char>::~allocator(); // 254
	basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str(); // 942
	basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >::str(); // 66
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 81
	basic_streambuf<char, std::char_traits<char> >::~basic_streambuf(); // 81
	basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 860
	basic_ostream<char, std::char_traits<char> >::~basic_ostream(
			const int  __in_chrg,
			const void **  __vtt_parm);  // 860
	basic_ios<char, std::char_traits<char> >::~basic_ios(); // 860
	basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_ostringstream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 67
} /* size: 1116, variables: 1, inline expansions: 60 (2318 bytes) */

// <01AA0175> thirdparty/fossilize/path.cpp:72
// variables: 9
// function calls: 374
void split(const string& str, const char* delim, bool allow_empty)
{
	vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > ret; // 76
	size_t start_index; // 78
	size_t index; // 79
	basic_string<char, std::char_traits<char>, std::allocator<char> >::empty(); // 74
	length(const char_type* __s); // 3145
	{
		const char* __p; // 761
		find(const char_type* __s,
			size_t __n,
			const char_type& __a);  // 761
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find_first_of(
			const char* __s,
			size_type __pos,
			size_type __n);  // 3145
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find_first_of(
			const char* __s,
			size_type __pos);  // 80
	__new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::__new_allocator(
			const __new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >  &);  // 173
	allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::allocator(
			const allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& __a);  // 161
	_Vector_impl_data::_Vector_impl_data(
				_Vector_impl_data& __x);  // 161
	_Vector_impl::_Vector_impl(
			_Vector_impl& __x);  // 344
	_Vector_base(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
			_Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11);  // 650
	vector(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this,
		vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basi);  // 92
	_M_get_Tp_allocator(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this); // 803
	_Destroy<std::__cxx11::basic_string<char>*>(basic_string<char, std::char_traits<char>, std::allocator<char> >* __first,
							basic_string<char, std::char_traits<char>, std::allocator<char> >* __last);  // 1045
	_Destroy<std::__cxx11::basic_string<char>*, std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __first,
											basic_string<char, std::char_traits<char>, std::allocator<char> >* __last,
											allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > &);  // 802
	_M_deallocate(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
			pointer __p,
			size_t __n);  // 375
	allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	~_Vector_base(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this); // 805
	~vector(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 93
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 648
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 648
	{
		const char* __start; // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
			size_type __pos,
			size_type __off);  // 652
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
			size_type __pos,
			const char* __s);  // 651
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 652
	}
	allocator<char>::~allocator(); // 648
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str,
			size_type __pos,
			size_type __n);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(
		size_type __pos,
		size_type __n);  // 83
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 648
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 648
	{
		const char* __start; // 650
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 652
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
			size_type __pos,
			const char* __s);  // 651
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
			size_type __pos,
			size_type __off);  // 652
	}
	allocator<char>::~allocator(); // 648
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str,
			size_type __pos,
			size_type __n);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(
		size_type __pos,
		size_type __n);  // 91
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 754
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 110
	construct_at<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 676
	construct<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(allocator_type& __a,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 117
	__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 1019
	end(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 1371
	__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 1160
	__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator-(
			difference_type __n);  // 1371
	back(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 125
	size(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this); // 2199
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 2202
	_M_check_len(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
			size_type __n,
			const char* __s);  // 566
	__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 999
	begin(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 571
	__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 1019
	end(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 571
	__new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_M_allocate(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
			size_t __n);  // 572
	{
		_Guard_alloc __guard; // 576
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 754
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 762
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 748
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
				basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 110
		construct_at<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 676
		construct<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(allocator_type& __a,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 586
		_Guard_alloc::_Guard_alloc(
				pointer __s,
				size_type __l,
				_Base& __vect);  // 576
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 754
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 762
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 748
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
				basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 110
		construct_at<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 676
		construct<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(allocator_type& __a,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 1288
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 88
		destroy_at<std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 698
		destroy<std::__cxx11::basic_string<char> >(allocator_type& __a,
								basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 1289
		__relocate_object_a<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __dest,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __orig,
																allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& __alloc);  // 1317
		__relocate_a_1<std::__cxx11::basic_string<char>*, std::__cxx11::basic_string<char>*, std::allocator<std::__cxx11::basic_string<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __first,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __last,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __result,
																allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& __alloc);  // 1359
		__relocate_a<std::__cxx11::basic_string<char>*, std::__cxx11::basic_string<char>*, std::allocator<std::__cxx11::basic_string<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __first,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __last,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __result,
																allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& __alloc);  // 539
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
		_M_deallocate(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
				pointer __p,
				size_t __n);  // 1883
		_Guard_alloc::~_Guard_alloc(); // 640
	}
	_M_realloc_append<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 123
	emplace_back<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 1434
	push_back(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this,
			value_type& __x);  // 91
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 91
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 754
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 110
	construct_at<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 676
	construct<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(allocator_type& __a,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 117
	__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 1019
	end(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 1371
	__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 1160
	__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator-(
			difference_type __n);  // 1371
	back(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 125
	size(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this); // 2199
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 2202
	_M_check_len(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
			size_type __n,
			const char* __s);  // 566
	__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 999
	begin(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 571
	__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 1019
	end(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 571
	__new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_M_allocate(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
			size_t __n);  // 572
	{
		_Guard_alloc __guard; // 576
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 754
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 762
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 748
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
				basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 110
		construct_at<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 676
		construct<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(allocator_type& __a,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 586
		_Guard_alloc::_Guard_alloc(
				pointer __s,
				size_type __l,
				_Base& __vect);  // 576
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 754
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 762
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 748
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
				basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 110
		construct_at<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 676
		construct<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(allocator_type& __a,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 1288
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 88
		destroy_at<std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 698
		destroy<std::__cxx11::basic_string<char> >(allocator_type& __a,
								basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 1289
		__relocate_object_a<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __dest,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __orig,
																allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& __alloc);  // 1317
		__relocate_a_1<std::__cxx11::basic_string<char>*, std::__cxx11::basic_string<char>*, std::allocator<std::__cxx11::basic_string<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __first,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __last,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __result,
																allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& __alloc);  // 1359
		__relocate_a<std::__cxx11::basic_string<char>*, std::__cxx11::basic_string<char>*, std::allocator<std::__cxx11::basic_string<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __first,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __last,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __result,
																allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& __alloc);  // 539
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
		_M_deallocate(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
				pointer __p,
				size_t __n);  // 1883
		_Guard_alloc::~_Guard_alloc(); // 640
	}
	_M_realloc_append<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 123
	emplace_back<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 1434
	push_back(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this,
			value_type& __x);  // 83
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 83
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 86
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 590
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 593
	allocator<char>::~allocator(); // 590
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 110
	construct_at<std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 676
	construct<std::__cxx11::basic_string<char> >(allocator_type& __a,
							basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 117
	size(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this); // 2199
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 2202
	_M_check_len(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
			size_type __n,
			const char* __s);  // 566
	__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 999
	begin(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 571
	__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 1019
	end(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 571
	__new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_M_allocate(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
			size_t __n);  // 572
	{
		_Guard_alloc __guard; // 576
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 754
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 762
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 748
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
				basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 110
		construct_at<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 676
		construct<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(allocator_type& __a,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 1288
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 88
		destroy_at<std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 698
		destroy<std::__cxx11::basic_string<char> >(allocator_type& __a,
								basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 1289
		__relocate_object_a<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __dest,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __orig,
																allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& __alloc);  // 1317
		__relocate_a_1<std::__cxx11::basic_string<char>*, std::__cxx11::basic_string<char>*, std::allocator<std::__cxx11::basic_string<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __first,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __last,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __result,
																allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& __alloc);  // 1359
		__relocate_a<std::__cxx11::basic_string<char>*, std::__cxx11::basic_string<char>*, std::allocator<std::__cxx11::basic_string<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __first,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __last,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __result,
																allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& __alloc);  // 539
		_S_relocate(pointer __first,
				pointer __last,
				pointer __result,
				_Tp_alloc_type& __alloc);  // 599
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 590
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 593
		allocator<char>::~allocator(); // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 110
		construct_at<std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 676
		construct<std::__cxx11::basic_string<char> >(allocator_type& __a,
								basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 586
		_Guard_alloc::_Guard_alloc(
				pointer __s,
				size_type __l,
				_Base& __vect);  // 576
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
				size_t __n);  // 1883
		_Guard_alloc::~_Guard_alloc(); // 640
	}
	_M_realloc_append<>(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 123
	emplace_back<>(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 87
} /* size: 0, variables: 3, inline expansions: 150 (9339 bytes) */

// <01AA00F5> thirdparty/fossilize/path.cpp:95
void split(const string& str, const char* delim)
{
} /* size: 0 */

// <01AA5C4E> thirdparty/fossilize/path.cpp:100
void split_no_empty(const string& str, const char* delim)
{
} /* size: 65 */

// <01A9D8E3> thirdparty/fossilize/path.cpp:105
// variables: 7
// function calls: 158
void strip_whitespace(const string& str)
{
	string ret; // 107
	long unsigned int index; // 108
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 590
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
	allocator<char>::~allocator(); // 590
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 593
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 107
	find(const char_type* __s,
		size_t __n,
		const char_type& __a);  // 800
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find_first_not_of(
				const char* __s,
				size_type __pos,
				size_type __n);  // 3322
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find_first_not_of(
				const char* __s,
				size_type __pos);  // 108
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
		size_type __pos,
		const char* __s);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 648
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 648
	{
		const char* __start; // 650
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 652
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
			size_type __pos,
			const char* __s);  // 651
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
			size_type __pos,
			size_type __off);  // 652
	}
	allocator<char>::~allocator(); // 648
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str,
			size_type __pos,
			size_type __n);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(
		size_type __pos,
		size_type __n);  // 111
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 950
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 961
	{
		pointer __data; // 976
		size_type __capacity; // 977
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 990
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 991
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 991
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 995
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 996
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 999
	}
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 969
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 970
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 970
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 1323
	basic_string<char, std::char_traits<char>, std::allocator<char> >::clear(); // 1003
	basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 111
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 111
	find(const char_type* __s,
		size_t __n,
		const char_type& __a);  // 832
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_not_of(
			const char* __s,
			size_type __pos,
			size_type __n);  // 3409
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_not_of(
			const char* __s,
			size_type __pos);  // 112
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 648
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 648
	{
		const char* __start; // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
			size_type __pos,
			size_type __off);  // 652
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
			size_type __pos,
			const char* __s);  // 651
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 652
	}
	allocator<char>::~allocator(); // 648
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str,
			size_type __pos,
			size_type __n);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(
		size_type __pos,
		size_type __n);  // 114
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 117
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
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
		length(const char_type* __s); // 713
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 110
	allocator<char>::~allocator(); // 110
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 754
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 116
} /* size: 0, variables: 2, inline expansions: 98 (0 bytes) */

// <01A9C1EF> thirdparty/fossilize/path.cpp:119
// variables: 3
// function calls: 100
void enforce_protocol(const string& path)
{
	long unsigned int index; // 124
	basic_string<char, std::char_traits<char>, std::allocator<char> >::empty(); // 121
	find(const char_type* __s,
		size_t __n,
		const char_type& __a);  // 678
	compare(const char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 684
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
		const char* __s,
		size_type __pos,
		size_type __n);  // 2976
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
		const char* __s,
		size_type __pos);  // 124
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
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
		length(const char_type* __s); // 713
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 126
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
			size_type __n1,
			size_type __n2,
			const char* __s);  // 1569
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 457
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 452
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
			const char* __s,
			size_type __n);  // 1570
	basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
		const char* __s,
		size_type __n);  // 1536
	basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
		const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 3926
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 754
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 3926
	operator+<char, std::char_traits<char>, std::allocator<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >& __lhs,
									const basic_string<char, std::char_traits<char>, std::allocator<char> >& __rhs);  // 126
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 126
	allocator<char>::~allocator(); // 126
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 726
	select_on_container_copy_construction(const allocator_type& __rhs); // 100
	_S_select_on_copy(const allocator<char>& __a); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 614
	allocator<char>::~allocator(); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
	__new_allocator<char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 142
	_S_allocate(_Char_alloc_type& __a,
			size_type __n);  // 164
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 298
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 298
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 300
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 292
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<true>(
				const char* __str,
				size_type __n);  // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 128
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
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
		length(const char_type* __s); // 713
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 122
	allocator<char>::~allocator(); // 122
} /* size: 0, variables: 1, inline expansions: 82 (0 bytes) */

// <01A981E2> thirdparty/fossilize/path.cpp:131
// variables: 15
// function calls: 281
void canonicalize_path(const string& path)
{
	string transformed; // 133
	vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > data; // 136
	vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > result; // 138
	string res; // 150
	{
		basic_string<char, std::char_traits<char>, std::allocator<char> >& i; // 139
		vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >& __for_range; // 61619
		iterator __for_begin; // 45478
		iterator __for_end; // 45478
		__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
					basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 999
		begin(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 139
		__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
					basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 1019
		end(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 139
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 754
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 762
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 748
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
				basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 110
		construct_at<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 676
		construct<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(allocator_type& __a,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 117
		size(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this); // 2199
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 2202
		_M_check_len(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
				size_type __n,
				const char* __s);  // 566
		__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
					basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 999
		begin(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 571
		__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
					basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 1019
		end(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 571
		__new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_M_allocate(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
				size_t __n);  // 572
		{
			_Guard_alloc __guard; // 576
			_Guard_alloc::_Guard_alloc(
					pointer __s,
					size_type __l,
					_Base& __vect);  // 576
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<char>& __a);  // 743
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
				pointer __p);  // 753
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
					size_type __capacity);  // 754
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
			basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 760
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
				pointer __p);  // 761
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 762
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
			basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 748
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
					basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 110
			construct_at<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 676
			construct<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(allocator_type& __a,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 586
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
				pointer __p);  // 753
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
					size_type __capacity);  // 754
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
			basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 760
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
				pointer __p);  // 761
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 762
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<char>& __a);  // 743
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
			basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 748
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
					basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 110
			construct_at<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 676
			construct<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(allocator_type& __a,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 1288
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 88
			destroy_at<std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 698
			destroy<std::__cxx11::basic_string<char> >(allocator_type& __a,
									basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 1289
			__relocate_object_a<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __dest,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __orig,
																allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& __alloc);  // 1317
			__relocate_a_1<std::__cxx11::basic_string<char>*, std::__cxx11::basic_string<char>*, std::allocator<std::__cxx11::basic_string<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __first,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __last,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __result,
																allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& __alloc);  // 1359
			__relocate_a<std::__cxx11::basic_string<char>*, std::__cxx11::basic_string<char>*, std::allocator<std::__cxx11::basic_string<char> > >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __first,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __last,
																basic_string<char, std::char_traits<char>, std::allocator<char> >* __result,
																allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& __alloc);  // 539
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
			_M_deallocate(const _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this,
					pointer __p,
					size_t __n);  // 1883
			_Guard_alloc::~_Guard_alloc(); // 640
		}
		_M_realloc_append<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 123
		emplace_back<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 1434
		push_back(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this,
				value_type& __x);  // 147
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 4065
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2887
		basic_string<char, std::char_traits<char>, std::allocator<char> >::data(); // 4066
		compare(const char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 4066
		operator==<char, std::char_traits<char>, std::allocator<char> >(const basic_string<char, std::char_traits<char>, std::allocator<char> >& __lhs,
										const char* __rhs);  // 141
		__normal_iterator<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 1029
		end(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this); // 1224
		__normal_iterator<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 1009
		begin(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this); // 1224
		empty(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::_ this); // 143
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
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 88
		destroy_at<std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >* __location); // 698
		destroy<std::__cxx11::basic_string<char> >(allocator_type& __a,
								basic_string<char, std::char_traits<char>, std::allocator<char> >* __p);  // 1461
		pop_back(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 144
	}
	{
		basic_string<char, std::char_traits<char>, std::allocator<char> >& i; // 151
		vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >& __for_range; // 61619
		iterator __for_begin; // 45478
		iterator __for_end; // 45478
		__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
					basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 999
		begin(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 151
		__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
					basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 1019
		end(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 151
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
				size_type __n1,
				size_type __n2,
				const char* __s);  // 1584
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
		basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 452
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 457
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
				const char* __s,
				size_type __n);  // 1585
		basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
			const char* __s);  // 1488
		basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
				const char* __s);  // 154
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1536
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
				size_type __n1,
				size_type __n2,
				const char* __s);  // 1569
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
		basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 452
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 457
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
				const char* __s,
				size_type __n);  // 1570
		basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
			const char* __s,
			size_type __n);  // 1536
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 1536
		basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1478
		basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 155
	}
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 590
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
	allocator<char>::~allocator(); // 590
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 593
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 133
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 134
	__new_allocator<char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 142
	_S_allocate(_Char_alloc_type& __a,
			size_type __n);  // 164
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 363
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 375
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 374
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_mutate(
			size_type __pos,
			size_type __len1,
			const char* __s,
			size_type __len2);  // 499
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 502
	assign(char_type* __s,
		size_t __n,
		char_type __a);  // 473
	_S_assign(char* __d,
			size_type __n,
			char __c);  // 468
	_S_assign(char* __d,
			size_type __n,
			char __c);  // 502
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 504
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_replace_aux(
			size_type __pos1,
			size_type __n1,
			size_type __n2,
			char __c);  // 1599
	basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
		size_type __n,
		char __c);  // 436
	basic_string<char, std::char_traits<char>, std::allocator<char> >::resize(
		size_type __n,
		char __c);  // 1216
	basic_string<char, std::char_traits<char>, std::allocator<char> >::resize(
		size_type __n);  // 134
	split_no_empty(const string& str,
			const char* delim);  // 136
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 590
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 593
	allocator<char>::~allocator(); // 590
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 150
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
	~vector(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 158
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
	~vector(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 158
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 158
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 1048
	__normal_iterator<char::__normal_iterator(
				char* const& __i);  // 1048
	basic_string<char, std::char_traits<char>, std::allocator<char> >::begin(); // 56
	begin<std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >& __cont); // 135
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1075
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 1075
	__normal_iterator<char const::__normal_iterator(
				const char* const& __i);  // 1075
	basic_string<char, std::char_traits<char>, std::allocator<char> >::end(); // 92
	end<std::__cxx11::basic_string<char> >(const basic_string<char, std::char_traits<char>, std::allocator<char> >& __cont); // 135
	__normal_iterator<char const::__normal_iterator(
				const char* const& __i);  // 1057
	basic_string<char, std::char_traits<char>, std::allocator<char> >::begin(); // 68
	begin<std::__cxx11::basic_string<char> >(const basic_string<char, std::char_traits<char>, std::allocator<char> >& __cont); // 135
	operator()(const class* __closure,
			char c); // 4265
	transform<__gnu_cxx::__normal_iterator<char const*, std::__cxx11::basic_string<char> >, __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char> >, Path::canonicalize_path(const std::string&)::<lambda(char)> >(__normal_iterator<char const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > __first,
																__normal_iterator<char const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > __last,
																__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > __result,
																 __unary_op); // 135
} /* size: 0, variables: 4, inline expansions: 114 (0 bytes) */

// <01A981BF> thirdparty/fossilize/path.cpp:160
// variable: 1
void find_last_slash(const string& str)
{
	long unsigned int index; // 165
} /* size: 0, variables: 1 */

// <01AA5CC4> thirdparty/fossilize/path.cpp:170
// function calls: 9
void is_abspath(const string& path)
{
	basic_string<char, std::char_traits<char>, std::allocator<char> >::empty(); // 172
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 1350
	basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[](
			size_type __pos);  // 1441
	basic_string<char, std::char_traits<char>, std::allocator<char> >::front(); // 174
	find(const char_type* __s,
		size_t __n,
		const char_type& __a);  // 678
	compare(const char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 684
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
		const char* __s,
		size_type __pos,
		size_type __n);  // 2976
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
		const char* __s,
		size_type __pos);  // 185
	is_abspath(const string& path); // 170
} /* size: 129, inline expansions: 9 (241 bytes) */

// <01A981A8> thirdparty/fossilize/path.cpp:170
void is_abspath(const string& path)
{
} /* size: 0 */

// <01A97F72> thirdparty/fossilize/path.cpp:188
// variable: 1
// function calls: 8
void is_root_path(const string& path)
{
	long unsigned int index; // 204
	basic_string<char, std::char_traits<char>, std::allocator<char> >::empty(); // 190
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 1350
	basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[](
			size_type __pos);  // 1441
	basic_string<char, std::char_traits<char>, std::allocator<char> >::front(); // 193
	find(const char_type* __s,
		size_t __n,
		const char_type& __a);  // 678
	compare(const char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 684
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
		const char* __s,
		size_type __pos,
		size_type __n);  // 2976
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
		const char* __s,
		size_type __pos);  // 204
} /* size: 164, variables: 1, inline expansions: 8 (164 bytes) */

// <01A96E67> thirdparty/fossilize/path.cpp:208
// variables: 2
// function calls: 74
void join(const string& base, const string& path)
{
	long unsigned int index; // 218
	bool need_slash; // 219
	basic_string<char, std::char_traits<char>, std::allocator<char> >::empty(); // 210
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 726
	select_on_container_copy_construction(const allocator_type& __rhs); // 100
	_S_select_on_copy(const allocator<char>& __a); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 614
	allocator<char>::~allocator(); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
	__new_allocator<char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 142
	_S_allocate(_Char_alloc_type& __a,
			size_type __n);  // 164
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 292
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 298
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 298
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<true>(
				const char* __str,
				size_type __n);  // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 211
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 298
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 298
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 300
	__new_allocator<char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 142
	_S_allocate(_Char_alloc_type& __a,
			size_type __n);  // 164
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 292
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<true>(
				const char* __str,
				size_type __n);  // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 726
	select_on_container_copy_construction(const allocator_type& __rhs); // 100
	_S_select_on_copy(const allocator<char>& __a); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 614
	allocator<char>::~allocator(); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 216
	basic_string<char, std::char_traits<char>, std::allocator<char> >::empty(); // 212
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 726
	select_on_container_copy_construction(const allocator_type& __rhs); // 100
	_S_select_on_copy(const allocator<char>& __a); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 614
	allocator<char>::~allocator(); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<true>(
				const char* __str,
				size_type __n);  // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 213
	eq(const char_type& __c1,
		const char_type& __c2);  // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::rfind(
		char __c,
		size_type __pos);  // 3252
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_of(
			char __c,
			size_type __pos);  // 165
	find_last_slash(const string& str); // 218
} /* size: 446, variables: 2, inline expansions: 74 (925 bytes) */

// <01A952F6> thirdparty/fossilize/path.cpp:223
// variables: 5
// function calls: 123
void basedir(const string& path)
{
	long unsigned int index; // 231
	basic_string<char, std::char_traits<char>, std::allocator<char> > ret; // 239
	basic_string<char, std::char_traits<char>, std::allocator<char> >::empty(); // 225
	eq(const char_type& __c1,
		const char_type& __c2);  // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::rfind(
		char __c,
		size_type __pos);  // 3252
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_of(
			char __c,
			size_type __pos);  // 165
	find_last_slash(const string& str); // 231
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
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
		length(const char_type* __s); // 713
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 233
	allocator<char>::~allocator(); // 233
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 726
	select_on_container_copy_construction(const allocator_type& __rhs); // 100
	_S_select_on_copy(const allocator<char>& __a); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 614
	allocator<char>::~allocator(); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
	__new_allocator<char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 142
	_S_allocate(_Char_alloc_type& __a,
			size_type __n);  // 164
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 298
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 298
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 300
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 292
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<true>(
				const char* __str,
				size_type __n);  // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 229
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
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
		length(const char_type* __s); // 713
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 226
	allocator<char>::~allocator(); // 226
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 648
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 648
	{
		const char* __start; // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
			size_type __pos,
			size_type __off);  // 652
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
			size_type __pos,
			const char* __s);  // 651
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 652
	}
	allocator<char>::~allocator(); // 648
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str,
			size_type __pos,
			size_type __n);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(
		size_type __pos,
		size_type __n);  // 239
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 2386
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 389
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_erase(
		size_type __pos,
		size_type __n);  // 2386
	basic_string<char, std::char_traits<char>, std::allocator<char> >::pop_back(); // 241
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 754
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 242
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 243
} /* size: 725, variables: 2, inline expansions: 84 (1411 bytes) */

// <01A93BC6> thirdparty/fossilize/path.cpp:245
// variables: 4
// function calls: 102
void basename(const string& path)
{
	long unsigned int index; // 250
	basic_string<char, std::char_traits<char>, std::allocator<char> > base; // 254
	basic_string<char, std::char_traits<char>, std::allocator<char> >::empty(); // 247
	eq(const char_type& __c1,
		const char_type& __c2);  // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::rfind(
		char __c,
		size_type __pos);  // 3252
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_of(
			char __c,
			size_type __pos);  // 165
	find_last_slash(const string& str); // 250
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 726
	select_on_container_copy_construction(const allocator_type& __rhs); // 100
	_S_select_on_copy(const allocator<char>& __a); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 614
	allocator<char>::~allocator(); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
	__new_allocator<char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 142
	_S_allocate(_Char_alloc_type& __a,
			size_type __n);  // 164
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 298
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 298
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 300
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 292
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<true>(
				const char* __str,
				size_type __n);  // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 252
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 754
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 255
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 256
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
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
		length(const char_type* __s); // 713
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 248
	allocator<char>::~allocator(); // 248
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
		size_type __pos,
		const char* __s);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 648
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 648
	{
		const char* __start; // 650
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 652
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
			size_type __pos,
			const char* __s);  // 651
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
			size_type __pos,
			size_type __off);  // 652
	}
	allocator<char>::~allocator(); // 648
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str,
			size_type __pos,
			size_type __n);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(
		size_type __pos,
		size_type __n);  // 254
} /* size: 0, variables: 2, inline expansions: 72 (0 bytes) */

// <01A938B8> thirdparty/fossilize/path.cpp:258
// function calls: 11
void relpath(const string& base, const string& path)
{
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 260
} /* size: 118, inline expansions: 11 (97 bytes) */

// <01A92CF4> thirdparty/fossilize/path.cpp:263
// variables: 3
// function calls: 48
void ext(const string& path)
{
	long unsigned int index; // 265
	eq(const char_type& __c1,
		const char_type& __c2);  // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::rfind(
		char __c,
		size_type __pos);  // 3252
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_of(
			char __c,
			size_type __pos);  // 265
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
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
		length(const char_type* __s); // 713
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 267
	allocator<char>::~allocator(); // 267
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
		size_type __pos,
		const char* __s);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 648
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 648
	allocator<char>::~allocator(); // 648
	{
		const char* __start; // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 411
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
			size_type __pos,
			const char* __s);  // 651
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
			size_type __pos,
			size_type __off);  // 652
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 652
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str,
			size_type __pos,
			size_type __n);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(
		size_type __pos,
		size_type __n);  // 269
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <01A8F6A7> thirdparty/fossilize/path.cpp:272
// variables: 7
// function calls: 253
void split(const string& path)
{
	long unsigned int index; // 277
	basic_string<char, std::char_traits<char>, std::allocator<char> > base; // 281
	basic_string<char, std::char_traits<char>, std::allocator<char> >::empty(); // 274
	eq(const char_type& __c1,
		const char_type& __c2);  // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::rfind(
		char __c,
		size_type __pos);  // 3252
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_of(
			char __c,
			size_type __pos);  // 165
	find_last_slash(const string& str); // 277
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
		length(const char_type* __s); // 713
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 279
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 464
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 726
	select_on_container_copy_construction(const allocator_type& __rhs); // 100
	_S_select_on_copy(const allocator<char>& __a); // 615
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 614
	allocator<char>::~allocator(); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
	__new_allocator<char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 142
	_S_allocate(_Char_alloc_type& __a,
			size_type __n);  // 164
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 298
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 298
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 300
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 292
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<true>(
				const char* __str,
				size_type __n);  // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 464
	pair<std::__cxx11::basic_string<char>, const std::__cxx11::basic_string<char>&>(const pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<ch this,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __x,
											const basic_string<char, std::char_traits<char>, std::allocator<char> >& __y);  // 1169
	make_pair<std::__cxx11::basic_string<char>, const std::__cxx11::basic_string<char>&>(basic_string<char, std::char_traits<char>, std::allocator<char> >& __x,
												const basic_string<char, std::char_traits<char>, std::allocator<char> >& __y);  // 279
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 279
	allocator<char>::~allocator(); // 279
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
		size_type __pos,
		const char* __s);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 648
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 648
	allocator<char>::~allocator(); // 648
	{
		const char* __start; // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
			size_type __pos,
			const char* __s);  // 651
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
			size_type __pos,
			size_type __off);  // 652
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 652
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str,
			size_type __pos,
			size_type __n);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(
		size_type __pos,
		size_type __n);  // 281
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 411
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
		size_type __pos,
		const char* __s);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 648
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 648
	{
		const char* __start; // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
			size_type __pos,
			size_type __off);  // 652
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
			size_type __pos,
			const char* __s);  // 651
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 652
	}
	allocator<char>::~allocator(); // 648
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str,
			size_type __pos,
			size_type __n);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(
		size_type __pos,
		size_type __n);  // 282
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 754
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 464
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 726
	select_on_container_copy_construction(const allocator_type& __rhs); // 100
	_S_select_on_copy(const allocator<char>& __a); // 615
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 614
	allocator<char>::~allocator(); // 615
	__new_allocator<char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 142
	_S_allocate(_Char_alloc_type& __a,
			size_type __n);  // 164
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 291
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 298
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 300
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 292
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<true>(
				const char* __str,
				size_type __n);  // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 464
	pair<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char>&>(const pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<ch this,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __x,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __y);  // 1169
	make_pair<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char>&>(basic_string<char, std::char_traits<char>, std::allocator<char> >& __x,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __y);  // 282
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 283
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 282
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
		length(const char_type* __s); // 713
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 275
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
		length(const char_type* __s); // 713
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 275
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 464
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 464
	pair<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >(const pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<ch this,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __x,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __y);  // 1169
	make_pair<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >& __x,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __y);  // 275
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 275
	allocator<char>::~allocator(); // 275
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 275
	allocator<char>::~allocator(); // 275
} /* size: 0, variables: 2, inline expansions: 195 (0 bytes) */

// <01A8C261> thirdparty/fossilize/path.cpp:285
// variables: 6
// function calls: 239
void protocol_split(const string& path)
{
	long unsigned int index; // 290
	basic_string<char, std::char_traits<char>, std::allocator<char> >::empty(); // 287
	find(const char_type* __s,
		size_t __n,
		const char_type& __a);  // 678
	compare(const char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 684
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
		const char* __s,
		size_type __pos,
		size_type __n);  // 2976
	basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
		const char* __s,
		size_type __pos);  // 290
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
		length(const char_type* __s); // 713
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 292
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 464
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 726
	select_on_container_copy_construction(const allocator_type& __rhs); // 100
	_S_select_on_copy(const allocator<char>& __a); // 615
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 614
	allocator<char>::~allocator(); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
	__new_allocator<char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 142
	_S_allocate(_Char_alloc_type& __a,
			size_type __n);  // 164
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 298
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 298
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 300
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 292
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<true>(
				const char* __str,
				size_type __n);  // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 464
	pair<std::__cxx11::basic_string<char>, const std::__cxx11::basic_string<char>&>(const pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<ch this,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __x,
											const basic_string<char, std::char_traits<char>, std::allocator<char> >& __y);  // 1169
	make_pair<std::__cxx11::basic_string<char>, const std::__cxx11::basic_string<char>&>(basic_string<char, std::char_traits<char>, std::allocator<char> >& __x,
												const basic_string<char, std::char_traits<char>, std::allocator<char> >& __y);  // 292
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 292
	allocator<char>::~allocator(); // 292
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
		size_type __pos,
		const char* __s);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 648
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 648
	{
		const char* __start; // 650
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 652
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
			size_type __pos,
			const char* __s);  // 651
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
			size_type __pos,
			size_type __off);  // 652
	}
	allocator<char>::~allocator(); // 648
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str,
			size_type __pos,
			size_type __n);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(
		size_type __pos,
		size_type __n);  // 294
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 648
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 648
	{
		const char* __start; // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
			size_type __pos,
			size_type __off);  // 652
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 650
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
			size_type __pos,
			const char* __s);  // 651
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 652
	}
	allocator<char>::~allocator(); // 648
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str,
			size_type __pos,
			size_type __n);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 411
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
		size_type __pos,
		const char* __s);  // 3443
	basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(
		size_type __pos,
		size_type __n);  // 294
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 754
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 464
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 754
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 464
	pair<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >(const pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<ch this,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __x,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __y);  // 1169
	make_pair<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >& __x,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __y);  // 294
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 294
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 294
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
		length(const char_type* __s); // 713
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 288
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
		length(const char_type* __s); // 713
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 288
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 464
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 464
	pair<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >(const pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<ch this,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __x,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __y);  // 1169
	make_pair<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >(basic_string<char, std::char_traits<char>, std::allocator<char> >& __x,
											basic_string<char, std::char_traits<char>, std::allocator<char> >& __y);  // 288
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 288
	allocator<char>::~allocator(); // 288
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 288
	allocator<char>::~allocator(); // 288
} /* size: 0, variables: 1, inline expansions: 181 (0 bytes) */

// <01A8BA3F> thirdparty/fossilize/path.cpp:297
// variables: 9
// function calls: 29
void get_executable_path(void)
{
	const char* exts; // 305
	char link_path; // 306
	char target; // 307
	{
		const char* ext; // 309
		const char  *& __for_range; // 16682
		const char ** __for_begin; // 55957
		const char ** __for_end; // 55957
		{
			ssize_t ret; // 312
			snprintf(char* __s,
				size_t __n,
				const char* __fmt, ...);  // 311
			readlink(const char* __path,
				char* __buf,
				size_t __len);  // 312
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
				length(const char_type* __s); // 713
				_Guard::_Guard(
					basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
				copy(char_type* __s1,
					const char_type* __s2,
					size_t __n);  // 453
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 448
				assign(char_type& __c1,
					const char_type& __c2);  // 451
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 489
				_S_copy_chars<char const*>(char* __p,
								const char* __k1,
								const char* __k2);  // 253
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
						size_type __length);  // 272
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
				assign(char_type& __c1,
					const char_type& __c2);  // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
						size_type __n);  // 257
				_Guard::~_Guard(); // 258
				__new_allocator<char>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<char>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 142
				_S_allocate(_Char_alloc_type& __a,
						size_type __n);  // 164
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
						size_type& __capacity,
						size_type __old_capacity);  // 235
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
						size_type __capacity);  // 236
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
					pointer __p);  // 235
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
								const char* __beg,
								const char* __end,
								forward_iterator_tag);  // 714
			}
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
					const char* __s,
					const allocator<char>& __a);  // 316
			allocator<char>::~allocator(); // 316
		}
	}
} /* size: 0, variables: 3 */

// <01A8B76F> thirdparty/fossilize/path.cpp:347
// variables: 3
// function calls: 3
void touch(const string& path)
{
	int fd; // 364
	const timespec  times; // 368
	bool ret; // 369
	open(const char* __path,
		int __oflag, ...);  // 364
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
	basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 364
} /* size: 123, variables: 3, inline expansions: 3 (18 bytes) */

// <01A8B6A0> thirdparty/fossilize/path.cpp:375
// variable: 1
// function calls: 2
void is_file(const string& path)
{
	stat s; // 383
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
	basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 384
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <01A8B5D1> thirdparty/fossilize/path.cpp:388
// variable: 1
// function calls: 2
void is_directory(const string& path)
{
	stat s; // 396
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
	basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 397
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <01A8B4ED> thirdparty/fossilize/path.cpp:401
// variable: 1
// function calls: 2
void get_mtime_us(const string& path, uint64_t& mtime_us)
{
	stat s; // 421
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
	basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 422
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

