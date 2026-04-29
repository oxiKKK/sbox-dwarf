
//
// public/meshutils/simplifyparams.h
//
//	referenced by: libengine2.so
//
//	functions: 5
//	struct: 1
//

// <00998B80> ../public/meshutils/simplifyparams.h:14
// member functions: 5
// member variables: 6
// struct size: 24
struct RnHullSimplificationParams_t {
	/* ../public/meshutils/simplifyparams.h:16 */
	void RnHullSimplificationParams_t(RnHullSimplificationParams_t* , HullSimplificationAlgorithm_t);
	float m_flPrecisionDegrees; /* 0 4 */
	float m_flPrecisionInches; /* 4 4 */
	int m_nMaxFaces; /* 8 4 */
	int m_nMaxEdges; /* 12 4 */
	int m_nMaxVerts; /* 16 4 */
	HullSimplificationAlgorithm_t m_nAlgo; /* 20 4 */
	/* ../public/meshutils/simplifyparams.h:27 */
	bool HasLimits(const RnHullSimplificationParams_t* );
	/* ../public/meshutils/simplifyparams.h:31 */
	int GetMaxRuntimeFaces(const RnHullSimplificationParams_t* );
	/* ../public/meshutils/simplifyparams.h:35 */
	int GetMaxRuntimeVerts(const RnHullSimplificationParams_t* );
	/* ../public/meshutils/simplifyparams.h:39 */
	int GetMaxRuntimeEdges(const RnHullSimplificationParams_t* );
};

// <05F0C15E> ../public/meshutils/simplifyparams.h:16
void RnHullSimplificationParams_t::RnHullSimplificationParams_t(HullSimplificationAlgorithm_t nAlgo)
{
} /* size: 0 */

// <05F0C139> ../public/meshutils/simplifyparams.h:16
inline void RnHullSimplificationParams_t::RnHullSimplificationParams_t(HullSimplificationAlgorithm_t nAlgo)
{
} /* size: 0 */

// <05F0C120> ../public/meshutils/simplifyparams.h:31
inline void RnHullSimplificationParams_t::GetMaxRuntimeFaces()
{
} /* size: 0 */

// <05F0C107> ../public/meshutils/simplifyparams.h:35
inline void RnHullSimplificationParams_t::GetMaxRuntimeVerts()
{
} /* size: 0 */

// <05F0C0EE> ../public/meshutils/simplifyparams.h:39
inline void RnHullSimplificationParams_t::GetMaxRuntimeEdges()
{
} /* size: 0 */

