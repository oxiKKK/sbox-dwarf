
//
// public/meshsystem/decalvertex.h
//
//	referenced by: libmeshsystem.so
//
//	struct: 1
//

// <00144021> ../public/meshsystem/decalvertex.h:6
// member variables: 6
// struct size: 84
struct DecalVertex_t {
	Vector m_vPosition; /* 0 12 */
	Vector4D m_vCorner; /* 12 16 */
	Vector4D m_vSDirectionAndAlpha; /* 28 16 */
	Vector4D m_vTDirectionAndDepth; /* 44 16 */
	Vector4D m_vWorldSpaceClipDistancesOrSequenceData; /* 60 16 */
	Vector2D m_vLightmapUv; /* 76 8 */
};

