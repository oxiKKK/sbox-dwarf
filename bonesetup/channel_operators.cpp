
//
// bonesetup/channel_operators.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 116
//

// <0280DF88> bonesetup/channel_operators.cpp:33
void CAnimationChannelResult::CAnimationChannelResult(const CAnimDataChannel* pChannel)
{
} /* size: 0 */

// <0280DE2B> bonesetup/channel_operators.cpp:49
// function calls: 4
void CAnimationChannelResult::~CAnimationChannelResult()
{
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 53
} /* size: 113, inline expansions: 4 (123 bytes) */

// <0280DE0F> bonesetup/channel_operators.cpp:49
void CAnimationChannelResult::~CAnimationChannelResult()
{
} /* size: 0 */

// <0280DC2C> bonesetup/channel_operators.cpp:59
// variables: 4
// function calls: 4
void CAnimationChannelResult::Init(const CAnimDataChannel* pChannel)
{
	const char   __FUNCTION__; // 21349
	void* pData; // 71
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 71
} /* size: 0, variables: 2, inline expansions: 4 (138 bytes) */

// <0280DB29> bonesetup/channel_operators.cpp:91
// variables: 4
// function call: 1
void CAnimationChannelResult::ZeroData()
{
	const char   __FUNCTION__; // 21452
	{
		Quaternion zeroQ; // 97
		{
			int i; // 98
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 111
} /* size: 0, variables: 1, inline expansions: 1 (14 bytes) */

// <0280DA6C> bonesetup/channel_operators.cpp:124
// variables: 2
void CAnimationChannelResult::CreateMap(int32* pElementIndex, int nCount, const int* pMap, const int32* pElement)
{
	{
		int i; // 126
		{
			int j; // 128
		}
	}
} /* size: 0 */

// <027F1678> bonesetup/channel_operators.cpp:137
// variables: 3
void CAnimationChannelResult::Copy<float>(const float* pSrc, int nCount, const int32* pElementIndex)
{
	float* pDst; // 139
	{
		int i; // 140
		{
			int k; // 142
		}
	}
} /* size: 0, variables: 1 */

// <027F1610> bonesetup/channel_operators.cpp:137
// variables: 3
void CAnimationChannelResult::Copy<Vector>(const Vector* pSrc, int nCount, const int32* pElementIndex)
{
	Vector* pDst; // 139
	{
		int i; // 140
		{
			int k; // 142
		}
	}
} /* size: 0, variables: 1 */

// <027F15A8> bonesetup/channel_operators.cpp:137
// variables: 3
void CAnimationChannelResult::Copy<QuaternionAligned>(const QuaternionAligned* pSrc, int nCount, const int32* pElementIndex)
{
	QuaternionAligned* pDst; // 139
	{
		int i; // 140
		{
			int k; // 142
		}
	}
} /* size: 0, variables: 1 */

// <027F1540> bonesetup/channel_operators.cpp:137
// variables: 3
void CAnimationChannelResult::Copy<int>(const int* pSrc, int nCount, const int32* pElementIndex)
{
	int* pDst; // 139
	{
		int i; // 140
		{
			int k; // 142
		}
	}
} /* size: 0, variables: 1 */

// <027F14D8> bonesetup/channel_operators.cpp:137
// variables: 3
void CAnimationChannelResult::Copy<bool>(const bool* pSrc, int nCount, const int32* pElementIndex)
{
	bool* pDst; // 139
	{
		int i; // 140
		{
			int k; // 142
		}
	}
} /* size: 0, variables: 1 */

// <027F1470> bonesetup/channel_operators.cpp:137
// variables: 3
void CAnimationChannelResult::Copy<Color>(const Color* pSrc, int nCount, const int32* pElementIndex)
{
	Color* pDst; // 139
	{
		int i; // 140
		{
			int k; // 142
		}
	}
} /* size: 0, variables: 1 */

// <027F1408> bonesetup/channel_operators.cpp:137
// variables: 3
void CAnimationChannelResult::Copy<Vector2D>(const Vector2D* pSrc, int nCount, const int32* pElementIndex)
{
	Vector2D* pDst; // 139
	{
		int i; // 140
		{
			int k; // 142
		}
	}
} /* size: 0, variables: 1 */

// <027F13A0> bonesetup/channel_operators.cpp:137
// variables: 3
void CAnimationChannelResult::Copy<Vector4D>(const Vector4D* pSrc, int nCount, const int32* pElementIndex)
{
	Vector4D* pDst; // 139
	{
		int i; // 140
		{
			int k; // 142
		}
	}
} /* size: 0, variables: 1 */

// <0280CBD2> bonesetup/channel_operators.cpp:149
// variables: 18
// function calls: 47
void CAnimationChannelResult::Copy(const CAnimationResult& animResult2, int nChannel, int nCount, const int32* pElementIndex)
{
	const char   __FUNCTION__; // 21349
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1133
	CAnimationResult::GetChannelData(
			int nChannel);  // 176
	{
		int i; // 140
		{
			int k; // 142
			Vector4D::operator=(
					const Vector4D& vOther);  // 143
		}
	}
	CAnimationChannelResult::Copy<Vector4D>(
			const Vector4D* pSrc,
			int nCount,
			const int32* pElementIndex);  // 176
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1133
	CAnimationResult::GetChannelData(
			int nChannel);  // 155
	{
		int i; // 140
		{
			int k; // 142
		}
	}
	CAnimationChannelResult::Copy<float>(
			const float* pSrc,
			int nCount,
			const int32* pElementIndex);  // 155
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1133
	CAnimationResult::GetChannelData(
			int nChannel);  // 158
	{
		int i; // 140
		{
			int k; // 142
			Vector::operator=(
					const Vector& vOther);  // 143
		}
	}
	CAnimationChannelResult::Copy<Vector>(
			const Vector* pSrc,
			int nCount,
			const int32* pElementIndex);  // 158
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1133
	CAnimationResult::GetChannelData(
			int nChannel);  // 161
	{
		int i; // 140
		{
			int k; // 142
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 143
		}
	}
	CAnimationChannelResult::Copy<QuaternionAligned>(
				const QuaternionAligned* pSrc,
				int nCount,
				const int32* pElementIndex);  // 161
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1133
	CAnimationResult::GetChannelData(
			int nChannel);  // 164
	{
		int i; // 140
		{
			int k; // 142
		}
	}
	CAnimationChannelResult::Copy<int>(
			const int* pSrc,
			int nCount,
			const int32* pElementIndex);  // 164
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1133
	CAnimationResult::GetChannelData(
			int nChannel);  // 167
	{
		int i; // 140
		{
			int k; // 142
		}
	}
	CAnimationChannelResult::Copy<bool>(
			const bool* pSrc,
			int nCount,
			const int32* pElementIndex);  // 167
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1133
	CAnimationResult::GetChannelData(
			int nChannel);  // 170
	{
		int i; // 140
		{
			int k; // 142
			Color::GetRawColor(); // 147
			Color::SetRawColor(
					int32 Color);  // 147
			Color::operator=(
					const Color& rhs);  // 143
		}
	}
	CAnimationChannelResult::Copy<Color>(
			const Color* pSrc,
			int nCount,
			const int32* pElementIndex);  // 170
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1133
	CAnimationResult::GetChannelData(
			int nChannel);  // 173
	{
		int i; // 140
		{
			int k; // 142
			Vector2D::operator=(
					const Vector2D& vOther);  // 143
		}
	}
	CAnimationChannelResult::Copy<Vector2D>(
			const Vector2D* pSrc,
			int nCount,
			const int32* pElementIndex);  // 173
} /* size: 0, variables: 1, inline expansions: 40 (825 bytes) */

// <0280C9AB> bonesetup/channel_operators.cpp:184
// variables: 2
// function calls: 6
void CAnimationChannelResult::CopyAllElements(const CAnimationResult& animResult2, int nChannel, int nCount)
{
	uint8* pDst; // 190
	uint8* pSrc; // 191
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1133
	CAnimationResult::GetChannelData(
			int nChannel);  // 191
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 192
} /* size: 81, variables: 2, inline expansions: 6 (51 bytes) */

// <0280C54D> bonesetup/channel_operators.cpp:195
// variables: 8
// function calls: 15
void CAnimationResult::Copy(const CAnimationResult& animResult2)
{
	const ChannelWeightlist_t* pWeightArray; // 197
	{
		int i; // 200
		{
			const ChannelElementWeights_t* pChannelWeights; // 202
			int nChannel; // 204
			CAnimationChannelResult* pChannel; // 214
			const RequestElementWeights_t* pLod; // 217
			int nCount; // 218
			const int32* pElementIndex; // 219
			CUtlMemory<ChannelElementWeights_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::operator[](
					int i);  // 202
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1160
			CAnimationResult::IsChannelActive(
					int nChannel);  // 207
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1269
			CAnimationResult::IsChannelUsed(
					int nChannel);  // 211
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 214
			CUtlMemory<RequestElementWeights_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
					int i);  // 217
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 218
			CUtlMemory<int, int>::Base(); // 113
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 219
		}
		CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::Count(); // 200
	}
} /* size: 150, variables: 1 */

// <027F06C8> bonesetup/channel_operators.cpp:232
// variables: 5
void CAnimationChannelResult::Blend<float>(float s, const float* pSrc, int nCount, const int* pElementIndex)
{
	float* pDst; // 234
	float s2; // 235
	float s1; // 236
	{
		int i; // 237
		{
			int k; // 239
		}
	}
} /* size: 0, variables: 3 */

// <027F0640> bonesetup/channel_operators.cpp:232
// variables: 5
void CAnimationChannelResult::Blend<int>(float s, const int* pSrc, int nCount, const int* pElementIndex)
{
	int* pDst; // 234
	float s2; // 235
	float s1; // 236
	{
		int i; // 237
		{
			int k; // 239
		}
	}
} /* size: 0, variables: 3 */

// <027F05B8> bonesetup/channel_operators.cpp:232
// variables: 5
void CAnimationChannelResult::Blend<Vector2D>(float s, const Vector2D* pSrc, int nCount, const int* pElementIndex)
{
	Vector2D* pDst; // 234
	float s2; // 235
	float s1; // 236
	{
		int i; // 237
		{
			int k; // 239
		}
	}
} /* size: 0, variables: 3 */

// <027F0530> bonesetup/channel_operators.cpp:232
// variables: 5
void CAnimationChannelResult::Blend<Vector4D>(float s, const Vector4D* pSrc, int nCount, const int* pElementIndex)
{
	Vector4D* pDst; // 234
	float s2; // 235
	float s1; // 236
	{
		int i; // 237
		{
			int k; // 239
		}
	}
} /* size: 0, variables: 3 */

// <0280C249> bonesetup/channel_operators.cpp:245
// variables: 5
// function calls: 10
void CAnimationChannelResult::Blend(float s, const Vector* pSrc, int nCount, const int* pElementIndex)
{
	Vector* pDst; // 247
	float s2; // 248
	float s1; // 249
	{
		int i; // 250
		{
			int k; // 252
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 253
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 253
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 253
			Vector::operator=(
					const Vector& vOther);  // 253
		}
	}
} /* size: 150, variables: 3 */

// <028143B9> bonesetup/channel_operators.cpp:257
// variables: 4
// function calls: 2
void CAnimationChannelResult::Blend(float s, const QuaternionAligned* pSrc, int nCount, const int* pElementIndex)
{
	QuaternionAligned* pDst; // 260
	QuaternionAligned q3; // 261
	{
		int i; // 262
		{
			int k; // 264
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 266
		}
	}
	QuaternionAligned::QuaternionAligned(); // 261
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <0280C1A1> bonesetup/channel_operators.cpp:257
// variables: 4
void CAnimationChannelResult::Blend(float s, const QuaternionAligned* pSrc, int nCount, const int* pElementIndex)
{
	QuaternionAligned* pDst; // 260
	QuaternionAligned q3; // 261
	{
		int i; // 262
		{
			int k; // 264
		}
	}
} /* size: 0, variables: 2 */

// <028144DC> bonesetup/channel_operators.cpp:270
// variables: 2
// function calls: 2
void CAnimationChannelResult::Blend(float s, const bool* pSrc, int nCount, const int* pElementIndex)
{
	{
		int i; // 140
		{
			int k; // 142
		}
	}
	CAnimationChannelResult::Copy<bool>(
			const bool* pSrc,
			int nCount,
			const int32* pElementIndex);  // 275
	CAnimationChannelResult::Blend(
		float s,
		const bool* pSrc,
		int nCount,
		const int* pElementIndex);  // 270
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0280C152> bonesetup/channel_operators.cpp:270
void CAnimationChannelResult::Blend(float s, const bool* pSrc, int nCount, const int* pElementIndex)
{
} /* size: 0 */

// <0280C05C> bonesetup/channel_operators.cpp:280
// variables: 5
void CAnimationChannelResult::Blend(float s, const Color* pSrc, int nCount, const int* pElementIndex)
{
	Color* pDst; // 282
	float s2; // 283
	float s1; // 284
	{
		int i; // 285
		{
			int k; // 287
		}
	}
} /* size: 297, variables: 3 */

// <027F0219> bonesetup/channel_operators.cpp:301
// variables: 3
void CAnimationChannelResult::Add<float>(float s, const float* pSrc, int nCount, const int32* pElementIndex, const float* pWeight)
{
	float* pDst; // 303
	{
		int i; // 304
		{
			int k; // 306
		}
	}
} /* size: 0, variables: 1 */

// <027F0193> bonesetup/channel_operators.cpp:301
// variables: 3
void CAnimationChannelResult::Add<int>(float s, const int* pSrc, int nCount, const int32* pElementIndex, const float* pWeight)
{
	int* pDst; // 303
	{
		int i; // 304
		{
			int k; // 306
		}
	}
} /* size: 0, variables: 1 */

// <027F010D> bonesetup/channel_operators.cpp:301
// variables: 3
void CAnimationChannelResult::Add<Vector2D>(float s, const Vector2D* pSrc, int nCount, const int32* pElementIndex, const float* pWeight)
{
	Vector2D* pDst; // 303
	{
		int i; // 304
		{
			int k; // 306
		}
	}
} /* size: 0, variables: 1 */

// <027F0087> bonesetup/channel_operators.cpp:301
// variables: 3
void CAnimationChannelResult::Add<Vector4D>(float s, const Vector4D* pSrc, int nCount, const int32* pElementIndex, const float* pWeight)
{
	Vector4D* pDst; // 303
	{
		int i; // 304
		{
			int k; // 306
		}
	}
} /* size: 0, variables: 1 */

// <0280BD7B> bonesetup/channel_operators.cpp:311
// variables: 3
// function calls: 10
void CAnimationChannelResult::Add(float s, const Vector* pSrc, int nCount, const int32* pElementIndex, const float* pWeight)
{
	Vector* pDst; // 313
	{
		int i; // 314
		{
			int k; // 316
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 317
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 317
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 317
			Vector::operator=(
					const Vector& vOther);  // 317
		}
	}
} /* size: 147, variables: 1 */

// <0281462F> bonesetup/channel_operators.cpp:321
// variables: 3
void CAnimationChannelResult::Add(float s, const QuaternionAligned* pSrc, int nCount, const int32* pElementIndex, const float* pWeight)
{
	QuaternionAligned* pDst; // 324
	{
		int i; // 337
		{
			int k; // 339
		}
	}
} /* size: 0, variables: 1 */

// <0280BC8F> bonesetup/channel_operators.cpp:344
void CAnimationChannelResult::Add(float s, const bool* pSrc, int nCount, const int32* pElementIndex, const float* pWeight)
{
} /* size: 0 */

// <0280BBAC> bonesetup/channel_operators.cpp:354
// variables: 3
void CAnimationChannelResult::Add(float s, const Color* pSrc, int nCount, const int32* pElementIndex, const float* pWeight)
{
	Color* pDst; // 356
	{
		int i; // 357
		{
			int k; // 359
		}
	}
} /* size: 241, variables: 1 */

// <027F0019> bonesetup/channel_operators.cpp:373
// variables: 3
void CAnimationChannelResult::Subtract<float>(const float* pSrc, int nCount, const int32* pElementIndex)
{
	float* pDst; // 375
	{
		int i; // 376
		{
			int k; // 378
		}
	}
} /* size: 0, variables: 1 */

// <027EFFAB> bonesetup/channel_operators.cpp:373
// variables: 3
void CAnimationChannelResult::Subtract<int>(const int* pSrc, int nCount, const int32* pElementIndex)
{
	int* pDst; // 375
	{
		int i; // 376
		{
			int k; // 378
		}
	}
} /* size: 0, variables: 1 */

// <027EFF3D> bonesetup/channel_operators.cpp:373
// variables: 3
void CAnimationChannelResult::Subtract<Vector2D>(const Vector2D* pSrc, int nCount, const int32* pElementIndex)
{
	Vector2D* pDst; // 375
	{
		int i; // 376
		{
			int k; // 378
		}
	}
} /* size: 0, variables: 1 */

// <027EFECF> bonesetup/channel_operators.cpp:373
// variables: 3
void CAnimationChannelResult::Subtract<Vector4D>(const Vector4D* pSrc, int nCount, const int32* pElementIndex)
{
	Vector4D* pDst; // 375
	{
		int i; // 376
		{
			int k; // 378
		}
	}
} /* size: 0, variables: 1 */

// <0280BAA7> bonesetup/channel_operators.cpp:383
// variables: 3
// function call: 1
void CAnimationChannelResult::Subtract(const Vector* pSrc, int nCount, const int32* pElementIndex)
{
	Vector* pDst; // 385
	{
		int i; // 386
		{
			int k; // 388
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 389
		}
	}
} /* size: 116, variables: 1 */

// <028146DC> bonesetup/channel_operators.cpp:393
// variables: 3
void CAnimationChannelResult::Subtract(const QuaternionAligned* pSrc, int nCount, const int32* pElementIndex)
{
	QuaternionAligned* pDst; // 396
	{
		int i; // 409
		{
			int k; // 411
		}
	}
} /* size: 0, variables: 1 */

// <0281476F> bonesetup/channel_operators.cpp:416
// variables: 2
// function call: 1
void CAnimationChannelResult::Subtract(const bool* pSrc, int nCount, const int32* pElementIndex)
{
	{
		int i; // 140
		{
			int k; // 142
		}
	}
	CAnimationChannelResult::Copy<bool>(
			const bool* pSrc,
			int nCount,
			const int32* pElementIndex);  // 419
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0280B9DF> bonesetup/channel_operators.cpp:416
void CAnimationChannelResult::Subtract(const bool* pSrc, int nCount, const int32* pElementIndex)
{
} /* size: 0 */

// <0280B925> bonesetup/channel_operators.cpp:423
// variables: 3
void CAnimationChannelResult::Subtract(const Color* pSrc, int nCount, const int32* pElementIndex)
{
	Color* pDst; // 425
	{
		int i; // 426
		{
			int k; // 428
		}
	}
} /* size: 98, variables: 1 */

// <027F0479> bonesetup/channel_operators.cpp:442
// variables: 5
void CAnimationChannelResult::Slerp<float>(float s, const float* pSrc, int nCount, const int32* pElementIndex, const float* pWeight)
{
	float* pDst; // 444
	{
		int i; // 445
		{
			float s2; // 447
			float s1; // 448
			int k; // 449
		}
	}
} /* size: 0, variables: 1 */

// <027F03DB> bonesetup/channel_operators.cpp:442
// variables: 5
void CAnimationChannelResult::Slerp<int>(float s, const int* pSrc, int nCount, const int32* pElementIndex, const float* pWeight)
{
	int* pDst; // 444
	{
		int i; // 445
		{
			float s2; // 447
			float s1; // 448
			int k; // 449
		}
	}
} /* size: 0, variables: 1 */

// <027F033D> bonesetup/channel_operators.cpp:442
// variables: 5
void CAnimationChannelResult::Slerp<Vector2D>(float s, const Vector2D* pSrc, int nCount, const int32* pElementIndex, const float* pWeight)
{
	Vector2D* pDst; // 444
	{
		int i; // 445
		{
			float s2; // 447
			float s1; // 448
			int k; // 449
		}
	}
} /* size: 0, variables: 1 */

// <027F029F> bonesetup/channel_operators.cpp:442
// variables: 5
void CAnimationChannelResult::Slerp<Vector4D>(float s, const Vector4D* pSrc, int nCount, const int32* pElementIndex, const float* pWeight)
{
	Vector4D* pDst; // 444
	{
		int i; // 445
		{
			float s2; // 447
			float s1; // 448
			int k; // 449
		}
	}
} /* size: 0, variables: 1 */

// <027EE9B7> bonesetup/channel_operators.cpp:504
void CAnimationChannelResult::Scale<float>(float* pDst, float s)
{
} /* size: 0 */

// <027EE97F> bonesetup/channel_operators.cpp:504
void CAnimationChannelResult::Scale<int>(int* pDst, float s)
{
} /* size: 0 */

// <027EE947> bonesetup/channel_operators.cpp:504
void CAnimationChannelResult::Scale<Vector2D>(Vector2D* pDst, float s)
{
} /* size: 0 */

// <027EE90F> bonesetup/channel_operators.cpp:504
void CAnimationChannelResult::Scale<Vector4D>(Vector4D* pDst, float s)
{
} /* size: 0 */

// <0280B206> bonesetup/channel_operators.cpp:509
// variable: 1
// function calls: 6
void CAnimationChannelResult::Scale<QuaternionAligned>(QuaternionAligned* pDst, float s)
{
	Quaternion qTmp; // 511
	Quaternion::Quaternion(); // 511
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 512
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 513
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <02814A59> bonesetup/channel_operators.cpp:516
void CAnimationChannelResult::Scale<Color>(Color* pDst, float s)
{
} /* size: 0 */

// <027EFE63> bonesetup/channel_operators.cpp:524
// variables: 3
void CAnimationChannelResult::Scale<float>(float s, int nCount, const int32* pElementIndex)
{
	float* pDst; // 526
	{
		int i; // 527
		{
			int k; // 529
		}
	}
} /* size: 0, variables: 1 */

// <027EFDF7> bonesetup/channel_operators.cpp:524
// variables: 3
void CAnimationChannelResult::Scale<int>(float s, int nCount, const int32* pElementIndex)
{
	int* pDst; // 526
	{
		int i; // 527
		{
			int k; // 529
		}
	}
} /* size: 0, variables: 1 */

// <027EFD8B> bonesetup/channel_operators.cpp:524
// variables: 3
void CAnimationChannelResult::Scale<Color>(float s, int nCount, const int32* pElementIndex)
{
	Color* pDst; // 526
	{
		int i; // 527
		{
			int k; // 529
		}
	}
} /* size: 0, variables: 1 */

// <027EFD1F> bonesetup/channel_operators.cpp:524
// variables: 3
void CAnimationChannelResult::Scale<Vector2D>(float s, int nCount, const int32* pElementIndex)
{
	Vector2D* pDst; // 526
	{
		int i; // 527
		{
			int k; // 529
		}
	}
} /* size: 0, variables: 1 */

// <027EFCB3> bonesetup/channel_operators.cpp:524
// variables: 3
void CAnimationChannelResult::Scale<Vector4D>(float s, int nCount, const int32* pElementIndex)
{
	Vector4D* pDst; // 526
	{
		int i; // 527
		{
			int k; // 529
		}
	}
} /* size: 0, variables: 1 */

// <02814A96> bonesetup/channel_operators.cpp:534
// variables: 3
// function calls: 4
void CAnimationChannelResult::Scale<Vector>(float s, int nCount, const int32* pElementIndex)
{
	Vector* pDst; // 536
	{
		int i; // 537
		{
			int k; // 539
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 540
			Vector::operator=(
					const Vector& vOther);  // 540
		}
	}
} /* size: 0, variables: 1 */

// <0280B162> bonesetup/channel_operators.cpp:534
// variables: 3
void CAnimationChannelResult::Scale<Vector>(float s, int nCount, const int32* pElementIndex)
{
	Vector* pDst; // 536
	{
		int i; // 537
		{
			int k; // 539
		}
	}
} /* size: 0, variables: 1 */

// <0280AEE0> bonesetup/channel_operators.cpp:544
// variables: 6
// function calls: 6
void CAnimationChannelResult::Scale<QuaternionAligned>(float s, int nCount, const int32* pElementIndex)
{
	QuaternionAligned* pDst; // 546
	float s2; // 547
	float s1; // 548
	{
		int i; // 549
		{
			int k; // 551
			Quaternion qTmp; // 552
			Quaternion::Quaternion(); // 552
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 553
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 217
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 554
		}
	}
} /* size: 167, variables: 3 */

// <02814BE8> bonesetup/channel_operators.cpp:558
// variable: 1
void CAnimationChannelResult::Scale<bool>(float s, int nCount, const int32* pElementIndex)
{
	bool* pDst; // 560
} /* size: 0, variables: 1 */

// <0280A308> bonesetup/channel_operators.cpp:574
// function calls: 43
void CAnimationResult::CAnimationResult()
{
	CUtlMemory<CAnimationChannelResult, int>::CUtlMemory(
			CAnimationChannelResult* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CAnimationChannelResult, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CAnimationChannelResult, int>::CUtlMemoryFixedGrowable_Base(
					CAnimationChannelResult* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<12, CAnimationChannelResult>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CAnimationChannelResult, 12>::CUtlVectorFixedGrowable(
				int growSize);  // 577
	{
	}
	AlignedByteArrayExplicit_t<12, IKLocked_t, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<12, IKLocked_t>::AlignedByteArray_t(); // 228
	CUtlMemory<IKLocked_t, int>::CUtlMemory(
			IKLocked_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<IKLocked_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<IKLocked_t, int>::CUtlMemoryFixedGrowable_Base(
					IKLocked_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<12, IKLocked_t, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<IKLocked_t, 12, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<IKLocked_t, 12>::CUtlVectorFixedGrowable(
				int growSize);  // 577
	{
	}
	AlignedByteArrayExplicit_t<64, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, CTransform>::AlignedByteArray_t(); // 228
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 577
	{
	}
	AlignedByteArrayExplicit_t<64, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, CTransform>::AlignedByteArray_t(); // 228
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 577
	CVarBitVecBase<short unsigned int, 1024>::AllocInts(
			int numInts);  // 1294
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(
			int numBits);  // 1419
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(
			int numBits);  // 134
	CBoneBitList::CBoneBitList(
			int nMaxBones);  // 577
} /* size: 378, inline expansions: 43 (1033 bytes) */

// <0280A2EB> bonesetup/channel_operators.cpp:574
void CAnimationResult::CAnimationResult()
{
} /* size: 0 */

// <0280983E> bonesetup/channel_operators.cpp:581
// function calls: 43
void CAnimationResult::CAnimationResult(const CAnimationResult& animResult)
{
	CUtlMemory<CAnimationChannelResult, int>::CUtlMemory(
			CAnimationChannelResult* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CAnimationChannelResult, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CAnimationChannelResult, int>::CUtlMemoryFixedGrowable_Base(
					CAnimationChannelResult* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<12, CAnimationChannelResult>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CAnimationChannelResult, 12>::CUtlVectorFixedGrowable(
				int growSize);  // 584
	{
	}
	AlignedByteArrayExplicit_t<12, IKLocked_t, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<12, IKLocked_t>::AlignedByteArray_t(); // 228
	CUtlMemory<IKLocked_t, int>::CUtlMemory(
			IKLocked_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<IKLocked_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<IKLocked_t, int>::CUtlMemoryFixedGrowable_Base(
					IKLocked_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<12, IKLocked_t, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<IKLocked_t, 12, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<IKLocked_t, 12>::CUtlVectorFixedGrowable(
				int growSize);  // 584
	{
	}
	AlignedByteArrayExplicit_t<64, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, CTransform>::AlignedByteArray_t(); // 228
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 584
	{
	}
	AlignedByteArrayExplicit_t<64, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, CTransform>::AlignedByteArray_t(); // 228
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 584
	CVarBitVecBase<short unsigned int, 1024>::AllocInts(
			int numInts);  // 1294
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(
			int numBits);  // 1419
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(
			int numBits);  // 134
	CBoneBitList::CBoneBitList(
			int nMaxBones);  // 584
} /* size: 410, inline expansions: 43 (1057 bytes) */

// <02809814> bonesetup/channel_operators.cpp:581
void CAnimationResult::CAnimationResult(const CAnimationResult& animResult)
{
} /* size: 0 */

// <02808D5C> bonesetup/channel_operators.cpp:589
// function calls: 43
void CAnimationResult::CAnimationResult(const CModel* pModel, int nRequestIndex)
{
	CUtlMemory<CAnimationChannelResult, int>::CUtlMemory(
			CAnimationChannelResult* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CAnimationChannelResult, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CAnimationChannelResult, int>::CUtlMemoryFixedGrowable_Base(
					CAnimationChannelResult* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<12, CAnimationChannelResult>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CAnimationChannelResult, 12>::CUtlVectorFixedGrowable(
				int growSize);  // 592
	{
	}
	AlignedByteArrayExplicit_t<12, IKLocked_t, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<12, IKLocked_t>::AlignedByteArray_t(); // 228
	CUtlMemory<IKLocked_t, int>::CUtlMemory(
			IKLocked_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<IKLocked_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<IKLocked_t, int>::CUtlMemoryFixedGrowable_Base(
					IKLocked_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<12, IKLocked_t, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<IKLocked_t, 12, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<IKLocked_t, 12>::CUtlVectorFixedGrowable(
				int growSize);  // 592
	{
	}
	AlignedByteArrayExplicit_t<64, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, CTransform>::AlignedByteArray_t(); // 228
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 592
	{
	}
	AlignedByteArrayExplicit_t<64, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, CTransform>::AlignedByteArray_t(); // 228
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 592
	CVarBitVecBase<short unsigned int, 1024>::AllocInts(
			int numInts);  // 1294
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(
			int numBits);  // 1419
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(
			int numBits);  // 134
	CBoneBitList::CBoneBitList(
			int nMaxBones);  // 592
} /* size: 410, inline expansions: 43 (1033 bytes) */

// <02808D25> bonesetup/channel_operators.cpp:589
void CAnimationResult::CAnimationResult(const CModel* pModel, int nRequestIndex)
{
} /* size: 0 */

// <02808045> bonesetup/channel_operators.cpp:601
// variables: 2
// function calls: 65
void CAnimationResult::~CAnimationResult()
{
	CVarBitVecBase<short unsigned int, 1024>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 1024>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 1024>::~CVarBitVecT(); // 130
	CBoneBitList::~CBoneBitList(); // 604
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 64, int>::~CUtlMemoryFixedGrowable(); // 604
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 64, int>::~CUtlMemoryFixedGrowable(); // 604
	{
		int i; // 1721
		CUtlMemory<IKLocked_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::Element(
			int i);  // 1723
		CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
		CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
		CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
		CVarBitVec::~CVarBitVec(); // 117
		IKLocked_t::~IKLocked_t(); // 1526
		Destruct<IKLocked_t>(IKLocked_t* pMemory); // 1723
	}
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::RemoveAll(); // 1798
	CUtlMemory<IKLocked_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<IKLocked_t, int>::ConvertToExternalMemory(
				IKLocked_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<IKLocked_t, int>::Purge_FixedGrowable(
				IKLocked_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<IKLocked_t, int>::Purge_FixedGrowable(
				IKLocked_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<12, IKLocked_t, 16>::Base(); // 237
	CUtlMemoryFixedGrowable<IKLocked_t, 12, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::Purge(); // 560
	ValidateAlignment<IKLocked_t>(void); // 508
	CUtlMemory<IKLocked_t, int>::Purge(); // 903
	CUtlMemory<IKLocked_t, int>::Purge(); // 510
	CUtlMemory<IKLocked_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<IKLocked_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<IKLocked_t, 12, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<IKLocked_t, 12>::~CUtlVectorFixedGrowable(); // 604
	{
		int i; // 1721
		CUtlMemory<CAnimationChannelResult, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Element(
			int i);  // 1723
		Destruct<CAnimationChannelResult>(CAnimationChannelResult* pMemory); // 1723
	}
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8>::Base(); // 237
	CUtlMemory<CAnimationChannelResult, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CAnimationChannelResult, int>::ConvertToExternalMemory(
				CAnimationChannelResult* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CAnimationChannelResult, int>::Purge_FixedGrowable(
				CAnimationChannelResult* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CAnimationChannelResult, int>::Purge_FixedGrowable(
				CAnimationChannelResult* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Purge(); // 560
	ValidateAlignment<CAnimationChannelResult>(void); // 508
	CUtlMemory<CAnimationChannelResult, int>::Purge(); // 903
	CUtlMemory<CAnimationChannelResult, int>::Purge(); // 510
	CUtlMemory<CAnimationChannelResult, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CAnimationChannelResult, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CAnimationChannelResult, 12>::~CUtlVectorFixedGrowable(); // 604
} /* size: 541, inline expansions: 53 (2468 bytes) */

// <02808028> bonesetup/channel_operators.cpp:601
void CAnimationResult::~CAnimationResult()
{
} /* size: 0 */

// <028150F4> bonesetup/channel_operators.cpp:608
// variables: 3
// function calls: 7
void CAnimationResult::Init(const CModel* pModel, int nRequestIndex)
{
	const CAnimContainer* pContainer; // 620
	CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 625
	{
		int nChannel; // 626
		CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 626
		{
			const CAnimDataChannel* pChannel; // 628
			CUtlMemory<CAnimDataChannel, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
					int i);  // 628
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 629
		}
	}
	CAnimationResult::Init(
		const CModel* pModel,
		int nRequestIndex);  // 608
} /* size: 161, variables: 1, inline expansions: 2 (96 bytes) */

// <02807FC6> bonesetup/channel_operators.cpp:608
// variables: 3
void CAnimationResult::Init(const CModel* pModel, int nRequestIndex)
{
	const CAnimContainer* pContainer; // 620
	{
		int nChannel; // 626
		{
			const CAnimDataChannel* pChannel; // 628
		}
	}
} /* size: 0, variables: 1 */

// <02807A72> bonesetup/channel_operators.cpp:634
// variables: 2
// function calls: 22
void CAnimationResult::Clear()
{
	{
		int i; // 1721
		CUtlMemory<CAnimationChannelResult, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Element(
			int i);  // 1723
		Destruct<CAnimationChannelResult>(CAnimationChannelResult* pMemory); // 1723
	}
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::RemoveAll(); // 636
	{
		int i; // 1721
		CUtlMemory<IKLocked_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::Element(
			int i);  // 1723
		CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
		CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
		CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
		CVarBitVec::~CVarBitVec(); // 117
		IKLocked_t::~IKLocked_t(); // 1526
		Destruct<IKLocked_t>(IKLocked_t* pMemory); // 1723
	}
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::RemoveAll(); // 637
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 237
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CTransform, 64, int>::Purge(
		int numElements);  // 639
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 237
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CTransform, 64, int>::Purge(
		int numElements);  // 640
} /* size: 274, inline expansions: 10 (388 bytes) */

// <0280606A> bonesetup/channel_operators.cpp:647
// variables: 29
// function calls: 93
void CAnimationResult::GetBones(int nCount, CTransform* pTransforms, const uint32* pRequestedBoneBitVec)
{
	const CAnimContainer* pContainer; // 652
	const ElementRequestPattern_t& elementRequestPattern; // 669
	const char   __FUNCTION__; // 21452
	{
		int nBone; // 658
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 664
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 661
	}
	{
		int nBone; // 678
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 681
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 684
	}
	{
		int nBone; // 693
		{
			const int  nPosChannel; // 699
			const int  nPosIndex; // 700
			const int  nScaleChannel; // 702
			const int  nScaleIndex; // 703
			float flScale; // 705
			const int  nRotChannel; // 724
			const int  nRotIndex; // 725
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 710
			}
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 707
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 111
			VectorAligned::operator=(
					fltx4 src);  // 111
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 715
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 724
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 727
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 729
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 696
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 699
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 702
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 713
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 111
			VectorAligned::operator=(
					fltx4 src);  // 111
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 719
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 217
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 733
		}
	}
	{
		int nBone; // 744
		{
			const int  nPosChannel; // 750
			const int  nPosIndex; // 751
			const int  nScaleChannel; // 753
			const int  nScaleIndex; // 754
			float flScale; // 756
			const int  nRotChannel; // 775
			const int  nRotIndex; // 776
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 761
			}
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 750
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 753
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 758
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 758
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 760
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 764
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 111
			VectorAligned::operator=(
					fltx4 src);  // 111
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 770
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 775
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 778
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 217
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 784
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 747
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 764
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 766
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 111
			VectorAligned::operator=(
					fltx4 src);  // 111
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 766
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 778
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 780
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 780
		}
	}
	Min<int>(const int& val1,
		const int& val2);  // 657
	CUtlMemory<ElementRequestPattern_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::operator[](
			int i);  // 669
	GetEndMask(int numBits); // 1087
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1087
	CVarBitVecBase<short unsigned int, 32>::GetEndMask(); // 1875
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1875
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1875
	{
		int i; // 1877
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1877
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1879
	}
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsAllClear(); // 673
	Min<int>(const int& val1,
		const int& val2);  // 671
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Count(); // 671
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1087
	GetEndMask(int numBits); // 1087
	CVarBitVecBase<short unsigned int, 32>::GetEndMask(); // 1898
	{
		int i; // 1900
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1900
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1902
	}
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsAllSet(); // 687
} /* size: 0, variables: 3, inline expansions: 15 (303 bytes) */

// <028058B1> bonesetup/channel_operators.cpp:796
// variables: 14
// function calls: 26
void CAnimationResult::GetBones(const CUtlVector<int, CUtlMemory<int, int> >& boneList, CTransform* pTransforms)
{
	const CAnimContainer* pContainer; // 801
	int nBone; // 805
	int nChannel; // 806
	int nIndex; // 807
	int nCount; // 809
	int nCopy; // 811
	const int* pBoneList; // 812
	const char   __FUNCTION__; // 21452
	{
		const int  nScaleChannel; // 821
		const int  nScaleIndex; // 822
		float flScale; // 824
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 816
		}
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 111
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 833
		CUtlMemory<ChannelElementMap_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
				int i);  // 841
		CUtlMemory<CAnimationChannelResult, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
				int i);  // 843
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 845
		CUtlMemory<ChannelElementMap_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
				int i);  // 818
		CUtlMemory<ChannelElementMap_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
				int i);  // 821
		CUtlMemory<CAnimationChannelResult, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
				int i);  // 826
		CUtlMemory<CAnimationChannelResult, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
				int i);  // 831
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 111
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 837
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 849
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 811
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 812
} /* size: 0, variables: 8, inline expansions: 3 (55 bytes) */

// <02814C33> bonesetup/channel_operators.cpp:865
// variable: 1
// function calls: 2
void CAnimationResult::SetBones(int nCount, const CTransform* pTransforms)
{
	const CAnimContainer* pContainer; // 870
	CUtlMemory<ElementRequestPattern_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::operator[](
			int i);  // 874
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0280586D> bonesetup/channel_operators.cpp:865
// variable: 1
void CAnimationResult::SetBones(int nCount, const CTransform* pTransforms)
{
	const CAnimContainer* pContainer; // 870
} /* size: 0, variables: 1 */

// <02804E95> bonesetup/channel_operators.cpp:878
// variables: 11
// function calls: 41
void CAnimationResult::SetBones(const CUtlVector<int, CUtlMemory<int, int> >& boneList, const CTransform* pTransforms)
{
	const CAnimContainer* pContainer; // 883
	int nBone; // 887
	int nChannel; // 888
	int nIndex; // 889
	int nCount; // 891
	int nCopy; // 893
	const int* pBoneList; // 894
	const char   __FUNCTION__; // 21452
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 898
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 907
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 918
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 893
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 894
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 900
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 902
	CAnimationResult::InitData(
		int nChannel);  // 904
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 905
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 908
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 908
	Vector::operator=(
			const Vector& vOther);  // 908
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 911
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 913
	CAnimationResult::InitData(
		int nChannel);  // 915
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 916
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 919
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 919
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 923
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 927
	CAnimationResult::InitData(
		int nChannel);  // 929
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 930
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 933
	VectorAligned::operator fltx4(); // 98
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	CTransform::GetScale(); // 933
} /* size: 0, variables: 8, inline expansions: 41 (391 bytes) */

// <02804CB5> bonesetup/channel_operators.cpp:940
// variable: 1
// function calls: 8
void CAnimationResult::SetBoneTranslationDirect(int nAnimContainerBoneIndex, int nPosChannel, const VectorAligned& vTranslation)
{
	const int  nPosIndex; // 945
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 946
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 946
	Vector::operator=(
			const Vector& vOther);  // 946
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <02804B98> bonesetup/channel_operators.cpp:951
// variable: 1
// function calls: 3
void CAnimationResult::SetBoneRotationDirect(int nAnimContainerBoneIndex, int nRotChannel, const QuaternionAligned& qRotation)
{
	const int  nRotIndex; // 956
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 957
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 957
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <02804A99> bonesetup/channel_operators.cpp:962
// variable: 1
// function calls: 2
void CAnimationResult::SetMorphTargetDirect(int nAnimContainerMorphIndex, int nMorphChannel, float flValue)
{
	const int  nMorphIndex; // 967
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 968
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <02803A15> bonesetup/channel_operators.cpp:973
// variables: 10
// function calls: 76
void CAnimationResult::SetBone(int nBone, const CTransform& transform)
{
	const CAnimContainer* pContainer; // 978
	const int  nPosChannel; // 982
	const int  nPosIndex; // 983
	const int  nRotChannel; // 989
	const int  nRotIndex; // 990
	const int  nScaleChannel; // 996
	const int  nScaleIndex; // 997
	const char   __FUNCTION__; // 21425
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1004
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1010
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 77
		QuaternionAligned::w(); // 1010
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		QuaternionAligned::z(); // 1010
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		QuaternionAligned::y(); // 1010
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		QuaternionAligned::x(); // 1010
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 1010
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 1010
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 1010
	}
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 982
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 986
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 986
	Vector::operator=(
			const Vector& vOther);  // 986
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 989
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 993
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 993
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 996
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1010
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 1010
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1010
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	QuaternionAligned::x(); // 198
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 198
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	QuaternionAligned::y(); // 198
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 198
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	QuaternionAligned::z(); // 198
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 198
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 77
	QuaternionAligned::w(); // 198
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 198
	QuaternionAligned::IsValid(); // 1010
	VectorAligned::operator fltx4(); // 98
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	CTransform::GetScale(); // 1000
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1000
} /* size: 690, variables: 8, inline expansions: 55 (268 bytes) */

// <0280380B> bonesetup/channel_operators.cpp:1027
// variables: 4
// function calls: 5
void CAnimationResult::GetMorphTargets(int nCount, float* morphTarget)
{
	const CAnimContainer* pContainer; // 1032
	int nChannel; // 1036
	int nIndex; // 1037
	{
		int i; // 1041
		CUtlMemory<ChannelElementMap_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
				int i);  // 1043
		CUtlMemory<CAnimationChannelResult, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
				int i);  // 1046
	}
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Count(); // 1039
} /* size: 152, variables: 3, inline expansions: 1 (0 bytes) */

// <02803003> bonesetup/channel_operators.cpp:1059
// variables: 6
// function calls: 32
void CAnimationResult::GetBone(int iBoneIndex, Vector& pos, Quaternion& q)
{
	const CAnimContainer* pContainer; // 1064
	int nChannel; // 1068
	int nIndex; // 1069
	const char   __FUNCTION__; // 21425
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1081
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1093
	}
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 1071
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1075
	Vector::operator=(
			const Vector& vOther);  // 1075
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 1081
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 1083
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1087
	QuaternionAligned::w(); // 41
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	QuaternionAligned::x(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 1087
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 1093
	Vector::operator=(
			const Vector& vOther);  // 1079
} /* size: 0, variables: 4, inline expansions: 32 (321 bytes) */

// <02802DA6> bonesetup/channel_operators.cpp:1104
// variables: 5
// function calls: 6
void CAnimationResult::GetAllUserData(int nCount, void* pDst)
{
	const CAnimContainer* pContainer; // 1109
	{
		int i; // 1115
		{
			int nChannel; // 1117
			int nIndex; // 1118
			byte* pSrc; // 1120
			CUtlMemory<UserDataElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::operator[](
					int i);  // 1117
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1120
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 1121
		}
	}
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::Count(); // 1113
} /* size: 159, variables: 1, inline expansions: 1 (0 bytes) */

// <02814D1E> bonesetup/channel_operators.cpp:1129
// function calls: 3
void* CAnimationResult::GetChannelData(int nChannel)
{
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1133
} /* size: 31, inline expansions: 3 (6 bytes) */

// <02802D77> bonesetup/channel_operators.cpp:1129
void* CAnimationResult::GetChannelData(int nChannel)
{
} /* size: 0 */

// <02802C7D> bonesetup/channel_operators.cpp:1142
// function calls: 3
void CAnimationResult::GetChannelBufSize(int nChannel)
{
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1144
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1146
} /* size: 34, inline expansions: 3 (22 bytes) */

// <02814E05> bonesetup/channel_operators.cpp:1155
// function call: 1
void CAnimationResult::IsChannelActive(int nChannel)
{
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1160
} /* size: 0, inline expansions: 1 (0 bytes) */

// <02802C53> bonesetup/channel_operators.cpp:1155
void CAnimationResult::IsChannelActive(int nChannel)
{
} /* size: 0 */

// <02814E66> bonesetup/channel_operators.cpp:1170
// variable: 1
void CAnimationResult::InitData(int nChannel)
{
	const CAnimContainer* pAnimContainer; // 1175
} /* size: 17, variables: 1 */

// <028141E6> bonesetup/channel_operators.cpp:1170
// variable: 1
// function calls: 6
void CAnimationResult::InitData(int nChannel)
{
	const CAnimContainer* pAnimContainer; // 1175
	CUtlMemory<CAnimDataChannel, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
			int i);  // 1178
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1180
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1180
	CAnimationResult::ZeroData(
		int nChannel);  // 1184
} /* size: 105, variables: 1, inline expansions: 6 (51 bytes) */

// <0280270B> bonesetup/channel_operators.cpp:1195
// variables: 7
// function calls: 18
void CAnimationResult::InitMissingData(int nChannel, const CAnimDecodeSwizzle* pSwizzle)
{
	const CAnimContainer* pAnimContainer; // 1206
	byte* pDefaultSrc; // 1207
	int nSize; // 1209
	{
		int i; // 1212
		{
			int j; // 1214
			byte* pDst; // 1216
			byte* pSrc; // 1217
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1216
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1214
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 1218
		}
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int this,
				int i);  // 1212
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1212
	}
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1201
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1201
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int this,
			int i);  // 1203
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1203
	CUtlMemory<CAnimDataChannel, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
			int i);  // 1207
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1209
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <028026C7> bonesetup/channel_operators.cpp:1229
void CAnimationResult::SetChannelRequestIndex(int nRequestIndex)
{
} /* size: 8 */

// <028025C6> bonesetup/channel_operators.cpp:1238
// variable: 1
// function calls: 3
void CAnimationResult::SetAllUnused()
{
	{
		int nChannel; // 1240
		CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1240
		CUtlMemory<CAnimationChannelResult, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
				int i);  // 1242
	}
} /* size: 56 */

// <02814EC5> bonesetup/channel_operators.cpp:1251
// function calls: 2
void CAnimationResult::SetChannelUsed(int nChannel)
{
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1256
} /* size: 24, inline expansions: 2 (6 bytes) */

// <0280259C> bonesetup/channel_operators.cpp:1251
void CAnimationResult::SetChannelUsed(int nChannel)
{
} /* size: 0 */

// <02814F77> bonesetup/channel_operators.cpp:1264
// function calls: 2
void CAnimationResult::IsChannelUsed(int nChannel)
{
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1269
} /* size: 26, inline expansions: 2 (6 bytes) */

// <02802572> bonesetup/channel_operators.cpp:1264
void CAnimationResult::IsChannelUsed(int nChannel)
{
} /* size: 0 */

// <02815029> bonesetup/channel_operators.cpp:1275
// function calls: 2
void CAnimationResult::ZeroData(int nChannel)
{
	CUtlMemory<CAnimationChannelResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
			int i);  // 1277
} /* size: 23, inline expansions: 2 (22 bytes) */

// <02802548> bonesetup/channel_operators.cpp:1275
void CAnimationResult::ZeroData(int nChannel)
{
} /* size: 0 */

// <02801951> bonesetup/channel_operators.cpp:1283
// variables: 9
// function calls: 53
void CAnimationResult::IsValid()
{
	bool bIsValid; // 1285
	const char   __FUNCTION__; // 21425
	{
		int nChannel; // 1286
		{
			CAnimationChannelResult* pChannel; // 1290
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1316
			}
			{
				int i; // 1328
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 341
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 341
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 341
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 341
				Vector4D::IsValid(); // 1330
				{
				}
			}
			CAnimationChannelResult::IsValid<Vector4D>(
						Vector4D* pSrc,
						int nCount);  // 1313
			{
				int i; // 1328
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 302
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 302
				Vector2D::IsValid(); // 1330
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 302
				Vector2D::IsValid(); // 1331
				{
				}
			}
			CAnimationChannelResult::IsValid<Vector2D>(
						Vector2D* pSrc,
						int nCount);  // 1310
			{
				int i; // 1328
				_mm_cvtss_f32(__m128 __A); // 1515
				GetYSIMD<>(fltx4 a); // 75
				QuaternionAligned::y(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				QuaternionAligned::z(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				_mm_cvtss_f32(__m128 __A); // 1553
				GetWSIMD<>(fltx4 a); // 77
				QuaternionAligned::w(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				_mm_cvtss_f32(__m128 __A); // 1496
				GetXSIMD<>(fltx4 a); // 74
				QuaternionAligned::x(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				QuaternionAligned::IsValid(); // 1330
				{
				}
			}
			CAnimationChannelResult::IsValid<QuaternionAligned>(
							QuaternionAligned* pSrc,
							int nCount);  // 1301
			{
				int i; // 1328
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 619
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 619
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 619
				Vector::IsValid(); // 1330
				{
				}
			}
			CAnimationChannelResult::IsValid<Vector>(
					Vector* pSrc,
					int nCount);  // 1298
		}
		CUtlMemory<CAnimationChannelResult, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
				int i);  // 1269
		CAnimationResult::IsChannelUsed(
				int nChannel);  // 1288
		CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1286
	}
} /* size: 0, variables: 2 */

// <027F08CA> bonesetup/channel_operators.cpp:1325
// variables: 4
void CAnimationChannelResult::IsValid<Vector>(Vector* pSrc, int nCount)
{
	const char   __FUNCTION__; // 21425
	bool bResult; // 1327
	{
		int i; // 1328
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1331
		}
	}
} /* size: 0, variables: 2 */

// <027F084C> bonesetup/channel_operators.cpp:1325
// variables: 4
void CAnimationChannelResult::IsValid<QuaternionAligned>(QuaternionAligned* pSrc, int nCount)
{
	const char   __FUNCTION__; // 21425
	bool bResult; // 1327
	{
		int i; // 1328
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1331
		}
	}
} /* size: 0, variables: 2 */

// <027F07CE> bonesetup/channel_operators.cpp:1325
// variables: 4
void CAnimationChannelResult::IsValid<Vector2D>(Vector2D* pSrc, int nCount)
{
	const char   __FUNCTION__; // 21425
	bool bResult; // 1327
	{
		int i; // 1328
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1331
		}
	}
} /* size: 0, variables: 2 */

// <027F0750> bonesetup/channel_operators.cpp:1325
// variables: 4
void CAnimationChannelResult::IsValid<Vector4D>(Vector4D* pSrc, int nCount)
{
	const char   __FUNCTION__; // 21425
	bool bResult; // 1327
	{
		int i; // 1328
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1331
		}
	}
} /* size: 0, variables: 2 */

// <028004B5> bonesetup/channel_operators.cpp:1343
// variables: 22
// function calls: 75
void CAnimationResult::Blend(const CAnimationResult& animResult2, float s)
{
	const ChannelWeightlist_t* pWeightArray; // 1345
	const char   __FUNCTION__; // 21376
	{
		int i; // 1348
		{
			const ChannelElementWeights_t* pChannelWeights; // 1350
			int nChannel; // 1352
			CAnimationChannelResult* pChannel; // 1362
			const RequestElementWeights_t* pLod; // 1365
			int nCount; // 1366
			const int32* pElementIndex; // 1367
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1396
			}
			CUtlMemory<ChannelElementWeights_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::operator[](
					int i);  // 1350
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1160
			CAnimationResult::IsChannelActive(
					int nChannel);  // 1355
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1269
			CAnimationResult::IsChannelUsed(
					int nChannel);  // 1359
			CUtlMemory<RequestElementWeights_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
					int i);  // 1365
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1375
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1393
			{
				int i; // 237
				{
					int k; // 239
					Vector4D::Vector4D(); // 456
					Vector4DMultiply(const Vector4D& a,
							vec_t b,
							Vector4D& c);  // 457
					Vector4D::operator*(
							float fl);  // 240
					Vector4D::Vector4D(); // 456
					Vector4DMultiply(const Vector4D& a,
							vec_t b,
							Vector4D& c);  // 457
					Vector4D::operator*(
							float fl);  // 240
					Vector4D::Vector4D(); // 441
					Vector4DAdd(const Vector4D& a,
							const Vector4D& b,
							Vector4D& c);  // 442
					Vector4D::operator+(
							const Vector4D& v);  // 240
					Vector4D::operator=(
							const Vector4D& vOther);  // 240
				}
			}
			CAnimationChannelResult::Blend<Vector4D>(
					float s,
					const Vector4D* pSrc,
					int nCount,
					const int* pElementIndex);  // 1393
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1390
			{
				int i; // 237
				{
					int k; // 239
					Vector2D::Vector2D(); // 701
					Vector2DMultiply(const Vector2D& a,
							vec_t b,
							Vector2D& c);  // 702
					Vector2D::operator*(
							float fl);  // 240
					Vector2D::Vector2D(); // 701
					Vector2DMultiply(const Vector2D& a,
							vec_t b,
							Vector2D& c);  // 702
					Vector2D::operator*(
							float fl);  // 240
					Vector2D::Vector2D(); // 687
					Vector2DAdd(const Vector2D& a,
							const Vector2D& b,
							Vector2D& c);  // 688
					Vector2D::operator+(
							const Vector2D& v);  // 240
					Vector2D::operator=(
							const Vector2D& vOther);  // 240
				}
			}
			CAnimationChannelResult::Blend<Vector2D>(
					float s,
					const Vector2D* pSrc,
					int nCount,
					const int* pElementIndex);  // 1390
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1387
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1381
			{
				int i; // 237
				{
					int k; // 239
				}
			}
			CAnimationChannelResult::Blend<int>(
					float s,
					const int* pSrc,
					int nCount,
					const int* pElementIndex);  // 1381
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1372
			{
				int i; // 237
				{
					int k; // 239
				}
			}
			CAnimationChannelResult::Blend<float>(
					float s,
					const float* pSrc,
					int nCount,
					const int* pElementIndex);  // 1372
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1384
			{
				int i; // 140
				{
					int k; // 142
				}
			}
			CAnimationChannelResult::Copy<bool>(
					const bool* pSrc,
					int nCount,
					const int32* pElementIndex);  // 275
			CAnimationChannelResult::Blend(
				float s,
				const bool* pSrc,
				int nCount,
				const int* pElementIndex);  // 270
			CAnimationChannelResult::Blend(
				float s,
				const bool* pSrc,
				int nCount,
				const int* pElementIndex);  // 1384
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1378
			{
				int i; // 262
				{
					int k; // 264
					QuaternionAligned::operator=(
							const QuaternionAligned& vOther);  // 266
				}
			}
			QuaternionAligned::QuaternionAligned(); // 261
			CAnimationChannelResult::Blend(
				float s,
				const QuaternionAligned* pSrc,
				int nCount,
				const int* pElementIndex);  // 1378
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1366
			CUtlMemory<int, int>::Base(); // 113
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 1367
		}
		CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::Count(); // 1348
	}
} /* size: 0, variables: 2 */

// <027FDD73> bonesetup/channel_operators.cpp:1505
// variables: 22
// function calls: 75
void CAnimationResult::Add(const ChannelWeightlist_t* pWeightArray, const CAnimationResult& animResult2, float s)
{
	const char   __FUNCTION__; // 21322
	{
		int i; // 1514
		{
			const ChannelElementWeights_t* pChannelWeights; // 1516
			int nChannel; // 1518
			CAnimationChannelResult* pChannel; // 1528
			const RequestElementWeights_t* pLod; // 1531
			int nCount; // 1532
			const int32* pElementIndex; // 1533
			const float* pWeights; // 1534
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1570
			}
			CUtlMemory<ChannelElementWeights_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::operator[](
					int i);  // 1516
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1160
			CAnimationResult::IsChannelActive(
					int nChannel);  // 1521
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1269
			CAnimationResult::IsChannelUsed(
					int nChannel);  // 1525
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1528
			CUtlMemory<RequestElementWeights_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
					int i);  // 1531
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1532
			CUtlMemory<int, int>::Base(); // 113
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 1533
			CUtlMemory<float, int>::Base(); // 113
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 1534
			CAnimationResult::IsChannelUsed(
					int nChannel);  // 1537
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1549
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1567
			{
				int i; // 304
				{
					int k; // 306
					Vector4D::Vector4D(); // 456
					Vector4DMultiply(const Vector4D& a,
							vec_t b,
							Vector4D& c);  // 457
					Vector4D::operator*(
							float fl);  // 307
					Vector4D::Vector4D(); // 441
					Vector4DAdd(const Vector4D& a,
							const Vector4D& b,
							Vector4D& c);  // 442
					Vector4D::operator+(
							const Vector4D& v);  // 307
					Vector4D::operator=(
							const Vector4D& vOther);  // 307
				}
			}
			CAnimationChannelResult::Add<Vector4D>(
					float s,
					const Vector4D* pSrc,
					int nCount,
					const int32* pElementIndex,
					const float* pWeight);  // 1567
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1564
			{
				int i; // 304
				{
					int k; // 306
					Vector2D::Vector2D(); // 701
					Vector2DMultiply(const Vector2D& a,
							vec_t b,
							Vector2D& c);  // 702
					Vector2D::operator*(
							float fl);  // 307
					Vector2D::Vector2D(); // 687
					Vector2DAdd(const Vector2D& a,
							const Vector2D& b,
							Vector2D& c);  // 688
					Vector2D::operator+(
							const Vector2D& v);  // 307
					Vector2D::operator=(
							const Vector2D& vOther);  // 307
				}
			}
			CAnimationChannelResult::Add<Vector2D>(
					float s,
					const Vector2D* pSrc,
					int nCount,
					const int32* pElementIndex,
					const float* pWeight);  // 1564
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1561
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1555
			{
				int i; // 304
				{
					int k; // 306
				}
			}
			CAnimationChannelResult::Add<int>(
				float s,
				const int* pSrc,
				int nCount,
				const int32* pElementIndex,
				const float* pWeight);  // 1555
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1546
			{
				int i; // 304
				{
					int k; // 306
				}
			}
			CAnimationChannelResult::Add<float>(
					float s,
					const float* pSrc,
					int nCount,
					const int32* pElementIndex,
					const float* pWeight);  // 1546
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1558
			{
				int i; // 140
				{
					int k; // 142
				}
			}
			CAnimationChannelResult::Copy<bool>(
					const bool* pSrc,
					int nCount,
					const int32* pElementIndex);  // 275
			CAnimationChannelResult::Blend(
				float s,
				const bool* pSrc,
				int nCount,
				const int* pElementIndex);  // 270
			CAnimationChannelResult::Add(
				float s,
				const bool* pSrc,
				int nCount,
				const int32* pElementIndex,
				const float* pWeight);  // 1558
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1133
			CAnimationResult::GetChannelData(
					int nChannel);  // 1552
			{
				int i; // 337
				{
					int k; // 339
				}
			}
			CAnimationChannelResult::Add(
				float s,
				const QuaternionAligned* pSrc,
				int nCount,
				const int32* pElementIndex,
				const float* pWeight);  // 1552
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1256
			CAnimationResult::SetChannelUsed(
					int nChannel);  // 1540
		}
		CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::Count(); // 1514
	}
} /* size: 0, variables: 1 */

// <027FCF11> bonesetup/channel_operators.cpp:1580
// variables: 21
// function calls: 50
void CAnimationResult::Subtract(const ChannelWeightlist_t* pWeightArray, const CAnimationResult& animResult2, float s)
{
	const char   __FUNCTION__; // 21452
	{
		int i; // 1589
		{
			const ChannelElementWeights_t* pChannelWeights; // 1591
			int nChannel; // 1593
			CAnimationChannelResult* pChannel; // 1603
			const RequestElementWeights_t* pLod; // 1606
			int nCount; // 1607
			const int32* pElementIndex; // 1608
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1639
			}
			CUtlMemory<ChannelElementWeights_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::operator[](
					int i);  // 1591
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1160
			CAnimationResult::IsChannelActive(
					int nChannel);  // 1596
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1269
			CAnimationResult::IsChannelUsed(
					int nChannel);  // 1600
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1603
			CUtlMemory<RequestElementWeights_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
					int i);  // 1606
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1607
			CUtlMemory<int, int>::Base(); // 113
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 1608
			CAnimationResult::IsChannelUsed(
					int nChannel);  // 1610
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CAnimationResult::GetChannelData(
					int nChannel);  // 1636
			{
				int i; // 376
				{
					int k; // 378
					Vector4D::Vector4D(); // 448
					Vector4DSubtract(const Vector4D& a,
							const Vector4D& b,
							Vector4D& c);  // 449
					Vector4D::operator-(
							const Vector4D& v);  // 379
					Vector4D::operator=(
							const Vector4D& vOther);  // 379
				}
			}
			CAnimationChannelResult::Subtract<Vector4D>(
						const Vector4D* pSrc,
						int nCount,
						const int32* pElementIndex);  // 1636
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CAnimationResult::GetChannelData(
					int nChannel);  // 1615
			{
				int i; // 376
				{
					int k; // 378
				}
			}
			CAnimationChannelResult::Subtract<float>(
					const float* pSrc,
					int nCount,
					const int32* pElementIndex);  // 1615
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CAnimationResult::GetChannelData(
					int nChannel);  // 1618
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CAnimationResult::GetChannelData(
					int nChannel);  // 1621
			{
				int i; // 409
				{
					int k; // 411
				}
			}
			CAnimationChannelResult::Subtract(
				const QuaternionAligned* pSrc,
				int nCount,
				const int32* pElementIndex);  // 1621
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CAnimationResult::GetChannelData(
					int nChannel);  // 1624
			{
				int i; // 376
				{
					int k; // 378
				}
			}
			CAnimationChannelResult::Subtract<int>(
					const int* pSrc,
					int nCount,
					const int32* pElementIndex);  // 1624
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CAnimationResult::GetChannelData(
					int nChannel);  // 1627
			{
				int i; // 140
				{
					int k; // 142
				}
			}
			CAnimationChannelResult::Copy<bool>(
					const bool* pSrc,
					int nCount,
					const int32* pElementIndex);  // 419
			CAnimationChannelResult::Subtract(
				const bool* pSrc,
				int nCount,
				const int32* pElementIndex);  // 1627
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CAnimationResult::GetChannelData(
					int nChannel);  // 1630
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1131
			CAnimationResult::GetChannelData(
					int nChannel);  // 1633
			{
				int i; // 376
				{
					int k; // 378
					Vector2D::Vector2D(); // 694
					Vector2DSubtract(const Vector2D& a,
							const Vector2D& b,
							Vector2D& c);  // 695
					Vector2D::operator-(
							const Vector2D& v);  // 379
					Vector2D::operator=(
							const Vector2D& vOther);  // 379
				}
			}
			CAnimationChannelResult::Subtract<Vector2D>(
						const Vector2D* pSrc,
						int nCount,
						const int32* pElementIndex);  // 1633
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1256
			CAnimationResult::SetChannelUsed(
					int nChannel);  // 1644
		}
		CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::Count(); // 1589
	}
} /* size: 0, variables: 1 */

// <027FC411> bonesetup/channel_operators.cpp:1652
// variables: 23
// function calls: 36
void CAnimationResult::Scale(float s)
{
	const ChannelWeightlist_t* pWeightArray; // 1654
	const char   __FUNCTION__; // 21376
	{
		int i; // 1657
		{
			const ChannelElementWeights_t* pChannelWeights; // 1659
			int nChannel; // 1661
			CAnimationChannelResult* pChannel; // 1671
			const RequestElementWeights_t* pLod; // 1674
			int nCount; // 1675
			const int32* pElementIndex; // 1676
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1707
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1713
			}
			{
				int i; // 527
				{
					int k; // 529
					Vector4D::Vector4D(); // 456
					Vector4DMultiply(const Vector4D& a,
							vec_t b,
							Vector4D& c);  // 457
					Vector4D::operator*(
							float fl);  // 506
					Vector4D::operator=(
							const Vector4D& vOther);  // 506
					CAnimationChannelResult::Scale<Vector4D>(
							Vector4D* pDst,
							float s);  // 530
				}
			}
			CAnimationChannelResult::Scale<Vector4D>(
					float s,
					int nCount,
					const int32* pElementIndex);  // 1704
			{
				int i; // 527
				{
					int k; // 529
					Vector2D::Vector2D(); // 701
					Vector2DMultiply(const Vector2D& a,
							vec_t b,
							Vector2D& c);  // 702
					Vector2D::operator*(
							float fl);  // 506
					Vector2D::operator=(
							const Vector2D& vOther);  // 506
					CAnimationChannelResult::Scale<Vector2D>(
							Vector2D* pDst,
							float s);  // 530
				}
			}
			CAnimationChannelResult::Scale<Vector2D>(
					float s,
					int nCount,
					const int32* pElementIndex);  // 1701
			{
				int i; // 527
				{
					int k; // 529
					CAnimationChannelResult::Scale<Color>(
							Color* pDst,
							float s);  // 530
				}
			}
			CAnimationChannelResult::Scale<Color>(
					float s,
					int nCount,
					const int32* pElementIndex);  // 1698
			{
				int i; // 527
				{
					int k; // 529
					CAnimationChannelResult::Scale<int>(
							int* pDst,
							float s);  // 530
				}
			}
			CAnimationChannelResult::Scale<int>(
					float s,
					int nCount,
					const int32* pElementIndex);  // 1692
			{
				int i; // 537
				{
					int k; // 539
					Vector::Vector(); // 1450
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::operator*(
							float fl);  // 540
					Vector::operator=(
							const Vector& vOther);  // 540
				}
			}
			CAnimationChannelResult::Scale<Vector>(
					float s,
					int nCount,
					const int32* pElementIndex);  // 1686
			{
				int i; // 527
				{
					int k; // 529
					CAnimationChannelResult::Scale<float>(
							float* pDst,
							float s);  // 530
				}
			}
			CAnimationChannelResult::Scale<float>(
					float s,
					int nCount,
					const int32* pElementIndex);  // 1683
			CUtlMemory<ChannelElementWeights_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::operator[](
					int i);  // 1659
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1160
			CAnimationResult::IsChannelActive(
					int nChannel);  // 1664
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1269
			CAnimationResult::IsChannelUsed(
					int nChannel);  // 1668
			CUtlMemory<RequestElementWeights_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
					int i);  // 1674
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1675
			CUtlMemory<int, int>::Base(); // 113
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 1676
		}
		CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::Count(); // 1657
	}
} /* size: 0, variables: 2 */

// <027F7F9A> bonesetup/channel_operators.cpp:1724
// variables: 39
// function calls: 306
void CAnimationResult::WorldspaceSlerp(const ChannelWeightlist_t* pWeightArray, const CAnimationResult& animResult2, float s)
{
	const float* linearWeights; // 1738
	matrix3x4a_t rootXform; // 1741
	int nCount; // 1744
	CUtlMemoryFixedGrowable<matrix3x4a_t, 32, int> srcBoneToWorld; // 1747
	CBoneBitList srcBoneComputed; // 1749
	CUtlMemoryFixedGrowable<matrix3x4a_t, 32, int> destBoneToWorld; // 1752
	CBoneBitList destBoneComputed; // 1754
	CUtlMemoryFixedGrowable<matrix3x4a_t, 32, int> targetBoneToWorld; // 1757
	CBoneBitList targetBoneComputed; // 1759
	CUtlMemoryFixedGrowable<CTransform, 32, int> pDestTransforms; // 1762
	CUtlMemoryFixedGrowable<CTransform, 32, int> pSrcTransforms; // 1764
	const CAnimContainer* pAnimContainer; // 1768
	const CUtlVector<int, CUtlMemory<int, int> >& boneList; // 1769
	float s1; // 1777
	float s2; // 1778
	const char   __FUNCTION__; // 21626
	{
		int nBoneListIndex; // 1779
		{
			int nBone; // 1781
			int nParent; // 1784
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1791
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1799
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1805
			}
			{
				int nChannel; // 1809
				Quaternion srcQ; // 1821
				Quaternion destQ; // 1821
				Vector srcPos; // 1822
				Vector destPos; // 1822
				Quaternion targetQ; // 1823
				Vector targetPos; // 1824
				Vector tmp; // 1825
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1818
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1819
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1837
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1840
				}
				{
					matrix3x4a_t worldToBone; // 1854
					matrix3x4a_t local; // 1857
					CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1460
					{
					}
					CVarBitVecBase<short unsigned int, 1024>::Base(); // 1461
					CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Get(
						uint32 bitNum);  // 145
					CBoneBitList::IsBoneMarked(
							int iBone);  // 1849
					matrix3x4_t::matrix3x4_t(); // 303
					matrix3x4a_t::matrix3x4a_t(); // 1854
					CUtlMemory<matrix3x4a_t, int>::operator[](
							int i);  // 1855
					matrix3x4_t::matrix3x4_t(); // 303
					matrix3x4a_t::matrix3x4a_t(); // 1857
					CUtlMemory<matrix3x4a_t, int>::operator[](
							int i);  // 1858
					Quaternion::Quaternion(); // 837
					MatrixQuaternion(const matrix3x4_t& mat); // 1859
					CUtlMemory<CTransform, int>::operator[](
							int i);  // 1859
					QuaternionAligned::Init(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 217
					QuaternionAligned::operator=(
							const Quaternion& vOther);  // 1859
					CUtlMemory<matrix3x4a_t, int>::Base(); // 1851
					CUtlMemory<CTransform, int>::Base(); // 1851
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1864
				}
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 1809
				CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1160
				CAnimationResult::IsChannelActive(
						int nChannel);  // 1811
				CUtlMemory<CAnimationChannelResult, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
						int i);  // 1269
				CAnimationResult::IsChannelUsed(
						int nChannel);  // 1811
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 1818
				_mm_cvtss_f32(__m128 __A); // 1496
				GetXSIMD<>(fltx4 a); // 74
				QuaternionAligned::x(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				_mm_cvtss_f32(__m128 __A); // 1515
				GetYSIMD<>(fltx4 a); // 75
				QuaternionAligned::y(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				QuaternionAligned::z(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				_mm_cvtss_f32(__m128 __A); // 1553
				GetWSIMD<>(fltx4 a); // 77
				QuaternionAligned::w(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				QuaternionAligned::IsValid(); // 1818
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 1819
				_mm_cvtss_f32(__m128 __A); // 1496
				GetXSIMD<>(fltx4 a); // 74
				QuaternionAligned::x(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				_mm_cvtss_f32(__m128 __A); // 1515
				GetYSIMD<>(fltx4 a); // 75
				QuaternionAligned::y(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				QuaternionAligned::z(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				_mm_cvtss_f32(__m128 __A); // 1553
				GetWSIMD<>(fltx4 a); // 77
				QuaternionAligned::w(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				QuaternionAligned::IsValid(); // 1819
				Quaternion::Quaternion(); // 1821
				Quaternion::Quaternion(); // 1821
				Vector::Vector(); // 1822
				Vector::Vector(); // 1822
				Quaternion::Quaternion(); // 1823
				Vector::Vector(); // 1824
				Vector::Vector(); // 1825
				CUtlMemory<matrix3x4a_t, int>::Base(); // 1828
				CUtlMemory<CTransform, int>::Base(); // 1828
				CUtlMemory<matrix3x4a_t, int>::Base(); // 1829
				CUtlMemory<CTransform, int>::Base(); // 1829
				CUtlMemory<matrix3x4a_t, int>::operator[](
						int i);  // 1832
				CUtlMemory<matrix3x4a_t, int>::operator[](
						int i);  // 1833
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 2112
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 2112
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 2112
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 2112
				Quaternion::IsValid(); // 1837
				CUtlMemory<matrix3x4a_t, int>::operator[](
						int i);  // 1838
				RadianEuler::RadianEuler(
						const Quaternion& q);  // 1838
				CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1479
				{
				}
				CVarBitVecBase<short unsigned int, 1024>::Base(); // 1480
				Bitvec_Set(uint32* pBits,
						int nBitNum);  // 1480
				CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Set(
					int bitNum);  // 1839
				CUtlMemory<matrix3x4a_t, int>::operator[](
						int i);  // 1840
				{
					int i; // 180
					{
						int j; // 182
						FloatBits(const vec_t& f); // 112
						IsFinite(const vec_t& f); // 184
					}
				}
				matrix3x4_t::IsValid(); // 1840
				CUtlMemory<matrix3x4a_t, int>::operator[](
						int i);  // 1845
				Quaternion::Quaternion(); // 837
				MatrixQuaternion(const matrix3x4_t& mat); // 1845
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				_mm_cvtss_f32(__m128 __A); // 1515
				GetYSIMD<>(fltx4 a); // 75
				QuaternionAligned::y(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				QuaternionAligned::z(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				_mm_cvtss_f32(__m128 __A); // 1553
				GetWSIMD<>(fltx4 a); // 77
				QuaternionAligned::w(); // 198
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 198
				QuaternionAligned::IsValid(); // 1864
			}
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 1805
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			QuaternionAligned::x(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			QuaternionAligned::y(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			QuaternionAligned::z(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 77
			QuaternionAligned::w(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			QuaternionAligned::IsValid(); // 1805
			CUtlMemory<matrix3x4a_t, int>::Base(); // 1796
			CUtlMemory<CTransform, int>::Base(); // 1796
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 1799
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			QuaternionAligned::x(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			QuaternionAligned::y(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			QuaternionAligned::z(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 77
			QuaternionAligned::w(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			QuaternionAligned::IsValid(); // 1799
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 1800
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 1800
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 1800
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1781
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1779
	}
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 1734
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1741
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			matrix3x4a_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<matrix3x4a_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<matrix3x4a_t, int>::CUtlMemoryFixedGrowable_Base(
					matrix3x4a_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, matrix3x4a_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<matrix3x4a_t, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 1747
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<matrix3x4a_t, int>::EnsureCapacity(
			int num);  // 1748
	CVarBitVecBase<short unsigned int, 1024>::AllocInts(
			int numInts);  // 1294
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(
			int numBits);  // 1419
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(
			int numBits);  // 134
	CBoneBitList::CBoneBitList(
			int nMaxBones);  // 1749
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<matrix3x4a_t, int>::EnsureCapacity(
			int num);  // 1753
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			matrix3x4a_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<matrix3x4a_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<matrix3x4a_t, int>::CUtlMemoryFixedGrowable_Base(
					matrix3x4a_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, matrix3x4a_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<matrix3x4a_t, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 1752
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1427
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 1024>::AllocInts(
			int numInts);  // 1294
	CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(
			int numBits);  // 1419
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(
			int numBits);  // 134
	CBoneBitList::CBoneBitList(
			int nMaxBones);  // 1754
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<matrix3x4a_t, int>::EnsureCapacity(
			int num);  // 1758
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			matrix3x4a_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<matrix3x4a_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<matrix3x4a_t, int>::CUtlMemoryFixedGrowable_Base(
					matrix3x4a_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, matrix3x4a_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<matrix3x4a_t, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 1757
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1427
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 1024>::AllocInts(
			int numInts);  // 1294
	CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(
			int numBits);  // 1419
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(
			int numBits);  // 134
	CBoneBitList::CBoneBitList(
			int nMaxBones);  // 1759
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 1763
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 1762
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 1765
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 1764
	CUtlMemory<ElementRequestPattern_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::operator[](
			int i);  // 1769
	CUtlMemory<CTransform, int>::Base(); // 1772
	CUtlMemory<CTransform, int>::Base(); // 1773
	CUtlMemory<CTransform, int>::Base(); // 1868
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 32, int>::~CUtlMemoryFixedGrowable(); // 1869
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 32, int>::~CUtlMemoryFixedGrowable(); // 1869
	CVarBitVecBase<short unsigned int, 1024>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 1024>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 1024>::~CVarBitVecT(); // 130
	CBoneBitList::~CBoneBitList(); // 1869
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<matrix3x4a_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<matrix3x4a_t, 32, int>::~CUtlMemoryFixedGrowable(); // 1869
	CVarBitVecBase<short unsigned int, 1024>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 1024>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 1024>::~CVarBitVecT(); // 130
	CBoneBitList::~CBoneBitList(); // 1869
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<matrix3x4a_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<matrix3x4a_t, 32, int>::~CUtlMemoryFixedGrowable(); // 1869
	CVarBitVecBase<short unsigned int, 1024>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 1024>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 1024>::~CVarBitVecT(); // 130
	CBoneBitList::~CBoneBitList(); // 1869
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<matrix3x4a_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<matrix3x4a_t, 32, int>::~CUtlMemoryFixedGrowable(); // 1869
} /* size: 0, variables: 16, inline expansions: 131 (3013 bytes) */

// <027F6642> bonesetup/channel_operators.cpp:1923
// variables: 4
// function calls: 60
void CAnimationResult::IKLockInPlace(int nBone, float flPosWeight, float flQWeight, bool bBonesOrientedDownPositiveX)
{
	const int  nBoneParent; // 1929
	const int  nBoneGrandParent; // 1933
	const int  nBoneCount; // 1937
	IKLocked_t* pLock; // 1957
	CUtlMemory<CTransform, int>::Count(); // 1940
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::Count(); // 1947
	CUtlMemory<IKLocked_t, int>::NumAllocated(); // 1143
	CUtlMemory<IKLocked_t, int>::Base(); // 112
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::Base(); // 368
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::ResetDbgInfo(); // 824
	CUtlMemory<IKLocked_t, int>::IsGrowable(); // 823
	CUtlMemory<IKLocked_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<IKLocked_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<IKLocked_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<IKLocked_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::Element(
		int i);  // 1148
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 117
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1281
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
	CVarBitVec::CVarBitVec(); // 117
	IKLocked_t::IKLocked_t(); // 1479
	Construct<IKLocked_t>(IKLocked_t* pMemory); // 1148
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::AddToTail(); // 1156
	CUtlMemory<IKLocked_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::AddToTailGetPtr(); // 1957
	CalcNumIntsForBits(int numBits); // 2505
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 2506
	CVarBitVecBase<short unsigned int, 32>::Base(); // 2508
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 2590
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 2573
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 2582
	CVarBitVecBase<short unsigned int, 32>::ReallocInts(
			int numInts);  // 2510
	CVarBitVecBase<short unsigned int, 32>::Base(); // 2532
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2534
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 2546
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 2520
	CVarBitVecBase<short unsigned int, 32>::Resize(
		int resizeNumBits,
		bool bClearAll);  // 1962
	CUtlMemory<CTransform, int>::Element(
		int i);  // 1961
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 1961
	CUtlMemory<CTransform, int>::Base(); // 1949
	CVarBitVecBase<short unsigned int, 1024>::GetNumDWords(); // 1970
	CVarBitVecBase<short unsigned int, 1024>::Base(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1950
	CUtlMemory<CTransform, int>::IsGrowable(); // 881
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 1942
	CUtlMemory<CTransform, int>::IsGrowable(); // 881
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 1943
} /* size: 1439, variables: 4, inline expansions: 60 (3127 bytes) */

// <027F305C> bonesetup/channel_operators.cpp:1969
// variables: 77
// function calls: 218
void CAnimationResult::IKRestoreAll()
{
	const int  nBoneCount; // 1975
	CUtlMemoryFixedGrowable<CTransform, 64, int> ikLockParentSpaceTransforms; // 1976
	const char   __FUNCTION__; // 21555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1978
	}
	{
		const IKLocked_t& ikLock; // 1984
		CUtlVectorFixedGrowable<IKLocked_t, 12>& __for_range; // 52557
		iterator __for_begin; // 51072
		iterator __for_end; // 51072
		{
			const int  nFoot; // 1986
			const int  nKnee; // 1987
			const int  nThigh; // 1988
			{
				CTransform xformThigh; // 1994
				CTransform xformKnee; // 1995
				CTransform xformFoot; // 1996
				{
					int nSubBone; // 2007
					{
						const uint32* pCurElem; // 413
						const uint32* pLastElem; // 414
						{
							unsigned int elem; // 418
							GetStartBitMask(int startBit); // 418
							FirstBitInWordThatIsKnownToBeNonZero(uint elem,
												int offset);  // 426
							FirstBitInWordThatIsKnownToBeNonZero(uint elem,
												int offset);  // 106
							FirstBitInWord(unsigned int elem,
									int offset);  // 422
						}
						FirstBitInWordThatIsKnownToBeNonZero(uint elem,
											int offset);  // 468
						FirstBitInWordThatIsKnownToBeNonZero(uint elem,
											int offset);  // 106
						FirstBitInWord(unsigned int elem,
								int offset);  // 473
					}
					BitVec_FindNextSetBit<short unsigned int, false>(int startBit,
											short unsigned int numBits,
											short unsigned int numDWords,
											const uint32* pBase,
											uint32 nEndMask);  // 1024
					GetEndMask(int numBits); // 1024
					CVarBitVecBase<short unsigned int, 32>::FindNextSetBit(
							int iStartBit);  // 2007
					CUtlMemory<CTransform, int>::Element(
						int i);  // 2009
					CUtlMemory<CTransform, int>::Element(
						int i);  // 2009
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					QuaternionAligned::operator=(
							const QuaternionAligned& vOther);  // 26
					CTransform::operator=(
							const CTransform  &);  // 2009
					{
						const uint32* pCurElem; // 413
						const uint32* pLastElem; // 414
						{
							unsigned int elem; // 418
							GetStartBitMask(int startBit); // 418
							FirstBitInWord(unsigned int elem,
									int offset);  // 422
							FirstBitInWordThatIsKnownToBeNonZero(uint elem,
												int offset);  // 426
						}
						FirstBitInWordThatIsKnownToBeNonZero(uint elem,
											int offset);  // 468
						FirstBitInWordThatIsKnownToBeNonZero(uint elem,
											int offset);  // 106
						FirstBitInWord(unsigned int elem,
								int offset);  // 473
					}
					BitVec_FindNextSetBit<short unsigned int, false>(int startBit,
											short unsigned int numBits,
											short unsigned int numDWords,
											const uint32* pBase,
											uint32 nEndMask);  // 1024
					GetEndMask(int numBits); // 1024
					CVarBitVecBase<short unsigned int, 32>::FindNextSetBit(
							int iStartBit);  // 2007
				}
				CUtlMemory<CTransform, int>::Element(
					int i);  // 1994
				CUtlMemory<CTransform, int>::Element(
					int i);  // 1996
				CUtlMemory<CTransform, int>::Element(
					int i);  // 1995
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 40
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 1997
				CUtlMemory<CTransform, int>::Element(
					int i);  // 1999
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						const CTransform  &);  // 1999
				CUtlMemory<CTransform, int>::Element(
					int i);  // 2000
				CUtlMemory<CTransform, int>::Element(
					int i);  // 2001
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						const CTransform  &);  // 2000
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						const CTransform  &);  // 2001
			}
			{
				VectorAligned currentWorldPos; // 2016
				VectorAligned targetWorldPos; // 2017
				CTransform xformThigh; // 2020
				CTransform xformKnee; // 2021
				CTransform xformFoot; // 2022
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 2016
				CUtlMemory<CTransform, int>::Element(
					int i);  // 2020
				CUtlMemory<CTransform, int>::Element(
					int i);  // 2021
				{
					fltx4 retVal; // 1478
					_mm_move_ss(__m128 __A,
							__m128 __B);  // 1479
					_mm_move_ss(__m128 __A,
							__m128 __B);  // 1481
				}
				SetWSIMD<>(fltx4 a,
						float f);  // 71
				VectorAligned::operator fltx4(); // 71
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 2016
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 268
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 268
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 268
				VectorAligned::operator*(
						vec_t s);  // 2017
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 268
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 268
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 268
				VectorAligned::operator*(
						vec_t s);  // 2017
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 250
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 250
				VectorAligned::operator+(
						const VectorAligned& v);  // 2017
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 40
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 2023
				CUtlMemory<CTransform, int>::Element(
					int i);  // 2025
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						const CTransform  &);  // 2025
				CUtlMemory<CTransform, int>::Element(
					int i);  // 2026
				CUtlMemory<CTransform, int>::Element(
					int i);  // 2027
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						const CTransform  &);  // 2026
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						const CTransform  &);  // 2027
			}
			{
				Vector currentWorldPos; // 2033
				Quaternion currentLocalAngle; // 2037
				{
					fltx4 fl4Q; // 509
					fltx4 fl4PScale; // 514
					fltx4 fl4QScale; // 515
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 516
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 516
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 516
				}
				QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
								const fltx4& q,
								float t);  // 479
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 486
				_mm_cvtss_f32(__m128 __A); // 1496
				GetXSIMD<>(fltx4 a); // 487
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 505
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 505
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 505
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 505
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 505
				QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
								const fltx4& q,
								float t);  // 528
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 465
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 466
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 467
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 468
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 1797
				NegSIMD<>(const fltx4& a); // 469
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 469
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 527
				QuaternionSlerpSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 535
				QuaternionAligned::operator=(
						fltx4 vOther);  // 535
				QuaternionSlerp(const QuaternionAligned& p,
						const QuaternionAligned& q,
						float t,
						QuaternionAligned& qt);  // 2041
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 2033
				QuaternionAligned::w(); // 41
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 2034
				VectorAligned::operator=(
						fltx4 src);  // 111
				CTransform::SetPositionAndScale(
							const Vector& v0,
							float flScale);  // 329
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 217
				QuaternionAligned::operator=(
						const Quaternion& vOther);  // 328
				CTransform::InitFromQuaternion(
							const Quaternion& orientation,
							const Vector& vPosition,
							float flScale);  // 2034
				QuaternionAligned::w(); // 41
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 2037
				VectorAligned::operator fltx4(); // 71
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 2033
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 2033
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 2037
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 2041
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 30
				QuaternionAligned::QuaternionAligned(
							const Quaternion& rhs);  // 2041
			}
		}
		CUtlMemory<IKLocked_t, int>::Base(); // 112
		CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::Base(); // 102
		CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::begin(); // 1984
		CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::Count(); // 104
		CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::end(); // 1984
	}
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::Count(); // 1971
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 1976
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 1977
	CVarBitVecBase<short unsigned int, 1024>::GetNumDWords(); // 1970
	CVarBitVecBase<short unsigned int, 1024>::Base(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1982
	CUtlMemory<CTransform, int>::Base(); // 2054
	CUtlMemory<ElementRequestPattern_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::operator[](
			int i);  // 874
	CAnimationResult::SetBones(
		int nCount,
		const CTransform* pTransforms);  // 2054
	{
		int i; // 1721
		CUtlMemory<IKLocked_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::Element(
			int i);  // 1723
		CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
		CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
		CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
		CVarBitVec::~CVarBitVec(); // 117
		IKLocked_t::~IKLocked_t(); // 1526
		Destruct<IKLocked_t>(IKLocked_t* pMemory); // 1723
	}
	CUtlVectorBase<IKLocked_t, CUtlMemoryFixedGrowable<IKLocked_t, 12, int> >::RemoveAll(); // 2056
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 64, int>::~CUtlMemoryFixedGrowable(); // 2057
} /* size: 2806, variables: 3, inline expansions: 27 (704 bytes) */

// <027F3028> bonesetup/channel_operators.cpp:2063
void CAnimationResult::GetModel()
{
} /* size: 9 */

// <027F2452> bonesetup/channel_operators.cpp:2073
// variables: 8
// function calls: 41
void CAnimationResult::Transform(const CAnimationResult& animResult2, const Vector& vTranslate, const Quaternion& qRotate)
{
	const int  nBoneCount; // 2076
	CUtlMemoryFixedGrowable<CTransform, 32, int> pDstTransforms; // 2079
	const CTransform  adjTransform; // 2090
	const CAnimContainer* pAnimContainer; // 2092
	{
		int nBoneIndex; // 2093
		{
			const int  nParent; // 2096
			const int  nChannel; // 2100
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 2105
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 2100
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::Count(); // 1160
			CAnimationResult::IsChannelActive(
					int nChannel);  // 2102
			CUtlMemory<CAnimationChannelResult, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationChannelResult, CUtlMemoryFixedGrowable<CAnimationChannelResult, 12, int> >::operator[](
					int i);  // 1269
			CAnimationResult::IsChannelUsed(
					int nChannel);  // 2102
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 2105
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 2105
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 2105
		}
	}
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 2079
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 2080
	CUtlMemory<CTransform, int>::Base(); // 2088
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 2090
	CUtlMemory<CTransform, int>::Base(); // 2108
	CUtlMemory<ElementRequestPattern_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::operator[](
			int i);  // 874
	CAnimationResult::SetBones(
		int nCount,
		const CTransform* pTransforms);  // 2108
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 32, int>::~CUtlMemoryFixedGrowable(); // 2109
} /* size: 644, variables: 4, inline expansions: 27 (626 bytes) */

