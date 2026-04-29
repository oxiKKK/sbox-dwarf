
//
// bitmap/tinyexr_impl.cpp
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 3
//

// <047B3A64> bitmap/tinyexr_impl.cpp:17
// variables: 75
// function calls: 628
void FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer& inMemoryEXR)
{
	const int  nCols; // 25
	const int  nRows; // 26
	const bool  bHasAlpha; // 27
	const int  nChannels; // 28
	vector<unsigned char, std::allocator<unsigned char> > memory; // 30
	int num_scanlines; // 44
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> > channels; // 47
	int num_blocks; // 128
	vector<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, std::allocator<unsigned char> > > > data_list; // 134
	vector<long unsigned int, std::allocator<long unsigned int> > channel_offset_list; // 135
	int pixel_data_size; // 137
	size_t channel_offset; // 138
	const int  ABGRChannels; // 153
	const int  BGRChannels; // 154
	const int* nChannelForComponent; // 155
	const char   __FUNCTION__; // 4743
	const int  scanlineDataSize; // 159
	vector<unsigned char, std::allocator<unsigned char> > buf; // 160
	CInterlockedInt nRow; // 162
	vector<long unsigned int, std::allocator<long unsigned int> > offsets; // 203
	size_t headerSize; // 204
	tinyexr_uint64 offset; // 205
	{
		const char  header; // 34
		{
			const size_type  __n; // 891
			{
				pointer __old_start; // 934
				pointer __old_finish; // 935
				const size_type  __len; // 937
				pointer __new_start; // 944
				pointer __new_finish; // 945
				__new_allocator<unsigned char>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<unsigned char>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 387
				_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
						size_t __n);  // 944
				{
					ptrdiff_t __n; // 269
					{
					}
				}
				uninitialized_copy<char const*, unsigned char*>(const char* __first,
										const char* __last,
										unsigned char* __result);  // 635
				__uninitialized_copy_a<char const*, char const*, unsigned char*, unsigned char>(const char* __first,
														const char* __last,
														unsigned char* __result,
														allocator<unsigned char> &);  // 953
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1823
				__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1823
				__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
				_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
							unsigned char *& __first);  // 143
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
				__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 950
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
				__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 958
			}
		}
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_insert<char const*>(
						iterator __position,
						const char* __first,
						const char* __last,
						forward_iterator_tag);  // 1621
		__normal_iterator<unsigned char const::__normal_iterator(
					const unsigned char* const& __i);  // 1080
		vector<unsigned char, std::allocator<unsigned char> >::cbegin(); // 1620
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1621
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1148
		__normal_iterator<unsigned char::operator+(
				difference_type __n);  // 1621
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1623
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1148
		__normal_iterator<unsigned char::operator+(
				difference_type __n);  // 1623
		vector<unsigned char, std::allocator<unsigned char> >::insert<char const*>(
					const_iterator __position,
					const char* __first,
					const char* __last);  // 35
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1019
		vector<unsigned char, std::allocator<unsigned char> >::end(); // 35
		__normal_iterator<unsigned char::base(); // 1082
		__normal_iterator<unsigned char const::__normal_iterator<unsigned char*>(
							const __normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > >& __i);  // 35
	}
	{
		char marker; // 40
		{
			const size_type  __n; // 891
			{
				pointer __old_start; // 934
				pointer __old_finish; // 935
				const size_type  __len; // 937
				pointer __new_start; // 944
				pointer __new_finish; // 945
				__new_allocator<unsigned char>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<unsigned char>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 387
				_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
						size_t __n);  // 944
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1823
				__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1823
				__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
				_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
							unsigned char *& __first);  // 143
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				_Construct<unsigned char, unsigned char>(unsigned char* __p); // 145
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
				__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 950
				{
					ptrdiff_t __n; // 269
					{
					}
				}
				uninitialized_copy<char*, unsigned char*>(char* __first,
										char* __last,
										unsigned char* __result);  // 635
				__uninitialized_copy_a<char*, char*, unsigned char*, unsigned char>(char* __first,
													char* __last,
													unsigned char* __result,
													allocator<unsigned char> &);  // 953
				__new_allocator<unsigned char>::deallocate(
						unsigned char* __p,
						size_type __n);  // 215
				allocator<unsigned char>::deallocate(
						unsigned char* __p,
						size_t __n);  // 649
				deallocate(allocator_type& __a,
						pointer __p,
						size_type __n);  // 396
				_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
						pointer __p,
						size_t __n);  // 971
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
				__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 958
			}
		}
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_insert<char*>(
					iterator __position,
					char* __first,
					char* __last,
					forward_iterator_tag);  // 1621
		__normal_iterator<unsigned char const::__normal_iterator(
					const unsigned char* const& __i);  // 1080
		vector<unsigned char, std::allocator<unsigned char> >::cbegin(); // 1620
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1621
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1148
		__normal_iterator<unsigned char::operator+(
				difference_type __n);  // 1621
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1623
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1148
		__normal_iterator<unsigned char::operator+(
				difference_type __n);  // 1623
		vector<unsigned char, std::allocator<unsigned char> >::insert<char*>(
				const_iterator __position,
				char* __first,
				char* __last);  // 41
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1019
		vector<unsigned char, std::allocator<unsigned char> >::end(); // 41
		__normal_iterator<unsigned char::base(); // 1082
		__normal_iterator<unsigned char const::__normal_iterator<unsigned char*>(
							const __normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > >& __i);  // 41
	}
	{
		vector<unsigned char, std::allocator<unsigned char> > data; // 49
		const char* ABGRChannelNames; // 50
		const char* BGRChannelNames; // 51
		const char ** pChannelNames; // 52
		{
			int c; // 54
			{
				ChannelInfo info; // 56
				{
					pointer __data; // 976
					size_type __capacity; // 977
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
						pointer __p);  // 999
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
				}
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 961
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
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 950
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
				assign(char_type& __c1,
					const char_type& __c2);  // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
						size_type __n);  // 1323
				basic_string<char, std::char_traits<char>, std::allocator<char> >::clear(); // 1003
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
						basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 61
				{
					const char* __end; // 713
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
					length(const char_type* __s); // 713
				}
				__new_allocator<char>::__new_allocator(
						const __new_allocator<char>  &);  // 173
				allocator<char>::allocator(
						const allocator<char>& __a);  // 205
				_Alloc_hider::_Alloc_hider(
						pointer __dat,
						const allocator<char>& __a);  // 707
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
				basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
						const char* __s,
						const allocator<char>& __a);  // 61
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
				basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 61
				allocator<char>::~allocator(); // 61
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
				__new_allocator<char>::__new_allocator(
						const __new_allocator<char>  &);  // 173
				allocator<char>::allocator(
						const allocator<char>& __a);  // 726
				select_on_container_copy_construction(const allocator_type& __rhs); // 100
				_S_select_on_copy(const allocator<char>& __a); // 615
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
				basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
				basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
				__new_allocator<char>::__new_allocator(
						const __new_allocator<char>  &);  // 173
				allocator<char>::allocator(
						const allocator<char>& __a);  // 209
				_Alloc_hider::_Alloc_hider(
						pointer __dat,
						allocator<char>& __a);  // 614
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
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
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7333
				ChannelInfo(const ChannelInfo* this,
						const ChannelInfo  &);  // 110
				construct_at<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(ChannelInfo* __location); // 676
				construct<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(allocator_type& __a,
												ChannelInfo* __p);  // 1421
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::size(); // 2199
				max<long unsigned int>(const long unsigned int& __a,
							const long unsigned int& __b);  // 2202
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_check_len(
						size_type __n,
						const char* __s);  // 566
				__normal_iterator<tinyexr::ChannelInfo::__normal_iterator(
							ChannelInfo* const& __i);  // 999
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::begin(); // 571
				__normal_iterator<tinyexr::ChannelInfo::__normal_iterator(
							ChannelInfo* const& __i);  // 1019
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::end(); // 571
				__new_allocator<tinyexr::ChannelInfo>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<tinyexr::ChannelInfo>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 387
				_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_allocate(
						size_t __n);  // 572
				{
					_Guard_alloc __guard; // 576
					basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
					basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
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
					allocator<char>::~allocator(); // 615
					basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
							const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7333
					ChannelInfo(const ChannelInfo* this,
							const ChannelInfo  &);  // 110
					construct_at<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(ChannelInfo* __location); // 676
					construct<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(allocator_type& __a,
													ChannelInfo* __p);  // 586
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
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
							size_type __length);  // 272
					assign(char_type& __c1,
						const char_type& __c2);  // 273
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
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
					basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
					copy(char_type* __s1,
						const char_type* __s2,
						size_t __n);  // 748
					basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
							basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7333
					ChannelInfo(const ChannelInfo* this,
							ChannelInfo &);  // 110
					construct_at<tinyexr::ChannelInfo, tinyexr::ChannelInfo>(ChannelInfo* __location); // 676
					construct<tinyexr::ChannelInfo, tinyexr::ChannelInfo>(allocator_type& __a,
												ChannelInfo* __p);  // 1288
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
					basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
					~ChannelInfo(const ChannelInfo* this); // 88
					destroy_at<tinyexr::ChannelInfo>(ChannelInfo* __location); // 698
					destroy<tinyexr::ChannelInfo>(allocator_type& __a,
									ChannelInfo* __p);  // 1289
					__relocate_object_a<tinyexr::ChannelInfo, tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >(ChannelInfo* __dest,
																ChannelInfo* __orig,
																allocator<tinyexr::ChannelInfo>& __alloc);  // 1317
					__relocate_a_1<tinyexr::ChannelInfo*, tinyexr::ChannelInfo*, std::allocator<tinyexr::ChannelInfo> >(ChannelInfo* __first,
																ChannelInfo* __last,
																ChannelInfo* __result,
																allocator<tinyexr::ChannelInfo>& __alloc);  // 1359
					__relocate_a<tinyexr::ChannelInfo*, tinyexr::ChannelInfo*, std::allocator<tinyexr::ChannelInfo> >(ChannelInfo* __first,
																ChannelInfo* __last,
																ChannelInfo* __result,
																allocator<tinyexr::ChannelInfo>& __alloc);  // 539
					_S_relocate(pointer __first,
							pointer __last,
							pointer __result,
							_Tp_alloc_type& __alloc);  // 599
					__new_allocator<tinyexr::ChannelInfo>::deallocate(
							ChannelInfo* __p,
							size_type __n);  // 215
					allocator<tinyexr::ChannelInfo>::deallocate(
							ChannelInfo* __p,
							size_t __n);  // 649
					deallocate(allocator_type& __a,
							pointer __p,
							size_type __n);  // 396
					_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
							pointer __p,
							size_t __n);  // 392
					_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
							pointer __p,
							size_t __n);  // 1883
					_Guard_alloc::~_Guard_alloc(); // 640
				}
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_realloc_append<const tinyexr::ChannelInfo&>(); // 1427
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::push_back(
						const value_type& __x);  // 62
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
				basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
				~ChannelInfo(const ChannelInfo* this); // 63
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
				basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 7333
				ChannelInfo(const ChannelInfo* this); // 56
			}
		}
		vector<unsigned char, std::allocator<unsigned char> >::size(); // 67
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned char, std::allocator<unsigned char> >::at(
			size_type __n);  // 67
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
		_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							allocator<unsigned char> &);  // 802
		__new_allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_type __n);  // 215
		allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<unsigned char>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
		vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 68
	}
	{
		int comp; // 71
	}
	{
		int data; // 79
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 79
	}
	{
		unsigned char line_order; // 93
	}
	{
		float aspectRatio; // 99
	}
	{
		float center; // 107
	}
	{
		float w; // 116
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 116
	}
	{
		unsigned char e; // 124
		construct_at<unsigned char, unsigned char const&>(unsigned char* __location); // 676
		construct<unsigned char, unsigned char const&>(allocator_type& __a,
								unsigned char* __p);  // 1421
		vector<unsigned char, std::allocator<unsigned char> >::size(); // 2199
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 2202
		vector<unsigned char, std::allocator<unsigned char> >::_M_check_len(
				size_type __n,
				const char* __s);  // 566
		__new_allocator<unsigned char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<unsigned char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
				size_t __n);  // 572
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 571
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1019
		vector<unsigned char, std::allocator<unsigned char> >::end(); // 571
		{
			_Guard_alloc __guard; // 576
			construct_at<unsigned char, unsigned char const&>(unsigned char* __location); // 676
			construct<unsigned char, unsigned char const&>(allocator_type& __a,
									unsigned char* __p);  // 586
			__relocate_a_1<unsigned char, unsigned char>(unsigned char* __first,
									unsigned char* __last,
									unsigned char* __result,
									allocator<unsigned char>& __alloc);  // 1359
			__relocate_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
													unsigned char* __last,
													unsigned char* __result,
													allocator<unsigned char>& __alloc);  // 539
			_S_relocate(pointer __first,
					pointer __last,
					pointer __result,
					_Tp_alloc_type& __alloc);  // 599
			_Guard_alloc::_Guard_alloc(
					pointer __s,
					size_type __l,
					_Base& __vect);  // 576
			__new_allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_type __n);  // 215
			allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 1883
			_Guard_alloc::~_Guard_alloc(); // 640
		}
		vector<unsigned char, std::allocator<unsigned char> >::_M_realloc_append<unsigned char const&>(); // 1427
		vector<unsigned char, std::allocator<unsigned char> >::push_back(
				const value_type& __x);  // 125
	}
	{
		size_t c; // 139
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
				size_type __n);  // 142
		vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
				size_type __n);  // 141
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 157
	}
	{
		size_t i; // 211
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 215
	}
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 471
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 477
	FloatBitMap_t::GetAttributeMask(); // 27
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 128
	__new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::__new_allocator(
			const __new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >  &);  // 173
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::allocator(
			const allocator<std::vector<unsigned char, std::allocator<unsigned char> > >& __a);  // 2210
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::__new_allocator(
			const __new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >  &);  // 173
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::allocator(
			const allocator<std::vector<unsigned char, std::allocator<unsigned char> > >& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_M_allocate(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,  this,
			size_t __n);  // 405
	_M_create_storage(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,  this,
				size_t __n);  // 341
	_Vector_base(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,  this,
			size_t __n,
			const allocator_type& __a);  // 587
	_Vector_impl_data::_Vector_impl_data(); // 148
	__new_allocator<unsigned char>::__new_allocator(); // 168
	allocator<unsigned char>::allocator(); // 148
	_Vector_impl::_Vector_impl(); // 321
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(); // 561
	vector<unsigned char, std::allocator<unsigned char> >::vector(); // 133
	_Construct<std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __p); // 876
	_UninitDestroyGuard<std::vector<unsigned char, std::allocator<unsigned char> >::_UninitDestroyGuard(
				vector<unsigned char, std::allocator<unsigned char> > *& __first);  // 874
	_UninitDestroyGuard<std::vector<unsigned char, std::allocator<unsigned char> >::~_UninitDestroyGuard(); // 879
	__uninit_default_n<std::vector<unsigned char>*, long unsigned int>(vector<unsigned char, std::allocator<unsigned char> >* __first,
										long unsigned int __n);  // 947
	__uninitialized_default_n<std::vector<unsigned char>*, long unsigned int>(vector<unsigned char, std::allocator<unsigned char> >* __first,
											long unsigned int __n);  // 1002
	__uninitialized_default_n_a<std::vector<unsigned char>*, long unsigned int, std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __first,
														long unsigned int __n,
														allocator<std::vector<unsigned char, std::allocator<unsigned char> > > &);  // 2011
	_M_default_initialize(const vector<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, std::a this,
				size_type __n);  // 588
	vector(const vector<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, std::a this,
		size_type __n,
		const allocator_type& __a);  // 134
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::~allocator(); // 134
	__new_allocator<long unsigned int>::__new_allocator(
			const __new_allocator<long unsigned int>  &);  // 173
	allocator<long unsigned int>::allocator(
			const allocator<long unsigned int>& __a);  // 2210
	allocator<long unsigned int>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<long unsigned int>::__new_allocator(
			const __new_allocator<long unsigned int>  &);  // 173
	allocator<long unsigned int>::allocator(
			const allocator<long unsigned int>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<long unsigned int>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<long unsigned int>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		__fill_a1<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 979
		__fill_a<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 1148
		__fill_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
											long unsigned int __n,
											const long unsigned int& __value,
											random_access_iterator_tag);  // 1178
		fill_n<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
										long unsigned int __n,
										const long unsigned int& __value);  // 896
		_Construct<long unsigned int>(long unsigned int* __p); // 894
	}
	__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 888
	__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 947
	__uninitialized_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
												long unsigned int __n,
												allocator<long unsigned int> &);  // 2011
	vector<long unsigned int, std::allocator<long unsigned int> >::_M_default_initialize(
				size_type __n);  // 588
	vector<long unsigned int, std::allocator<long unsigned int> >::vector(
		size_type __n,
		const allocator_type& __a);  // 135
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 157
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 160
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 160
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 2210
	allocator<unsigned char>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<unsigned char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<unsigned char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		{
			const size_t  __len; // 950
		}
		__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __x);  // 979
		__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __value);  // 1148
		__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
										long unsigned int __n,
										const unsigned char& __value,
										random_access_iterator_tag);  // 1178
		fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
									long unsigned int __n,
									const unsigned char& __value);  // 896
		_Construct<unsigned char>(unsigned char* __p); // 894
	}
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 888
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 947
	__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											allocator<unsigned char> &);  // 2011
	vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
				size_type __n);  // 588
	vector<unsigned char, std::allocator<unsigned char> >::vector(
		size_type __n,
		const allocator_type& __a);  // 160
	CParallelProcessLauncher::CParallelProcessLauncher(
				int nMaxThreads,
				const char* szDescription,
				IThreadPool* pThreadPool);  // 163
	IMultipleWorkerJob::IMultipleWorkerJob(); // 627
	CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >::CParallelLambdaJob(
				const class& lambda); // 648
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 624
	CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >::~CParallelLambdaJob() const::<lambda(int)> >* this); // 650
	CParallelProcessLauncher::operator<< <FloatBitMap_t::WriteInMemoryEXRFast(
												const class& lambda);  // 163
	allocator<unsigned char>::~allocator(); // 160
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 162
	__new_allocator<long unsigned int>::__new_allocator(
			const __new_allocator<long unsigned int>  &);  // 173
	allocator<long unsigned int>::allocator(
			const allocator<long unsigned int>& __a);  // 2210
	allocator<long unsigned int>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<long unsigned int>::__new_allocator(
			const __new_allocator<long unsigned int>  &);  // 173
	allocator<long unsigned int>::allocator(
			const allocator<long unsigned int>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<long unsigned int>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<long unsigned int>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		__fill_a1<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 979
		__fill_a<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 1148
		__fill_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
											long unsigned int __n,
											const long unsigned int& __value,
											random_access_iterator_tag);  // 1178
		fill_n<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
										long unsigned int __n,
										const long unsigned int& __value);  // 896
		_Construct<long unsigned int>(long unsigned int* __p); // 894
	}
	__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 888
	__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 947
	__uninitialized_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
												long unsigned int __n,
												allocator<long unsigned int> &);  // 2011
	vector<long unsigned int, std::allocator<long unsigned int> >::_M_default_initialize(
				size_type __n);  // 588
	vector<long unsigned int, std::allocator<long unsigned int> >::vector(
		size_type __n,
		const allocator_type& __a);  // 203
	vector<unsigned char, std::allocator<unsigned char> >::size(); // 204
	allocator<long unsigned int>::~allocator(); // 203
	vector<long unsigned int, std::allocator<long unsigned int> >::size(); // 1292
	vector<long unsigned int, std::allocator<long unsigned int> >::_M_range_check(
			size_type __n);  // 1315
	vector<long unsigned int, std::allocator<long unsigned int> >::at(
		size_type __n);  // 220
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1019
	vector<unsigned char, std::allocator<unsigned char> >::end(); // 219
	__normal_iterator<unsigned char::base(); // 1082
	__normal_iterator<unsigned char const::__normal_iterator<unsigned char*>(
						const __normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > >& __i);  // 219
	__normal_iterator<unsigned char const::__normal_iterator(
				const unsigned char* const& __i);  // 1080
	vector<unsigned char, std::allocator<unsigned char> >::cbegin(); // 1620
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1621
	{
		const size_type  __n; // 891
		{
			const size_type  __elems_after; // 895
			pointer __old_finish; // 896
			__normal_iterator<unsigned char::__normal_iterator(
						unsigned char* const& __i);  // 1019
			vector<unsigned char, std::allocator<unsigned char> >::end(); // 895
			{
				unsigned char* __mid; // 912
				{
					ptrdiff_t __n; // 269
					{
					}
				}
				uninitialized_copy<unsigned char*, unsigned char*>(unsigned char* __first,
											unsigned char* __last,
											unsigned char* __result);  // 635
				__uninitialized_copy_a<unsigned char*, unsigned char*, unsigned char*, unsigned char>(unsigned char* __first,
															unsigned char* __last,
															unsigned char* __result,
															allocator<unsigned char> &);  // 915
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1804
				make_move_iterator<unsigned char*>(unsigned char* __i); // 649
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1804
				make_move_iterator<unsigned char*>(unsigned char* __i); // 649
				_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
							unsigned char *& __first);  // 143
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 649
				__uninitialized_move_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
															unsigned char* __last,
															unsigned char* __result,
															allocator<unsigned char>& __alloc);  // 920
				__normal_iterator<unsigned char::__normal_iterator(
							unsigned char* const& __i);  // 1148
				__normal_iterator<unsigned char::operator+(
						difference_type __n);  // 3074
				__niter_wrap<__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> >, unsigned char*>(__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __from,
																unsigned char* __res);  // 500
				__copy_move_a<false, unsigned char*, __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> > >(unsigned char* __first,
																unsigned char* __last,
																__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __result);  // 642
				copy<unsigned char*, __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> > >(unsigned char* __first,
																unsigned char* __last,
																__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __result);  // 926
			}
		}
		{
			pointer __old_start; // 934
			pointer __old_finish; // 935
			const size_type  __len; // 937
			pointer __new_start; // 944
			pointer __new_finish; // 945
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 2202
			vector<unsigned char, std::allocator<unsigned char> >::_M_check_len(
					size_type __n,
					const char* __s);  // 938
			__new_allocator<unsigned char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<unsigned char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
					size_t __n);  // 944
			_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
						unsigned char *& __first);  // 143
			_Construct<unsigned char, unsigned char>(unsigned char* __p); // 145
			_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
			__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
			uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
												move_iterator<unsigned char*> __last,
												unsigned char* __result);  // 635
			__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
			move_iterator<unsigned char::move_iterator(
					iterator_type __i);  // 1823
			__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
			move_iterator<unsigned char::move_iterator(
					iterator_type __i);  // 1823
			__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
			__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 950
			{
				ptrdiff_t __n; // 269
				{
				}
			}
			uninitialized_copy<unsigned char*, unsigned char*>(unsigned char* __first,
										unsigned char* __last,
										unsigned char* __result);  // 635
			__uninitialized_copy_a<unsigned char*, unsigned char*, unsigned char*, unsigned char>(unsigned char* __first,
														unsigned char* __last,
														unsigned char* __result,
														allocator<unsigned char> &);  // 953
			_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
			__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
			uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
												move_iterator<unsigned char*> __last,
												unsigned char* __result);  // 635
			__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
			__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 958
			__new_allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_type __n);  // 215
			allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 971
		}
	}
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_insert<unsigned char*>(
					iterator __position,
					unsigned char* __first,
					unsigned char* __last,
					forward_iterator_tag);  // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1623
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1623
	vector<unsigned char, std::allocator<unsigned char> >::insert<unsigned char*>(
				const_iterator __position,
				unsigned char* __first,
				unsigned char* __last);  // 218
	vector<unsigned char, std::allocator<unsigned char> >::size(); // 223
	vector<unsigned char, std::allocator<unsigned char> >::size(); // 223
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
			size_type __n);  // 1315
	vector<unsigned char, std::allocator<unsigned char> >::at(
		size_type __n);  // 224
	vector<unsigned char, std::allocator<unsigned char> >::size(); // 225
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
			size_type __n);  // 1315
	vector<unsigned char, std::allocator<unsigned char> >::at(
		size_type __n);  // 225
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
	vector<long unsigned int, std::allocator<long unsigned int> >::~vector(); // 228
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<unsigned char>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 228
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
	vector<long unsigned int, std::allocator<long unsigned int> >::~vector(); // 228
	_M_get_Tp_allocator(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, this); // 803
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<unsigned char>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 88
	destroy_at<std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __location); // 164
	_Destroy<std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __pointer); // 226
	_Destroy<std::vector<unsigned char>*>(vector<unsigned char, std::allocator<unsigned char> >* __first,
						vector<unsigned char, std::allocator<unsigned char> >* __last);  // 1045
	_Destroy<std::vector<unsigned char>*, std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __first,
										vector<unsigned char, std::allocator<unsigned char> >* __last,
										allocator<std::vector<unsigned char, std::allocator<unsigned char> > > &);  // 802
	__new_allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >::deallocate(
			vector<long unsigned int, std::allocator<long unsigned int> >* __p,
			size_type __n);  // 215
	allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >::deallocate(
			vector<long unsigned int, std::allocator<long unsigned int> >* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_M_deallocate(const _Vector_base<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long un this,
			pointer __p,
			size_t __n);  // 392
	_M_deallocate(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,  this,
			pointer __p,
			size_t __n);  // 375
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	~_Vector_base(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, this); // 805
	~vector(const vector<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, std::a this); // 228
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_get_Tp_allocator(); // 803
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
	~ChannelInfo(const ChannelInfo* this); // 88
	destroy_at<tinyexr::ChannelInfo>(ChannelInfo* __location); // 164
	_Destroy<tinyexr::ChannelInfo>(ChannelInfo* __pointer); // 226
	_Destroy<tinyexr::ChannelInfo*>(ChannelInfo* __first,
					ChannelInfo* __last);  // 1045
	_Destroy<tinyexr::ChannelInfo*, tinyexr::ChannelInfo>(ChannelInfo* __first,
								ChannelInfo* __last,
								allocator<tinyexr::ChannelInfo> &);  // 802
	__new_allocator<tinyexr::ChannelInfo>::deallocate(
			ChannelInfo* __p,
			size_type __n);  // 215
	allocator<tinyexr::ChannelInfo>::deallocate(
			ChannelInfo* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<tinyexr::ChannelInfo>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~_Vector_base(); // 805
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~vector(); // 228
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<unsigned char>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 228
	allocator<long unsigned int>::~allocator(); // 135
} /* size: 0, variables: 22, inline expansions: 228 (4875 bytes) */

// <00FC36CB> bitmap/tinyexr_impl.cpp:17
// variables: 75
// function calls: 628
void FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer& inMemoryEXR)
{
	const int  nCols; // 25
	const int  nRows; // 26
	const bool  bHasAlpha; // 27
	const int  nChannels; // 28
	vector<unsigned char, std::allocator<unsigned char> > memory; // 30
	int num_scanlines; // 44
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> > channels; // 47
	int num_blocks; // 128
	vector<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, std::allocator<unsigned char> > > > data_list; // 134
	vector<long unsigned int, std::allocator<long unsigned int> > channel_offset_list; // 135
	int pixel_data_size; // 137
	size_t channel_offset; // 138
	const int  ABGRChannels; // 153
	const int  BGRChannels; // 154
	const int* nChannelForComponent; // 155
	const char   __FUNCTION__; // 62881
	const int  scanlineDataSize; // 159
	vector<unsigned char, std::allocator<unsigned char> > buf; // 160
	CInterlockedInt nRow; // 162
	vector<long unsigned int, std::allocator<long unsigned int> > offsets; // 203
	size_t headerSize; // 204
	tinyexr_uint64 offset; // 205
	{
		const char  header; // 34
		{
			const size_type  __n; // 891
			{
				pointer __old_start; // 934
				pointer __old_finish; // 935
				const size_type  __len; // 937
				pointer __new_start; // 944
				pointer __new_finish; // 945
				__new_allocator<unsigned char>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<unsigned char>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 387
				_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
						size_t __n);  // 944
				{
					ptrdiff_t __n; // 269
					{
					}
				}
				uninitialized_copy<char const*, unsigned char*>(const char* __first,
										const char* __last,
										unsigned char* __result);  // 635
				__uninitialized_copy_a<char const*, char const*, unsigned char*, unsigned char>(const char* __first,
														const char* __last,
														unsigned char* __result,
														allocator<unsigned char> &);  // 953
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1823
				__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1823
				__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
				_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
							unsigned char *& __first);  // 143
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
				__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 950
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
				__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 958
			}
		}
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_insert<char const*>(
						iterator __position,
						const char* __first,
						const char* __last,
						forward_iterator_tag);  // 1621
		__normal_iterator<unsigned char const::__normal_iterator(
					const unsigned char* const& __i);  // 1080
		vector<unsigned char, std::allocator<unsigned char> >::cbegin(); // 1620
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1621
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1148
		__normal_iterator<unsigned char::operator+(
				difference_type __n);  // 1621
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1623
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1148
		__normal_iterator<unsigned char::operator+(
				difference_type __n);  // 1623
		vector<unsigned char, std::allocator<unsigned char> >::insert<char const*>(
					const_iterator __position,
					const char* __first,
					const char* __last);  // 35
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1019
		vector<unsigned char, std::allocator<unsigned char> >::end(); // 35
		__normal_iterator<unsigned char::base(); // 1082
		__normal_iterator<unsigned char const::__normal_iterator<unsigned char*>(
							const __normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > >& __i);  // 35
	}
	{
		char marker; // 40
		{
			const size_type  __n; // 891
			{
				pointer __old_start; // 934
				pointer __old_finish; // 935
				const size_type  __len; // 937
				pointer __new_start; // 944
				pointer __new_finish; // 945
				__new_allocator<unsigned char>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<unsigned char>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 387
				_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
						size_t __n);  // 944
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1823
				__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1823
				__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
				_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
							unsigned char *& __first);  // 143
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				_Construct<unsigned char, unsigned char>(unsigned char* __p); // 145
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
				__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 950
				{
					ptrdiff_t __n; // 269
					{
					}
				}
				uninitialized_copy<char*, unsigned char*>(char* __first,
										char* __last,
										unsigned char* __result);  // 635
				__uninitialized_copy_a<char*, char*, unsigned char*, unsigned char>(char* __first,
													char* __last,
													unsigned char* __result,
													allocator<unsigned char> &);  // 953
				__new_allocator<unsigned char>::deallocate(
						unsigned char* __p,
						size_type __n);  // 215
				allocator<unsigned char>::deallocate(
						unsigned char* __p,
						size_t __n);  // 649
				deallocate(allocator_type& __a,
						pointer __p,
						size_type __n);  // 396
				_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
						pointer __p,
						size_t __n);  // 971
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
				__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 958
			}
		}
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_insert<char*>(
					iterator __position,
					char* __first,
					char* __last,
					forward_iterator_tag);  // 1621
		__normal_iterator<unsigned char const::__normal_iterator(
					const unsigned char* const& __i);  // 1080
		vector<unsigned char, std::allocator<unsigned char> >::cbegin(); // 1620
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1621
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1148
		__normal_iterator<unsigned char::operator+(
				difference_type __n);  // 1621
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1623
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1148
		__normal_iterator<unsigned char::operator+(
				difference_type __n);  // 1623
		vector<unsigned char, std::allocator<unsigned char> >::insert<char*>(
				const_iterator __position,
				char* __first,
				char* __last);  // 41
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1019
		vector<unsigned char, std::allocator<unsigned char> >::end(); // 41
		__normal_iterator<unsigned char::base(); // 1082
		__normal_iterator<unsigned char const::__normal_iterator<unsigned char*>(
							const __normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > >& __i);  // 41
	}
	{
		vector<unsigned char, std::allocator<unsigned char> > data; // 49
		const char* ABGRChannelNames; // 50
		const char* BGRChannelNames; // 51
		const char ** pChannelNames; // 52
		{
			int c; // 54
			{
				ChannelInfo info; // 56
				{
					pointer __data; // 976
					size_type __capacity; // 977
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
						pointer __p);  // 999
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
				}
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 961
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
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 950
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
				assign(char_type& __c1,
					const char_type& __c2);  // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
						size_type __n);  // 1323
				basic_string<char, std::char_traits<char>, std::allocator<char> >::clear(); // 1003
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
						basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 61
				{
					const char* __end; // 713
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
					length(const char_type* __s); // 713
				}
				__new_allocator<char>::__new_allocator(
						const __new_allocator<char>  &);  // 173
				allocator<char>::allocator(
						const allocator<char>& __a);  // 205
				_Alloc_hider::_Alloc_hider(
						pointer __dat,
						const allocator<char>& __a);  // 707
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
				basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
						const char* __s,
						const allocator<char>& __a);  // 61
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
				basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 61
				allocator<char>::~allocator(); // 61
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
				__new_allocator<char>::__new_allocator(
						const __new_allocator<char>  &);  // 173
				allocator<char>::allocator(
						const allocator<char>& __a);  // 726
				select_on_container_copy_construction(const allocator_type& __rhs); // 100
				_S_select_on_copy(const allocator<char>& __a); // 615
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
				basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
				basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
				__new_allocator<char>::__new_allocator(
						const __new_allocator<char>  &);  // 173
				allocator<char>::allocator(
						const allocator<char>& __a);  // 209
				_Alloc_hider::_Alloc_hider(
						pointer __dat,
						allocator<char>& __a);  // 614
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
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
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7333
				ChannelInfo(const ChannelInfo* this,
						const ChannelInfo  &);  // 110
				construct_at<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(ChannelInfo* __location); // 676
				construct<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(allocator_type& __a,
												ChannelInfo* __p);  // 1421
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::size(); // 2199
				max<long unsigned int>(const long unsigned int& __a,
							const long unsigned int& __b);  // 2202
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_check_len(
						size_type __n,
						const char* __s);  // 566
				__normal_iterator<tinyexr::ChannelInfo::__normal_iterator(
							ChannelInfo* const& __i);  // 999
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::begin(); // 571
				__normal_iterator<tinyexr::ChannelInfo::__normal_iterator(
							ChannelInfo* const& __i);  // 1019
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::end(); // 571
				__new_allocator<tinyexr::ChannelInfo>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<tinyexr::ChannelInfo>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 387
				_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_allocate(
						size_t __n);  // 572
				{
					_Guard_alloc __guard; // 576
					basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
					basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
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
					allocator<char>::~allocator(); // 615
					basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
							const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7333
					ChannelInfo(const ChannelInfo* this,
							const ChannelInfo  &);  // 110
					construct_at<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(ChannelInfo* __location); // 676
					construct<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(allocator_type& __a,
													ChannelInfo* __p);  // 586
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
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
							size_type __length);  // 272
					assign(char_type& __c1,
						const char_type& __c2);  // 273
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
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
					basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
					copy(char_type* __s1,
						const char_type* __s2,
						size_t __n);  // 748
					basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
							basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7333
					ChannelInfo(const ChannelInfo* this,
							ChannelInfo &);  // 110
					construct_at<tinyexr::ChannelInfo, tinyexr::ChannelInfo>(ChannelInfo* __location); // 676
					construct<tinyexr::ChannelInfo, tinyexr::ChannelInfo>(allocator_type& __a,
												ChannelInfo* __p);  // 1288
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
					basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
					~ChannelInfo(const ChannelInfo* this); // 88
					destroy_at<tinyexr::ChannelInfo>(ChannelInfo* __location); // 698
					destroy<tinyexr::ChannelInfo>(allocator_type& __a,
									ChannelInfo* __p);  // 1289
					__relocate_object_a<tinyexr::ChannelInfo, tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >(ChannelInfo* __dest,
																ChannelInfo* __orig,
																allocator<tinyexr::ChannelInfo>& __alloc);  // 1317
					__relocate_a_1<tinyexr::ChannelInfo*, tinyexr::ChannelInfo*, std::allocator<tinyexr::ChannelInfo> >(ChannelInfo* __first,
																ChannelInfo* __last,
																ChannelInfo* __result,
																allocator<tinyexr::ChannelInfo>& __alloc);  // 1359
					__relocate_a<tinyexr::ChannelInfo*, tinyexr::ChannelInfo*, std::allocator<tinyexr::ChannelInfo> >(ChannelInfo* __first,
																ChannelInfo* __last,
																ChannelInfo* __result,
																allocator<tinyexr::ChannelInfo>& __alloc);  // 539
					_S_relocate(pointer __first,
							pointer __last,
							pointer __result,
							_Tp_alloc_type& __alloc);  // 599
					__new_allocator<tinyexr::ChannelInfo>::deallocate(
							ChannelInfo* __p,
							size_type __n);  // 215
					allocator<tinyexr::ChannelInfo>::deallocate(
							ChannelInfo* __p,
							size_t __n);  // 649
					deallocate(allocator_type& __a,
							pointer __p,
							size_type __n);  // 396
					_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
							pointer __p,
							size_t __n);  // 392
					_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
							pointer __p,
							size_t __n);  // 1883
					_Guard_alloc::~_Guard_alloc(); // 640
				}
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_realloc_append<const tinyexr::ChannelInfo&>(); // 1427
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::push_back(
						const value_type& __x);  // 62
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
				basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
				~ChannelInfo(const ChannelInfo* this); // 63
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
				basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 7333
				ChannelInfo(const ChannelInfo* this); // 56
			}
		}
		vector<unsigned char, std::allocator<unsigned char> >::size(); // 67
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned char, std::allocator<unsigned char> >::at(
			size_type __n);  // 67
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
		_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							allocator<unsigned char> &);  // 802
		__new_allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_type __n);  // 215
		allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<unsigned char>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
		vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 68
	}
	{
		int comp; // 71
	}
	{
		int data; // 79
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 79
	}
	{
		unsigned char line_order; // 93
	}
	{
		float aspectRatio; // 99
	}
	{
		float center; // 107
	}
	{
		float w; // 116
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 116
	}
	{
		unsigned char e; // 124
		construct_at<unsigned char, unsigned char const&>(unsigned char* __location); // 676
		construct<unsigned char, unsigned char const&>(allocator_type& __a,
								unsigned char* __p);  // 1421
		vector<unsigned char, std::allocator<unsigned char> >::size(); // 2199
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 2202
		vector<unsigned char, std::allocator<unsigned char> >::_M_check_len(
				size_type __n,
				const char* __s);  // 566
		__new_allocator<unsigned char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<unsigned char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
				size_t __n);  // 572
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 571
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1019
		vector<unsigned char, std::allocator<unsigned char> >::end(); // 571
		{
			_Guard_alloc __guard; // 576
			construct_at<unsigned char, unsigned char const&>(unsigned char* __location); // 676
			construct<unsigned char, unsigned char const&>(allocator_type& __a,
									unsigned char* __p);  // 586
			__relocate_a_1<unsigned char, unsigned char>(unsigned char* __first,
									unsigned char* __last,
									unsigned char* __result,
									allocator<unsigned char>& __alloc);  // 1359
			__relocate_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
													unsigned char* __last,
													unsigned char* __result,
													allocator<unsigned char>& __alloc);  // 539
			_S_relocate(pointer __first,
					pointer __last,
					pointer __result,
					_Tp_alloc_type& __alloc);  // 599
			_Guard_alloc::_Guard_alloc(
					pointer __s,
					size_type __l,
					_Base& __vect);  // 576
			__new_allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_type __n);  // 215
			allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 1883
			_Guard_alloc::~_Guard_alloc(); // 640
		}
		vector<unsigned char, std::allocator<unsigned char> >::_M_realloc_append<unsigned char const&>(); // 1427
		vector<unsigned char, std::allocator<unsigned char> >::push_back(
				const value_type& __x);  // 125
	}
	{
		size_t c; // 139
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
				size_type __n);  // 142
		vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
				size_type __n);  // 141
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 157
	}
	{
		size_t i; // 211
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 215
	}
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 471
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 477
	FloatBitMap_t::GetAttributeMask(); // 27
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 128
	__new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::__new_allocator(
			const __new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >  &);  // 173
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::allocator(
			const allocator<std::vector<unsigned char, std::allocator<unsigned char> > >& __a);  // 2210
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::__new_allocator(
			const __new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >  &);  // 173
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::allocator(
			const allocator<std::vector<unsigned char, std::allocator<unsigned char> > >& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_M_allocate(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,  this,
			size_t __n);  // 405
	_M_create_storage(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,  this,
				size_t __n);  // 341
	_Vector_base(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,  this,
			size_t __n,
			const allocator_type& __a);  // 587
	_Vector_impl_data::_Vector_impl_data(); // 148
	__new_allocator<unsigned char>::__new_allocator(); // 168
	allocator<unsigned char>::allocator(); // 148
	_Vector_impl::_Vector_impl(); // 321
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(); // 561
	vector<unsigned char, std::allocator<unsigned char> >::vector(); // 133
	_Construct<std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __p); // 876
	_UninitDestroyGuard<std::vector<unsigned char, std::allocator<unsigned char> >::_UninitDestroyGuard(
				vector<unsigned char, std::allocator<unsigned char> > *& __first);  // 874
	_UninitDestroyGuard<std::vector<unsigned char, std::allocator<unsigned char> >::~_UninitDestroyGuard(); // 879
	__uninit_default_n<std::vector<unsigned char>*, long unsigned int>(vector<unsigned char, std::allocator<unsigned char> >* __first,
										long unsigned int __n);  // 947
	__uninitialized_default_n<std::vector<unsigned char>*, long unsigned int>(vector<unsigned char, std::allocator<unsigned char> >* __first,
											long unsigned int __n);  // 1002
	__uninitialized_default_n_a<std::vector<unsigned char>*, long unsigned int, std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __first,
														long unsigned int __n,
														allocator<std::vector<unsigned char, std::allocator<unsigned char> > > &);  // 2011
	_M_default_initialize(const vector<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, std::a this,
				size_type __n);  // 588
	vector(const vector<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, std::a this,
		size_type __n,
		const allocator_type& __a);  // 134
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::~allocator(); // 134
	__new_allocator<long unsigned int>::__new_allocator(
			const __new_allocator<long unsigned int>  &);  // 173
	allocator<long unsigned int>::allocator(
			const allocator<long unsigned int>& __a);  // 2210
	allocator<long unsigned int>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<long unsigned int>::__new_allocator(
			const __new_allocator<long unsigned int>  &);  // 173
	allocator<long unsigned int>::allocator(
			const allocator<long unsigned int>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<long unsigned int>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<long unsigned int>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		__fill_a1<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 979
		__fill_a<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 1148
		__fill_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
											long unsigned int __n,
											const long unsigned int& __value,
											random_access_iterator_tag);  // 1178
		fill_n<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
										long unsigned int __n,
										const long unsigned int& __value);  // 896
		_Construct<long unsigned int>(long unsigned int* __p); // 894
	}
	__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 888
	__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 947
	__uninitialized_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
												long unsigned int __n,
												allocator<long unsigned int> &);  // 2011
	vector<long unsigned int, std::allocator<long unsigned int> >::_M_default_initialize(
				size_type __n);  // 588
	vector<long unsigned int, std::allocator<long unsigned int> >::vector(
		size_type __n,
		const allocator_type& __a);  // 135
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 157
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 160
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 160
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 2210
	allocator<unsigned char>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<unsigned char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<unsigned char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		{
			const size_t  __len; // 950
		}
		__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __x);  // 979
		__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __value);  // 1148
		__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
										long unsigned int __n,
										const unsigned char& __value,
										random_access_iterator_tag);  // 1178
		fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
									long unsigned int __n,
									const unsigned char& __value);  // 896
		_Construct<unsigned char>(unsigned char* __p); // 894
	}
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 888
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 947
	__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											allocator<unsigned char> &);  // 2011
	vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
				size_type __n);  // 588
	vector<unsigned char, std::allocator<unsigned char> >::vector(
		size_type __n,
		const allocator_type& __a);  // 160
	CParallelProcessLauncher::CParallelProcessLauncher(
				int nMaxThreads,
				const char* szDescription,
				IThreadPool* pThreadPool);  // 163
	IMultipleWorkerJob::IMultipleWorkerJob(); // 627
	CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >::CParallelLambdaJob(
				const class& lambda); // 648
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 624
	CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >::~CParallelLambdaJob() const::<lambda(int)> >* this); // 650
	CParallelProcessLauncher::operator<< <FloatBitMap_t::WriteInMemoryEXRFast(
												const class& lambda);  // 163
	allocator<unsigned char>::~allocator(); // 160
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 162
	__new_allocator<long unsigned int>::__new_allocator(
			const __new_allocator<long unsigned int>  &);  // 173
	allocator<long unsigned int>::allocator(
			const allocator<long unsigned int>& __a);  // 2210
	allocator<long unsigned int>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<long unsigned int>::__new_allocator(
			const __new_allocator<long unsigned int>  &);  // 173
	allocator<long unsigned int>::allocator(
			const allocator<long unsigned int>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<long unsigned int>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<long unsigned int>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		__fill_a1<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 979
		__fill_a<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 1148
		__fill_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
											long unsigned int __n,
											const long unsigned int& __value,
											random_access_iterator_tag);  // 1178
		fill_n<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
										long unsigned int __n,
										const long unsigned int& __value);  // 896
		_Construct<long unsigned int>(long unsigned int* __p); // 894
	}
	__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 888
	__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 947
	__uninitialized_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
												long unsigned int __n,
												allocator<long unsigned int> &);  // 2011
	vector<long unsigned int, std::allocator<long unsigned int> >::_M_default_initialize(
				size_type __n);  // 588
	vector<long unsigned int, std::allocator<long unsigned int> >::vector(
		size_type __n,
		const allocator_type& __a);  // 203
	vector<unsigned char, std::allocator<unsigned char> >::size(); // 204
	allocator<long unsigned int>::~allocator(); // 203
	vector<long unsigned int, std::allocator<long unsigned int> >::size(); // 1292
	vector<long unsigned int, std::allocator<long unsigned int> >::_M_range_check(
			size_type __n);  // 1315
	vector<long unsigned int, std::allocator<long unsigned int> >::at(
		size_type __n);  // 220
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1019
	vector<unsigned char, std::allocator<unsigned char> >::end(); // 219
	__normal_iterator<unsigned char::base(); // 1082
	__normal_iterator<unsigned char const::__normal_iterator<unsigned char*>(
						const __normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > >& __i);  // 219
	__normal_iterator<unsigned char const::__normal_iterator(
				const unsigned char* const& __i);  // 1080
	vector<unsigned char, std::allocator<unsigned char> >::cbegin(); // 1620
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1621
	{
		const size_type  __n; // 891
		{
			const size_type  __elems_after; // 895
			pointer __old_finish; // 896
			__normal_iterator<unsigned char::__normal_iterator(
						unsigned char* const& __i);  // 1019
			vector<unsigned char, std::allocator<unsigned char> >::end(); // 895
			{
				unsigned char* __mid; // 912
				{
					ptrdiff_t __n; // 269
					{
					}
				}
				uninitialized_copy<unsigned char*, unsigned char*>(unsigned char* __first,
											unsigned char* __last,
											unsigned char* __result);  // 635
				__uninitialized_copy_a<unsigned char*, unsigned char*, unsigned char*, unsigned char>(unsigned char* __first,
															unsigned char* __last,
															unsigned char* __result,
															allocator<unsigned char> &);  // 915
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1804
				make_move_iterator<unsigned char*>(unsigned char* __i); // 649
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1804
				make_move_iterator<unsigned char*>(unsigned char* __i); // 649
				_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
							unsigned char *& __first);  // 143
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 649
				__uninitialized_move_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
															unsigned char* __last,
															unsigned char* __result,
															allocator<unsigned char>& __alloc);  // 920
				__normal_iterator<unsigned char::__normal_iterator(
							unsigned char* const& __i);  // 1148
				__normal_iterator<unsigned char::operator+(
						difference_type __n);  // 3074
				__niter_wrap<__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> >, unsigned char*>(__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __from,
																unsigned char* __res);  // 500
				__copy_move_a<false, unsigned char*, __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> > >(unsigned char* __first,
																unsigned char* __last,
																__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __result);  // 642
				copy<unsigned char*, __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> > >(unsigned char* __first,
																unsigned char* __last,
																__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __result);  // 926
			}
		}
		{
			pointer __old_start; // 934
			pointer __old_finish; // 935
			const size_type  __len; // 937
			pointer __new_start; // 944
			pointer __new_finish; // 945
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 2202
			vector<unsigned char, std::allocator<unsigned char> >::_M_check_len(
					size_type __n,
					const char* __s);  // 938
			__new_allocator<unsigned char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<unsigned char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
					size_t __n);  // 944
			_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
						unsigned char *& __first);  // 143
			_Construct<unsigned char, unsigned char>(unsigned char* __p); // 145
			_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
			__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
			uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
												move_iterator<unsigned char*> __last,
												unsigned char* __result);  // 635
			__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
			move_iterator<unsigned char::move_iterator(
					iterator_type __i);  // 1823
			__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
			move_iterator<unsigned char::move_iterator(
					iterator_type __i);  // 1823
			__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
			__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 950
			{
				ptrdiff_t __n; // 269
				{
				}
			}
			uninitialized_copy<unsigned char*, unsigned char*>(unsigned char* __first,
										unsigned char* __last,
										unsigned char* __result);  // 635
			__uninitialized_copy_a<unsigned char*, unsigned char*, unsigned char*, unsigned char>(unsigned char* __first,
														unsigned char* __last,
														unsigned char* __result,
														allocator<unsigned char> &);  // 953
			_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
			__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
			uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
												move_iterator<unsigned char*> __last,
												unsigned char* __result);  // 635
			__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
			__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 958
			__new_allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_type __n);  // 215
			allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 971
		}
	}
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_insert<unsigned char*>(
					iterator __position,
					unsigned char* __first,
					unsigned char* __last,
					forward_iterator_tag);  // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1623
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1623
	vector<unsigned char, std::allocator<unsigned char> >::insert<unsigned char*>(
				const_iterator __position,
				unsigned char* __first,
				unsigned char* __last);  // 218
	vector<unsigned char, std::allocator<unsigned char> >::size(); // 223
	vector<unsigned char, std::allocator<unsigned char> >::size(); // 223
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
			size_type __n);  // 1315
	vector<unsigned char, std::allocator<unsigned char> >::at(
		size_type __n);  // 224
	vector<unsigned char, std::allocator<unsigned char> >::size(); // 225
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
			size_type __n);  // 1315
	vector<unsigned char, std::allocator<unsigned char> >::at(
		size_type __n);  // 225
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
	vector<long unsigned int, std::allocator<long unsigned int> >::~vector(); // 228
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<unsigned char>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 228
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
	vector<long unsigned int, std::allocator<long unsigned int> >::~vector(); // 228
	_M_get_Tp_allocator(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, this); // 803
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<unsigned char>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 88
	destroy_at<std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __location); // 164
	_Destroy<std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __pointer); // 226
	_Destroy<std::vector<unsigned char>*>(vector<unsigned char, std::allocator<unsigned char> >* __first,
						vector<unsigned char, std::allocator<unsigned char> >* __last);  // 1045
	_Destroy<std::vector<unsigned char>*, std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __first,
										vector<unsigned char, std::allocator<unsigned char> >* __last,
										allocator<std::vector<unsigned char, std::allocator<unsigned char> > > &);  // 802
	__new_allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >::deallocate(
			vector<long unsigned int, std::allocator<long unsigned int> >* __p,
			size_type __n);  // 215
	allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >::deallocate(
			vector<long unsigned int, std::allocator<long unsigned int> >* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_M_deallocate(const _Vector_base<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long un this,
			pointer __p,
			size_t __n);  // 392
	_M_deallocate(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,  this,
			pointer __p,
			size_t __n);  // 375
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	~_Vector_base(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, this); // 805
	~vector(const vector<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, std::a this); // 228
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_get_Tp_allocator(); // 803
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
	~ChannelInfo(const ChannelInfo* this); // 88
	destroy_at<tinyexr::ChannelInfo>(ChannelInfo* __location); // 164
	_Destroy<tinyexr::ChannelInfo>(ChannelInfo* __pointer); // 226
	_Destroy<tinyexr::ChannelInfo*>(ChannelInfo* __first,
					ChannelInfo* __last);  // 1045
	_Destroy<tinyexr::ChannelInfo*, tinyexr::ChannelInfo>(ChannelInfo* __first,
								ChannelInfo* __last,
								allocator<tinyexr::ChannelInfo> &);  // 802
	__new_allocator<tinyexr::ChannelInfo>::deallocate(
			ChannelInfo* __p,
			size_type __n);  // 215
	allocator<tinyexr::ChannelInfo>::deallocate(
			ChannelInfo* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<tinyexr::ChannelInfo>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~_Vector_base(); // 805
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~vector(); // 228
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<unsigned char>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 228
	allocator<long unsigned int>::~allocator(); // 135
} /* size: 0, variables: 22, inline expansions: 228 (0 bytes) */

// <00675158> bitmap/tinyexr_impl.cpp:17
// variables: 75
// function calls: 628
void FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer& inMemoryEXR)
{
	const int  nCols; // 25
	const int  nRows; // 26
	const bool  bHasAlpha; // 27
	const int  nChannels; // 28
	vector<unsigned char, std::allocator<unsigned char> > memory; // 30
	int num_scanlines; // 44
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> > channels; // 47
	int num_blocks; // 128
	vector<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, std::allocator<unsigned char> > > > data_list; // 134
	vector<long unsigned int, std::allocator<long unsigned int> > channel_offset_list; // 135
	int pixel_data_size; // 137
	size_t channel_offset; // 138
	const int  ABGRChannels; // 153
	const int  BGRChannels; // 154
	const int* nChannelForComponent; // 155
	const char   __FUNCTION__; // 39771
	const int  scanlineDataSize; // 159
	vector<unsigned char, std::allocator<unsigned char> > buf; // 160
	CInterlockedInt nRow; // 162
	vector<long unsigned int, std::allocator<long unsigned int> > offsets; // 203
	size_t headerSize; // 204
	tinyexr_uint64 offset; // 205
	{
		const char  header; // 34
		{
			const size_type  __n; // 891
			{
				pointer __old_start; // 934
				pointer __old_finish; // 935
				const size_type  __len; // 937
				pointer __new_start; // 944
				pointer __new_finish; // 945
				__new_allocator<unsigned char>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<unsigned char>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 387
				_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
						size_t __n);  // 944
				{
					ptrdiff_t __n; // 269
					{
					}
				}
				uninitialized_copy<char const*, unsigned char*>(const char* __first,
										const char* __last,
										unsigned char* __result);  // 635
				__uninitialized_copy_a<char const*, char const*, unsigned char*, unsigned char>(const char* __first,
														const char* __last,
														unsigned char* __result,
														allocator<unsigned char> &);  // 953
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1823
				__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1823
				__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
				_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
							unsigned char *& __first);  // 143
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
				__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 950
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
				__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 958
			}
		}
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_insert<char const*>(
						iterator __position,
						const char* __first,
						const char* __last,
						forward_iterator_tag);  // 1621
		__normal_iterator<unsigned char const::__normal_iterator(
					const unsigned char* const& __i);  // 1080
		vector<unsigned char, std::allocator<unsigned char> >::cbegin(); // 1620
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1621
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1148
		__normal_iterator<unsigned char::operator+(
				difference_type __n);  // 1621
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1623
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1148
		__normal_iterator<unsigned char::operator+(
				difference_type __n);  // 1623
		vector<unsigned char, std::allocator<unsigned char> >::insert<char const*>(
					const_iterator __position,
					const char* __first,
					const char* __last);  // 35
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1019
		vector<unsigned char, std::allocator<unsigned char> >::end(); // 35
		__normal_iterator<unsigned char::base(); // 1082
		__normal_iterator<unsigned char const::__normal_iterator<unsigned char*>(
							const __normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > >& __i);  // 35
	}
	{
		char marker; // 40
		{
			const size_type  __n; // 891
			{
				pointer __old_start; // 934
				pointer __old_finish; // 935
				const size_type  __len; // 937
				pointer __new_start; // 944
				pointer __new_finish; // 945
				__new_allocator<unsigned char>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<unsigned char>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 387
				_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
						size_t __n);  // 944
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1823
				__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1823
				__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
				_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
							unsigned char *& __first);  // 143
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				_Construct<unsigned char, unsigned char>(unsigned char* __p); // 145
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
				__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 950
				{
					ptrdiff_t __n; // 269
					{
					}
				}
				uninitialized_copy<char*, unsigned char*>(char* __first,
										char* __last,
										unsigned char* __result);  // 635
				__uninitialized_copy_a<char*, char*, unsigned char*, unsigned char>(char* __first,
													char* __last,
													unsigned char* __result,
													allocator<unsigned char> &);  // 953
				__new_allocator<unsigned char>::deallocate(
						unsigned char* __p,
						size_type __n);  // 215
				allocator<unsigned char>::deallocate(
						unsigned char* __p,
						size_t __n);  // 649
				deallocate(allocator_type& __a,
						pointer __p,
						size_type __n);  // 396
				_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
						pointer __p,
						size_t __n);  // 971
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
				__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 958
			}
		}
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_insert<char*>(
					iterator __position,
					char* __first,
					char* __last,
					forward_iterator_tag);  // 1621
		__normal_iterator<unsigned char const::__normal_iterator(
					const unsigned char* const& __i);  // 1080
		vector<unsigned char, std::allocator<unsigned char> >::cbegin(); // 1620
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1621
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1148
		__normal_iterator<unsigned char::operator+(
				difference_type __n);  // 1621
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1623
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1148
		__normal_iterator<unsigned char::operator+(
				difference_type __n);  // 1623
		vector<unsigned char, std::allocator<unsigned char> >::insert<char*>(
				const_iterator __position,
				char* __first,
				char* __last);  // 41
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1019
		vector<unsigned char, std::allocator<unsigned char> >::end(); // 41
		__normal_iterator<unsigned char::base(); // 1082
		__normal_iterator<unsigned char const::__normal_iterator<unsigned char*>(
							const __normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > >& __i);  // 41
	}
	{
		vector<unsigned char, std::allocator<unsigned char> > data; // 49
		const char* ABGRChannelNames; // 50
		const char* BGRChannelNames; // 51
		const char ** pChannelNames; // 52
		{
			int c; // 54
			{
				ChannelInfo info; // 56
				{
					pointer __data; // 976
					size_type __capacity; // 977
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
						pointer __p);  // 999
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
				}
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 961
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
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 950
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
				assign(char_type& __c1,
					const char_type& __c2);  // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
						size_type __n);  // 1323
				basic_string<char, std::char_traits<char>, std::allocator<char> >::clear(); // 1003
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
						basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 61
				{
					const char* __end; // 713
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
					length(const char_type* __s); // 713
				}
				__new_allocator<char>::__new_allocator(
						const __new_allocator<char>  &);  // 173
				allocator<char>::allocator(
						const allocator<char>& __a);  // 205
				_Alloc_hider::_Alloc_hider(
						pointer __dat,
						const allocator<char>& __a);  // 707
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
				basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
						const char* __s,
						const allocator<char>& __a);  // 61
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
				basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 61
				allocator<char>::~allocator(); // 61
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
				__new_allocator<char>::__new_allocator(
						const __new_allocator<char>  &);  // 173
				allocator<char>::allocator(
						const allocator<char>& __a);  // 726
				select_on_container_copy_construction(const allocator_type& __rhs); // 100
				_S_select_on_copy(const allocator<char>& __a); // 615
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
				basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
				basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
				__new_allocator<char>::__new_allocator(
						const __new_allocator<char>  &);  // 173
				allocator<char>::allocator(
						const allocator<char>& __a);  // 209
				_Alloc_hider::_Alloc_hider(
						pointer __dat,
						allocator<char>& __a);  // 614
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
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
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7333
				ChannelInfo(const ChannelInfo* this,
						const ChannelInfo  &);  // 110
				construct_at<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(ChannelInfo* __location); // 676
				construct<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(allocator_type& __a,
												ChannelInfo* __p);  // 1421
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::size(); // 2199
				max<long unsigned int>(const long unsigned int& __a,
							const long unsigned int& __b);  // 2202
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_check_len(
						size_type __n,
						const char* __s);  // 566
				__normal_iterator<tinyexr::ChannelInfo::__normal_iterator(
							ChannelInfo* const& __i);  // 999
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::begin(); // 571
				__normal_iterator<tinyexr::ChannelInfo::__normal_iterator(
							ChannelInfo* const& __i);  // 1019
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::end(); // 571
				__new_allocator<tinyexr::ChannelInfo>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<tinyexr::ChannelInfo>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 387
				_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_allocate(
						size_t __n);  // 572
				{
					_Guard_alloc __guard; // 576
					basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
					basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
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
					allocator<char>::~allocator(); // 615
					basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
							const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7333
					ChannelInfo(const ChannelInfo* this,
							const ChannelInfo  &);  // 110
					construct_at<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(ChannelInfo* __location); // 676
					construct<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(allocator_type& __a,
													ChannelInfo* __p);  // 586
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
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
							size_type __length);  // 272
					assign(char_type& __c1,
						const char_type& __c2);  // 273
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
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
					basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
					copy(char_type* __s1,
						const char_type* __s2,
						size_t __n);  // 748
					basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
							basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7333
					ChannelInfo(const ChannelInfo* this,
							ChannelInfo &);  // 110
					construct_at<tinyexr::ChannelInfo, tinyexr::ChannelInfo>(ChannelInfo* __location); // 676
					construct<tinyexr::ChannelInfo, tinyexr::ChannelInfo>(allocator_type& __a,
												ChannelInfo* __p);  // 1288
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
					basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
					~ChannelInfo(const ChannelInfo* this); // 88
					destroy_at<tinyexr::ChannelInfo>(ChannelInfo* __location); // 698
					destroy<tinyexr::ChannelInfo>(allocator_type& __a,
									ChannelInfo* __p);  // 1289
					__relocate_object_a<tinyexr::ChannelInfo, tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >(ChannelInfo* __dest,
																ChannelInfo* __orig,
																allocator<tinyexr::ChannelInfo>& __alloc);  // 1317
					__relocate_a_1<tinyexr::ChannelInfo*, tinyexr::ChannelInfo*, std::allocator<tinyexr::ChannelInfo> >(ChannelInfo* __first,
																ChannelInfo* __last,
																ChannelInfo* __result,
																allocator<tinyexr::ChannelInfo>& __alloc);  // 1359
					__relocate_a<tinyexr::ChannelInfo*, tinyexr::ChannelInfo*, std::allocator<tinyexr::ChannelInfo> >(ChannelInfo* __first,
																ChannelInfo* __last,
																ChannelInfo* __result,
																allocator<tinyexr::ChannelInfo>& __alloc);  // 539
					_S_relocate(pointer __first,
							pointer __last,
							pointer __result,
							_Tp_alloc_type& __alloc);  // 599
					__new_allocator<tinyexr::ChannelInfo>::deallocate(
							ChannelInfo* __p,
							size_type __n);  // 215
					allocator<tinyexr::ChannelInfo>::deallocate(
							ChannelInfo* __p,
							size_t __n);  // 649
					deallocate(allocator_type& __a,
							pointer __p,
							size_type __n);  // 396
					_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
							pointer __p,
							size_t __n);  // 392
					_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
							pointer __p,
							size_t __n);  // 1883
					_Guard_alloc::~_Guard_alloc(); // 640
				}
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_realloc_append<const tinyexr::ChannelInfo&>(); // 1427
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::push_back(
						const value_type& __x);  // 62
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
				basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
				~ChannelInfo(const ChannelInfo* this); // 63
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
				basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 7333
				ChannelInfo(const ChannelInfo* this); // 56
			}
		}
		vector<unsigned char, std::allocator<unsigned char> >::size(); // 67
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned char, std::allocator<unsigned char> >::at(
			size_type __n);  // 67
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
		_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							allocator<unsigned char> &);  // 802
		__new_allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_type __n);  // 215
		allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<unsigned char>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
		vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 68
	}
	{
		int comp; // 71
	}
	{
		int data; // 79
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 79
	}
	{
		unsigned char line_order; // 93
	}
	{
		float aspectRatio; // 99
	}
	{
		float center; // 107
	}
	{
		float w; // 116
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 116
	}
	{
		unsigned char e; // 124
		construct_at<unsigned char, unsigned char const&>(unsigned char* __location); // 676
		construct<unsigned char, unsigned char const&>(allocator_type& __a,
								unsigned char* __p);  // 1421
		vector<unsigned char, std::allocator<unsigned char> >::size(); // 2199
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 2202
		vector<unsigned char, std::allocator<unsigned char> >::_M_check_len(
				size_type __n,
				const char* __s);  // 566
		__new_allocator<unsigned char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<unsigned char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
				size_t __n);  // 572
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 999
		vector<unsigned char, std::allocator<unsigned char> >::begin(); // 571
		__normal_iterator<unsigned char::__normal_iterator(
					unsigned char* const& __i);  // 1019
		vector<unsigned char, std::allocator<unsigned char> >::end(); // 571
		{
			_Guard_alloc __guard; // 576
			construct_at<unsigned char, unsigned char const&>(unsigned char* __location); // 676
			construct<unsigned char, unsigned char const&>(allocator_type& __a,
									unsigned char* __p);  // 586
			__relocate_a_1<unsigned char, unsigned char>(unsigned char* __first,
									unsigned char* __last,
									unsigned char* __result,
									allocator<unsigned char>& __alloc);  // 1359
			__relocate_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
													unsigned char* __last,
													unsigned char* __result,
													allocator<unsigned char>& __alloc);  // 539
			_S_relocate(pointer __first,
					pointer __last,
					pointer __result,
					_Tp_alloc_type& __alloc);  // 599
			_Guard_alloc::_Guard_alloc(
					pointer __s,
					size_type __l,
					_Base& __vect);  // 576
			__new_allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_type __n);  // 215
			allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 1883
			_Guard_alloc::~_Guard_alloc(); // 640
		}
		vector<unsigned char, std::allocator<unsigned char> >::_M_realloc_append<unsigned char const&>(); // 1427
		vector<unsigned char, std::allocator<unsigned char> >::push_back(
				const value_type& __x);  // 125
	}
	{
		size_t c; // 139
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
				size_type __n);  // 142
		vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
				size_type __n);  // 141
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 157
	}
	{
		size_t i; // 211
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 215
	}
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 471
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 477
	FloatBitMap_t::GetAttributeMask(); // 27
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 128
	__new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::__new_allocator(
			const __new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >  &);  // 173
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::allocator(
			const allocator<std::vector<unsigned char, std::allocator<unsigned char> > >& __a);  // 2210
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::__new_allocator(
			const __new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >  &);  // 173
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::allocator(
			const allocator<std::vector<unsigned char, std::allocator<unsigned char> > >& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_M_allocate(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,  this,
			size_t __n);  // 405
	_M_create_storage(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,  this,
				size_t __n);  // 341
	_Vector_base(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,  this,
			size_t __n,
			const allocator_type& __a);  // 587
	_Vector_impl_data::_Vector_impl_data(); // 148
	__new_allocator<unsigned char>::__new_allocator(); // 168
	allocator<unsigned char>::allocator(); // 148
	_Vector_impl::_Vector_impl(); // 321
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(); // 561
	vector<unsigned char, std::allocator<unsigned char> >::vector(); // 133
	_Construct<std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __p); // 876
	_UninitDestroyGuard<std::vector<unsigned char, std::allocator<unsigned char> >::_UninitDestroyGuard(
				vector<unsigned char, std::allocator<unsigned char> > *& __first);  // 874
	_UninitDestroyGuard<std::vector<unsigned char, std::allocator<unsigned char> >::~_UninitDestroyGuard(); // 879
	__uninit_default_n<std::vector<unsigned char>*, long unsigned int>(vector<unsigned char, std::allocator<unsigned char> >* __first,
										long unsigned int __n);  // 947
	__uninitialized_default_n<std::vector<unsigned char>*, long unsigned int>(vector<unsigned char, std::allocator<unsigned char> >* __first,
											long unsigned int __n);  // 1002
	__uninitialized_default_n_a<std::vector<unsigned char>*, long unsigned int, std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __first,
														long unsigned int __n,
														allocator<std::vector<unsigned char, std::allocator<unsigned char> > > &);  // 2011
	_M_default_initialize(const vector<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, std::a this,
				size_type __n);  // 588
	vector(const vector<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, std::a this,
		size_type __n,
		const allocator_type& __a);  // 134
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::~allocator(); // 134
	__new_allocator<long unsigned int>::__new_allocator(
			const __new_allocator<long unsigned int>  &);  // 173
	allocator<long unsigned int>::allocator(
			const allocator<long unsigned int>& __a);  // 2210
	allocator<long unsigned int>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<long unsigned int>::__new_allocator(
			const __new_allocator<long unsigned int>  &);  // 173
	allocator<long unsigned int>::allocator(
			const allocator<long unsigned int>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<long unsigned int>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<long unsigned int>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		__fill_a1<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 979
		__fill_a<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 1148
		__fill_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
											long unsigned int __n,
											const long unsigned int& __value,
											random_access_iterator_tag);  // 1178
		fill_n<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
										long unsigned int __n,
										const long unsigned int& __value);  // 896
		_Construct<long unsigned int>(long unsigned int* __p); // 894
	}
	__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 888
	__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 947
	__uninitialized_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
												long unsigned int __n,
												allocator<long unsigned int> &);  // 2011
	vector<long unsigned int, std::allocator<long unsigned int> >::_M_default_initialize(
				size_type __n);  // 588
	vector<long unsigned int, std::allocator<long unsigned int> >::vector(
		size_type __n,
		const allocator_type& __a);  // 135
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 157
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 160
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 160
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 2210
	allocator<unsigned char>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<unsigned char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<unsigned char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		{
			const size_t  __len; // 950
		}
		__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __x);  // 979
		__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __value);  // 1148
		__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
										long unsigned int __n,
										const unsigned char& __value,
										random_access_iterator_tag);  // 1178
		fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
									long unsigned int __n,
									const unsigned char& __value);  // 896
		_Construct<unsigned char>(unsigned char* __p); // 894
	}
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 888
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 947
	__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											allocator<unsigned char> &);  // 2011
	vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
				size_type __n);  // 588
	vector<unsigned char, std::allocator<unsigned char> >::vector(
		size_type __n,
		const allocator_type& __a);  // 160
	CParallelProcessLauncher::CParallelProcessLauncher(
				int nMaxThreads,
				const char* szDescription,
				IThreadPool* pThreadPool);  // 163
	IMultipleWorkerJob::IMultipleWorkerJob(); // 627
	CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >::CParallelLambdaJob(
				const class& lambda); // 648
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 624
	CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >::~CParallelLambdaJob() const::<lambda(int)> >* this); // 650
	CParallelProcessLauncher::operator<< <FloatBitMap_t::WriteInMemoryEXRFast(
												const class& lambda);  // 163
	allocator<unsigned char>::~allocator(); // 160
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 162
	__new_allocator<long unsigned int>::__new_allocator(
			const __new_allocator<long unsigned int>  &);  // 173
	allocator<long unsigned int>::allocator(
			const allocator<long unsigned int>& __a);  // 2210
	allocator<long unsigned int>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<long unsigned int>::__new_allocator(
			const __new_allocator<long unsigned int>  &);  // 173
	allocator<long unsigned int>::allocator(
			const allocator<long unsigned int>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<long unsigned int>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<long unsigned int>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		__fill_a1<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 979
		__fill_a<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 1148
		__fill_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
											long unsigned int __n,
											const long unsigned int& __value,
											random_access_iterator_tag);  // 1178
		fill_n<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
										long unsigned int __n,
										const long unsigned int& __value);  // 896
		_Construct<long unsigned int>(long unsigned int* __p); // 894
	}
	__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 888
	__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 947
	__uninitialized_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
												long unsigned int __n,
												allocator<long unsigned int> &);  // 2011
	vector<long unsigned int, std::allocator<long unsigned int> >::_M_default_initialize(
				size_type __n);  // 588
	vector<long unsigned int, std::allocator<long unsigned int> >::vector(
		size_type __n,
		const allocator_type& __a);  // 203
	vector<unsigned char, std::allocator<unsigned char> >::size(); // 204
	allocator<long unsigned int>::~allocator(); // 203
	vector<long unsigned int, std::allocator<long unsigned int> >::size(); // 1292
	vector<long unsigned int, std::allocator<long unsigned int> >::_M_range_check(
			size_type __n);  // 1315
	vector<long unsigned int, std::allocator<long unsigned int> >::at(
		size_type __n);  // 220
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1019
	vector<unsigned char, std::allocator<unsigned char> >::end(); // 219
	__normal_iterator<unsigned char::base(); // 1082
	__normal_iterator<unsigned char const::__normal_iterator<unsigned char*>(
						const __normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > >& __i);  // 219
	__normal_iterator<unsigned char const::__normal_iterator(
				const unsigned char* const& __i);  // 1080
	vector<unsigned char, std::allocator<unsigned char> >::cbegin(); // 1620
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1621
	{
		const size_type  __n; // 891
		{
			const size_type  __elems_after; // 895
			pointer __old_finish; // 896
			__normal_iterator<unsigned char::__normal_iterator(
						unsigned char* const& __i);  // 1019
			vector<unsigned char, std::allocator<unsigned char> >::end(); // 895
			{
				unsigned char* __mid; // 912
				{
					ptrdiff_t __n; // 269
					{
					}
				}
				uninitialized_copy<unsigned char*, unsigned char*>(unsigned char* __first,
											unsigned char* __last,
											unsigned char* __result);  // 635
				__uninitialized_copy_a<unsigned char*, unsigned char*, unsigned char*, unsigned char>(unsigned char* __first,
															unsigned char* __last,
															unsigned char* __result,
															allocator<unsigned char> &);  // 915
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1804
				make_move_iterator<unsigned char*>(unsigned char* __i); // 649
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1804
				make_move_iterator<unsigned char*>(unsigned char* __i); // 649
				_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
							unsigned char *& __first);  // 143
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 649
				__uninitialized_move_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
															unsigned char* __last,
															unsigned char* __result,
															allocator<unsigned char>& __alloc);  // 920
				__normal_iterator<unsigned char::__normal_iterator(
							unsigned char* const& __i);  // 1148
				__normal_iterator<unsigned char::operator+(
						difference_type __n);  // 3074
				__niter_wrap<__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> >, unsigned char*>(__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __from,
																unsigned char* __res);  // 500
				__copy_move_a<false, unsigned char*, __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> > >(unsigned char* __first,
																unsigned char* __last,
																__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __result);  // 642
				copy<unsigned char*, __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> > >(unsigned char* __first,
																unsigned char* __last,
																__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __result);  // 926
			}
		}
		{
			pointer __old_start; // 934
			pointer __old_finish; // 935
			const size_type  __len; // 937
			pointer __new_start; // 944
			pointer __new_finish; // 945
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 2202
			vector<unsigned char, std::allocator<unsigned char> >::_M_check_len(
					size_type __n,
					const char* __s);  // 938
			__new_allocator<unsigned char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<unsigned char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
					size_t __n);  // 944
			_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
						unsigned char *& __first);  // 143
			_Construct<unsigned char, unsigned char>(unsigned char* __p); // 145
			_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
			__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
			uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
												move_iterator<unsigned char*> __last,
												unsigned char* __result);  // 635
			__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
			move_iterator<unsigned char::move_iterator(
					iterator_type __i);  // 1823
			__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
			move_iterator<unsigned char::move_iterator(
					iterator_type __i);  // 1823
			__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
			__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 950
			{
				ptrdiff_t __n; // 269
				{
				}
			}
			uninitialized_copy<unsigned char*, unsigned char*>(unsigned char* __first,
										unsigned char* __last,
										unsigned char* __result);  // 635
			__uninitialized_copy_a<unsigned char*, unsigned char*, unsigned char*, unsigned char>(unsigned char* __first,
														unsigned char* __last,
														unsigned char* __result,
														allocator<unsigned char> &);  // 953
			_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
			__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
			uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
												move_iterator<unsigned char*> __last,
												unsigned char* __result);  // 635
			__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
			__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 958
			__new_allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_type __n);  // 215
			allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 971
		}
	}
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_insert<unsigned char*>(
					iterator __position,
					unsigned char* __first,
					unsigned char* __last,
					forward_iterator_tag);  // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1623
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1623
	vector<unsigned char, std::allocator<unsigned char> >::insert<unsigned char*>(
				const_iterator __position,
				unsigned char* __first,
				unsigned char* __last);  // 218
	vector<unsigned char, std::allocator<unsigned char> >::size(); // 223
	vector<unsigned char, std::allocator<unsigned char> >::size(); // 223
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
			size_type __n);  // 1315
	vector<unsigned char, std::allocator<unsigned char> >::at(
		size_type __n);  // 224
	vector<unsigned char, std::allocator<unsigned char> >::size(); // 225
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
			size_type __n);  // 1315
	vector<unsigned char, std::allocator<unsigned char> >::at(
		size_type __n);  // 225
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
	vector<long unsigned int, std::allocator<long unsigned int> >::~vector(); // 228
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<unsigned char>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 228
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
	vector<long unsigned int, std::allocator<long unsigned int> >::~vector(); // 228
	_M_get_Tp_allocator(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, this); // 803
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<unsigned char>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 88
	destroy_at<std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __location); // 164
	_Destroy<std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __pointer); // 226
	_Destroy<std::vector<unsigned char>*>(vector<unsigned char, std::allocator<unsigned char> >* __first,
						vector<unsigned char, std::allocator<unsigned char> >* __last);  // 1045
	_Destroy<std::vector<unsigned char>*, std::vector<unsigned char> >(vector<unsigned char, std::allocator<unsigned char> >* __first,
										vector<unsigned char, std::allocator<unsigned char> >* __last,
										allocator<std::vector<unsigned char, std::allocator<unsigned char> > > &);  // 802
	__new_allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >::deallocate(
			vector<long unsigned int, std::allocator<long unsigned int> >* __p,
			size_type __n);  // 215
	allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >::deallocate(
			vector<long unsigned int, std::allocator<long unsigned int> >* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_M_deallocate(const _Vector_base<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long un this,
			pointer __p,
			size_t __n);  // 392
	_M_deallocate(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,  this,
			pointer __p,
			size_t __n);  // 375
	allocator<std::vector<unsigned char, std::allocator<unsigned char> > >::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	~_Vector_base(const _Vector_base<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, this); // 805
	~vector(const vector<std::vector<unsigned char, std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char, std::a this); // 228
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_get_Tp_allocator(); // 803
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
	~ChannelInfo(const ChannelInfo* this); // 88
	destroy_at<tinyexr::ChannelInfo>(ChannelInfo* __location); // 164
	_Destroy<tinyexr::ChannelInfo>(ChannelInfo* __pointer); // 226
	_Destroy<tinyexr::ChannelInfo*>(ChannelInfo* __first,
					ChannelInfo* __last);  // 1045
	_Destroy<tinyexr::ChannelInfo*, tinyexr::ChannelInfo>(ChannelInfo* __first,
								ChannelInfo* __last,
								allocator<tinyexr::ChannelInfo> &);  // 802
	__new_allocator<tinyexr::ChannelInfo>::deallocate(
			ChannelInfo* __p,
			size_type __n);  // 215
	allocator<tinyexr::ChannelInfo>::deallocate(
			ChannelInfo* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<tinyexr::ChannelInfo>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~_Vector_base(); // 805
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~vector(); // 228
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<unsigned char>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 228
	allocator<long unsigned int>::~allocator(); // 135
} /* size: 0, variables: 22, inline expansions: 228 (0 bytes) */

