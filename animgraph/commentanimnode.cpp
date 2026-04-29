
//
// animgraph/commentanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 25
//

// <01072D69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:8
void ICommentAnimNode::GetTypeInfo()
{
} /* size: 0 */

// <01072BD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:8
// function calls: 3
void* ICommentAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<ICommentAnimNode>::CastTo(
		ICommentAnimNode* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01072A43> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:8
// function calls: 3
const void* ICommentAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<ICommentAnimNode>::CastTo(
		const ICommentAnimNode* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0109554B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <010906BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:10
void CCommentAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0107282C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:10
// function calls: 3
void* CCommentAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CCommentAnimNode>::CastTo(
		CCommentAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01072699> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:10
// function calls: 3
const void* CCommentAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CCommentAnimNode>::CastTo(
		const CCommentAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0107230B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:19
// function calls: 15
void CCommentAnimNode::CCommentAnimNode()
{
	CUtlString::CUtlString(
			const char* pString);  // 19
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 19
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 19
	Object::Object(); // 30
	IAnimNode::IAnimNode(); // 19
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 19
	AnimNodeID::AnimNodeID(); // 19
	CUtlString::CUtlString(); // 19
	CAnimNodeBase::CAnimNodeBase(); // 22
	CUtlString::CUtlString(); // 22
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 22
	ICommentAnimNode::ICommentAnimNode(); // 22
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 21
} /* size: 191, inline expansions: 15 (236 bytes) */

// <010722F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:19
void CCommentAnimNode::CCommentAnimNode()
{
} /* size: 0 */

// <010722DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:26
void CCommentAnimNode::GetChildCount()
{
} /* size: 0 */

// <010722B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:32
void CCommentAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <01072292> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:38
void CCommentAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <01072270> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:44
void CCommentAnimNode::SetChildID(int, AnimNodeID)
{
} /* size: 0 */

// <010929E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:50
// function calls: 2
void CCommentAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(); // 52
	CCommentAnimNode::GetChildName(
			int);  // 50
} /* size: 130, inline expansions: 2 (64 bytes) */

// <0107223C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:50
// variable: 1
void CCommentAnimNode::GetChildName(int)
{
	const CUtlString  sEmptyString; // 52
} /* size: 0, variables: 1 */

// <010721A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:57
// variables: 2
void CCommentAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	const char   __FUNCTION__; // 20043
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 38, variables: 1 */

// <010906E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:64
void CCommentAnimNode::GetCommentText()
{
} /* size: 9 */

// <01093C03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:70
// function calls: 4
void CCommentAnimNode::SetCommentText(const CUtlString& text)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 72
} /* size: 86, inline expansions: 4 (106 bytes) */

// <01072165> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:70
void CCommentAnimNode::SetCommentText(const CUtlString& text)
{
} /* size: 0 */

// <0109070E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:76
void CCommentAnimNode::GetNodeSize()
{
} /* size: 9 */

// <01090737> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:82
// function call: 1
void CCommentAnimNode::SetNodeSize(const Vector2D& size)
{
	Vector2D::operator=(
			const Vector2D& vOther);  // 84
} /* size: 24, inline expansions: 1 (19 bytes) */

// <01072127> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:82
void CCommentAnimNode::SetNodeSize(const Vector2D& size)
{
} /* size: 0 */

// <010907A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:88
void CCommentAnimNode::GetColor()
{
} /* size: 9 */

// <010907CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:94
// function calls: 3
void CCommentAnimNode::SetColor(const Color& color)
{
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 96
} /* size: 10, inline expansions: 3 (10 bytes) */

// <010720E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:94
void CCommentAnimNode::SetColor(const Color& color)
{
} /* size: 0 */

