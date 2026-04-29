
//
// public/mathlib/interpolaterbf.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 68
//	classes: 4
//

// <053E1B9D> ../public/mathlib/interpolaterbf.h:35
// member functions: 20
// member variables: 3
// class size: 16
class RbfMatrix {
	/* ../public/mathlib/interpolaterbf.h:38 */
	void RbfMatrix(RbfMatrix* );
	/* ../public/mathlib/interpolaterbf.h:42 */
	void RbfMatrix(RbfMatrix* , int, int);
	/* ../public/mathlib/interpolaterbf.h:47 */
	void RbfMatrix(RbfMatrix* , const RbfMatrix& );
	/* ../public/mathlib/interpolaterbf.h:60 */
	RbfMatrix& operator=(RbfMatrix* , const RbfMatrix& );
	/* ../public/mathlib/interpolaterbf.h:81 */
	void ~RbfMatrix(RbfMatrix* );
	/* ../public/mathlib/interpolaterbf.h:86 */
	float& operator()(RbfMatrix* , int, int);
	/* ../public/mathlib/interpolaterbf.h:93 */
	const float& operator()(const RbfMatrix* , int, int);
	/* ../public/mathlib/interpolaterbf.h:100 */
	int num_rows(const RbfMatrix* );
	/* ../public/mathlib/interpolaterbf.h:104 */
	int num_cols(const RbfMatrix* );
	/* ../public/mathlib/interpolaterbf.h:108 */
	bool size(const RbfMatrix* );
private:
	int m_nRows; /* 0 4 */
	int m_nCols; /* 4 4 */
	float * m_pData; /* 8 8 */
	void RbfMatrix(class RbfMatrix *); /* linkage=_ZN9RbfMatrixC4Ev */
	void RbfMatrix(class RbfMatrix *, int, int); /* linkage=_ZN9RbfMatrixC4Eii */
	void RbfMatrix(class RbfMatrix *, const class RbfMatrix  &); /* linkage=_ZN9RbfMatrixC4ERKS_ */
	class RbfMatrix & operator=(class RbfMatrix *, const class RbfMatrix  &); /* linkage=_ZN9RbfMatrixaSERKS_ */
	void ~RbfMatrix(class RbfMatrix *); /* linkage=_ZN9RbfMatrixD4Ev */
	float & operator()(class RbfMatrix *, int, int); /* linkage=_ZN9RbfMatrixclEii */
	const float  & operator()(const class RbfMatrix  *, int, int); /* linkage=_ZNK9RbfMatrixclEii */
	int num_rows(const class RbfMatrix  *); /* linkage=_ZNK9RbfMatrix8num_rowsEv */
	int num_cols(const class RbfMatrix  *); /* linkage=_ZNK9RbfMatrix8num_colsEv */
	bool size(const class RbfMatrix  *); /* linkage=_ZNK9RbfMatrix4sizeEv */
};

// <05418CEF> ../public/mathlib/interpolaterbf.h:38
void RbfMatrix::RbfMatrix()
{
} /* size: 0 */

// <05418CD6> ../public/mathlib/interpolaterbf.h:38
inline void RbfMatrix::RbfMatrix()
{
} /* size: 0 */

// <05418CB5> ../public/mathlib/interpolaterbf.h:42
void RbfMatrix::RbfMatrix(int rows, int cols)
{
} /* size: 0 */

// <05418C84> ../public/mathlib/interpolaterbf.h:42
inline void RbfMatrix::RbfMatrix(int rows, int cols)
{
} /* size: 0 */

// <05418C68> ../public/mathlib/interpolaterbf.h:47
void RbfMatrix::RbfMatrix(const RbfMatrix& other)
{
} /* size: 0 */

// <05418C43> ../public/mathlib/interpolaterbf.h:47
inline void RbfMatrix::RbfMatrix(const RbfMatrix& other)
{
} /* size: 0 */

// <05418C1E> ../public/mathlib/interpolaterbf.h:60
inline void RbfMatrix::operator=(const RbfMatrix& other)
{
} /* size: 0 */

// <05418C07> ../public/mathlib/interpolaterbf.h:81
void RbfMatrix::~RbfMatrix()
{
} /* size: 0 */

// <05418BEE> ../public/mathlib/interpolaterbf.h:81
inline void RbfMatrix::~RbfMatrix()
{
} /* size: 0 */

// <05418B72> ../public/mathlib/interpolaterbf.h:86
// variables: 3
inline void RbfMatrix::operator(int row, int col)
{
	const char   __FUNCTION__; // 32685
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <020D6CE8> ../public/mathlib/interpolaterbf.h:86
// variables: 3
inline void RbfMatrix::operator(int row, int col)
{
	const char   __FUNCTION__; // 12312
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <0133B7B3> ../public/mathlib/interpolaterbf.h:86
// variables: 3
inline void RbfMatrix::operator(int row, int col)
{
	const char   __FUNCTION__; // 47187
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <05418AF6> ../public/mathlib/interpolaterbf.h:93
// variables: 3
inline void RbfMatrix::operator(int row, int col)
{
	const char   __FUNCTION__; // 32685
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 95
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 1 */

// <020D6C6C> ../public/mathlib/interpolaterbf.h:93
// variables: 3
inline void RbfMatrix::operator(int row, int col)
{
	const char   __FUNCTION__; // 12312
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 95
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 1 */

// <0133B737> ../public/mathlib/interpolaterbf.h:93
// variables: 3
inline void RbfMatrix::operator(int row, int col)
{
	const char   __FUNCTION__; // 47187
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 95
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 1 */

// <05418ADD> ../public/mathlib/interpolaterbf.h:100
inline void RbfMatrix::num_rows()
{
} /* size: 0 */

// <05418AC4> ../public/mathlib/interpolaterbf.h:104
inline void RbfMatrix::num_cols()
{
} /* size: 0 */

// <05418AAB> ../public/mathlib/interpolaterbf.h:108
inline void RbfMatrix::size()
{
} /* size: 0 */

// <053E1D64> ../public/mathlib/interpolaterbf.h:122
// member functions: 8
// member variables: 5
// class size: 32
class RbfLUSolver {
	/* ../public/mathlib/interpolaterbf.h:125 */
	void RbfLUSolver(RbfLUSolver* , const RbfMatrix& );
	/* ../public/mathlib/interpolaterbf.h:222 */
	void ~RbfLUSolver(RbfLUSolver* );
	/* ../public/mathlib/interpolaterbf.h:228 */
	bool isNonsingular(const RbfLUSolver* );
	/* ../public/mathlib/interpolaterbf.h:233 */
	RbfMatrix solve(const RbfLUSolver* , const RbfMatrix& );
private:
	int m_nSize; /* 0 4 */
	float * m_LU; /* 8 8 */
	int * m_perm; /* 16 8 */
	int m_pivsign; /* 24 4 */
	bool m_bSingular; /* 28 1 */
	void RbfLUSolver(class RbfLUSolver *, const class RbfMatrix  &); /* linkage=_ZN11RbfLUSolverC4ERK9RbfMatrix */
	void ~RbfLUSolver(class RbfLUSolver *); /* linkage=_ZN11RbfLUSolverD4Ev */
	bool isNonsingular(const class RbfLUSolver  *); /* linkage=_ZNK11RbfLUSolver13isNonsingularEv */
	class RbfMatrix solve(const class RbfLUSolver  *, const class RbfMatrix  &); /* linkage=_ZNK11RbfLUSolver5solveERK9RbfMatrix */
};

// <0541861D> ../public/mathlib/interpolaterbf.h:125
// variables: 32
// function calls: 4
void RbfLUSolver::RbfLUSolver(const RbfMatrix& A)
{
	{
		float* LUcolj; // 150
		{
			int i; // 141
			{
				int j; // 143
			}
		}
		{
			int j; // 153
			{
				int p; // 175
				{
					int i; // 156
				}
				{
					int i; // 162
					{
						int kmax; // 164
						float s; // 165
						{
							int k; // 166
						}
					}
				}
				{
					int i; // 176
				}
				{
					int k; // 193
					{
						int k; // 186
						{
							float t; // 188
						}
					}
				}
				{
					int i; // 202
				}
			}
		}
		{
			int j; // 212
		}
	}
	RbfMatrix::num_rows(); // 125
	{
		float* LUcolj; // 150
		RbfMatrix::num_rows(); // 128
		RbfMatrix::num_cols(); // 128
		{
			int i; // 141
			{
				int j; // 143
				{
				}
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 145
			}
		}
		{
			int j; // 153
			{
				int p; // 175
				{
					int i; // 156
				}
				{
					int i; // 162
					{
						int kmax; // 164
						float s; // 165
						{
							int k; // 166
						}
					}
				}
				{
					int i; // 176
				}
				{
					int k; // 193
					{
						int k; // 186
						{
							float t; // 188
						}
					}
				}
				{
					int i; // 202
				}
			}
		}
		{
			int j; // 212
		}
	}
} /* size: 1344, inline expansions: 1 (2 bytes) */

// <05418520> ../public/mathlib/interpolaterbf.h:125
// variables: 16
inline void RbfLUSolver::RbfLUSolver(const RbfMatrix& A)
{
	{
		float* LUcolj; // 150
		{
			int i; // 141
			{
				int j; // 143
			}
		}
		{
			int j; // 153
			{
				int p; // 175
				{
					int i; // 156
				}
				{
					int i; // 162
					{
						int kmax; // 164
						float s; // 165
						{
							int k; // 166
						}
					}
				}
				{
					int i; // 176
				}
				{
					int k; // 193
					{
						int k; // 186
						{
							float t; // 188
						}
					}
				}
				{
					int i; // 202
				}
			}
		}
		{
			int j; // 212
		}
	}
} /* size: 0 */

// <05418509> ../public/mathlib/interpolaterbf.h:222
void RbfLUSolver::~RbfLUSolver()
{
} /* size: 0 */

// <054184F0> ../public/mathlib/interpolaterbf.h:222
inline void RbfLUSolver::~RbfLUSolver()
{
} /* size: 0 */

// <054184D7> ../public/mathlib/interpolaterbf.h:228
inline void RbfLUSolver::isNonsingular()
{
} /* size: 0 */

// <05417CDE> ../public/mathlib/interpolaterbf.h:233
// variables: 11
// function calls: 14
void RbfLUSolver::solve(const RbfMatrix& B)
{
	int nx; // 240
	RbfMatrix X; // 241
	{
		int i; // 244
		{
			int j; // 246
			{
			}
			{
			}
			RbfMatrix::operator(
					int row,
					int col);  // 248
			{
			}
			{
			}
			RbfMatrix::operator(
					int row,
					int col);  // 248
		}
	}
	{
		int k; // 253
		{
			int i; // 255
			{
				int j; // 257
				{
				}
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 259
				{
				}
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 259
			}
		}
	}
	{
		int k; // 265
		{
			int j; // 267
			{
			}
			{
			}
			RbfMatrix::operator(
					int row,
					int col);  // 269
		}
		{
			int i; // 271
			{
				int j; // 273
				{
				}
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 275
				{
				}
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 275
			}
		}
	}
	RbfMatrix::num_rows(); // 235
	RbfMatrix::RbfMatrix(); // 237
	RbfMatrix::num_cols(); // 240
	RbfMatrix::RbfMatrix(
			int rows,
			int cols);  // 241
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 52
	RbfMatrix::RbfMatrix(
			const RbfMatrix& other);  // 280
	RbfMatrix::~RbfMatrix(); // 281
} /* size: 2505, variables: 2, inline expansions: 7 (297 bytes) */

// <0540601A> ../public/mathlib/interpolaterbf.h:294
void CInterpolateRbf::CInterpolateRbf()
{
} /* size: 0 */

// <05405FFD> ../public/mathlib/interpolaterbf.h:294
inline void CInterpolateRbf::CInterpolateRbf()
{
} /* size: 0 */

// <05405FE6> ../public/mathlib/interpolaterbf.h:294
void CInterpolateRbf::~CInterpolateRbf()
{
} /* size: 0 */

// <05405FC9> ../public/mathlib/interpolaterbf.h:294
inline void CInterpolateRbf::~CInterpolateRbf()
{
} /* size: 0 */

// <053E1E68> ../public/mathlib/interpolaterbf.h:294
// member functions: 30
// member variables: 4
// class size: 32
class CInterpolateRbf {
	/* ../public/mathlib/interpolaterbf.h:298 */
	enum RbfType_t {
		RBF_MULTI_QUADRATIC = 0,
		RBF_INVERSE_MULTI_QUADRATIC = 1,
		RBF_GAUSSIAN = 2,
		RBF_LINEAR = 3,
		RBF_CUBIC = 4,
		RBF_QUINTIC = 5,
		RBF_THIN_PLATE = 6,
		RBF_NUM_TYPES = 7,
	};
	/* ../public/mathlib/interpolaterbf.h:310 */
	void SetFalloff(CInterpolateRbf* , float);
	/* ../public/mathlib/interpolaterbf.h:311 */
	float GetFalloff(const CInterpolateRbf* );
	/* ../public/mathlib/interpolaterbf.h:313 */
	void SetRbfType(CInterpolateRbf* , RbfType_t);
	/* ../public/mathlib/interpolaterbf.h:314 */
	RbfType_t GetRbfType(const CInterpolateRbf* );
	/* ../public/mathlib/interpolaterbf.h:316 */
	bool DoesRbfTypeUseFalloff(RbfType_t);
	/* ../public/mathlib/interpolaterbf.h:317 */
	const CUtlVector<char const*, CUtlMemory<char const*, int> >& GetRbfTypeNames(void);
protected:
	float m_flFalloff; /* 0 4 */
	RbfType_t m_eRbfType; /* 4 4 */
	float m_flFalloffInv; /* 8 4 */
	RbfMatrix m_w; /* 16 16 */
	/* ../public/mathlib/interpolaterbf.h:333 */
	float MultiQuadratic(float, float);
	/* ../public/mathlib/interpolaterbf.h:334 */
	float InverseMultiQuadratic(float, float);
	/* ../public/mathlib/interpolaterbf.h:335 */
	float Gaussian(float, float);
	/* ../public/mathlib/interpolaterbf.h:336 */
	float Linear(float, float);
	/* ../public/mathlib/interpolaterbf.h:337 */
	float Cubic(float, float);
	/* ../public/mathlib/interpolaterbf.h:338 */
	float Quintic(float, float);
	/* ../public/mathlib/interpolaterbf.h:339 */
	float ThinPlate(float, float);
	void ~CInterpolateRbf(CInterpolateRbf* );
	void CInterpolateRbf(CInterpolateRbf* );
	void SetFalloff(class CInterpolateRbf *, float); /* linkage=_ZN15CInterpolateRbf10SetFalloffEf */
	float GetFalloff(const class CInterpolateRbf  *); /* linkage=_ZNK15CInterpolateRbf10GetFalloffEv */
	void SetRbfType(class CInterpolateRbf *, enum RbfType_t); /* linkage=_ZN15CInterpolateRbf10SetRbfTypeENS_9RbfType_tE */
	enum RbfType_t GetRbfType(const class CInterpolateRbf  *); /* linkage=_ZNK15CInterpolateRbf10GetRbfTypeEv */
	bool DoesRbfTypeUseFalloff(enum RbfType_t); /* linkage=_ZN15CInterpolateRbf21DoesRbfTypeUseFalloffENS_9RbfType_tE */
	const class CUtlVector<char const*, CUtlMemory<char const*, int> >  & GetRbfTypeNames(void); /* linkage=_ZN15CInterpolateRbf15GetRbfTypeNamesEv */
	/* <541b680> ../public/mathlib/interpolaterbf.h:420 */
	float MultiQuadratic(float, float); /* linkage=_ZN15CInterpolateRbf14MultiQuadraticEff */
	/* <541b637> ../public/mathlib/interpolaterbf.h:428 */
	float InverseMultiQuadratic(float, float); /* linkage=_ZN15CInterpolateRbf21InverseMultiQuadraticEff */
	/* <541b5df> ../public/mathlib/interpolaterbf.h:436 */
	float Gaussian(float, float); /* linkage=_ZN15CInterpolateRbf8GaussianEff */
	/* <541b4f4> ../public/mathlib/interpolaterbf.h:444 */
	float Linear(float, float); /* linkage=_ZN15CInterpolateRbf6LinearEff */
	/* <541b524> ../public/mathlib/interpolaterbf.h:451 */
	float Cubic(float, float); /* linkage=_ZN15CInterpolateRbf5CubicEff */
	/* <541b55a> ../public/mathlib/interpolaterbf.h:458 */
	float Quintic(float, float); /* linkage=_ZN15CInterpolateRbf7QuinticEff */
	/* <541b590> ../public/mathlib/interpolaterbf.h:465 */
	float ThinPlate(float, float); /* linkage=_ZN15CInterpolateRbf9ThinPlateEff */
	void ~CInterpolateRbf(class CInterpolateRbf *); /* linkage=_ZN15CInterpolateRbfD4Ev */
	void CInterpolateRbf(class CInterpolateRbf *); /* linkage=_ZN15CInterpolateRbfC4Ev */
};

// <05417CC5> ../public/mathlib/interpolaterbf.h:311
inline void CInterpolateRbf::GetFalloff()
{
} /* size: 0 */

// <05417C9F> ../public/mathlib/interpolaterbf.h:313
inline void CInterpolateRbf::SetRbfType(RbfType_t eRbfType)
{
} /* size: 0 */

// <05417C86> ../public/mathlib/interpolaterbf.h:314
inline void CInterpolateRbf::GetRbfType()
{
} /* size: 0 */

// <05405FB2> ../public/mathlib/interpolaterbf.h:345
void CInterpolateRbfTyped<Vector>::CInterpolateRbfTyped()
{
} /* size: 0 */

// <05405F95> ../public/mathlib/interpolaterbf.h:345
inline void CInterpolateRbfTyped<Vector>::CInterpolateRbfTyped()
{
} /* size: 0 */

// <05405F7E> ../public/mathlib/interpolaterbf.h:345
void CInterpolateRbfTyped<Vector>::~CInterpolateRbfTyped()
{
} /* size: 0 */

// <05405F61> ../public/mathlib/interpolaterbf.h:345
inline void CInterpolateRbfTyped<Vector>::~CInterpolateRbfTyped()
{
} /* size: 0 */

// <053E3827> ../public/mathlib/interpolaterbf.h:345
// member functions: 22
// member variables: 2
// class size: 64
class CInterpolateRbfTyped<Vector> : public CInterpolateRbf {
public:
	/* class CInterpolateRbf <ancestor>; */ /* 0 32 */
	/* ../public/mathlib/interpolaterbf.h:646 */
	void ClearSamples(CInterpolateRbfTyped<Vector>* );
	/* ../public/mathlib/interpolaterbf.h:639 */
	int SampleCount(const CInterpolateRbfTyped<Vector>* );
	/* ../public/mathlib/interpolaterbf.h:626 */
	bool AddSample(CInterpolateRbfTyped<Vector>* , const Vector& );
	/* ../public/mathlib/interpolaterbf.h:571 */
	bool Finalize(CInterpolateRbfTyped<Vector>* );
	/* ../public/mathlib/interpolaterbf.h:511 */
	bool Solve(const CInterpolateRbfTyped<Vector>* , CUtlVector<float, CUtlMemory<float, int> >* , const Vector& );
protected:
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_samples; /* 32 32 */
	/* ../public/mathlib/interpolaterbf.h:670 */
	bool IsSampleValid(CInterpolateRbfTyped<Vector>* , const Vector& );
	/* ../public/mathlib/interpolaterbf.h:366 */
	float Norm(const Vector& , const Vector& );
	/* ../public/mathlib/interpolaterbf.h:371 */
	void BuildRdMats<float (&)(float, float)>(const CInterpolateRbfTyped<Vector>* , RbfMatrix& , RbfMatrix& , float ()(float, float)& );
	/* ../public/mathlib/interpolaterbf.h:400 */
	void BuildPoseMat<float (&)(float, float)>(const CInterpolateRbfTyped<Vector>* , RbfMatrix& , const Vector& , float ()(float, float)& );
	void ~CInterpolateRbfTyped(CInterpolateRbfTyped<Vector>* );
	void CInterpolateRbfTyped(CInterpolateRbfTyped<Vector>* );
	void ClearSamples(class CInterpolateRbfTyped<Vector> *); /* linkage=_ZN20CInterpolateRbfTypedI6VectorE12ClearSamplesEv */
	int SampleCount(const class CInterpolateRbfTyped<Vector>  *); /* linkage=_ZNK20CInterpolateRbfTypedI6VectorE11SampleCountEv */
	bool AddSample(class CInterpolateRbfTyped<Vector> *, const class Vector  &); /* linkage=_ZN20CInterpolateRbfTypedI6VectorE9AddSampleERKS0_ */
	bool Finalize(class CInterpolateRbfTyped<Vector> *); /* linkage=_ZN20CInterpolateRbfTypedI6VectorE8FinalizeEv */
	bool Solve(const class CInterpolateRbfTyped<Vector>  *, class CUtlVector<float, CUtlMemory<float, int> > *, const class Vector  &); /* linkage=_ZNK20CInterpolateRbfTypedI6VectorE5SolveEP10CUtlVectorIf10CUtlMemoryIfiEERKS0_ */
	bool IsSampleValid(class CInterpolateRbfTyped<Vector> *, const class Vector  &); /* linkage=_ZN20CInterpolateRbfTypedI6VectorE13IsSampleValidERKS0_ */
	float Norm(const class Vector  &, const class Vector  &); /* linkage=_ZN20CInterpolateRbfTypedI6VectorE4NormERKS0_S3_ */
	void BuildRdMats<float (&)(float, float)>(const class CInterpolateRbfTyped<Vector>  *, class RbfMatrix &, class RbfMatrix &, float ()(float, float) &); /* linkage=_ZNK20CInterpolateRbfTypedI6VectorE11BuildRdMatsIRFfffEEEvR9RbfMatrixS6_OT_ */
	void BuildPoseMat<float (&)(float, float)>(const class CInterpolateRbfTyped<Vector>  *, class RbfMatrix &, const class Vector  &, float ()(float, float) &); /* linkage=_ZNK20CInterpolateRbfTypedI6VectorE12BuildPoseMatIRFfffEEEvR9RbfMatrixRKS0_OT_ */
	void ~CInterpolateRbfTyped(class CInterpolateRbfTyped<Vector> *); /* linkage=_ZN20CInterpolateRbfTypedI6VectorED4Ev */
	void CInterpolateRbfTyped(class CInterpolateRbfTyped<Vector> *); /* linkage=_ZN20CInterpolateRbfTypedI6VectorEC4Ev */
};

// <053EC12C> ../public/mathlib/interpolaterbf.h:371
// variables: 10
// function calls: 23
void BuildRdMats<float CInterpolateRbfTyped<Vector>::(RbfMatrix& R, RbfMatrix& w, float ()(float, float)& RbfFn)
{
	const char   __FUNCTION__; // 32712
	const int  nSampleCount; // 373
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 373
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 375
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 376
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 377
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 378
	}
	{
		int i; // 383
		{
			int j; // 388
			{
				const float  flRij; // 390
				CUtlMemory<Vector, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 390
				CUtlMemory<Vector, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 390
				Vector::Vector(); // 1305
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1306
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 1307
				Vector::DistTo(
					const Vector& vOther);  // 684
				Norm(const Vector& a,
					const Vector& b);  // 390
				{
				}
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 391
				{
				}
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 392
			}
		}
		{
		}
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 385
		{
		}
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 386
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 373
	RbfMatrix::num_rows(); // 375
	RbfMatrix::num_cols(); // 376
	RbfMatrix::num_rows(); // 377
	RbfMatrix::num_cols(); // 378
} /* size: 954, variables: 2, inline expansions: 5 (6 bytes) */

// <020AA2A2> ../public/mathlib/interpolaterbf.h:371
// variables: 10
// function calls: 23
void BuildRdMats<float CInterpolateRbfTyped<Vector>::(RbfMatrix& R, RbfMatrix& w, float ()(float, float)& RbfFn)
{
	const char   __FUNCTION__; // 12339
	const int  nSampleCount; // 373
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 373
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 375
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 376
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 377
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 378
	}
	{
		int i; // 383
		{
			int j; // 388
			{
				const float  flRij; // 390
				CUtlMemory<Vector, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 390
				CUtlMemory<Vector, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 390
				Vector::Vector(); // 1305
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1306
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 1307
				Vector::DistTo(
					const Vector& vOther);  // 684
				Norm(const Vector& a,
					const Vector& b);  // 390
				{
				}
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 391
				{
				}
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 392
			}
		}
		{
		}
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 385
		{
		}
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 386
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 373
	RbfMatrix::num_rows(); // 375
	RbfMatrix::num_cols(); // 376
	RbfMatrix::num_rows(); // 377
	RbfMatrix::num_cols(); // 378
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <053ECCFD> ../public/mathlib/interpolaterbf.h:400
// variables: 6
inline void BuildPoseMat<float CInterpolateRbfTyped<Vector>::(RbfMatrix& m, const Vector& v, float ()(float, float)& RbfFn)
{
	const char   __FUNCTION__; // 32739
	const int  nSampleCount; // 402
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 402
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 404
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 405
	}
	{
		int i; // 407
	}
} /* size: 0, variables: 2 */

// <020AAE73> ../public/mathlib/interpolaterbf.h:400
// variables: 6
inline void BuildPoseMat<float CInterpolateRbfTyped<Vector>::(RbfMatrix& m, const Vector& v, float ()(float, float)& RbfFn)
{
	const char   __FUNCTION__; // 12366
	const int  nSampleCount; // 402
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 402
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 404
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 405
	}
	{
		int i; // 407
	}
} /* size: 0, variables: 2 */

// <0541B680> ../public/mathlib/interpolaterbf.h:420
// variable: 1
void MultiQuadratic(float flVal, float flFalloffInv)
{
	const float  flTmp; // 422
} /* size: 28, variables: 1 */

// <05417C50> ../public/mathlib/interpolaterbf.h:420
// variable: 1
inline void MultiQuadratic(float flVal, float flFalloffInv)
{
	const float  flTmp; // 422
} /* size: 0, variables: 1 */

// <0541B637> ../public/mathlib/interpolaterbf.h:428
// variable: 1
void InverseMultiQuadratic(float flVal, float flFalloffInv)
{
	const float  flTmp; // 430
} /* size: 33, variables: 1 */

// <05417C1A> ../public/mathlib/interpolaterbf.h:428
// variable: 1
inline void InverseMultiQuadratic(float flVal, float flFalloffInv)
{
	const float  flTmp; // 430
} /* size: 0, variables: 1 */

// <0541B5DF> ../public/mathlib/interpolaterbf.h:436
// variable: 1
void Gaussian(float flVal, float flFalloffInv)
{
	const float  flTmp; // 438
} /* size: 27, variables: 1 */

// <05417BE4> ../public/mathlib/interpolaterbf.h:436
// variable: 1
inline void Gaussian(float flVal, float flFalloffInv)
{
	const float  flTmp; // 438
} /* size: 0, variables: 1 */

// <0541B4F4> ../public/mathlib/interpolaterbf.h:444
void Linear(float flVal, float)
{
} /* size: 5 */

// <05417BC3> ../public/mathlib/interpolaterbf.h:444
inline void Linear(float flVal, float)
{
} /* size: 0 */

// <0541B524> ../public/mathlib/interpolaterbf.h:451
void Cubic(float flVal, float)
{
} /* size: 16 */

// <05417BA2> ../public/mathlib/interpolaterbf.h:451
inline void Cubic(float flVal, float)
{
} /* size: 0 */

// <0541B55A> ../public/mathlib/interpolaterbf.h:458
void Quintic(float flVal, float)
{
} /* size: 24 */

// <05417B81> ../public/mathlib/interpolaterbf.h:458
inline void Quintic(float flVal, float)
{
} /* size: 0 */

// <0541B590> ../public/mathlib/interpolaterbf.h:465
void ThinPlate(float flVal, float)
{
} /* size: 36 */

// <05417B60> ../public/mathlib/interpolaterbf.h:465
inline void ThinPlate(float flVal, float)
{
} /* size: 0 */

// <0541B6C9> ../public/mathlib/interpolaterbf.h:487
void GetRbfTypeNames(void)
{
	{
	}
} /* size: 0 */

// <05417996> ../public/mathlib/interpolaterbf.h:487
// variables: 3
inline void GetRbfTypeNames(void)
{
	const CUtlVector<char const*, CUtlMemory<char const*, int> >  s_rbfTypeNames; // 489
	const char   __FUNCTION__; // 32810
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 500
	}
} /* size: 0, variables: 2 */

// <020D5B0C> ../public/mathlib/interpolaterbf.h:487
// variables: 3
inline void GetRbfTypeNames(void)
{
	const CUtlVector<char const*, CUtlMemory<char const*, int> >  s_rbfTypeNames; // 489
	const char   __FUNCTION__; // 12437
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 500
	}
} /* size: 0, variables: 2 */

// <053EF860> ../public/mathlib/interpolaterbf.h:511
// variables: 15
// function calls: 121
void CInterpolateRbfTyped<Vector>::Solve(CUtlVector<float, CUtlMemory<float, int> >* pflOutWeights, const Vector& v)
{
	const char   __FUNCTION__; // 32555
	const int  nSampleCount; // 515
	RbfMatrix pose; // 525
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 513
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 516
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 551
	}
	{
		int i; // 556
		{
			float sum; // 558
			{
				int j; // 559
				{
				}
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 561
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 561
			}
			CUtlMemory<float, int>::operator[](
					int i);  // 602
			CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
				int i);  // 563
		}
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 515
	RbfMatrix::size(); // 520
	RbfMatrix::RbfMatrix(
			int rows,
			int cols);  // 525
	CInterpolateRbf::GetRbfType(); // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		Quintic(float flVal,
			float);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 545
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		ThinPlate(float flVal,
				float);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 548
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		MultiQuadratic(float flVal,
				float flFalloffInv);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		InverseMultiQuadratic(float flVal,
					float flFalloffInv);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 533
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 539
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		Gaussian(float flVal,
			float flFalloffInv);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 536
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		Cubic(float flVal,
			float);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 542
	RbfMatrix::~RbfMatrix(); // 567
} /* size: 2856, variables: 3, inline expansions: 19 (2309 bytes) */

// <020AD9D6> ../public/mathlib/interpolaterbf.h:511
// variables: 15
// function calls: 121
void CInterpolateRbfTyped<Vector>::Solve(CUtlVector<float, CUtlMemory<float, int> >* pflOutWeights, const Vector& v)
{
	const char   __FUNCTION__; // 12182
	const int  nSampleCount; // 515
	RbfMatrix pose; // 525
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 513
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 516
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 551
	}
	{
		int i; // 556
		{
			float sum; // 558
			{
				int j; // 559
				{
				}
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 561
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 561
			}
			CUtlMemory<float, int>::operator[](
					int i);  // 602
			CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
				int i);  // 563
		}
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 515
	RbfMatrix::size(); // 520
	RbfMatrix::RbfMatrix(
			int rows,
			int cols);  // 525
	CInterpolateRbf::GetRbfType(); // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		Quintic(float flVal,
			float);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 545
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		ThinPlate(float flVal,
				float);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 548
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		MultiQuadratic(float flVal,
				float flFalloffInv);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		InverseMultiQuadratic(float flVal,
					float flFalloffInv);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 533
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 539
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		Gaussian(float flVal,
			float flFalloffInv);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 536
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		Cubic(float flVal,
			float);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 542
	RbfMatrix::~RbfMatrix(); // 567
} /* size: 0, variables: 3, inline expansions: 19 (0 bytes) */

// <013124A1> ../public/mathlib/interpolaterbf.h:511
// variables: 15
// function calls: 121
void CInterpolateRbfTyped<Vector>::Solve(CUtlVector<float, CUtlMemory<float, int> >* pflOutWeights, const Vector& v)
{
	const char   __FUNCTION__; // 47057
	const int  nSampleCount; // 515
	RbfMatrix pose; // 525
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 513
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 516
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 551
	}
	{
		int i; // 556
		{
			float sum; // 558
			{
				int j; // 559
				{
				}
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 561
				{
				}
				RbfMatrix::operator(
						int row,
						int col);  // 561
			}
			CUtlMemory<float, int>::operator[](
					int i);  // 602
			CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
				int i);  // 563
		}
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 515
	RbfMatrix::size(); // 520
	RbfMatrix::RbfMatrix(
			int rows,
			int cols);  // 525
	CInterpolateRbf::GetRbfType(); // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		Quintic(float flVal,
			float);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 545
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		ThinPlate(float flVal,
				float);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 548
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		MultiQuadratic(float flVal,
				float flFalloffInv);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		InverseMultiQuadratic(float flVal,
					float flFalloffInv);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 533
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 539
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		Gaussian(float flVal,
			float flFalloffInv);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 536
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 402
	{
	}
	{
	}
	{
		int i; // 407
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 409
		{
		}
		RbfMatrix::operator(
				int row,
				int col);  // 409
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		Vector::Vector(); // 1305
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 684
		Norm(const Vector& a,
			const Vector& b);  // 409
		Cubic(float flVal,
			float);  // 409
	}
	CInterpolateRbfTyped<Vector>::BuildPoseMat<float (
						RbfMatrix& m,
						const Vector& v,
						float ()(float, float)& RbfFn);  // 542
	RbfMatrix::~RbfMatrix(); // 567
} /* size: 2856, variables: 3, inline expansions: 19 (2309 bytes) */

// <0541D441> ../public/mathlib/interpolaterbf.h:571
// variables: 5
// function calls: 13
void CInterpolateRbfTyped<Vector>::Finalize()
{
	const int  nSampleCount; // 573
	RbfMatrix R; // 578
	RbfMatrix d; // 579
	RbfLUSolver lu; // 609
	bool bOk; // 612
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 574
	}
	RbfMatrix::RbfMatrix(
			int rows,
			int cols);  // 578
	RbfMatrix::RbfMatrix(
			int rows,
			int cols);  // 579
	CInterpolateRbf::GetRbfType(); // 581
	{
	}
	RbfLUSolver::isNonsingular(); // 612
	RbfLUSolver::~RbfLUSolver(); // 621
	RbfMatrix::~RbfMatrix(); // 621
	RbfMatrix::~RbfMatrix(); // 621
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 71
	RbfMatrix::operator=(
			const RbfMatrix& other);  // 616
	RbfMatrix::~RbfMatrix(); // 616
	RbfMatrix::size(); // 617
} /* size: 0, variables: 5, inline expansions: 12 (366 bytes) */

// <053EEEA8> ../public/mathlib/interpolaterbf.h:571
// variables: 7
inline void CInterpolateRbfTyped<Vector>::Finalize()
{
	const char   __FUNCTION__; // 32631
	const int  nSampleCount; // 573
	RbfMatrix R; // 578
	RbfMatrix d; // 579
	RbfLUSolver lu; // 609
	bool bOk; // 612
	{
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 605
	}
} /* size: 0, variables: 6 */

// <020AD01E> ../public/mathlib/interpolaterbf.h:571
// variables: 7
inline void CInterpolateRbfTyped<Vector>::Finalize()
{
	const char   __FUNCTION__; // 12258
	const int  nSampleCount; // 573
	RbfMatrix R; // 578
	RbfMatrix d; // 579
	RbfLUSolver lu; // 609
	bool bOk; // 612
	{
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 605
	}
} /* size: 0, variables: 6 */

// <053EEFAE> ../public/mathlib/interpolaterbf.h:626
inline void CInterpolateRbfTyped<Vector>::AddSample(const Vector& v)
{
} /* size: 0 */

// <053EEFD2> ../public/mathlib/interpolaterbf.h:646
inline void CInterpolateRbfTyped<Vector>::ClearSamples()
{
} /* size: 0 */

// <0541BAA0> ../public/mathlib/interpolaterbf.h:653
// function call: 1
void CInterpolateRbf::SetFalloff(float flFalloff)
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 655
	}
} /* size: 40 */

// <054178E9> ../public/mathlib/interpolaterbf.h:653
inline void CInterpolateRbf::SetFalloff(float flFalloff)
{
	{
	}
} /* size: 0 */

// <053EC9B9> ../public/mathlib/interpolaterbf.h:670
inline void CInterpolateRbfTyped<Vector>::IsSampleValid(const Vector& v)
{
} /* size: 0 */

// <054178C4> ../public/mathlib/interpolaterbf.h:682
inline void Norm(const Vector& a, const Vector& b)
{
} /* size: 0 */

