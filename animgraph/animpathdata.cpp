
//
// animgraph/animpathdata.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 39
//

// <0159B725> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:21
// variables: 2
// function calls: 10
Vector ClampDistance(const Vector& vFrom, const Vector& vTo, float flMaxDist)
{
	Vector vDelta; // 23
	float flDist; // 24
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 23
	Vector::NormalizeInPlace(); // 24
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 27
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 27
} /* size: 204, variables: 2, inline expansions: 10 (165 bytes) */

// <015D4B53> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:36
// function call: 1
void CAnimPath::IsEmpty()
{
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 38
} /* size: 16, inline expansions: 1 (11 bytes) */

// <0159B709> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:36
void CAnimPath::IsEmpty()
{
} /* size: 0 */

// <015D4BAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:42
// function call: 1
void CAnimPath::GetWayPointCount()
{
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 44
} /* size: 11, inline expansions: 1 (0 bytes) */

// <0159B6ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:42
void CAnimPath::GetWayPointCount()
{
} /* size: 0 */

// <015D4C05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:48
// function calls: 3
void CAnimPath::GetWayPointPosition(int nIndex)
{
	{
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 50
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 148
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 52
	}
} /* size: 0 */

// <015D059A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:48
// function call: 1
void CAnimPath::GetWayPointPosition()
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 50
	}
} /* size: 23 */

// <0159B651> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:48
void CAnimPath::GetWayPointPosition(int nIndex)
{
	{
	}
} /* size: 0 */

// <015D4D1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:59
// function calls: 5
void CAnimPath::GetWayPointBoundaryRadius(int nIndex)
{
	{
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 61
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 148
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 63
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 61
	}
	CAnimPath::GetWayPointBoundaryRadius(
					int nIndex);  // 59
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0159B5B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:59
void CAnimPath::GetWayPointBoundaryRadius(int nIndex)
{
	{
	}
} /* size: 0 */

// <0159B3E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:70
// variables: 2
// function calls: 7
void CAnimPath::GetGoalPosition()
{
	const char   __FUNCTION__; // 35409
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 72
	}
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 38
	CAnimPath::IsEmpty(); // 72
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 44
	CAnimPath::GetWayPointCount(); // 73
	{
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 148
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 52
	}
	CAnimPath::GetWayPointPosition(
				int nIndex);  // 73
} /* size: 0, variables: 1, inline expansions: 5 (122 bytes) */

// <015D4E8F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:77
// function call: 1
void CAnimPath::GetPastWayPointCount()
{
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 79
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0159B3C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:77
void CAnimPath::GetPastWayPointCount()
{
} /* size: 0 */

// <015D4EE8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:83
// function calls: 2
void CAnimPath::GetPastWayPointPosition(int nIndex)
{
	{
	}
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
			int nRelativeIndex);  // 148
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
			int index);  // 85
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0159B3A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:83
void CAnimPath::GetPastWayPointPosition(int nIndex)
{
} /* size: 0 */

// <0159B2BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:89
// function calls: 2
void CAnimPath::GetPastWayPointBoundaryRadius(int nIndex)
{
	{
	}
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
			int nRelativeIndex);  // 148
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
			int index);  // 91
} /* size: 0, inline expansions: 2 (0 bytes) */

// <015D4FB1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:95
// function calls: 7
void CAnimPath::SetWayPoints(const CUtlVector<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >& newWayPoints, const Vector& vCurrentPos, float flCurrentBoundaryRadius)
{
	CUtlVectorBase<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >::Count(); // 97
	CUtlMemory<CAnimPathWaypointData, int>::Base(); // 113
	CUtlVectorBase<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >::Base(); // 97
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Clear(); // 183
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Clear(); // 184
	CAnimPath::Clear(); // 106
	CAnimPath::SetWayPoints(
			const CAnimPathWaypointData* pNewWayPoints,
			int nNewWaypointCount,
			const Vector& vCurrentPos,
			float flCurrentBoundaryRadius);  // 97
} /* size: 0, inline expansions: 7 (0 bytes) */

// <0159B27C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:95
void CAnimPath::SetWayPoints(const CUtlVector<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >& newWayPoints, const Vector& vCurrentPos, float flCurrentBoundaryRadius)
{
} /* size: 0 */

// <015D51B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:101
// function calls: 3
void CAnimPath::SetWayPoints(const CAnimPathWaypointData* pNewWayPoints, int nNewWaypointCount, const Vector& vCurrentPos, float flCurrentBoundaryRadius)
{
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Clear(); // 183
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Clear(); // 184
	CAnimPath::Clear(); // 106
} /* size: 37, inline expansions: 3 (40 bytes) */

// <015D1479> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:101
// variables: 13
// function calls: 68
void CAnimPath::SetWayPoints(const CAnimPathWaypointData* pNewWayPoints, int nNewWaypointCount, const Vector& vCurrentPos, float flCurrentBoundaryRadius)
{
	{
		const Vector& vLastNewWaypointPos; // 111
		int nIndex; // 146
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 112
		{
		}
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 139
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 113
		CloseEnough(const Vector2D& a,
				const Vector2D& b,
				float epsilon);  // 113
		{
			const Vector& vFirstNewWaypointPos; // 120
			CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 122
			{
			}
			CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
					int nRelativeIndex);  // 139
			CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
					int index);  // 122
			{
				{
					int i; // 95
					CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
							int nRelativeIndex);  // 97
				}
				_DebuggerBreakInlineExpressionWrapper(void); // 93
			}
			CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::PopFront(
				int nCount);  // 141
			CloseEnough(const Vector& a,
					const Vector& b,
					float epsilon);  // 122
			CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 125
			{
				Vector vMostRecentOldWaypoint; // 127
				Vector vToNewWaypoint; // 129
				Vector vToOldWaypoint; // 130
				float flDistToWaypoint; // 131
				float dp; // 133
				{
				}
				CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
						int nRelativeIndex);  // 139
				CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
						int index);  // 127
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 129
				{
				}
				CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
						int nRelativeIndex);  // 139
				CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
						int index);  // 130
				Vector::NormalizeInPlace(); // 131
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 130
				DotProduct(const Vector& a,
						const Vector& b);  // 133
				{
				}
				CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
						int nRelativeIndex);  // 139
				CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
						int index);  // 137
				Vector::operator=(
						const Vector& vOther);  // 11
				CAnimPathWaypointData::operator=(
						const CAnimPathWaypointData  &);  // 75
				{
					int nIndex; // 81
					CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
							int nRelativeIndex);  // 81
					Vector::operator=(
							const Vector& vOther);  // 11
					CAnimPathWaypointData::operator=(
							const CAnimPathWaypointData  &);  // 83
				}
				CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::PushBack(
					const CAnimPathWaypointData& newEntry);  // 137
			}
		}
		{
			int i; // 126
		}
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Clear(); // 115
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 147
		CloseEnough(const Vector& a,
				const Vector& b,
				float epsilon);  // 149
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 139
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 149
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 167
		{
		}
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 139
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 167
		Vector::operator=(
				const Vector& vOther);  // 11
		CAnimPathWaypointData::operator=(
				const CAnimPathWaypointData  &);  // 167
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 172
		CAnimPathWaypointData::CAnimPathWaypointData(
					const Vector& vPosition,
					float flBoundaryRadius);  // 175
		{
			int nIndex; // 81
			CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
					int nRelativeIndex);  // 81
			Vector::operator=(
					const Vector& vOther);  // 11
			CAnimPathWaypointData::operator=(
					const CAnimPathWaypointData  &);  // 83
		}
		Vector::operator=(
				const Vector& vOther);  // 11
		CAnimPathWaypointData::operator=(
				const CAnimPathWaypointData  &);  // 75
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::PushBack(
			const CAnimPathWaypointData& newEntry);  // 175
		{
			int nIndex; // 81
			CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
					int nRelativeIndex);  // 81
			Vector::operator=(
					const Vector& vOther);  // 11
			CAnimPathWaypointData::operator=(
					const CAnimPathWaypointData  &);  // 83
		}
		Vector::operator=(
				const Vector& vOther);  // 11
		CAnimPathWaypointData::operator=(
				const CAnimPathWaypointData  &);  // 75
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::PushBack(
			const CAnimPathWaypointData& newEntry);  // 163
		{
		}
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 139
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 173
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 173
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 173
		{
		}
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::PopBack(
			int nCount);  // 152
	}
} /* size: 0 */

// <0159B1AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:101
// variables: 8
void CAnimPath::SetWayPoints(const CAnimPathWaypointData* pNewWayPoints, int nNewWaypointCount, const Vector& vCurrentPos, float flCurrentBoundaryRadius)
{
	{
		const Vector& vLastNewWaypointPos; // 111
		int nIndex; // 146
		{
			const Vector& vFirstNewWaypointPos; // 120
			{
				Vector vMostRecentOldWaypoint; // 127
				Vector vToNewWaypoint; // 129
				Vector vToOldWaypoint; // 130
				float flDistToWaypoint; // 131
				float dp; // 133
			}
		}
	}
} /* size: 0 */

// <015D52E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:181
// function calls: 2
void CAnimPath::Clear()
{
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Clear(); // 183
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Clear(); // 184
} /* size: 25, inline expansions: 2 (20 bytes) */

// <0159B18E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:181
void CAnimPath::Clear()
{
} /* size: 0 */

// <0159B12C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:188
// function call: 1
void CAnimPath::ClearFutureWayPoints()
{
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Clear(); // 190
} /* size: 15, inline expansions: 1 (10 bytes) */

// <015D5371> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:194
// function calls: 4
void CAnimPath::operator[](int i)
{
	{
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 50
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 148
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 52
	}
	CAnimPath::GetWayPointPosition(
				int nIndex);  // 196
} /* size: 0, inline expansions: 1 (78 bytes) */

// <0159B106> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:194
void CAnimPath::operator[](int i)
{
} /* size: 0 */

// <0159AFF0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:200
// function call: 1
void CAnimPath::CalcPointAlongPath(const Vector& vStartPos, float flDistance)
{
	CAnimPath::CalcPointAlongPathInternal(
					const Vector& vStartPos,
					float flStartingDistance,
					PathWalkOption eOptions);  // 202
} /* size: 130, inline expansions: 1 (59 bytes) */

// <0159AF4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:206
void CAnimPath::CalcTransformAlongPath(const CMotionTransform& startXform, float flDistance)
{
} /* size: 65 */

// <0159AEAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:212
void CAnimPath::CalcTransformAlongFlattenedPath(const CMotionTransform& startXform, float flDistance)
{
} /* size: 68 */

// <0159AE3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:218
void CAnimPath::CalcStartingWayPointIndex(const Vector& vStartPos)
{
} /* size: 11 */

// <015D5832> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:223
void CAnimPath::CalcPointAlongPathInternal(const Vector& vStartPos, float flStartingDistance, PathWalkOption eOptions)
{
} /* size: 0 */

// <0159A9B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:229
// variable: 1
// function calls: 16
void CAnimPath::GetClosestWaypointToIndex(int index)
{
	{
		int nPastIndex; // 246
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 148
		{
		}
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 85
		CAnimPath::GetPastWayPointPosition(
					int nIndex);  // 247
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 246
	}
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 44
	CAnimPath::GetWayPointCount(); // 233
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 79
	CAnimPath::GetPastWayPointCount(); // 239
	{
	}
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
			int index);  // 85
	CAnimPath::GetPastWayPointPosition(
				int nIndex);  // 239
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 79
	CAnimPath::GetPastWayPointCount(); // 244
	{
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 50
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 148
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 52
	}
	CAnimPath::GetWayPointPosition(
				int nIndex);  // 251
} /* size: 0, inline expansions: 9 (204 bytes) */

// <01598E04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:257
// variables: 29
// function calls: 102
void CAnimPath::CalcTransformAlongPathInternal(const CMotionTransform& startXform, float flStartingDistance, PathWalkOption eOptions)
{
	float flDistance; // 259
	Vector vLastPos; // 260
	CMotionTransform vLastPosModified; // 261
	QuaternionAligned rot; // 262
	int nStartingWaypointIndex; // 264
	int nDirection; // 266
	int currentWaypointIndex; // 299
	{
		Vector vWayPointPos; // 281
		Vector vPrevWayPointPos; // 282
		Vector vToCurrPos; // 284
		float flDistToGoal; // 285
		Vector vToPrevWaypoint; // 286
		float dp; // 287
		{
			CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
					int nRelativeIndex);  // 148
			CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
					int index);  // 52
		}
		CAnimPath::GetWayPointPosition(
					int nIndex);  // 482
		CAnimPath::GetWaypointAtIndex(
					int index);  // 281
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 284
		Vector::NormalizeInPlace(); // 285
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 286
		Vector::Normalized(); // 286
		Vector::Normalized(); // 287
		DotProduct(const Vector& a,
				const Vector& b);  // 287
		Vector::operator=(
				const Vector& vOther);  // 293
	}
	{
		Vector vWayPointPos; // 302
		Vector vWayPointPosModified; // 304
		Vector vToWaypoint; // 306
		CRotation flHeading; // 316
		float flRotation; // 318
		float flWayPointDistance; // 320
		{
			float flLength; // 309
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 309
			Vector::Normalized(); // 311
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 311
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 313
			Vector::operator=(
					const Vector& vOther);  // 311
			Vector::operator=(
					const Vector& vOther);  // 313
		}
		{
			float flLerpValue; // 323
			{
				Vector p1; // 331
				Vector p2; // 332
				Vector p3; // 333
				Vector p4; // 334
				float flSampleDist; // 344
				float flCurveLerpVal; // 345
				Vector vTangent; // 347
				{
					CRotation tangentHeading; // 351
					Vector::Normalized(); // 351
					{
					}
					{
					}
					CRotation::CRotation(
							angle_t angleDegrees);  // 23
					CRotation::CRotation(
							angle_t angleDegrees);  // 351
					{
					}
					CRotation::operator=(
							const CRotation& rot);  // 352
				}
				Vector::operator=(
						const Vector& vOther);  // 340
				Vector::operator=(
						const Vector& vOther);  // 341
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 344
				Vector::operator=(
						const Vector& vOther);  // 342
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 344
				Vector::Vector(); // 347
				Vector::LengthSqr(); // 349
			}
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 145
			{
			}
			CRotation::operator+=(
					angle_t s);  // 325
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 262
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 262
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 262
			Lerp<Vector>(float flPercent,
					const Vector& A,
					const Vector& B);  // 324
			Vector::operator=(
					const Vector& vOther);  // 324
			CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 44
			CAnimPath::GetWayPointCount(); // 329
			CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 79
			CAnimPath::GetPastWayPointCount(); // 329
		}
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 306
		Vector::Normalized(); // 316
		{
		}
		{
		}
		CRotation::CRotation(
				angle_t angleDegrees);  // 23
		CRotation::CRotation(
				angle_t angleDegrees);  // 316
		{
		}
		{
		}
		CRotation::CRotation(
				angle_t angleDegrees);  // 23
		CRotation::CRotation(
				angle_t angleDegrees);  // 184
		{
		}
		CRotation::operator-=(
				const CRotation& rot);  // 184
		{
		}
		{
		}
		CRotation::CRotation(
				const CRotation& rot);  // 22
		CRotation::CRotation(
				const CRotation& rot);  // 184
		CRotation::operator-(
				const CRotation& rot);  // 318
		CRotation::operator float(); // 318
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 320
		Vector::operator=(
				const Vector& vOther);  // 360
		Vector::operator=(
				const Vector& vOther);  // 362
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 145
		{
		}
		CRotation::operator+=(
				angle_t s);  // 363
	}
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 261
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 44
	CAnimPath::GetWayPointCount(); // 277
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 79
	CAnimPath::GetPastWayPointCount(); // 279
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 44
	CAnimPath::GetWayPointCount(); // 468
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 79
	CAnimPath::GetPastWayPointCount(); // 472
	CAnimPath::IsValidIndex(
			int nIndex);  // 300
} /* size: 0, variables: 7, inline expansions: 12 (183 bytes) */

// <01598604> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:373
// variables: 13
// function calls: 26
void CAnimPath::CalcStartingWayPointIndexInternal(const Vector& vStartPosOrig, PathWalkOption eOptions)
{
	const float  kBetweenCosAngleThreshold; // 375
	Vector vStartPos; // 377
	int index; // 383
	{
		int i; // 384
		{
			Vector vPrevWaypointPos; // 386
			Vector vNextWaypointPos; // 387
			Vector vPrevToNext; // 396
			Vector vPrevToStart; // 397
			float flDistBetweenWaypoints; // 399
			float flDistAlongSegment; // 400
			{
				Vector vToPrev; // 408
				Vector vToNext; // 409
				float dp; // 411
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 408
				Vector::Normalized(); // 411
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 409
				Vector::Normalized(); // 411
				DotProduct(const Vector& a,
						const Vector& b);  // 411
			}
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 397
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 396
			Vector::NormalizeInPlace(); // 399
			DotProduct(const Vector& a,
					const Vector& b);  // 400
			{
				CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
						int nRelativeIndex);  // 148
				CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
						int index);  // 52
			}
			CAnimPath::GetWayPointPosition(
						int nIndex);  // 386
			{
				CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 50
				CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
						int nRelativeIndex);  // 148
				CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
						int index);  // 52
			}
			CAnimPath::GetWayPointPosition(
						int nIndex);  // 387
		}
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 44
		CAnimPath::GetWayPointCount(); // 384
	}
} /* size: 0, variables: 3 */

// <01597FDF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:427
// variables: 7
// function calls: 26
void CAnimPath::WalkPathFromPoint(const Vector& vStartPos, int nNextWaypointIndex, float flDistance)
{
	const int  nDirection; // 429
	float flRemainingDistance; // 430
	Vector vCurrentPos; // 431
	int nCurrentWaypointIndex; // 433
	{
		Vector vWaypointPos; // 443
		float flDist; // 444
		{
			float flLerpValue; // 448
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 262
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 262
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 262
			Lerp<Vector>(float flPercent,
					const Vector& A,
					const Vector& B);  // 449
			Vector::operator=(
					const Vector& vOther);  // 449
		}
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 444
		Vector::operator=(
				const Vector& vOther);  // 455
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 444
	}
	Sign(float x); // 429
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 44
	CAnimPath::GetWayPointCount(); // 468
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 79
	CAnimPath::GetPastWayPointCount(); // 472
	CAnimPath::IsValidIndex(
			int nIndex);  // 441
} /* size: 0, variables: 4, inline expansions: 6 (0 bytes) */

// <015D54BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:464
// function calls: 4
void CAnimPath::IsValidIndex(int nIndex)
{
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 44
	CAnimPath::GetWayPointCount(); // 468
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 79
	CAnimPath::GetPastWayPointCount(); // 472
} /* size: 0, inline expansions: 4 (0 bytes) */

// <01597FB5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:464
void CAnimPath::IsValidIndex(int nIndex)
{
} /* size: 0 */

// <015D55B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:477
// variable: 1
// function calls: 10
void CAnimPath::GetWaypointAtIndex(int index)
{
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 44
	CAnimPath::GetWayPointCount(); // 468
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 79
	CAnimPath::GetPastWayPointCount(); // 472
	CAnimPath::IsValidIndex(
			int nIndex);  // 479
	{
	}
	{
		int nPastIndex; // 486
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 79
		CAnimPath::GetPastWayPointCount(); // 486
		{
		}
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 148
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 85
		CAnimPath::GetPastWayPointPosition(
					int nIndex);  // 487
	}
} /* size: 0, inline expansions: 5 (26 bytes) */

// <01597F19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:477
// variables: 3
void CAnimPath::GetWaypointAtIndex(int index)
{
	const char   __FUNCTION__; // 35485
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 479
	}
	{
		int nPastIndex; // 486
	}
} /* size: 0, variables: 1 */

