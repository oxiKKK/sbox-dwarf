
//
// animgraph/animgraphinstancedata.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 53
//

// <015D2BDE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:15
void GetBaseMap(void)
{
} /* size: 0 */

// <015BEAC3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:15
// variables: 2
datamap_t* DataMapInit<PerTickSettings_t>(PerTickSettings_t *)
{
	const char* pDataMapInit_className; // 15
	typedescription_t dataDesc; // 15
} /* size: 177, variables: 2 */

// <015BE3FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:28
// function calls: 23
void CAnimGraphInstanceData::CAnimGraphInstanceData(const CAnimParameterList& paramList, const CAnimTagManager& tagMgr, const CAnimParamIdMap& paramMap)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 19
	IAnimGraphInstanceData::IAnimGraphInstanceData(); // 29
	CPackedDataT<true>::CPackedDataT(
			uint32 reserveSize);  // 29
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CAnimUpdateParameterList>::CPackedHandle(); // 29
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CAnimUpdateTagList>::CPackedHandle(); // 29
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<PerTickSettings_t>::CPackedHandle(); // 29
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CTraceRequestList>::CPackedHandle(); // 29
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<CAnimUpdateParameterList, const CAnimParameterList&, CPackedDataT<true>&, const CAnimParamIdMap&>(
															CPackedHandle<CAnimUpdateParameterList>* handleOut);  // 32
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<CAnimUpdateTagList, int, CPackedDataT<true>&>(
								CPackedHandle<CAnimUpdateTagList>* handleOut);  // 35
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
			const CRootMotion  &);  // 24
	PerTickSettings_t::PerTickSettings_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<PerTickSettings_t>(
					CPackedHandle<PerTickSettings_t>* handleOut);  // 38
} /* size: 0, inline expansions: 23 (805 bytes) */

// <015BE3BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:28
void CAnimGraphInstanceData::CAnimGraphInstanceData(const CAnimParameterList& paramList, const CAnimTagManager& tagMgr, const CAnimParamIdMap& paramMap)
{
} /* size: 0 */

// <015BDBB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:42
// function calls: 26
void CAnimGraphInstanceData::Clone()
{
	CPackedDataT<true>::CPackedDataT(
			const CPackedDataT<true>  &);  // 62
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(
				const CMutableRefCountBase<true, CRefMT>  &);  // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(
				const CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >  &);  // 19
	IAnimGraphInstanceData::IAnimGraphInstanceData(
				const IAnimGraphInstanceData  &);  // 62
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<CAnimUpdateParameterList>::CPackedHandle(
			const CPackedHandle<CAnimUpdateParameterList>  &);  // 62
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<CAnimUpdateTagList>::CPackedHandle(
			const CPackedHandle<CAnimUpdateTagList>  &);  // 62
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<PerTickSettings_t>::CPackedHandle(
			const CPackedHandle<PerTickSettings_t>  &);  // 62
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<CTraceRequestList>::CPackedHandle(
			const CPackedHandle<CTraceRequestList>  &);  // 62
	CAnimGraphInstanceData::CAnimGraphInstanceData(
				const CAnimGraphInstanceData  &);  // 44
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<IAnimGraphInstanceData>(IAnimGraphInstanceData* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimGraphInstanceData>(IAnimGraphInstanceData* pObj); // 370
	CSmartPtr<IAnimGraphInstanceData, CRefCountAccessor>::operator=(
			IAnimGraphInstanceData* pObj);  // 319
	CSmartPtr<IAnimGraphInstanceData, CRefCountAccessor>::CSmartPtr(
			IAnimGraphInstanceData* pObj);  // 44
} /* size: 129, inline expansions: 26 (244 bytes) */

// <015D2BFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:48
void CAnimGraphInstanceData::GetData()
{
} /* size: 9 */

// <015BDADF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:60
// function calls: 2
void CAnimGraphInstanceData::GetParameterList()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 246
	CPackedDataBase::GetItem<CAnimUpdateParameterList>(
						const CPackedHandle<CAnimUpdateParameterList>& handle);  // 62
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015BDA3D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:66
// function calls: 2
void CAnimGraphInstanceData::GetParameterList()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 253
	CPackedDataBase::GetItem<CAnimUpdateParameterList>(
						const CPackedHandle<CAnimUpdateParameterList>& handle);  // 68
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015D58F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:72
// function calls: 2
void CAnimGraphInstanceData::GetParameter(const CAnimParamHandle& handle)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 253
	CPackedDataBase::GetItem<CAnimUpdateParameterList>(
						const CPackedHandle<CAnimUpdateParameterList>& handle);  // 74
} /* size: 96, inline expansions: 2 (47 bytes) */

// <015BDA18> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:72
void CAnimGraphInstanceData::GetParameter(const CAnimParamHandle& handle)
{
} /* size: 0 */

// <015D5AEE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:78
// function calls: 2
void CAnimGraphInstanceData::SetParameter(const CAnimParamHandle& handle, const CAnimVariant& value)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 246
	CPackedDataBase::GetItem<CAnimUpdateParameterList>(
						const CPackedHandle<CAnimUpdateParameterList>& handle);  // 80
} /* size: 92, inline expansions: 2 (47 bytes) */

// <015BD9E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:78
void CAnimGraphInstanceData::SetParameter(const CAnimParamHandle& handle, const CAnimVariant& value)
{
} /* size: 0 */

// <015D2C25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:84
// function calls: 2
void CAnimGraphInstanceData::GetTagList()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimUpdateTagList>(
					const CPackedHandle<CAnimUpdateTagList>& handle);  // 86
} /* size: 66, inline expansions: 2 (47 bytes) */

// <015BD9CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:84
void CAnimGraphInstanceData::GetTagList()
{
} /* size: 0 */

// <015BD92B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:90
// function calls: 2
void CAnimGraphInstanceData::GetTagList()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<CAnimUpdateTagList>(
					const CPackedHandle<CAnimUpdateTagList>& handle);  // 92
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015D2CC3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:96
// function calls: 2
void CAnimGraphInstanceData::GetUpdateID()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 98
} /* size: 69, inline expansions: 2 (47 bytes) */

// <015BD912> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:96
void CAnimGraphInstanceData::GetUpdateID()
{
} /* size: 0 */

// <015D2D61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:102
// function calls: 2
void CAnimGraphInstanceData::IncrementUpdateID()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 104
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015BD8F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:102
void CAnimGraphInstanceData::IncrementUpdateID()
{
} /* size: 0 */

// <015CFB84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:108
// function calls: 2
void CAnimGraphInstanceData::GetAnimTime()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 110
} /* size: 71, inline expansions: 2 (47 bytes) */

// <015BD8E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:108
void CAnimGraphInstanceData::GetAnimTime()
{
} /* size: 0 */

// <015D2DFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:114
// function calls: 2
void CAnimGraphInstanceData::SetAnimTime(float flTime)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 116
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015BD8BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:114
void CAnimGraphInstanceData::SetAnimTime(float flTime)
{
} /* size: 0 */

// <015D2EB6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:120
// function calls: 2
void CAnimGraphInstanceData::GetPrevAnimTime()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 122
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015BD8A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:120
void CAnimGraphInstanceData::GetPrevAnimTime()
{
} /* size: 0 */

// <015D2F54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:126
// function calls: 2
void CAnimGraphInstanceData::SetPrevAnimTime(float flTime)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 128
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015BD87D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:126
void CAnimGraphInstanceData::SetPrevAnimTime(float flTime)
{
} /* size: 0 */

// <015D300B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:132
// function calls: 2
void CAnimGraphInstanceData::GetLastTimeStep()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 134
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015BD864> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:132
void CAnimGraphInstanceData::GetLastTimeStep()
{
} /* size: 0 */

// <015BD693> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:138
// function calls: 6
void CAnimGraphInstanceData::UpdateLastTimeStep()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 141
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 142
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 140
} /* size: 156, inline expansions: 6 (75 bytes) */

// <015D30A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:146
// function calls: 2
void CAnimGraphInstanceData::HasAwakenFromDormant()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 148
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015BD67A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:146
void CAnimGraphInstanceData::HasAwakenFromDormant()
{
} /* size: 0 */

// <015BD5B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:152
// function calls: 2
void CAnimGraphInstanceData::SetHasAwakenFromDormant(bool bAwaken)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 154
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015D3147> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:158
// function calls: 2
void CAnimGraphInstanceData::HasTeleported()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 160
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015BD59B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:158
void CAnimGraphInstanceData::HasTeleported()
{
} /* size: 0 */

// <015BD4D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:164
// function calls: 2
void CAnimGraphInstanceData::SetHasTeleported(bool bTeleported)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 166
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015D31E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:170
// function calls: 2
void CAnimGraphInstanceData::IsEditor()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 172
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015BD4BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:170
void CAnimGraphInstanceData::IsEditor()
{
} /* size: 0 */

// <015BD3F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:175
// function calls: 2
void CAnimGraphInstanceData::SetEditor(bool bIsEditor)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 177
} /* size: 76, inline expansions: 2 (21 bytes) */

// <015BD353> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:181
// function calls: 2
void CAnimGraphInstanceData::GetLocalToWorldTransform()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 183
} /* size: 66, inline expansions: 2 (47 bytes) */

// <015BD1CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:187
// function calls: 5
void CAnimGraphInstanceData::SetLocalToWorldTransform(const CTransform& localToWorld)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 189
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 189
} /* size: 88, inline expansions: 5 (49 bytes) */

// <015D3283> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:193
// function calls: 2
void CAnimGraphInstanceData::GetPreviousLocalToWorldTransform()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 195
} /* size: 70, inline expansions: 2 (47 bytes) */

// <015BD1B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:193
void CAnimGraphInstanceData::GetPreviousLocalToWorldTransform()
{
} /* size: 0 */

// <015BD030> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:199
// function calls: 5
void CAnimGraphInstanceData::SetPreviousLocalToWorldTransform(const CTransform& localToWorld)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 201
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 201
} /* size: 89, inline expansions: 5 (51 bytes) */

// <015D3321> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:205
// function calls: 2
void CAnimGraphInstanceData::GetRootMotion()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 207
} /* size: 70, inline expansions: 2 (47 bytes) */

// <015BD017> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:205
void CAnimGraphInstanceData::GetRootMotion()
{
} /* size: 0 */

// <015BCDC4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:211
// function calls: 7
void CAnimGraphInstanceData::SetRootMotion(const CRootMotion& motion)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 213
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			const CMotionTransform  &);  // 11
	Vector::operator=(
			const Vector& vOther);  // 11
	CRootMotion::operator=(
			const CRootMotion  &);  // 213
} /* size: 0, inline expansions: 7 (344 bytes) */

// <015BCC9F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:217
// function calls: 2
void CAnimGraphInstanceData::CreateTraceRequestList(int nRequestCount)
{
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<CTraceRequestList, CPackedDataT<true>&, int&>(
								CPackedHandle<CTraceRequestList>* handleOut);  // 219
} /* size: 78, inline expansions: 2 (48 bytes) */

// <015D33BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:223
// function calls: 2
void CAnimGraphInstanceData::GetTraceRequestList()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CTraceRequestList>(
					const CPackedHandle<CTraceRequestList>& handle);  // 225
} /* size: 66, inline expansions: 2 (47 bytes) */

// <015BCC86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:223
void CAnimGraphInstanceData::GetTraceRequestList()
{
} /* size: 0 */

// <015BCBE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:229
// function calls: 2
void CAnimGraphInstanceData::GetTraceRequestList()
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<CTraceRequestList>(
					const CPackedHandle<CTraceRequestList>& handle);  // 231
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015BCAE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:235
// variable: 1
// function calls: 2
void CAnimGraphInstanceData::Save(ISave* pSave)
{
	const PerTickSettings_t* pMoveData; // 237
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 237
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <015BC9DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:242
// variable: 1
// function calls: 2
void CAnimGraphInstanceData::Restore(IRestore* pRestore)
{
	PerTickSettings_t* pMoveData; // 244
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 244
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

