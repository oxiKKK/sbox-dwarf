
//
// thirdparty/yoga/YGNode.cpp
//
//	referenced by: libengine2.so
//
//	functions: 21
//

// <028F2722> ../thirdparty/yoga/YGNode.cpp:36
// variables: 3
// function calls: 32
YGNodeRef YGNodeClone(YGNodeConstRef oldNodeRef)
{
	const Node* oldNode; // 37
	const Node* node; // 38
	StyleValuePool::StyleValuePool(
			const StyleValuePool  &);  // 37
	Style::Style(
		const Style  &);  // 43
	vector<facebook::yoga::Node::size(); // 633
	__new_allocator<facebook::yoga::Node::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<facebook::yoga::Node::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<facebook::yoga::Node::_M_allocate(
			size_t __n);  // 405
	_Vector_base<facebook::yoga::Node::_M_create_storage(
				size_t __n);  // 341
	__new_allocator<facebook::yoga::Node::__new_allocator(
			const __new_allocator<facebook::yoga::Node*>  &);  // 173
	allocator<facebook::yoga::Node::allocator(
			const allocator<facebook::yoga::Node*>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	_Vector_base<facebook::yoga::Node::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 633
	_Vector_base<facebook::yoga::Node::_M_get_Tp_allocator(); // 633
	__new_allocator<facebook::yoga::Node::__new_allocator(
			const __new_allocator<facebook::yoga::Node*>  &);  // 173
	allocator<facebook::yoga::Node::allocator(
			const allocator<facebook::yoga::Node*>& __a);  // 726
	select_on_container_copy_construction(const allocator_type& __rhs); // 100
	_S_select_on_copy(const allocator<facebook::yoga::Node*>& __a); // 633
	{
		ptrdiff_t __n; // 269
		{
		}
	}
	uninitialized_copy<__gnu_cxx::__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*> >, facebook::yoga::Node**>(__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*>  __first,
																__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*>  __last,
																Node** __result);  // 635
	__uninitialized_copy_a<__gnu_cxx::__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*> >, __gnu_cxx::__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*> >, facebook::yoga::Node**, facebook::yoga::Node*>(__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*>  __first,
																__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*>  __last,
																Node** __result,
																allocator<facebook::yoga::Node*> &);  // 636
	allocator<facebook::yoga::Node::~allocator(); // 633
	_Vector_base<facebook::yoga::Node::_M_get_Tp_allocator(); // 638
	__normal_iterator<facebook::yoga::Node::__normal_iterator(
				Node* const* const& __i);  // 1029
	vector<facebook::yoga::Node::end(); // 636
	__normal_iterator<facebook::yoga::Node::__normal_iterator(
				Node* const* const& __i);  // 1009
	vector<facebook::yoga::Node::begin(); // 636
	vector<facebook::yoga::Node::vector(
		const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& __x);  // 43
	Node::Node(
		const Node& node);  // 38
	Data::Data<(
						const TypedData<(facebook::yoga::Event::Type)0>& data);  // 89
	publish<(facebook::yoga::Event::Type)0>(YGNodeConstRef node,
						const TypedData<(facebook::yoga::Event::Type)0>& eventData); // 39
	Node::setOwner(
		Node* owner);  // 40
} /* size: 659, variables: 2, inline expansions: 31 (1227 bytes) */

// <028F1786> ../thirdparty/yoga/YGNode.cpp:64
// variables: 3
// function calls: 6
void YGNodeFreeRecursive(YGNodeRef rootRef)
{
	const Node* root; // 65
	size_t skipped; // 67
	{
		const Node* child; // 69
		vector<facebook::yoga::Node::operator[](
				size_type __n);  // 1335
		vector<facebook::yoga::Node::at(
			size_type __n);  // 142
		Node::getChild(
			size_t index);  // 69
		Node::getOwner(); // 70
	}
	vector<facebook::yoga::Node::size(); // 146
	Node::getChildCount(); // 68
} /* size: 141, variables: 2, inline expansions: 2 (68 bytes) */

// <028F0CEC> ../thirdparty/yoga/YGNode.cpp:81
// variables: 2
// function calls: 45
void YGNodeFinalize(const YGNodeRef node)
{
	Data::Data<(
						const TypedData<(facebook::yoga::Event::Type)1>& data);  // 89
	publish<(facebook::yoga::Event::Type)1>(YGNodeConstRef node,
						const TypedData<(facebook::yoga::Event::Type)1>& eventData); // 82
	_Vector_base<facebook::yoga::Node::_M_get_Tp_allocator(); // 803
	_Destroy<facebook::yoga::Node**, facebook::yoga::Node*>(Node** __first,
								Node** __last,
								allocator<facebook::yoga::Node*> &);  // 802
	__new_allocator<facebook::yoga::Node::deallocate(
			Node** __p,
			size_type __n);  // 215
	allocator<facebook::yoga::Node::deallocate(
			Node** __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<facebook::yoga::Node::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<facebook::yoga::Node::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<facebook::yoga::Node::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<facebook::yoga::Node::~_Vector_base(); // 805
	vector<facebook::yoga::Node::~vector(); // 33
	{
		Overflow *& __ptr; // 396
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer this); // 396
		get_deleter(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer<4>:: this); // 398
		{
			const size_t  __n; // 703
			_Bvector_impl::_M_end_addr(); // 703
			__new_allocator<long unsigned int>::deallocate(
					long unsigned int* __p,
					size_type __n);  // 215
			allocator<long unsigned int>::deallocate(
					long unsigned int* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 704
			_Bvector_impl_data::_M_reset(); // 707
		}
		_Bvector_base<std::allocator<bool> >::_M_deallocate(); // 676
		allocator<long unsigned int>::~allocator(); // 596
		_Bvector_impl::~_Bvector_impl(); // 676
		_Bvector_base<std::allocator<bool> >::~_Bvector_base(); // 926
		vector<bool, std::allocator<bool> >::~vector(); // 122
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
		vector<unsigned int, std::allocator<unsigned int> >::~vector(); // 122
		Overflow::~Overflow(); // 92
		default_delete<facebook::yoga::SmallValueBuffer<4>::Overflow>::operator(
				Overflow* __ptr);  // 86
		default_delete<facebook::yoga::SmallValueBuffer<4>::Overflow>::operator(
				Overflow* __ptr);  // 398
	}
	~unique_ptr(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffer<4>:: this); // 23
	SmallValueBuffer<4>::~SmallValueBuffer(); // 27
	StyleValuePool::~StyleValuePool(); // 37
	Style::~Style(); // 33
	Node::~Node(); // 83
} /* size: 250, inline expansions: 18 (554 bytes) */

// <028F0956> ../thirdparty/yoga/YGNode.cpp:123
// function call: 1
void YGNodeSetDirtiedFunc(YGNodeRef node, YGDirtiedFunc dirtiedFunc)
{
	Node::setDirtiedFunc(
			YGDirtiedFunc dirtiedFunc);  // 124
} /* size: 9, inline expansions: 1 (4 bytes) */

// <028F08F1> ../thirdparty/yoga/YGNode.cpp:127
// function call: 1
YGDirtiedFunc YGNodeGetDirtiedFunc(YGNodeConstRef node)
{
	Node::getDirtiedFunc(); // 128
} /* size: 9, inline expansions: 1 (0 bytes) */

// <028F0654> ../thirdparty/yoga/YGNode.cpp:153
// variables: 2
// function call: 1
void YGNodeSwapChild(const YGNodeRef ownerRef, const YGNodeRef childRef, const size_t index)
{
	Node* owner; // 157
	Node* child; // 158
	Node::setOwner(
		Node* owner);  // 161
} /* size: 34, variables: 2, inline expansions: 1 (7 bytes) */

// <028EEEA3> ../thirdparty/yoga/YGNode.cpp:215
// variables: 17
// function calls: 66
void YGNodeSetChildren(const YGNodeRef ownerRef, const YGNodeRef* childrenRefs, const size_t count)
{
	Node* owner; // 219
	Node* const* children; // 220
	const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >  childrenVector; // 226
	{
		Node* child; // 229
		const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& __for_range; // 12323
		const_iterator __for_begin; // 33675
		const_iterator __for_end; // 33675
		Node::setLayout(
				const LayoutResults& layout);  // 230
		Node::setOwner(
			Node* owner);  // 231
	}
	{
		Node* oldChild; // 238
		const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& __for_range; // 12323
		const_iterator __for_begin; // 33675
		const_iterator __for_end; // 33675
		Node::setLayout(
				const LayoutResults& layout);  // 243
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1029
		vector<facebook::yoga::Node::end(); // 242
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1029
		vector<facebook::yoga::Node::end(); // 241
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1009
		vector<facebook::yoga::Node::begin(); // 241
		_Iter_equals_val<facebook::yoga::Node::_Iter_equals_val(
				Node* const& __value);  // 277
		__iter_equals_val<facebook::yoga::Node* const>(Node* const& __val); // 3895
		_Iter_equals_val<facebook::yoga::Node::operator(
																__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*>  __it);  // 2095
		__find_if<__gnu_cxx::__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*> >, __gnu_cxx::__ops::_Iter_equals_val<facebook::yoga::Node* const> >(__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*>  __first,
																__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*>  __last,
																_Iter_equals_val<facebook::yoga::Node* const> __pred);  // 3895
		find<__gnu_cxx::__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*> >, facebook::yoga::Node*>(__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*>  __first,
																__normal_iterator<facebook::yoga::Node* const*, std::vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*>  __last,
																Node* const& __val);  // 241
		Node::setOwner(
			Node* owner);  // 244
	}
	{
		Node* child; // 249
		const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& __for_range; // 12323
		const_iterator __for_begin; // 33675
		const_iterator __for_end; // 33675
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1009
		vector<facebook::yoga::Node::begin(); // 249
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1029
		vector<facebook::yoga::Node::end(); // 249
		Node::setOwner(
			Node* owner);  // 250
	}
	__new_allocator<facebook::yoga::Node::__new_allocator(
			const __new_allocator<facebook::yoga::Node*>  &);  // 173
	allocator<facebook::yoga::Node::allocator(
			const allocator<facebook::yoga::Node*>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 328
	_Vector_base<facebook::yoga::Node::_Vector_base(
			const allocator_type& __a);  // 738
	{
		const long unsigned int  __n; // 744
		__distance_fn::operator(
											Node* const *& __first,
											Node* const* __last);  // 745
		__new_allocator<facebook::yoga::Node::__new_allocator(
				const __new_allocator<facebook::yoga::Node*>  &);  // 173
		allocator<facebook::yoga::Node::allocator(
				const allocator<facebook::yoga::Node*>& __a);  // 2210
		allocator<facebook::yoga::Node::~allocator(); // 2210
		_S_check_init_len(size_type __n,
					const allocator_type& __a);  // 1985
		__new_allocator<facebook::yoga::Node::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<facebook::yoga::Node::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<facebook::yoga::Node::_M_allocate(
				size_t __n);  // 1985
		{
			ptrdiff_t __n; // 269
			{
			}
		}
		uninitialized_copy<facebook::yoga::Node* const*, facebook::yoga::Node**>(Node* const* __first,
											Node* const* __last,
											Node** __result);  // 635
		__uninitialized_copy_a<facebook::yoga::Node* const*, facebook::yoga::Node* const*, facebook::yoga::Node**, facebook::yoga::Node*>(Node* const* __first,
																Node* const* __last,
																Node** __result,
																allocator<facebook::yoga::Node*> &);  // 1989
		vector<facebook::yoga::Node::_M_range_initialize_n<facebook::yoga::Node* const*, facebook::yoga::Node* const*>(
													Node* const* __first,
													Node* const* __last,
													size_type __n);  // 746
	}
	vector<facebook::yoga::Node::vector<facebook::yoga::Node* const*>(
						Node* const* __first,
						Node* const* __last,
						const allocator_type& __a);  // 226
	__normal_iterator<facebook::yoga::Node::__normal_iterator(
				Node* const* const& __i);  // 1029
	vector<facebook::yoga::Node::end(); // 1224
	__normal_iterator<facebook::yoga::Node::__normal_iterator(
				Node* const* const& __i);  // 1009
	vector<facebook::yoga::Node::begin(); // 1224
	vector<facebook::yoga::Node::empty(); // 227
	vector<facebook::yoga::Node::size(); // 146
	Node::getChildCount(); // 237
	Node::setChildren(
			const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& children);  // 248
	vector<facebook::yoga::Node::size(); // 146
	Node::getChildCount(); // 228
	Node::setChildren(
			const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& children);  // 233
	_Vector_base<facebook::yoga::Node::_M_get_Tp_allocator(); // 803
	_Destroy<facebook::yoga::Node**, facebook::yoga::Node*>(Node** __first,
								Node** __last,
								allocator<facebook::yoga::Node*> &);  // 802
	_Vector_base<facebook::yoga::Node::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<facebook::yoga::Node::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<facebook::yoga::Node::~_Vector_base(); // 805
	vector<facebook::yoga::Node::~vector(); // 233
	allocator<facebook::yoga::Node::~allocator(); // 226
	_Vector_base<facebook::yoga::Node::_M_get_Tp_allocator(); // 803
	_Destroy<facebook::yoga::Node**, facebook::yoga::Node*>(Node** __first,
								Node** __last,
								allocator<facebook::yoga::Node*> &);  // 802
	__new_allocator<facebook::yoga::Node::deallocate(
			Node** __p,
			size_type __n);  // 215
	allocator<facebook::yoga::Node::deallocate(
			Node** __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<facebook::yoga::Node::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<facebook::yoga::Node::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	_Vector_base<facebook::yoga::Node::~_Vector_base(); // 805
	vector<facebook::yoga::Node::~vector(); // 254
} /* size: 0, variables: 3, inline expansions: 34 (587 bytes) */

// <028EED61> ../thirdparty/yoga/YGNode.cpp:256
// variable: 1
// function calls: 4
YGNodeRef YGNodeGetChild(const YGNodeRef nodeRef, const size_t index)
{
	const Node* node; // 257
	vector<facebook::yoga::Node::size(); // 259
	vector<facebook::yoga::Node::operator[](
			size_type __n);  // 1335
	vector<facebook::yoga::Node::at(
		size_type __n);  // 142
	Node::getChild(
		size_t index);  // 260
} /* size: 40, variables: 1, inline expansions: 4 (25 bytes) */

// <028EECD3> ../thirdparty/yoga/YGNode.cpp:269
YGNodeRef YGNodeGetOwner(const YGNodeRef node)
{
} /* size: 0 */

// <028EEBE1> ../thirdparty/yoga/YGNode.cpp:281
// function call: 1
YGConfigConstRef YGNodeGetConfig(YGNodeRef node)
{
	Node::getConfig(); // 282
} /* size: 12, inline expansions: 1 (0 bytes) */

// <028EEB62> ../thirdparty/yoga/YGNode.cpp:285
// function call: 1
void YGNodeSetContext(YGNodeRef node, void* context)
{
	Node::setContext(
			void* context);  // 286
} /* size: 9, inline expansions: 1 (4 bytes) */

// <028EEAFB> ../thirdparty/yoga/YGNode.cpp:289
// function call: 1
void* YGNodeGetContext(YGNodeConstRef node)
{
	Node::getContext(); // 290
} /* size: 9, inline expansions: 1 (0 bytes) */

// <028EE9AB> ../thirdparty/yoga/YGNode.cpp:301
// function call: 1
void YGNodeSetBaselineFunc(YGNodeRef node, YGBaselineFunc baselineFunc)
{
	Node::setBaselineFunc(
			YGBaselineFunc baseLineFunc);  // 302
} /* size: 9, inline expansions: 1 (4 bytes) */

// <028EE944> ../thirdparty/yoga/YGNode.cpp:305
// function call: 1
bool YGNodeHasBaselineFunc(YGNodeConstRef node)
{
	Node::hasBaselineFunc(); // 306
} /* size: 13, inline expansions: 1 (8 bytes) */

// <028EE854> ../thirdparty/yoga/YGNode.cpp:309
// variable: 1
// function calls: 2
void YGNodeSetIsReferenceBaseline(YGNodeRef nodeRef, bool isReferenceBaseline)
{
	const Node* node; // 310
	Node::isReferenceBaseline(); // 311
	Node::setIsReferenceBaseline(
				bool isReferenceBaseline);  // 312
} /* size: 41, variables: 1, inline expansions: 2 (22 bytes) */

// <028EE7ED> ../thirdparty/yoga/YGNode.cpp:317
// function call: 1
bool YGNodeIsReferenceBaseline(YGNodeConstRef node)
{
	Node::isReferenceBaseline(); // 318
} /* size: 13, inline expansions: 1 (8 bytes) */

// <028EE768> ../thirdparty/yoga/YGNode.cpp:321
// function call: 1
void YGNodeSetNodeType(YGNodeRef node, YGNodeType nodeType)
{
	Node::setNodeType(
			NodeType nodeType);  // 322
} /* size: 24, inline expansions: 1 (19 bytes) */

// <028EE6E4> ../thirdparty/yoga/YGNode.cpp:325
// function calls: 2
YGNodeType YGNodeGetNodeType(YGNodeConstRef node)
{
	Node::getNodeType(); // 326
	unscopedEnum(NodeType scoped); // 326
} /* size: 14, inline expansions: 2 (9 bytes) */

// <028EE65F> ../thirdparty/yoga/YGNode.cpp:329
// function call: 1
void YGNodeSetAlwaysFormsContainingBlock(YGNodeRef node, bool alwaysFormsContainingBlock)
{
	Node::setAlwaysFormsContainingBlock(
					bool alwaysFormsContainingBlock);  // 332
} /* size: 26, inline expansions: 1 (21 bytes) */

// <028EE5F8> ../thirdparty/yoga/YGNode.cpp:335
// function call: 1
bool YGNodeGetAlwaysFormsContainingBlock(YGNodeConstRef node)
{
	Node::alwaysFormsContainingBlock(); // 336
} /* size: 14, inline expansions: 1 (9 bytes) */

// <028EE249> ../thirdparty/yoga/YGNode.cpp:341
// function calls: 8
bool YGNodeCanUseCachedMeasurement(YGMeasureMode widthMode, float availableWidth, YGMeasureMode heightMode, float availableHeight, YGMeasureMode lastWidthMode, float lastAvailableWidth, YGMeasureMode lastHeightMode, float lastAvailableHeight, float lastComputedWidth, float lastComputedHeight, float marginRow, float marginColumn, YGConfigRef config)
{
	scopedEnum(YGMeasureMode unscoped); // 355
	sizingMode(MeasureMode mode); // 355
	scopedEnum(YGMeasureMode unscoped); // 355
	sizingMode(MeasureMode mode); // 355
	scopedEnum(YGMeasureMode unscoped); // 355
	sizingMode(MeasureMode mode); // 355
	scopedEnum(YGMeasureMode unscoped); // 355
	sizingMode(MeasureMode mode); // 355
} /* size: 80, inline expansions: 8 (34 bytes) */

