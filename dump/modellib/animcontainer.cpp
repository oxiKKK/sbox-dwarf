
//
// modellib/animcontainer.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//

// <01CB63A2> modellib/animcontainer.cpp:5
// function calls: 12
void CAnimContainer::GetSeqGroupInstanceName(int nGroup, CBufferString* pOutName)
{
	CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::Count(); // 7
	CUtlMemory<CSeqGroupInstance, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::operator[](
			int i);  // 12
	CUtlString::Get(); // 30
	CSequenceGroupResource::GetName(); // 12
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 12
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 9
} /* size: 145, inline expansions: 12 (199 bytes) */

// <01CB604C> modellib/animcontainer.cpp:15
// function calls: 14
void CAnimContainer::GetAnimGroupNameForAnim(int nAnimation, CBufferString* pOutName)
{
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 17
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 22
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 22
	CUtlString::Get(); // 242
	CAnimationGroupResource::GetName(); // 22
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 22
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 19
} /* size: 145, inline expansions: 14 (203 bytes) */

// <01CB5B7D> modellib/animcontainer.cpp:25
// variables: 9
// function calls: 17
bool GroupHasValidAnimation(const CAnimationGroupResource* pAnimGroupResource)
{
	const CAnimationGroup* pAnimGroupData; // 30
	const char   __FUNCTION__; // 21615
	{
		int i; // 32
		{
			const CAnimationResource* pCAnimResource; // 34
			{
				const CAnimData* pAnimData; // 37
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 38
				}
				{
					int j; // 40
					CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::Count(); // 40
					CUtlMemory<CAnimDesc, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
							int i);  // 42
					CAnimDesc::NumFrames(); // 42
				}
				CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
				{
				}
				CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
				CAnimationResource::GetData(); // 37
			}
			CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std: this,
					int i);  // 34
			__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
			unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 34
		}
		Count(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std: this); // 32
	}
	{
		int i; // 51
		{
			const CAnimationGroupResource* pAnimGroup; // 53
			CUtlMemory<CAnimationGroupResource::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationGroupResource::operator[](
					int i);  // 53
		}
		CUtlVectorBase<CAnimationGroupResource::Count(); // 51
	}
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::Get(); // 234
	CAnimationGroupResource::GetData(); // 30
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <01CB5A31> modellib/animcontainer.cpp:63
// variables: 3
// function calls: 3
void CAnimContainer::HasValidAnimation()
{
	int nAnimGroups; // 65
	{
		int a; // 68
		{
			const CAnimationGroupResource* pAnimGroup; // 70
			CUtlMemory<const CAnimationGroupResource::operator[](
					int i);  // 595
			CUtlVectorBase<const CAnimationGroupResource::operator[](
					int i);  // 70
		}
	}
	CUtlVectorBase<const CAnimationGroupResource::Count(); // 65
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01CB5A01> modellib/animcontainer.cpp:78
void CAnimContainer::GetChannelArray()
{
} /* size: 12 */

// <01CB59D1> modellib/animcontainer.cpp:84
void CAnimContainer::GetBonePosMap()
{
} /* size: 12 */

// <01CB59A1> modellib/animcontainer.cpp:90
void CAnimContainer::GetBoneQuatMap()
{
} /* size: 12 */

// <01CB5971> modellib/animcontainer.cpp:95
void CAnimContainer::GetElementRequestPatternArray()
{
} /* size: 12 */

