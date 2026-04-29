
//
// thirdparty/quickhull/qhMass.h
//
//	referenced by: libengine2.so
//
//	function: 1
//	structs: 2
//

// <00996FB8> ../thirdparty/quickhull/qhMass.h:21
// member functions: 4
// member variables: 3
// struct size: 52
struct qhMass {
	/* ../thirdparty/quickhull/qhMass.h:23 */
	void qhMass(qhMass* );
	qhReal Weight; /* 0 4 */
	qhVector3 Center; /* 4 12 */
	qhMatrix3 Inertia; /* 16 36 */
	/* ../thirdparty/quickhull/qhMass.h:29 */
	qhMass& operator+=(qhMass* , const qhMass& );
	/* ../thirdparty/quickhull/qhMass.h:31 */
	void ShiftToOrigin(qhMass* );
	/* ../thirdparty/quickhull/qhMass.h:32 */
	void ShiftToCenter(qhMass* );
};

// <061E68A1> thirdparty/quickhull/qhMass.h:21
// member functions: 4
// member variables: 3
// struct size: 52
struct qhMass {
	/* thirdparty/quickhull/qhMass.h:23 */
	void qhMass(qhMass* );
	qhReal Weight; /* 0 4 */
	qhVector3 Center; /* 4 12 */
	qhMatrix3 Inertia; /* 16 36 */
	/* thirdparty/quickhull/qhMass.h:29 */
	qhMass& operator+=(qhMass* , const qhMass& );
	/* thirdparty/quickhull/qhMass.h:31 */
	void ShiftToOrigin(qhMass* );
	/* thirdparty/quickhull/qhMass.h:32 */
	void ShiftToCenter(qhMass* );
};

// <061E92C3> thirdparty/quickhull/qhMass.h:23
void qhMass::qhMass()
{
} /* size: 0 */

