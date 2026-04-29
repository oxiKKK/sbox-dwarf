
//
// thirdparty/yoga/event/event.cpp
//
//	referenced by: libengine2.so
//
//	functions: 9
//

// <02A8FC4D> ../thirdparty/yoga/event/event.cpp:17
void LayoutPassReasonToString(const LayoutPassReason value)
{
} /* size: 0 */

// <02A8FBA4> ../thirdparty/yoga/event/event.cpp:42
void Node::~Node()
{
} /* size: 0 */

// <02A8FB87> ../thirdparty/yoga/event/event.cpp:42
inline void Node::~Node()
{
} /* size: 0 */

// <02A8FC00> ../thirdparty/yoga/event/event.cpp:46
void Node::Node(function<void(const YGNode*, facebook::yoga::Event::Type, facebook::yoga::Event::Data)>& subscriber)
{
} /* size: 0 */

// <02A8FBDB> ../thirdparty/yoga/event/event.cpp:46
inline void Node::Node(function<void(const YGNode*, facebook::yoga::Event::Type, facebook::yoga::Event::Data)>& subscriber)
{
} /* size: 0 */

// <02A8FBB7> ../thirdparty/yoga/event/event.cpp:52
// variable: 1
void push(Node* newHead)
{
	Node* oldHead; // 53
} /* size: 0, variables: 1 */

// <02A8F8EE> ../thirdparty/yoga/event/event.cpp:66
// variables: 6
// function calls: 8
void reset(void)
{
	Node* head; // 67
	{
		Node* current; // 69
		_Function_base::~_Function_base(); // 336
		function<void(const YGNode::~function()>* this); // 42
		Node::~Node(); // 71
	}
	__atomic_base<facebook::yoga::(anonymous namespace)::Node::compare_exchange_weak(
				__pointer_type& __p1,
				__pointer_type __p2,
				memory_order __m1,
				memory_order __m2); // 606
	atomic<facebook::yoga::(anonymous namespace)::Node::compare_exchange_weak(
				__pointer_type& __p1,
				__pointer_type __p2,
				memory_order __m1,
				memory_order __m2); // 59
	__atomic_base<facebook::yoga::(anonymous namespace)::Node::load(
		memory_order __m); // 587
	atomic<facebook::yoga::(anonymous namespace)::Node::load(
		memory_order __m); // 55
	push(Node* newHead); // 67
} /* size: 105, variables: 1, inline expansions: 5 (56 bytes) */

// <02A8F60A> ../thirdparty/yoga/event/event.cpp:75
// variables: 4
// function calls: 10
void subscribe(function<void(const YGNode*, facebook::yoga::Event::Type, facebook::yoga::Event::Data)>& subscriber)
{
	_Function_base::_Function_base(); // 407
	_Function_base::_M_empty(); // 576
	function<void(const YGNode::operator bool()>* this); // 409
	function<void(const YGNode::function(
		function<void(const YGNode*, facebook::yoga::Event::Type, facebook::yoga::Event::Data)>& __x);  // 47
	Node::Node(
		function<void(const YGNode*, facebook::yoga::Event::Type, facebook::yoga::Event::Data)>& subscriber);  // 76
	__atomic_base<facebook::yoga::(anonymous namespace)::Node::load(
		memory_order __m); // 587
	atomic<facebook::yoga::(anonymous namespace)::Node::load(
		memory_order __m); // 55
	__atomic_base<facebook::yoga::(anonymous namespace)::Node::compare_exchange_weak(
				__pointer_type& __p1,
				__pointer_type __p2,
				memory_order __m1,
				memory_order __m2); // 606
	atomic<facebook::yoga::(anonymous namespace)::Node::compare_exchange_weak(
				__pointer_type& __p1,
				__pointer_type __p2,
				memory_order __m1,
				memory_order __m2); // 59
	push(Node* newHead); // 76
} /* size: 124, inline expansions: 10 (188 bytes) */

// <02A8F481> ../thirdparty/yoga/event/event.cpp:79
// variables: 3
// function calls: 4
void publish(YGNodeConstRef node, Type eventType, const Data& eventData)
{
	{
		Node* subscriber; // 83
		__atomic_base<facebook::yoga::(anonymous namespace)::Node::load(
			memory_order __m); // 587
		atomic<facebook::yoga::(anonymous namespace)::Node::load(
			memory_order __m); // 83
		_Function_base::_M_empty(); // 591
		function<void(const YGNode::operator(
				const YGNode* __args#0,
				Type __args#1,
				Data __args#2);  // 86
	}
} /* size: 0 */

