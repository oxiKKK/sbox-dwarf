
//
// animgraph/solveikchainupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 21
//	class: 1
//

// <0194301D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:22
void Get(void)
{
} /* size: 12 */

// <0193F948> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:132
// variables: 3
// function calls: 54
void CSolveIKChainUpdateNode::CSolveIKChainUpdateNode(CAnimGraphInitContext& initContext, int nNumChains)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 9
	CUnaryUpdateNode::CUnaryUpdateNode(
			CAnimGraphInitContext& initContext);  // 133
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<unsigned char>::CPackedHandle(); // 133
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>::CPackedHandle(); // 133
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<SolveIKChainPoseOpFixedSettings_t>::CPackedHandle(); // 133
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>::CPackedHandle(); // 133
	CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::CRelativeOffset(); // 84
	CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::CRelativeArray(); // 19
	SolveIKChainUpdateNodeFixedSettings_t::SolveIKChainUpdateNodeFixedSettings_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<false>::AddItem<SolveIKChainUpdateNodeFixedSettings_t>(
							CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>* handleOut);  // 135
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SolveIKChainUpdateNodeFixedSettings_t>(
								const CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>& handle);  // 136
	{
		uint32 i; // 160
		CAnimParamHandle::CAnimParamHandle(); // 21
		ChainToSolveData_t::ChainToSolveData_t(); // 162
	}
	CPackedDataT<false>::AddArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>(
										uint32 count,
										CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* handleOut);  // 136
	{
	}
	CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::SetOffset(
			const ChainToSolveData_t* targetPtr);  // 20
	CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::operator=(
			const ChainToSolveData_t* targetPtr);  // 115
	CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::SetArray(
		const ChainToSolveData_t* targetArray,
		int32 count);  // 136
	CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::CRelativeOffset(); // 84
	CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::CRelativeArray(); // 24
	SolveIKChainPoseOpFixedSettings_t::SolveIKChainPoseOpFixedSettings_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<false>::AddItem<SolveIKChainPoseOpFixedSettings_t>(
							CPackedHandle<SolveIKChainPoseOpFixedSettings_t>* handleOut);  // 138
	{
		uint32 i; // 160
		IKSolverSettings_t::IKSolverSettings_t(); // 26
		CUtlString::CUtlString(); // 26
		IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(); // 42
		AnimParamID::AnimParamID(); // 42
		IKTargetSettings_t::IKTargetSettings_t(); // 26
		ChainToSolveData_t::ChainToSolveData_t(); // 162
	}
	CPackedDataT<false>::AddArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>(
									uint32 count,
									CPackedHandle<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* handleOut);  // 139
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SolveIKChainPoseOpFixedSettings_t>(
							const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>& handle);  // 139
	{
	}
	CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::SetOffset(
			const ChainToSolveData_t* targetPtr);  // 20
	CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::operator=(
			const ChainToSolveData_t* targetPtr);  // 115
	CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::SetArray(
		const ChainToSolveData_t* targetArray,
		int32 count);  // 139
	{
		uint32 i; // 160
		ChainToSolveData_t::ChainToSolveData_t(); // 162
	}
	CPackedDataT<true>::AddArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>(
										uint32 count,
										CPackedHandle<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* handleOut);  // 142
	CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::CRelativeOffset(); // 84
	CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::CRelativeArray(); // 40
	SolveIKChainPoseOpInstanceSettings_t::SolveIKChainPoseOpInstanceSettings_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<SolveIKChainPoseOpInstanceSettings_t>(
							CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>* handleOut);  // 141
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SolveIKChainPoseOpInstanceSettings_t>(
							const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>& handle);  // 142
	{
	}
	CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::SetOffset(
			const ChainToSolveData_t* targetPtr);  // 20
	CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::operator=(
			const ChainToSolveData_t* targetPtr);  // 115
	CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::SetArray(
		const ChainToSolveData_t* targetArray,
		int32 count);  // 142
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<unsigned char, unsigned char const&>(
							CPackedHandle<unsigned char>* handleOut);  // 144
} /* size: 0, inline expansions: 45 (1085 bytes) */

// <0193F917> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:132
void CSolveIKChainUpdateNode::CSolveIKChainUpdateNode(CAnimGraphInitContext& initContext, int nNumChains)
{
} /* size: 0 */

// <0193ED8A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:148
// function call: 1
void AnimationResultPoseAccessorWrapper::~AnimationResultPoseAccessorWrapper()
{
	IPoseAccessor::~IPoseAccessor(); // 148
} /* size: 5, inline expansions: 1 (0 bytes) */

// <0193ECD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:148
// function calls: 2
void AnimationResultPoseAccessorWrapper::~AnimationResultPoseAccessorWrapper()
{
	IPoseAccessor::~IPoseAccessor(); // 148
	AnimationResultPoseAccessorWrapper::~AnimationResultPoseAccessorWrapper(); // 148
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0193ECBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:148
inline void AnimationResultPoseAccessorWrapper::~AnimationResultPoseAccessorWrapper()
{
} /* size: 0 */

// <01910D05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:148
// member functions: 24
// member variables: 2
// vtable entries: 8
// class size: 16
class AnimationResultPoseAccessorWrapper : public IPoseAccessor {
public:
	/* class IPoseAccessor <ancestor>; */ /* 0 8 */
	void AnimationResultPoseAccessorWrapper(AnimationResultPoseAccessorWrapper* , AnimationResultPoseAccessorWrapper& );
	void AnimationResultPoseAccessorWrapper(AnimationResultPoseAccessorWrapper* , const AnimationResultPoseAccessorWrapper& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:151 */
	void AnimationResultPoseAccessorWrapper(AnimationResultPoseAccessorWrapper* , const CAnimationResult& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:156 */
	virtual const CModel* GetModel(const AnimationResultPoseAccessorWrapper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:161 */
	virtual void SetParentSpaceBone(AnimationResultPoseAccessorWrapper* , int, const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:166 */
	virtual void SetModelSpaceBone(AnimationResultPoseAccessorWrapper* , int, const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:171 */
	virtual void SetWorldSpaceBone(AnimationResultPoseAccessorWrapper* , int, const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:176 */
	virtual CTransform GetModelToWorld(const AnimationResultPoseAccessorWrapper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:181 */
	virtual CTransform GetParentSpaceBone(const AnimationResultPoseAccessorWrapper* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:190 */
	virtual CTransform GetModelSpaceBone(const AnimationResultPoseAccessorWrapper* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:211 */
	virtual CTransform GetWorldSpaceBone(const AnimationResultPoseAccessorWrapper* , int);
private:
	const class CAnimationResult & m_Result; /* 8 8 */
	virtual void ~AnimationResultPoseAccessorWrapper(AnimationResultPoseAccessorWrapper* );
	void AnimationResultPoseAccessorWrapper(class AnimationResultPoseAccessorWrapper *, class AnimationResultPoseAccessorWrapper &); /* linkage=_ZN34AnimationResultPoseAccessorWrapperC4EOS_ */
	void AnimationResultPoseAccessorWrapper(class AnimationResultPoseAccessorWrapper *, const class AnimationResultPoseAccessorWrapper  &); /* linkage=_ZN34AnimationResultPoseAccessorWrapperC4ERKS_ */
	void AnimationResultPoseAccessorWrapper(class AnimationResultPoseAccessorWrapper *, const class CAnimationResult  &); /* linkage=_ZN34AnimationResultPoseAccessorWrapperC4ERK16CAnimationResult */
	virtual const class CModel  * GetModel(const class AnimationResultPoseAccessorWrapper  *); /* linkage=_ZNK34AnimationResultPoseAccessorWrapper8GetModelEv */
	virtual void SetParentSpaceBone(class AnimationResultPoseAccessorWrapper *, int, const class CTransform  &); /* linkage=_ZN34AnimationResultPoseAccessorWrapper18SetParentSpaceBoneEiRK10CTransform */
	virtual void SetModelSpaceBone(class AnimationResultPoseAccessorWrapper *, int, const class CTransform  &); /* linkage=_ZN34AnimationResultPoseAccessorWrapper17SetModelSpaceBoneEiRK10CTransform */
	virtual void SetWorldSpaceBone(class AnimationResultPoseAccessorWrapper *, int, const class CTransform  &); /* linkage=_ZN34AnimationResultPoseAccessorWrapper17SetWorldSpaceBoneEiRK10CTransform */
	virtual class CTransform GetModelToWorld(const class AnimationResultPoseAccessorWrapper  *); /* linkage=_ZNK34AnimationResultPoseAccessorWrapper15GetModelToWorldEv */
	virtual class CTransform GetParentSpaceBone(const class AnimationResultPoseAccessorWrapper  *, int); /* linkage=_ZNK34AnimationResultPoseAccessorWrapper18GetParentSpaceBoneEi */
	/* <1973c01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:190 */
	virtual class CTransform GetModelSpaceBone(const class AnimationResultPoseAccessorWrapper  *, int); /* linkage=_ZNK34AnimationResultPoseAccessorWrapper17GetModelSpaceBoneEi */
	virtual class CTransform GetWorldSpaceBone(const class AnimationResultPoseAccessorWrapper  *, int); /* linkage=_ZNK34AnimationResultPoseAccessorWrapper17GetWorldSpaceBoneEi */
	virtual void ~AnimationResultPoseAccessorWrapper(class AnimationResultPoseAccessorWrapper *); /* linkage=_ZN34AnimationResultPoseAccessorWrapperD4Ev */
};

// <0193F8FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:151
void AnimationResultPoseAccessorWrapper::AnimationResultPoseAccessorWrapper(const CAnimationResult& result)
{
} /* size: 0 */

// <0193F8D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:151
inline void AnimationResultPoseAccessorWrapper::AnimationResultPoseAccessorWrapper(const CAnimationResult& result)
{
} /* size: 0 */

// <0193F893> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:156
void AnimationResultPoseAccessorWrapper::GetModel()
{
} /* size: 13 */

// <0193F7E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:161
// variables: 2
void AnimationResultPoseAccessorWrapper::SetParentSpaceBone(int nBoneIndex, const CTransform& mBoneToParent)
{
	const char   __FUNCTION__; // 54733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 163
	}
} /* size: 36, variables: 1 */

// <0193F72F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:166
// variables: 2
void AnimationResultPoseAccessorWrapper::SetModelSpaceBone(int nBoneIndex, const CTransform& mBoneToModel)
{
	const char   __FUNCTION__; // 54706
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 168
	}
} /* size: 36, variables: 1 */

// <0193F67D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:171
// variables: 2
void AnimationResultPoseAccessorWrapper::SetWorldSpaceBone(int nBoneIndex, const CTransform& mBoneToWorld)
{
	const char   __FUNCTION__; // 54706
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
} /* size: 36, variables: 1 */

// <0193F64F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:176
void AnimationResultPoseAccessorWrapper::GetModelToWorld()
{
} /* size: 45 */

// <0193F2FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:181
// variables: 4
// function calls: 10
void AnimationResultPoseAccessorWrapper::GetParentSpaceBone(int nBoneIndex)
{
	Vector v; // 183
	Quaternion q; // 184
	CTransform x; // 186
	Vector::Vector(); // 183
	Quaternion::Quaternion(); // 184
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
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 186
} /* size: 123, variables: 3, inline expansions: 9 (129 bytes) */

// <01973C01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:190
// variables: 5
// function calls: 14
void AnimationResultPoseAccessorWrapper::GetModelSpaceBone(int nBoneIndex)
{
	CTransform x; // 192
	{
		Vector v; // 196
		Quaternion q; // 197
		CTransform x2; // 200
		Vector::Vector(); // 196
		Quaternion::Quaternion(); // 197
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 200
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 328
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
					float flScale);  // 329
		CTransform::InitFromQuaternion(
					const Quaternion& orientation,
					const Vector& vPosition,
					float flScale);  // 201
		ConcatTransforms(const CTransform  in1,
				const CTransform  in2);  // 203
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 203
	}
} /* size: 314, variables: 1 */

// <0193F263> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:190
// variables: 4
inline void AnimationResultPoseAccessorWrapper::GetModelSpaceBone(int nBoneIndex)
{
	CTransform x; // 192
	{
		Vector v; // 196
		Quaternion q; // 197
		CTransform x2; // 200
	}
} /* size: 0, variables: 1 */

// <0193EDE9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:211
// variables: 4
// function calls: 15
void AnimationResultPoseAccessorWrapper::GetWorldSpaceBone(int nBoneIndex)
{
	{
		Vector v; // 196
		Quaternion q; // 197
		CTransform x2; // 200
		Vector::Vector(); // 196
		Quaternion::Quaternion(); // 197
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 200
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 328
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
					float flScale);  // 329
		CTransform::InitFromQuaternion(
					const Quaternion& orientation,
					const Vector& vPosition,
					float flScale);  // 201
		ConcatTransforms(const CTransform  in1,
				const CTransform  in2);  // 203
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 203
	}
	AnimationResultPoseAccessorWrapper::GetModelSpaceBone(
				int nBoneIndex);  // 213
} /* size: 348, inline expansions: 1 (228 bytes) */

// <0193E037> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:230
// variables: 9
// function calls: 32
void CSolveIKChainUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	const SolveIKChainUpdateNodeFixedSettings_t* pFixedSettings; // 232
	SolveIKChainPoseOpInstanceSettings_t* pInstanceSettings; // 233
	{
		int n; // 235
		{
			const ChainToSolveData_t& fixedSettings; // 237
			ChainToSolveData_t& poseOpInstanceSettings; // 238
			const Quaternion  qOrientation; // 240
			const VectorAligned  vWsPosition; // 242
			CTransform x; // 244
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 242
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 244
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
					float flScale);  // 244
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 246
			CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::IsValid(); // 35
			CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::Get(); // 97
			CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::operator[](
					int index);  // 237
			{
			}
			CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::IsValid(); // 30
			CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::Get(); // 90
			CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::operator[](
					int index);  // 238
			{
				DefaultValue(void); // 200
			}
			CAnimVariant::GetValue<Vector>(); // 194
			CAnimVariant::GetValue<Vector>(); // 242
		}
		CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::Count(); // 235
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<SolveIKChainUpdateNodeFixedSettings_t>(
								const CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>& handle);  // 33
	CAnimGraphFixedData::operator[]<SolveIKChainUpdateNodeFixedSettings_t>(
								const CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>& handle);  // 232
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SolveIKChainPoseOpInstanceSettings_t>(
							const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SolveIKChainPoseOpInstanceSettings_t>(
							const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<SolveIKChainPoseOpInstanceSettings_t>(
							const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>& handle);  // 233
} /* size: 0, variables: 2, inline expansions: 8 (128 bytes) */

// <0193DCB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:251
// variable: 1
// function calls: 12
void CSolveIKChainUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	PoseHandle hChildPose; // 253
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 254
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 256
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>::CPackedHandle(
			const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &);  // 260
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<SolveIKChainPoseOpFixedSettings_t>::CPackedHandle(
			const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &);  // 260
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 260
} /* size: 184, variables: 1, inline expansions: 12 (107 bytes) */

// <0193DB22> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:264
// function calls: 5
void CSolveIKChainUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 266
} /* size: 86, inline expansions: 5 (68 bytes) */

// <0193D42D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:272
// variable: 1
// function calls: 28
void MakeOpDescription(CPoseRecipe& pPoseRecipe, PoseHandle hChildPose, CPackedHandle<SolveIKChainPoseOpFixedSettings_t> hFixedSettings, CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> hInstanceSettings)
{
	CPackedHandle<CSolveIKChainPoseOperation::OpSettings> hParam; // 274
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CSolveIKChainPoseOperation::OpSettings>::CPackedHandle(); // 274
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>::CPackedHandle(
			const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<SolveIKChainPoseOpFixedSettings_t>::CPackedHandle(
			const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<SolveIKChainPoseOpFixedSettings_t>::CPackedHandle(
			const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &);  // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>::CPackedHandle(
			const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &);  // 60
	OpSettings::OpSettings(
			PoseHandle hChildPose,
			CPackedHandle<SolveIKChainPoseOpFixedSettings_t> hFixedSettings,
			CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> hInstanceSettings);  // 140
	CPackedDataT<false>::AddItem<CSolveIKChainPoseOperation::OpSettings, unsigned char&, CPackedHandle<SolveIKChainPoseOpFixedSettings_t>&, CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>&>(
																CPackedHandle<CSolveIKChainPoseOperation::OpSettings>* handleOut);  // 275
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::NumAllocated(); // 1196
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Element(
		int i);  // 1201
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 47
	PoseOpDesc::PoseOpDesc(
			const PoseOpDesc  &);  // 1520
	CopyConstruct<CPoseRecipe::PoseOpDesc>(PoseOpDesc* pMemory,
						const PoseOpDesc& src);  // 1201
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::Base(); // 112
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Base(); // 368
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::AddToTail(
			const PoseOpDesc& src);  // 89
	PackedHandleID::PackedHandleID(); // 47
	PoseOpDesc::PoseOpDesc(); // 85
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 27
	CPackedHandle<CSolveIKChainPoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CSolveIKChainPoseOperation, CSolveIKChainPoseOperation::OpSettings>(
											const CPackedHandle<CSolveIKChainPoseOperation::OpSettings>& hParam);  // 277
} /* size: 0, variables: 1, inline expansions: 28 (430 bytes) */

