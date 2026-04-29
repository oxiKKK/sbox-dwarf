
//
// public/engine2/skyboxrendersetup.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 2
//	struct: 1
//

// <03244E83> ../public/engine2/skyboxrendersetup.h:11
void SkyboxRenderSetup::~SkyboxRenderSetup()
{
} /* size: 0 */

// <03244E67> ../public/engine2/skyboxrendersetup.h:11
inline void SkyboxRenderSetup::~SkyboxRenderSetup()
{
} /* size: 0 */

// <000479BC> ../public/engine2/skyboxrendersetup.h:11
// member variables: 6
// struct size: 1,184
struct SkyboxRenderSetup {
	Vector m_Origin; /* 0 12 */
	QAngle m_Angles; /* 12 12 */
	Vector m_Offset; /* 24 12 */
	float m_Scale; /* 36 4 */
	ISceneWorld * m_World; /* 40 8 */
	CFrustum m_Frustum __attribute__((__aligned__(16))); /* 48 1136 */
} __attribute__((__aligned__(16)));

