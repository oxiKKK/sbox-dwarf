
//
// animgraph/animupdateparameterlist.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 23
//

// <01581B74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:11
// variable: 1
void SetupArray<bool>(CSaveablePackedData& data, CRelativeArray<bool>& paramArray, int count)
{
	{
		bool* pArray; // 15
	}
} /* size: 0 */

// <01581B21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:11
// variable: 1
void SetupArray<CAnimEnum>(CSaveablePackedData& data, CRelativeArray<CAnimEnum>& paramArray, int count)
{
	{
		CAnimEnum* pArray; // 15
	}
} /* size: 0 */

// <01581ACE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:11
// variable: 1
void SetupArray<int>(CSaveablePackedData& data, CRelativeArray<int>& paramArray, int count)
{
	{
		int* pArray; // 15
	}
} /* size: 0 */

// <01581A7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:11
// variable: 1
void SetupArray<float>(CSaveablePackedData& data, CRelativeArray<float>& paramArray, int count)
{
	{
		float* pArray; // 15
	}
} /* size: 0 */

// <01581A28> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:11
// variable: 1
void SetupArray<Vector>(CSaveablePackedData& data, CRelativeArray<Vector>& paramArray, int count)
{
	{
		Vector* pArray; // 15
	}
} /* size: 0 */

// <015819D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:11
// variable: 1
void SetupArray<Quaternion>(CSaveablePackedData& data, CRelativeArray<Quaternion>& paramArray, int count)
{
	{
		Quaternion* pArray; // 15
	}
} /* size: 0 */

// <0159587D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:21
// variables: 22
// function calls: 51
void CAnimUpdateParameterList::CAnimUpdateParameterList(const CAnimParameterList& paramList, CSaveablePackedData& instanceData, const CAnimParamIdMap& paramMap)
{
	{
		int typeCountArray; // 24
		{
			int i; // 27
			{
				const IAnimParameter* pParam; // 29
			}
		}
		{
			int i; // 42
			{
				const IAnimParameter* pParam; // 44
			}
		}
	}
	CRelativeOffset<bool>::CRelativeOffset(); // 84
	CRelativeArray<bool>::CRelativeArray(); // 21
	{
		int typeCountArray; // 24
		{
			int i; // 27
			{
				const IAnimParameter* pParam; // 29
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 25
		{
			bool* pArray; // 15
			{
				uint32 i; // 160
			}
			CPackedDataT<true>::AddArray<bool>(
					uint32 count,
					CPackedHandle<bool>* handleOut);  // 15
			CRelativeOffset<bool>::SetOffset(
					const bool* targetPtr);  // 20
			CRelativeOffset<bool>::operator=(
					const bool* targetPtr);  // 115
			CRelativeArray<bool>::SetArray(
				const bool* targetArray,
				int32 count);  // 16
		}
		SetupArray<bool>(CSaveablePackedData& data,
				CRelativeArray<bool>& paramArray,
				int count);  // 11
		SetupArray<bool>(CSaveablePackedData& data,
				CRelativeArray<bool>& paramArray,
				int count);  // 34
		{
			CAnimEnum* pArray; // 15
			{
				uint32 i; // 160
				CAnimEnum::CAnimEnum(); // 162
			}
			CPackedDataT<true>::AddArray<CAnimEnum>(
						uint32 count,
						CPackedHandle<CAnimEnum>* handleOut);  // 15
			CRelativeOffset<CAnimEnum>::SetOffset(
					const CAnimEnum* targetPtr);  // 20
			CRelativeOffset<CAnimEnum>::operator=(
					const CAnimEnum* targetPtr);  // 115
			CRelativeArray<CAnimEnum>::SetArray(
				const CAnimEnum* targetArray,
				int32 count);  // 16
		}
		SetupArray<CAnimEnum>(CSaveablePackedData& data,
					CRelativeArray<CAnimEnum>& paramArray,
					int count);  // 11
		SetupArray<CAnimEnum>(CSaveablePackedData& data,
					CRelativeArray<CAnimEnum>& paramArray,
					int count);  // 35
		{
			int* pArray; // 15
			{
				uint32 i; // 160
			}
			CPackedDataT<true>::AddArray<int>(
					uint32 count,
					CPackedHandle<int>* handleOut);  // 15
			CRelativeOffset<int>::SetOffset(
					const int* targetPtr);  // 20
			CRelativeOffset<int>::operator=(
					const int* targetPtr);  // 115
			CRelativeArray<int>::SetArray(
				const int* targetArray,
				int32 count);  // 16
		}
		SetupArray<int>(CSaveablePackedData& data,
				CRelativeArray<int>& paramArray,
				int count);  // 11
		SetupArray<int>(CSaveablePackedData& data,
				CRelativeArray<int>& paramArray,
				int count);  // 36
		{
			float* pArray; // 15
			{
				uint32 i; // 160
			}
			CPackedDataT<true>::AddArray<float>(
					uint32 count,
					CPackedHandle<float>* handleOut);  // 15
			CRelativeOffset<float>::SetOffset(
					const float* targetPtr);  // 20
			CRelativeOffset<float>::operator=(
					const float* targetPtr);  // 115
			CRelativeArray<float>::SetArray(
				const float* targetArray,
				int32 count);  // 16
		}
		SetupArray<float>(CSaveablePackedData& data,
					CRelativeArray<float>& paramArray,
					int count);  // 11
		SetupArray<float>(CSaveablePackedData& data,
					CRelativeArray<float>& paramArray,
					int count);  // 37
		{
			Vector* pArray; // 15
			{
				uint32 i; // 160
			}
			CPackedDataT<true>::AddArray<Vector>(
					uint32 count,
					CPackedHandle<Vector>* handleOut);  // 15
			CRelativeOffset<Vector>::SetOffset(
					const Vector* targetPtr);  // 20
			CRelativeOffset<Vector>::operator=(
					const Vector* targetPtr);  // 115
			CRelativeArray<Vector>::SetArray(
				const Vector* targetArray,
				int32 count);  // 16
		}
		SetupArray<Vector>(CSaveablePackedData& data,
					CRelativeArray<Vector>& paramArray,
					int count);  // 11
		SetupArray<Vector>(CSaveablePackedData& data,
					CRelativeArray<Vector>& paramArray,
					int count);  // 38
		{
			Quaternion* pArray; // 15
			{
				uint32 i; // 160
			}
			CPackedDataT<true>::AddArray<Quaternion>(
						uint32 count,
						CPackedHandle<Quaternion>* handleOut);  // 15
			CRelativeOffset<Quaternion>::SetOffset(
					const Quaternion* targetPtr);  // 20
			CRelativeOffset<Quaternion>::operator=(
					const Quaternion* targetPtr);  // 115
			CRelativeArray<Quaternion>::SetArray(
				const Quaternion* targetArray,
				int32 count);  // 16
		}
		SetupArray<Quaternion>(CSaveablePackedData& data,
					CRelativeArray<Quaternion>& paramArray,
					int count);  // 11
		SetupArray<Quaternion>(CSaveablePackedData& data,
					CRelativeArray<Quaternion>& paramArray,
					int count);  // 39
		{
			int i; // 42
			{
				const IAnimParameter* pParam; // 44
			}
		}
	}
	CRelativeOffset<CAnimEnum>::CRelativeOffset(); // 84
	CRelativeArray<CAnimEnum>::CRelativeArray(); // 21
	CRelativeOffset<int>::CRelativeOffset(); // 84
	CRelativeArray<int>::CRelativeArray(); // 21
	CRelativeOffset<float>::CRelativeOffset(); // 84
	CRelativeArray<float>::CRelativeArray(); // 21
	CRelativeOffset<Vector>::CRelativeOffset(); // 84
	CRelativeArray<Vector>::CRelativeArray(); // 21
	CRelativeOffset<Quaternion>::CRelativeOffset(); // 84
	CRelativeArray<Quaternion>::CRelativeArray(); // 21
} /* size: 766, inline expansions: 12 (30 bytes) */

// <015957D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:21
// variables: 5
void CAnimUpdateParameterList::CAnimUpdateParameterList(const CAnimParameterList& paramList, CSaveablePackedData& instanceData, const CAnimParamIdMap& paramMap)
{
	{
		int typeCountArray; // 24
		{
			int i; // 27
			{
				const IAnimParameter* pParam; // 29
			}
		}
		{
			int i; // 42
			{
				const IAnimParameter* pParam; // 44
			}
		}
	}
} /* size: 0 */

// <01594FDF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:50
// function calls: 33
void CAnimUpdateParameterList::GetParamValue(const CAnimParamHandle& handle)
{
	CAnimParamHandle::IsValid(); // 52
	CAnimVariant::CAnimVariant(); // 62
	{
	}
	CRelativeOffset<Quaternion>::IsValid(); // 35
	CRelativeOffset<Quaternion>::Get(); // 97
	CRelativeArray<Quaternion>::operator[](
			int index);  // 61
	CAnimVariant::SetValue<Quaternion>(
				const Quaternion& value);  // 159
	CAnimVariant::CAnimVariant<Quaternion>(
				const Quaternion& v);  // 61
	{
	}
	CRelativeOffset<bool>::IsValid(); // 35
	CRelativeOffset<bool>::Get(); // 97
	CRelativeArray<bool>::operator[](
			int index);  // 56
	CAnimVariant::SetValue<bool>(
			const bool& value);  // 159
	CAnimVariant::CAnimVariant<bool>(
				const bool& v);  // 56
	{
	}
	CRelativeOffset<CAnimEnum>::IsValid(); // 35
	CRelativeOffset<CAnimEnum>::Get(); // 97
	CRelativeArray<CAnimEnum>::operator[](
			int index);  // 57
	CAnimVariant::SetValue<CAnimEnum>(
				const CAnimEnum& value);  // 159
	CAnimVariant::CAnimVariant<CAnimEnum>(
				const CAnimEnum& v);  // 57
	{
	}
	CRelativeOffset<float>::IsValid(); // 35
	CRelativeOffset<float>::Get(); // 97
	CRelativeArray<float>::operator[](
			int index);  // 59
	CAnimVariant::SetValue<float>(
			const float& value);  // 159
	CAnimVariant::CAnimVariant<float>(
				const float& v);  // 59
	{
	}
	CRelativeOffset<int>::IsValid(); // 35
	CRelativeOffset<int>::Get(); // 97
	CRelativeArray<int>::operator[](
			int index);  // 58
	CAnimVariant::SetValue<int>(
			const int& value);  // 159
	CAnimVariant::CAnimVariant<int>(
				const int& v);  // 58
	{
	}
	CRelativeOffset<Vector>::IsValid(); // 35
	CRelativeOffset<Vector>::Get(); // 97
	CRelativeArray<Vector>::operator[](
			int index);  // 60
	Vector::operator=(
			const Vector& vOther);  // 238
	CAnimVariant::SetValue<Vector>(
			const Vector& value);  // 159
	CAnimVariant::CAnimVariant<Vector>(
				const Vector& v);  // 60
} /* size: 0, inline expansions: 33 (1026 bytes) */

// <01594963> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:72
// variables: 2
// function calls: 22
void CAnimUpdateParameterList::SetParamValue(const CAnimParamHandle& index, const CAnimVariant& value)
{
	const char   __FUNCTION__; // 35355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 103
	}
	CAnimParamHandle::IsValid(); // 74
	CAnimVariant::GetType(); // 74
	{
	}
	CRelativeOffset<Quaternion>::IsValid(); // 30
	CRelativeOffset<Quaternion>::Get(); // 90
	CRelativeArray<Quaternion>::operator[](
			int index);  // 99
	{
	}
	CRelativeOffset<Vector>::IsValid(); // 30
	CRelativeOffset<Vector>::Get(); // 90
	CRelativeArray<Vector>::operator[](
			int index);  // 95
	Vector::operator=(
			const Vector& vOther);  // 95
	{
	}
	CRelativeOffset<float>::IsValid(); // 30
	CRelativeOffset<float>::Get(); // 90
	CRelativeArray<float>::operator[](
			int index);  // 91
	{
	}
	CRelativeOffset<int>::IsValid(); // 30
	CRelativeOffset<int>::Get(); // 90
	CRelativeArray<int>::operator[](
			int index);  // 87
	{
	}
	CRelativeOffset<bool>::IsValid(); // 30
	CRelativeOffset<bool>::Get(); // 90
	CRelativeArray<bool>::operator[](
			int index);  // 79
	CAnimVariant::GetValue<CAnimEnum>(); // 83
	{
	}
	CRelativeOffset<CAnimEnum>::IsValid(); // 30
	CRelativeOffset<CAnimEnum>::Get(); // 90
	CRelativeArray<CAnimEnum>::operator[](
			int index);  // 83
} /* size: 0, variables: 1, inline expansions: 22 (812 bytes) */

// <015942D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:110
// variables: 2
// function calls: 21
void CAnimUpdateParameterList::SetParamValue(int index, const CAnimVariant& value)
{
	const char   __FUNCTION__; // 35355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 139
	}
	CAnimVariant::GetType(); // 112
	{
	}
	CRelativeOffset<Quaternion>::IsValid(); // 30
	CRelativeOffset<Quaternion>::Get(); // 90
	CRelativeArray<Quaternion>::operator[](
			int index);  // 135
	{
	}
	CRelativeOffset<bool>::IsValid(); // 30
	CRelativeOffset<bool>::Get(); // 90
	CRelativeArray<bool>::operator[](
			int index);  // 115
	CAnimVariant::GetValue<CAnimEnum>(); // 119
	{
	}
	CRelativeOffset<CAnimEnum>::IsValid(); // 30
	CRelativeOffset<CAnimEnum>::Get(); // 90
	CRelativeArray<CAnimEnum>::operator[](
			int index);  // 119
	{
	}
	CRelativeOffset<int>::IsValid(); // 30
	CRelativeOffset<int>::Get(); // 90
	CRelativeArray<int>::operator[](
			int index);  // 123
	{
	}
	CRelativeOffset<float>::IsValid(); // 30
	CRelativeOffset<float>::Get(); // 90
	CRelativeArray<float>::operator[](
			int index);  // 127
	{
	}
	CRelativeOffset<Vector>::IsValid(); // 30
	CRelativeOffset<Vector>::Get(); // 90
	CRelativeArray<Vector>::operator[](
			int index);  // 131
	Vector::operator=(
			const Vector& vOther);  // 131
} /* size: 0, variables: 1, inline expansions: 21 (0 bytes) */

// <01594271> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:145
// function call: 1
void CAnimUpdateParameterList::GetBoolCount()
{
	CRelativeArray<bool>::Count(); // 147
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01594160> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:151
// function calls: 3
void CAnimUpdateParameterList::GetBool(int index)
{
	{
	}
	CRelativeOffset<bool>::IsValid(); // 30
	CRelativeOffset<bool>::Get(); // 90
	CRelativeArray<bool>::operator[](
			int index);  // 153
} /* size: 0, inline expansions: 3 (0 bytes) */

// <015940FE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:156
// function call: 1
void CAnimUpdateParameterList::GetEnumCount()
{
	CRelativeArray<CAnimEnum>::Count(); // 158
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01593FED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:161
// function calls: 3
void CAnimUpdateParameterList::GetEnum(int index)
{
	{
	}
	CRelativeOffset<CAnimEnum>::IsValid(); // 30
	CRelativeOffset<CAnimEnum>::Get(); // 90
	CRelativeArray<CAnimEnum>::operator[](
			int index);  // 163
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01593F8B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:166
// function call: 1
void CAnimUpdateParameterList::GetIntCount()
{
	CRelativeArray<int>::Count(); // 168
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01593E7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:171
// function calls: 3
void CAnimUpdateParameterList::GetInt(int index)
{
	{
	}
	CRelativeOffset<int>::IsValid(); // 30
	CRelativeOffset<int>::Get(); // 90
	CRelativeArray<int>::operator[](
			int index);  // 173
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01593E18> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:176
// function call: 1
void CAnimUpdateParameterList::GetFloatCount()
{
	CRelativeArray<float>::Count(); // 178
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01593D07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:181
// function calls: 3
void CAnimUpdateParameterList::GetFloat(int index)
{
	{
	}
	CRelativeOffset<float>::IsValid(); // 30
	CRelativeOffset<float>::Get(); // 90
	CRelativeArray<float>::operator[](
			int index);  // 183
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01593CA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:186
// function call: 1
void CAnimUpdateParameterList::GetVectorCount()
{
	CRelativeArray<Vector>::Count(); // 188
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01593B94> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:191
// function calls: 3
void CAnimUpdateParameterList::GetVector(int index)
{
	{
	}
	CRelativeOffset<Vector>::IsValid(); // 30
	CRelativeOffset<Vector>::Get(); // 90
	CRelativeArray<Vector>::operator[](
			int index);  // 193
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01593B32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:196
// function call: 1
void CAnimUpdateParameterList::GetQuaternionCount()
{
	CRelativeArray<Quaternion>::Count(); // 198
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01593A21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.cpp:201
// function calls: 3
void CAnimUpdateParameterList::GetQuaternion(int index)
{
	{
	}
	CRelativeOffset<Quaternion>::IsValid(); // 30
	CRelativeOffset<Quaternion>::Get(); // 90
	CRelativeArray<Quaternion>::operator[](
			int index);  // 203
} /* size: 0, inline expansions: 3 (0 bytes) */

