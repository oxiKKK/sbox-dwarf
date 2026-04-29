
//
// animgraph/blendupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 38
//

// <018546FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:11
void GetBaseMap(void)
{
} /* size: 0 */

// <0185463E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:11
// variables: 2
datamap_t* DataMapInit<CBlendNodeInstanceData>(CBlendNodeInstanceData *)
{
	const char* pDataMapInit_className; // 11
	typedescription_t dataDesc; // 11
} /* size: 144, variables: 2 */

// <01854610> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:21
void BlendWeights::BlendWeights()
{
} /* size: 0 */

// <01853D2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:30
// variables: 3
// function calls: 26
void CBlendUpdateNode::CBlendUpdateNode(CAnimGraphInitContext& initContext, uint32 childCount)
{
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::CRelativeOffset(); // 84
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::CRelativeArray(); // 31
	CRelativeOffset<float>::CRelativeOffset(); // 84
	CRelativeArray<float>::CRelativeArray(); // 31
	CRelativeOffset<unsigned char>::CRelativeOffset(); // 84
	CRelativeArray<unsigned char>::CRelativeArray(); // 31
	CAnimParamHandle::CAnimParamHandle(); // 31
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CBlendNodeInstanceData>::CPackedHandle(); // 31
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 39
	CBlendNodeInstanceData::CBlendNodeInstanceData(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<CBlendNodeInstanceData>(
					CPackedHandle<CBlendNodeInstanceData>* handleOut);  // 34
	{
		uint32 i; // 160
	}
	CPackedDataT<false>::AddArray<float>(
			uint32 count,
			CPackedHandle<float>* handleOut);  // 39
	{
	}
	CRelativeOffset<float>::SetOffset(
			const float* targetPtr);  // 20
	CRelativeOffset<float>::operator=(
			const float* targetPtr);  // 115
	CRelativeArray<float>::SetArray(
		const float* targetArray,
		int32 count);  // 39
	{
		uint32 i; // 160
		CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 162
	}
	CPackedDataT<false>::AddArray<CRelativeOffset<const CAnimUpdateNodeBase> >(
								uint32 count,
								CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >* handleOut);  // 42
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::SetOffset(
			const CRelativeOffset<const CAnimUpdateNodeBase>* targetPtr);  // 20
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::operator=(
			const CRelativeOffset<const CAnimUpdateNodeBase>* targetPtr);  // 115
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::SetArray(
		const CRelativeOffset<const CAnimUpdateNodeBase>* targetArray,
		int32 count);  // 42
	{
		uint32 i; // 160
	}
	CPackedDataT<false>::AddArray<unsigned char>(
				uint32 count,
				CPackedHandle<unsigned char>* handleOut);  // 45
	{
	}
	CRelativeOffset<unsigned char>::SetOffset(
			const unsigned char* targetPtr);  // 20
	CRelativeOffset<unsigned char>::operator=(
			const unsigned char* targetPtr);  // 115
	CRelativeArray<unsigned char>::SetArray(
		const unsigned char* targetArray,
		int32 count);  // 45
} /* size: 0, inline expansions: 25 (804 bytes) */

// <01853CFA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:30
void CBlendUpdateNode::CBlendUpdateNode(CAnimGraphInitContext& initContext, uint32 childCount)
{
} /* size: 0 */

// <01853C9C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:50
// function call: 1
void CBlendUpdateNode::GetChildCount()
{
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 52
} /* size: 8, inline expansions: 1 (0 bytes) */

// <01853B30> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:56
// function calls: 6
void CBlendUpdateNode::GetChild(int index)
{
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 58
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 60
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 60
} /* size: 57, inline expansions: 6 (69 bytes) */

// <01853940> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:69
// variables: 3
// function calls: 5
void CBlendUpdateNode::IsChildActive(CAnimGraphUpdateContext& context, int index)
{
	CBlendNodeInstanceData* pInstData; // 71
	const BlendWeights& blendWeights; // 72
	{
		uint32 i; // 74
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 71
} /* size: 157, variables: 2, inline expansions: 5 (76 bytes) */

// <01853910> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:86
void CBlendUpdateNode::IsChildWaning(CAnimGraphUpdateContext& context, int index)
{
} /* size: 0 */

// <01869D46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:92
// variables: 8
// function calls: 18
void CBlendUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 94
	{
		CBlendNodeInstanceData* pInstData; // 105
		const float  duration; // 107
		float& cycle; // 108
		const float  currentPlaybackSpeed; // 110
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 105
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 285
		CBlendUpdateNode::GetDuration(
				CAnimGraphUpdateContext& context);  // 107
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 108
		{
			float flLastCycle; // 118
		}
		{
			float flLastCycle; // 123
			{
				float elapsedAnimTime; // 132
				float flCycleStartTime; // 133
			}
		}
	}
	CBlendUpdateNode::Update(
		CAnimGraphUpdateContext& context);  // 92
} /* size: 599, inline expansions: 2 (426 bytes) */

// <0185387E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:92
// variables: 8
void CBlendUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	{
		CBlendNodeInstanceData* pInstData; // 105
		const float  duration; // 107
		float& cycle; // 108
		const float  currentPlaybackSpeed; // 110
		{
			float flLastCycle; // 118
		}
		{
			float flLastCycle; // 123
			{
				float elapsedAnimTime; // 132
				float flCycleStartTime; // 133
			}
		}
	}
} /* size: 0 */

// <018530D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:157
// variables: 8
// function calls: 26
void CBlendUpdateNode::EnqueueChildren(CAnimGraphUpdateContext& context)
{
	CBlendNodeInstanceData* pInstData; // 159
	const BlendWeights& blendWeights; // 160
	const float  flDuration; // 162
	{
		uint32 i; // 164
		{
			const int  index; // 166
			const float  weight; // 167
			{
				float childPlaybackSpeed; // 171
				{
					float childDuration; // 174
					{
					}
					CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
					CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
					CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
							int index);  // 174
					CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
					CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
					CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 174
				}
				{
				}
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
				CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
						int index);  // 181
				CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
				CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 181
			}
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 169
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 169
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 159
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 285
	CBlendUpdateNode::GetDuration(
			CAnimGraphUpdateContext& context);  // 162
} /* size: 0, variables: 3, inline expansions: 11 (187 bytes) */

// <018524BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:187
// variables: 17
// function calls: 39
void CBlendUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	CBlendNodeInstanceData* pInstData; // 189
	const BlendWeights& blendWeights; // 190
	PoseHandle hPose; // 192
	int activeChildren; // 209
	{
		uint32 i; // 195
		{
			const int  index; // 197
			const float  weight; // 198
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 200
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 200
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 202
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
			CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 202
		}
	}
	{
		uint32 i; // 210
		{
			int index; // 212
			float weight; // 213
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 215
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 215
		}
	}
	{
		PoseHandle poses; // 224
		{
			uint32 i; // 227
			{
				int index; // 229
				{
					PoseHandle hChildPose; // 233
					{
					}
					CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
					CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
					CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
							int index);  // 233
					CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
					CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
					CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 233
				}
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
				{
				}
				CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
						int index);  // 231
				CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 231
			}
		}
	}
	{
		uint32 i; // 253
		{
			int index; // 255
			float weight; // 256
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 258
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 258
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 260
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
			CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 260
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 189
} /* size: 0, variables: 4, inline expansions: 5 (77 bytes) */

// <01852161> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:270
// variables: 2
// function calls: 11
void CBlendUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 32714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 272
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 66
	CAnimUpdateNodeBase::GetLastUpdateID(
			const CAnimGraphUpdateContext& context);  // 272
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 273
} /* size: 0, variables: 1, inline expansions: 11 (176 bytes) */

// <01851FCB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:277
// function calls: 5
void CBlendUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 279
} /* size: 88, inline expansions: 5 (68 bytes) */

// <018667D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:283
// function calls: 5
void CBlendUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 285
} /* size: 88, inline expansions: 5 (68 bytes) */

// <01851FA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:283
void CBlendUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <01851790> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:289
// variables: 7
// function calls: 30
void CBlendUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	const BlendWeights& blendWeights; // 291
	float moveDist; // 293
	CMotionTransform motion; // 295
	{
		uint32 i; // 297
		{
			float weight; // 299
			{
				int childIndex; // 302
				{
					CMotionTransform childMotion; // 305
					{
					}
					CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
					CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
					CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
							int index);  // 305
					CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
					CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
					CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 305
					_mm_load_ss(const float* __P); // 21
					_mm_sqrt_ss(__m128 __A); // 21
					_mm_cvtss_f32(__m128 __A); // 21
					FastSqrt(float x); // 1249
					VectorLength(const Vector& v); // 1256
					Vector::Length(); // 44
					CMotionTransform::Length(); // 308
				}
				{
				}
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
				CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
						int index);  // 303
				CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 303
			}
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 291
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 295
	Vector::Normalized(); // 315
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 315
	Vector::operator=(
			const Vector& vOther);  // 315
} /* size: 0, variables: 3, inline expansions: 13 (312 bytes) */

// <01850E8E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:322
// variables: 8
// function calls: 33
void CBlendUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	const BlendWeights& blendWeights; // 324
	float moveDist; // 326
	CMotionTransform motion; // 328
	{
		uint32 i; // 330
		{
			float weight; // 332
			{
				int childIndex; // 335
				{
					float flTestCycle; // 338
					CMotionTransform childMotion; // 340
					{
					}
					CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
					CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
					CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
							int index);  // 340
					CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
					CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
					CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 340
					_mm_load_ss(const float* __P); // 21
					_mm_sqrt_ss(__m128 __A); // 21
					_mm_cvtss_f32(__m128 __A); // 21
					FastSqrt(float x); // 1249
					VectorLength(const Vector& v); // 1256
					Vector::Length(); // 343
					CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
					PackedHandleID::PackedHandleID(
							const PackedHandleID& rhs);  // 260
					CPackedDataBase::operator[]<CBlendNodeInstanceData>(
										const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
					CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
										const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
					CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
										const CPackedHandle<CBlendNodeInstanceData>& handle);  // 338
				}
				{
				}
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
				CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
						int index);  // 336
				CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 336
			}
		}
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 324
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 328
	Vector::Normalized(); // 350
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 350
	Vector::operator=(
			const Vector& vOther);  // 350
} /* size: 0, variables: 3, inline expansions: 12 (341 bytes) */

// <018502A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:357
// variables: 10
// function calls: 40
void CBlendUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	{
		const float  targetValue; // 366
		CBlendNodeInstanceData* pInstData; // 368
		const BlendWeights& blendWeights; // 380
		{
			uint32 i; // 381
			{
				int index; // 383
				float weight; // 384
				{
				}
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
				CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
						int index);  // 386
				CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 386
				{
				}
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
				CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
						int index);  // 388
				CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
				CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
				CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 388
			}
		}
		{
			const float  flPlaybackSpeed; // 395
			const float  flDuration; // 396
			float elapsedAnimTime; // 398
			float flCycleStartTime; // 399
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CBlendNodeInstanceData>(
								const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
								const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
								const CPackedHandle<CBlendNodeInstanceData>& handle);  // 285
			CBlendUpdateNode::GetDuration(
					CAnimGraphUpdateContext& context);  // 396
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<NodeInfo_t>(
					const CPackedHandle<NodeInfo_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<NodeInfo_t>(
					const CPackedHandle<NodeInfo_t>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
					const CPackedHandle<NodeInfo_t>& handle);  // 54
		CAnimUpdateNodeBase::Reset(
			CAnimGraphUpdateContext& context,
			float flCycle);  // 364
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 368
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 634
		CBlendUpdateNode::CalcBlendValue(
				CAnimGraphUpdateContext& context,
				float paramValue);  // 377
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimUpdateNodeBase::IsReset(
		const CAnimGraphUpdateContext& context);  // 361
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 66
	CAnimUpdateNodeBase::GetLastUpdateID(
			const CAnimGraphUpdateContext& context);  // 362
} /* size: 0, inline expansions: 11 (254 bytes) */

// <0184FE1A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:412
// variables: 5
// function calls: 15
void CBlendUpdateNode::IsFinished(CAnimGraphUpdateContext& context)
{
	CBlendNodeInstanceData* pInstData; // 414
	const BlendWeights& blendWeights; // 415
	{
		uint32 i; // 418
		{
			int index; // 420
			float weight; // 421
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 423
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 423
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 425
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
			CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 425
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 414
} /* size: 0, variables: 2, inline expansions: 5 (69 bytes) */

// <0184F970> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:436
// variables: 6
// function calls: 15
void CBlendUpdateNode::GetTimeTillFinished(CAnimGraphUpdateContext& context)
{
	float timeRemaining; // 439
	const BlendWeights& blendWeights; // 441
	{
		uint32 i; // 443
		{
			int index; // 445
			float weight; // 446
			{
				float childTimeRemaining; // 450
				{
				}
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
				CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
						int index);  // 450
				CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
				CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
				CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 450
			}
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 448
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 448
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 441
} /* size: 0, variables: 2, inline expansions: 5 (69 bytes) */

// <0184F793> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:467
// variable: 1
// function calls: 5
void CBlendUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const CBlendNodeInstanceData* pInstData; // 469
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 469
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0184F5B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:474
// variable: 1
// function calls: 5
void CBlendUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	CBlendNodeInstanceData* pInstData; // 476
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 476
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0184ECDD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:481
// variables: 10
// function calls: 32
void CBlendUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	const CBlendNodeInstanceData* pInstData; // 483
	const BlendWeights& blendWeights; // 485
	const char   __FUNCTION__; // 32866
	float moveDist; // 490
	CRootMotion motion; // 492
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 488
	}
	{
		uint32 i; // 494
		{
			const int  index; // 496
			const float  weight; // 497
			{
				CRootMotion childMotion; // 501
				{
				}
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
				CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
						int index);  // 501
				CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
				CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
				CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 501
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 44
				CMotionTransform::Length(); // 504
			}
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 499
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 499
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 483
	CloseEnough(float a,
			float b,
			float epsilon);  // 488
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 492
	Vector::Normalized(); // 510
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 510
	Vector::operator=(
			const Vector& vOther);  // 510
} /* size: 0, variables: 5, inline expansions: 15 (434 bytes) */

// <0184DD37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:517
// variables: 6
// function calls: 49
void CBlendUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	const BlendWeights& blendWeights; // 521
	CStrideStatus childFootPoseInfo; // 523
	{
		uint32 i; // 525
		{
			const int  index; // 527
			const float  weight; // 528
			{
				int iFoot; // 541
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				Vector::operator=(
						const Vector& vOther);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 12
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				Vector::operator=(
						const Vector& vOther);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 12
				Vector::operator=(
						const Vector& vOther);  // 188
				CFootTrajectory::operator=(
						CFootTrajectory &);  // 12
				Vector::operator=(
						const Vector& vOther);  // 188
				CFootTrajectory::operator=(
						CFootTrajectory &);  // 12
				Vector::operator=(
						const Vector& vOther);  // 12
				Vector::operator=(
						const Vector& vOther);  // 12
				Vector::operator=(
						const Vector& vOther);  // 12
				Vector::operator=(
						const Vector& vOther);  // 12
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				Vector::operator=(
						const Vector& vOther);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 12
				CFootMotionStatus::operator=(
						CFootMotionStatus &);  // 549
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 12
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				Vector::operator=(
						const Vector& vOther);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 12
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				Vector::operator=(
						const Vector& vOther);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 12
				CFootMotionStatus::operator=(
						CFootMotionStatus &);  // 545
			}
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 530
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 530
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 535
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
			CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 535
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 539
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
			CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 539
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 521
} /* size: 0, variables: 2, inline expansions: 5 (110 bytes) */

// <0184DBAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:558
// function calls: 5
void CBlendUpdateNode::SetChild(int index, const CAnimUpdateNodeBase* pChild)
{
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 30
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 90
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 560
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 560
} /* size: 0, inline expansions: 5 (172 bytes) */

// <0184DA70> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:564
// function calls: 3
void CBlendUpdateNode::SetTargetValue(int index, float value)
{
	{
	}
	CRelativeOffset<float>::IsValid(); // 30
	CRelativeOffset<float>::Get(); // 90
	CRelativeArray<float>::operator[](
			int index);  // 566
} /* size: 0, inline expansions: 3 (132 bytes) */

// <0184D934> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:570
// function calls: 3
void CBlendUpdateNode::SetSortedIndex(int index, uint8 nSortedIndex)
{
	{
	}
	CRelativeOffset<unsigned char>::IsValid(); // 30
	CRelativeOffset<unsigned char>::Get(); // 90
	CRelativeArray<unsigned char>::operator[](
			int index);  // 572
} /* size: 0, inline expansions: 3 (136 bytes) */

// <0184D891> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:576
// function call: 1
void CBlendUpdateNode::SetDamping(const CAnimInputDamping& damping)
{
	CAnimInputDamping::operator=(
			const CAnimInputDamping  &);  // 578
} /* size: 61, inline expansions: 1 (56 bytes) */

// <0184D853> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:582
void CBlendUpdateNode::SetSync(bool bSync)
{
} /* size: 9 */

// <0184CD27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:588
// variables: 10
// function calls: 37
void CBlendUpdateNode::UpdateBlendValue(CAnimGraphUpdateContext& context)
{
	float targetValue; // 590
	float paramValue; // 594
	const float  flBlendValue; // 596
	{
		const BlendWeights& blendWeights; // 602
		const BlendWeights& oldBlendWeights; // 603
		{
			int i; // 605
			{
				int newIndex; // 607
				float newWeight; // 608
				{
					bool bWasUsedLastTick; // 613
					float oldWeight; // 614
					{
					}
					CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
					CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
					CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
							int index);  // 617
					CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
					CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
					CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 617
					CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
					PackedHandleID::PackedHandleID(
							const PackedHandleID& rhs);  // 260
					CPackedDataBase::operator[]<CBlendNodeInstanceData>(
										const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
					CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
										const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
					CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
										const CPackedHandle<CBlendNodeInstanceData>& handle);  // 617
				}
				{
				}
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
				CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
						int index);  // 610
				CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 610
			}
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 603
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 592
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 594
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 634
	CBlendUpdateNode::CalcBlendValue(
			CAnimGraphUpdateContext& context,
			float paramValue);  // 596
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 623
} /* size: 0, variables: 3, inline expansions: 17 (241 bytes) */

// <01869C96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:630
// variable: 1
// function call: 1
void CBlendUpdateNode::CalcBlendValue(CAnimGraphUpdateContext& context, float paramValue)
{
	float flBlendValue; // 632
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 634
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01869A81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:630
// variables: 10
// function calls: 4
void CBlendUpdateNode::CalcBlendValue(CAnimGraphUpdateContext& context, float paramValue)
{
	float flBlendValue; // 632
	{
		float flMinValue; // 636
		int nMinIndex; // 637
		float flMaxValue; // 639
		int nMaxIndex; // 640
		float flLastValue; // 642
		{
			int i; // 644
			CRelativeArray<unsigned char>::Count(); // 644
			{
				const int  sortedIndex; // 646
				const float  flKeyValue; // 648
				CRelativeOffset<unsigned char>::IsValid(); // 35
				CRelativeOffset<unsigned char>::Get(); // 97
				CRelativeArray<unsigned char>::operator[](
						int index);  // 646
			}
		}
		{
		}
		{
			float blend; // 669
		}
	}
} /* size: 0, variables: 1 */

// <0184CC3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:630
// variables: 12
void CBlendUpdateNode::CalcBlendValue(CAnimGraphUpdateContext& context, float paramValue)
{
	float flBlendValue; // 632
	const char   __FUNCTION__; // 32741
	{
		float flMinValue; // 636
		int nMinIndex; // 637
		float flMaxValue; // 639
		int nMaxIndex; // 640
		float flLastValue; // 642
		{
			int i; // 644
			{
				const int  sortedIndex; // 646
				const float  flKeyValue; // 648
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 665
		}
		{
			float blend; // 669
		}
	}
} /* size: 0, variables: 2 */

// <0184BD01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:687
// variables: 11
// function calls: 62
void CBlendUpdateNode::GetKeyValue(CAnimGraphUpdateContext& context, int childIndex)
{
	const char   __FUNCTION__; // 32660
	float flValue; // 692
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 689
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 690
	}
	{
		float flDuration; // 704
		{
			CMotionTransform childMotion; // 707
			float flDistance; // 708
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 707
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
			CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 707
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 44
			CMotionTransform::Length(); // 708
		}
		{
		}
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 704
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 704
	}
	{
		CMotionTransform childMotion; // 720
		{
		}
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 720
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 720
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 44
		CMotionTransform::Length(); // 721
	}
	{
		float flCycle; // 730
		CMotionTransform childMotion; // 731
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
							const CPackedHandle<CBlendNodeInstanceData>& handle);  // 730
		{
		}
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 731
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 731
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 44
		CMotionTransform::Length(); // 732
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 738
	}
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 690
	{
	}
	CRelativeOffset<float>::IsValid(); // 35
	CRelativeOffset<float>::Get(); // 97
	CRelativeArray<float>::operator[](
			int index);  // 697
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 728
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 728
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 702
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 702
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	{
	}
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 718
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 718
} /* size: 0, variables: 2, inline expansions: 16 (517 bytes) */

// <0184BA2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:746
// variables: 5
// function calls: 11
void CBlendUpdateNode::CalcWeightsFromBlendValue(float flBlendValue)
{
	BlendWeights blendWeights; // 748
	float flFloorValue; // 750
	int nFloorValue; // 751
	float flCeilValue; // 756
	int nCeilValue; // 757
	BlendWeights::BlendWeights(); // 748
	CRelativeArray<unsigned char>::Count(); // 751
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 751
	{
	}
	CRelativeOffset<unsigned char>::IsValid(); // 35
	CRelativeOffset<unsigned char>::Get(); // 97
	CRelativeArray<unsigned char>::operator[](
			int index);  // 753
	CRelativeArray<unsigned char>::Count(); // 757
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 757
	{
	}
	CRelativeOffset<unsigned char>::IsValid(); // 35
	CRelativeOffset<unsigned char>::Get(); // 97
	CRelativeArray<unsigned char>::operator[](
			int index);  // 761
} /* size: 0, variables: 5, inline expansions: 11 (428 bytes) */

// <0184B154> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:768
// variables: 12
// function calls: 33
void CBlendUpdateNode::UpdateDuration(CAnimGraphUpdateContext& context)
{
	CBlendNodeInstanceData* pInstData; // 770
	const BlendWeights& blendWeights; // 772
	float duration; // 775
	{
		float flDistance; // 781
		float targetSpeed; // 795
		{
			uint32 i; // 783
			{
				int index; // 785
				float weight; // 786
				{
					CMotionTransform childMotion; // 790
					{
					}
					CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
					CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
					CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
							int index);  // 790
					CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
					CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
					CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 790
					_mm_load_ss(const float* __P); // 21
					_mm_sqrt_ss(__m128 __A); // 21
					_mm_cvtss_f32(__m128 __A); // 21
					FastSqrt(float x); // 1249
					VectorLength(const Vector& v); // 1256
					Vector::Length(); // 44
					CMotionTransform::Length(); // 791
				}
				{
				}
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
				CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
				CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
						int index);  // 788
				CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 788
			}
		}
		CloseEnough(float a,
				float b,
				float epsilon);  // 796
	}
	{
		uint32 i; // 807
		{
			int index; // 809
			float weight; // 810
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 812
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 812
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
					int index);  // 814
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
			CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 814
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlendNodeInstanceData>(
						const CPackedHandle<CBlendNodeInstanceData>& handle);  // 770
} /* size: 0, variables: 3, inline expansions: 5 (77 bytes) */

