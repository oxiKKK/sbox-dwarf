
//
// public/tier0/jobthreadlambda.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 8
//	class: 1
//

// <046F7382> ../public/tier0/jobthreadlambda.h:12
void CLambdaJobItemProcessor<int>::~CLambdaJobItemProcessor()
{
} /* size: 0 */

// <046F7366> ../public/tier0/jobthreadlambda.h:12
inline void CLambdaJobItemProcessor<int>::~CLambdaJobItemProcessor()
{
} /* size: 0 */

// <046CF4BB> ../public/tier0/jobthreadlambda.h:12
void CLambdaJobItemProcessor<int>::CLambdaJobItemProcessor()
{
} /* size: 0 */

// <046CF49F> ../public/tier0/jobthreadlambda.h:12
inline void CLambdaJobItemProcessor<int>::CLambdaJobItemProcessor()
{
} /* size: 0 */

// <046BBBF4> ../public/tier0/jobthreadlambda.h:12
// member functions: 12
// member variables: 2
// class size: 32
class CLambdaJobItemProcessor<int> : public CJobItemProcessor<int> {
public:
	/* class CJobItemProcessor<int> <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthreadlambda.h:15 */
	void Init(CLambdaJobItemProcessor<int>* , function<void(int&)>);
	/* ../public/tier0/jobthreadlambda.h:20 */
	void Begin(CLambdaJobItemProcessor<int>* );
	/* ../public/tier0/jobthreadlambda.h:22 */
	void Process(CLambdaJobItemProcessor<int>* , int& );
	/* ../public/tier0/jobthreadlambda.h:25 */
	void End(CLambdaJobItemProcessor<int>* );
private:
	function<void(int&)> m_fnProcess; /* 0 32 */
	void CLambdaJobItemProcessor(CLambdaJobItemProcessor<int>* );
	void ~CLambdaJobItemProcessor(CLambdaJobItemProcessor<int>* );
	void Init(class CLambdaJobItemProcessor<int> *, class function<void(int&)>); /* linkage=_ZN23CLambdaJobItemProcessorIiE4InitESt8functionIFvRiEE */
	void Begin(class CLambdaJobItemProcessor<int> *); /* linkage=_ZN23CLambdaJobItemProcessorIiE5BeginEv */
	void Process(class CLambdaJobItemProcessor<int> *, int &); /* linkage=_ZN23CLambdaJobItemProcessorIiE7ProcessERi */
	void End(class CLambdaJobItemProcessor<int> *); /* linkage=_ZN23CLambdaJobItemProcessorIiE3EndEv */
	void CLambdaJobItemProcessor(class CLambdaJobItemProcessor<int> *); /* linkage=_ZN23CLambdaJobItemProcessorIiEC4Ev */
	void ~CLambdaJobItemProcessor(class CLambdaJobItemProcessor<int> *); /* linkage=_ZN23CLambdaJobItemProcessorIiED4Ev */
};

// <046CF3D1> ../public/tier0/jobthreadlambda.h:15
inline void CLambdaJobItemProcessor<int>::Init(function<void(int&)> fnProcess)
{
} /* size: 0 */

// <046C42DE> ../public/tier0/jobthreadlambda.h:20
inline void CLambdaJobItemProcessor<int>::Begin()
{
} /* size: 0 */

// <046C2D96> ../public/tier0/jobthreadlambda.h:22
inline void CLambdaJobItemProcessor<int>::Process(int& item)
{
} /* size: 0 */

// <046C42C5> ../public/tier0/jobthreadlambda.h:25
inline void CLambdaJobItemProcessor<int>::End()
{
} /* size: 0 */

