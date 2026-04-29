
//
// thirdparty/quickhull/qhMemory.inl
//
//	referenced by: libengine2.so
//
//	functions: 51
//

// <061EB37E> thirdparty/quickhull/qhMemory.inl:16
void qhPool<qhVertex>::qhPool()
{
} /* size: 0 */

// <061EB365> thirdparty/quickhull/qhMemory.inl:16
inline void qhPool<qhVertex>::qhPool()
{
} /* size: 0 */

// <061EB31E> thirdparty/quickhull/qhMemory.inl:16
void qhPool<qhHalfEdge>::qhPool()
{
} /* size: 0 */

// <061EB305> thirdparty/quickhull/qhMemory.inl:16
inline void qhPool<qhHalfEdge>::qhPool()
{
} /* size: 0 */

// <061EB2BE> thirdparty/quickhull/qhMemory.inl:16
void qhPool<qhFace>::qhPool()
{
} /* size: 0 */

// <061EB2A5> thirdparty/quickhull/qhMemory.inl:16
inline void qhPool<qhFace>::qhPool()
{
} /* size: 0 */

// <061EB34E> thirdparty/quickhull/qhMemory.inl:27
void qhPool<qhVertex>::~qhPool()
{
} /* size: 0 */

// <061EB335> thirdparty/quickhull/qhMemory.inl:27
inline void qhPool<qhVertex>::~qhPool()
{
} /* size: 0 */

// <061EB2EE> thirdparty/quickhull/qhMemory.inl:27
void qhPool<qhHalfEdge>::~qhPool()
{
} /* size: 0 */

// <061EB2D5> thirdparty/quickhull/qhMemory.inl:27
inline void qhPool<qhHalfEdge>::~qhPool()
{
} /* size: 0 */

// <061EB28E> thirdparty/quickhull/qhMemory.inl:27
void qhPool<qhFace>::~qhPool()
{
} /* size: 0 */

// <061EB275> thirdparty/quickhull/qhMemory.inl:27
inline void qhPool<qhFace>::~qhPool()
{
} /* size: 0 */

// <061EAE2D> thirdparty/quickhull/qhMemory.inl:46
// variables: 3
inline void qhPool<qhVertex>::Resize(int Size)
{
	int* Next; // 60
	{
		int i; // 54
		{
			int* Next; // 56
		}
	}
} /* size: 0, variables: 1 */

// <061EADE2> thirdparty/quickhull/qhMemory.inl:46
// variables: 3
inline void qhPool<qhHalfEdge>::Resize(int Size)
{
	int* Next; // 60
	{
		int i; // 54
		{
			int* Next; // 56
		}
	}
} /* size: 0, variables: 1 */

// <061EAD97> thirdparty/quickhull/qhMemory.inl:46
// variables: 3
inline void qhPool<qhFace>::Resize(int Size)
{
	int* Next; // 60
	{
		int i; // 54
		{
			int* Next; // 56
		}
	}
} /* size: 0, variables: 1 */

// <061EAF55> thirdparty/quickhull/qhMemory.inl:67
// variable: 1
inline void qhPool<qhVertex>::Allocate()
{
	int Next; // 70
} /* size: 0, variables: 1 */

// <061EAEFF> thirdparty/quickhull/qhMemory.inl:67
// variable: 1
inline void qhPool<qhFace>::Allocate()
{
	int Next; // 70
} /* size: 0, variables: 1 */

// <061EAEDA> thirdparty/quickhull/qhMemory.inl:67
// variable: 1
inline void qhPool<qhHalfEdge>::Allocate()
{
	int Next; // 70
} /* size: 0, variables: 1 */

// <061EAF24> thirdparty/quickhull/qhMemory.inl:83
// variable: 1
inline void qhPool<qhVertex>::Free(qhVertex* Address)
{
	int* Next; // 91
} /* size: 0, variables: 1 */

// <061EAEA9> thirdparty/quickhull/qhMemory.inl:83
// variable: 1
inline void qhPool<qhHalfEdge>::Free(qhHalfEdge* Address)
{
	int* Next; // 91
} /* size: 0, variables: 1 */

// <061EAE78> thirdparty/quickhull/qhMemory.inl:83
// variable: 1
inline void qhPool<qhFace>::Free(qhFace* Address)
{
	int* Next; // 91
} /* size: 0, variables: 1 */

// <061EA7D6> thirdparty/quickhull/qhMemory.inl:103
inline void qhConstruct<qhArray<const qhFace*> >(qhArray<const qhFace*>* Address)
{
} /* size: 0 */

// <061EA421> thirdparty/quickhull/qhMemory.inl:103
inline void qhConstruct<qhIteration>(qhIteration* Address)
{
} /* size: 0 */

// <061EA9A2> thirdparty/quickhull/qhMemory.inl:111
// variable: 1
inline void qhConstruct<qhVector3>(qhVector3* Address, int N)
{
	{
		int i; // 114
	}
} /* size: 0 */

// <061EA758> thirdparty/quickhull/qhMemory.inl:123
inline void qhCopyConstruct<const qhFace*>(const qhFace ** Address, const qhFace* const& Other)
{
} /* size: 0 */

// <061EA5FE> thirdparty/quickhull/qhMemory.inl:123
inline void qhCopyConstruct<qhHalfEdge*>(qhHalfEdge** Address, qhHalfEdge* const& Other)
{
} /* size: 0 */

// <061EA580> thirdparty/quickhull/qhMemory.inl:123
inline void qhCopyConstruct<qhFace*>(qhFace** Address, qhFace* const& Other)
{
} /* size: 0 */

// <061EA4C6> thirdparty/quickhull/qhMemory.inl:123
inline void qhCopyConstruct<int>(int* Address, const int& Other)
{
} /* size: 0 */

// <0610E2F9> ../thirdparty/quickhull/qhMemory.inl:123
inline void qhCopyConstruct<qhVector3>(qhVector3* Address, const qhVector3& Other)
{
} /* size: 0 */

// <061EA90D> thirdparty/quickhull/qhMemory.inl:139
// variable: 1
inline void qhDestroy<qhIteration>(qhIteration* Address, int N)
{
	{
		int i; // 142
	}
} /* size: 0 */

// <061EA848> thirdparty/quickhull/qhMemory.inl:139
// variable: 1
inline void qhDestroy<qhArray<const qhFace*> >(qhArray<const qhFace*>* Address, int N)
{
	{
		int i; // 142
	}
} /* size: 0 */

// <061EA6B8> thirdparty/quickhull/qhMemory.inl:139
// variable: 1
inline void qhDestroy<qhHalfEdge*>(qhHalfEdge** Address, int N)
{
	{
		int i; // 142
	}
} /* size: 0 */

// <061EA67C> thirdparty/quickhull/qhMemory.inl:139
// variable: 1
inline void qhDestroy<qhFace*>(qhFace** Address, int N)
{
	{
		int i; // 142
	}
} /* size: 0 */

// <061EA544> thirdparty/quickhull/qhMemory.inl:139
// variable: 1
inline void qhDestroy<int>(int* Address, int N)
{
	{
		int i; // 142
	}
} /* size: 0 */

// <061E9C6D> thirdparty/quickhull/qhMemory.inl:139
// variable: 1
inline void qhDestroy<const qhFace*>(const qhFace ** Address, int N)
{
	{
		int i; // 142
	}
} /* size: 0 */

// <0610E377> ../thirdparty/quickhull/qhMemory.inl:139
// variable: 1
inline void qhDestroy<qhVector3>(qhVector3* Address, int N)
{
	{
		int i; // 142
	}
} /* size: 0 */

// <061EA2FB> thirdparty/quickhull/qhMemory.inl:151
void qhMove<qhArray<const qhFace*> >(qhArray<const qhFace*>* Address, qhArray<const qhFace*>* Begin, qhArray<const qhFace*>* End)
{
} /* size: 0 */

// <061EA28D> thirdparty/quickhull/qhMemory.inl:151
void qhMove<const qhFace*>(const qhFace ** Address, const qhFace ** Begin, const qhFace ** End)
{
} /* size: 0 */

// <061EA24F> thirdparty/quickhull/qhMemory.inl:151
void qhMove<qhHalfEdge*>(qhHalfEdge** Address, qhHalfEdge** Begin, qhHalfEdge** End)
{
} /* size: 0 */

// <061EA211> thirdparty/quickhull/qhMemory.inl:151
void qhMove<qhFace*>(qhFace** Address, qhFace** Begin, qhFace** End)
{
} /* size: 0 */

// <061EA1D3> thirdparty/quickhull/qhMemory.inl:151
void qhMove<int>(int* Address, int* Begin, int* End)
{
} /* size: 0 */

// <061E9CD9> thirdparty/quickhull/qhMemory.inl:151
// function calls: 21
void qhMove<qhIteration>(qhIteration* Address, qhIteration* Begin, qhIteration* End)
{
	qhArray<qhVector3>::qhArray(); // 37
	qhArray<qhVector3>::qhArray(); // 37
	qhArray<int>::qhArray(); // 37
	qhIteration::qhIteration(); // 155
	qhSwap<qhVector3>(qhVector3& Lhs,
				qhVector3& Rhs);  // 48
	qhSwap<qhVector3*>(qhVector3 *& Lhs,
				qhVector3 *& Rhs);  // 233
	qhSwap<qhVector3*>(qhVector3 *& Lhs,
				qhVector3 *& Rhs);  // 234
	qhSwap<qhVector3*>(qhVector3 *& Lhs,
				qhVector3 *& Rhs);  // 235
	qhArray<qhVector3>::Swap(
		qhArray<qhVector3>& Other);  // 243
	qhSwap<qhVector3>(qhArray<qhVector3>& Lhs,
				qhArray<qhVector3>& Rhs);  // 49
	qhSwap<qhVector3*>(qhVector3 *& Lhs,
				qhVector3 *& Rhs);  // 233
	qhSwap<qhVector3*>(qhVector3 *& Lhs,
				qhVector3 *& Rhs);  // 234
	qhSwap<qhVector3*>(qhVector3 *& Lhs,
				qhVector3 *& Rhs);  // 235
	qhArray<qhVector3>::Swap(
		qhArray<qhVector3>& Other);  // 243
	qhSwap<qhVector3>(qhArray<qhVector3>& Lhs,
				qhArray<qhVector3>& Rhs);  // 50
	qhSwap<int*>(int *& Lhs,
			int *& Rhs);  // 233
	qhSwap<int*>(int *& Lhs,
			int *& Rhs);  // 234
	qhSwap<int*>(int *& Lhs,
			int *& Rhs);  // 235
	qhArray<int>::Swap(
		qhArray<int>& Other);  // 243
	qhSwap<int>(qhArray<int>& Lhs,
			qhArray<int>& Rhs);  // 51
	qhSwap(qhIteration& Lhs,
		qhIteration& Rhs);  // 156
} /* size: 0, inline expansions: 21 (0 bytes) */

// <0610DE5D> ../thirdparty/quickhull/qhMemory.inl:151
void qhMove<qhVector3>(qhVector3* Address, qhVector3* Begin, qhVector3* End)
{
} /* size: 0 */

// <061EA3DD> thirdparty/quickhull/qhMemory.inl:163
// variable: 1
inline void qhSwap<qhVector3*>(qhVector3 *& Lhs, qhVector3 *& Rhs)
{
	qhVector3* Temp; // 165
} /* size: 0, variables: 1 */

// <061EA399> thirdparty/quickhull/qhMemory.inl:163
// variable: 1
inline void qhSwap<int*>(int *& Lhs, int *& Rhs)
{
	int* Temp; // 165
} /* size: 0, variables: 1 */

// <061E9BFD> thirdparty/quickhull/qhMemory.inl:163
// variable: 1
inline void qhSwap<const qhFace*>(const qhFace *& Lhs, const qhFace *& Rhs)
{
	const qhFace* Temp; // 165
} /* size: 0, variables: 1 */

// <061E9BBF> thirdparty/quickhull/qhMemory.inl:163
// variable: 1
inline void qhSwap<qhHalfEdge*>(qhHalfEdge *& Lhs, qhHalfEdge *& Rhs)
{
	qhHalfEdge* Temp; // 165
} /* size: 0, variables: 1 */

// <061E9B81> thirdparty/quickhull/qhMemory.inl:163
// variable: 1
inline void qhSwap<qhFace*>(qhFace *& Lhs, qhFace *& Rhs)
{
	qhFace* Temp; // 165
} /* size: 0, variables: 1 */

// <061E9B43> thirdparty/quickhull/qhMemory.inl:163
// variable: 1
inline void qhSwap<int>(int& Lhs, int& Rhs)
{
	int Temp; // 165
} /* size: 0, variables: 1 */

// <061E9ADA> thirdparty/quickhull/qhMemory.inl:163
// variable: 1
inline void qhSwap<const qhFace**>(const qhFace* *& Lhs, const qhFace* *& Rhs)
{
	const qhFace ** Temp; // 165
} /* size: 0, variables: 1 */

// <0610D9F7> ../thirdparty/quickhull/qhMemory.inl:163
// variable: 1
inline void qhSwap<qhVector3>(qhVector3& Lhs, qhVector3& Rhs)
{
	qhVector3 Temp; // 165
} /* size: 0, variables: 1 */

