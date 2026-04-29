
//
// tier0/platwindow.cpp
//
//	referenced by: libtier0.so
//
//	functions: 51
//	struct: 1
//

// <003B3A4C> tier0/platwindow.cpp:52
// member variables: 3
// struct size: 12
struct OurWindowFlagsToSDLWindowFlagsEntry_t {
	int m_nOurFlags; /* 0 4 */
	int m_nSDLFlags; /* 4 4 */
	bool m_bInvert; /* 8 1 */
};

// <003BD357> tier0/platwindow.cpp:65
// variables: 13
// function calls: 21
PlatWindow_t Plat_CreateWindow(void* hInstance, const char* pTitle, int x, int y, int nWidth, int nHeight, int nFlags, float flRefreshRateHz)
{
	SDL_Window* window; // 67
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 69
	{
		int nSDLFlags; // 71
		int nWinWidth; // 142
		int nWinHeight; // 143
		int nWinSDLFlags; // 144
		SDL_PropertiesID props; // 152
		{
		}
		{
			const OurWindowFlagsToSDLWindowFlagsEntry_t& mapping; // 108
			OurWindowFlagsToSDLWindowFlagsEntry_t& __for_range; // 5033
			OurWindowFlagsToSDLWindowFlagsEntry_t* __for_begin; // 5043
			OurWindowFlagsToSDLWindowFlagsEntry_t* __for_end; // 5053
			{
				bool bDoit; // 110
			}
		}
		{
			OsSpecificWindowHandle_t os; // 166
			_Rb_tree<OsSpecificWindowHandle_t__::_M_begin(); // 1894
			_Rb_tree<OsSpecificWindowHandle_t__::_M_end(); // 1894
			less<OsSpecificWindowHandle_t__::operator(
					OsSpecificWindowHandle_t__* __x,
					OsSpecificWindowHandle_t__* __y);  // 2604
			_S_left(_Base_ptr __x); // 2605
			_S_right(_Base_ptr __x); // 2607
			_Rb_tree<OsSpecificWindowHandle_t__::_M_lower_bound(
					_Base_ptr __x,
					_Base_ptr __y,
					OsSpecificWindowHandle_t__* const& __k);  // 1894
			_Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__::_Rb_tree_iterator(
						_Base_ptr __x);  // 1894
			_Rb_tree<OsSpecificWindowHandle_t__::lower_bound(
					const key_type& __k);  // 1349
			map<OsSpecificWindowHandle_t__::lower_bound(
					const key_type& __x);  // 532
			_Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__::_Rb_tree_iterator(
						_Base_ptr __x);  // 1629
			_Rb_tree<OsSpecificWindowHandle_t__::end(); // 410
			map<OsSpecificWindowHandle_t__::end(); // 534
			operator==(const _Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__* const, PlatWindow_t__*> >& __x,
					const _Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__* const, PlatWindow_t__*> >& __y);  // 534
			less<OsSpecificWindowHandle_t__::operator(
					OsSpecificWindowHandle_t__* __x,
					OsSpecificWindowHandle_t__* __y);  // 534
			_Head_base<0, OsSpecificWindowHandle_t__::_Head_base(
					OsSpecificWindowHandle_t__* const& __h);  // 565
			_Tuple_impl<0, OsSpecificWindowHandle_t__::_Tuple_impl(
					OsSpecificWindowHandle_t__* const& __head);  // 975
			tuple<OsSpecificWindowHandle_t__::tuple<>(
				OsSpecificWindowHandle_t__* const& __elements#0);  // 537
			_Rb_tree_const_iterator<std::pair<OsSpecificWindowHandle_t__::_Rb_tree_const_iterator(
						const iterator& __it);  // 536
			map<OsSpecificWindowHandle_t__::operator[](
					const key_type& __k);  // 167
		}
	}
	operator()(const class* __closure); // 64
	CRunFunctorHelper::operator<< <Plat_CreateWindow(
													class& runFunctor);  // 69
} /* size: 0, variables: 2, inline expansions: 2 (1100 bytes) */

// <003BB72E> tier0/platwindow.cpp:211
// variables: 4
// function calls: 114
PlatWindow_t Plat_FindOrCreateWrappedPlatWindow(OsSpecificWindowHandle_t osHandle, WindowCreateFlags_t flags, bool& bOutCreated, void** ppOutOriginalWndProc)
{
	PlatWindow_t existingWindow; // 213
	void* originalWndProc; // 226
	SDL_PropertiesID props; // 232
	SDL_Window* window; // 237
	_Rb_tree<PlatWindow_t__::_M_end(); // 1894
	_Rb_tree<PlatWindow_t__::_M_begin(); // 1894
	less<PlatWindow_t__::operator(
			PlatWindow_t__* __x,
			PlatWindow_t__* __y);  // 2604
	_S_left(_Base_ptr __x); // 2605
	_S_right(_Base_ptr __x); // 2607
	_Rb_tree<PlatWindow_t__::_M_lower_bound(
			_Base_ptr __x,
			_Base_ptr __y,
			PlatWindow_t__* const& __k);  // 1894
	_Rb_tree_iterator<std::pair<PlatWindow_t__::_Rb_tree_iterator(
				_Base_ptr __x);  // 1894
	_Rb_tree<PlatWindow_t__::lower_bound(
			const key_type& __k);  // 1349
	map<PlatWindow_t__::lower_bound(
			const key_type& __x);  // 532
	less<PlatWindow_t__::operator(
			PlatWindow_t__* __x,
			PlatWindow_t__* __y);  // 3002
	_Rb_tree<PlatWindow_t__::_M_end(); // 3001
	_S_insert_and_rebalance(const bool  __insert_left,
				_Node_base* __x,
				_Node_base* __p,
				_Node_base& __header);  // 3007
	_Rb_tree_iterator<std::pair<PlatWindow_t__::_Rb_tree_iterator(
				_Base_ptr __x);  // 3009
	_Rb_tree<PlatWindow_t__::_M_insert_node(
			_Base_ptr __x,
			_Base_ptr __p,
			_Node_ptr __z);  // 2305
	_Auto_node::_M_insert(
			pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*> __p);  // 3087
	__new_allocator<std::_Rb_tree_node<std::pair<PlatWindow_t__::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::_Rb_tree_node<std::pair<PlatWindow_t__::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 1170
	_Rb_tree<PlatWindow_t__::_M_get_node(); // 1253
	_Tuple_impl<0, PlatWindow_t__::_Tuple_impl(
			_Tuple_impl<0, PlatWindow_t__* const&>& __in);  // 996
	tuple<PlatWindow_t__::tuple(
		tuple<PlatWindow_t__* const&> &);  // 110
	get<0, PlatWindow_t__* const&>(tuple<PlatWindow_t__* const&>& __t); // 2886
	pair<PlatWindow_t__::pair<PlatWindow_t__* const&, 0>(
					tuple<PlatWindow_t__* const&>& __tuple1,
					tuple<>& __tuple2,
					_Index_tuple<0>,
					_Index_tuple<>);  // 2876
	pair<PlatWindow_t__::pair<PlatWindow_t__* const&>(
					piecewise_construct_t,
					tuple<PlatWindow_t__* const&> __first,
					tuple<> __second);  // 110
	construct_at<std::pair<PlatWindow_t__* const, void*>, const std::piecewise_construct_t&, std::tuple<PlatWindow_t__* const&>, std::tuple<> >(pair<PlatWindow_t__* const, void*>* __location); // 676
	construct<std::pair<PlatWindow_t__* const, void*>, const std::piecewise_construct_t&, std::tuple<PlatWindow_t__* const&>, std::tuple<> >(allocator_type& __a,
																pair<PlatWindow_t__* const, void*>* __p);  // 1237
	_Rb_tree<PlatWindow_t__::_M_construct_node<const std::piecewise_construct_t&, std::tuple<PlatWindow_t__* const&>, std::tuple<> >(
														_Node_ptr __node);  // 1254
	_Rb_tree<PlatWindow_t__::_M_create_node<const std::piecewise_construct_t&, std::tuple<PlatWindow_t__* const&>, std::tuple<> >(); // 2285
	_Auto_node::_Auto_node<const std::piecewise_construct_t&, std::tuple<PlatWindow_t__* const&>, std::tuple<> >(
													_Rb_tree<PlatWindow_t__*, std::pair<PlatWindow_t__* const, void*>, std::_Select1st<std::pair<PlatWindow_t__* const, void* __t);  // 3084
	__new_allocator<std::_Rb_tree_node<std::pair<PlatWindow_t__::deallocate(
			_Rb_tree_node<std::pair<PlatWindow_t__* const, void*> >* __p,
			size_type __n);  // 215
	allocator<std::_Rb_tree_node<std::pair<PlatWindow_t__::deallocate(
			_Rb_tree_node<std::pair<PlatWindow_t__* const, void*> >* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 1191
	_Rb_tree<PlatWindow_t__::_M_put_node(
			_Node_ptr __p);  // 1274
	_Rb_tree<PlatWindow_t__::_M_destroy_node(
			_Node_ptr __p);  // 1273
	_Rb_tree<PlatWindow_t__::_M_drop_node(
			_Node_ptr __p);  // 2291
	_Auto_node::~_Auto_node(); // 3089
	_Rb_tree_iterator<std::pair<PlatWindow_t__::_Rb_tree_iterator(
				_Base_ptr __x);  // 3088
	_Rb_tree<PlatWindow_t__::_M_emplace_hint_unique<const std::piecewise_construct_t&, std::tuple<PlatWindow_t__* const&>, std::tuple<> >(
															const_iterator __pos);  // 536
	_Rb_tree_iterator<std::pair<PlatWindow_t__::_Rb_tree_iterator(
				_Base_ptr __x);  // 1629
	_Rb_tree<PlatWindow_t__::end(); // 410
	map<PlatWindow_t__::end(); // 534
	less<PlatWindow_t__::operator(
			PlatWindow_t__* __x,
			PlatWindow_t__* __y);  // 534
	_Head_base<0, PlatWindow_t__::_Head_base(
			PlatWindow_t__* const& __h);  // 565
	_Tuple_impl<0, PlatWindow_t__::_Tuple_impl(
			PlatWindow_t__* const& __head);  // 975
	tuple<PlatWindow_t__::tuple<>(
		PlatWindow_t__* const& __elements#0);  // 537
	_Rb_tree_const_iterator<std::pair<PlatWindow_t__::_Rb_tree_const_iterator(
				const iterator& __it);  // 536
	map<PlatWindow_t__::operator[](
			const key_type& __k);  // 219
	_Rb_tree<OsSpecificWindowHandle_t__::_M_end(); // 1894
	_Rb_tree<OsSpecificWindowHandle_t__::_M_begin(); // 1894
	less<OsSpecificWindowHandle_t__::operator(
			OsSpecificWindowHandle_t__* __x,
			OsSpecificWindowHandle_t__* __y);  // 2604
	_S_left(_Base_ptr __x); // 2605
	_S_right(_Base_ptr __x); // 2607
	_Rb_tree<OsSpecificWindowHandle_t__::_M_lower_bound(
			_Base_ptr __x,
			_Base_ptr __y,
			OsSpecificWindowHandle_t__* const& __k);  // 1894
	_Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__::_Rb_tree_iterator(
				_Base_ptr __x);  // 1894
	_Rb_tree<OsSpecificWindowHandle_t__::lower_bound(
			const key_type& __k);  // 1349
	map<OsSpecificWindowHandle_t__::lower_bound(
			const key_type& __x);  // 532
	_Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__::_Rb_tree_iterator(
				_Base_ptr __x);  // 1629
	_Rb_tree<OsSpecificWindowHandle_t__::end(); // 410
	map<OsSpecificWindowHandle_t__::end(); // 534
	operator==(const _Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__* const, PlatWindow_t__*> >& __x,
			const _Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__* const, PlatWindow_t__*> >& __y);  // 534
	less<OsSpecificWindowHandle_t__::operator(
			OsSpecificWindowHandle_t__* __x,
			OsSpecificWindowHandle_t__* __y);  // 534
	_Head_base<0, OsSpecificWindowHandle_t__::_Head_base(
			OsSpecificWindowHandle_t__* const& __h);  // 565
	_Tuple_impl<0, OsSpecificWindowHandle_t__::_Tuple_impl(
			OsSpecificWindowHandle_t__* const& __head);  // 975
	tuple<OsSpecificWindowHandle_t__::tuple<>(
		OsSpecificWindowHandle_t__* const& __elements#0);  // 537
	_Rb_tree_const_iterator<std::pair<OsSpecificWindowHandle_t__::_Rb_tree_const_iterator(
				const iterator& __it);  // 536
	map<OsSpecificWindowHandle_t__::operator[](
			const key_type& __k);  // 241
	_Rb_tree<PlatWindow_t__::_M_begin(); // 1894
	_Rb_tree<PlatWindow_t__::_M_end(); // 1894
	less<PlatWindow_t__::operator(
			PlatWindow_t__* __x,
			PlatWindow_t__* __y);  // 2604
	_S_left(_Base_ptr __x); // 2605
	_S_right(_Base_ptr __x); // 2607
	_Rb_tree<PlatWindow_t__::_M_lower_bound(
			_Base_ptr __x,
			_Base_ptr __y,
			PlatWindow_t__* const& __k);  // 1894
	_Rb_tree_iterator<std::pair<PlatWindow_t__::_Rb_tree_iterator(
				_Base_ptr __x);  // 1894
	_Rb_tree<PlatWindow_t__::lower_bound(
			const key_type& __k);  // 1349
	map<PlatWindow_t__::lower_bound(
			const key_type& __x);  // 552
	less<PlatWindow_t__::operator(
			PlatWindow_t__* __x,
			PlatWindow_t__* __y);  // 3002
	_Rb_tree<PlatWindow_t__::_M_end(); // 3001
	_S_insert_and_rebalance(const bool  __insert_left,
				_Node_base* __x,
				_Node_base* __p,
				_Node_base& __header);  // 3007
	_Rb_tree_iterator<std::pair<PlatWindow_t__::_Rb_tree_iterator(
				_Base_ptr __x);  // 3009
	_Rb_tree<PlatWindow_t__::_M_insert_node(
			_Base_ptr __x,
			_Base_ptr __p,
			_Node_ptr __z);  // 2305
	_Auto_node::_M_insert(
			pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*> __p);  // 3087
	__new_allocator<std::_Rb_tree_node<std::pair<PlatWindow_t__::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::_Rb_tree_node<std::pair<PlatWindow_t__::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 1170
	_Rb_tree<PlatWindow_t__::_M_get_node(); // 1253
	_Tuple_impl<0, PlatWindow_t__::_Tuple_impl(
			_Tuple_impl<0, PlatWindow_t__*&&>& __in);  // 996
	tuple<PlatWindow_t__::tuple(
		tuple<PlatWindow_t__*&&> &);  // 110
	get<0, PlatWindow_t__*&&>(tuple<PlatWindow_t__*&&>& __t); // 2886
	pair<PlatWindow_t__::pair<PlatWindow_t__*&&, 0>(
					tuple<PlatWindow_t__*&&>& __tuple1,
					tuple<>& __tuple2,
					_Index_tuple<0>,
					_Index_tuple<>);  // 2876
	pair<PlatWindow_t__::pair<PlatWindow_t__*&&>(
				piecewise_construct_t,
				tuple<PlatWindow_t__*&&> __first,
				tuple<> __second);  // 110
	construct_at<std::pair<PlatWindow_t__* const, void*>, const std::piecewise_construct_t&, std::tuple<PlatWindow_t__*&&>, std::tuple<> >(pair<PlatWindow_t__* const, void*>* __location); // 676
	construct<std::pair<PlatWindow_t__* const, void*>, const std::piecewise_construct_t&, std::tuple<PlatWindow_t__*&&>, std::tuple<> >(allocator_type& __a,
																pair<PlatWindow_t__* const, void*>* __p);  // 1237
	_Rb_tree<PlatWindow_t__::_M_construct_node<const std::piecewise_construct_t&, std::tuple<PlatWindow_t__*&&>, std::tuple<> >(
														_Node_ptr __node);  // 1254
	_Rb_tree<PlatWindow_t__::_M_create_node<const std::piecewise_construct_t&, std::tuple<PlatWindow_t__*&&>, std::tuple<> >(); // 2285
	_Auto_node::_Auto_node<const std::piecewise_construct_t&, std::tuple<PlatWindow_t__*&&>, std::tuple<> >(
													_Rb_tree<PlatWindow_t__*, std::pair<PlatWindow_t__* const, void*>, std::_Select1st<std::pair<PlatWindow_t__* const, void* __t);  // 3084
	__new_allocator<std::_Rb_tree_node<std::pair<PlatWindow_t__::deallocate(
			_Rb_tree_node<std::pair<PlatWindow_t__* const, void*> >* __p,
			size_type __n);  // 215
	allocator<std::_Rb_tree_node<std::pair<PlatWindow_t__::deallocate(
			_Rb_tree_node<std::pair<PlatWindow_t__* const, void*> >* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 1191
	_Rb_tree<PlatWindow_t__::_M_put_node(
			_Node_ptr __p);  // 1274
	_Rb_tree<PlatWindow_t__::_M_destroy_node(
			_Node_ptr __p);  // 1273
	_Rb_tree<PlatWindow_t__::_M_drop_node(
			_Node_ptr __p);  // 2291
	_Auto_node::~_Auto_node(); // 3089
	_Rb_tree_iterator<std::pair<PlatWindow_t__::_Rb_tree_iterator(
				_Base_ptr __x);  // 3088
	_Rb_tree<PlatWindow_t__::_M_emplace_hint_unique<const std::piecewise_construct_t&, std::tuple<PlatWindow_t__*&&>, std::tuple<> >(
														const_iterator __pos);  // 555
	_Rb_tree_iterator<std::pair<PlatWindow_t__::_Rb_tree_iterator(
				_Base_ptr __x);  // 1629
	_Rb_tree<PlatWindow_t__::end(); // 410
	map<PlatWindow_t__::end(); // 554
	less<PlatWindow_t__::operator(
			PlatWindow_t__* __x,
			PlatWindow_t__* __y);  // 554
	_Head_base<0, PlatWindow_t__::_Head_base<PlatWindow_t__*>(
					PlatWindow_t__ *& __h);  // 571
	_Tuple_impl<0, PlatWindow_t__::_Tuple_impl<PlatWindow_t__*>(
					PlatWindow_t__ *& __head);  // 985
	tuple<PlatWindow_t__::tuple<PlatWindow_t__*>(); // 2681
	forward_as_tuple<PlatWindow_t__*>(void); // 556
	_Rb_tree_const_iterator<std::pair<PlatWindow_t__::_Rb_tree_const_iterator(
				const iterator& __it);  // 555
	map<PlatWindow_t__::operator[](
			key_type& __k);  // 242
} /* size: 901, variables: 4, inline expansions: 114 (2820 bytes) */

// <003BB122> tier0/platwindow.cpp:253
// variable: 1
// function calls: 23
void Plat_DestroyWindow(PlatWindow_t hWindow)
{
	{
		OsSpecificWindowHandle_t os; // 257
		_Rb_tree<OsSpecificWindowHandle_t__::_M_begin(); // 3152
		less<OsSpecificWindowHandle_t__::operator(
				OsSpecificWindowHandle_t__* __x,
				OsSpecificWindowHandle_t__* __y);  // 2604
		_S_left(_Base_ptr __x); // 2605
		_S_right(_Base_ptr __x); // 2607
		_Rb_tree<OsSpecificWindowHandle_t__::_M_lower_bound(
				_Base_ptr __x,
				_Base_ptr __y,
				OsSpecificWindowHandle_t__* const& __k);  // 3152
		_Rb_tree<OsSpecificWindowHandle_t__::_M_end(); // 3152
		_Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__::_Rb_tree_iterator(
					_Base_ptr __x);  // 3152
		_Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__::_Rb_tree_iterator(
					_Base_ptr __x);  // 1629
		_Rb_tree<OsSpecificWindowHandle_t__::end(); // 3153
		less<OsSpecificWindowHandle_t__::operator(
				OsSpecificWindowHandle_t__* __x,
				OsSpecificWindowHandle_t__* __y);  // 3154
		_Rb_tree<OsSpecificWindowHandle_t__::find(
			OsSpecificWindowHandle_t__* const& __k);  // 1260
		map<OsSpecificWindowHandle_t__::find(
			const key_type& __x);  // 258
		_Rb_tree_const_iterator<std::pair<OsSpecificWindowHandle_t__::_Rb_tree_const_iterator(
					const iterator& __it);  // 1833
		_S_rebalance_for_erase(const _Node_base* __z,
					_Node_base& __header);  // 3115
		_Rb_tree<OsSpecificWindowHandle_t__::_M_destroy_node(
				_Node_ptr __p);  // 1273
		__new_allocator<std::_Rb_tree_node<std::pair<OsSpecificWindowHandle_t__::deallocate(
				_Rb_tree_node<std::pair<OsSpecificWindowHandle_t__* const, PlatWindow_t__*> >* __p,
				size_type __n);  // 215
		allocator<std::_Rb_tree_node<std::pair<OsSpecificWindowHandle_t__::deallocate(
				_Rb_tree_node<std::pair<OsSpecificWindowHandle_t__* const, PlatWindow_t__*> >* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 1191
		_Rb_tree<OsSpecificWindowHandle_t__::_M_put_node(
				_Node_ptr __p);  // 1274
		_Rb_tree<OsSpecificWindowHandle_t__::_M_drop_node(
				_Node_ptr __p);  // 3116
		_Rb_tree<OsSpecificWindowHandle_t__::_M_erase_aux(
				const_iterator __position);  // 1833
		_Rb_tree<OsSpecificWindowHandle_t__::erase(
			iterator __position);  // 1128
		map<OsSpecificWindowHandle_t__::erase(
			iterator __position);  // 258
	}
} /* size: 183 */

// <003BB014> tier0/platwindow.cpp:267
// variables: 3
void Plat_ShowWindow(PlatWindow_t hWindow, PlatShowWindowType_t nType)
{
	SDL_Window* window; // 269
	const char   __FUNCTION__; // 61329
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 270
	}
} /* size: 0, variables: 2 */

// <003BAF44> tier0/platwindow.cpp:291
// variables: 4
bool Plat_IsWindowVisible(PlatWindow_t hWindow, bool bCheckParents)
{
	SDL_Window* window; // 295
	const char   __FUNCTION__; // 57167
	SDL_WindowFlags nFlags; // 299
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
	}
} /* size: 0, variables: 3 */

// <003BAD41> tier0/platwindow.cpp:307
// variables: 2
// function calls: 2
void Plat_SetWindowTitle(PlatWindow_t hWindow, const char* pTitle)
{
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 309
	{
		SDL_Window* window; // 311
		{
		}
	}
	operator()(const class* __closure); // 64
	CRunFunctorHelper::operator<< <Plat_SetWindowTitle(
										class& runFunctor);  // 309
} /* size: 0, variables: 1, inline expansions: 2 (110 bytes) */

// <003BAC21> tier0/platwindow.cpp:319
// variables: 3
void Plat_SetWindowTitleW(PlatWindow_t hWindow, const wchar_t* pTitle)
{
	void* pUTF8; // 321
	const char   __FUNCTION__; // 57167
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 329
	}
} /* size: 0, variables: 2 */

// <003BA9D1> tier0/platwindow.cpp:336
// variables: 3
// function calls: 2
bool Plat_SetWindowIcon(PlatWindow_t hWindow, const char* pIconBmpFullPath)
{
	bool bRet; // 341
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 342
	{
		SDL_Surface* pIcon; // 344
	}
	operator()(const class* __closure); // 64
	CRunFunctorHelper::operator<< <Plat_SetWindowIcon(
										class& runFunctor);  // 342
} /* size: 182, variables: 2, inline expansions: 2 (134 bytes) */

// <003BA76E> tier0/platwindow.cpp:365
// variables: 3
// function calls: 2
void Plat_EnsureRaiseWindow(PlatWindow_t hWindow)
{
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 367
	{
		SDL_Window* window; // 369
		SDL_WindowFlags nFlags; // 373
		{
		}
	}
	operator()(const class* __closure); // 64
	CRunFunctorHelper::operator<< <Plat_EnsureRaiseWindow(
									class& runFunctor);  // 367
} /* size: 0, variables: 1, inline expansions: 2 (178 bytes) */

// <003BA694> tier0/platwindow.cpp:394
// variables: 3
void Plat_SetForegroundWindow(PlatWindow_t hWindow)
{
	SDL_Window* window; // 396
	const char   __FUNCTION__; // 58845
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 397
	}
} /* size: 0, variables: 2 */

// <003BA5CF> tier0/platwindow.cpp:408
// variables: 3
void Plat_SetActiveWindow(PlatWindow_t hWindow)
{
	SDL_Window* window; // 410
	const char   __FUNCTION__; // 57167
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 411
	}
} /* size: 0, variables: 2 */

// <003BA529> tier0/platwindow.cpp:419
// variables: 3
bool Plat_IsWindowFocused(PlatWindow_t hWindow)
{
	SDL_Window* window; // 421
	const char   __FUNCTION__; // 57167
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 422
	}
} /* size: 0, variables: 2 */

// <003BA44B> tier0/platwindow.cpp:431
// variables: 3
bool Plat_IsScreenKeyboardShown(PlatWindow_t hWindow)
{
	SDL_Window* window; // 433
	const char   __FUNCTION__; // 58264
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 434
	}
} /* size: 0, variables: 2 */

// <003BA1F2> tier0/platwindow.cpp:443
// variables: 4
// function calls: 2
void Plat_SetWindowPos(PlatWindow_t hWindow, int x, int y)
{
	SDL_Window* window; // 445
	const char   __FUNCTION__; // 58042
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 447
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 446
	}
	operator()(const class* __closure); // 64
	CRunFunctorHelper::operator<< <Plat_SetWindowPos(
										class& runFunctor);  // 447
} /* size: 0, variables: 3, inline expansions: 2 (28 bytes) */

// <003BA0E0> tier0/platwindow.cpp:454
// variables: 3
void Plat_SetWindowSize(PlatWindow_t hWindow, int nWidth, int nHeight)
{
	SDL_Window* window; // 456
	const char   __FUNCTION__; // 57441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 457
	}
} /* size: 0, variables: 2 */

// <003B9FA8> tier0/platwindow.cpp:462
// variables: 3
void Plat_GetWindowBounds(PlatWindow_t hWindow, int* pX, int* pY, int* pWidth, int* pHeight)
{
	SDL_Window* window; // 464
	const char   __FUNCTION__; // 57167
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 465
	}
} /* size: 0, variables: 2 */

// <003B9DCA> tier0/platwindow.cpp:471
// variables: 6
void Plat_SetWindowFullscreenState(PlatWindow_t hWindow, int nFlags, float flRefreshRateHz)
{
	SDL_Window* window; // 473
	bool bFullscreen; // 474
	{
		bool bIncludeHighDensityModes; // 479
		int w; // 480
		int h; // 480
		SDL_DisplayMode closest; // 483
	}
} /* size: 232, variables: 2 */

// <003B9D53> tier0/platwindow.cpp:497
void Plat_SetFullscreenMinimizeOnFocusLoss(bool bMinOnFocusLoss)
{
} /* size: 37 */

// <003B9CE6> tier0/platwindow.cpp:502
void Plat_SetWindowBorder(PlatWindow_t hWindow, bool bHasBorder)
{
} /* size: 13 */

// <003B97D3> tier0/platwindow.cpp:507
// variables: 13
void Plat_ReconfigureWindow(PlatWindow_t hWindow, int x, int y, int nWidth, int nHeight, uint32 nWindowCreateFlags, uint32 nReconfigureFlags, float flRefreshRateHz)
{
	const char   __FUNCTION__; // 49511
	{
		SDL_Window* window; // 510
		int nFullscreenFlags; // 513
		bool bBorder; // 515
		bool bSetPos; // 516
		int nMonitor; // 518
		int nBoundsX; // 526
		int nBoundsY; // 526
		int nBoundsWidth; // 526
		int nBoundsHeight; // 526
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
		}
		{
			bool bIncludeHighDensityModes; // 586
			SDL_DisplayMode closest; // 588
		}
	}
} /* size: 0, variables: 1 */

// <003B978B> tier0/platwindow.cpp:639
// variables: 3
SDL_DisplayID GetDisplayForIndex(int nMonitorIndex)
{
	int nMonitorCount; // 641
	SDL_DisplayID nMonitorID; // 642
	SDL_DisplayID* pDisplays; // 643
} /* size: 0, variables: 3 */

// <003B9741> tier0/platwindow.cpp:655
// variables: 3
int GetIndexForDisplay(SDL_DisplayID nMonitorID)
{
	int nMonitorIndex; // 657
	SDL_DisplayID* pDisplays; // 658
	{
		int iIndex; // 661
	}
} /* size: 0, variables: 2 */

// <003B96F5> tier0/platwindow.cpp:674
bool Plat_HasDefaultMonitorIndexChanged(uint64 nCheckCount, uint64* nCurCount)
{
} /* size: 26 */

// <003B96D2> tier0/platwindow.cpp:683
int Plat_GetDefaultMonitorIndex(void)
{
} /* size: 11 */

// <003B9617> tier0/platwindow.cpp:688
// variables: 3
int Plat_SetDefaultMonitorIndex(int nMonitor)
{
	const char   __FUNCTION__; // 54593
	int nOldIndex; // 704
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 690
	}
} /* size: 0, variables: 2 */

// <003B9543> tier0/platwindow.cpp:713
// variable: 1
// function call: 1
int Plat_GetWindowMonitorIndex(PlatWindow_t hWindow)
{
	{
		int iIndex; // 661
	}
	GetIndexForDisplay(SDL_DisplayID nMonitorID); // 715
} /* size: 84, inline expansions: 1 (58 bytes) */

// <003B9408> tier0/platwindow.cpp:721
// variable: 1
// function call: 1
bool Plat_GetDesktopResolution(int nMonitorIndex, int* pWidth, int* pHeight, uint* pRefreshRate)
{
	const SDL_DisplayMode* pMode; // 725
	GetDisplayForIndex(int nMonitorIndex); // 725
} /* size: 238, variables: 1, inline expansions: 1 (46 bytes) */

// <003B9233> tier0/platwindow.cpp:758
// variables: 2
// function calls: 2
bool Plat_GetDesktopBounds(int nMonitorIndex, int* pX, int* pY, int* pWidth, int* pHeight)
{
	const SDL_DisplayMode* pMode; // 760
	SDL_Rect rect; // 761
	GetDisplayForIndex(int nMonitorIndex); // 760
	GetDisplayForIndex(int nMonitorIndex); // 763
} /* size: 349, variables: 2, inline expansions: 2 (118 bytes) */

// <003B911D> tier0/platwindow.cpp:805
// variable: 1
// function call: 1
bool Plat_GetMonitorResolution(int nMonitorIndex, int* pWidth, int* pHeight)
{
	SDL_Rect rect; // 807
	GetDisplayForIndex(int nMonitorIndex); // 808
} /* size: 207, variables: 1, inline expansions: 1 (54 bytes) */

// <003B8FE5> tier0/platwindow.cpp:831
// variable: 1
// function call: 1
bool Plat_GetMonitorBounds(int nMonitorIndex, int* pX, int* pY, int* pWidth, int* pHeight)
{
	SDL_Rect rect; // 833
	GetDisplayForIndex(int nMonitorIndex); // 834
} /* size: 261, variables: 1, inline expansions: 1 (61 bytes) */

// <003B8F1D> tier0/platwindow.cpp:876
// function call: 1
const char* Plat_GetMonitorName(int nMonitorIndex)
{
	GetDisplayForIndex(int nMonitorIndex); // 878
} /* size: 115, inline expansions: 1 (43 bytes) */

// <003B8E9E> tier0/platwindow.cpp:882
// variables: 2
int Plat_GetMonitorCount(void)
{
	int nMonitorCount; // 884
	SDL_DisplayID* pDisplays; // 885
} /* size: 81, variables: 2 */

// <003B8D98> tier0/platwindow.cpp:893
// variables: 4
int Plat_GetMonitorIndexFromName(const char* pName)
{
	int nMonitorIndex; // 895
	SDL_DisplayID* pDisplays; // 896
	{
		int iIndex; // 899
		{
			const char* pIndexName; // 901
		}
	}
} /* size: 118, variables: 2 */

// <003B8CFD> tier0/platwindow.cpp:916
// variable: 1
void Plat_GetWindowClientSize(PlatWindow_t hWindow, int* pWidth, int* pHeight)
{
	SDL_Window* window; // 918
} /* size: 29, variables: 1 */

// <003B8C11> tier0/platwindow.cpp:928
// variable: 1
void Plat_GetWindowClientBounds(PlatWindow_t hWindow, int* pX, int* pY, int* pWidth, int* pHeight)
{
	SDL_Window* window; // 930
} /* size: 90, variables: 1 */

// <003B8B96> tier0/platwindow.cpp:941
// variables: 2
float Plat_GetWindowContentsScale(PlatWindow_t hWindow)
{
	float flPixelScale; // 943
	SDL_Window* window; // 944
} /* size: 25, variables: 2 */

// <003B8ACE> tier0/platwindow.cpp:952
// function call: 1
float Plat_GetMonitorContentsScale(int nMonitorIndex)
{
	GetDisplayForIndex(int nMonitorIndex); // 954
} /* size: 115, inline expansions: 1 (43 bytes) */

// <003B8A6F> tier0/platwindow.cpp:967
void Plat_SetGlobalSafeAreaInsets(int nBottom, int nLeft, int nRight, int nTop)
{
} /* size: 36 */

// <003B8794> tier0/platwindow.cpp:982
// variables: 5
bool Plat_GetWindowSafeAreaInsets(PlatWindow_t hWindow, int* pBottom, int* pLeft, int* pRight, int* pTop)
{
	bool bHasCommandLineInset; // 1023
	{
		SDL_Window* window; // 986
		SDL_Rect safe; // 987
		int w; // 988
		int h; // 988
	}
} /* size: 686, variables: 1 */

// <003B86BE> tier0/platwindow.cpp:1085
// variables: 3
bool Plat_FlashWindow(PlatWindow_t hWindow, bool bInvert)
{
	SDL_Window* window; // 1087
	const char   __FUNCTION__; // 50691
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1088
	}
} /* size: 0, variables: 2 */

// <003B865A> tier0/platwindow.cpp:1102
// variables: 2
bool Plat_DesktopNotify(const char* pszUTF8Title, const char* pszUTF8Message)
{
	int nPid; // 1109
	{
		int status; // 1122
	}
} /* size: 0, variables: 1 */

// <003B85B5> tier0/platwindow.cpp:1132
// function call: 1
bool Plat_SetDesktopNotifyIconPath(const char* pFullPath)
{
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 1135
} /* size: 35, inline expansions: 1 (20 bytes) */

// <003B8407> tier0/platwindow.cpp:1164
// variables: 2
void Plat_AlertUser(PlatWindow_t hWindow, const wchar_t* pszTitle, const wchar_t* pszMessage)
{
	char titleUTF8; // 1172
	char messageUTF8; // 1173
} /* size: 139, variables: 2 */

// <003B82F8> tier0/platwindow.cpp:1184
// variables: 3
void Plat_MinimizeWindow(PlatWindow_t hWindow, bool bMinimize)
{
	SDL_Window* window; // 1186
	const char   __FUNCTION__; // 49782
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1187
	}
} /* size: 0, variables: 2 */

// <003B8228> tier0/platwindow.cpp:1198
// variables: 4
bool Plat_IsWindowMinimized(PlatWindow_t hWindow)
{
	SDL_Window* window; // 1200
	const char   __FUNCTION__; // 49511
	SDL_WindowFlags nFlags; // 1202
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1201
	}
} /* size: 0, variables: 3 */

// <003B819A> tier0/platwindow.cpp:1209
// variables: 3
OsSpecificWindowHandle_t Plat_WindowToOsSpecificHandle(PlatWindow_t hWindow)
{
	OsSpecificWindowHandle_t retVal; // 1211
	SDL_Window* window; // 1212
	{
		_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 1215
	}
} /* size: 0, variables: 2 */

// <003B7DC1> tier0/platwindow.cpp:1247
// variable: 1
// function calls: 16
PlatWindow_t Plat_OsSpecificHandleToPlatWindow(OsSpecificWindowHandle_t hWindow)
{
	iterator it; // 1252
	_Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__::_Rb_tree_iterator(); // 1252
	_Rb_tree<OsSpecificWindowHandle_t__::_M_end(); // 3152
	_Rb_tree<OsSpecificWindowHandle_t__::_M_begin(); // 3152
	less<OsSpecificWindowHandle_t__::operator(
			OsSpecificWindowHandle_t__* __x,
			OsSpecificWindowHandle_t__* __y);  // 2604
	_S_left(_Base_ptr __x); // 2605
	_S_right(_Base_ptr __x); // 2607
	_Rb_tree<OsSpecificWindowHandle_t__::_M_lower_bound(
			_Base_ptr __x,
			_Base_ptr __y,
			OsSpecificWindowHandle_t__* const& __k);  // 3152
	_Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__::_Rb_tree_iterator(
				_Base_ptr __x);  // 3152
	_Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__::_Rb_tree_iterator(
				_Base_ptr __x);  // 1629
	_Rb_tree<OsSpecificWindowHandle_t__::end(); // 3153
	less<OsSpecificWindowHandle_t__::operator(
			OsSpecificWindowHandle_t__* __x,
			OsSpecificWindowHandle_t__* __y);  // 3154
	_Rb_tree<OsSpecificWindowHandle_t__::find(
		OsSpecificWindowHandle_t__* const& __k);  // 1260
	map<OsSpecificWindowHandle_t__::find(
		const key_type& __x);  // 1254
	_Rb_tree_iterator<std::pair<OsSpecificWindowHandle_t__::_Rb_tree_iterator(
				_Base_ptr __x);  // 1629
	_Rb_tree<OsSpecificWindowHandle_t__::end(); // 410
	map<OsSpecificWindowHandle_t__::end(); // 1255
} /* size: 120, variables: 1, inline expansions: 16 (337 bytes) */

// <003B7D9E> tier0/platwindow.cpp:1267
PlatWindow_t Plat_GetShellWindow(void)
{
} /* size: 7 */

// <003B7CC4> tier0/platwindow.cpp:1276
// variables: 4
void Plat_WindowToScreenCoords(PlatWindow_t hWnd, int& x, int& y)
{
	int wx; // 1278
	int wy; // 1278
	int ww; // 1278
	int wh; // 1278
} /* size: 96, variables: 4 */

// <003B7BA5> tier0/platwindow.cpp:1361
float Plat_GetDPI(void)
{
} /* size: 23 */

// <003B7B86> tier0/platwindow.cpp:1367
void Plat_RefreshDPI(void)
{
} /* size: 29 */

