
//
// modellib/rendermesh_tooltriangles.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 8
//

// <04D21EF5> modellib/rendermesh_tooltriangles.cpp:26
// variables: 82
// function calls: 46
void AddDrawToTraceList<short unsigned int>(TraceDataForDraw_t* pTraceDataOut, const CMaterialDrawDescriptor* pDraw, const RenderInputLayoutField_t* pInputLayoutFields, int nLayoutFields, short unsigned int* pIndexData, uint8* pVertexData, uint32 nVertexStride, int nBlendIndexCount)
{
	const char   __FUNCTION__; // 62406
	int nPositionOffset; // 108
	int nNormalOffset; // 109
	int nNormalFormat; // 110
	int nTangentOffset; // 111
	int nTangentFormat; // 112
	int nTexcoordOffset; // 113
	int nTexcoordFormat; // 114
	int nTexcoord2Offset; // 115
	int nTexcoord2Format; // 116
	int nColorOffset; // 117
	int nColorFormat; // 118
	int nTexcoordSemanticIndex; // 119
	int nTexcoord2SemanticIndex; // 120
	int nBlendIndexOffset; // 121
	int nBlendWeightOffset; // 122
	const int  nNumBlendFields; // 124
	int nVertexPaintBlendParamsOffset; // 126
	int nVertexPaintBlendParamsSemanticIndex; // 127
	int nVertexPaintTintColorOffset; // 129
	bool b16BitIndices; // 131
	bool bHaveBlending; // 231
	{
		uint32* pSrcVertexToDstVertex; // 60
		const uint32  nInvalidVertexIndex; // 63
		uint32 nMaxUnremappedVertex; // 65
		uint32 nUniqueVertexCount; // 66
		{
			int i; // 67
			{
				uint32 nVertex; // 70
				Max<unsigned int>(const unsigned int& val1,
							const unsigned int& val2);  // 85
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 61
	}
	{
		int f; // 132
		{
			const char* pSemanticName; // 134
			{
				int nFieldSemanticIndex; // 192
				int nFieldOffset; // 193
				{
					int i; // 195
					{
						const int  nPrevOffset; // 201
						const int  nPrevIndex; // 202
					}
				}
			}
		}
	}
	{
		int iDstVertex; // 238
		{
			int iSrcVertex; // 240
			const uint8* pCurrentVertexData; // 242
			{
				CUnalignedPointer<const Vector> pRead; // 246
				_CUnalignedPointer_Base<const Vector>::_Initialize(
						const Vector* pOriginal);  // 145
				CUnalignedPointer<const Vector>::CUnalignedPointer(
							Pointer_t pOriginal);  // 246
				Vector::operator=(
						const Vector& vOther);  // 124
				_CUnalignedPointer_Base<const Vector>::CopyTo(
					_Unaligned_Container_Pointer pDest);  // 179
				CUnalignedPointer<const Vector>::CopyTo(
					V_remove_const* pDest);  // 247
			}
			{
				const Vector4D* tan; // 256
				Vector4D::operator=(
						const Vector4D& vOther);  // 257
			}
			{
				VertexColor_t packedColor; // 268
				VertexColor_t::ConvertToVector4D(
							Vector4D* pOutVector4D);  // 269
				VertexColor_t::AsUint32(); // 93
				VertexColor_t::AsUint32Ptr(); // 93
				VertexColor_t::VertexColor_t(
						const VertexColor_t& src);  // 268
			}
			{
				const Vector4D* v; // 273
				Vector4D::operator=(
						const Vector4D& vOther);  // 274
			}
			{
				uint32 nPackedNormalAndTangent; // 288
				UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
							float* pNormal,
							bool bIsTangent);  // 289
				UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
							float* pNormal,
							bool bIsTangent);  // 290
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 295
			}
			{
				const Vector* norm; // 301
				Vector::operator=(
						const Vector& vOther);  // 302
			}
			{
				uint32 nPackedTexCoord; // 314
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 315
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 316
			}
			{
				uint32 nPackedTexCoord; // 320
			}
			{
				const Vector2D* vec; // 326
				Vector2D::operator=(
						const Vector2D& vOther);  // 327
			}
			{
				uint32 nPackedTexCoord; // 339
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 341
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 340
			}
			{
				uint32 nPackedTexCoord; // 345
			}
			{
				const Vector2D* vec; // 351
				Vector2D::operator=(
						const Vector2D& vOther);  // 352
			}
			{
				int i; // 360
				{
					VertexColor_t blendColor; // 364
					VertexColor_t::AsUint32(); // 93
					VertexColor_t::AsUint32Ptr(); // 93
					VertexColor_t::VertexColor_t(
							const VertexColor_t& src);  // 364
					VertexColor_t::ConvertToVector4D(
								Vector4D* pOutVector4D);  // 365
				}
			}
			{
				VertexColor_t tintColor; // 371
				VertexColor_t::AsUint32(); // 93
				VertexColor_t::AsUint32Ptr(); // 93
				VertexColor_t::VertexColor_t(
						const VertexColor_t& src);  // 371
				VertexColor_t::ConvertToVector4D(
							Vector4D* pOutVector4D);  // 372
			}
			{
				const uint8* pWeights; // 400
				byte* pBoneWeights; // 401
				{
					const int16* pBoneIndices; // 379
				}
				{
					const uint8* pBoneIndices; // 392
				}
			}
			operator&(RenderMeshDrawPrimitiveFlags_t a,
					RenderMeshDrawPrimitiveFlags_t b);  // 286
			Vector::operator=(
					const Vector& vOther);  // 307
			Vector4D::operator=(
					const Vector4D& vOther);  // 279
			Vector::operator=(
					const Vector& vOther);  // 251
			Vector4D::operator=(
					const Vector4D& vOther);  // 261
			Vector2D::operator=(
					const Vector2D& vOther);  // 332
			Vector2D::operator=(
					const Vector2D& vOther);  // 357
		}
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 239
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 36
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 236
} /* size: 0, variables: 22, inline expansions: 5 (0 bytes) */

// <04D20A7C> modellib/rendermesh_tooltriangles.cpp:26
// variables: 82
// function calls: 46
void AddDrawToTraceList<unsigned int>(TraceDataForDraw_t* pTraceDataOut, const CMaterialDrawDescriptor* pDraw, const RenderInputLayoutField_t* pInputLayoutFields, int nLayoutFields, unsigned int* pIndexData, uint8* pVertexData, uint32 nVertexStride, int nBlendIndexCount)
{
	const char   __FUNCTION__; // 62406
	int nPositionOffset; // 108
	int nNormalOffset; // 109
	int nNormalFormat; // 110
	int nTangentOffset; // 111
	int nTangentFormat; // 112
	int nTexcoordOffset; // 113
	int nTexcoordFormat; // 114
	int nTexcoord2Offset; // 115
	int nTexcoord2Format; // 116
	int nColorOffset; // 117
	int nColorFormat; // 118
	int nTexcoordSemanticIndex; // 119
	int nTexcoord2SemanticIndex; // 120
	int nBlendIndexOffset; // 121
	int nBlendWeightOffset; // 122
	const int  nNumBlendFields; // 124
	int nVertexPaintBlendParamsOffset; // 126
	int nVertexPaintBlendParamsSemanticIndex; // 127
	int nVertexPaintTintColorOffset; // 129
	bool b16BitIndices; // 131
	bool bHaveBlending; // 231
	{
		uint32* pSrcVertexToDstVertex; // 60
		const uint32  nInvalidVertexIndex; // 63
		uint32 nMaxUnremappedVertex; // 65
		uint32 nUniqueVertexCount; // 66
		{
			int i; // 67
			{
				uint32 nVertex; // 70
				Max<unsigned int>(const unsigned int& val1,
							const unsigned int& val2);  // 85
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 61
	}
	{
		int f; // 132
		{
			const char* pSemanticName; // 134
			{
				int nFieldSemanticIndex; // 192
				int nFieldOffset; // 193
				{
					int i; // 195
					{
						const int  nPrevOffset; // 201
						const int  nPrevIndex; // 202
					}
				}
			}
		}
	}
	{
		int iDstVertex; // 238
		{
			int iSrcVertex; // 240
			const uint8* pCurrentVertexData; // 242
			{
				CUnalignedPointer<const Vector> pRead; // 246
				_CUnalignedPointer_Base<const Vector>::_Initialize(
						const Vector* pOriginal);  // 145
				CUnalignedPointer<const Vector>::CUnalignedPointer(
							Pointer_t pOriginal);  // 246
				Vector::operator=(
						const Vector& vOther);  // 124
				_CUnalignedPointer_Base<const Vector>::CopyTo(
					_Unaligned_Container_Pointer pDest);  // 179
				CUnalignedPointer<const Vector>::CopyTo(
					V_remove_const* pDest);  // 247
			}
			{
				const Vector4D* tan; // 256
				Vector4D::operator=(
						const Vector4D& vOther);  // 257
			}
			{
				VertexColor_t packedColor; // 268
				VertexColor_t::ConvertToVector4D(
							Vector4D* pOutVector4D);  // 269
				VertexColor_t::AsUint32(); // 93
				VertexColor_t::AsUint32Ptr(); // 93
				VertexColor_t::VertexColor_t(
						const VertexColor_t& src);  // 268
			}
			{
				const Vector4D* v; // 273
				Vector4D::operator=(
						const Vector4D& vOther);  // 274
			}
			{
				uint32 nPackedNormalAndTangent; // 288
				UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
							float* pNormal,
							bool bIsTangent);  // 289
				UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
							float* pNormal,
							bool bIsTangent);  // 290
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 295
			}
			{
				const Vector* norm; // 301
				Vector::operator=(
						const Vector& vOther);  // 302
			}
			{
				uint32 nPackedTexCoord; // 314
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 315
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 316
			}
			{
				uint32 nPackedTexCoord; // 320
			}
			{
				const Vector2D* vec; // 326
				Vector2D::operator=(
						const Vector2D& vOther);  // 327
			}
			{
				uint32 nPackedTexCoord; // 339
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 341
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 340
			}
			{
				uint32 nPackedTexCoord; // 345
			}
			{
				const Vector2D* vec; // 351
				Vector2D::operator=(
						const Vector2D& vOther);  // 352
			}
			{
				int i; // 360
				{
					VertexColor_t blendColor; // 364
					VertexColor_t::AsUint32(); // 93
					VertexColor_t::AsUint32Ptr(); // 93
					VertexColor_t::VertexColor_t(
							const VertexColor_t& src);  // 364
					VertexColor_t::ConvertToVector4D(
								Vector4D* pOutVector4D);  // 365
				}
			}
			{
				VertexColor_t tintColor; // 371
				VertexColor_t::AsUint32(); // 93
				VertexColor_t::AsUint32Ptr(); // 93
				VertexColor_t::VertexColor_t(
						const VertexColor_t& src);  // 371
				VertexColor_t::ConvertToVector4D(
							Vector4D* pOutVector4D);  // 372
			}
			{
				const uint8* pWeights; // 400
				byte* pBoneWeights; // 401
				{
					const int16* pBoneIndices; // 379
				}
				{
					const uint8* pBoneIndices; // 392
				}
			}
			operator&(RenderMeshDrawPrimitiveFlags_t a,
					RenderMeshDrawPrimitiveFlags_t b);  // 286
			Vector::operator=(
					const Vector& vOther);  // 307
			Vector4D::operator=(
					const Vector4D& vOther);  // 279
			Vector::operator=(
					const Vector& vOther);  // 251
			Vector4D::operator=(
					const Vector4D& vOther);  // 261
			Vector2D::operator=(
					const Vector2D& vOther);  // 332
			Vector2D::operator=(
					const Vector2D& vOther);  // 357
		}
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 239
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 36
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 236
} /* size: 0, variables: 22, inline expansions: 5 (0 bytes) */

// <02066D63> modellib/rendermesh_tooltriangles.cpp:26
// variables: 82
// function calls: 46
void AddDrawToTraceList<short unsigned int>(TraceDataForDraw_t* pTraceDataOut, const CMaterialDrawDescriptor* pDraw, const RenderInputLayoutField_t* pInputLayoutFields, int nLayoutFields, short unsigned int* pIndexData, uint8* pVertexData, uint32 nVertexStride, int nBlendIndexCount)
{
	const char   __FUNCTION__; // 4393
	int nPositionOffset; // 108
	int nNormalOffset; // 109
	int nNormalFormat; // 110
	int nTangentOffset; // 111
	int nTangentFormat; // 112
	int nTexcoordOffset; // 113
	int nTexcoordFormat; // 114
	int nTexcoord2Offset; // 115
	int nTexcoord2Format; // 116
	int nColorOffset; // 117
	int nColorFormat; // 118
	int nTexcoordSemanticIndex; // 119
	int nTexcoord2SemanticIndex; // 120
	int nBlendIndexOffset; // 121
	int nBlendWeightOffset; // 122
	const int  nNumBlendFields; // 124
	int nVertexPaintBlendParamsOffset; // 126
	int nVertexPaintBlendParamsSemanticIndex; // 127
	int nVertexPaintTintColorOffset; // 129
	bool b16BitIndices; // 131
	bool bHaveBlending; // 231
	{
		uint32* pSrcVertexToDstVertex; // 60
		const uint32  nInvalidVertexIndex; // 63
		uint32 nMaxUnremappedVertex; // 65
		uint32 nUniqueVertexCount; // 66
		{
			int i; // 67
			{
				uint32 nVertex; // 70
				Max<unsigned int>(const unsigned int& val1,
							const unsigned int& val2);  // 85
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 61
	}
	{
		int f; // 132
		{
			const char* pSemanticName; // 134
			{
				int nFieldSemanticIndex; // 192
				int nFieldOffset; // 193
				{
					int i; // 195
					{
						const int  nPrevOffset; // 201
						const int  nPrevIndex; // 202
					}
				}
			}
		}
	}
	{
		int iDstVertex; // 238
		{
			int iSrcVertex; // 240
			const uint8* pCurrentVertexData; // 242
			{
				CUnalignedPointer<const Vector> pRead; // 246
				_CUnalignedPointer_Base<const Vector>::_Initialize(
						const Vector* pOriginal);  // 145
				CUnalignedPointer<const Vector>::CUnalignedPointer(
							Pointer_t pOriginal);  // 246
				Vector::operator=(
						const Vector& vOther);  // 124
				_CUnalignedPointer_Base<const Vector>::CopyTo(
					_Unaligned_Container_Pointer pDest);  // 179
				CUnalignedPointer<const Vector>::CopyTo(
					V_remove_const* pDest);  // 247
			}
			{
				const Vector4D* tan; // 256
				Vector4D::operator=(
						const Vector4D& vOther);  // 257
			}
			{
				VertexColor_t packedColor; // 268
				VertexColor_t::ConvertToVector4D(
							Vector4D* pOutVector4D);  // 269
				VertexColor_t::AsUint32(); // 93
				VertexColor_t::AsUint32Ptr(); // 93
				VertexColor_t::VertexColor_t(
						const VertexColor_t& src);  // 268
			}
			{
				const Vector4D* v; // 273
				Vector4D::operator=(
						const Vector4D& vOther);  // 274
			}
			{
				uint32 nPackedNormalAndTangent; // 288
				UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
							float* pNormal,
							bool bIsTangent);  // 289
				UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
							float* pNormal,
							bool bIsTangent);  // 290
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 295
			}
			{
				const Vector* norm; // 301
				Vector::operator=(
						const Vector& vOther);  // 302
			}
			{
				uint32 nPackedTexCoord; // 314
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 315
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 316
			}
			{
				uint32 nPackedTexCoord; // 320
			}
			{
				const Vector2D* vec; // 326
				Vector2D::operator=(
						const Vector2D& vOther);  // 327
			}
			{
				uint32 nPackedTexCoord; // 339
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 341
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 340
			}
			{
				uint32 nPackedTexCoord; // 345
			}
			{
				const Vector2D* vec; // 351
				Vector2D::operator=(
						const Vector2D& vOther);  // 352
			}
			{
				int i; // 360
				{
					VertexColor_t blendColor; // 364
					VertexColor_t::AsUint32(); // 93
					VertexColor_t::AsUint32Ptr(); // 93
					VertexColor_t::VertexColor_t(
							const VertexColor_t& src);  // 364
					VertexColor_t::ConvertToVector4D(
								Vector4D* pOutVector4D);  // 365
				}
			}
			{
				VertexColor_t tintColor; // 371
				VertexColor_t::AsUint32(); // 93
				VertexColor_t::AsUint32Ptr(); // 93
				VertexColor_t::VertexColor_t(
						const VertexColor_t& src);  // 371
				VertexColor_t::ConvertToVector4D(
							Vector4D* pOutVector4D);  // 372
			}
			{
				const uint8* pWeights; // 400
				byte* pBoneWeights; // 401
				{
					const int16* pBoneIndices; // 379
				}
				{
					const uint8* pBoneIndices; // 392
				}
			}
			operator&(RenderMeshDrawPrimitiveFlags_t a,
					RenderMeshDrawPrimitiveFlags_t b);  // 286
			Vector::operator=(
					const Vector& vOther);  // 307
			Vector4D::operator=(
					const Vector4D& vOther);  // 279
			Vector::operator=(
					const Vector& vOther);  // 251
			Vector4D::operator=(
					const Vector4D& vOther);  // 261
			Vector2D::operator=(
					const Vector2D& vOther);  // 332
			Vector2D::operator=(
					const Vector2D& vOther);  // 357
		}
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 239
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 36
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 236
} /* size: 0, variables: 22, inline expansions: 5 (0 bytes) */

// <020658EA> modellib/rendermesh_tooltriangles.cpp:26
// variables: 82
// function calls: 46
void AddDrawToTraceList<unsigned int>(TraceDataForDraw_t* pTraceDataOut, const CMaterialDrawDescriptor* pDraw, const RenderInputLayoutField_t* pInputLayoutFields, int nLayoutFields, unsigned int* pIndexData, uint8* pVertexData, uint32 nVertexStride, int nBlendIndexCount)
{
	const char   __FUNCTION__; // 4393
	int nPositionOffset; // 108
	int nNormalOffset; // 109
	int nNormalFormat; // 110
	int nTangentOffset; // 111
	int nTangentFormat; // 112
	int nTexcoordOffset; // 113
	int nTexcoordFormat; // 114
	int nTexcoord2Offset; // 115
	int nTexcoord2Format; // 116
	int nColorOffset; // 117
	int nColorFormat; // 118
	int nTexcoordSemanticIndex; // 119
	int nTexcoord2SemanticIndex; // 120
	int nBlendIndexOffset; // 121
	int nBlendWeightOffset; // 122
	const int  nNumBlendFields; // 124
	int nVertexPaintBlendParamsOffset; // 126
	int nVertexPaintBlendParamsSemanticIndex; // 127
	int nVertexPaintTintColorOffset; // 129
	bool b16BitIndices; // 131
	bool bHaveBlending; // 231
	{
		uint32* pSrcVertexToDstVertex; // 60
		const uint32  nInvalidVertexIndex; // 63
		uint32 nMaxUnremappedVertex; // 65
		uint32 nUniqueVertexCount; // 66
		{
			int i; // 67
			{
				uint32 nVertex; // 70
				Max<unsigned int>(const unsigned int& val1,
							const unsigned int& val2);  // 85
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 61
	}
	{
		int f; // 132
		{
			const char* pSemanticName; // 134
			{
				int nFieldSemanticIndex; // 192
				int nFieldOffset; // 193
				{
					int i; // 195
					{
						const int  nPrevOffset; // 201
						const int  nPrevIndex; // 202
					}
				}
			}
		}
	}
	{
		int iDstVertex; // 238
		{
			int iSrcVertex; // 240
			const uint8* pCurrentVertexData; // 242
			{
				CUnalignedPointer<const Vector> pRead; // 246
				_CUnalignedPointer_Base<const Vector>::_Initialize(
						const Vector* pOriginal);  // 145
				CUnalignedPointer<const Vector>::CUnalignedPointer(
							Pointer_t pOriginal);  // 246
				Vector::operator=(
						const Vector& vOther);  // 124
				_CUnalignedPointer_Base<const Vector>::CopyTo(
					_Unaligned_Container_Pointer pDest);  // 179
				CUnalignedPointer<const Vector>::CopyTo(
					V_remove_const* pDest);  // 247
			}
			{
				const Vector4D* tan; // 256
				Vector4D::operator=(
						const Vector4D& vOther);  // 257
			}
			{
				VertexColor_t packedColor; // 268
				VertexColor_t::ConvertToVector4D(
							Vector4D* pOutVector4D);  // 269
				VertexColor_t::AsUint32(); // 93
				VertexColor_t::AsUint32Ptr(); // 93
				VertexColor_t::VertexColor_t(
						const VertexColor_t& src);  // 268
			}
			{
				const Vector4D* v; // 273
				Vector4D::operator=(
						const Vector4D& vOther);  // 274
			}
			{
				uint32 nPackedNormalAndTangent; // 288
				UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
							float* pNormal,
							bool bIsTangent);  // 289
				UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
							float* pNormal,
							bool bIsTangent);  // 290
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 295
			}
			{
				const Vector* norm; // 301
				Vector::operator=(
						const Vector& vOther);  // 302
			}
			{
				uint32 nPackedTexCoord; // 314
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 315
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 316
			}
			{
				uint32 nPackedTexCoord; // 320
			}
			{
				const Vector2D* vec; // 326
				Vector2D::operator=(
						const Vector2D& vOther);  // 327
			}
			{
				uint32 nPackedTexCoord; // 339
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 341
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 340
			}
			{
				uint32 nPackedTexCoord; // 345
			}
			{
				const Vector2D* vec; // 351
				Vector2D::operator=(
						const Vector2D& vOther);  // 352
			}
			{
				int i; // 360
				{
					VertexColor_t blendColor; // 364
					VertexColor_t::AsUint32(); // 93
					VertexColor_t::AsUint32Ptr(); // 93
					VertexColor_t::VertexColor_t(
							const VertexColor_t& src);  // 364
					VertexColor_t::ConvertToVector4D(
								Vector4D* pOutVector4D);  // 365
				}
			}
			{
				VertexColor_t tintColor; // 371
				VertexColor_t::AsUint32(); // 93
				VertexColor_t::AsUint32Ptr(); // 93
				VertexColor_t::VertexColor_t(
						const VertexColor_t& src);  // 371
				VertexColor_t::ConvertToVector4D(
							Vector4D* pOutVector4D);  // 372
			}
			{
				const uint8* pWeights; // 400
				byte* pBoneWeights; // 401
				{
					const int16* pBoneIndices; // 379
				}
				{
					const uint8* pBoneIndices; // 392
				}
			}
			operator&(RenderMeshDrawPrimitiveFlags_t a,
					RenderMeshDrawPrimitiveFlags_t b);  // 286
			Vector::operator=(
					const Vector& vOther);  // 307
			Vector4D::operator=(
					const Vector4D& vOther);  // 279
			Vector::operator=(
					const Vector& vOther);  // 251
			Vector4D::operator=(
					const Vector4D& vOther);  // 261
			Vector2D::operator=(
					const Vector2D& vOther);  // 332
			Vector2D::operator=(
					const Vector2D& vOther);  // 357
		}
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 239
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 36
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 236
} /* size: 0, variables: 22, inline expansions: 5 (0 bytes) */

// <00C44B36> modellib/rendermesh_tooltriangles.cpp:26
// variables: 82
// function calls: 46
void AddDrawToTraceList<short unsigned int>(TraceDataForDraw_t* pTraceDataOut, const CMaterialDrawDescriptor* pDraw, const RenderInputLayoutField_t* pInputLayoutFields, int nLayoutFields, short unsigned int* pIndexData, uint8* pVertexData, uint32 nVertexStride, int nBlendIndexCount)
{
	const char   __FUNCTION__; // 11372
	int nPositionOffset; // 108
	int nNormalOffset; // 109
	int nNormalFormat; // 110
	int nTangentOffset; // 111
	int nTangentFormat; // 112
	int nTexcoordOffset; // 113
	int nTexcoordFormat; // 114
	int nTexcoord2Offset; // 115
	int nTexcoord2Format; // 116
	int nColorOffset; // 117
	int nColorFormat; // 118
	int nTexcoordSemanticIndex; // 119
	int nTexcoord2SemanticIndex; // 120
	int nBlendIndexOffset; // 121
	int nBlendWeightOffset; // 122
	const int  nNumBlendFields; // 124
	int nVertexPaintBlendParamsOffset; // 126
	int nVertexPaintBlendParamsSemanticIndex; // 127
	int nVertexPaintTintColorOffset; // 129
	bool b16BitIndices; // 131
	bool bHaveBlending; // 231
	{
		uint32* pSrcVertexToDstVertex; // 60
		const uint32  nInvalidVertexIndex; // 63
		uint32 nMaxUnremappedVertex; // 65
		uint32 nUniqueVertexCount; // 66
		{
			int i; // 67
			{
				uint32 nVertex; // 70
				Max<unsigned int>(const unsigned int& val1,
							const unsigned int& val2);  // 85
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 61
	}
	{
		int f; // 132
		{
			const char* pSemanticName; // 134
			{
				int nFieldSemanticIndex; // 192
				int nFieldOffset; // 193
				{
					int i; // 195
					{
						const int  nPrevOffset; // 201
						const int  nPrevIndex; // 202
					}
				}
			}
		}
	}
	{
		int iDstVertex; // 238
		{
			int iSrcVertex; // 240
			const uint8* pCurrentVertexData; // 242
			{
				CUnalignedPointer<const Vector> pRead; // 246
				_CUnalignedPointer_Base<const Vector>::_Initialize(
						const Vector* pOriginal);  // 145
				CUnalignedPointer<const Vector>::CUnalignedPointer(
							Pointer_t pOriginal);  // 246
				Vector::operator=(
						const Vector& vOther);  // 124
				_CUnalignedPointer_Base<const Vector>::CopyTo(
					_Unaligned_Container_Pointer pDest);  // 179
				CUnalignedPointer<const Vector>::CopyTo(
					V_remove_const* pDest);  // 247
			}
			{
				const Vector4D* tan; // 256
				Vector4D::operator=(
						const Vector4D& vOther);  // 257
			}
			{
				VertexColor_t packedColor; // 268
				VertexColor_t::ConvertToVector4D(
							Vector4D* pOutVector4D);  // 269
				VertexColor_t::AsUint32(); // 93
				VertexColor_t::AsUint32Ptr(); // 93
				VertexColor_t::VertexColor_t(
						const VertexColor_t& src);  // 268
			}
			{
				const Vector4D* v; // 273
				Vector4D::operator=(
						const Vector4D& vOther);  // 274
			}
			{
				uint32 nPackedNormalAndTangent; // 288
				UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
							float* pNormal,
							bool bIsTangent);  // 289
				UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
							float* pNormal,
							bool bIsTangent);  // 290
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 295
			}
			{
				const Vector* norm; // 301
				Vector::operator=(
						const Vector& vOther);  // 302
			}
			{
				uint32 nPackedTexCoord; // 314
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 315
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 316
			}
			{
				uint32 nPackedTexCoord; // 320
			}
			{
				const Vector2D* vec; // 326
				Vector2D::operator=(
						const Vector2D& vOther);  // 327
			}
			{
				uint32 nPackedTexCoord; // 339
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 341
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 340
			}
			{
				uint32 nPackedTexCoord; // 345
			}
			{
				const Vector2D* vec; // 351
				Vector2D::operator=(
						const Vector2D& vOther);  // 352
			}
			{
				int i; // 360
				{
					VertexColor_t blendColor; // 364
					VertexColor_t::AsUint32(); // 93
					VertexColor_t::AsUint32Ptr(); // 93
					VertexColor_t::VertexColor_t(
							const VertexColor_t& src);  // 364
					VertexColor_t::ConvertToVector4D(
								Vector4D* pOutVector4D);  // 365
				}
			}
			{
				VertexColor_t tintColor; // 371
				VertexColor_t::AsUint32(); // 93
				VertexColor_t::AsUint32Ptr(); // 93
				VertexColor_t::VertexColor_t(
						const VertexColor_t& src);  // 371
				VertexColor_t::ConvertToVector4D(
							Vector4D* pOutVector4D);  // 372
			}
			{
				const uint8* pWeights; // 400
				byte* pBoneWeights; // 401
				{
					const int16* pBoneIndices; // 379
				}
				{
					const uint8* pBoneIndices; // 392
				}
			}
			operator&(RenderMeshDrawPrimitiveFlags_t a,
					RenderMeshDrawPrimitiveFlags_t b);  // 286
			Vector::operator=(
					const Vector& vOther);  // 307
			Vector4D::operator=(
					const Vector4D& vOther);  // 279
			Vector::operator=(
					const Vector& vOther);  // 251
			Vector4D::operator=(
					const Vector4D& vOther);  // 261
			Vector2D::operator=(
					const Vector2D& vOther);  // 332
			Vector2D::operator=(
					const Vector2D& vOther);  // 357
		}
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 239
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 36
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 236
} /* size: 4622, variables: 22, inline expansions: 5 (54 bytes) */

// <00C436BD> modellib/rendermesh_tooltriangles.cpp:26
// variables: 82
// function calls: 46
void AddDrawToTraceList<unsigned int>(TraceDataForDraw_t* pTraceDataOut, const CMaterialDrawDescriptor* pDraw, const RenderInputLayoutField_t* pInputLayoutFields, int nLayoutFields, unsigned int* pIndexData, uint8* pVertexData, uint32 nVertexStride, int nBlendIndexCount)
{
	const char   __FUNCTION__; // 11372
	int nPositionOffset; // 108
	int nNormalOffset; // 109
	int nNormalFormat; // 110
	int nTangentOffset; // 111
	int nTangentFormat; // 112
	int nTexcoordOffset; // 113
	int nTexcoordFormat; // 114
	int nTexcoord2Offset; // 115
	int nTexcoord2Format; // 116
	int nColorOffset; // 117
	int nColorFormat; // 118
	int nTexcoordSemanticIndex; // 119
	int nTexcoord2SemanticIndex; // 120
	int nBlendIndexOffset; // 121
	int nBlendWeightOffset; // 122
	const int  nNumBlendFields; // 124
	int nVertexPaintBlendParamsOffset; // 126
	int nVertexPaintBlendParamsSemanticIndex; // 127
	int nVertexPaintTintColorOffset; // 129
	bool b16BitIndices; // 131
	bool bHaveBlending; // 231
	{
		uint32* pSrcVertexToDstVertex; // 60
		const uint32  nInvalidVertexIndex; // 63
		uint32 nMaxUnremappedVertex; // 65
		uint32 nUniqueVertexCount; // 66
		{
			int i; // 67
			{
				uint32 nVertex; // 70
				Max<unsigned int>(const unsigned int& val1,
							const unsigned int& val2);  // 85
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 61
	}
	{
		int f; // 132
		{
			const char* pSemanticName; // 134
			{
				int nFieldSemanticIndex; // 192
				int nFieldOffset; // 193
				{
					int i; // 195
					{
						const int  nPrevOffset; // 201
						const int  nPrevIndex; // 202
					}
				}
			}
		}
	}
	{
		int iDstVertex; // 238
		{
			int iSrcVertex; // 240
			const uint8* pCurrentVertexData; // 242
			{
				CUnalignedPointer<const Vector> pRead; // 246
				_CUnalignedPointer_Base<const Vector>::_Initialize(
						const Vector* pOriginal);  // 145
				CUnalignedPointer<const Vector>::CUnalignedPointer(
							Pointer_t pOriginal);  // 246
				Vector::operator=(
						const Vector& vOther);  // 124
				_CUnalignedPointer_Base<const Vector>::CopyTo(
					_Unaligned_Container_Pointer pDest);  // 179
				CUnalignedPointer<const Vector>::CopyTo(
					V_remove_const* pDest);  // 247
			}
			{
				const Vector4D* tan; // 256
				Vector4D::operator=(
						const Vector4D& vOther);  // 257
			}
			{
				VertexColor_t packedColor; // 268
				VertexColor_t::ConvertToVector4D(
							Vector4D* pOutVector4D);  // 269
				VertexColor_t::AsUint32(); // 93
				VertexColor_t::AsUint32Ptr(); // 93
				VertexColor_t::VertexColor_t(
						const VertexColor_t& src);  // 268
			}
			{
				const Vector4D* v; // 273
				Vector4D::operator=(
						const Vector4D& vOther);  // 274
			}
			{
				uint32 nPackedNormalAndTangent; // 288
				UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
							float* pNormal,
							bool bIsTangent);  // 289
				UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
							float* pNormal,
							bool bIsTangent);  // 290
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 295
			}
			{
				const Vector* norm; // 301
				Vector::operator=(
						const Vector& vOther);  // 302
			}
			{
				uint32 nPackedTexCoord; // 314
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 315
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 316
			}
			{
				uint32 nPackedTexCoord; // 320
			}
			{
				const Vector2D* vec; // 326
				Vector2D::operator=(
						const Vector2D& vOther);  // 327
			}
			{
				uint32 nPackedTexCoord; // 339
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 341
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 340
			}
			{
				uint32 nPackedTexCoord; // 345
			}
			{
				const Vector2D* vec; // 351
				Vector2D::operator=(
						const Vector2D& vOther);  // 352
			}
			{
				int i; // 360
				{
					VertexColor_t blendColor; // 364
					VertexColor_t::AsUint32(); // 93
					VertexColor_t::AsUint32Ptr(); // 93
					VertexColor_t::VertexColor_t(
							const VertexColor_t& src);  // 364
					VertexColor_t::ConvertToVector4D(
								Vector4D* pOutVector4D);  // 365
				}
			}
			{
				VertexColor_t tintColor; // 371
				VertexColor_t::AsUint32(); // 93
				VertexColor_t::AsUint32Ptr(); // 93
				VertexColor_t::VertexColor_t(
						const VertexColor_t& src);  // 371
				VertexColor_t::ConvertToVector4D(
							Vector4D* pOutVector4D);  // 372
			}
			{
				const uint8* pWeights; // 400
				byte* pBoneWeights; // 401
				{
					const int16* pBoneIndices; // 379
				}
				{
					const uint8* pBoneIndices; // 392
				}
			}
			operator&(RenderMeshDrawPrimitiveFlags_t a,
					RenderMeshDrawPrimitiveFlags_t b);  // 286
			Vector::operator=(
					const Vector& vOther);  // 307
			Vector4D::operator=(
					const Vector4D& vOther);  // 279
			Vector::operator=(
					const Vector& vOther);  // 251
			Vector4D::operator=(
					const Vector4D& vOther);  // 261
			Vector2D::operator=(
					const Vector2D& vOther);  // 332
			Vector2D::operator=(
					const Vector2D& vOther);  // 357
		}
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 239
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 36
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 236
} /* size: 4622, variables: 22, inline expansions: 5 (54 bytes) */

// <04D24191> modellib/rendermesh_tooltriangles.cpp:422
// variables: 12
// function calls: 25
void CRenderMesh::AddToRayTraceEnvironment(RayTracingEnvironment* env)
{
	{
		int i; // 431
		{
			const TraceDataForDraw_t& traceData; // 433
			int16 nFlags; // 435
			ResourceId_t id; // 437
			uint64 nMaterial; // 438
			{
				int t; // 440
				{
					int i0; // 442
					int i1; // 443
					int i2; // 444
					TraceVertex_t* vx0; // 446
					TraceVertex_t* vx1; // 447
					TraceVertex_t* vx2; // 448
				}
			}
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 16
			IMaterial2::GetIntAttributeOrDefault(
						CUtlStringToken name,
						int nDefault);  // 20
			IMaterial2::GetIntAttributeOrDefault(
						CUtlStringToken name,
						int nDefault);  // 24
			IMaterial2::GetIntAttributeOrDefault(
						CUtlStringToken name,
						int nDefault);  // 28
			IMaterial2::GetIntAttributeOrDefault(
						CUtlStringToken name,
						int nDefault);  // 32
			IMaterial2::GetIntAttributeOrDefault(
						CUtlStringToken name,
						int nDefault);  // 36
			IMaterial2::GetIntAttributeOrDefault(
						CUtlStringToken name,
						int nDefault);  // 41
			IMaterial2::GetIntAttributeOrDefault(
						CUtlStringToken name,
						int nDefault);  // 45
			IMaterial2::GetIntAttributeOrDefault(
						CUtlStringToken name,
						int nDefault);  // 49
			IMaterial2::GetIntAttributeOrDefault(
						CUtlStringToken name,
						int nDefault);  // 53
			IMaterial2::GetIntAttributeOrDefault(
						CUtlStringToken name,
						int nDefault);  // 57
			IMaterial2::GetIntAttributeOrDefault(
						CUtlStringToken name,
						int nDefault);  // 61
			IMaterial2::GetIntAttributeOrDefault(
						CUtlStringToken name,
						int nDefault);  // 65
			GetRayTracingFlagsForMaterial(HMaterial hMaterial); // 435
			CUtlMemory<TraceDataForDraw_t, int>::operator[](
					int i);  // 609
			CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::Element(
				int i);  // 433
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 435
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 437
			ResourceId_t::GetRaw(); // 438
		}
		CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::Count(); // 431
	}
} /* size: 0 */

// <04D23678> modellib/rendermesh_tooltriangles.cpp:455
// variables: 15
// function calls: 44
void CRenderMesh::CreateToolsTriangleList(const RuntimeBuffersInfo_t& buffersInfo)
{
	int nBlendIndexCount; // 470
	int nSceneObjects; // 476
	{
		int s; // 477
		{
			const CSceneObjectData* pSceneObjectData; // 479
			int nDrawCalls; // 481
			{
				int d; // 482
				{
					const CMaterialDrawDescriptor* pDrawCall; // 484
					{
						int nVBIndex; // 489
						int nIBIndex; // 490
						const BufferInfo_t* pVBData; // 495
						const BufferInfo_t* pIBData; // 496
						uint8* pIndexData; // 498
						uint8* pVertexData; // 499
						uint32 nVertexStride; // 500
						TraceDataForDraw_t traceDataForDraw; // 506
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 492
						Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 492
						CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this,
								int i);  // 495
						Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 493
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 493
						CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this,
								int i);  // 496
						TraceDataForDraw_t::Init(); // 507
						CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 217
						CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(); // 558
						TraceDataForDraw_t::TraceDataForDraw_t(); // 506
						CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 113
						CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 514
						CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 514
						CUtlMemory<TraceDataForDraw_t, int>::NumAllocated(); // 1196
						CUtlMemory<TraceDataForDraw_t, int>::Base(); // 112
						CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::Base(); // 368
						CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::ResetDbgInfo(); // 824
						CUtlMemory<TraceDataForDraw_t, int>::IsGrowable(); // 823
						CUtlMemory<TraceDataForDraw_t, int>::IsExternallyAllocated(); // 859
						CUtlMemory<TraceDataForDraw_t, int>::IsExternallyAllocated(); // 861
						CUtlMemory<TraceDataForDraw_t, int>::Grow(
							int num);  // 806
						CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::GrowMemory(
								int num);  // 1198
						CUtlMemory<TraceDataForDraw_t, int>::operator[](
								int i);  // 602
						CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::Element(
							int i);  // 1201
						CStrongHandle<InfoForResourceTypeIMaterial2>::operator CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t(); // 221
						CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
								ResourceHandleTyped_t hResource);  // 221
						CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(
									const CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& src);  // 558
						TraceDataForDraw_t::TraceDataForDraw_t(
									const TraceDataForDraw_t  &);  // 1520
						CopyConstruct<TraceDataForDraw_t>(TraceDataForDraw_t* pMemory,
											const TraceDataForDraw_t& src);  // 1201
						CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::AddToTail(
								const TraceDataForDraw_t& src);  // 522
						CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 211
						CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::~CStrongHandleCopyable(); // 558
						TraceDataForDraw_t::~TraceDataForDraw_t(); // 536
					}
					CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
							int i);  // 484
				}
			}
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 479
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 481
		}
	}
	Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 458
	Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 459
	CRenderSkeleton::GetBoneWeightCount(); // 473
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 476
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

