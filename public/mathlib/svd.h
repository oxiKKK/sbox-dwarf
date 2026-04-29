
//
// public/mathlib/svd.h
//
//	referenced by: libengine2.so
//
//	functions: 39
//

// <05F08EB4> ../public/mathlib/svd.h:13
inline void CmpLt(float a, float b)
{
} /* size: 0 */

// <05F08E95> ../public/mathlib/svd.h:17
inline void AllLe(float a, float b)
{
} /* size: 0 */

// <05F08E77> ../public/mathlib/svd.h:44
inline void Replicate<float>(float a)
{
} /* size: 0 */

// <05F08E61> ../public/mathlib/svd.h:47
inline void Abs(float fl)
{
} /* size: 0 */

// <05F08E4C> ../public/mathlib/svd.h:55
inline void RsqrtEst(const fltx4& a)
{
} /* size: 0 */

// <05F08E2B> ../public/mathlib/svd.h:63
// variable: 1
inline void RsqrtEst(float a)
{
	float res; // 65
} /* size: 0, variables: 1 */

// <05F08E0D> ../public/mathlib/svd.h:81
inline void Rsqrt<float>(const float& a)
{
} /* size: 0 */

// <05F08DE2> ../public/mathlib/svd.h:117
inline void Select(float a, float b, bool mask)
{
} /* size: 0 */

// <05EEA557> ../public/mathlib/svd.h:131
void Vector3<float>::Vector3(float flX, float flY, float flZ)
{
} /* size: 0 */

// <05EEA51A> ../public/mathlib/svd.h:131
inline void Vector3<float>::Vector3(float flX, float flY, float flZ)
{
} /* size: 0 */

// <05EEA368> ../public/mathlib/svd.h:144
// variables: 3
inline void Vector3<float>::SmallestComponent()
{
	float flAbsx; // 146
	float flAbsy; // 147
	float flAbsz; // 148
} /* size: 0, variables: 3 */

// <05EEA326> ../public/mathlib/svd.h:164
inline void AsVector<float>(const Vector3<float>& v)
{
} /* size: 0 */

// <05EF164F> ../public/mathlib/svd.h:169
inline void AsVector3<float>(const Vector& v)
{
} /* size: 0 */

// <05EEA4F2> ../public/mathlib/svd.h:185
inline void DotProduct<float>(const Vector3<float>& a, const Vector3<float>& b)
{
} /* size: 0 */

// <05EDEA9B> ../public/mathlib/svd.h:212
void Matrix3<float>::Matrix3()
{
} /* size: 0 */

// <05EDEA82> ../public/mathlib/svd.h:212
inline void Matrix3<float>::Matrix3()
{
} /* size: 0 */

// <05EEA344> ../public/mathlib/svd.h:272
inline void Matrix3<float>::GetColumn(int i)
{
} /* size: 0 */

// <05EEA5AF> ../public/mathlib/svd.h:322
inline void SymMatrix3<float>::m00()
{
} /* size: 0 */

// <05EEA4D9> ../public/mathlib/svd.h:323
inline void SymMatrix3<float>::m01()
{
} /* size: 0 */

// <05EEA596> ../public/mathlib/svd.h:325
inline void SymMatrix3<float>::m11()
{
} /* size: 0 */

// <05EEA4A7> ../public/mathlib/svd.h:326
inline void SymMatrix3<float>::m12()
{
} /* size: 0 */

// <05EEA57D> ../public/mathlib/svd.h:327
inline void SymMatrix3<float>::m22()
{
} /* size: 0 */

// <05EE9F36> ../public/mathlib/svd.h:343
void SymMatrix3<float>::SymMatrix3(float fl00, float fl10, float fl11, float fl20, float fl21, float fl22)
{
} /* size: 0 */

// <05EE9ECF> ../public/mathlib/svd.h:343
inline void SymMatrix3<float>::SymMatrix3(float fl00, float fl10, float fl11, float fl20, float fl21, float fl22)
{
} /* size: 0 */

// <05EF166D> ../public/mathlib/svd.h:353
inline void SymMatrix3<float>::SetZero()
{
} /* size: 0 */

// <05EE9E9E> ../public/mathlib/svd.h:383
// variable: 1
inline void SymMatrix3<float>::operator*=(float k)
{
	{
		int i; // 385
	}
} /* size: 0 */

// <05EEA3A5> ../public/mathlib/svd.h:400
inline void SymMatrix3<float>::GetDiag()
{
} /* size: 0 */

// <05EF1630> ../public/mathlib/svd.h:407
void Cov<float>(const Vector3<float>& v)
{
} /* size: 0 */

// <05EE4421> ../public/mathlib/svd.h:437
// variable: 1
inline void SinCos<float>::DoubleAngle()
{
	SinCos<float> res; // 439
} /* size: 0, variables: 1 */

// <05EEA431> ../public/mathlib/svd.h:452
inline void Quaternion<float>::SetIdentity()
{
} /* size: 0 */

// <05EE42D3> ../public/mathlib/svd.h:468
inline void Quaternion<float>::LengthSqr()
{
} /* size: 0 */

// <05EE425C> ../public/mathlib/svd.h:475
// variables: 3
void QuaternionMatrix<float>(const Quaternion<float>& q)
{
	Matrix3<float> matrix; // 477
	const float  one; // 478
	const float  two; // 478
} /* size: 0, variables: 3 */

// <05F0C93E> ../public/mathlib/svd.h:627
// variables: 6
void PerformGivensRotation3x3<float>(float& a00, float& a01, float& a11, float& a02, float& a12, const SinCos<float>& r)
{
	const float  two; // 629
	float b00; // 631
	float b01; // 632
	float b11; // 633
	float b02; // 634
	float b12; // 635
} /* size: 0, variables: 6 */

// <05EE4447> ../public/mathlib/svd.h:656
// variables: 6
inline void ApproximateGivensRotation<float>(const float& a11, const float& a12, const float& a22)
{
	const float  two; // 658
	float ch; // 659
	float sh; // 660
	Bool b; // 661
	float omega; // 662
	SinCos<float> res; // 663
} /* size: 0, variables: 6 */

// <05EE42F2> ../public/mathlib/svd.h:673
// variables: 4
void PerformGivensRotationQuaternion<float>(const SinCos<float>& res, float& x, float& y, float& z, float& w)
{
	float xNew; // 676
	float yNew; // 676
	float zNew; // 676
	float wNew; // 676
} /* size: 0, variables: 4 */

// <05EEA463> ../public/mathlib/svd.h:687
void SvdIterator<float>::SvdIterator()
{
} /* size: 0 */

// <05EEA44A> ../public/mathlib/svd.h:687
inline void SvdIterator<float>::SvdIterator()
{
} /* size: 0 */

// <05EEA3D7> ../public/mathlib/svd.h:699
// variables: 3
inline void SvdIterator<float>::Iterate(int nIterations, float flEpsilon)
{
	SinCos<float> r; // 701
	{
		int i; // 705
		{
			float sumErrors; // 708
		}
	}
} /* size: 0, variables: 1 */

// <05EEA3BE> ../public/mathlib/svd.h:729
inline void SvdIterator<float>::ComputeV()
{
} /* size: 0 */

