
//
// thirdparty/yoga/algorithm/CalculateLayout.cpp
//
//	referenced by: libengine2.so
//
//	functions: 16
//

// <029F209D> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:41
// variables: 2
// function calls: 36
void constrainMaxSizeForMode(const Node* node, Direction direction, FlexDirection axis, float ownerAxisSize, float ownerWidth, SizingMode* mode, float* size)
{
	const FloatOptional  maxSize; // 49
	Node::style(); // 52
	dimension(FlexDirection flexDirection); // 52
	FloatOptional::FloatOptional(
			float value);  // 52
	array<facebook::yoga::StyleValueHandle, 2>::operator[](
			size_type __n);  // 211
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 51
	{
		float value; // 59
		StyleValueHandle::value(); // 60
		unpackInlineInteger(uint16_t value); // 61
		isinf<float>(float value); // 41
		FloatOptional::FloatOptional(
				float value);  // 43
		StyleLength::StyleLength(
				FloatOptional value,
				Unit unit);  // 43
		percent(float value); // 65
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
		isinf<float>(float value); // 35
		points(float value); // 64
		bit_cast<float, unsigned int>(const unsigned int& __from); // 60
	}
	StyleValuePool::getLength(
			StyleValueHandle handle);  // 211
	Style::maxDimension(
			Dimension axis);  // 222
	Style::boxSizing(); // 223
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 222
	FloatOptional::FloatOptional(
			float value);  // 228
	FloatOptional::FloatOptional(
			float value);  // 69
	operator+(FloatOptional lhs,
			FloatOptional rhs);  // 232
	Style::resolvedMaxDimension(
				Direction direction,
				Dimension axis,
				float referenceLength,
				float ownerWidth);  // 52
	FloatOptional::FloatOptional(
			float value);  // 69
	operator+(FloatOptional lhs,
			FloatOptional rhs);  // 52
} /* size: 0, variables: 1, inline expansions: 17 (1105 bytes) */

// <029F1EC3> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:69
// variables: 21
void computeFlexBasisForChild(const Node* node, const Node* child, const float width, const SizingMode widthMode, const float height, const float ownerWidth, const float ownerHeight, const SizingMode heightMode, const Direction direction, LayoutData& layoutMarkerData, const uint32_t depth, const uint32_t generationCount)
{
	const FlexDirection  mainAxis; // 82
	const bool  isMainAxisRow; // 84
	const float  mainAxisSize; // 85
	const float  mainAxisOwnerSize; // 86
	float childWidth; // 88
	float childHeight; // 89
	SizingMode childWidthSizingMode; // 90
	SizingMode childHeightSizingMode; // 91
	const FloatOptional  resolvedFlexBasis; // 93
	const bool  isRowStyleDimDefined; // 95
	const bool  isColumnStyleDimDefined; // 97
	{
		const FloatOptional  paddingAndBorder; // 105
	}
	{
		const FloatOptional  paddingAndBorder; // 112
	}
	{
		const FloatOptional  paddingAndBorder; // 122
	}
	{
		float marginRow; // 135
		float marginColumn; // 137
		const Style& childStyle; // 176
		const bool  hasExactWidth; // 193
		const bool  childWidthStretch; // 195
		const bool  hasExactHeight; // 209
		const bool  childHeightStretch; // 211
	}
} /* size: 0, variables: 11 */

// <029F0168> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:266
// variables: 6
// function calls: 106
void measureNodeWithMeasureFunc(const Node* node, const Direction direction, float availableWidth, float availableHeight, const SizingMode widthSizingMode, const SizingMode heightSizingMode, const float ownerWidth, const float ownerHeight, LayoutData& layoutMarkerData, const LayoutPassReason reason)
{
	const LayoutResults& layout; // 289
	const float  paddingAndBorderAxisRow; // 290
	const float  paddingAndBorderAxisColumn; // 293
	const float  innerWidth; // 298
	const float  innerHeight; // 301
	{
		const YGSize  measuredSize; // 330
		Data::Data<(
							const TypedData<(facebook::yoga::Event::Type)5>& data);  // 89
		publish<(facebook::yoga::Event::Type)5>(YGNodeConstRef node,
							const TypedData<(facebook::yoga::Event::Type)5>& eventData); // 327
		measureMode(SizingMode mode); // 330
		measureMode(SizingMode mode); // 330
		unscopedEnum(MeasureMode scoped); // 345
		Data::Data<(
							const TypedData<(facebook::yoga::Event::Type)6>& data);  // 89
		publish<(facebook::yoga::Event::Type)6>(YGNodeConstRef node,
							const TypedData<(facebook::yoga::Event::Type)6>& eventData); // 340
		array<int, 8>::operator[](
				size_type __n);  // 337
		unscopedEnum(MeasureMode scoped); // 343
		Node::style(); // 46
		array<facebook::yoga::StyleValueHandle, 2>::operator[](
				size_type __n);  // 186
		Style::minDimension(
				Dimension axis);  // 197
		FloatOptional::FloatOptional(
				float value);  // 79
		StyleLength::resolve(
			float referenceLength);  // 197
		Style::boxSizing(); // 198
		FloatOptional::FloatOptional(
				float value);  // 203
		FloatOptional::FloatOptional(
				float value);  // 69
		operator+(FloatOptional lhs,
				FloatOptional rhs);  // 207
		Style::resolvedMinDimension(
					Direction direction,
					Dimension axis,
					float referenceLength,
					float ownerWidth);  // 46
		operator==(FloatOptional lhs,
				FloatOptional rhs);  // 81
		operator>=(FloatOptional lhs,
				FloatOptional rhs);  // 52
		operator==(FloatOptional lhs,
				FloatOptional rhs);  // 81
		operator>=(FloatOptional lhs,
				FloatOptional rhs);  // 56
		boundAxisWithinMinAndMax(const Node* node,
					const Direction  direction,
					const FlexDirection  axis,
					const FloatOptional  value,
					const float  axisSize,
					const float  widthSize);  // 73
		FloatOptional::FloatOptional(
				float value);  // 74
		max<float>(const float& __a,
				const float& __b);  // 42
		maxOrDefined<float, float>(float a,
						float b);  // 72
		boundAxis(const Node* node,
				const FlexDirection  axis,
				const Direction  direction,
				const float  value,
				const float  axisSize,
				const float  widthSize);  // 350
		max<float>(const float& __a,
				const float& __b);  // 42
		maxOrDefined<float, float>(float a,
						float b);  // 72
		array<facebook::yoga::StyleValueHandle, 2>::operator[](
				size_type __n);  // 186
		Style::minDimension(
				Dimension axis);  // 197
		FloatOptional::FloatOptional(
				float value);  // 79
		StyleLength::resolve(
			float referenceLength);  // 197
		Style::boxSizing(); // 198
		FloatOptional::FloatOptional(
				float value);  // 203
		FloatOptional::FloatOptional(
				float value);  // 69
		operator+(FloatOptional lhs,
				FloatOptional rhs);  // 207
		Style::resolvedMinDimension(
					Direction direction,
					Dimension axis,
					float referenceLength,
					float ownerWidth);  // 41
		operator==(FloatOptional lhs,
				FloatOptional rhs);  // 81
		operator>=(FloatOptional lhs,
				FloatOptional rhs);  // 52
		operator==(FloatOptional lhs,
				FloatOptional rhs);  // 81
		operator>=(FloatOptional lhs,
				FloatOptional rhs);  // 56
		boundAxisWithinMinAndMax(const Node* node,
					const Direction  direction,
					const FlexDirection  axis,
					const FloatOptional  value,
					const float  axisSize,
					const float  widthSize);  // 73
		FloatOptional::FloatOptional(
				float value);  // 74
		boundAxis(const Node* node,
				const FlexDirection  axis,
				const Direction  direction,
				const float  value,
				const float  axisSize,
				const float  widthSize);  // 363
	}
	Node::hasMeasureFunc(); // 279
	array<float, 4>::operator[](
			size_type __n);  // 98
	LayoutResults::padding(
		PhysicalEdge physicalEdge);  // 290
	array<float, 4>::operator[](
			size_type __n);  // 98
	LayoutResults::padding(
		PhysicalEdge physicalEdge);  // 291
	array<float, 4>::operator[](
			size_type __n);  // 90
	LayoutResults::border(
		PhysicalEdge physicalEdge);  // 291
	array<float, 4>::operator[](
			size_type __n);  // 90
	LayoutResults::border(
		PhysicalEdge physicalEdge);  // 292
	array<float, 4>::operator[](
			size_type __n);  // 98
	LayoutResults::padding(
		PhysicalEdge physicalEdge);  // 293
	array<float, 4>::operator[](
			size_type __n);  // 98
	LayoutResults::padding(
		PhysicalEdge physicalEdge);  // 294
	array<float, 4>::operator[](
			size_type __n);  // 90
	LayoutResults::border(
		PhysicalEdge physicalEdge);  // 294
	array<float, 4>::operator[](
			size_type __n);  // 90
	LayoutResults::border(
		PhysicalEdge physicalEdge);  // 295
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 300
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 303
	Node::style(); // 46
	array<facebook::yoga::StyleValueHandle, 2>::operator[](
			size_type __n);  // 186
	Style::minDimension(
			Dimension axis);  // 197
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 197
	Style::boxSizing(); // 198
	FloatOptional::FloatOptional(
			float value);  // 203
	FloatOptional::FloatOptional(
			float value);  // 69
	operator+(FloatOptional lhs,
			FloatOptional rhs);  // 207
	Style::resolvedMinDimension(
				Direction direction,
				Dimension axis,
				float referenceLength,
				float ownerWidth);  // 46
	operator==(FloatOptional lhs,
			FloatOptional rhs);  // 81
	operator>=(FloatOptional lhs,
			FloatOptional rhs);  // 52
	operator==(FloatOptional lhs,
			FloatOptional rhs);  // 81
	operator>=(FloatOptional lhs,
			FloatOptional rhs);  // 56
	boundAxisWithinMinAndMax(const Node* node,
				const Direction  direction,
				const FlexDirection  axis,
				const FloatOptional  value,
				const float  axisSize,
				const float  widthSize);  // 73
	FloatOptional::FloatOptional(
			float value);  // 74
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 72
	boundAxis(const Node* node,
			const FlexDirection  axis,
			const Direction  direction,
			const float  value,
			const float  axisSize,
			const float  widthSize);  // 308
	array<facebook::yoga::StyleValueHandle, 2>::operator[](
			size_type __n);  // 186
	Style::minDimension(
			Dimension axis);  // 197
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 197
	Style::boxSizing(); // 198
	FloatOptional::FloatOptional(
			float value);  // 203
	FloatOptional::FloatOptional(
			float value);  // 69
	operator+(FloatOptional lhs,
			FloatOptional rhs);  // 207
	Style::resolvedMinDimension(
				Direction direction,
				Dimension axis,
				float referenceLength,
				float ownerWidth);  // 41
	operator==(FloatOptional lhs,
			FloatOptional rhs);  // 81
	operator>=(FloatOptional lhs,
			FloatOptional rhs);  // 52
	operator==(FloatOptional lhs,
			FloatOptional rhs);  // 81
	operator>=(FloatOptional lhs,
			FloatOptional rhs);  // 56
	boundAxisWithinMinAndMax(const Node* node,
				const Direction  direction,
				const FlexDirection  axis,
				const FloatOptional  value,
				const float  axisSize,
				const float  widthSize);  // 73
	FloatOptional::FloatOptional(
			float value);  // 74
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 72
	boundAxis(const Node* node,
			const FlexDirection  axis,
			const Direction  direction,
			const float  value,
			const float  axisSize,
			const float  widthSize);  // 317
} /* size: 2254, variables: 5, inline expansions: 58 (2146 bytes) */

// <029F00CE> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:380
// variables: 3
void measureNodeWithoutChildren(const Node* node, const Direction direction, const float availableWidth, const float availableHeight, const SizingMode widthSizingMode, const SizingMode heightSizingMode, const float ownerWidth, const float ownerHeight)
{
	const LayoutResults& layout; // 389
	float width; // 391
	float height; // 403
} /* size: 0, variables: 3 */

// <029F005B> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:421
void measureNodeWithFixedSize(const Node* node, const Direction direction, const float availableWidth, const float availableHeight, const SizingMode widthSizingMode, const SizingMode heightSizingMode, const float ownerWidth, const float ownerHeight)
{
} /* size: 0 */

// <029EFDD1> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:469
// variables: 4
// function calls: 5
void zeroOutLayoutRecursively(const Node* node)
{
	{
		const Node* child; // 476
		const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& __for_range; // 20089
		const_iterator __for_begin; // 40259
		const_iterator __for_end; // 40259
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1009
		vector<facebook::yoga::Node::begin(); // 476
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1029
		vector<facebook::yoga::Node::end(); // 476
	}
	Node::setHasNewLayout(
			bool hasNewLayout);  // 473
} /* size: 249, inline expansions: 1 (3 bytes) */

// <029EFB99> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:481
// variables: 4
// function calls: 6
void cleanupContentsNodesRecursively(const Node* node)
{
	{
		Node* child; // 482
		const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& __for_range; // 20089
		const_iterator __for_begin; // 40259
		const_iterator __for_end; // 40259
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1009
		vector<facebook::yoga::Node::begin(); // 482
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1029
		vector<facebook::yoga::Node::end(); // 482
		Style::display(); // 483
		Node::setHasNewLayout(
				bool hasNewLayout);  // 487
	}
} /* size: 324 */

// <029EEBCE> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:496
// variables: 7
// function calls: 67
void calculateAvailableInnerDimension(const Node* node, const Direction direction, const Dimension dimension, const float availableDim, const float paddingAndBorder, const float ownerDim, const float ownerWidth)
{
	float availableInnerDim; // 504
	{
		const FloatOptional  minDimensionOptional; // 510
		const float  minInnerDim; // 513
		const FloatOptional  maxDimensionOptional; // 517
		const float  maxInnerDim; // 521
		array<facebook::yoga::StyleValueHandle, 2>::operator[](
				size_type __n);  // 186
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 51
		{
			float value; // 59
			StyleValueHandle::value(); // 60
			unpackInlineInteger(uint16_t value); // 61
			isinf<float>(float value); // 41
			FloatOptional::FloatOptional(
					float value);  // 43
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
		StyleValuePool::getLength(
				StyleValueHandle handle);  // 186
		Style::minDimension(
				Dimension axis);  // 197
		FloatOptional::FloatOptional(
				float value);  // 79
		StyleLength::resolve(
			float referenceLength);  // 197
		Style::boxSizing(); // 198
		FloatOptional::FloatOptional(
				float value);  // 203
		FloatOptional::FloatOptional(
				float value);  // 69
		operator+(FloatOptional lhs,
				FloatOptional rhs);  // 207
		Style::resolvedMinDimension(
					Direction direction,
					Dimension axis,
					float referenceLength,
					float ownerWidth);  // 511
		Node::style(); // 511
		array<facebook::yoga::StyleValueHandle, 2>::operator[](
				size_type __n);  // 211
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 51
		{
			float value; // 59
			StyleValueHandle::value(); // 60
			unpackInlineInteger(uint16_t value); // 61
			isinf<float>(float value); // 41
			FloatOptional::FloatOptional(
					float value);  // 43
			StyleLength::StyleLength(
					FloatOptional value,
					Unit unit);  // 43
			percent(float value); // 65
			isinf<float>(float value); // 35
			FloatOptional::FloatOptional(
					float value);  // 37
			StyleLength::StyleLength(
					FloatOptional value,
					Unit unit);  // 37
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
		StyleValuePool::getLength(
				StyleValueHandle handle);  // 211
		Style::maxDimension(
				Dimension axis);  // 222
		FloatOptional::FloatOptional(
				float value);  // 79
		StyleLength::resolve(
			float referenceLength);  // 222
		FloatOptional::FloatOptional(
				float value);  // 228
		FloatOptional::FloatOptional(
				float value);  // 69
		operator+(FloatOptional lhs,
				FloatOptional rhs);  // 232
		Style::resolvedMaxDimension(
					Direction direction,
					Dimension axis,
					float referenceLength,
					float ownerWidth);  // 518
		minOrDefined<float, float>(float a,
						float b);  // 524
		max<float>(const float& __a,
				const float& __b);  // 42
		maxOrDefined<float, float>(float a,
						float b);  // 524
	}
} /* size: 0, variables: 1 */

// <029E795B> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:531
// variables: 36
// function calls: 496
void computeFlexBasisForChildren(const Node* node, const float availableInnerWidth, const float availableInnerHeight, SizingMode widthSizingMode, SizingMode heightSizingMode, Direction direction, FlexDirection mainAxis, bool performLayout, LayoutData& layoutMarkerData, const uint32_t depth, const uint32_t generationCount)
{
	float totalOuterFlexBasis; // 543
	YGNodeRef singleFlexChild; // 544
	LayoutableChildren<facebook::yoga::Node> children; // 545
	SizingMode sizingModeMainDim; // 546
	{
		Node* child; // 552
		LayoutableChildren<facebook::yoga::Node>& __for_range; // 33764
		Iterator __for_begin; // 10453
		Iterator __for_end; // 10453
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
			Iterator::skipContentsNodes(); // 132
		}
		LayoutableChildren<facebook::yoga::Node>::begin(); // 552
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
		pair<const facebook::yoga::Node::pair<const facebook::yoga::Node*&, long unsigned int&>(
									const Node  *& __x,
									long unsigned int& __y);  // 97
		_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_const_iterator(
					const _Fwd_list_node_base* __n);  // 1242
		forward_list<std::pair<const facebook::yoga::Node::cbefore_begin(); // 1346
		_Fwd_list_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_iterator(
					_Fwd_list_node_base* __n);  // 332
		_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_M_const_cast(); // 54
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
		_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_insert_after<std::pair<const facebook::yoga::Node*, long unsigned int> >(
												const_iterator __pos);  // 1346
		forward_list<std::pair<const facebook::yoga::Node::push_front(
				pair<const facebook::yoga::Node*, long unsigned int>& __val);  // 97
		vector<facebook::yoga::Node::_M_range_check(
				size_type __n);  // 1334
		vector<facebook::yoga::Node::at(
			size_type __n);  // 142
		Node::getChild(
			size_t index);  // 104
		Style::display(); // 92
		vector<facebook::yoga::Node::size(); // 146
		Node::getChildCount(); // 93
		Iterator::skipContentsNodes(); // 84
		Iterator::next(); // 40
		Iterator::operator++(); // 552
		abs(float __x); // 61
		inexactEquals(float a,
				float b);  // 555
		abs(float __x); // 61
		inexactEquals(float a,
				float b);  // 556
		operator!=(const Iterator& a,
				const Iterator& b);  // 552
		vector<facebook::yoga::Node::size(); // 1292
		vector<facebook::yoga::Node::_M_range_check(
				size_type __n);  // 1334
		vector<facebook::yoga::Node::operator[](
				size_type __n);  // 1335
		vector<facebook::yoga::Node::at(
			size_type __n);  // 142
		Node::getChild(
			size_t index);  // 36
		Iterator::operator*(); // 552
		_Fwd_list_node_base::_M_base_ptr(); // 671
		_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
				_Base_ptr __pos,
				_Base_ptr __last);  // 671
		allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
		_Fwd_list_impl::~_Fwd_list_impl(); // 671
		_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
		forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
		Iterator::~Iterator(); // 565
		_Fwd_list_node_base::_M_base_ptr(); // 671
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
		Iterator::~Iterator(); // 565
	}
	{
		Node* child; // 568
		LayoutableChildren<facebook::yoga::Node>& __for_range; // 33764
		Iterator __for_begin; // 10453
		Iterator __for_end; // 10453
		{
			const Direction  childDirection; // 578
		}
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
			Iterator::skipContentsNodes(); // 132
		}
		LayoutableChildren<facebook::yoga::Node>::begin(); // 568
		Style::flexDirection(); // 83
		resolveDirection(const FlexDirection  flexDirection,
				const Direction  direction);  // 31
		resolveDirection(const FlexDirection  flexDirection,
				const Direction  direction);  // 83
		isRow(const FlexDirection flexDirection); // 84
		Node::getProcessedDimension(
					Dimension dimension);  // 91
		FloatOptional::FloatOptional(
				float value);  // 79
		StyleLength::resolve(
			float referenceLength);  // 91
		Node::hasDefiniteLength(
					Dimension dimension,
					float ownerSize);  // 96
		Node::getProcessedDimension(
					Dimension dimension);  // 91
		FloatOptional::FloatOptional(
				float value);  // 79
		StyleLength::resolve(
			float referenceLength);  // 91
		Node::hasDefiniteLength(
					Dimension dimension,
					float ownerSize);  // 98
		FloatOptional::isDefined(); // 100
		FloatOptional::isUndefined(); // 101
		{
			const FloatOptional  paddingAndBorder; // 105
			FloatOptional::FloatOptional(
					float value);  // 106
			max<float>(const float& __a,
					const float& __b);  // 42
			maxOrDefined<float, float>(float a,
							float b);  // 89
			FloatOptional::FloatOptional(
					float value);  // 89
			maxOrDefined(FloatOptional lhs,
					FloatOptional rhs);  // 107
		}
		Node::getConfig(); // 102
		{
			const FloatOptional  paddingAndBorder; // 112
			Style::boxSizing(); // 186
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 185
			FloatOptional::FloatOptional(
					float value);  // 192
			FloatOptional::FloatOptional(
					float value);  // 69
			operator+(FloatOptional lhs,
					FloatOptional rhs);  // 196
			Node::getResolvedDimension(
						Direction direction,
						Dimension dimension,
						float referenceLength,
						float ownerWidth);  // 116
			FloatOptional::FloatOptional(
					float value);  // 114
			max<float>(const float& __a,
					const float& __b);  // 42
			maxOrDefined<float, float>(float a,
							float b);  // 89
			FloatOptional::FloatOptional(
					float value);  // 89
			maxOrDefined(FloatOptional lhs,
					FloatOptional rhs);  // 116
		}
		{
			const FloatOptional  paddingAndBorder; // 122
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 185
			FloatOptional::FloatOptional(
					float value);  // 192
			FloatOptional::FloatOptional(
					float value);  // 69
			operator+(FloatOptional lhs,
					FloatOptional rhs);  // 196
			Node::getResolvedDimension(
						Direction direction,
						Dimension dimension,
						float referenceLength,
						float ownerWidth);  // 125
			FloatOptional::FloatOptional(
					float value);  // 124
			max<float>(const float& __a,
					const float& __b);  // 42
			maxOrDefined<float, float>(float a,
							float b);  // 89
			FloatOptional::FloatOptional(
					float value);  // 89
			maxOrDefined(FloatOptional lhs,
					FloatOptional rhs);  // 125
		}
		{
			float marginRow; // 135
			float marginColumn; // 137
			const Style& childStyle; // 176
			const bool  hasExactWidth; // 193
			const bool  childWidthStretch; // 195
			const bool  hasExactHeight; // 209
			const bool  childHeightStretch; // 211
			max<float>(const float& __a,
					const float& __b);  // 42
			maxOrDefined<float, float>(float a,
							float b);  // 261
			Node::style(); // 136
			Style::overflow(); // 160
			Style::overflow(); // 161
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
			StyleValuePool::getNumber(
					StyleValueHandle handle);  // 236
			Style::aspectRatio(); // 177
			Style::alignSelf(); // 20
			Style::alignItems(); // 21
			resolveChildAlignment(const Node* node,
						const Node* child);  // 196
			dimension(FlexDirection flexDirection); // 261
			array<float, 2>::operator[](
					size_type __n);  // 66
			LayoutResults::measuredDimension(
						Dimension axis);  // 261
			FloatOptional::FloatOptional(
					float value);  // 261
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 185
			Style::boxSizing(); // 186
			FloatOptional::FloatOptional(
					float value);  // 192
			FloatOptional::FloatOptional(
					float value);  // 69
			operator+(FloatOptional lhs,
					FloatOptional rhs);  // 196
			Node::getResolvedDimension(
						Direction direction,
						Dimension dimension,
						float referenceLength,
						float ownerWidth);  // 151
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 185
			Style::boxSizing(); // 186
			FloatOptional::FloatOptional(
					float value);  // 192
			FloatOptional::FloatOptional(
					float value);  // 69
			operator+(FloatOptional lhs,
					FloatOptional rhs);  // 196
			Node::getResolvedDimension(
						Direction direction,
						Dimension dimension,
						float referenceLength,
						float ownerWidth);  // 142
			resolveChildAlignment(const Node* node,
						const Node* child);  // 212
			Style::aspectRatio(); // 219
			Style::aspectRatio(); // 221
			Style::aspectRatio(); // 185
			Style::aspectRatio(); // 180
			Style::aspectRatio(); // 202
			Style::aspectRatio(); // 204
		}
		computeFlexBasisForChild(const Node* node,
					const Node* child,
					const float  width,
					const SizingMode  widthMode,
					const float  height,
					const float  ownerWidth,
					const float  ownerHeight,
					const SizingMode  heightMode,
					const Direction  direction,
					LayoutData& layoutMarkerData,
					const uint32_t  depth,
					const uint32_t  generationCount);  // 590
		vector<facebook::yoga::Node::size(); // 1292
		vector<facebook::yoga::Node::_M_range_check(
				size_type __n);  // 1334
		vector<facebook::yoga::Node::operator[](
				size_type __n);  // 1335
		vector<facebook::yoga::Node::at(
			size_type __n);  // 142
		Node::getChild(
			size_t index);  // 36
		Iterator::operator*(); // 568
		Style::display(); // 570
		Style::positionType(); // 583
		inlineStartEdge(FlexDirection flexDirection,
				Direction direction);  // 357
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 611
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 617
		array<facebook::yoga::StyleValueHandle, 9>::operator[](
				size_type __n);  // 618
		array<facebook::yoga::StyleValueHandle, 9>::operator[](
				size_type __n);  // 620
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 619
		array<facebook::yoga::StyleValueHandle, 9>::operator[](
				size_type __n);  // 622
		Style::computeLeftEdge(
				const Edges& edges,
				Direction layoutDirection);  // 608
		Style::computeLeftEdge(
				const Edges& edges,
				Direction layoutDirection);  // 682
		Style::computeMargin(
				PhysicalEdge edge,
				Direction direction);  // 679
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 627
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 629
		{
			float value; // 59
			StyleValueHandle::value(); // 60
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
			get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
			operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
			vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
			vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned int, std::allocator<unsigned int> >::at(
				size_type __n);  // 100
			SmallValueBuffer<4>::get32(
				uint16_t index);  // 96
			SmallValueBuffer<4>::get32(
				uint16_t index);  // 60
		}
		StyleValuePool::getLength(
				StyleValueHandle handle);  // 630
		{
			float value; // 59
			unpackInlineInteger(uint16_t value); // 61
			isinf<float>(float value); // 41
			FloatOptional::FloatOptional(
					float value);  // 43
			StyleLength::StyleLength(
					FloatOptional value,
					Unit unit);  // 43
			percent(float value); // 65
			StyleValueHandle::value(); // 60
			array<unsigned int, 4>::operator[](
					size_type __n);  // 98
			vector<unsigned int, std::allocator<unsigned int> >::operator[](
					size_type __n);  // 1316
			vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
			vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned int, std::allocator<unsigned int> >::at(
				size_type __n);  // 100
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
			get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
			operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
			SmallValueBuffer<4>::get32(
				uint16_t index);  // 96
			SmallValueBuffer<4>::get32(
				uint16_t index);  // 60
			bit_cast<float, unsigned int>(const unsigned int& __from); // 60
			isinf<float>(float value); // 35
			points(float value); // 64
		}
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 51
		StyleValuePool::getLength(
				StyleValueHandle handle);  // 632
		Style::computeTopEdge(
				const Edges& edges);  // 626
		{
			float value; // 59
			StyleValueHandle::value(); // 60
			unpackInlineInteger(uint16_t value); // 61
			isinf<float>(float value); // 41
			percent(float value); // 65
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
			isinf<float>(float value); // 35
			points(float value); // 64
			bit_cast<float, unsigned int>(const unsigned int& __from); // 60
		}
		StyleValuePool::getLength(
				StyleValueHandle handle);  // 628
		Style::computeTopEdge(
				const Edges& edges);  // 684
		Style::computeMargin(
				PhysicalEdge edge,
				Direction direction);  // 357
		FloatOptional::FloatOptional(
				float value);  // 79
		StyleLength::resolve(
			float referenceLength);  // 358
		FloatOptional::unwrapOrDefault(
				float defaultValue);  // 359
		Style::computeInlineStartMargin(
					FlexDirection axis,
					Direction direction,
					float widthSize);  // 507
		inlineEndEdge(FlexDirection flexDirection,
				Direction direction);  // 375
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 639
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 645
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 619
		array<facebook::yoga::StyleValueHandle, 9>::operator[](
				size_type __n);  // 620
		array<facebook::yoga::StyleValueHandle, 9>::operator[](
				size_type __n);  // 622
		Style::computeLeftEdge(
				const Edges& edges,
				Direction layoutDirection);  // 608
		array<facebook::yoga::StyleValueHandle, 9>::operator[](
				size_type __n);  // 646
		Style::computeRightEdge(
				const Edges& edges,
				Direction layoutDirection);  // 686
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 655
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 629
		{
			float value; // 59
			StyleValueHandle::value(); // 60
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
			get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
			operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
			vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
			vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned int, std::allocator<unsigned int> >::at(
				size_type __n);  // 100
			SmallValueBuffer<4>::get32(
				uint16_t index);  // 96
			SmallValueBuffer<4>::get32(
				uint16_t index);  // 60
		}
		StyleValuePool::getLength(
				StyleValueHandle handle);  // 630
		{
			float value; // 59
			unpackInlineInteger(uint16_t value); // 61
			isinf<float>(float value); // 41
			percent(float value); // 65
			StyleValueHandle::value(); // 60
			array<unsigned int, 4>::operator[](
					size_type __n);  // 98
			vector<unsigned int, std::allocator<unsigned int> >::operator[](
					size_type __n);  // 1316
			vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
			vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned int, std::allocator<unsigned int> >::at(
				size_type __n);  // 100
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
			get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
			operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
			SmallValueBuffer<4>::get32(
				uint16_t index);  // 96
			SmallValueBuffer<4>::get32(
				uint16_t index);  // 60
			bit_cast<float, unsigned int>(const unsigned int& __from); // 60
			isinf<float>(float value); // 35
			points(float value); // 64
		}
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 51
		StyleValuePool::getLength(
				StyleValueHandle handle);  // 632
		Style::computeTopEdge(
				const Edges& edges);  // 626
		{
			float value; // 59
			StyleValueHandle::value(); // 60
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
			get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
			operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
			vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
			vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned int, std::allocator<unsigned int> >::at(
				size_type __n);  // 100
			SmallValueBuffer<4>::get32(
				uint16_t index);  // 96
			SmallValueBuffer<4>::get32(
				uint16_t index);  // 60
		}
		StyleValuePool::getLength(
				StyleValueHandle handle);  // 656
		Style::computeBottomEdge(
					const Edges& edges);  // 688
		Style::computeMargin(
				PhysicalEdge edge,
				Direction direction);  // 375
		FloatOptional::FloatOptional(
				float value);  // 79
		StyleLength::resolve(
			float referenceLength);  // 376
		FloatOptional::unwrapOrDefault(
				float defaultValue);  // 377
		Style::computeInlineEndMargin(
					FlexDirection axis,
					Direction direction,
					float widthSize);  // 508
		Style::computeMarginForAxis(
					FlexDirection axis,
					float widthSize);  // 607
		FloatOptional::unwrap(); // 606
		Node::setHasNewLayout(
				bool hasNewLayout);  // 572
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
		pair<const facebook::yoga::Node::pair<const facebook::yoga::Node*&, long unsigned int&>(
									const Node  *& __x,
									long unsigned int& __y);  // 97
		_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_const_iterator(
					const _Fwd_list_node_base* __n);  // 1242
		forward_list<std::pair<const facebook::yoga::Node::cbefore_begin(); // 1346
		_Fwd_list_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_iterator(
					_Fwd_list_node_base* __n);  // 332
		_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_M_const_cast(); // 54
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
		_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_insert_after<std::pair<const facebook::yoga::Node*, long unsigned int> >(
												const_iterator __pos);  // 1346
		forward_list<std::pair<const facebook::yoga::Node::push_front(
				pair<const facebook::yoga::Node*, long unsigned int>& __val);  // 97
		vector<facebook::yoga::Node::_M_range_check(
				size_type __n);  // 1334
		vector<facebook::yoga::Node::at(
			size_type __n);  // 142
		Node::getChild(
			size_t index);  // 104
		Style::display(); // 92
		vector<facebook::yoga::Node::size(); // 146
		Node::getChildCount(); // 93
		Iterator::skipContentsNodes(); // 84
		Iterator::next(); // 40
		Iterator::operator++(); // 568
		operator!=(const Iterator& a,
				const Iterator& b);  // 568
		_Fwd_list_node_base::_M_base_ptr(); // 671
		_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
				_Base_ptr __pos,
				_Base_ptr __last);  // 671
		allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
		_Fwd_list_impl::~_Fwd_list_impl(); // 671
		_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
		forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
		Iterator::~Iterator(); // 608
		_Fwd_list_node_base::_M_base_ptr(); // 671
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
		Iterator::~Iterator(); // 608
	}
	isRow(const FlexDirection flexDirection); // 547
} /* size: 0, variables: 4, inline expansions: 1 (17 bytes) */

// <029E2A6A> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:617
// variables: 39
// function calls: 353
void distributeFreeSpaceSecondPass(FlexLine& flexLine, const Node* node, const FlexDirection mainAxis, const FlexDirection crossAxis, const Direction direction, const float ownerWidth, const float mainAxisOwnerSize, const float availableInnerMainDim, const float availableInnerCrossDim, const float availableInnerWidth, const float availableInnerHeight, const bool mainAxisOverflows, const SizingMode sizingModeCrossDim, const bool performLayout, LayoutData& layoutMarkerData, const uint32_t depth, const uint32_t generationCount)
{
	float childFlexBasis; // 635
	float flexShrinkScaledFactor; // 636
	float flexGrowFactor; // 637
	float deltaFreeSpace; // 638
	const bool  isMainAxisRow; // 639
	const bool  isNodeFlexWrap; // 640
	{
		Node* currentLineChild; // 642
		const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& __for_range; // 20089
		const_iterator __for_begin; // 40259
		const_iterator __for_end; // 40259
		{
			float updatedMainSize; // 651
			const float  marginMain; // 700
			const float  marginCross; // 702
			float childCrossSize; // 705
			float childMainSize; // 706
			SizingMode childCrossSizingMode; // 707
			SizingMode childMainSizingMode; // 708
			const Style& childStyle; // 710
			const bool  requiresStretchLayout; // 772
			const float  childWidth; // 780
			const float  childHeight; // 781
			const SizingMode  childWidthSizingMode; // 783
			const SizingMode  childHeightSizingMode; // 785
			const bool  isLayoutPass; // 788
			{
				float childSize; // 659
			}
			{
				const bool  isLoosePercentageMeasurement; // 745
				Style::boxSizing(); // 186
				FloatOptional::FloatOptional(
						float value);  // 192
				FloatOptional::FloatOptional(
						float value);  // 69
				operator+(FloatOptional lhs,
						FloatOptional rhs);  // 196
				Node::getResolvedDimension(
							Direction direction,
							Dimension dimension,
							float referenceLength,
							float ownerWidth);  // 738
				dimension(FlexDirection flexDirection); // 746
				Node::getProcessedDimension(
							Dimension dimension);  // 746
			}
			Node::style(); // 41
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 51
			{
				float value; // 59
				StyleValueHandle::value(); // 60
				unpackInlineInteger(uint16_t value); // 61
				isinf<float>(float value); // 41
				FloatOptional::FloatOptional(
						float value);  // 43
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
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 186
			Style::minDimension(
					Dimension axis);  // 197
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 197
			Style::boxSizing(); // 198
			FloatOptional::FloatOptional(
					float value);  // 203
			FloatOptional::FloatOptional(
					float value);  // 69
			operator+(FloatOptional lhs,
					FloatOptional rhs);  // 207
			Style::resolvedMinDimension(
						Direction direction,
						Dimension axis,
						float referenceLength,
						float ownerWidth);  // 41
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 51
			{
				float value; // 59
				StyleValueHandle::value(); // 60
				unpackInlineInteger(uint16_t value); // 61
				isinf<float>(float value); // 41
				FloatOptional::FloatOptional(
						float value);  // 43
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
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 211
			Style::maxDimension(
					Dimension axis);  // 222
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 222
			FloatOptional::FloatOptional(
					float value);  // 228
			FloatOptional::FloatOptional(
					float value);  // 69
			operator+(FloatOptional lhs,
					FloatOptional rhs);  // 232
			Style::resolvedMaxDimension(
						Direction direction,
						Dimension axis,
						float referenceLength,
						float ownerWidth);  // 43
			operator==(FloatOptional lhs,
					FloatOptional rhs);  // 81
			operator>=(FloatOptional lhs,
					FloatOptional rhs);  // 56
			operator==(FloatOptional lhs,
					FloatOptional rhs);  // 81
			operator>=(FloatOptional lhs,
					FloatOptional rhs);  // 52
			Node::style(); // 46
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 51
			{
				float value; // 59
				StyleValueHandle::value(); // 60
				unpackInlineInteger(uint16_t value); // 61
				isinf<float>(float value); // 41
				FloatOptional::FloatOptional(
						float value);  // 43
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
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 186
			Style::minDimension(
					Dimension axis);  // 197
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 197
			Style::boxSizing(); // 198
			FloatOptional::FloatOptional(
					float value);  // 203
			FloatOptional::FloatOptional(
					float value);  // 69
			operator+(FloatOptional lhs,
					FloatOptional rhs);  // 207
			Style::resolvedMinDimension(
						Direction direction,
						Dimension axis,
						float referenceLength,
						float ownerWidth);  // 46
			FloatOptional::unwrap(); // 73
			operator>(FloatOptional lhs,
					FloatOptional rhs);  // 52
			boundAxisWithinMinAndMax(const Node* node,
						const Direction  direction,
						const FlexDirection  axis,
						const FloatOptional  value,
						const float  axisSize,
						const float  widthSize);  // 643
			inlineStartEdge(FlexDirection flexDirection,
					Direction direction);  // 357
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 627
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 629
			{
				float value; // 59
				StyleValueHandle::value(); // 60
				_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
				get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
				operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
				vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
				vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
						size_type __n);  // 1315
				vector<unsigned int, std::allocator<unsigned int> >::at(
					size_type __n);  // 100
				SmallValueBuffer<4>::get32(
					uint16_t index);  // 96
				SmallValueBuffer<4>::get32(
					uint16_t index);  // 60
			}
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 630
			{
				float value; // 59
				unpackInlineInteger(uint16_t value); // 61
				isinf<float>(float value); // 41
				FloatOptional::FloatOptional(
						float value);  // 43
				StyleLength::StyleLength(
						FloatOptional value,
						Unit unit);  // 43
				percent(float value); // 65
				StyleValueHandle::value(); // 60
				array<unsigned int, 4>::operator[](
						size_type __n);  // 98
				vector<unsigned int, std::allocator<unsigned int> >::operator[](
						size_type __n);  // 1316
				vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
				vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
						size_type __n);  // 1315
				vector<unsigned int, std::allocator<unsigned int> >::at(
					size_type __n);  // 100
				_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
				get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
				operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
				SmallValueBuffer<4>::get32(
					uint16_t index);  // 96
				SmallValueBuffer<4>::get32(
					uint16_t index);  // 60
				bit_cast<float, unsigned int>(const unsigned int& __from); // 60
				isinf<float>(float value); // 35
				points(float value); // 64
			}
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 51
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 632
			Style::computeTopEdge(
					const Edges& edges);  // 626
			{
				float value; // 59
				StyleLength::StyleLength(
						FloatOptional value,
						Unit unit);  // 43
				percent(float value); // 65
				StyleValueHandle::value(); // 60
				unpackInlineInteger(uint16_t value); // 61
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
				isinf<float>(float value); // 35
				points(float value); // 64
				bit_cast<float, unsigned int>(const unsigned int& __from); // 60
			}
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 628
			Style::computeTopEdge(
					const Edges& edges);  // 684
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 611
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 617
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 619
			array<facebook::yoga::StyleValueHandle, 9>::operator[](
					size_type __n);  // 622
			Style::computeLeftEdge(
					const Edges& edges,
					Direction layoutDirection);  // 608
			Style::computeLeftEdge(
					const Edges& edges,
					Direction layoutDirection);  // 682
			Style::computeMargin(
					PhysicalEdge edge,
					Direction direction);  // 679
			Style::computeMargin(
					PhysicalEdge edge,
					Direction direction);  // 357
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 358
			FloatOptional::unwrapOrDefault(
					float defaultValue);  // 359
			Style::computeInlineStartMargin(
						FlexDirection axis,
						Direction direction,
						float widthSize);  // 507
			inlineEndEdge(FlexDirection flexDirection,
					Direction direction);  // 375
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 655
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 629
			{
				float value; // 59
				StyleValueHandle::value(); // 60
				_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
				get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
				operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
				vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
				vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
						size_type __n);  // 1315
				vector<unsigned int, std::allocator<unsigned int> >::at(
					size_type __n);  // 100
				SmallValueBuffer<4>::get32(
					uint16_t index);  // 96
				SmallValueBuffer<4>::get32(
					uint16_t index);  // 60
			}
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 630
			{
				float value; // 59
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
				isinf<float>(float value); // 41
				percent(float value); // 65
				StyleValueHandle::value(); // 60
				unpackInlineInteger(uint16_t value); // 61
				isinf<float>(float value); // 35
				points(float value); // 64
				bit_cast<float, unsigned int>(const unsigned int& __from); // 60
			}
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 51
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 632
			Style::computeTopEdge(
					const Edges& edges);  // 626
			{
				float value; // 59
				StyleValueHandle::value(); // 60
				unpackInlineInteger(uint16_t value); // 61
				isinf<float>(float value); // 41
				percent(float value); // 65
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
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 656
			Style::computeBottomEdge(
						const Edges& edges);  // 688
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 639
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 645
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 619
			{
				float value; // 59
				StyleValueHandle::value(); // 60
				unpackInlineInteger(uint16_t value); // 61
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
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 620
			array<facebook::yoga::StyleValueHandle, 9>::operator[](
					size_type __n);  // 622
			Style::computeLeftEdge(
					const Edges& edges,
					Direction layoutDirection);  // 608
			array<facebook::yoga::StyleValueHandle, 9>::operator[](
					size_type __n);  // 646
			Style::computeRightEdge(
					const Edges& edges,
					Direction layoutDirection);  // 686
			Style::computeMargin(
					PhysicalEdge edge,
					Direction direction);  // 375
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 376
			FloatOptional::unwrapOrDefault(
					float defaultValue);  // 377
			Style::computeInlineEndMargin(
						FlexDirection axis,
						Direction direction,
						float widthSize);  // 508
			Style::computeMarginForAxis(
						FlexDirection axis,
						float widthSize);  // 700
			Node::style(); // 700
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 70
			{
				float value; // 74
				StyleValueHandle::value(); // 75
				FloatOptional::FloatOptional(
						float value);  // 77
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
				array<unsigned int, 4>::operator[](
						size_type __n);  // 98
				SmallValueBuffer<4>::get32(
					uint16_t index);  // 75
				bit_cast<float, unsigned int>(const unsigned int& __from); // 75
			}
			StyleValuePool::getNumber(
					StyleValueHandle handle);  // 236
			Style::aspectRatio(); // 711
			{
				float value; // 74
				unpackInlineInteger(uint16_t value); // 76
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
				FloatOptional::FloatOptional(
						float value);  // 77
			}
			StyleValuePool::getNumber(
					StyleValueHandle handle);  // 236
			Style::aspectRatio(); // 713
			{
				float value; // 74
				FloatOptional::FloatOptional(
						float value);  // 77
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
			StyleValuePool::getNumber(
					StyleValueHandle handle);  // 236
			Style::aspectRatio(); // 714
			dimension(FlexDirection flexDirection); // 720
			Node::getProcessedDimension(
						Dimension dimension);  // 91
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 91
			Node::hasDefiniteLength(
						Dimension dimension,
						float ownerSize);  // 720
			dimension(FlexDirection flexDirection); // 730
			Node::getProcessedDimension(
						Dimension dimension);  // 91
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 91
			Node::hasDefiniteLength(
						Dimension dimension,
						float ownerSize);  // 730
			Style::alignSelf(); // 20
			Style::alignItems(); // 21
			resolveChildAlignment(const Node* node,
						const Node* child);  // 724
			flexStartEdge(FlexDirection flexDirection); // 517
			StyleLength::isAuto(); // 517
			Style::flexStartMarginIsAuto(
						FlexDirection axis,
						Direction direction);  // 725
			dimension(FlexDirection flexDirection); // 773
			Node::getProcessedDimension(
						Dimension dimension);  // 91
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 91
			Node::hasDefiniteLength(
						Dimension dimension,
						float ownerSize);  // 773
			LayoutResults::direction(); // 791
			LayoutResults::hadOverflow(); // 807
			LayoutResults::hadOverflow(); // 808
			Style::alignSelf(); // 20
			Style::alignItems(); // 21
			resolveChildAlignment(const Node* node,
						const Node* child);  // 775
			flexStartEdge(FlexDirection flexDirection); // 517
			StyleLength::isAuto(); // 517
			Style::flexStartMarginIsAuto(
						FlexDirection axis,
						Direction direction);  // 776
			flexEndEdge(FlexDirection flexDirection); // 521
			StyleLength::isAuto(); // 521
			Style::flexEndMarginIsAuto(
						FlexDirection axis,
						Direction direction);  // 778
		}
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1029
		vector<facebook::yoga::Node::end(); // 642
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1009
		vector<facebook::yoga::Node::begin(); // 642
	}
	Style::flexWrap(); // 640
	isRow(const FlexDirection flexDirection); // 639
} /* size: 0, variables: 6, inline expansions: 2 (21 bytes) */

// <029E0C00> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:816
// variables: 14
// function calls: 133
void distributeFreeSpaceFirstPass(FlexLine& flexLine, const Direction direction, const FlexDirection mainAxis, const float ownerWidth, const float mainAxisOwnerSize, const float availableInnerMainDim, const float availableInnerWidth)
{
	float flexShrinkScaledFactor; // 824
	float flexGrowFactor; // 825
	float baseMainSize; // 826
	float boundMainSize; // 827
	float deltaFreeSpace; // 828
	{
		Node* currentLineChild; // 830
		const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& __for_range; // 20089
		const_iterator __for_begin; // 40259
		const_iterator __for_end; // 40259
		{
			float childFlexBasis; // 831
			isRow(const FlexDirection flexDirection); // 45
			Node::style(); // 41
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 51
			{
				float value; // 59
				StyleValueHandle::value(); // 60
				unpackInlineInteger(uint16_t value); // 61
				isinf<float>(float value); // 41
				FloatOptional::FloatOptional(
						float value);  // 43
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
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 186
			Style::minDimension(
					Dimension axis);  // 197
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 197
			Style::boxSizing(); // 198
			FloatOptional::FloatOptional(
					float value);  // 203
			FloatOptional::FloatOptional(
					float value);  // 69
			operator+(FloatOptional lhs,
					FloatOptional rhs);  // 207
			Style::resolvedMinDimension(
						Direction direction,
						Dimension axis,
						float referenceLength,
						float ownerWidth);  // 41
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 51
			{
				float value; // 59
				StyleValueHandle::value(); // 60
				unpackInlineInteger(uint16_t value); // 61
				isinf<float>(float value); // 41
				FloatOptional::FloatOptional(
						float value);  // 43
				StyleLength::StyleLength(
						FloatOptional value,
						Unit unit);  // 43
				percent(float value); // 65
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
				isinf<float>(float value); // 35
				points(float value); // 64
				bit_cast<float, unsigned int>(const unsigned int& __from); // 60
			}
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 211
			Style::maxDimension(
					Dimension axis);  // 222
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 222
			FloatOptional::FloatOptional(
					float value);  // 228
			FloatOptional::FloatOptional(
					float value);  // 69
			operator+(FloatOptional lhs,
					FloatOptional rhs);  // 232
			Style::resolvedMaxDimension(
						Direction direction,
						Dimension axis,
						float referenceLength,
						float ownerWidth);  // 43
			operator==(FloatOptional lhs,
					FloatOptional rhs);  // 81
			operator>=(FloatOptional lhs,
					FloatOptional rhs);  // 52
			FloatOptional::unwrap(); // 73
			operator>(FloatOptional lhs,
					FloatOptional rhs);  // 52
			operator==(FloatOptional lhs,
					FloatOptional rhs);  // 81
			operator>=(FloatOptional lhs,
					FloatOptional rhs);  // 56
			Node::style(); // 46
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 51
			{
				float value; // 59
				StyleValueHandle::value(); // 60
				unpackInlineInteger(uint16_t value); // 61
				isinf<float>(float value); // 41
				FloatOptional::FloatOptional(
						float value);  // 43
				StyleLength::StyleLength(
						FloatOptional value,
						Unit unit);  // 43
				percent(float value); // 65
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
				isinf<float>(float value); // 35
				points(float value); // 64
				bit_cast<float, unsigned int>(const unsigned int& __from); // 60
			}
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 186
			Style::minDimension(
					Dimension axis);  // 197
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 197
			Style::boxSizing(); // 198
			FloatOptional::FloatOptional(
					float value);  // 203
			FloatOptional::FloatOptional(
					float value);  // 69
			operator+(FloatOptional lhs,
					FloatOptional rhs);  // 207
			Style::resolvedMinDimension(
						Direction direction,
						Dimension axis,
						float referenceLength,
						float ownerWidth);  // 46
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 51
			{
				float value; // 59
				StyleValueHandle::value(); // 60
				unpackInlineInteger(uint16_t value); // 61
				isinf<float>(float value); // 41
				FloatOptional::FloatOptional(
						float value);  // 43
				StyleLength::StyleLength(
						FloatOptional value,
						Unit unit);  // 43
				percent(float value); // 65
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
				isinf<float>(float value); // 35
				points(float value); // 64
				bit_cast<float, unsigned int>(const unsigned int& __from); // 60
			}
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 211
			Style::maxDimension(
					Dimension axis);  // 222
			FloatOptional::FloatOptional(
					float value);  // 79
			StyleLength::resolve(
				float referenceLength);  // 222
			FloatOptional::FloatOptional(
					float value);  // 228
			FloatOptional::FloatOptional(
					float value);  // 69
			operator+(FloatOptional lhs,
					FloatOptional rhs);  // 232
			Style::resolvedMaxDimension(
						Direction direction,
						Dimension axis,
						float referenceLength,
						float ownerWidth);  // 48
			boundAxisWithinMinAndMax(const Node* node,
						const Direction  direction,
						const FlexDirection  axis,
						const FloatOptional  value,
						const float  axisSize,
						const float  widthSize);  // 831
			FloatOptional::unwrap(); // 867
		}
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1009
		vector<facebook::yoga::Node::begin(); // 830
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1029
		vector<facebook::yoga::Node::end(); // 830
	}
} /* size: 0, variables: 5 */

// <029E0AFE> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:925
// variables: 2
void resolveFlexibleLength(const Node* node, FlexLine& flexLine, const FlexDirection mainAxis, const FlexDirection crossAxis, const Direction direction, const float ownerWidth, const float mainAxisOwnerSize, const float availableInnerMainDim, const float availableInnerCrossDim, const float availableInnerWidth, const float availableInnerHeight, const bool mainAxisOverflows, const SizingMode sizingModeCrossDim, const bool performLayout, LayoutData& layoutMarkerData, const uint32_t depth, const uint32_t generationCount)
{
	const float  originalFreeSpace; // 943
	const float  distributedFreeSpace; // 955
} /* size: 0, variables: 2 */

// <029DDF31> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:977
// variables: 22
// function calls: 189
void justifyMainAxis(const Node* node, FlexLine& flexLine, const FlexDirection mainAxis, const FlexDirection crossAxis, const Direction direction, const SizingMode sizingModeMainDim, const SizingMode sizingModeCrossDim, const float mainAxisOwnerSize, const float ownerWidth, const float availableInnerMainDim, const float availableInnerCrossDim, const float availableInnerWidth, const bool performLayout)
{
	const Style& style; // 991
	const float  leadingPaddingAndBorderMain; // 993
	const float  trailingPaddingAndBorderMain; // 996
	const float  gap; // 1000
	float leadingMainDim; // 1036
	float betweenMainDim; // 1037
	const Justify  justifyContent; // 1038
	float maxAscentForCurrentLine; // 1076
	float maxDescentForCurrentLine; // 1077
	bool isNodeBaselineLayout; // 1078
	{
		const float  minAvailableMainDim; // 1018
		const float  occupiedSpaceByChildNodes; // 1024
		dimension(FlexDirection flexDirection); // 1020
		FloatOptional::unwrap(); // 1022
		maxOrDefined<float, float>(float a,
						float b);  // 1026
	}
	{
		Node* child; // 1079
		const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& __for_range; // 20089
		const_iterator __for_begin; // 40259
		const_iterator __for_end; // 40259
		{
			const LayoutResults& childLayout; // 1080
			bool canSkipFlex; // 1103
			{
				const float  ascent; // 1122
				const float  descent; // 1125
				FloatOptional::unwrap(); // 79
				FloatOptional::FloatOptional(
						float value);  // 79
				StyleLength::resolve(
					float referenceLength);  // 349
				FloatOptional::unwrapOrDefault(
						float defaultValue);  // 350
				Style::computeFlexStartMargin(
							FlexDirection axis,
							Direction direction,
							float widthSize);  // 1123
				array<float, 2>::operator[](
						size_type __n);  // 66
				LayoutResults::measuredDimension(
							Dimension axis);  // 1126
				max<float>(const float& __a,
						const float& __b);  // 42
				maxOrDefined<float, float>(float a,
								float b);  // 1132
				max<float>(const float& __a,
						const float& __b);  // 42
				maxOrDefined<float, float>(float a,
								float b);  // 1134
			}
			max<float>(const float& __a,
					const float& __b);  // 42
			maxOrDefined<float, float>(float a,
							float b);  // 1139
			FloatOptional::unwrap(); // 1111
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 627
			Style::computeTopEdge(
					const Edges& edges);  // 684
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 629
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 51
			{
				float value; // 59
				StyleValueHandle::value(); // 60
				_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
				get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
				operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
				vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
				vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
						size_type __n);  // 1315
				vector<unsigned int, std::allocator<unsigned int> >::at(
					size_type __n);  // 100
				SmallValueBuffer<4>::get32(
					uint16_t index);  // 96
				SmallValueBuffer<4>::get32(
					uint16_t index);  // 60
			}
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 632
			Style::computeTopEdge(
					const Edges& edges);  // 626
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 655
			Style::computeBottomEdge(
						const Edges& edges);  // 688
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 639
			array<facebook::yoga::StyleValueHandle, 9>::operator[](
					size_type __n);  // 644
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 645
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 619
			Style::computeLeftEdge(
					const Edges& edges,
					Direction layoutDirection);  // 608
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 643
			Style::computeRightEdge(
					const Edges& edges,
					Direction layoutDirection);  // 686
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 617
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 611
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 615
			Style::computeLeftEdge(
					const Edges& edges,
					Direction layoutDirection);  // 682
			Style::computeMargin(
					PhysicalEdge edge,
					Direction direction);  // 679
			Style::computeMargin(
					PhysicalEdge edge,
					Direction direction);  // 517
			Style::flexStartMarginIsAuto(
						FlexDirection axis,
						Direction direction);  // 1081
			Node::style(); // 1081
			array<float, 4>::operator[](
					size_type __n);  // 74
			LayoutResults::position(
				PhysicalEdge physicalEdge);  // 1089
			__normal_iterator<facebook::yoga::Node::__normal_iterator(
						Node* const* const& __i);  // 1029
			vector<facebook::yoga::Node::end(); // 1383
			__normal_iterator<facebook::yoga::Node::__normal_iterator(
						Node* const* const& __i);  // 1160
			__normal_iterator<facebook::yoga::Node::operator-(
					difference_type __n);  // 1383
			vector<facebook::yoga::Node::back(); // 1094
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 627
			Style::computeTopEdge(
					const Edges& edges);  // 684
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 629
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 51
			{
				float value; // 59
				StyleValueHandle::value(); // 60
				_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
				get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
				operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
				vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
				vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
						size_type __n);  // 1315
				vector<unsigned int, std::allocator<unsigned int> >::at(
					size_type __n);  // 100
				SmallValueBuffer<4>::get32(
					uint16_t index);  // 96
				SmallValueBuffer<4>::get32(
					uint16_t index);  // 60
			}
			StyleValuePool::getLength(
					StyleValueHandle handle);  // 632
			Style::computeTopEdge(
					const Edges& edges);  // 626
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 655
			Style::computeBottomEdge(
						const Edges& edges);  // 688
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 617
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 611
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 615
			Style::computeLeftEdge(
					const Edges& edges,
					Direction layoutDirection);  // 682
			Style::computeMargin(
					PhysicalEdge edge,
					Direction direction);  // 679
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 619
			Style::computeLeftEdge(
					const Edges& edges,
					Direction layoutDirection);  // 608
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 645
			array<facebook::yoga::StyleValueHandle, 9>::operator[](
					size_type __n);  // 644
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 639
			StyleValueHandle::type(); // 41
			StyleValueHandle::isUndefined(); // 45
			StyleValueHandle::isDefined(); // 643
			Style::computeRightEdge(
					const Edges& edges,
					Direction layoutDirection);  // 686
			Style::computeMargin(
					PhysicalEdge edge,
					Direction direction);  // 521
			Style::flexEndMarginIsAuto(
						FlexDirection axis,
						Direction direction);  // 1098
		}
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1009
		vector<facebook::yoga::Node::begin(); // 1079
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1029
		vector<facebook::yoga::Node::end(); // 1079
	}
	Node::style(); // 991
	flexStartEdge(FlexDirection flexDirection); // 414
	FloatOptional::unwrap(); // 79
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 415
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 413
	Style::computeFlexStartPadding(
				FlexDirection axis,
				Direction direction,
				float widthSize);  // 465
	FloatOptional::unwrap(); // 79
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 382
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 381
	Style::computeFlexStartBorder(
				FlexDirection axis,
				Direction direction);  // 466
	Style::computeFlexStartPaddingAndBorder(
					FlexDirection axis,
					Direction direction,
					float widthSize);  // 994
	flexEndEdge(FlexDirection flexDirection); // 436
	FloatOptional::unwrap(); // 79
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 437
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 435
	Style::computeFlexEndPadding(
				FlexDirection axis,
				Direction direction,
				float widthSize);  // 481
	FloatOptional::unwrap(); // 79
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 397
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 396
	Style::computeFlexEndBorder(
				FlexDirection axis,
				Direction direction);  // 482
	Style::computeFlexEndPaddingAndBorder(
					FlexDirection axis,
					Direction direction,
					float widthSize);  // 997
	isRow(const FlexDirection flexDirection); // 512
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 45
	StyleValueHandle::isDefined(); // 601
	array<facebook::yoga::StyleValueHandle, 3>::operator[](
			size_type __n);  // 604
	Style::computeRowGap(); // 512
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 513
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 513
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 45
	StyleValueHandle::isDefined(); // 593
	Style::computeColumnGap(); // 512
	Style::computeGapForAxis(
				FlexDirection axis,
				float ownerSize);  // 1001
	dimension(FlexDirection flexDirection); // 1006
	array<facebook::yoga::StyleValueHandle, 2>::operator[](
			size_type __n);  // 186
	Style::minDimension(
			Dimension axis);  // 1006
	dimension(FlexDirection flexDirection); // 1008
	FloatOptional::isDefined(); // 1010
	Style::justifyContent(); // 1039
	Style::justifyContent(); // 1040
	fallbackAlignment(Justify align); // 1040
	vector<facebook::yoga::Node::size(); // 1059
	vector<facebook::yoga::Node::size(); // 1065
	vector<facebook::yoga::Node::size(); // 1051
	vector<facebook::yoga::Node::size(); // 1053
} /* size: 0, variables: 10, inline expansions: 56 (2028 bytes) */

// <029CF1BC> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:1209
// variables: 111
// function calls: 959
void calculateLayoutImpl(const Node* node, const float availableWidth, const float availableHeight, const Direction ownerDirection, const SizingMode widthSizingMode, const SizingMode heightSizingMode, const float ownerWidth, const float ownerHeight, const bool performLayout, LayoutData& layoutMarkerData, const uint32_t depth, const uint32_t generationCount, const LayoutPassReason reason)
{
	const Direction  direction; // 1241
	const FlexDirection  flexRowDirection; // 1244
	const FlexDirection  flexColumnDirection; // 1246
	const PhysicalEdge  startEdge; // 1249
	const PhysicalEdge  endEdge; // 1251
	const float  marginRowLeading; // 1254
	const float  marginRowTrailing; // 1257
	const float  marginColumnLeading; // 1260
	const float  marginColumnTrailing; // 1263
	const float  marginAxisRow; // 1267
	const float  marginAxisColumn; // 1268
	const long unsigned int  childCount; // 1319
	const FlexDirection  mainAxis; // 1366
	const FlexDirection  crossAxis; // 1368
	const bool  isMainAxisRow; // 1369
	const bool  isNodeFlexWrap; // 1370
	const float  mainAxisOwnerSize; // 1372
	const float  crossAxisOwnerSize; // 1373
	const float  paddingAndBorderAxisMain; // 1375
	const float  paddingAndBorderAxisCross; // 1377
	const float  leadingPaddingAndBorderCross; // 1379
	SizingMode sizingModeMainDim; // 1383
	SizingMode sizingModeCrossDim; // 1385
	const float  paddingAndBorderAxisRow; // 1388
	const float  paddingAndBorderAxisColumn; // 1390
	float availableInnerWidth; // 1395
	float availableInnerHeight; // 1403
	float availableInnerMainDim; // 1412
	const float  availableInnerCrossDim; // 1414
	float totalMainDim; // 1420
	const bool  mainAxisOverflows; // 1440
	Iterator startOfLineIterator; // 1451
	size_t lineCount; // 1455
	float totalLineCrossDim; // 1458
	const float  crossAxisGap; // 1460
	float maxLineMainDim; // 1464
	{
		FlexLine flexLine; // 1466
		const bool  canSkipFlex; // 1478
		bool sizeBasedOnContent; // 1486
		float containerCrossAxis; // 1605
		const float  appliedCrossGap; // 1757
		{
			const Style& style; // 1490
			const float  minInnerWidth; // 1491
			const float  maxInnerWidth; // 1497
			const float  minInnerHeight; // 1503
			const float  maxInnerHeight; // 1509
			const float  minInnerMainDim; // 1516
			const float  maxInnerMainDim; // 1518
			{
				bool useLegacyStretchBehaviour; // 1529
				Node::hasErrata(
						Errata errata);  // 1530
			}
			FloatOptional::unwrap(); // 1495
			FloatOptional::unwrap(); // 1501
			FloatOptional::unwrap(); // 1507
			FloatOptional::unwrap(); // 1513
		}
		{
			Node* child; // 1644
			const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& __for_range; // 20089
			const_iterator __for_begin; // 40259
			const_iterator __for_end; // 40259
			{
				float leadingCrossDim; // 1645
				const Align  alignItem; // 1650
				{
					float childMainSize; // 1662
					const Style& childStyle; // 1664
					float childCrossSize; // 1665
					SizingMode childMainSizingMode; // 1676
					SizingMode childCrossSizingMode; // 1677
					const float  childWidth; // 1695
					const float  childHeight; // 1697
					Align alignContent; // 1700
					bool crossAxisDoesNotGrow; // 1701
					const SizingMode  childWidthSizingMode; // 1703
					const SizingMode  childHeightSizingMode; // 1708
					dimension(FlexDirection flexDirection); // 1663
					array<float, 2>::operator[](
							size_type __n);  // 66
					LayoutResults::measuredDimension(
								Dimension axis);  // 1663
					Style::aspectRatio(); // 1665
					Style::alignContent(); // 1700
					Style::aspectRatio(); // 1669
					Style::aspectRatio(); // 1670
				}
				{
					const float  remainingCrossDim; // 1730
					max<float>(const float& __a,
							const float& __b);  // 42
					maxOrDefined<float, float>(float a,
									float b);  // 1740
					StyleLength::isAuto(); // 521
					Style::flexEndMarginIsAuto(
								FlexDirection axis,
								Direction direction);  // 1734
					max<float>(const float& __a,
							const float& __b);  // 42
					maxOrDefined<float, float>(float a,
									float b);  // 1735
					Node::style(); // 1733
					flexStartEdge(FlexDirection flexDirection); // 517
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 627
					Style::computeTopEdge(
							const Edges& edges);  // 684
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 629
					array<facebook::yoga::StyleValueHandle, 9>::operator[](
							size_type __n);  // 632
					Style::computeTopEdge(
							const Edges& edges);  // 626
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 655
					array<facebook::yoga::StyleValueHandle, 9>::operator[](
							size_type __n);  // 656
					Style::computeBottomEdge(
								const Edges& edges);  // 688
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 617
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 611
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 615
					Style::computeLeftEdge(
							const Edges& edges,
							Direction layoutDirection);  // 682
					Style::computeMargin(
							PhysicalEdge edge,
							Direction direction);  // 679
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 619
					Style::computeLeftEdge(
							const Edges& edges,
							Direction layoutDirection);  // 608
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 645
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 639
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 643
					Style::computeRightEdge(
							const Edges& edges,
							Direction layoutDirection);  // 686
					Style::computeMargin(
							PhysicalEdge edge,
							Direction direction);  // 517
					Style::flexStartMarginIsAuto(
								FlexDirection axis,
								Direction direction);  // 1733
					StyleLength::isAuto(); // 521
					Style::flexEndMarginIsAuto(
								FlexDirection axis,
								Direction direction);  // 1736
				}
				Node::style(); // 1656
				flexStartEdge(FlexDirection flexDirection); // 517
				StyleLength::isAuto(); // 517
				Style::flexStartMarginIsAuto(
							FlexDirection axis,
							Direction direction);  // 1656
				flexEndEdge(FlexDirection flexDirection); // 521
				StyleLength::isAuto(); // 521
				Style::flexEndMarginIsAuto(
							FlexDirection axis,
							Direction direction);  // 1657
				dimension(FlexDirection flexDirection); // 1660
				Node::getProcessedDimension(
							Dimension dimension);  // 91
				FloatOptional::FloatOptional(
						float value);  // 79
				StyleLength::resolve(
					float referenceLength);  // 91
				Node::hasDefiniteLength(
							Dimension dimension,
							float ownerSize);  // 1660
				array<float, 4>::operator[](
						size_type __n);  // 74
				LayoutResults::position(
					PhysicalEdge physicalEdge);  // 1751
				Style::alignSelf(); // 20
				Style::alignItems(); // 21
				Style::flexDirection(); // 23
				resolveChildAlignment(const Node* node,
							const Node* child);  // 1650
			}
			__normal_iterator<facebook::yoga::Node::__normal_iterator(
						Node* const* const& __i);  // 1009
			vector<facebook::yoga::Node::begin(); // 1644
			__normal_iterator<facebook::yoga::Node::__normal_iterator(
						Node* const* const& __i);  // 1029
			vector<facebook::yoga::Node::end(); // 1644
		}
		max<float>(const float& __a,
				const float& __b);  // 42
		maxOrDefined<float, float>(float a,
						float b);  // 1760
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
		vector<facebook::yoga::Node::~vector(); // 40
		FlexLine::~FlexLine(); // 1761
		LayoutResults::hadOverflow(); // 1580
		resolveFlexibleLength(const Node* node,
					FlexLine& flexLine,
					const FlexDirection  mainAxis,
					const FlexDirection  crossAxis,
					const Direction  direction,
					const float  ownerWidth,
					const float  mainAxisOwnerSize,
					const float  availableInnerMainDim,
					const float  availableInnerCrossDim,
					const float  availableInnerWidth,
					const float  availableInnerHeight,
					const bool  mainAxisOverflows,
					const SizingMode  sizingModeCrossDim,
					const bool  performLayout,
					LayoutData& layoutMarkerData,
					const uint32_t  depth,
					const uint32_t  generationCount);  // 1559
	}
	{
		float leadPerLine; // 1766
		float currentLead; // 1767
		float extraSpacePerLine; // 1768
		const float  unclampedCrossDim; // 1770
		const float  innerCrossDim; // 1781
		const float  remainingAlignContentDim; // 1790
		const Align  alignContent; // 1792
		Iterator endIterator; // 1829
		{
			size_t i; // 1831
			{
				const Iterator  startIterator; // 1832
				Iterator iterator; // 1833
				float lineHeight; // 1836
				float maxAscentForCurrentLine; // 1837
				float maxDescentForCurrentLine; // 1838
				{
					const Node* child; // 1840
					{
						const float  ascent; // 1856
						const float  descent; // 1859
						Node::style(); // 1857
						FloatOptional::unwrap(); // 79
						FloatOptional::FloatOptional(
								float value);  // 79
						StyleLength::resolve(
							float referenceLength);  // 349
						FloatOptional::unwrapOrDefault(
								float defaultValue);  // 350
						Style::computeFlexStartMargin(
									FlexDirection axis,
									Direction direction,
									float widthSize);  // 1857
						array<float, 2>::operator[](
								size_type __n);  // 66
						LayoutResults::measuredDimension(
									Dimension axis);  // 1860
						max<float>(const float& __a,
								const float& __b);  // 42
						maxOrDefined<float, float>(float a,
										float b);  // 1865
						max<float>(const float& __a,
								const float& __b);  // 42
						maxOrDefined<float, float>(float a,
										float b);  // 1867
						max<float>(const float& __a,
								const float& __b);  // 42
						maxOrDefined<float, float>(float a,
										float b);  // 1868
					}
					dimension(FlexDirection flexDirection); // 1851
					Node::getLineIndex(); // 1845
					Style::alignSelf(); // 20
					Style::alignItems(); // 21
					Style::flexDirection(); // 23
					resolveChildAlignment(const Node* node,
								const Node* child);  // 1855
					array<float, 2>::operator[](
							size_type __n);  // 66
					LayoutResults::measuredDimension(
								Dimension axis);  // 1851
					Node::style(); // 1852
					max<float>(const float& __a,
							const float& __b);  // 42
					maxOrDefined<float, float>(float a,
									float b);  // 1849
					Style::positionType(); // 1844
					vector<facebook::yoga::Node::size(); // 1292
					vector<facebook::yoga::Node::_M_range_check(
							size_type __n);  // 1334
					vector<facebook::yoga::Node::operator[](
							size_type __n);  // 1335
					vector<facebook::yoga::Node::at(
						size_type __n);  // 142
					Node::getChild(
						size_t index);  // 36
					Iterator::operator*(); // 1840
					Style::display(); // 1841
				}
				{
					const Node* child; // 1878
					{
						float childHeight; // 1903
						array<float, 2>::operator[](
								size_type __n);  // 66
						LayoutResults::measuredDimension(
									Dimension axis);  // 1904
						flexStartEdge(FlexDirection flexDirection); // 1906
					}
					{
						const float  childWidth; // 1922
						const float  childHeight; // 1928
						array<float, 2>::operator[](
								size_type __n);  // 66
						LayoutResults::measuredDimension(
									Dimension axis);  // 1929
						array<float, 2>::operator[](
								size_type __n);  // 66
						LayoutResults::measuredDimension(
									Dimension axis);  // 1923
						abs(float __x); // 61
						inexactEquals(float a,
								float b);  // 1934
						array<float, 2>::operator[](
								size_type __n);  // 66
						LayoutResults::measuredDimension(
									Dimension axis);  // 1938
						abs(float __x); // 61
						inexactEquals(float a,
								float b);  // 1938
					}
					Style::alignSelf(); // 20
					Style::alignItems(); // 21
					Style::flexDirection(); // 23
					resolveChildAlignment(const Node* node,
								const Node* child);  // 1883
					flexStartEdge(FlexDirection flexDirection); // 1885
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 627
					Style::computeTopEdge(
							const Edges& edges);  // 669
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 629
					array<facebook::yoga::StyleValueHandle, 9>::operator[](
							size_type __n);  // 632
					Style::computeTopEdge(
							const Edges& edges);  // 626
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 655
					Style::computeBottomEdge(
								const Edges& edges);  // 673
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 645
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 619
					Style::computeLeftEdge(
							const Edges& edges,
							Direction layoutDirection);  // 608
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 639
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 643
					Style::computeRightEdge(
							const Edges& edges,
							Direction layoutDirection);  // 671
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 617
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 611
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 615
					Style::computeLeftEdge(
							const Edges& edges,
							Direction layoutDirection);  // 667
					Style::computePosition(
							PhysicalEdge edge,
							Direction direction);  // 664
					Style::computePosition(
							PhysicalEdge edge,
							Direction direction);  // 312
					FloatOptional::FloatOptional(
							float value);  // 79
					StyleLength::resolve(
						float referenceLength);  // 313
					FloatOptional::unwrapOrDefault(
							float defaultValue);  // 314
					Style::computeFlexStartPosition(
								FlexDirection axis,
								Direction direction,
								float axisSize);  // 1887
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 627
					StyleValueHandle::type(); // 41
					StyleValueHandle::isUndefined(); // 45
					StyleValueHandle::isDefined(); // 629
					array<facebook::yoga::StyleValueHandle, 9>::operator[](
							size_type __n);  // 632
					Style::computeTopEdge(
							const Edges& edges);  // 626
					array<facebook::yoga::StyleValueHandle, 9>::operator[](
							size_type __n);  // 628
					Style::computeTopEdge(
							const Edges& edges);  // 669
					Style::computePosition(
							PhysicalEdge edge,
							Direction direction);  // 312
					FloatOptional::FloatOptional(
							float value);  // 79
					StyleLength::resolve(
						float referenceLength);  // 313
					FloatOptional::unwrapOrDefault(
							float defaultValue);  // 314
					Style::computeFlexStartPosition(
								FlexDirection axis,
								Direction direction,
								float axisSize);  // 1964
					flexStartEdge(FlexDirection flexDirection); // 1912
					FloatOptional::unwrap(); // 79
					FloatOptional::FloatOptional(
							float value);  // 79
					StyleLength::resolve(
						float referenceLength);  // 349
					FloatOptional::unwrapOrDefault(
							float defaultValue);  // 350
					Style::computeFlexStartMargin(
								FlexDirection axis,
								Direction direction,
								float widthSize);  // 1914
					Node::style(); // 1914
					Node::getProcessedDimension(
								Dimension dimension);  // 91
					FloatOptional::FloatOptional(
							float value);  // 79
					StyleLength::resolve(
						float referenceLength);  // 91
					Node::hasDefiniteLength(
								Dimension dimension,
								float ownerSize);  // 1920
					flexStartEdge(FlexDirection flexDirection); // 1893
					flexEndEdge(FlexDirection flexDirection); // 366
					FloatOptional::unwrap(); // 79
					FloatOptional::FloatOptional(
							float value);  // 79
					StyleLength::resolve(
						float referenceLength);  // 367
					FloatOptional::unwrapOrDefault(
							float defaultValue);  // 368
					Style::computeFlexEndMargin(
								FlexDirection axis,
								Direction direction,
								float widthSize);  // 1895
					Node::style(); // 1895
					array<float, 2>::operator[](
							size_type __n);  // 66
					LayoutResults::measuredDimension(
								Dimension axis);  // 1897
					Style::positionType(); // 1882
					vector<facebook::yoga::Node::size(); // 1292
					vector<facebook::yoga::Node::_M_range_check(
							size_type __n);  // 1334
					vector<facebook::yoga::Node::operator[](
							size_type __n);  // 1335
					vector<facebook::yoga::Node::at(
						size_type __n);  // 142
					Node::getChild(
						size_t index);  // 36
					Iterator::operator*(); // 1878
					Style::display(); // 1879
				}
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
				Iterator::~Iterator(); // 1982
				operator!=(const Iterator& a,
						const Iterator& b);  // 1839
				LayoutableChildren<facebook::yoga::Node>::LayoutableChildren(
							const Node* node);  // 150
				Node::getLayoutChildren(); // 1839
				__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(); // 168
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(); // 626
				_Fwd_list_node_base::_Fwd_list_node_base(); // 626
				_Fwd_list_impl::_Fwd_list_impl(); // 654
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(); // 803
				forward_list<std::pair<const facebook::yoga::Node::forward_list(); // 30
				Iterator::Iterator(); // 141
				LayoutableChildren<facebook::yoga::Node>::end(); // 1839
				_Fwd_list_node_base::_M_base_ptr(); // 671
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
						_Base_ptr __pos,
						_Base_ptr __last);  // 671
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
				_Fwd_list_impl::~_Fwd_list_impl(); // 671
				_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
				forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
				Iterator::~Iterator(); // 1839
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_get_Node_allocator(); // 930
				__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(
						const __new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >  &);  // 173
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(
						const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a);  // 726
				select_on_container_copy_construction(const allocator_type& __rhs); // 100
				_S_select_on_copy(const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a); // 929
				__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(
						const __new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >  &);  // 173
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(
						const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a);  // 636
				_Fwd_list_node_base::_Fwd_list_node_base(); // 636
				_Fwd_list_impl::_Fwd_list_impl(
						_Node_alloc_type& __a);  // 657
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(
						_Node_alloc_type& __a);  // 930
				_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_const_iterator(
							const _Fwd_list_node_base* __n);  // 1202
				forward_list<std::pair<const facebook::yoga::Node::begin(); // 931
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 929
				_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_const_iterator(
							const _Fwd_list_node_base* __n);  // 1222
				forward_list<std::pair<const facebook::yoga::Node::end(); // 931
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
				construct_at<std::pair<const facebook::yoga::Node*, long unsigned int>, const std::pair<const facebook::yoga::Node*, long unsigned int>&>(pair<const facebook::yoga::Node*, long unsigned int>* __location); // 676
				construct<std::pair<const facebook::yoga::Node*, long unsigned int>, const std::pair<const facebook::yoga::Node*, long unsigned int>&>(allocator_type& __a,
																pair<const facebook::yoga::Node*, long unsigned int>* __p);  // 702
				__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::operator bool(); // 121
				__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~__allocated_ptr(); // 123
				__allocated_obj<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~__allocated_obj(); // 710
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_create_node<const std::pair<const facebook::yoga::Node*, long unsigned int>&>(); // 100
				_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::operator++(); // 98
				forward_list<std::pair<const facebook::yoga::Node::_M_range_initialize<std::_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > >(
																_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > __first,
																_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > __last);  // 931
				forward_list<std::pair<const facebook::yoga::Node::forward_list(
						const forward_list<std::pair<const facebook::yoga::Node*, long unsigned int>, std::allocator<std::pair<const facebook::yo __list);  // 23
				Iterator::Iterator(
					const Iterator  &);  // 45
				vector<facebook::yoga::Node::size(); // 146
				Node::getChildCount(); // 60
				forward_list<std::pair<const facebook::yoga::Node::empty(); // 63
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
						_Base_ptr __pos,
						_Base_ptr __last);  // 1627
				forward_list<std::pair<const facebook::yoga::Node::clear(); // 1008
				forward_list<std::pair<const facebook::yoga::Node::operator=(
						forward_list<std::pair<const facebook::yoga::Node*, long unsigned int>, std::allocator<std::pair<const facebook::yoga::No __list);  // 23
				Iterator::operator=(
						Iterator &);  // 66
				__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(); // 168
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(); // 626
				_Fwd_list_node_base::_Fwd_list_node_base(); // 626
				_Fwd_list_impl::_Fwd_list_impl(); // 654
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(); // 803
				forward_list<std::pair<const facebook::yoga::Node::forward_list(); // 30
				Iterator::Iterator(); // 66
				_Fwd_list_node_base::_M_base_ptr(); // 671
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
						_Base_ptr __pos,
						_Base_ptr __last);  // 671
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
				_Fwd_list_impl::~_Fwd_list_impl(); // 671
				_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
				forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
				Iterator::~Iterator(); // 66
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
				pair<const facebook::yoga::Node::pair<const facebook::yoga::Node*&, long unsigned int&>(
											const Node  *& __x,
											long unsigned int& __y);  // 97
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
				vector<facebook::yoga::Node::_M_range_check(
						size_type __n);  // 1334
				vector<facebook::yoga::Node::at(
					size_type __n);  // 142
				Node::getChild(
					size_t index);  // 104
				Style::display(); // 92
				vector<facebook::yoga::Node::size(); // 146
				Node::getChildCount(); // 93
				Iterator::skipContentsNodes(); // 84
				Iterator::next(); // 40
				Iterator::operator++(); // 46
				Iterator::operator++(
						int);  // 1839
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
				_Fwd_list_node_base::_M_base_ptr(); // 671
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
				_Fwd_list_impl::~_Fwd_list_impl(); // 671
				_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
				forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
				Iterator::~Iterator(); // 1839
				forward_list<std::pair<const facebook::yoga::Node::operator=(
						const forward_list<std::pair<const facebook::yoga::Node*, long unsigned int>, std::allocator<std::pair<const facebook::yo __list);  // 23
				Iterator::operator=(
						const Iterator  &);  // 1877
				operator!=(const Iterator& a,
						const Iterator& b);  // 1877
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_get_Node_allocator(); // 930
				__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(
						const __new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >  &);  // 173
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(
						const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a);  // 726
				select_on_container_copy_construction(const allocator_type& __rhs); // 100
				_S_select_on_copy(const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a); // 929
				__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(
						const __new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >  &);  // 173
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(
						const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a);  // 636
				_Fwd_list_node_base::_Fwd_list_node_base(); // 636
				_Fwd_list_impl::_Fwd_list_impl(
						_Node_alloc_type& __a);  // 657
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(
						_Node_alloc_type& __a);  // 930
				_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_const_iterator(
							const _Fwd_list_node_base* __n);  // 1202
				forward_list<std::pair<const facebook::yoga::Node::begin(); // 931
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 929
				_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_const_iterator(
							const _Fwd_list_node_base* __n);  // 1222
				forward_list<std::pair<const facebook::yoga::Node::end(); // 931
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
				construct_at<std::pair<const facebook::yoga::Node*, long unsigned int>, const std::pair<const facebook::yoga::Node*, long unsigned int>&>(pair<const facebook::yoga::Node*, long unsigned int>* __location); // 676
				construct<std::pair<const facebook::yoga::Node*, long unsigned int>, const std::pair<const facebook::yoga::Node*, long unsigned int>&>(allocator_type& __a,
																pair<const facebook::yoga::Node*, long unsigned int>* __p);  // 702
				__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::operator bool(); // 121
				__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~__allocated_ptr(); // 123
				__allocated_obj<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~__allocated_obj(); // 710
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_create_node<const std::pair<const facebook::yoga::Node*, long unsigned int>&>(); // 100
				_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::operator++(); // 98
				forward_list<std::pair<const facebook::yoga::Node::_M_range_initialize<std::_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > >(
																_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > __first,
																_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > __last);  // 931
				forward_list<std::pair<const facebook::yoga::Node::forward_list(
						const forward_list<std::pair<const facebook::yoga::Node*, long unsigned int>, std::allocator<std::pair<const facebook::yo __list);  // 23
				Iterator::Iterator(
					const Iterator  &);  // 45
				vector<facebook::yoga::Node::size(); // 146
				Node::getChildCount(); // 60
				forward_list<std::pair<const facebook::yoga::Node::empty(); // 63
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
						_Base_ptr __pos,
						_Base_ptr __last);  // 1627
				forward_list<std::pair<const facebook::yoga::Node::clear(); // 1008
				forward_list<std::pair<const facebook::yoga::Node::operator=(
						forward_list<std::pair<const facebook::yoga::Node*, long unsigned int>, std::allocator<std::pair<const facebook::yoga::No __list);  // 23
				Iterator::operator=(
						Iterator &);  // 66
				__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(); // 168
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(); // 626
				_Fwd_list_node_base::_Fwd_list_node_base(); // 626
				_Fwd_list_impl::_Fwd_list_impl(); // 654
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(); // 803
				forward_list<std::pair<const facebook::yoga::Node::forward_list(); // 30
				Iterator::Iterator(); // 66
				_Fwd_list_node_base::_M_base_ptr(); // 671
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
						_Base_ptr __pos,
						_Base_ptr __last);  // 671
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
				_Fwd_list_impl::~_Fwd_list_impl(); // 671
				_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
				forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
				Iterator::~Iterator(); // 66
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
				Style::display(); // 82
				vector<facebook::yoga::Node::operator[](
						size_type __n);  // 1335
				vector<facebook::yoga::Node::at(
					size_type __n);  // 142
				Node::getChild(
					size_t index);  // 82
				Iterator::next(); // 40
				Iterator::operator++(); // 46
				Iterator::operator++(
						int);  // 1877
				_Fwd_list_node_base::_M_base_ptr(); // 671
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
				Iterator::~Iterator(); // 1877
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
				construct_at<std::pair<const facebook::yoga::Node*, long unsigned int>, const std::pair<const facebook::yoga::Node*, long unsigned int>&>(pair<const facebook::yoga::Node*, long unsigned int>* __location); // 676
				construct<std::pair<const facebook::yoga::Node*, long unsigned int>, const std::pair<const facebook::yoga::Node*, long unsigned int>&>(allocator_type& __a,
																pair<const facebook::yoga::Node*, long unsigned int>* __p);  // 702
				__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::operator bool(); // 121
				__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~__allocated_ptr(); // 123
				__allocated_obj<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~__allocated_obj(); // 710
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_create_node<const std::pair<const facebook::yoga::Node*, long unsigned int>&>(); // 100
				_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::operator++(); // 98
				forward_list<std::pair<const facebook::yoga::Node::_M_range_initialize<std::_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > >(
																_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > __first,
																_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > __last);  // 931
				__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(
						const __new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >  &);  // 173
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(
						const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a);  // 636
				_Fwd_list_node_base::_Fwd_list_node_base(); // 636
				_Fwd_list_impl::_Fwd_list_impl(
						_Node_alloc_type& __a);  // 657
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(
						_Node_alloc_type& __a);  // 930
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_get_Node_allocator(); // 930
				__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(
						const __new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >  &);  // 173
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(
						const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a);  // 726
				select_on_container_copy_construction(const allocator_type& __rhs); // 100
				_S_select_on_copy(const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a); // 929
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 929
				_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_const_iterator(
							const _Fwd_list_node_base* __n);  // 1222
				forward_list<std::pair<const facebook::yoga::Node::end(); // 931
				_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_const_iterator(
							const _Fwd_list_node_base* __n);  // 1202
				forward_list<std::pair<const facebook::yoga::Node::begin(); // 931
				forward_list<std::pair<const facebook::yoga::Node::forward_list(
						const forward_list<std::pair<const facebook::yoga::Node*, long unsigned int>, std::allocator<std::pair<const facebook::yo __list);  // 23
				Iterator::Iterator(
					const Iterator  &);  // 1832
				_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_const_iterator(
							const _Fwd_list_node_base* __n);  // 1202
				forward_list<std::pair<const facebook::yoga::Node::begin(); // 931
				__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(
						const __new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >  &);  // 173
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(
						const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a);  // 636
				_Fwd_list_node_base::_Fwd_list_node_base(); // 636
				_Fwd_list_impl::_Fwd_list_impl(
						_Node_alloc_type& __a);  // 657
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(
						_Node_alloc_type& __a);  // 930
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
				construct_at<std::pair<const facebook::yoga::Node*, long unsigned int>, const std::pair<const facebook::yoga::Node*, long unsigned int>&>(pair<const facebook::yoga::Node*, long unsigned int>* __location); // 676
				construct<std::pair<const facebook::yoga::Node*, long unsigned int>, const std::pair<const facebook::yoga::Node*, long unsigned int>&>(allocator_type& __a,
																pair<const facebook::yoga::Node*, long unsigned int>* __p);  // 702
				__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::operator bool(); // 121
				__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~__allocated_ptr(); // 123
				__allocated_obj<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~__allocated_obj(); // 710
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_create_node<const std::pair<const facebook::yoga::Node*, long unsigned int>&>(); // 100
				_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::operator++(); // 98
				forward_list<std::pair<const facebook::yoga::Node::_M_range_initialize<std::_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > >(
																_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > __first,
																_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > __last);  // 931
				_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_get_Node_allocator(); // 930
				__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(
						const __new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >  &);  // 173
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(
						const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a);  // 726
				select_on_container_copy_construction(const allocator_type& __rhs); // 100
				_S_select_on_copy(const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a); // 929
				allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 929
				_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_const_iterator(
							const _Fwd_list_node_base* __n);  // 1222
				forward_list<std::pair<const facebook::yoga::Node::end(); // 931
				forward_list<std::pair<const facebook::yoga::Node::forward_list(
						const forward_list<std::pair<const facebook::yoga::Node*, long unsigned int>, std::allocator<std::pair<const facebook::yo __list);  // 23
				Iterator::Iterator(
					const Iterator  &);  // 1833
				forward_list<std::pair<const facebook::yoga::Node::operator=(
						const forward_list<std::pair<const facebook::yoga::Node*, long unsigned int>, std::allocator<std::pair<const facebook::yo __list);  // 23
				Iterator::operator=(
						const Iterator  &);  // 1873
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
				_Fwd_list_node_base::_M_base_ptr(); // 671
				_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
				forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
				Iterator::~Iterator(); // 1982
			}
		}
		Style::alignContent(); // 1793
		_Fwd_list_node_base::_M_base_ptr(); // 671
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
		Iterator::~Iterator(); // 1830
		LayoutableChildren<facebook::yoga::Node>::LayoutableChildren(
					const Node* node);  // 150
		Node::getLayoutChildren(); // 1830
		fallbackAlignment(Align align); // 1794
		dimension(FlexDirection flexDirection); // 1772
		FloatOptional::unwrap(); // 1778
	}
	{
		Node* child; // 2081
		LayoutableChildren<facebook::yoga::Node>& __for_range; // 30373
		Iterator __for_begin; // 10453
		Iterator __for_end; // 10453
		LayoutableChildren<facebook::yoga::Node>::LayoutableChildren(
					const Node* node);  // 150
		Node::getLayoutChildren(); // 2081
		dimension(FlexDirection flexDirection); // 2084
		__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(); // 168
		allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(); // 626
		_Fwd_list_node_base::_Fwd_list_node_base(); // 626
		_Fwd_list_impl::_Fwd_list_impl(); // 654
		_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(); // 803
		forward_list<std::pair<const facebook::yoga::Node::forward_list(); // 30
		Iterator::Iterator(); // 141
		LayoutableChildren<facebook::yoga::Node>::end(); // 2081
		vector<facebook::yoga::Node::size(); // 1292
		vector<facebook::yoga::Node::_M_range_check(
				size_type __n);  // 1334
		vector<facebook::yoga::Node::operator[](
				size_type __n);  // 1335
		vector<facebook::yoga::Node::at(
			size_type __n);  // 142
		Node::getChild(
			size_t index);  // 36
		Iterator::operator*(); // 2081
		Style::positionType(); // 2082
		flexStartEdge(FlexDirection flexDirection); // 2083
		array<float, 2>::operator[](
				size_type __n);  // 66
		LayoutResults::measuredDimension(
					Dimension axis);  // 2084
		array<float, 4>::operator[](
				size_type __n);  // 74
		LayoutResults::position(
			PhysicalEdge physicalEdge);  // 2085
		array<float, 2>::operator[](
				size_type __n);  // 66
		LayoutResults::measuredDimension(
					Dimension axis);  // 2086
		Iterator::operator++(); // 2081
		operator!=(const Iterator& a,
				const Iterator& b);  // 2081
		forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
		Iterator::~Iterator(); // 2089
		forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
		Iterator::~Iterator(); // 2089
	}
	{
		const bool  needsMainTrailingPos; // 2094
		const bool  needsCrossTrailingPos; // 2095
		{
			Node* child; // 2098
			LayoutableChildren<facebook::yoga::Node>& __for_range; // 30373
			Iterator __for_begin; // 10453
			Iterator __for_end; // 10453
			LayoutableChildren<facebook::yoga::Node>::LayoutableChildren(
						const Node* node);  // 150
			Node::getLayoutChildren(); // 2098
			dimension(FlexDirection flexDirection); // 25
			array<float, 2>::operator[](
					size_type __n);  // 66
			LayoutResults::measuredDimension(
						Dimension axis);  // 25
			array<float, 2>::operator[](
					size_type __n);  // 66
			LayoutResults::measuredDimension(
						Dimension axis);  // 26
			getPositionOfOppositeEdge(float position,
							FlexDirection axis,
							const Node* containingNode,
							const Node* node);  // 33
			flexEndEdge(FlexDirection flexDirection); // 33
			flexStartEdge(FlexDirection flexDirection); // 33
			array<float, 4>::operator[](
					size_type __n);  // 74
			LayoutResults::position(
				PhysicalEdge physicalEdge);  // 33
			setChildTrailingPosition(const Node* node,
						const Node* child,
						const FlexDirection  axis);  // 2107
			__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(); // 168
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(); // 626
			_Fwd_list_node_base::_Fwd_list_node_base(); // 626
			_Fwd_list_impl::_Fwd_list_impl(); // 654
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(); // 803
			forward_list<std::pair<const facebook::yoga::Node::forward_list(); // 30
			Iterator::Iterator(); // 141
			LayoutableChildren<facebook::yoga::Node>::end(); // 2098
			vector<facebook::yoga::Node::size(); // 1292
			vector<facebook::yoga::Node::_M_range_check(
					size_type __n);  // 1334
			vector<facebook::yoga::Node::operator[](
					size_type __n);  // 1335
			vector<facebook::yoga::Node::at(
				size_type __n);  // 142
			Node::getChild(
				size_t index);  // 36
			Iterator::operator*(); // 2098
			Style::display(); // 2102
			Style::positionType(); // 2103
			array<float, 4>::operator[](
					size_type __n);  // 74
			LayoutResults::position(
				PhysicalEdge physicalEdge);  // 33
			array<float, 2>::operator[](
					size_type __n);  // 66
			LayoutResults::measuredDimension(
						Dimension axis);  // 25
			array<float, 2>::operator[](
					size_type __n);  // 66
			LayoutResults::measuredDimension(
						Dimension axis);  // 26
			getPositionOfOppositeEdge(float position,
							FlexDirection axis,
							const Node* containingNode,
							const Node* node);  // 33
			setChildTrailingPosition(const Node* node,
						const Node* child,
						const FlexDirection  axis);  // 2111
			Iterator::operator++(); // 2098
			operator!=(const Iterator& a,
					const Iterator& b);  // 2098
			_Fwd_list_node_base::_M_base_ptr(); // 671
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
					_Base_ptr __pos,
					_Base_ptr __last);  // 671
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
			_Fwd_list_impl::~_Fwd_list_impl(); // 671
			_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
			forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
			Iterator::~Iterator(); // 2113
			_Fwd_list_node_base::_M_base_ptr(); // 671
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
			Iterator::~Iterator(); // 2113
		}
		needsTrailingPosition(const FlexDirection axis); // 2094
		needsTrailingPosition(const FlexDirection axis); // 2095
		Style::positionType(); // 2118
		Node::alwaysFormsContainingBlock(); // 2119
	}
	resolveDirection(const FlexDirection  flexDirection,
			const Direction  direction);  // 1245
	Node::style(); // 1254
	inlineStartEdge(FlexDirection flexDirection,
			Direction direction);  // 357
	FloatOptional::unwrap(); // 79
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 358
	FloatOptional::unwrapOrDefault(
			float defaultValue);  // 359
	Style::computeInlineStartMargin(
				FlexDirection axis,
				Direction direction,
				float widthSize);  // 1254
	inlineEndEdge(FlexDirection flexDirection,
			Direction direction);  // 375
	FloatOptional::unwrap(); // 79
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 376
	FloatOptional::unwrapOrDefault(
			float defaultValue);  // 377
	Style::computeInlineEndMargin(
				FlexDirection axis,
				Direction direction,
				float widthSize);  // 1257
	FloatOptional::unwrap(); // 79
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 358
	FloatOptional::unwrapOrDefault(
			float defaultValue);  // 359
	Style::computeInlineStartMargin(
				FlexDirection axis,
				Direction direction,
				float widthSize);  // 1260
	FloatOptional::unwrap(); // 79
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 376
	FloatOptional::unwrapOrDefault(
			float defaultValue);  // 377
	Style::computeInlineEndMargin(
				FlexDirection axis,
				Direction direction,
				float widthSize);  // 1263
	Style::computePadding(
			PhysicalEdge edge,
			Direction direction);  // 694
	Style::computePadding(
			PhysicalEdge edge,
			Direction direction);  // 425
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 426
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 424
	Style::computeInlineStartPadding(
					FlexDirection axis,
					Direction direction,
					float widthSize);  // 1283
	Style::computePadding(
			PhysicalEdge edge,
			Direction direction);  // 694
	Style::computePadding(
			PhysicalEdge edge,
			Direction direction);  // 447
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 448
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 446
	Style::computeInlineEndPadding(
				FlexDirection axis,
				Direction direction,
				float widthSize);  // 1287
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 45
	StyleValueHandle::isDefined(); // 627
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 45
	StyleValueHandle::isDefined(); // 629
	array<facebook::yoga::StyleValueHandle, 9>::operator[](
			size_type __n);  // 632
	Style::computeTopEdge(
			const Edges& edges);  // 626
	Style::computeTopEdge(
			const Edges& edges);  // 699
	Style::computePadding(
			PhysicalEdge edge,
			Direction direction);  // 425
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 426
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 424
	Style::computeInlineStartPadding(
					FlexDirection axis,
					Direction direction,
					float widthSize);  // 1291
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 45
	StyleValueHandle::isDefined(); // 655
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 45
	StyleValueHandle::isDefined(); // 629
	array<facebook::yoga::StyleValueHandle, 9>::operator[](
			size_type __n);  // 632
	Style::computeTopEdge(
			const Edges& edges);  // 626
	Style::computeBottomEdge(
				const Edges& edges);  // 703
	Style::computePadding(
			PhysicalEdge edge,
			Direction direction);  // 447
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 448
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 446
	Style::computeInlineEndPadding(
				FlexDirection axis,
				Direction direction,
				float widthSize);  // 1295
	Node::hasMeasureFunc(); // 1300
	vector<facebook::yoga::Node::size(); // 155
	{
		size_t count; // 157
		{
			Iterator iter; // 158
			LayoutableChildren<facebook::yoga::Node>::LayoutableChildren(
						const Node* node);  // 150
			Node::getLayoutChildren(); // 158
			LayoutableChildren<facebook::yoga::Node>::LayoutableChildren(
						const Node* node);  // 150
			Node::getLayoutChildren(); // 159
			__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(); // 168
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(); // 626
			_Fwd_list_node_base::_Fwd_list_node_base(); // 626
			_Fwd_list_impl::_Fwd_list_impl(); // 654
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(); // 803
			forward_list<std::pair<const facebook::yoga::Node::forward_list(); // 30
			Iterator::Iterator(); // 141
			LayoutableChildren<facebook::yoga::Node>::end(); // 159
			operator!=(const Iterator& a,
					const Iterator& b);  // 159
			_Fwd_list_node_base::_M_base_ptr(); // 671
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
					_Base_ptr __pos,
					_Base_ptr __last);  // 671
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
			_Fwd_list_impl::~_Fwd_list_impl(); // 671
			_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
			forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
			Iterator::~Iterator(); // 159
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_get_Node_allocator(); // 930
			__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(
					const __new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >  &);  // 173
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(
					const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a);  // 726
			select_on_container_copy_construction(const allocator_type& __rhs); // 100
			_S_select_on_copy(const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a); // 929
			__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(
					const __new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >  &);  // 173
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(
					const allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node*, long unsigned int> > >& __a);  // 636
			_Fwd_list_node_base::_Fwd_list_node_base(); // 636
			_Fwd_list_impl::_Fwd_list_impl(
					_Node_alloc_type& __a);  // 657
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(
					_Node_alloc_type& __a);  // 930
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
			construct_at<std::pair<const facebook::yoga::Node*, long unsigned int>, const std::pair<const facebook::yoga::Node*, long unsigned int>&>(pair<const facebook::yoga::Node*, long unsigned int>* __location); // 676
			construct<std::pair<const facebook::yoga::Node*, long unsigned int>, const std::pair<const facebook::yoga::Node*, long unsigned int>&>(allocator_type& __a,
																pair<const facebook::yoga::Node*, long unsigned int>* __p);  // 702
			__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::operator bool(); // 121
			__allocated_ptr<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~__allocated_ptr(); // 123
			__allocated_obj<std::allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~__allocated_obj(); // 710
			_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_create_node<const std::pair<const facebook::yoga::Node*, long unsigned int>&>(); // 100
			_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::operator++(); // 98
			forward_list<std::pair<const facebook::yoga::Node::_M_range_initialize<std::_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > >(
																_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > __first,
																_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node*, long unsigned int> > __last);  // 931
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 929
			_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_const_iterator(
						const _Fwd_list_node_base* __n);  // 1222
			forward_list<std::pair<const facebook::yoga::Node::end(); // 931
			_Fwd_list_const_iterator<std::pair<const facebook::yoga::Node::_Fwd_list_const_iterator(
						const _Fwd_list_node_base* __n);  // 1202
			forward_list<std::pair<const facebook::yoga::Node::begin(); // 931
			forward_list<std::pair<const facebook::yoga::Node::forward_list(
					const forward_list<std::pair<const facebook::yoga::Node*, long unsigned int>, std::allocator<std::pair<const facebook::yo __list);  // 23
			Iterator::Iterator(
				const Iterator  &);  // 45
			Iterator::operator++(); // 46
			Iterator::operator++(
					int);  // 160
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
			_Fwd_list_node_base::_M_base_ptr(); // 671
			allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
			_Fwd_list_impl::~_Fwd_list_impl(); // 671
			_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
			forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
			Iterator::~Iterator(); // 158
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
			_Fwd_list_node_base::_M_base_ptr(); // 671
			_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
			forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
			Iterator::~Iterator(); // 162
		}
	}
	Node::getLayoutChildCount(); // 1319
	Style::flexDirection(); // 1367
	resolveDirection(const FlexDirection  flexDirection,
			const Direction  direction);  // 31
	resolveDirection(const FlexDirection  flexDirection,
			const Direction  direction);  // 1367
	resolveCrossDirection(const FlexDirection  flexDirection,
				const Direction  direction);  // 1368
	isRow(const FlexDirection flexDirection); // 1369
	Style::flexWrap(); // 1370
	flexStartEdge(FlexDirection flexDirection); // 414
	FloatOptional::unwrap(); // 79
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 415
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 413
	Style::computeFlexStartPadding(
				FlexDirection axis,
				Direction direction,
				float widthSize);  // 465
	FloatOptional::unwrap(); // 79
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 382
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 381
	Style::computeFlexStartBorder(
				FlexDirection axis,
				Direction direction);  // 466
	Style::computeFlexStartPaddingAndBorder(
					FlexDirection axis,
					Direction direction,
					float widthSize);  // 1380
	LayoutableChildren<facebook::yoga::Node>::LayoutableChildren(
				const Node* node);  // 150
	Node::getLayoutChildren(); // 1452
	isRow(const FlexDirection flexDirection); // 512
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 45
	StyleValueHandle::isDefined(); // 601
	array<facebook::yoga::StyleValueHandle, 3>::operator[](
			size_type __n);  // 604
	Style::computeRowGap(); // 512
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 513
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 513
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 45
	StyleValueHandle::isDefined(); // 593
	Style::computeColumnGap(); // 512
	Style::computeGapForAxis(
				FlexDirection axis,
				float ownerSize);  // 1461
	LayoutableChildren<facebook::yoga::Node>::LayoutableChildren(
				const Node* node);  // 150
	Node::getLayoutChildren(); // 1465
	__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(); // 168
	allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(); // 626
	_Fwd_list_node_base::_Fwd_list_node_base(); // 626
	_Fwd_list_impl::_Fwd_list_impl(); // 654
	_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(); // 803
	forward_list<std::pair<const facebook::yoga::Node::forward_list(); // 30
	Iterator::Iterator(); // 141
	LayoutableChildren<facebook::yoga::Node>::end(); // 1465
	operator!=(const Iterator& a,
			const Iterator& b);  // 1465
	_Fwd_list_node_base::_M_base_ptr(); // 671
	_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
			_Base_ptr __pos,
			_Base_ptr __last);  // 671
	allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
	_Fwd_list_impl::~_Fwd_list_impl(); // 671
	_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
	forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
	Iterator::~Iterator(); // 1465
	Style::overflow(); // 2010
	Style::flexWrap(); // 2080
	_Fwd_list_node_base::_M_base_ptr(); // 671
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
	Iterator::~Iterator(); // 2134
	measureNodeWithFixedSize(const Node* node,
				const Direction  direction,
				const float  availableWidth,
				const float  availableHeight,
				const SizingMode  widthSizingMode,
				const SizingMode  heightSizingMode,
				const float  ownerWidth,
				const float  ownerHeight);  // 1340
	dimension(FlexDirection flexDirection); // 2048
	dimension(FlexDirection flexDirection); // 2014
	Style::overflow(); // 2044
	FloatOptional::FloatOptional(
			float value);  // 2070
	FloatOptional::unwrap(); // 2061
	min<float>(const float& __a,
			const float& __b);  // 51
	minOrDefined<float, float>(float a,
					float b);  // 2061
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 2061
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 45
	StyleValueHandle::isDefined(); // 601
	array<facebook::yoga::StyleValueHandle, 3>::operator[](
			size_type __n);  // 604
	Style::computeRowGap(); // 512
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 513
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 513
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 45
	StyleValueHandle::isDefined(); // 593
	array<facebook::yoga::StyleValueHandle, 3>::operator[](
			size_type __n);  // 596
	Style::computeColumnGap(); // 512
	Style::computeGapForAxis(
				FlexDirection axis,
				float ownerSize);  // 1436
	array<float, 4>::operator[](
			size_type __n);  // 98
	LayoutResults::padding(
		PhysicalEdge physicalEdge);  // 394
	array<float, 4>::operator[](
			size_type __n);  // 98
	LayoutResults::padding(
		PhysicalEdge physicalEdge);  // 395
	array<float, 4>::operator[](
			size_type __n);  // 90
	LayoutResults::border(
		PhysicalEdge physicalEdge);  // 396
	array<float, 4>::operator[](
			size_type __n);  // 90
	LayoutResults::border(
		PhysicalEdge physicalEdge);  // 396
	array<float, 4>::operator[](
			size_type __n);  // 98
	LayoutResults::padding(
		PhysicalEdge physicalEdge);  // 406
	array<float, 4>::operator[](
			size_type __n);  // 98
	LayoutResults::padding(
		PhysicalEdge physicalEdge);  // 407
	array<float, 4>::operator[](
			size_type __n);  // 90
	LayoutResults::border(
		PhysicalEdge physicalEdge);  // 408
	array<float, 4>::operator[](
			size_type __n);  // 90
	LayoutResults::border(
		PhysicalEdge physicalEdge);  // 408
	measureNodeWithoutChildren(const Node* node,
					const Direction  direction,
					const float  availableWidth,
					const float  availableHeight,
					const SizingMode  widthSizingMode,
					const SizingMode  heightSizingMode,
					const float  ownerWidth,
					const float  ownerHeight);  // 1321
	FloatOptional::FloatOptional(
			float value);  // 2035
	FloatOptional::unwrap(); // 2027
	min<float>(const float& __a,
			const float& __b);  // 51
	minOrDefined<float, float>(float a,
					float b);  // 2027
	max<float>(const float& __a,
			const float& __b);  // 42
	maxOrDefined<float, float>(float a,
					float b);  // 2027
} /* size: 0, variables: 36, inline expansions: 181 (5581 bytes) */

// <029CE5B6> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:2144
// variables: 9
// function calls: 35
void calculateLayoutInternal(const Node* node, const float availableWidth, const float availableHeight, const Direction ownerDirection, const SizingMode widthSizingMode, const SizingMode heightSizingMode, const float ownerWidth, const float ownerHeight, const bool performLayout, const LayoutPassReason reason, LayoutData& layoutMarkerData, uint32_t depth, const uint32_t generationCount)
{
	LayoutResults* layout; // 2158
	const bool  needToVisitNode; // 2162
	CachedMeasurement* cachedResults; // 2178
	LayoutType layoutType; // 2328
	{
		const float  marginAxisRow; // 2189
		const float  marginAxisColumn; // 2191
		{
			size_t i; // 2212
			Node::getConfig(); // 2213
			array<facebook::yoga::CachedMeasurement, 8>::operator[](
					size_type __n);  // 2227
		}
		Node::style(); // 2190
		Node::getConfig(); // 2195
	}
	{
		uint32_t i; // 2242
		abs(float __x); // 61
		inexactEquals(float a,
				float b);  // 2245
		array<facebook::yoga::CachedMeasurement, 8>::operator[](
				size_type __n);  // 2249
		abs(float __x); // 61
		inexactEquals(float a,
				float b);  // 2243
	}
	{
		CachedMeasurement* newCacheEntry; // 2292
		max<unsigned int>(const unsigned int& __a,
					const unsigned int& __b);  // 2283
		array<float, 2>::operator[](
				size_type __n);  // 66
		LayoutResults::measuredDimension(
					Dimension axis);  // 2308
		array<float, 2>::operator[](
				size_type __n);  // 66
		LayoutResults::measuredDimension(
					Dimension axis);  // 2310
		array<facebook::yoga::CachedMeasurement, 8>::operator[](
				size_type __n);  // 2299
	}
	Node::isDirty(); // 2163
	Node::hasMeasureFunc(); // 2188
	abs(float __x); // 61
	inexactEquals(float a,
			float b);  // 2233
	abs(float __x); // 61
	inexactEquals(float a,
			float b);  // 2235
	array<float, 2>::operator[](
			size_type __n);  // 70
	LayoutResults::setMeasuredDimension(
				Dimension axis,
				float dimension);  // 2256
	array<float, 2>::operator[](
			size_type __n);  // 70
	LayoutResults::setMeasuredDimension(
				Dimension axis,
				float dimension);  // 2258
	Node::getConfig(); // 2280
	array<float, 2>::operator[](
			size_type __n);  // 66
	LayoutResults::measuredDimension(
				Dimension axis);  // 2315
	array<float, 2>::operator[](
			size_type __n);  // 66
	LayoutResults::measuredDimension(
				Dimension axis);  // 2318
	Node::setHasNewLayout(
			bool hasNewLayout);  // 2322
	Data::Data<(
						const TypedData<(facebook::yoga::Event::Type)2>& data);  // 89
	publish<(facebook::yoga::Event::Type)2>(YGNodeConstRef node,
						const TypedData<(facebook::yoga::Event::Type)2>& eventData); // 2337
	Node::getConfig(); // 2164
} /* size: 2240, variables: 4, inline expansions: 19 (193 bytes) */

// <029CDB72> ../thirdparty/yoga/algorithm/CalculateLayout.cpp:2342
// variables: 7
// function calls: 32
void calculateLayout(const Node* node, const float ownerWidth, const float ownerHeight, const Direction ownerDirection)
{
	LayoutData markerData; // 2348
	const Direction  direction; // 2355
	float width; // 2356
	SizingMode widthSizingMode; // 2357
	const Style& style; // 2358
	float height; // 2384
	SizingMode heightSizingMode; // 2385
	Data::Data<(
						const TypedData<(facebook::yoga::Event::Type)3>& data);  // 89
	publish<(facebook::yoga::Event::Type)3>(YGNodeConstRef node,
						const TypedData<(facebook::yoga::Event::Type)3>& eventData); // 2347
	__atomic_base<unsigned int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 2353
	Node::getProcessedDimension(
				Dimension dimension);  // 91
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 91
	Node::hasDefiniteLength(
				Dimension dimension,
				float ownerSize);  // 2359
	Node::style(); // 2358
	FloatOptional::isDefined(); // 2372
	Style::boxSizing(); // 186
	FloatOptional::FloatOptional(
			float value);  // 192
	FloatOptional::FloatOptional(
			float value);  // 69
	operator+(FloatOptional lhs,
			FloatOptional rhs);  // 196
	Node::getResolvedDimension(
				Direction direction,
				Dimension dimension,
				float referenceLength,
				float ownerWidth);  // 2361
	Node::getProcessedDimension(
				Dimension dimension);  // 91
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 91
	Node::hasDefiniteLength(
				Dimension dimension,
				float ownerSize);  // 2386
	FloatOptional::isDefined(); // 2399
	__atomic_base<unsigned int>::load(
		memory_order __m);  // 2410
	Data::Data<(
						const TypedData<(facebook::yoga::Event::Type)4>& data);  // 89
	publish<(facebook::yoga::Event::Type)4>(YGNodeConstRef node,
						const TypedData<(facebook::yoga::Event::Type)4>& eventData); // 2428
	Style::boxSizing(); // 186
	FloatOptional::FloatOptional(
			float value);  // 192
	FloatOptional::FloatOptional(
			float value);  // 69
	operator+(FloatOptional lhs,
			FloatOptional rhs);  // 196
	Node::getResolvedDimension(
				Direction direction,
				Dimension dimension,
				float referenceLength,
				float ownerWidth);  // 2388
	LayoutResults::direction(); // 2424
	FloatOptional::unwrap(); // 2403
	FloatOptional::unwrap(); // 2376
} /* size: 1013, variables: 7, inline expansions: 30 (507 bytes) */

