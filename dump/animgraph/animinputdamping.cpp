
//
// animgraph/animinputdamping.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 29
//	structs: 8
//

// <00E2DADF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:8
void GetBaseMap(void)
{
} /* size: 0 */

// <00E2DA31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:8
// variables: 2
datamap_t* DataMapInit<CDampedValue>(CDampedValue *)
{
	const char* pDataMapInit_className; // 8
	typedescription_t dataDesc; // 8
} /* size: 114, variables: 2 */

// <00E2D973> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:13
// variables: 2
datamap_t* DataMapInit<CDampedVector2>(CDampedVector2 *)
{
	const char* pDataMapInit_className; // 13
	typedescription_t dataDesc; // 13
} /* size: 114, variables: 2 */

// <00E2D8A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:18
// variables: 2
datamap_t* DataMapInit<CDampedVector>(CDampedVector *)
{
	const char* pDataMapInit_className; // 18
	typedescription_t dataDesc; // 18
} /* size: 114, variables: 2 */

// <00E2D877> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:24
void CAnimInputDamping::CAnimInputDamping()
{
} /* size: 48 */

// <00E2D81C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:27
void CAnimInputDamping::CAnimInputDamping(DampingSpeedFunction speedFunction, float fSpeedScale)
{
} /* size: 51 */

// <00E0D44B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:35
void State<Vector2D>::State()
{
} /* size: 0 */

// <00E0D42F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:35
inline void State<Vector2D>::State()
{
} /* size: 0 */

// <00E0D362> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:35
void State<Vector>::State()
{
} /* size: 0 */

// <00E0D346> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:35
inline void State<Vector>::State()
{
} /* size: 0 */

// <00E0D279> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:35
void State<VectorAligned>::State()
{
} /* size: 0 */

// <00E0D25D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:35
inline void State<VectorAligned>::State()
{
} /* size: 0 */

// <00DF0631> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:35
// member variables: 2
// struct size: 8
struct State<float> {
	float position; /* 0 4 */
	float velocity; /* 4 4 */
};

// <00DF06D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:35
// member function: 1
// member variables: 2
// struct size: 16
struct State<Vector2D> {
	Vector2D position; /* 0 8 */
	Vector2D velocity; /* 8 8 */
	void State(State<Vector2D>* );
};

// <00DF077D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:35
// member function: 1
// member variables: 2
// struct size: 24
struct State<Vector> {
	Vector position; /* 0 12 */
	Vector velocity; /* 12 12 */
	void State(State<Vector>* );
};

// <00DF0827> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:35
// member function: 1
// member variables: 2
// struct size: 32
struct State<VectorAligned> {
	VectorAligned position __attribute__((__aligned__(16))); /* 0 16 */
	VectorAligned velocity __attribute__((__aligned__(16))); /* 16 16 */
	void State(State<VectorAligned>* );
} __attribute__((__aligned__(16)));

// <00E213F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:42
void Derivative<Vector2D>::Derivative()
{
} /* size: 0 */

// <00E213D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:42
inline void Derivative<Vector2D>::Derivative()
{
} /* size: 0 */

// <00E1D8A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:42
void Derivative<Vector>::Derivative()
{
} /* size: 0 */

// <00E1D887> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:42
inline void Derivative<Vector>::Derivative()
{
} /* size: 0 */

// <00E1B8C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:42
void Derivative<VectorAligned>::Derivative()
{
} /* size: 0 */

// <00E1B8AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:42
inline void Derivative<VectorAligned>::Derivative()
{
} /* size: 0 */

// <00DF066B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:42
// member variables: 2
// struct size: 8
struct Derivative<float> {
	float dPosition; /* 0 4 */
	float dVelocity; /* 4 4 */
};

// <00DF0728> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:42
// member function: 1
// member variables: 2
// struct size: 16
struct Derivative<Vector2D> {
	Vector2D dPosition; /* 0 8 */
	Vector2D dVelocity; /* 8 8 */
	void Derivative(Derivative<Vector2D>* );
};

// <00DF07D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:42
// member function: 1
// member variables: 2
// struct size: 24
struct Derivative<Vector> {
	Vector dPosition; /* 0 12 */
	Vector dVelocity; /* 12 12 */
	void Derivative(Derivative<Vector>* );
};

// <00DF0882> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:42
// member function: 1
// member variables: 2
// struct size: 32
struct Derivative<VectorAligned> {
	VectorAligned dPosition __attribute__((__aligned__(16))); /* 0 16 */
	VectorAligned dVelocity __attribute__((__aligned__(16))); /* 16 16 */
	void Derivative(Derivative<VectorAligned>* );
} __attribute__((__aligned__(16)));

// <00E2140C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:49
// variables: 4
Derivative<float> Evaluate<float>(const State<float>& initial, const float& target, float t, float dt, const Derivative<float>& d, float tension, float damping)
{
	State<float> state; // 51
	float springAcceleration; // 55
	float dampingAcceleration; // 56
	Derivative<float> output; // 58
} /* size: 0, variables: 4 */

// <00E0D379> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:49
// variables: 4
Derivative<Vector2D> Evaluate<Vector2D>(const State<Vector2D>& initial, const Vector2D& target, float t, float dt, const Derivative<Vector2D>& d, float tension, float damping)
{
	State<Vector2D> state; // 51
	Vector2D springAcceleration; // 55
	Vector2D dampingAcceleration; // 56
	Derivative<Vector2D> output; // 58
} /* size: 0, variables: 4 */

// <00E0D290> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:49
// variables: 4
Derivative<Vector> Evaluate<Vector>(const State<Vector>& initial, const Vector& target, float t, float dt, const Derivative<Vector>& d, float tension, float damping)
{
	State<Vector> state; // 51
	Vector springAcceleration; // 55
	Vector dampingAcceleration; // 56
	Derivative<Vector> output; // 58
} /* size: 0, variables: 4 */

// <00E0D1A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:49
// variables: 4
Derivative<VectorAligned> Evaluate<VectorAligned>(const State<VectorAligned>& initial, const VectorAligned& target, float t, float dt, const Derivative<VectorAligned>& d, float tension, float damping)
{
	State<VectorAligned> state; // 51
	VectorAligned springAcceleration; // 55
	VectorAligned dampingAcceleration; // 56
	Derivative<VectorAligned> output; // 58
} /* size: 0, variables: 4 */

// <00E2D261> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:65
// variables: 19
// function calls: 9
void CAnimInputDamping::Update(CDampedValue& dampedValue, float targetValue, float timeStep)
{
	{
		float delta; // 69
	}
	{
		const float  prevValue; // 77
		{
			State<float> state; // 83
			Derivative<float> a; // 84
			Derivative<float> b; // 85
			Derivative<float> c; // 86
			Derivative<float> d; // 87
			float dPositiondt; // 89
			float dVelocitydt; // 90
			Evaluate<float>(const State<float>& initial,
					const float& target,
					float t,
					float dt,
					const Derivative<float>& d,
					float tension,
					float damping);  // 84
			Evaluate<float>(const State<float>& initial,
					const float& target,
					float t,
					float dt,
					const Derivative<float>& d,
					float tension,
					float damping);  // 85
			Evaluate<float>(const State<float>& initial,
					const float& target,
					float t,
					float dt,
					const Derivative<float>& d,
					float tension,
					float damping);  // 86
			Evaluate<float>(const State<float>& initial,
					const float& target,
					float t,
					float dt,
					const Derivative<float>& d,
					float tension,
					float damping);  // 87
		}
		{
			float targetSpaceValue; // 104
			float limitedDistanceRemainder; // 105
			float flNewValue; // 113
			const float  minStepDistance; // 116
			const float  toTarget; // 117
			float toPos; // 118
			{
				float flMaxTensionSigned; // 108
				Sign(float x); // 108
			}
			Sign(float x); // 120
			Sign(float x); // 120
		}
		{
			float flSpeed; // 143
			const float  deltaValue; // 146
			const float  deltaValueAbs; // 147
			Sign(float x); // 150
		}
	}
	CloseEnough(float a,
			float b,
			float epsilon);  // 67
} /* size: 874, inline expansions: 1 (17 bytes) */

// <00E2D1A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:164
void CAnimInputDamping::Update(CDampedVector2& dampedValue, const Vector2D& vTargetValue, float timeStep)
{
} /* size: 63 */

// <00E2D10A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:170
void CAnimInputDamping::Update(CDampedVector& dampedValue, const Vector& vTargetValue, float timeStep)
{
} /* size: 0 */

// <00E2D06D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:176
void CAnimInputDamping::Update(CDampedVectorAligned& dampedValue, const VectorAligned& vTargetValue, float timeStep)
{
} /* size: 9 */

// <00E1D8C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:183
// variables: 17
// function calls: 287
void Update<Vector2D, CAnimInputDamping::CDampedVector2>(CDampedVector2& dampedValue, const Vector2D& vTargetValue, float timeStep)
{
	{
		Vector2D delta; // 187
		Vector2D::Vector2D(); // 694
		Vector2DSubtract(const Vector2D& a,
				const Vector2D& b,
				Vector2D& c);  // 695
		Vector2D::operator-(
				const Vector2D& v);  // 187
		Vector2D::operator=(
				const Vector2D& vOther);  // 188
		Vector2D::operator=(
				const Vector2D& vOther);  // 189
	}
	{
		const Vector2D  prevValue; // 195
		{
			State<Vector2D> state; // 201
			Derivative<Vector2D> a; // 202
			Derivative<Vector2D> b; // 203
			Derivative<Vector2D> c; // 204
			Derivative<Vector2D> d; // 205
			Vector2D dPositiondt; // 207
			Vector2D dVelocitydt; // 208
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 201
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 201
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 52
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 53
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::Vector2D(); // 687
			Vector2D::operator+(
					const Vector2D& v);  // 52
			Vector2D::Vector2D(); // 35
			Vector2D::Vector2D(); // 35
			State<Vector2D>::State(); // 51
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 53
			Vector2D::Vector2D(); // 694
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 695
			Vector2D::operator-(
					const Vector2D& v);  // 55
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 55
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 56
			Vector2D::Vector2D(); // 42
			Vector2D::Vector2D(); // 42
			Derivative<Vector2D>::Derivative(); // 58
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 60
			Evaluate<Vector2D>(const State<Vector2D>& initial,
						const Vector2D& target,
						float t,
						float dt,
						const Derivative<Vector2D>& d,
						float tension,
						float damping);  // 202
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 695
			Vector2D::Vector2D(); // 694
			Vector2D::operator-(
					const Vector2D& v);  // 55
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::Vector2D(); // 687
			Vector2D::operator+(
					const Vector2D& v);  // 53
			Vector2D::Vector2D(); // 35
			Vector2D::Vector2D(); // 35
			State<Vector2D>::State(); // 51
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 52
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 52
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 53
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 55
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 56
			Vector2D::Vector2D(); // 42
			Vector2D::Vector2D(); // 42
			Derivative<Vector2D>::Derivative(); // 58
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 60
			Evaluate<Vector2D>(const State<Vector2D>& initial,
						const Vector2D& target,
						float t,
						float dt,
						const Derivative<Vector2D>& d,
						float tension,
						float damping);  // 204
			Vector2D::Vector2D(); // 42
			Vector2D::Vector2D(); // 42
			Derivative<Vector2D>::Derivative(); // 202
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 53
			Vector2D::Vector2D(); // 35
			Vector2D::Vector2D(); // 35
			State<Vector2D>::State(); // 51
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 52
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 52
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 53
			Vector2D::Vector2D(); // 694
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 695
			Vector2D::operator-(
					const Vector2D& v);  // 55
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 55
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 56
			Vector2D::Vector2D(); // 42
			Vector2D::Vector2D(); // 42
			Derivative<Vector2D>::Derivative(); // 58
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 60
			Evaluate<Vector2D>(const State<Vector2D>& initial,
						const Vector2D& target,
						float t,
						float dt,
						const Derivative<Vector2D>& d,
						float tension,
						float damping);  // 203
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::Vector2D(); // 687
			Vector2D::operator+(
					const Vector2D& v);  // 207
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 52
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::Vector2D(); // 687
			Vector2D::operator+(
					const Vector2D& v);  // 53
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::Vector2D(); // 687
			Vector2D::operator+(
					const Vector2D& v);  // 52
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 695
			Vector2D::Vector2D(); // 694
			Vector2D::operator-(
					const Vector2D& v);  // 55
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 55
			Vector2D::Vector2D(); // 35
			Vector2D::Vector2D(); // 35
			State<Vector2D>::State(); // 51
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 53
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 56
			Vector2D::Vector2D(); // 42
			Vector2D::Vector2D(); // 42
			Derivative<Vector2D>::Derivative(); // 58
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 60
			Evaluate<Vector2D>(const State<Vector2D>& initial,
						const Vector2D& target,
						float t,
						float dt,
						const Derivative<Vector2D>& d,
						float tension,
						float damping);  // 205
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 207
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::Vector2D(); // 687
			Vector2D::operator+(
					const Vector2D& v);  // 207
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 207
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::Vector2D(); // 687
			Vector2D::operator+(
					const Vector2D& v);  // 208
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 208
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 207
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 208
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 208
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 208
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 210
			Vector2D::operator+=(
					const Vector2D& v);  // 210
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 211
			Vector2D::operator+=(
					const Vector2D& v);  // 211
			Vector2D::operator=(
					const Vector2D& vOther);  // 213
		}
		{
			Vector2D vTargetSpaceValue; // 222
			Vector2D limitedDistanceRemainder; // 223
			Vector2D vNewValue; // 230
			const float  minStepDistance; // 233
			const Vector2D  toTarget; // 234
			Vector2D toPos; // 235
			Vector2D::Vector2D(); // 694
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 695
			Vector2D::operator-(
					const Vector2D& v);  // 222
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 498
			Vector2DLength(const Vector2D& v); // 554
			Vector2D::Length(); // 224
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 223
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 230
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 695
			Vector2D::Vector2D(); // 694
			Vector2D::operator-(
					const Vector2D& v);  // 234
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 230
			Vector2D::Vector2D(); // 694
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 695
			Vector2D::operator-(
					const Vector2D& v);  // 235
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 498
			Vector2DLength(const Vector2D& v); // 554
			Vector2D::Length(); // 584
			Vector2D::operator/=(
					float fl);  // 587
			Vector2DNormalize(Vector2D& v); // 531
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 530
			Vector2D::Normalized(); // 240
			DotProduct2D(const Vector2D& a,
					const Vector2D& b);  // 484
			Vector2D::Dot(
				const Vector2D& vOther);  // 574
			DotProduct(const Vector2D& lhs,
					const Vector2D& rhs);  // 237
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 498
			Vector2DLength(const Vector2D& v); // 554
			Vector2D::Length(); // 238
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 530
			Vector2D::operator/=(
					float fl);  // 587
			Vector2DNormalize(Vector2D& v); // 531
			Vector2D::Normalized(); // 244
			DotProduct2D(const Vector2D& a,
					const Vector2D& b);  // 484
			Vector2D::Dot(
				const Vector2D& vOther);  // 574
			DotProduct(const Vector2D& lhs,
					const Vector2D& rhs);  // 244
			Vector2D::operator=(
					const Vector2D& vOther);  // 246
			Vector2D::operator=(
					const Vector2D& vOther);  // 247
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 250
			Vector2D::operator=(
					const Vector2D& vOther);  // 250
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 530
			Vector2D::operator/=(
					float fl);  // 587
			Vector2DNormalize(Vector2D& v); // 531
			Vector2D::Normalized(); // 226
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 226
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 695
			Vector2D::Vector2D(); // 694
			Vector2D::operator-(
					const Vector2D& v);  // 226
			Vector2D::operator=(
					const Vector2D& vOther);  // 226
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 530
			Vector2D::operator/=(
					float fl);  // 587
			Vector2DNormalize(Vector2D& v); // 531
			Vector2D::Normalized(); // 227
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 227
			Vector2D::operator=(
					const Vector2D& vOther);  // 227
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 240
			Vector2D::operator=(
					const Vector2D& vOther);  // 240
		}
		{
			float flSpeed; // 259
			const Vector2D  deltaValue; // 262
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 695
			Vector2D::Vector2D(); // 694
			Vector2D::operator-(
					const Vector2D& v);  // 262
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 498
			Vector2DLength(const Vector2D& v); // 554
			Vector2D::Length(); // 263
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 530
			Vector2D::operator/=(
					float fl);  // 587
			Vector2DNormalize(Vector2D& v); // 531
			Vector2D::Normalized(); // 265
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 265
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 266
			Vector2D::operator+=(
					const Vector2D& v);  // 266
		}
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 195
		Vector2D::Vector2D(); // 694
		Vector2DSubtract(const Vector2D& a,
				const Vector2D& b,
				Vector2D& c);  // 695
		Vector2D::operator-(
				const Vector2D& v);  // 272
	}
	CloseEnough(const Vector2D& a,
			const Vector2D& b,
			float epsilon);  // 185
} /* size: 1729, inline expansions: 1 (60 bytes) */

// <00E1B8E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:183
// variables: 17
// function calls: 135
void Update<Vector, CAnimInputDamping::CDampedVector>(CDampedVector& dampedValue, const Vector& vTargetValue, float timeStep)
{
	{
		Vector delta; // 187
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 187
		Vector::operator=(
				const Vector& vOther);  // 188
		Vector::operator=(
				const Vector& vOther);  // 189
	}
	{
		const Vector  prevValue; // 195
		{
			State<Vector> state; // 201
			Derivative<Vector> a; // 202
			Derivative<Vector> b; // 203
			Derivative<Vector> c; // 204
			Derivative<Vector> d; // 205
			Vector dPositiondt; // 207
			Vector dVelocitydt; // 208
			Vector::operator+=(
					const Vector& v);  // 211
			Vector::Vector(); // 42
			Vector::Vector(); // 42
			Derivative<Vector>::Derivative(); // 202
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 207
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 207
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 207
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 207
			Vector::operator+=(
					const Vector& v);  // 210
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 208
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 207
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 210
			Vector::operator=(
					const Vector& vOther);  // 213
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 208
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 208
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 208
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 208
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 211
			Vector::operator=(
					const Vector& vOther);  // 214
		}
		{
			Vector vTargetSpaceValue; // 222
			Vector limitedDistanceRemainder; // 223
			Vector vNewValue; // 230
			const float  minStepDistance; // 233
			const Vector  toTarget; // 234
			Vector toPos; // 235
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 222
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 224
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 230
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 230
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 234
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 235
			DotProduct(const Vector& a,
					const Vector& b);  // 237
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 238
			Vector::Normalized(); // 244
			DotProduct(const Vector& a,
					const Vector& b);  // 244
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 244
			Vector::operator=(
					const Vector& vOther);  // 246
			Vector::operator=(
					const Vector& vOther);  // 247
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 250
			Vector::operator=(
					const Vector& vOther);  // 250
			Vector::Normalized(); // 226
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 226
			Vector::Normalized(); // 227
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 226
			Vector::operator=(
					const Vector& vOther);  // 226
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 227
			Vector::operator=(
					const Vector& vOther);  // 227
			Vector::Normalized(); // 240
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 240
			Vector::operator=(
					const Vector& vOther);  // 240
		}
		{
			float flSpeed; // 259
			const Vector  deltaValue; // 262
			Vector::Normalized(); // 265
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 263
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 262
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 265
			Vector::operator=(
					const Vector& vOther);  // 265
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 266
			Vector::operator+=(
					const Vector& v);  // 266
		}
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 272
	}
	CloseEnough(const Vector& a,
			const Vector& b,
			float epsilon);  // 185
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00E14CB1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animinputdamping.cpp:183
// variables: 141
// function calls: 497
void Update<VectorAligned, CAnimInputDamping::CDampedVectorAligned>(CDampedVectorAligned& dampedValue, const VectorAligned& vTargetValue, float timeStep)
{
	{
		VectorAligned delta; // 187
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 256
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 187
		VectorAligned::operator=(
				const VectorAligned& src);  // 188
		VectorAligned::operator=(
				const VectorAligned& src);  // 189
	}
	{
		const VectorAligned  prevValue; // 195
		{
			State<VectorAligned> state; // 201
			Derivative<VectorAligned> a; // 202
			Derivative<VectorAligned> b; // 203
			Derivative<VectorAligned> c; // 204
			Derivative<VectorAligned> d; // 205
			VectorAligned dPositiondt; // 207
			VectorAligned dVelocitydt; // 208
			VectorAligned::VectorAligned(); // 42
			VectorAligned::VectorAligned(); // 42
			Derivative<VectorAligned>::Derivative(); // 202
			VectorAligned::VectorAligned(); // 35
			VectorAligned::VectorAligned(); // 35
			State<VectorAligned>::State(); // 51
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
					vec_t s);  // 52
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
					const VectorAligned& v);  // 52
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
					vec_t s);  // 53
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
					const VectorAligned& v);  // 53
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
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 55
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 55
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
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 56
			VectorAligned::VectorAligned(); // 42
			VectorAligned::VectorAligned(); // 42
			Derivative<VectorAligned>::Derivative(); // 58
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
					const VectorAligned& v);  // 60
			Evaluate<VectorAligned>(const State<VectorAligned>& initial,
						const VectorAligned& target,
						float t,
						float dt,
						const Derivative<VectorAligned>& d,
						float tension,
						float damping);  // 202
			VectorAligned::VectorAligned(); // 35
			VectorAligned::VectorAligned(); // 35
			State<VectorAligned>::State(); // 51
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
					vec_t s);  // 52
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
					const VectorAligned& v);  // 52
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
					vec_t s);  // 53
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
					const VectorAligned& v);  // 53
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 55
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
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 55
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
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 56
			VectorAligned::VectorAligned(); // 42
			VectorAligned::VectorAligned(); // 42
			Derivative<VectorAligned>::Derivative(); // 58
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
					const VectorAligned& v);  // 60
			Evaluate<VectorAligned>(const State<VectorAligned>& initial,
						const VectorAligned& target,
						float t,
						float dt,
						const Derivative<VectorAligned>& d,
						float tension,
						float damping);  // 203
			VectorAligned::VectorAligned(); // 35
			VectorAligned::VectorAligned(); // 35
			State<VectorAligned>::State(); // 51
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
					vec_t s);  // 52
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
					const VectorAligned& v);  // 52
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
					vec_t s);  // 53
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
					const VectorAligned& v);  // 53
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 55
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
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 55
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
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 56
			VectorAligned::VectorAligned(); // 42
			VectorAligned::VectorAligned(); // 42
			Derivative<VectorAligned>::Derivative(); // 58
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
					const VectorAligned& v);  // 60
			Evaluate<VectorAligned>(const State<VectorAligned>& initial,
						const VectorAligned& target,
						float t,
						float dt,
						const Derivative<VectorAligned>& d,
						float tension,
						float damping);  // 204
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
					const VectorAligned& v);  // 207
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
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 207
			VectorAligned::VectorAligned(); // 35
			VectorAligned::VectorAligned(); // 35
			State<VectorAligned>::State(); // 51
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
					vec_t s);  // 52
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
					const VectorAligned& v);  // 52
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
					vec_t s);  // 53
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
					const VectorAligned& v);  // 53
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 55
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
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 55
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
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 56
			VectorAligned::VectorAligned(); // 42
			VectorAligned::VectorAligned(); // 42
			Derivative<VectorAligned>::Derivative(); // 58
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
					const VectorAligned& v);  // 60
			Evaluate<VectorAligned>(const State<VectorAligned>& initial,
						const VectorAligned& target,
						float t,
						float dt,
						const Derivative<VectorAligned>& d,
						float tension,
						float damping);  // 205
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
					const VectorAligned& v);  // 207
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
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 207
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
					const VectorAligned& v);  // 208
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
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 208
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
					const VectorAligned& v);  // 207
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
					const VectorAligned& v);  // 208
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
					const VectorAligned& v);  // 208
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
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 208
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
					vec_t s);  // 210
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 208
			VectorAligned::operator+=(
					const VectorAligned& v);  // 210
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
					vec_t s);  // 211
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 208
			VectorAligned::operator+=(
					const VectorAligned& v);  // 211
			VectorAligned::operator=(
					const VectorAligned& src);  // 213
			VectorAligned::operator=(
					const VectorAligned& src);  // 214
		}
		{
			VectorAligned vTargetSpaceValue; // 222
			VectorAligned limitedDistanceRemainder; // 223
			VectorAligned vNewValue; // 230
			const float  minStepDistance; // 233
			const VectorAligned  toTarget; // 234
			VectorAligned toPos; // 235
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 222
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 298
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 299
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 300
			VectorAligned::Length(); // 224
			VectorAligned::operator fltx4(); // 250
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
					const VectorAligned& v);  // 230
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 234
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 361
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 359
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 362
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 360
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
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 362
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 362
			VectorAligned::NormalizedSafe(
					const VectorAligned& v);  // 351
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 351
			VectorAligned::Normalized(); // 240
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
					const VectorAligned& v);  // 230
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 235
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 379
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 380
			VectorAligned::Dot(
				const VectorAligned& v);  // 416
			DotProduct(const VectorAligned& lhs,
					const VectorAligned& rhs);  // 237
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 298
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 299
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 300
			VectorAligned::Length(); // 238
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
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 240
			VectorAligned::operator=(
					const VectorAligned& src);  // 240
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 351
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 362
			VectorAligned::NormalizedSafe(
					const VectorAligned& v);  // 351
			VectorAligned::Normalized(); // 244
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 379
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 380
			VectorAligned::Dot(
				const VectorAligned& v);  // 416
			DotProduct(const VectorAligned& lhs,
					const VectorAligned& rhs);  // 244
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 300
			VectorAligned::Length(); // 244
			VectorAligned::operator=(
					const VectorAligned& src);  // 246
			VectorAligned::operator=(
					const VectorAligned& src);  // 247
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
					const VectorAligned& v);  // 250
			VectorAligned::operator=(
					const VectorAligned& src);  // 250
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 351
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 361
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 362
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
					const fltx4& b);  // 362
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 362
			VectorAligned::NormalizedSafe(
					const VectorAligned& v);  // 351
			VectorAligned::Normalized(); // 226
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
					vec_t s);  // 226
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 226
			VectorAligned::operator=(
					const VectorAligned& src);  // 227
			VectorAligned::operator=(
					const VectorAligned& src);  // 226
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 351
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 362
			VectorAligned::NormalizedSafe(
					const VectorAligned& v);  // 351
			VectorAligned::Normalized(); // 227
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 268
			VectorAligned::operator*(
					vec_t s);  // 227
		}
		{
			float flSpeed; // 259
			const VectorAligned  deltaValue; // 262
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 262
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 298
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 299
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 300
			VectorAligned::Length(); // 263
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 362
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 361
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
					const fltx4& b);  // 362
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 362
			VectorAligned::NormalizedSafe(
					const VectorAligned& v);  // 351
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 351
			VectorAligned::Normalized(); // 265
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
					vec_t s);  // 266
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
					vec_t s);  // 265
			VectorAligned::operator=(
					const VectorAligned& src);  // 265
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 208
			VectorAligned::operator+=(
					const VectorAligned& v);  // 266
		}
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 256
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 272
	}
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 185
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 185
	CloseEnough(const Vector& a,
			const Vector& b,
			float epsilon);  // 185
} /* size: 1051, inline expansions: 23 (185 bytes) */

