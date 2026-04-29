
//
// sbox/rendercallbacks.cpp
//
//	referenced by: libengine2.so
//
//	functions: 14
//

// <01A03DA4> sbox/rendercallbacks.cpp:6
// function calls: 2
void CReadTexturePixelsManagedCallback::CReadTexturePixelsManagedCallback()
{
	IRenderReadCallback::IRenderReadCallback(); // 173
	IReadTexturePixelsCallback::IReadTexturePixelsCallback(); // 6
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01A03D8B> sbox/rendercallbacks.cpp:6
void CReadTexturePixelsManagedCallback::CReadTexturePixelsManagedCallback()
{
} /* size: 0 */

// <01A03CA1> sbox/rendercallbacks.cpp:10
void CReadTexturePixelsManagedCallback::OnReadTexturePixels(const uint8* pData, ImageFormat format, int nMipLevel, int nWidth, int nHeight, int nPitchInBytes)
{
} /* size: 9 */

// <01A03C73> sbox/rendercallbacks.cpp:15
void CReadTexturePixelsManagedCallback::Done()
{
} /* size: 9 */

// <01A03C37> sbox/rendercallbacks.cpp:20
void CReadTexturePixelsManagedCallback::SetManagedId(int id)
{
} /* size: 8 */

// <01A03C09> sbox/rendercallbacks.cpp:25
void CReadTexturePixelsManagedCallback::GetManagedId()
{
} /* size: 8 */

// <01A03BDB> sbox/rendercallbacks.cpp:30
void CReadTexturePixelsManagedCallback::IsDoneWithData()
{
} /* size: 9 */

// <01A03B19> sbox/rendercallbacks.cpp:35
// function calls: 2
void CReadBufferManagedCallback::CReadBufferManagedCallback()
{
	IRenderReadCallback::IRenderReadCallback(); // 181
	IReadBufferCallback::IReadBufferCallback(); // 35
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01A03B00> sbox/rendercallbacks.cpp:35
void CReadBufferManagedCallback::CReadBufferManagedCallback()
{
} /* size: 0 */

// <01A03A80> sbox/rendercallbacks.cpp:39
void CReadBufferManagedCallback::OnReadBuffer(const uint8* pData, int32 nSizeInBytes)
{
} /* size: 9 */

// <01A03A52> sbox/rendercallbacks.cpp:44
void CReadBufferManagedCallback::Done()
{
} /* size: 9 */

// <01A03A16> sbox/rendercallbacks.cpp:49
void CReadBufferManagedCallback::SetManagedId(int id)
{
} /* size: 8 */

// <01A039E8> sbox/rendercallbacks.cpp:54
void CReadBufferManagedCallback::GetManagedId()
{
} /* size: 8 */

// <01A039BA> sbox/rendercallbacks.cpp:59
void CReadBufferManagedCallback::IsDoneWithData()
{
} /* size: 9 */

