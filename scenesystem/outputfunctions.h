
//
// scenesystem/outputfunctions.h
//
//	referenced by: libengine2.so
//
//	functions: 12
//

// <02E1EB4A> ../scenesystem/outputfunctions.h:51
// variable: 1
void FormatToBuffer<std::__cxx11::basic_ostringstream<char> >(basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& buf, const CMeshDrawPrimitive_t& p)
{
	const IMaterial2* pMat; // 53
} /* size: 0, variables: 1 */

// <02E2485A> ../scenesystem/outputfunctions.h:96
void FormatToBuffer<std::__cxx11::basic_ostringstream<char>, char [32]>(basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& buf, const char& arg)
{
} /* size: 0 */

// <02E247CF> ../scenesystem/outputfunctions.h:96
void FormatToBuffer<std::__cxx11::basic_ostringstream<char>, char [53]>(basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& buf, const char& arg)
{
} /* size: 0 */

// <02E243DB> ../scenesystem/outputfunctions.h:96
void FormatToBuffer<std::__cxx11::basic_ostringstream<char>, char [25]>(basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& buf, const char& arg)
{
} /* size: 0 */

// <02E1D67D> ../scenesystem/outputfunctions.h:96
void FormatToBuffer<std::__cxx11::basic_ostringstream<char>, char const*>(basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& buf, const char* const& arg)
{
} /* size: 0 */

// <02E89238> ../scenesystem/outputfunctions.h:101
inline void OutputToBuffer<std::__cxx11::basic_ostringstream<char> >(basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& buf)
{
} /* size: 0 */

// <02E96CF3> ../scenesystem/outputfunctions.h:103
void OutputToBuffer<std::__cxx11::basic_ostringstream<char>, CSceneDrawList>(basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& buf, const CSceneDrawList& firstArg)
{
} /* size: 0 */

// <02E94E43> ../scenesystem/outputfunctions.h:103
void OutputToBuffer<std::__cxx11::basic_ostringstream<char>, char [32], char const*>(basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& buf, const char& firstArg)
{
} /* size: 0 */

// <02E94DE6> ../scenesystem/outputfunctions.h:103
void OutputToBuffer<std::__cxx11::basic_ostringstream<char>, char [53], char const*>(basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& buf, const char& firstArg)
{
} /* size: 0 */

// <02E9414F> ../scenesystem/outputfunctions.h:103
void OutputToBuffer<std::__cxx11::basic_ostringstream<char>, char [25]>(basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& buf, const char& firstArg)
{
} /* size: 0 */

// <02E2480D> ../scenesystem/outputfunctions.h:103
void OutputToBuffer<std::__cxx11::basic_ostringstream<char>, char const*>(basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& buf, const char* const& firstArg)
{
} /* size: 0 */

// <02EA8543> ../scenesystem/outputfunctions.h:116
// variables: 8
// function calls: 86
void Print<CSceneDrawList>(const CSceneDrawList& firstArg)
{
	ostringstream buf; // 118
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
	basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 136
	basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
			openmode __mode);  // 814
	basic_ios<char, std::char_traits<char> >::basic_ios(); // 814
	basic_ostream<char, std::char_traits<char> >::basic_ostream(
			const int  __in_chrg,
			const void **  __vtt_parm);  // 814
	basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >::basic_ostringstream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 118
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 602
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 602
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 604
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 605
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const allocator<char>& __a);  // 254
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 2908
	basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator(); // 254
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
		{
			const size_type  __rsize; // 313
			const size_type  __capacity; // 314
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
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
					pointer __p);  // 321
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
						size_type __capacity);  // 322
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
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 328
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
	basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >::str(); // 120
	OutputToBuffer<std::__cxx11::basic_ostringstream<char>, CSceneDrawList>(basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& buf,
										const CSceneDrawList& firstArg);  // 119
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
	basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 120
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 120
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
				const void **  __vtt_parm);  // 121
} /* size: 887, variables: 1, inline expansions: 60 (1770 bytes) */

