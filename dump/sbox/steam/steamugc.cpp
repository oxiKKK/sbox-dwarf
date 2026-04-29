
//
// sbox/steam/steamugc.cpp
//
//	referenced by: libengine2.so
//
//	functions: 51
//

// <01F8B945> sbox/steam/steamugc.cpp:10
// variable: 1
void CUgcUpdate::InitTags()
{
	{
		int i; // 12
	}
} /* size: 0 */

// <01F8AB07> sbox/steam/steamugc.cpp:16
// variables: 3
// function calls: 7
void CUgcUpdate::CUgcUpdate(PublishedFileId_t publishedFileId)
{
	{
		ISteamUGC* steamUGC; // 20
	}
	CCallbackBase::CCallbackBase(); // 79
	CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::CCallResult(); // 16
	{
		ISteamUGC* steamUGC; // 20
		{
			int i; // 12
		}
		CUgcUpdate::InitTags(); // 18
		SteamUGC(void); // 20
		SteamUtils(void); // 25
	}
	CCallbackBase::CCallbackBase(); // 79
	CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::CCallResult(); // 16
} /* size: 265, inline expansions: 4 (108 bytes) */

// <01F8AAD1> sbox/steam/steamugc.cpp:16
// variable: 1
void CUgcUpdate::CUgcUpdate(PublishedFileId_t publishedFileId)
{
	{
		ISteamUGC* steamUGC; // 20
	}
} /* size: 0 */

// <01F8A88A> sbox/steam/steamugc.cpp:28
// variables: 5
// function calls: 8
void CUgcUpdate::CUgcUpdate(EWorkshopFileType fileType)
{
	{
		ISteamUGC* steamUGC; // 32
		SteamAPICall_t apiCall; // 39
	}
	CCallbackBase::CCallbackBase(); // 79
	CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::CCallResult(); // 28
	{
		ISteamUGC* steamUGC; // 32
		SteamAPICall_t apiCall; // 39
		{
			int i; // 12
		}
		CUgcUpdate::InitTags(); // 30
		SteamUGC(void); // 32
		SteamUtils(void); // 39
		CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::Set(
			SteamAPICall_t hAPICall,
			CUgcUpdate* p,
			func_t func);  // 44
	}
	CCallbackBase::CCallbackBase(); // 79
	CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::CCallResult(); // 28
} /* size: 375, inline expansions: 4 (108 bytes) */

// <01F8A848> sbox/steam/steamugc.cpp:28
// variables: 2
void CUgcUpdate::CUgcUpdate(EWorkshopFileType fileType)
{
	{
		ISteamUGC* steamUGC; // 32
		SteamAPICall_t apiCall; // 39
	}
} /* size: 0 */

// <01F8A718> sbox/steam/steamugc.cpp:48
// variables: 2
// function calls: 4
void CUgcUpdate::~CUgcUpdate()
{
	{
		int i; // 50
	}
	{
		int i; // 50
	}
	CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::Cancel(); // 120
	CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::~CCallResult(); // 59
	CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::Cancel(); // 120
	CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::~CCallResult(); // 59
} /* size: 174, inline expansions: 4 (116 bytes) */

// <01F8A6EF> sbox/steam/steamugc.cpp:48
// variable: 1
void CUgcUpdate::~CUgcUpdate()
{
	{
		int i; // 50
	}
} /* size: 0 */

// <01F8B999> sbox/steam/steamugc.cpp:61
void CUgcUpdate::IsValid()
{
} /* size: 0 */

// <01F8A6A1> sbox/steam/steamugc.cpp:66
void CUgcUpdate::GetPublishedFileId()
{
} /* size: 9 */

// <01F8A5C5> sbox/steam/steamugc.cpp:71
// variable: 1
// function calls: 2
void CUgcUpdate::SetTitle(const char* title)
{
	ISteamUGC* steamUGC; // 76
	CUgcUpdate::IsValid(); // 73
	SteamUGC(void); // 76
} /* size: 101, variables: 1, inline expansions: 2 (15 bytes) */

// <01F8A4E9> sbox/steam/steamugc.cpp:83
// variable: 1
// function calls: 2
void CUgcUpdate::SetDescription(const char* description)
{
	ISteamUGC* steamUGC; // 88
	CUgcUpdate::IsValid(); // 85
	SteamUGC(void); // 88
} /* size: 89, variables: 1, inline expansions: 2 (15 bytes) */

// <01F8A40D> sbox/steam/steamugc.cpp:95
// variable: 1
// function calls: 2
void CUgcUpdate::SetLanguage(const char* language)
{
	ISteamUGC* steamUGC; // 100
	CUgcUpdate::IsValid(); // 97
	SteamUGC(void); // 100
} /* size: 89, variables: 1, inline expansions: 2 (15 bytes) */

// <01F8A331> sbox/steam/steamugc.cpp:107
// variable: 1
// function calls: 2
void CUgcUpdate::SetMetadata(const char* metadata)
{
	ISteamUGC* steamUGC; // 112
	CUgcUpdate::IsValid(); // 109
	SteamUGC(void); // 112
} /* size: 89, variables: 1, inline expansions: 2 (15 bytes) */

// <01F8A249> sbox/steam/steamugc.cpp:119
// variable: 1
// function calls: 2
void CUgcUpdate::SetVisibility(int visibility)
{
	ISteamUGC* steamUGC; // 124
	CUgcUpdate::IsValid(); // 121
	SteamUGC(void); // 124
} /* size: 81, variables: 1, inline expansions: 2 (15 bytes) */

// <01F8A198> sbox/steam/steamugc.cpp:131
// variables: 2
void CUgcUpdate::SetTag(const char* tag)
{
	int len; // 136
	{
		int i; // 140
	}
} /* size: 241, variables: 1 */

// <01F8A0AC> sbox/steam/steamugc.cpp:145
// variables: 2
// function calls: 2
void CUgcUpdate::ApplyTags()
{
	ISteamUGC* steamUGC; // 150
	SteamParamStringArray_t steamTags; // 154
	CUgcUpdate::IsValid(); // 147
	SteamUGC(void); // 150
} /* size: 133, variables: 2, inline expansions: 2 (19 bytes) */

// <01F89FD0> sbox/steam/steamugc.cpp:161
// variable: 1
// function calls: 2
void CUgcUpdate::SetContentFolder(const char* contentFolder)
{
	ISteamUGC* steamUGC; // 166
	CUgcUpdate::IsValid(); // 163
	SteamUGC(void); // 166
} /* size: 101, variables: 1, inline expansions: 2 (15 bytes) */

// <01F89EF4> sbox/steam/steamugc.cpp:173
// variable: 1
// function calls: 2
void CUgcUpdate::SetPreviewImage(const char* previewFile)
{
	ISteamUGC* steamUGC; // 178
	CUgcUpdate::IsValid(); // 175
	SteamUGC(void); // 178
} /* size: 101, variables: 1, inline expansions: 2 (15 bytes) */

// <01F89E15> sbox/steam/steamugc.cpp:185
// variable: 1
// function calls: 2
void CUgcUpdate::SetAllowLegacyUpload(bool allow)
{
	ISteamUGC* steamUGC; // 190
	CUgcUpdate::IsValid(); // 187
	SteamUGC(void); // 190
} /* size: 81, variables: 1, inline expansions: 2 (17 bytes) */

// <01F89D0A> sbox/steam/steamugc.cpp:197
// variable: 1
// function calls: 2
void CUgcUpdate::AddKeyValueTag(const char* key, const char* value)
{
	ISteamUGC* steamUGC; // 202
	CUgcUpdate::IsValid(); // 199
	SteamUGC(void); // 202
} /* size: 137, variables: 1, inline expansions: 2 (15 bytes) */

// <01F89C2D> sbox/steam/steamugc.cpp:209
// variable: 1
// function calls: 2
void CUgcUpdate::RemoveKeyValueTags(const char* key)
{
	ISteamUGC* steamUGC; // 214
	CUgcUpdate::IsValid(); // 211
	SteamUGC(void); // 214
} /* size: 101, variables: 1, inline expansions: 2 (15 bytes) */

// <01F89B7B> sbox/steam/steamugc.cpp:221
// variable: 1
// function calls: 2
void CUgcUpdate::RemoveAllKeyValueTags()
{
	ISteamUGC* steamUGC; // 226
	CUgcUpdate::IsValid(); // 223
	SteamUGC(void); // 226
} /* size: 81, variables: 1, inline expansions: 2 (15 bytes) */

// <01F89A84> sbox/steam/steamugc.cpp:233
// variable: 1
// function calls: 2
void CUgcUpdate::AddPreviewFile(const char* previewFile, int type)
{
	ISteamUGC* steamUGC; // 238
	CUgcUpdate::IsValid(); // 235
	SteamUGC(void); // 238
} /* size: 123, variables: 1, inline expansions: 2 (15 bytes) */

// <01F899A8> sbox/steam/steamugc.cpp:245
// variable: 1
// function calls: 2
void CUgcUpdate::AddPreviewVideo(const char* videoId)
{
	ISteamUGC* steamUGC; // 250
	CUgcUpdate::IsValid(); // 247
	SteamUGC(void); // 250
} /* size: 101, variables: 1, inline expansions: 2 (15 bytes) */

// <01F898AB> sbox/steam/steamugc.cpp:257
// variable: 1
// function calls: 2
void CUgcUpdate::UpdatePreviewFile(unsigned int index, const char* previewFile)
{
	ISteamUGC* steamUGC; // 262
	CUgcUpdate::IsValid(); // 259
	SteamUGC(void); // 262
} /* size: 123, variables: 1, inline expansions: 2 (15 bytes) */

// <01F897AE> sbox/steam/steamugc.cpp:269
// variable: 1
// function calls: 2
void CUgcUpdate::UpdatePreviewVideo(unsigned int index, const char* videoId)
{
	ISteamUGC* steamUGC; // 274
	CUgcUpdate::IsValid(); // 271
	SteamUGC(void); // 274
} /* size: 123, variables: 1, inline expansions: 2 (15 bytes) */

// <01F896C1> sbox/steam/steamugc.cpp:281
// variable: 1
// function calls: 2
void CUgcUpdate::RemovePreview(unsigned int index)
{
	ISteamUGC* steamUGC; // 286
	CUgcUpdate::IsValid(); // 283
	SteamUGC(void); // 286
} /* size: 81, variables: 1, inline expansions: 2 (15 bytes) */

// <01F895B7> sbox/steam/steamugc.cpp:293
// variables: 3
// function calls: 2
void CUgcUpdate::SetRequiredGameVersions(const char* minVersion, const char* maxVersion)
{
	ISteamUGC* steamUGC; // 298
	const char* min; // 302
	const char* max; // 303
	CUgcUpdate::IsValid(); // 295
	SteamUGC(void); // 298
} /* size: 145, variables: 3, inline expansions: 2 (18 bytes) */

// <01F8941F> sbox/steam/steamugc.cpp:307
// variables: 2
// function calls: 3
void CUgcUpdate::Submit(const char* changeNote)
{
	ISteamUGC* steamUGC; // 312
	SteamAPICall_t apiCall; // 320
	CUgcUpdate::IsValid(); // 309
	SteamUGC(void); // 312
	CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::Set(
		SteamAPICall_t hAPICall,
		CUgcUpdate* p,
		func_t func);  // 324
} /* size: 215, variables: 2, inline expansions: 3 (82 bytes) */

// <01F893CC> sbox/steam/steamugc.cpp:332
void CUgcUpdate::OnSubmitCompleted(SubmitItemUpdateResult_t* pResult, bool bIOFailure)
{
} /* size: 44 */

// <01F8B822> sbox/steam/steamugc.cpp:341
// variable: 1
// function calls: 3
void CUgcUpdate::OnCreateCompleted(CreateItemResult_t* pResult, bool bIOFailure)
{
	ISteamUGC* steamUGC; // 354
	SteamUGC(void); // 354
	SteamUtils(void); // 358
	CUgcUpdate::OnCreateCompleted(
				CreateItemResult_t* pResult,
				bool bIOFailure);  // 341
} /* size: 154, variables: 1, inline expansions: 3 (142 bytes) */

// <01F89387> sbox/steam/steamugc.cpp:341
// variable: 1
void CUgcUpdate::OnCreateCompleted(CreateItemResult_t* pResult, bool bIOFailure)
{
	ISteamUGC* steamUGC; // 354
} /* size: 0, variables: 1 */

// <01F89265> sbox/steam/steamugc.cpp:361
// variables: 4
// function calls: 2
void CUgcUpdate::GetProgressPercent()
{
	ISteamUGC* steamUGC; // 366
	long long unsigned int bytesProcessed; // 370
	long long unsigned int bytesTotal; // 371
	EItemUpdateStatus status; // 373
	CUgcUpdate::IsValid(); // 363
	SteamUGC(void); // 366
} /* size: 270, variables: 4, inline expansions: 2 (15 bytes) */

// <01F89158> sbox/steam/steamugc.cpp:382
// variables: 3
// function calls: 2
void CUgcUpdate::GetBytesProcessed()
{
	ISteamUGC* steamUGC; // 387
	long long unsigned int bytesProcessed; // 391
	long long unsigned int bytesTotal; // 392
	CUgcUpdate::IsValid(); // 384
	SteamUGC(void); // 387
} /* size: 137, variables: 3, inline expansions: 2 (15 bytes) */

// <01F8904B> sbox/steam/steamugc.cpp:399
// variables: 3
// function calls: 2
void CUgcUpdate::GetBytesTotal()
{
	ISteamUGC* steamUGC; // 404
	long long unsigned int bytesProcessed; // 408
	long long unsigned int bytesTotal; // 409
	CUgcUpdate::IsValid(); // 401
	SteamUGC(void); // 404
} /* size: 137, variables: 3, inline expansions: 2 (15 bytes) */

// <01F858C1> sbox/steam/steamugc.cpp:417
// variables: 26
// function calls: 187
void CreateQuery(const char* json, const char* cursor)
{
	ISteamUGC* steamUGC; // 419
	UGCQueryHandle_t handle; // 426
	Value root; // 428
	CharReaderBuilder readerBuilder; // 429
	istringstream jsonStream; // 430
	string errs; // 431
	EUGCQuery ordering; // 473
	int maxCache; // 496
	{
		Value fileIdsArray; // 442
		vector<long long unsigned int, std::allocator<long long unsigned int> > fileIds; // 443
		int maxCache; // 460
		{
			unsigned int i; // 444
			construct_at<long long unsigned int, long long unsigned int>(long long unsigned int* __location); // 676
			construct<long long unsigned int, long long unsigned int>(allocator_type& __a,
											long long unsigned int* __p);  // 117
			vector<long long unsigned int, std::allocator<long long unsigned int> >::size(); // 2199
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 2202
			vector<long long unsigned int, std::allocator<long long unsigned int> >::_M_check_len(
					size_type __n,
					const char* __s);  // 566
			__normal_iterator<long long unsigned int::__normal_iterator(
						long long unsigned int* const& __i);  // 999
			vector<long long unsigned int, std::allocator<long long unsigned int> >::begin(); // 571
			__normal_iterator<long long unsigned int::__normal_iterator(
						long long unsigned int* const& __i);  // 1019
			vector<long long unsigned int, std::allocator<long long unsigned int> >::end(); // 571
			__new_allocator<long long unsigned int>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<long long unsigned int>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<long long unsigned int, std::allocator<long long unsigned int> >::_M_allocate(
					size_t __n);  // 572
			{
				_Guard_alloc __guard; // 576
				construct_at<long long unsigned int, long long unsigned int>(long long unsigned int* __location); // 676
				construct<long long unsigned int, long long unsigned int>(allocator_type& __a,
												long long unsigned int* __p);  // 586
				__relocate_a_1<long long unsigned int, long long unsigned int>(long long unsigned int* __first,
												long long unsigned int* __last,
												long long unsigned int* __result,
												allocator<long long unsigned int>& __alloc);  // 1359
				__relocate_a<long long unsigned int*, long long unsigned int*, std::allocator<long long unsigned int> >(long long unsigned int* __first,
																long long unsigned int* __last,
																long long unsigned int* __result,
																allocator<long long unsigned int>& __alloc);  // 539
				_S_relocate(pointer __first,
						pointer __last,
						pointer __result,
						_Tp_alloc_type& __alloc);  // 599
				_Guard_alloc::_Guard_alloc(
						pointer __s,
						size_type __l,
						_Base& __vect);  // 576
				__new_allocator<long long unsigned int>::deallocate(
						long long unsigned int* __p,
						size_type __n);  // 215
				allocator<long long unsigned int>::deallocate(
						long long unsigned int* __p,
						size_t __n);  // 649
				deallocate(allocator_type& __a,
						pointer __p,
						size_type __n);  // 396
				_Vector_base<long long unsigned int, std::allocator<long long unsigned int> >::_M_deallocate(
						pointer __p,
						size_t __n);  // 392
				_Vector_base<long long unsigned int, std::allocator<long long unsigned int> >::_M_deallocate(
						pointer __p,
						size_t __n);  // 1883
				_Guard_alloc::~_Guard_alloc(); // 640
			}
			vector<long long unsigned int, std::allocator<long long unsigned int> >::_M_realloc_append<long long unsigned int>(); // 123
			vector<long long unsigned int, std::allocator<long long unsigned int> >::emplace_back<long long unsigned int>(); // 1434
			vector<long long unsigned int, std::allocator<long long unsigned int> >::push_back(
					value_type& __x);  // 448
		}
		__normal_iterator<long long unsigned int const::__normal_iterator(
					const long long unsigned int* const& __i);  // 1029
		vector<long long unsigned int, std::allocator<long long unsigned int> >::end(); // 1224
		__normal_iterator<long long unsigned int const::__normal_iterator(
					const long long unsigned int* const& __i);  // 1009
		vector<long long unsigned int, std::allocator<long long unsigned int> >::begin(); // 1224
		vector<long long unsigned int, std::allocator<long long unsigned int> >::empty(); // 452
		vector<long long unsigned int, std::allocator<long long unsigned int> >::size(); // 458
		_Vector_base<long long unsigned int, std::allocator<long long unsigned int> >::_M_get_Tp_allocator(); // 803
		_Destroy<long long unsigned int*, long long unsigned int>(long long unsigned int* __first,
										long long unsigned int* __last,
										allocator<long long unsigned int> &);  // 802
		__new_allocator<long long unsigned int>::deallocate(
				long long unsigned int* __p,
				size_type __n);  // 215
		allocator<long long unsigned int>::deallocate(
				long long unsigned int* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<long long unsigned int, std::allocator<long long unsigned int> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 392
		_Vector_base<long long unsigned int, std::allocator<long long unsigned int> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<long long unsigned int>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<long long unsigned int, std::allocator<long long unsigned int> >::~_Vector_base(); // 805
		vector<long long unsigned int, std::allocator<long long unsigned int> >::~vector(); // 471
	}
	{
		const Value& sortOrder; // 477
	}
	{
		uint64 authorSteamId64; // 487
		CSteamID authorId; // 488
		SteamUtils(void); // 489
		CSteamID::SetFromUint64(
				uint64 ulSteamID);  // 531
		CSteamID::CSteamID(
			uint64 ulSteamID);  // 488
		SteamUtils(void); // 489
	}
	{
		Value tagsArray; // 511
		{
			unsigned int i; // 512
		}
	}
	{
		Value tagsArray; // 523
		{
			unsigned int i; // 524
		}
	}
	{
		Value keyValues; // 535
		{
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& key; // 536
			vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >& __for_range; // 37010
			iterator __for_begin; // 26936
			iterator __for_end; // 26936
			__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
						basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 999
			begin(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 536
			__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::__normal_iterator(
						basic_string<char, std::char_traits<char>, std::allocator<char> >* const& __i);  // 1019
			end(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 536
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
			basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 538
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
			~vector(const vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11 this); // 539
		}
	}
	SteamUGC(void); // 419
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
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
			const allocator<char>& __a);  // 430
	basic_ios<char, std::char_traits<char> >::basic_ios(); // 650
	basic_istream<char, std::char_traits<char> >::basic_istream(
			const int  __in_chrg,
			const void **  __vtt_parm);  // 650
	basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 176
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
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 176
	basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_M_stringbuf_init(
				openmode __mode);  // 177
	basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
			__string_type& __s,
			openmode __mode);  // 650
	operator|(_Ios_Openmode __a,
			_Ios_Openmode __b);  // 650
	basic_istringstream<char, std::char_traits<char>, std::allocator<char> >::basic_istringstream(
				const int  __in_chrg,
				const void **  __vtt_parm,
				__string_type& __str,
				openmode __mode);  // 430
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 430
	allocator<char>::~allocator(); // 430
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 590
	allocator<char>::~allocator(); // 590
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 593
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 431
	SteamUtils(void); // 493
	SteamUtils(void); // 493
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 547
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
	basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 632
	basic_istream<char, std::char_traits<char> >::~basic_istream(
			const int  __in_chrg,
			const void **  __vtt_parm);  // 632
	basic_ios<char, std::char_traits<char> >::~basic_ios(); // 632
	basic_istringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_istringstream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 547
} /* size: 0, variables: 8, inline expansions: 87 (2793 bytes) */

// <01F8570F> sbox/steam/steamugc.cpp:549
// variables: 2
// function calls: 5
void CUgcQuery::CUgcQuery(UGCQueryHandle_t handle)
{
	{
		SteamAPICall_t apiCall; // 553
	}
	CCallbackBase::CCallbackBase(); // 79
	CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::CCallResult(); // 549
	{
		SteamAPICall_t apiCall; // 553
		SteamUGC(void); // 553
		CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::Set(
			SteamAPICall_t hAPICall,
			CUgcQuery* p,
			func_t func);  // 554
	}
	CUtlString::CUtlString(); // 549
} /* size: 217, inline expansions: 3 (58 bytes) */

// <01F856D5> sbox/steam/steamugc.cpp:549
// variable: 1
void CUgcQuery::CUgcQuery(UGCQueryHandle_t handle)
{
	{
		SteamAPICall_t apiCall; // 553
	}
} /* size: 0 */

// <01F855A1> sbox/steam/steamugc.cpp:557
// variables: 2
// function calls: 4
void CUgcQuery::~CUgcQuery()
{
	{
		ISteamUGC* steamUGC; // 559
	}
	{
		ISteamUGC* steamUGC; // 559
		SteamUGC(void); // 559
	}
	CUtlString::~CUtlString(); // 565
	CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::Cancel(); // 120
	CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::~CCallResult(); // 565
} /* size: 126, inline expansions: 3 (59 bytes) */

// <01F85574> sbox/steam/steamugc.cpp:557
// variable: 1
void CUgcQuery::~CUgcQuery()
{
	{
		ISteamUGC* steamUGC; // 559
	}
} /* size: 0 */

// <01F85541> sbox/steam/steamugc.cpp:567
void CUgcQuery::IsValid()
{
} /* size: 0 */

// <01F83AD4> sbox/steam/steamugc.cpp:572
// variables: 15
// function calls: 28
void CUgcQuery::OnQueryCompleted(SteamUGCQueryCompleted_t* pResult, bool bIOFailure)
{
	Value root; // 578
	StreamWriterBuilder writer; // 663
	{
		uint32 i; // 584
		{
			SteamUGCDetails_t details; // 586
			Value item; // 591
			uint32 tagCount; // 620
			char metadataBuffer; // 631
			uint64 stat; // 637
			uint32 kvCount; // 643
			{
				char previewUrl; // 613
				SteamUGC(void); // 614
			}
			{
				uint32 t; // 621
				{
					char tagBuffer; // 623
					SteamUGC(void); // 624
				}
			}
			{
				uint32 kv; // 645
				{
					char keyBuffer; // 647
					char valueBuffer; // 648
					SteamUGC(void); // 649
				}
			}
			SteamUGC(void); // 588
			SteamUGC(void); // 620
			SteamUGC(void); // 632
			SteamUGC(void); // 638
			SteamUGC(void); // 639
			SteamUGC(void); // 640
			SteamUGC(void); // 641
			SteamUGC(void); // 643
			SteamFriends(void); // 657
			CSteamID::SetFromUint64(
					uint64 ulSteamID);  // 531
			CSteamID::CSteamID(
				uint64 ulSteamID);  // 657
		}
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
	basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 664
	CUtlString::operator=(
			const char* src);  // 664
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 664
} /* size: 3287, variables: 2, inline expansions: 14 (139 bytes) */

// <01F83A40> sbox/steam/steamugc.cpp:667
// function calls: 2
void CUgcQuery::GetResultJson()
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 669
} /* size: 23, inline expansions: 2 (36 bytes) */

// <01F833B7> sbox/steam/steamugc.cpp:672
// variables: 18
// function calls: 9
void CUgcInstall::CUgcInstall(PublishedFileId_t publishedFileId)
{
	{
		ISteamUGC* steamUGC; // 676
		EItemState itemState; // 687
		bool installed; // 688
		bool needsUpdate; // 689
		bool downloading; // 690
		bool downloadPending; // 691
		uint64 sizeOnDisk; // 693
		char folderBuffer; // 694
		uint32 timestamp; // 695
	}
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<16>::CCallbackImpl(); // 142
	CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::Register(
		CUgcInstall* pObj,
		func_t func);  // 148
	CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::CCallback(
			CUgcInstall* pObj,
			func_t func);  // 241
	CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::CCallbackManual(); // 672
	CUtlString::CUtlString(); // 672
	{
		ISteamUGC* steamUGC; // 676
		EItemState itemState; // 687
		bool installed; // 688
		bool needsUpdate; // 689
		bool downloading; // 690
		bool downloadPending; // 691
		uint64 sizeOnDisk; // 693
		char folderBuffer; // 694
		uint32 timestamp; // 695
		SteamUGC(void); // 676
		CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::Unregister(); // 158
		CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::Register(
			CUgcInstall* pObj,
			func_t func);  // 685
	}
} /* size: 414, inline expansions: 6 (67 bytes) */

// <01F83315> sbox/steam/steamugc.cpp:672
// variables: 9
void CUgcInstall::CUgcInstall(PublishedFileId_t publishedFileId)
{
	{
		ISteamUGC* steamUGC; // 676
		EItemState itemState; // 687
		bool installed; // 688
		bool needsUpdate; // 689
		bool downloading; // 690
		bool downloadPending; // 691
		uint64 sizeOnDisk; // 693
		char folderBuffer; // 694
		uint32 timestamp; // 695
	}
} /* size: 0 */

// <01F831E8> sbox/steam/steamugc.cpp:718
// function calls: 5
void CUgcInstall::~CUgcInstall()
{
	CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::Unregister(); // 721
	CUtlString::~CUtlString(); // 722
	CCallbackImpl<16>::~CCallbackImpl(); // 213
	CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::~CCallback(); // 238
	CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::~CCallbackManual(); // 722
} /* size: 85, inline expansions: 5 (99 bytes) */

// <01F831CA> sbox/steam/steamugc.cpp:718
void CUgcInstall::~CUgcInstall()
{
} /* size: 0 */

// <01F83197> sbox/steam/steamugc.cpp:724
void CUgcInstall::IsValid()
{
} /* size: 0 */

// <01F83068> sbox/steam/steamugc.cpp:729
// variables: 4
// function call: 1
void CUgcInstall::OnDownloadCompleted(DownloadItemResult_t* pResult)
{
	ISteamUGC* steamUGC; // 741
	uint64 sizeOnDisk; // 745
	char folderBuffer; // 746
	uint32 timestamp; // 747
	SteamUGC(void); // 741
} /* size: 232, variables: 4, inline expansions: 1 (15 bytes) */

// <01F82941> sbox/steam/steamugc.cpp:755
// variables: 4
// function calls: 15
void CUgcInstall::BuildResultJson(const char* installFolder, uint64 sizeOnDisk, uint32 timestamp)
{
	Value root; // 757
	ISteamUGC* steamUGC; // 765
	StreamWriterBuilder writer; // 772
	{
		uint32 itemState; // 768
	}
	SteamUGC(void); // 765
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
	basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 773
	CUtlString::operator=(
			const char* src);  // 773
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
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 773
} /* size: 551, variables: 3, inline expansions: 15 (121 bytes) */

// <01F828AD> sbox/steam/steamugc.cpp:776
// function calls: 2
void CUgcInstall::GetResultJson()
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 778
} /* size: 23, inline expansions: 2 (36 bytes) */

