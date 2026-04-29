
//
// sbox/media/videoplayerprovider.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//	class: 1
//

// <0202909F> sbox/media/videoplayerprovider.h:13
// member functions: 30
// member variables: 12
// vtable entries: 9
// class size: 88
class CVideoPlayerProvider : public IVideoPlayerProvider {
public:
	/* class IVideoPlayerProvider <ancestor>; */ /* 0 8 */
	void CVideoPlayerProvider(CVideoPlayerProvider* , const CVideoPlayerProvider& );
	/* sbox/media/videoplayerprovider.cpp:34 */
	void CVideoPlayerProvider(CVideoPlayerProvider* , CVideoPlayer* );
	/* sbox/media/videoplayerprovider.cpp:43 */
	virtual void ~CVideoPlayerProvider(CVideoPlayerProvider* );
	/* sbox/media/videoplayerprovider.cpp:52 */
	virtual bool PresentRGBATexture(CVideoPlayerProvider* , uint, uint, void* , uint);
	/* sbox/media/videoplayerprovider.cpp:172 */
	virtual bool PresentYUV420Texture(CVideoPlayerProvider* , uint, uint, void* , void* , void* , uint, uint, uint, bool, bool, void* , uint);
	/* sbox/media/videoplayerprovider.cpp:233 */
	virtual bool InitAudioOutput(CVideoPlayerProvider* , int, int);
	/* sbox/media/videoplayerprovider.cpp:248 */
	virtual void FreeAudioOutput(CVideoPlayerProvider* );
	/* sbox/media/videoplayerprovider.cpp:259 */
	virtual bool WantsTextureData(CVideoPlayerProvider* );
	/* sbox/media/videoplayerprovider.cpp:264 */
	virtual void OnLoaded(CVideoPlayerProvider* );
	/* sbox/media/videoplayerprovider.cpp:269 */
	virtual void OnFinished(CVideoPlayerProvider* );
	/* sbox/media/videoplayerprovider.cpp:274 */
	virtual void OnRepeated(CVideoPlayerProvider* );
	/* sbox/media/videoplayerprovider.cpp:279 */
	virtual bool IsPlayingAudio(CVideoPlayerProvider* );
	/* sbox/media/videoplayerprovider.h:30 */
	HRenderTexture GetTexture(CVideoPlayerProvider* );
private:
	/* sbox/media/videoplayerprovider.cpp:105 */
	bool UpdateTextureDimensions(CVideoPlayerProvider* , uint, uint);
	/* sbox/media/videoplayerprovider.cpp:156 */
	void UpdateTextureData(CVideoPlayerProvider* , IRenderContext* , void* , uint, uint, uint, HRenderTexture);
	CVideoPlayer * m_pPlayer; /* 8 8 */
	uint m_nWidth; /* 16 4 */
	uint m_nHeight; /* 20 4 */
	HRenderTextureStrong m_hTextureRGB; /* 24 8 */
	HRenderTextureStrong m_hTextureY; /* 32 8 */
	HRenderTextureStrong m_hTextureU; /* 40 8 */
	HRenderTextureStrong m_hTextureV; /* 48 8 */
	HRenderTextureStrong m_hTextureAlpha; /* 56 8 */
	HRenderTextureStrong m_hTextureRGBASrc; /* 64 8 */
	uint8 * m_pData; /* 72 8 */
	CAudioStreamManaged * m_pAudioStream; /* 80 8 */
	void CVideoPlayerProvider(class CVideoPlayerProvider *, const class CVideoPlayerProvider  &); /* linkage=_ZN20CVideoPlayerProviderC4ERKS_ */
	void CVideoPlayerProvider(class CVideoPlayerProvider *, class CVideoPlayer *); /* linkage=_ZN20CVideoPlayerProviderC4EP12CVideoPlayer */
	virtual void ~CVideoPlayerProvider(class CVideoPlayerProvider *); /* linkage=_ZN20CVideoPlayerProviderD4Ev */
	/* <203254f> sbox/media/videoplayerprovider.cpp:52 */
	virtual bool PresentRGBATexture(class CVideoPlayerProvider *, uint, uint, void *, uint); /* linkage=_ZN20CVideoPlayerProvider18PresentRGBATextureEjjPvj */
	/* <203a719> sbox/media/videoplayerprovider.cpp:172 */
	virtual bool PresentYUV420Texture(class CVideoPlayerProvider *, uint, uint, void *, void *, void *, uint, uint, uint, bool, bool, void *, uint); /* linkage=_ZN20CVideoPlayerProvider20PresentYUV420TextureEjjPvS0_S0_jjjbbS0_j */
	virtual bool InitAudioOutput(class CVideoPlayerProvider *, int, int); /* linkage=_ZN20CVideoPlayerProvider15InitAudioOutputEii */
	/* <2031aac> sbox/media/videoplayerprovider.cpp:248 */
	virtual void FreeAudioOutput(class CVideoPlayerProvider *); /* linkage=_ZN20CVideoPlayerProvider15FreeAudioOutputEv */
	/* <2031aea> sbox/media/videoplayerprovider.cpp:259 */
	virtual bool WantsTextureData(class CVideoPlayerProvider *); /* linkage=_ZN20CVideoPlayerProvider16WantsTextureDataEv */
	virtual void OnLoaded(class CVideoPlayerProvider *); /* linkage=_ZN20CVideoPlayerProvider8OnLoadedEv */
	virtual void OnFinished(class CVideoPlayerProvider *); /* linkage=_ZN20CVideoPlayerProvider10OnFinishedEv */
	virtual void OnRepeated(class CVideoPlayerProvider *); /* linkage=_ZN20CVideoPlayerProvider10OnRepeatedEv */
	virtual bool IsPlayingAudio(class CVideoPlayerProvider *); /* linkage=_ZN20CVideoPlayerProvider14IsPlayingAudioEv */
	HRenderTexture GetTexture(class CVideoPlayerProvider *); /* linkage=_ZN20CVideoPlayerProvider10GetTextureEv */
	/* <20324f6> sbox/media/videoplayerprovider.cpp:105 */
	bool UpdateTextureDimensions(class CVideoPlayerProvider *, uint, uint); /* linkage=_ZN20CVideoPlayerProvider23UpdateTextureDimensionsEjj */
	void UpdateTextureData(class CVideoPlayerProvider *, class IRenderContext *, void *, uint, uint, uint, HRenderTexture); /* linkage=_ZN20CVideoPlayerProvider17UpdateTextureDataEP14IRenderContextPvjjj11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
};

// <01FA7668> sbox/media/videoplayerprovider.h:17
void CVideoPlayerProvider::CVideoPlayerProvider(CVideoPlayer* pPlayer)
{
} /* size: 0 */

// <01FA764C> sbox/media/videoplayerprovider.h:18
void CVideoPlayerProvider::~CVideoPlayerProvider()
{
} /* size: 0 */

// <01337987> sbox/media/videoplayerprovider.h:30
inline void CVideoPlayerProvider::GetTexture()
{
} /* size: 0 */

