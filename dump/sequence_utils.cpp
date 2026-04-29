
//
// sequence_utils.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//

// <00D299E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_utils.cpp:18
// variables: 11
// function calls: 28
bool Model_AnimPosition(const CAnimDesc* panim, float flCycle, Vector& vecPos, QAngle& vecAngle)
{
	float prevframe; // 20
	int iLoops; // 27
	float flFrame; // 38
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 21
	QAngle::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 22
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Count(); // 24
	CAnimDesc::MaxFrame(); // 38
	{
		int i; // 40
		CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Count(); // 40
		{
			const CAnimMovement* pmove; // 42
			Vector::operator=(
					const Vector& vOther);  // 73
			{
				float f; // 46
				float d; // 48
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 50
				{
					const float  flSign; // 57
					const float  flSignedAngle; // 58
					const Vector  vSignedPos; // 59
					Sign(float x); // 57
					CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Count(); // 54
					CUtlMemory<CAnimMovement, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::operator[](
							int i);  // 54
					{
						int j; // 60
						VectorAdd(const Vector& a,
								const Vector& b,
								Vector& c);  // 1437
						Vector::Vector(); // 1436
						Vector::operator+(
								const Vector& v);  // 63
						Vector::operator=(
								const Vector& vOther);  // 62
						Vector::operator=(
								const Vector& vOther);  // 63
					}
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 59
				}
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 50
				Vector::operator=(
						const Vector& vOther);  // 50
			}
			CUtlMemory<CAnimMovement, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::operator[](
					int i);  // 42
		}
	}
} /* size: 661, variables: 3, inline expansions: 4 (40 bytes) */

// <00C902AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_utils.cpp:18
// variables: 11
bool Model_AnimPosition(const CAnimDesc* panim, float flCycle, Vector& vecPos, QAngle& vecAngle)
{
	float prevframe; // 20
	int iLoops; // 27
	float flFrame; // 38
	{
		int i; // 40
		{
			const CAnimMovement* pmove; // 42
			{
				float f; // 46
				float d; // 48
				{
					const float  flSign; // 57
					const float  flSignedAngle; // 58
					const Vector  vSignedPos; // 59
					{
						int j; // 60
					}
				}
			}
		}
	}
} /* size: 0, variables: 3 */

// <00C90015> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_utils.cpp:87
// variables: 7
// function calls: 8
bool Model_AnimVelocity(const CAnimDesc* panim, float flCycle, Vector& vecVelocity)
{
	float prevframe; // 89
	int iLoops; // 91
	float flFrame; // 102
	{
		int i; // 104
		{
			const CAnimMovement* pmove; // 106
			{
				float f; // 110
				float vel; // 112
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 116
				Vector::operator=(
						const Vector& vOther);  // 116
			}
			CUtlMemory<CAnimMovement, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::operator[](
					int i);  // 106
		}
		CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Count(); // 104
	}
	CAnimDesc::MaxFrame(); // 102
} /* size: 253, variables: 3, inline expansions: 1 (10 bytes) */

// <00C8FF0C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_utils.cpp:154
// variables: 2
bool Model_AnimMovement(const CModel* pModel, int nAnimation, float flFrameFrom, float flFrameTo, Vector& deltaMovement, QAngle& deltaAngle)
{
	const CAnimDesc* pAnim; // 159
	bool bResult; // 164
} /* size: 0, variables: 2 */

// <00C8FE80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_utils.cpp:178
// variables: 7
float Model_FindAnimDistance(const CAnimDesc* panim, float flDist)
{
	float prevframe; // 180
	{
		int i; // 185
		{
			const CAnimMovement* pmove; // 187
			float flMove; // 189
			{
				float root1; // 193
				float root2; // 193
				{
					float cpf; // 198
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <00C8FAB9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_utils.cpp:220
// variables: 6
// function calls: 2
void Model_SetMovementPoseParams(const CModel* pModel, HSequence hSequence, float* poseParameter, const Vector& vecLocalVelocity, int iMoveX, int iMoveY, int iXSign, int iYSign)
{
	Vector2D vecCurrentPose; // 227
	int i; // 248
	float dx; // 249
	float dy; // 249
	Vector vecAnimVelocity; // 250
	bool retry; // 263
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 227
	Vector::Vector(); // 250
} /* size: 1198, variables: 6, inline expansions: 2 (14 bytes) */

