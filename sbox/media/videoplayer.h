
//
// sbox/media/videoplayer.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <01FA5D7D> sbox/media/videoplayer.h:14
// member functions: 70
// member variables: 9
// vtable entries: 22
// class size: 128
class CVideoPlayer : public IVideoPlayer, public IAudioOutputStreamCallback {
public:
	/* class IVideoPlayer <ancestor>; */ /* 0 8 */
	/* class IAudioOutputStreamCallback <ancestor>; */ /* 8 8 */
	void CVideoPlayer(CVideoPlayer* , const CVideoPlayer& );
	/* sbox/media/videoplayer.cpp:2163 */
	void CVideoPlayer(CVideoPlayer* , uint);
	/* sbox/media/videoplayer.cpp:2174 */
	virtual void ~CVideoPlayer(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2179 */
	virtual bool Play(CVideoPlayer* , const char* , const char* );
	/* sbox/media/videoplayer.cpp:2200 */
	virtual void Stop(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2217 */
	virtual void Pause(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2223 */
	virtual void Resume(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2240 */
	virtual void Seek(CVideoPlayer* , double);
	/* sbox/media/videoplayer.cpp:2229 */
	virtual void Update(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2235 */
	virtual bool GetRepeat(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2254 */
	virtual void SetRepeat(CVideoPlayer* , bool);
	/* sbox/media/videoplayer.cpp:2246 */
	virtual bool ReadAudio(CVideoPlayer* , uint8* , int);
	/* sbox/media/videoplayer.cpp:2261 */
	virtual float GetDuration(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2266 */
	virtual float GetPlaybackTime(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2272 */
	virtual bool IsPaused(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2287 */
	virtual bool IsMuted(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2292 */
	virtual void SetMuted(CVideoPlayer* , bool);
	/* sbox/media/videoplayer.cpp:2309 */
	virtual bool HasAudioStream(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2277 */
	virtual int GetWidth(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2282 */
	virtual int GetHeight(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2299 */
	virtual void SetVideoOnly(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2304 */
	virtual const char* GetMetadata(CVideoPlayer* , const char* );
	/* sbox/media/videoplayer.cpp:2314 */
	virtual void GetSpectrum(CVideoPlayer* , CUtlVector<float, CUtlMemory<float, int> >* );
	/* sbox/media/videoplayer.cpp:2325 */
	virtual float GetAmplitude(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2335 */
	void OnTextureCreated(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2340 */
	void OnTextureData(CVideoPlayer* , int, int, uint8* );
	/* sbox/media/videoplayer.cpp:2345 */
	void OnInitAudio(CVideoPlayer* , int, int);
	/* sbox/media/videoplayer.cpp:2350 */
	void OnFreeAudio(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2355 */
	void OnLoaded(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2360 */
	void OnFinished(CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2365 */
	void OnRepeated(CVideoPlayer* );
	/* sbox/media/videoplayer.h:52 */
	HRenderTexture GetTexture(CVideoPlayer* );
	/* sbox/media/videoplayer.h:57 */
	CAudioStreamManaged* GetAudioStream(CVideoPlayer* );
	/* sbox/media/videoplayer.h:62 */
	bool WantsTextureData(const CVideoPlayer* );
	/* sbox/media/videoplayer.cpp:2370 */
	virtual bool UpdateMixerData(CVideoPlayer* , uint8* , int);
private:
	VideoPlayer m_managedObject; /* 16 4 */
	CVideoPlayerProvider m_provider; /* 24 0 */
	VideoState * m_pState; /* 112 8 */
	CInterlockedInt m_stopGuard __attribute__((__aligned__(4))); /* 120 4 */
	bool m_bRepeat; /* 124 1 */
	bool m_bVideoOnly; /* 125 1 */
	bool m_bMuted; /* 126 1 */
	void CVideoPlayer(class CVideoPlayer *, uint); /* linkage=_ZN12CVideoPlayerC4Ej */
	class CAudioStreamManaged * GetAudioStream(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer14GetAudioStreamEv */
	HRenderTexture GetTexture(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer10GetTextureEv */
	void CVideoPlayer(class CVideoPlayer *, const class CVideoPlayer  &); /* linkage=_ZN12CVideoPlayerC4ERKS_ */
	virtual void ~CVideoPlayer(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayerD4Ev */
	virtual bool Play(class CVideoPlayer *, const char  *, const char  *); /* linkage=_ZN12CVideoPlayer4PlayEPKcS1_ */
	virtual void Stop(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer4StopEv */
	virtual void Pause(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer5PauseEv */
	virtual void Resume(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer6ResumeEv */
	virtual void Seek(class CVideoPlayer *, double); /* linkage=_ZN12CVideoPlayer4SeekEd */
	virtual void Update(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer6UpdateEv */
	virtual bool GetRepeat(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer9GetRepeatEv */
	virtual void SetRepeat(class CVideoPlayer *, bool); /* linkage=_ZN12CVideoPlayer9SetRepeatEb */
	/* <1fb378d> sbox/media/videoplayer.cpp:2246 */
	virtual bool ReadAudio(class CVideoPlayer *, uint8 *, int); /* linkage=_ZN12CVideoPlayer9ReadAudioEPhi */
	virtual float GetDuration(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer11GetDurationEv */
	virtual float GetPlaybackTime(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer15GetPlaybackTimeEv */
	virtual bool IsPaused(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer8IsPausedEv */
	virtual bool IsMuted(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer7IsMutedEv */
	virtual void SetMuted(class CVideoPlayer *, bool); /* linkage=_ZN12CVideoPlayer8SetMutedEb */
	virtual bool HasAudioStream(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer14HasAudioStreamEv */
	virtual int GetWidth(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer8GetWidthEv */
	virtual int GetHeight(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer9GetHeightEv */
	virtual void SetVideoOnly(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer12SetVideoOnlyEv */
	virtual const char  * GetMetadata(class CVideoPlayer *, const char  *); /* linkage=_ZN12CVideoPlayer11GetMetadataEPKc */
	virtual void GetSpectrum(class CVideoPlayer *, class CUtlVector<float, CUtlMemory<float, int> > *); /* linkage=_ZN12CVideoPlayer11GetSpectrumEP10CUtlVectorIf10CUtlMemoryIfiEE */
	virtual float GetAmplitude(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer12GetAmplitudeEv */
	void OnTextureCreated(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer16OnTextureCreatedEv */
	void OnTextureData(class CVideoPlayer *, int, int, uint8 *); /* linkage=_ZN12CVideoPlayer13OnTextureDataEiiPh */
	void OnInitAudio(class CVideoPlayer *, int, int); /* linkage=_ZN12CVideoPlayer11OnInitAudioEii */
	void OnFreeAudio(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer11OnFreeAudioEv */
	void OnLoaded(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer8OnLoadedEv */
	void OnFinished(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer10OnFinishedEv */
	void OnRepeated(class CVideoPlayer *); /* linkage=_ZN12CVideoPlayer10OnRepeatedEv */
	bool WantsTextureData(const class CVideoPlayer  *); /* linkage=_ZNK12CVideoPlayer16WantsTextureDataEv */
	/* <1fb37f4> sbox/media/videoplayer.cpp:2370 */
	virtual bool UpdateMixerData(class CVideoPlayer *, uint8 *, int); /* linkage=_ZN12CVideoPlayer15UpdateMixerDataEPhi */
} __attribute__((__aligned__(8)));

// <01259C42> sbox/media/videoplayer.h:18
void CVideoPlayer::CVideoPlayer(uint managedObject)
{
} /* size: 0 */

// <01337939> sbox/media/videoplayer.h:52
inline void CVideoPlayer::GetTexture()
{
} /* size: 0 */

// <01337920> sbox/media/videoplayer.h:57
inline void CVideoPlayer::GetAudioStream()
{
} /* size: 0 */

// <0202E88E> sbox/media/videoplayer.h:62
inline void CVideoPlayer::WantsTextureData()
{
} /* size: 0 */

