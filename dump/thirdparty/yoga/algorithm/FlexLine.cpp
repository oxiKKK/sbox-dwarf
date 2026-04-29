
//
// thirdparty/yoga/algorithm/FlexLine.cpp
//
//	referenced by: libengine2.so
//
//	function: 1
//

// <02A20770> ../thirdparty/yoga/algorithm/FlexLine.cpp:19
// variables: 47
// function calls: 723
void calculateFlexLine(const Node* node, const Direction ownerDirection, const float ownerWidth, const float mainAxisownerSize, const float availableInnerWidth, const float availableInnerMainDim, Iterator& iterator, const size_t lineCount)
{
	vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> > itemsInFlow; // 28
	float sizeConsumed; // 31
	float totalFlexGrowFactors; // 32
	float totalFlexShrinkScaledFactors; // 33
	size_t numberOfAutoMargins; // 34
	Node* firstElementInLine; // 35
	float sizeConsumedIncludingMinConstraint; // 37
	const Direction  direction; // 38
	const FlexDirection  mainAxis; // 39
	const bool  isNodeFlexWrap; // 41
	const float  gap; // 42
	const Iterator  childrenEnd; // 45
	{
		Node* child; // 48
		const float  childMarginMainAxis; // 66
		const float  childLeadingGapMainAxis; // 68
		const float  flexBasisWithMinAndMaxConstraints; // 70
		vector<facebook::yoga::Node::size(); // 1292
		vector<facebook::yoga::Node::_M_range_check(
				size_type __n);  // 1334
		vector<facebook::yoga::Node::operator[](
				size_type __n);  // 1335
		vector<facebook::yoga::Node::at(
			size_type __n);  // 142
		Node::getChild(
			size_t index);  // 36
		Iterator::operator*(); // 48
		Style::display(); // 49
		Style::positionType(); // 50
		flexStartEdge(FlexDirection flexDirection); // 517
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
				StyleValueHandle handle);  // 628
		Style::computeTopEdge(
				const Edges& edges);  // 684
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 617
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 615
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 611
		Style::computeLeftEdge(
				const Edges& edges,
				Direction layoutDirection);  // 682
		Style::computeMargin(
				PhysicalEdge edge,
				Direction direction);  // 679
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 619
		array<facebook::yoga::StyleValueHandle, 9>::operator[](
				size_type __n);  // 622
		Style::computeLeftEdge(
				const Edges& edges,
				Direction layoutDirection);  // 608
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 645
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 643
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 639
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
				Direction direction);  // 517
		Style::flexStartMarginIsAuto(
					FlexDirection axis,
					Direction direction);  // 58
		flexEndEdge(FlexDirection flexDirection); // 521
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
		{
			float value; // 59
			StyleValueHandle::value(); // 60
			points(float value); // 64
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
				StyleValueHandle handle);  // 628
		Style::computeTopEdge(
				const Edges& edges);  // 684
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 617
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 619
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
				StyleValueHandle handle);  // 622
		Style::computeLeftEdge(
				const Edges& edges,
				Direction layoutDirection);  // 608
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 615
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 611
		Style::computeLeftEdge(
				const Edges& edges,
				Direction layoutDirection);  // 682
		Style::computeMargin(
				PhysicalEdge edge,
				Direction direction);  // 679
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 619
		array<facebook::yoga::StyleValueHandle, 9>::operator[](
				size_type __n);  // 622
		Style::computeLeftEdge(
				const Edges& edges,
				Direction layoutDirection);  // 608
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 645
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 643
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 639
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
				Direction direction);  // 521
		Style::flexEndMarginIsAuto(
					FlexDirection axis,
					Direction direction);  // 61
		Node::setLineIndex(
				size_t lineIndex);  // 65
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
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 45
		StyleValueHandle::isDefined(); // 619
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
				StyleValueHandle handle);  // 620
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
			bit_cast<float, unsigned int>(const unsigned int& __from); // 60
			StyleValueHandle::value(); // 60
			unpackInlineInteger(uint16_t value); // 61
			isinf<float>(float value); // 41
			percent(float value); // 65
			isinf<float>(float value); // 35
			points(float value); // 64
		}
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 51
		StyleValuePool::getLength(
				StyleValueHandle handle);  // 622
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
			bit_cast<float, unsigned int>(const unsigned int& __from); // 60
			isinf<float>(float value); // 35
			points(float value); // 64
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
		array<facebook::yoga::StyleValueHandle, 9>::operator[](
				size_type __n);  // 646
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
		{
			float value; // 59
			isinf<float>(float value); // 35
			points(float value); // 64
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
		StyleValueHandle::type(); // 41
		StyleValueHandle::isUndefined(); // 51
		StyleValuePool::getLength(
				StyleValueHandle handle);  // 622
		Style::computeLeftEdge(
				const Edges& edges,
				Direction layoutDirection);  // 608
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
			StyleValueHandle::value(); // 60
			unpackInlineInteger(uint16_t value); // 61
			isinf<float>(float value); // 41
			percent(float value); // 65
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
			bit_cast<float, unsigned int>(const unsigned int& __from); // 60
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
					float widthSize);  // 67
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
				FloatOptional rhs);  // 52
		FloatOptional::unwrap(); // 73
		operator>(FloatOptional lhs,
				FloatOptional rhs);  // 52
		operator==(FloatOptional lhs,
				FloatOptional rhs);  // 81
		operator>=(FloatOptional lhs,
				FloatOptional rhs);  // 56
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
					float ownerWidth);  // 48
		boundAxisWithinMinAndMax(const Node* node,
					const Direction  direction,
					const FlexDirection  axis,
					const FloatOptional  value,
					const float  axisSize,
					const float  widthSize);  // 71
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1029
		vector<facebook::yoga::Node::end(); // 1224
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1009
		vector<facebook::yoga::Node::begin(); // 1224
		vector<facebook::yoga::Node::empty(); // 86
		construct_at<facebook::yoga::Node*, facebook::yoga::Node* const&>(Node** __location); // 676
		construct<facebook::yoga::Node*, facebook::yoga::Node* const&>(allocator_type& __a,
										Node** __p);  // 1421
		vector<facebook::yoga::Node::size(); // 2199
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 2202
		vector<facebook::yoga::Node::_M_check_len(
				size_type __n,
				const char* __s);  // 566
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node** const& __i);  // 999
		vector<facebook::yoga::Node::begin(); // 571
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node** const& __i);  // 1019
		vector<facebook::yoga::Node::end(); // 571
		__new_allocator<facebook::yoga::Node::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<facebook::yoga::Node::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<facebook::yoga::Node::_M_allocate(
				size_t __n);  // 572
		{
			_Guard_alloc __guard; // 576
			construct_at<facebook::yoga::Node*, facebook::yoga::Node* const&>(Node** __location); // 676
			construct<facebook::yoga::Node*, facebook::yoga::Node* const&>(allocator_type& __a,
											Node** __p);  // 586
			_Guard_alloc::_Guard_alloc(
					pointer __s,
					size_type __l,
					_Base& __vect);  // 576
			__relocate_a_1<facebook::yoga::Node*, facebook::yoga::Node*>(Node** __first,
											Node** __last,
											Node** __result,
											allocator<facebook::yoga::Node*>& __alloc);  // 1359
			__relocate_a<facebook::yoga::Node**, facebook::yoga::Node**, std::allocator<facebook::yoga::Node*> >(Node** __first,
																Node** __last,
																Node** __result,
																allocator<facebook::yoga::Node*>& __alloc);  // 539
			_S_relocate(pointer __first,
					pointer __last,
					pointer __result,
					_Tp_alloc_type& __alloc);  // 599
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
					size_t __n);  // 1883
			_Guard_alloc::~_Guard_alloc(); // 640
		}
		vector<facebook::yoga::Node::_M_realloc_append<facebook::yoga::Node* const&>(); // 1427
		vector<facebook::yoga::Node::push_back(
				const value_type& __x);  // 104
		FloatOptional::unwrap(); // 101
	}
	vector<facebook::yoga::Node::size(); // 146
	Node::getChildCount(); // 29
	{
		const size_type  __old_size; // 74
		pointer __tmp; // 75
		__new_allocator<facebook::yoga::Node::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<facebook::yoga::Node::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<facebook::yoga::Node::_M_allocate(
				size_t __n);  // 79
	}
	vector<facebook::yoga::Node::reserve(
		size_type __n);  // 29
	Style::flexDirection(); // 40
	Style::flexWrap(); // 41
	resolveDirection(const FlexDirection  flexDirection,
			const Direction  direction);  // 31
	resolveDirection(const FlexDirection  flexDirection,
			const Direction  direction);  // 40
	isRow(const FlexDirection flexDirection); // 512
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 45
	StyleValueHandle::isDefined(); // 593
	Style::computeColumnGap(); // 512
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
	Style::computeGapForAxis(
				FlexDirection axis,
				float ownerSize);  // 43
	LayoutableChildren<facebook::yoga::Node>::LayoutableChildren(
				const Node* node);  // 150
	Node::getLayoutChildren(); // 45
	__new_allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::__new_allocator(); // 168
	allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::allocator(); // 626
	_Fwd_list_node_base::_Fwd_list_node_base(); // 626
	_Fwd_list_impl::_Fwd_list_impl(); // 654
	_Fwd_list_base<std::pair<const facebook::yoga::Node::_Fwd_list_base(); // 803
	forward_list<std::pair<const facebook::yoga::Node::forward_list(); // 30
	Iterator::Iterator(); // 141
	LayoutableChildren<facebook::yoga::Node>::end(); // 45
	operator!=(const Iterator& a,
			const Iterator& b);  // 47
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
	Iterator::operator++(); // 46
	Iterator::operator++(
			int);  // 47
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
	Iterator::~Iterator(); // 47
	__new_allocator<facebook::yoga::Node::__new_allocator(
			const __new_allocator<facebook::yoga::Node*>  &);  // 173
	allocator<facebook::yoga::Node::allocator(
			const allocator<facebook::yoga::Node*>& __a);  // 161
	_Vector_impl_data::_Vector_impl_data(
				_Vector_impl_data& __x);  // 161
	_Vector_impl::_Vector_impl(
			_Vector_impl& __x);  // 344
	_Vector_base<facebook::yoga::Node::_Vector_base(
			_Vector_base<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> > &);  // 650
	vector<facebook::yoga::Node::vector(
		vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> > &);  // 124
	_Fwd_list_node_base::_M_base_ptr(); // 671
	_Fwd_list_base<std::pair<const facebook::yoga::Node::_M_erase_after(
			_Base_ptr __pos,
			_Base_ptr __last);  // 671
	allocator<std::_Fwd_list_node<std::pair<const facebook::yoga::Node::~allocator(); // 619
	_Fwd_list_impl::~_Fwd_list_impl(); // 671
	_Fwd_list_base<std::pair<const facebook::yoga::Node::~_Fwd_list_base(); // 961
	forward_list<std::pair<const facebook::yoga::Node::~forward_list(); // 23
	Iterator::~Iterator(); // 125
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
	vector<facebook::yoga::Node::~vector(); // 125
} /* size: 0, variables: 12, inline expansions: 98 (1462 bytes) */

