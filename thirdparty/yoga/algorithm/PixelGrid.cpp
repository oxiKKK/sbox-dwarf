
//
// thirdparty/yoga/algorithm/PixelGrid.cpp
//
//	referenced by: libengine2.so
//
//	functions: 2
//

// <02A48BF3> ../thirdparty/yoga/algorithm/PixelGrid.cpp:18
// variables: 2
// function calls: 6
void roundValueToPixelGrid(const double value, const double pointScaleFactor, const bool forceCeil, const bool forceFloor)
{
	double scaledValue; // 23
	double fractial; // 26
	abs(double __x); // 68
	inexactEquals(double a,
			double b);  // 45
	abs(double __x); // 68
	inexactEquals(double a,
			double b);  // 48
	abs(double __x); // 68
	inexactEquals(double a,
			double b);  // 59
} /* size: 229, variables: 2, inline expansions: 6 (76 bytes) */

// <02A48302> ../thirdparty/yoga/algorithm/PixelGrid.cpp:68
// variables: 16
// function calls: 22
void roundLayoutResultsToPixelGrid(const Node* node, const double absoluteLeft, const double absoluteTop)
{
	const float  pointScaleFactor; // 72
	const double  nodeLeft; // 74
	const double  nodeTop; // 75
	const double  nodeWidth; // 77
	const double  nodeHeight; // 78
	const double  absoluteNodeLeft; // 80
	const double  absoluteNodeTop; // 81
	const double  absoluteNodeRight; // 83
	const double  absoluteNodeBottom; // 84
	{
		const bool  textRounding; // 89
		const bool  hasFractionalWidth; // 102
		const bool  hasFractionalHeight; // 105
		Node::getNodeType(); // 89
		abs(double __x); // 68
		inexactEquals(double a,
				double b);  // 103
		abs(double __x); // 68
		inexactEquals(double a,
				double b);  // 104
		abs(double __x); // 68
		inexactEquals(double a,
				double b);  // 106
		abs(double __x); // 68
		inexactEquals(double a,
				double b);  // 107
	}
	{
		Node* child; // 130
		const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& __for_range; // 5981
		const_iterator __for_begin; // 33383
		const_iterator __for_end; // 33383
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1009
		vector<facebook::yoga::Node::begin(); // 130
		__normal_iterator<facebook::yoga::Node::__normal_iterator(
					Node* const* const& __i);  // 1029
		vector<facebook::yoga::Node::end(); // 130
	}
	Node::getConfig(); // 72
	array<float, 4>::operator[](
			size_type __n);  // 74
	LayoutResults::position(
		PhysicalEdge physicalEdge);  // 74
	array<float, 4>::operator[](
			size_type __n);  // 74
	LayoutResults::position(
		PhysicalEdge physicalEdge);  // 75
	array<float, 2>::operator[](
			size_type __n);  // 58
	LayoutResults::dimension(
			Dimension axis);  // 77
	array<float, 2>::operator[](
			size_type __n);  // 58
	LayoutResults::dimension(
			Dimension axis);  // 78
} /* size: 845, variables: 9, inline expansions: 9 (0 bytes) */

