
//
// thirdparty/yoga/node/Node.h
//
//	referenced by: libengine2.so
//
//	functions: 45
//	struct: 1
//

// <028CC749> ../thirdparty/yoga/node/Node.h:29
// struct size: 1
struct YGNode {
};

// <02ABDD0F> ../thirdparty/yoga/node/Node.h:33
void Node::~Node()
{
} /* size: 0 */

// <02ABDCF3> ../thirdparty/yoga/node/Node.h:33
inline void Node::~Node()
{
} /* size: 0 */

// <028E9B0F> ../thirdparty/yoga/node/Node.h:37
void Node::Node(const Config* config)
{
} /* size: 0 */

// <028F2EA9> ../thirdparty/yoga/node/Node.h:43
inline void Node::Node(const Node& node)
{
} /* size: 0 */

// <028F347B> ../thirdparty/yoga/node/Node.h:50
inline void* Node::getContext()
{
} /* size: 0 */

// <029F5262> ../thirdparty/yoga/node/Node.h:54
inline void Node::alwaysFormsContainingBlock()
{
} /* size: 0 */

// <0296786B> ../thirdparty/yoga/node/Node.h:58
inline void Node::getHasNewLayout()
{
} /* size: 0 */

// <02A48E03> ../thirdparty/yoga/node/Node.h:62
inline void Node::getNodeType()
{
} /* size: 0 */

// <029F5249> ../thirdparty/yoga/node/Node.h:66
inline void Node::hasMeasureFunc()
{
} /* size: 0 */

// <0299D3AC> ../thirdparty/yoga/node/Node.h:76
inline void Node::hasBaselineFunc()
{
} /* size: 0 */

// <02A034BB> ../thirdparty/yoga/node/Node.h:90
// variable: 1
// function calls: 3
void Node::hasDefiniteLength(Dimension dimension, float ownerSize)
{
	FloatOptional usedValue; // 91
	Node::getProcessedDimension(
				Dimension dimension);  // 91
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 91
} /* size: 85, variables: 1, inline expansions: 3 (41 bytes) */

// <029F520C> ../thirdparty/yoga/node/Node.h:90
// variable: 1
inline void Node::hasDefiniteLength(Dimension dimension, float ownerSize)
{
	FloatOptional usedValue; // 91
} /* size: 0, variables: 1 */

// <029F51E7> ../thirdparty/yoga/node/Node.h:95
inline void Node::hasErrata(Errata errata)
{
} /* size: 0 */

// <028F33E5> ../thirdparty/yoga/node/Node.h:99
inline void Node::getDirtiedFunc()
{
} /* size: 0 */

// <02ABDE85> ../thirdparty/yoga/node/Node.h:104
inline void Node::style()
{
} /* size: 0 */

// <02ABDE6C> ../thirdparty/yoga/node/Node.h:113
inline void Node::getLayout()
{
} /* size: 0 */

// <029F516A> ../thirdparty/yoga/node/Node.h:121
inline void Node::getLineIndex()
{
} /* size: 0 */

// <0299D316> ../thirdparty/yoga/node/Node.h:125
inline void Node::isReferenceBaseline()
{
} /* size: 0 */

// <02ABDE53> ../thirdparty/yoga/node/Node.h:133
inline void Node::getOwner()
{
} /* size: 0 */

// <02A48DD1> ../thirdparty/yoga/node/Node.h:137
inline void Node::getChildren()
{
} /* size: 0 */

// <02A2A61D> ../thirdparty/yoga/node/Node.h:141
inline void Node::getChild(size_t index)
{
} /* size: 0 */

// <02A2A604> ../thirdparty/yoga/node/Node.h:145
inline void Node::getChildCount()
{
} /* size: 0 */

// <02A2A5EB> ../thirdparty/yoga/node/Node.h:149
inline void Node::getLayoutChildren()
{
} /* size: 0 */

// <029F5092> ../thirdparty/yoga/node/Node.h:153
// variables: 2
inline void Node::getLayoutChildCount()
{
	{
		size_t count; // 157
		{
			Iterator iter; // 158
		}
	}
} /* size: 0 */

// <02ABDE3A> ../thirdparty/yoga/node/Node.h:167
inline void Node::getConfig()
{
} /* size: 0 */

// <029F5060> ../thirdparty/yoga/node/Node.h:171
inline void Node::isDirty()
{
} /* size: 0 */

// <029F503B> ../thirdparty/yoga/node/Node.h:175
inline void Node::getProcessedDimension(Dimension dimension)
{
} /* size: 0 */

// <02A0359B> ../thirdparty/yoga/node/Node.h:179
// variables: 2
// function calls: 8
void Node::getResolvedDimension(Direction direction, Dimension dimension, float referenceLength, float ownerWidth)
{
	FloatOptional value; // 184
	FloatOptional dimensionPaddingAndBorder; // 190
	Node::getProcessedDimension(
				Dimension dimension);  // 185
	FloatOptional::FloatOptional(
			float value);  // 79
	StyleLength::resolve(
		float referenceLength);  // 185
	Style::boxSizing(); // 186
	FloatOptional::FloatOptional(
			float value);  // 192
	FloatOptional::unwrap(); // 69
	FloatOptional::FloatOptional(
			float value);  // 69
	operator+(FloatOptional lhs,
			FloatOptional rhs);  // 196
} /* size: 134, variables: 2, inline expansions: 8 (61 bytes) */

// <029F4FDA> ../thirdparty/yoga/node/Node.h:179
// variables: 2
inline void Node::getResolvedDimension(Direction direction, Dimension dimension, float referenceLength, float ownerWidth)
{
	FloatOptional value; // 184
	FloatOptional dimensionPaddingAndBorder; // 190
} /* size: 0, variables: 2 */

// <028F3305> ../thirdparty/yoga/node/Node.h:201
inline void Node::setContext(void* context)
{
} /* size: 0 */

// <028F32E0> ../thirdparty/yoga/node/Node.h:205
inline void Node::setAlwaysFormsContainingBlock(bool alwaysFormsContainingBlock)
{
} /* size: 0 */

// <029F4FB5> ../thirdparty/yoga/node/Node.h:209
inline void Node::setHasNewLayout(bool hasNewLayout)
{
} /* size: 0 */

// <02ABDE15> ../thirdparty/yoga/node/Node.h:213
inline void Node::setNodeType(NodeType nodeType)
{
} /* size: 0 */

// <028F3271> ../thirdparty/yoga/node/Node.h:219
inline void Node::setBaselineFunc(YGBaselineFunc baseLineFunc)
{
} /* size: 0 */

// <028F324C> ../thirdparty/yoga/node/Node.h:223
inline void Node::setDirtiedFunc(YGDirtiedFunc dirtiedFunc)
{
} /* size: 0 */

// <0293B85F> ../thirdparty/yoga/node/Node.h:227
inline void Node::setStyle(const Style& style)
{
} /* size: 0 */

// <028F3227> ../thirdparty/yoga/node/Node.h:231
inline void Node::setLayout(const LayoutResults& layout)
{
} /* size: 0 */

// <02A2A593> ../thirdparty/yoga/node/Node.h:235
inline void Node::setLineIndex(size_t lineIndex)
{
} /* size: 0 */

// <028F3202> ../thirdparty/yoga/node/Node.h:239
inline void Node::setIsReferenceBaseline(bool isReferenceBaseline)
{
} /* size: 0 */

// <02ABDDF0> ../thirdparty/yoga/node/Node.h:243
inline void Node::setOwner(Node* owner)
{
} /* size: 0 */

// <028F31B8> ../thirdparty/yoga/node/Node.h:247
inline void Node::setChildren(const vector<facebook::yoga::Node*, std::allocator<facebook::yoga::Node*> >& children)
{
} /* size: 0 */

// <02AAA2BF> ../thirdparty/yoga/node/Node.h:297
inline void Node::operator=(Node &)
{
} /* size: 0 */

// <02ABDDD7> ../thirdparty/yoga/node/Node.h:304
inline void Node::useWebDefaults()
{
} /* size: 0 */

// <02ABDDBF> ../thirdparty/yoga/node/Node.h:329
inline void resolveRef(const YGNodeRef ref)
{
} /* size: 0 */

// <0293B82F> ../thirdparty/yoga/node/Node.h:333
inline void resolveRef(const YGNodeConstRef ref)
{
} /* size: 0 */

