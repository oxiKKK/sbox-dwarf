
//
// thirdparty/yoga/YGNode.h
//
//	referenced by: libengine2.so
//
//	functions: 16
//	struct: 1
//

// <012594A6> ../thirdparty/yoga/YGNode.h:32
YGNodeRef YGNodeNew(void)
{
} /* size: 0 */

// <0125948C> ../thirdparty/yoga/YGNode.h:37
YGNodeRef YGNodeNewWithConfig(YGConfigConstRef)
{
} /* size: 0 */

// <01259476> ../thirdparty/yoga/YGNode.h:49
void YGNodeFree(YGNodeRef)
{
} /* size: 0 */

// <01259460> ../thirdparty/yoga/YGNode.h:66
void YGNodeReset(YGNodeRef)
{
} /* size: 0 */

// <0125943B> ../thirdparty/yoga/YGNode.h:77
void YGNodeCalculateLayout(YGNodeRef, float, float, YGDirection)
{
} /* size: 0 */

// <01259421> ../thirdparty/yoga/YGNode.h:87
bool YGNodeGetHasNewLayout(YGNodeConstRef)
{
} /* size: 0 */

// <01259406> ../thirdparty/yoga/YGNode.h:92
void YGNodeSetHasNewLayout(YGNodeRef, bool)
{
} /* size: 0 */

// <012593EC> ../thirdparty/yoga/YGNode.h:98
bool YGNodeIsDirty(YGNodeConstRef)
{
} /* size: 0 */

// <012593D6> ../thirdparty/yoga/YGNode.h:103
void YGNodeMarkDirty(YGNodeRef)
{
} /* size: 0 */

// <012593B6> ../thirdparty/yoga/YGNode.h:120
void YGNodeInsertChild(YGNodeRef, YGNodeRef, size_t)
{
} /* size: 0 */

// <0125939B> ../thirdparty/yoga/YGNode.h:130
void YGNodeRemoveChild(YGNodeRef, YGNodeRef)
{
} /* size: 0 */

// <01259385> ../thirdparty/yoga/YGNode.h:135
void YGNodeRemoveAllChildren(YGNodeRef)
{
} /* size: 0 */

// <0125936B> ../thirdparty/yoga/YGNode.h:151
size_t YGNodeGetChildCount(YGNodeConstRef)
{
} /* size: 0 */

// <01259351> ../thirdparty/yoga/YGNode.h:161
YGNodeRef YGNodeGetParent(YGNodeRef)
{
} /* size: 0 */

// <0120E3F8> ../thirdparty/yoga/YGNode.h:183
// member variables: 2
// struct size: 8
struct YGSize {
	float width; /* 0 4 */
	float height; /* 4 4 */
};

// <01258A69> ../thirdparty/yoga/YGNode.h:216
void YGNodeSetMeasureFunc(YGNodeRef, YGMeasureFunc)
{
} /* size: 0 */

// <01258A4F> ../thirdparty/yoga/YGNode.h:221
bool YGNodeHasMeasureFunc(YGNodeConstRef)
{
} /* size: 0 */

