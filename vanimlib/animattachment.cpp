
//
// vanimlib/animattachment.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//

// <034E540B> vanimlib/animattachment.cpp:8
void CAnimAttachment::CAnimAttachment()
{
} /* size: 9 */

// <034E5181> vanimlib/animattachment.cpp:11
// variables: 2
// function calls: 7
void CAnimAttachment::Init(const CModel& model, const CAttachment* pAttachment)
{
	{
		int i; // 15
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 17
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
				float p3);  // 177
		VectorAligned::operator=(
				const Vector& src);  // 18
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 19
	}
} /* size: 201 */

// <034E50D6> vanimlib/animattachment.cpp:25
// function calls: 2
void CAnimAttachment::Init(int boneIndex, const VectorAligned& vOffset)
{
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 28
	VectorAligned::operator=(
			const VectorAligned& src);  // 29
} /* size: 39, inline expansions: 2 (20 bytes) */

// <034E50A5> vanimlib/animattachment.cpp:35
void CAnimAttachment::IsValid()
{
} /* size: 12 */

// <034E5030> vanimlib/animattachment.cpp:41
// variables: 3
void CAnimAttachment::GetPrimaryBoneIndex()
{
	int32 index; // 43
	float flMaxWeight; // 44
	{
		int32 i; // 46
	}
} /* size: 0, variables: 2 */

