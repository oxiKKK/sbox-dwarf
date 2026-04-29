
//
// thirdparty/yoga/algorithm/Baseline.cpp
//
//	referenced by: libengine2.so
//
//	functions: 2
//

// <0299C014> ../thirdparty/yoga/algorithm/Baseline.cpp:20
// variables: 10
// function calls: 82
void calculateBaseline(const Node* node)
{
	Node* baselineChild; // 37
	const float  baseline; // 60
	{
		const float  baseline; // 24
		Data::Data<(
							const TypedData<(facebook::yoga::Event::Type)7>& data);  // 89
		publish<(facebook::yoga::Event::Type)7>(YGNodeConstRef node,
							const TypedData<(facebook::yoga::Event::Type)7>& eventData); // 22
		array<float, 2>::operator[](
				size_type __n);  // 66
		LayoutResults::measuredDimension(
					Dimension axis);  // 24
		array<float, 2>::operator[](
				size_type __n);  // 66
		LayoutResults::measuredDimension(
					Dimension axis);  // 24
		Data::Data<(
							const TypedData<(facebook::yoga::Event::Type)8>& data);  // 89
		publish<(facebook::yoga::Event::Type)8>(YGNodeConstRef node,
							const TypedData<(facebook::yoga::Event::Type)8>& eventData); // 28
	}
	{
		Node* child; // 38
		LayoutableChildren<facebook::yoga::Node>& __for_range; // 22570
		Iterator __for_begin; // 8221
		Iterator __for_end; // 8221
		LayoutableChildren<facebook::yoga::Node>::LayoutableChildren(
					const Node* node);  // 150
		Node::getLayoutChildren(); // 38
		vector<facebook::yoga::Node::size(); // 146
		Node::getChildCount(); // 128
		{
			Iterator result; // 129
			__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(); // 168
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(); // 626
			_Fwd_list_node_base::_Fwd_list_node_base(); // 626
			_Fwd_list_impl::_Fwd_list_impl(); // 654
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(); // 803
			forward_list<std::pair<const facebook::yoga::Node::forward_list(); // 33
			Iterator::Iterator(
				const Node* node,
				size_t childIndex);  // 129
			Node::getChild(
				size_t index);  // 130
			Style::display(); // 130
		}
		LayoutableChildren<facebook::yoga::Node>::begin(); // 38
		Iterator::operator=(
				Iterator &);  // 66
		{
			const pair<const facebook::yoga::Node*, long unsigned int>& back; // 69
			__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::deallocate(
					_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >* __p,
					size_type __n);  // 215
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::deallocate(
					_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 688
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_put_node(
					_Node_ptr __p);  // 723
			destroy_at<std::pair<const facebook::yoga::Node*, long unsigned int> >(pair<const facebook::yoga::Node*, long unsigned int>* __location); // 698
			destroy<std::pair<const facebook::yoga::Node*, long unsigned int> >(allocator_type& __a,
												pair<const facebook::yoga::Node*, long unsigned int>* __p);  // 719
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_destroy_node(
					_Node_ptr __p);  // 69
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
					_Base_ptr __pos);  // 1391
			forward_list<std::pair<const facebook::yoga::Node::pop_front(); // 72
		}
		vector<facebook::yoga::Node::size(); // 146
		Node::getChildCount(); // 60
		vector<facebook::yoga::Node::operator[](
				size_type __n);  // 1335
		vector<facebook::yoga::Node::at(
			size_type __n);  // 142
		Node::getChild(
			size_t index);  // 82
		Style::display(); // 82
		Iterator::next(); // 40
		Iterator::operator++(); // 38
		operator!=(const Iterator& a,
				const Iterator& b);  // 38
		vector<facebook::yoga::Node::size(); // 1292
		vector<facebook::yoga::Node::_M_range_check(
				size_type __n);  // 1334
		vector<facebook::yoga::Node::operator[](
				size_type __n);  // 1335
		vector<facebook::yoga::Node::at(
			size_type __n);  // 142
		Node::getChild(
			size_t index);  // 36
		Iterator::operator*(); // 38
		Node::getLineIndex(); // 39
		Style::positionType(); // 42
		Style::alignSelf(); // 20
		Style::alignItems(); // 21
		Style::flexDirection(); // 23
		resolveChildAlignment(const Node* node,
					const Node* child);  // 45
		Node::isReferenceBaseline(); // 46
		_Fwd_list_node_base::_M_base_ptr(); // 671
		_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
				_Base_ptr __pos,
				_Base_ptr __last);  // 671
		allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
		_Fwd_list_impl::~_Fwd_list_impl(); // 671
		_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
		forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
		Iterator::~Iterator(); // 54
		_Fwd_list_node_base::_M_base_ptr(); // 671
		{
			_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >& __node; // 82
			__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::deallocate(
					_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >* __p,
					size_type __n);  // 215
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::deallocate(
					_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 688
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_put_node(
					_Node_ptr __p);  // 723
			destroy_at<std::pair<const facebook::yoga::Node*, long unsigned int> >(pair<const facebook::yoga::Node*, long unsigned int>* __location); // 698
			destroy<std::pair<const facebook::yoga::Node*, long unsigned int> >(allocator_type& __a,
												pair<const facebook::yoga::Node*, long unsigned int>* __p);  // 719
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_destroy_node(
					_Node_ptr __p);  // 84
		}
		_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
				_Base_ptr __pos,
				_Base_ptr __last);  // 671
		allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
		_Fwd_list_impl::~_Fwd_list_impl(); // 671
		_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
		forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
		Iterator::~Iterator(); // 54
	}
	Node::hasBaselineFunc(); // 21
	array<float, 2>::operator[](
			size_type __n);  // 66
	LayoutResults::measuredDimension(
				Dimension axis);  // 57
	array<float, 4>::operator[](
			size_type __n);  // 74
	LayoutResults::position(
		PhysicalEdge physicalEdge);  // 61
} /* size: 0, variables: 2, inline expansions: 5 (10 bytes) */

// <0299A670> ../thirdparty/yoga/algorithm/Baseline.cpp:64
// variables: 9
// function calls: 117
void isBaselineLayout(const Node* node)
{
	{
		Node* child; // 71
		LayoutableChildren<facebook::yoga::Node>& __for_range; // 22570
		Iterator __for_begin; // 8221
		Iterator __for_end; // 8221
		LayoutableChildren<facebook::yoga::Node>::LayoutableChildren(
					const Node* node);  // 150
		Node::getLayoutChildren(); // 71
		vector<facebook::yoga::Node::size(); // 146
		Node::getChildCount(); // 128
		{
			Iterator result; // 129
			__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(); // 168
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(); // 626
			_Fwd_list_node_base::_Fwd_list_node_base(); // 626
			_Fwd_list_impl::_Fwd_list_impl(); // 654
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(); // 803
			forward_list<std::pair<const facebook::yoga::Node::forward_list(); // 33
			Iterator::Iterator(
				const Node* node,
				size_t childIndex);  // 129
			Node::getChild(
				size_t index);  // 130
			Style::display(); // 130
		}
		LayoutableChildren<facebook::yoga::Node>::begin(); // 71
		operator!=(const Iterator& a,
				const Iterator& b);  // 71
		vector<facebook::yoga::Node::size(); // 1292
		vector<facebook::yoga::Node::_M_range_check(
				size_type __n);  // 1334
		vector<facebook::yoga::Node::operator[](
				size_type __n);  // 1335
		vector<facebook::yoga::Node::at(
			size_type __n);  // 142
		Node::getChild(
			size_t index);  // 36
		Iterator::operator*(); // 71
		Style::positionType(); // 72
		Style::alignSelf(); // 73
		vector<facebook::yoga::Node::size(); // 146
		Node::getChildCount(); // 60
		{
			const pair<const facebook::yoga::Node*, long unsigned int>& back; // 69
			__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::deallocate(
					_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >* __p,
					size_type __n);  // 215
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::deallocate(
					_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 688
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_put_node(
					_Node_ptr __p);  // 723
			destroy_at<std::pair<const facebook::yoga::Node*, long unsigned int> >(pair<const facebook::yoga::Node*, long unsigned int>* __location); // 698
			destroy<std::pair<const facebook::yoga::Node*, long unsigned int> >(allocator_type& __a,
												pair<const facebook::yoga::Node*, long unsigned int>* __p);  // 719
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_destroy_node(
					_Node_ptr __p);  // 69
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
					_Base_ptr __pos);  // 1391
			forward_list<std::pair<const facebook::yoga::Node::pop_front(); // 72
		}
		vector<facebook::yoga::Node::operator[](
				size_type __n);  // 1335
		vector<facebook::yoga::Node::at(
			size_type __n);  // 142
		Node::getChild(
			size_t index);  // 82
		Style::display(); // 82
		__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 102
		__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__allocated_ptr(
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a,
				pointer __ptr);  // 102
		__allocate_guarded<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > > >(allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a); // 136
		__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__allocated_ptr(
				__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > > >& __gd);  // 115
		__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::get(); // 116
		operator new(size_t,
				void* __p);  // 116
		_Fwd_list_node_base::_Fwd_list_node_base(); // 138
		_Fwd_list_node<std::pair<const facebook::yoga::Node::_Fwd_list_node(); // 116
		__allocated_obj<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__allocated_obj(
				__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > > >& __ptr);  // 136
		__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~__allocated_ptr(); // 136
		__allocate_guarded_obj<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > > >(allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a); // 701
		construct_at<std::pair<const facebook::yoga::Node*, long unsigned int>, std::pair<const facebook::yoga::Node*, long unsigned int> >(pair<const facebook::yoga::Node*, long unsigned int>* __location); // 676
		construct<std::pair<const facebook::yoga::Node*, long unsigned int>, std::pair<const facebook::yoga::Node*, long unsigned int> >(allocator_type& __a,
																pair<const facebook::yoga::Node*, long unsigned int>* __p);  // 702
		__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::operator bool(); // 121
		__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~__allocated_ptr(); // 123
		__allocated_obj<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~__allocated_obj(); // 710
		_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_create_node<std::pair<const facebook::yoga::Node*, long unsigned int> >(); // 55
		_Fwd_list_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_iterator(
					_Fwd_list_node_base* __n);  // 332
		_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_M_const_cast(); // 54
		_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_insert_after<std::pair<const facebook::yoga::Node*, long unsigned int> >(
												const_iterator __pos);  // 1346
		_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_const_iterator(
					const _Fwd_list_node_base* __n);  // 1242
		forward_list<std::pair<const facebook::yoga::Node::cbefore_begin(); // 1346
		forward_list<std::pair<const facebook::yoga::Node::push_front(
				pair<const facebook::yoga::Node*, long unsigned int>& __val);  // 97
		pair<const facebook::yoga::Node::pair<const facebook::yoga::Node*&, long unsigned int&>(
									const Node  *& __x,
									long unsigned int& __y);  // 97
		vector<facebook::yoga::Node::_M_range_check(
				size_type __n);  // 1334
		vector<facebook::yoga::Node::at(
			size_type __n);  // 142
		Node::getChild(
			size_t index);  // 104
		Style::display(); // 92
		vector<facebook::yoga::Node::size(); // 146
		Node::getChildCount(); // 93
		vector<facebook::yoga::Node::size(); // 146
		Node::getChildCount(); // 60
		{
			const pair<const facebook::yoga::Node*, long unsigned int>& back; // 69
			__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::deallocate(
					_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >* __p,
					size_type __n);  // 215
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::deallocate(
					_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 688
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_put_node(
					_Node_ptr __p);  // 723
			destroy_at<std::pair<const facebook::yoga::Node*, long unsigned int> >(pair<const facebook::yoga::Node*, long unsigned int>* __location); // 698
			destroy<std::pair<const facebook::yoga::Node*, long unsigned int> >(allocator_type& __a,
												pair<const facebook::yoga::Node*, long unsigned int>* __p);  // 719
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_destroy_node(
					_Node_ptr __p);  // 69
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
					_Base_ptr __pos);  // 1391
			forward_list<std::pair<const facebook::yoga::Node::pop_front(); // 72
		}
		vector<facebook::yoga::Node::operator[](
				size_type __n);  // 1335
		vector<facebook::yoga::Node::at(
			size_type __n);  // 142
		Node::getChild(
			size_t index);  // 82
		Style::display(); // 82
		Iterator::next(); // 109
		Iterator::skipContentsNodes(); // 84
		Iterator::next(); // 40
		Iterator::operator++(); // 71
		allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
		_Fwd_list_impl::~_Fwd_list_impl(); // 671
		{
			_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >& __node; // 82
			destroy_at<std::pair<const facebook::yoga::Node*, long unsigned int> >(pair<const facebook::yoga::Node*, long unsigned int>* __location); // 698
			destroy<std::pair<const facebook::yoga::Node*, long unsigned int> >(allocator_type& __a,
												pair<const facebook::yoga::Node*, long unsigned int>* __p);  // 719
			__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::deallocate(
					_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >* __p,
					size_type __n);  // 215
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::deallocate(
					_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 688
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_put_node(
					_Node_ptr __p);  // 723
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_destroy_node(
					_Node_ptr __p);  // 84
		}
		_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
				_Base_ptr __pos,
				_Base_ptr __last);  // 671
		_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
		forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
		Iterator::~Iterator(); // 76
		{
			_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >& __node; // 82
			destroy_at<std::pair<const facebook::yoga::Node*, long unsigned int> >(pair<const facebook::yoga::Node*, long unsigned int>* __location); // 698
			destroy<std::pair<const facebook::yoga::Node*, long unsigned int> >(allocator_type& __a,
												pair<const facebook::yoga::Node*, long unsigned int>* __p);  // 719
			__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::deallocate(
					_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >* __p,
					size_type __n);  // 215
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::deallocate(
					_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> >* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 688
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_put_node(
					_Node_ptr __p);  // 723
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_destroy_node(
					_Node_ptr __p);  // 84
		}
		_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
				_Base_ptr __pos,
				_Base_ptr __last);  // 671
		allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
		_Fwd_list_impl::~_Fwd_list_impl(); // 671
		_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
		forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
		Iterator::~Iterator(); // 76
	}
	Style::flexDirection(); // 65
	Style::alignItems(); // 68
} /* size: 0, inline expansions: 2 (20 bytes) */

