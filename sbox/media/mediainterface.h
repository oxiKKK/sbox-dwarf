
//
// sbox/media/mediainterface.h
//
//	referenced by: libengine2.so
//
//	functions: 12
//	classes: 4
//

// <01FACC31> sbox/media/mediainterface.h:9
void IVideoPlayer::IVideoPlayer()
{
} /* size: 0 */

// <01FACC15> sbox/media/mediainterface.h:9
inline void IVideoPlayer::IVideoPlayer()
{
} /* size: 0 */

// <01FA637F> sbox/media/mediainterface.h:9
// member functions: 48
// member variable: 1
// vtable entries: 21
// class size: 8
class IVideoPlayer {
	void IVideoPlayer(IVideoPlayer* , const IVideoPlayer& );
	void IVideoPlayer(IVideoPlayer* );
	int ()(void) * * _vptr.IVideoPlayer; /* 0 8 */
	/* sbox/media/mediainterface.h:13 */
	virtual void ~IVideoPlayer(IVideoPlayer* );
	/* sbox/media/mediainterface.h:18 */
	virtual bool Play(IVideoPlayer* , const char* , const char* );
	/* sbox/media/mediainterface.h:19 */
	virtual void Stop(IVideoPlayer* );
	/* sbox/media/mediainterface.h:20 */
	virtual void Pause(IVideoPlayer* );
	/* sbox/media/mediainterface.h:21 */
	virtual void Resume(IVideoPlayer* );
	/* sbox/media/mediainterface.h:22 */
	virtual void Seek(IVideoPlayer* , double);
	/* sbox/media/mediainterface.h:23 */
	virtual void Update(IVideoPlayer* );
	/* sbox/media/mediainterface.h:24 */
	virtual bool GetRepeat(IVideoPlayer* );
	/* sbox/media/mediainterface.h:25 */
	virtual void SetRepeat(IVideoPlayer* , bool);
	/* sbox/media/mediainterface.h:26 */
	virtual bool ReadAudio(IVideoPlayer* , uint8* , int);
	/* sbox/media/mediainterface.h:27 */
	virtual float GetDuration(IVideoPlayer* );
	/* sbox/media/mediainterface.h:28 */
	virtual float GetPlaybackTime(IVideoPlayer* );
	/* sbox/media/mediainterface.h:29 */
	virtual bool IsPaused(IVideoPlayer* );
	/* sbox/media/mediainterface.h:30 */
	virtual bool IsMuted(IVideoPlayer* );
	/* sbox/media/mediainterface.h:31 */
	virtual void SetMuted(IVideoPlayer* , bool);
	/* sbox/media/mediainterface.h:32 */
	virtual bool HasAudioStream(IVideoPlayer* );
	/* sbox/media/mediainterface.h:33 */
	virtual int GetWidth(IVideoPlayer* );
	/* sbox/media/mediainterface.h:34 */
	virtual int GetHeight(IVideoPlayer* );
	/* sbox/media/mediainterface.h:35 */
	virtual void SetVideoOnly(IVideoPlayer* );
	/* sbox/media/mediainterface.h:36 */
	virtual const char* GetMetadata(IVideoPlayer* , const char* );
	/* sbox/media/mediainterface.h:37 */
	virtual void GetSpectrum(IVideoPlayer* , CUtlVector<float, CUtlMemory<float, int> >* );
	/* sbox/media/mediainterface.h:38 */
	virtual float GetAmplitude(IVideoPlayer* );
	void IVideoPlayer(class IVideoPlayer *, const class IVideoPlayer  &); /* linkage=_ZN12IVideoPlayerC4ERKS_ */
	void IVideoPlayer(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayerC4Ev */
	virtual void ~IVideoPlayer(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayerD4Ev */
	virtual bool Play(class IVideoPlayer *, const char  *, const char  *); /* linkage=_ZN12IVideoPlayer4PlayEPKcS1_ */
	virtual void Stop(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer4StopEv */
	virtual void Pause(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer5PauseEv */
	virtual void Resume(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer6ResumeEv */
	virtual void Seek(class IVideoPlayer *, double); /* linkage=_ZN12IVideoPlayer4SeekEd */
	virtual void Update(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer6UpdateEv */
	virtual bool GetRepeat(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer9GetRepeatEv */
	virtual void SetRepeat(class IVideoPlayer *, bool); /* linkage=_ZN12IVideoPlayer9SetRepeatEb */
	virtual bool ReadAudio(class IVideoPlayer *, uint8 *, int); /* linkage=_ZN12IVideoPlayer9ReadAudioEPhi */
	virtual float GetDuration(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer11GetDurationEv */
	virtual float GetPlaybackTime(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer15GetPlaybackTimeEv */
	virtual bool IsPaused(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer8IsPausedEv */
	virtual bool IsMuted(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer7IsMutedEv */
	virtual void SetMuted(class IVideoPlayer *, bool); /* linkage=_ZN12IVideoPlayer8SetMutedEb */
	virtual bool HasAudioStream(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer14HasAudioStreamEv */
	virtual int GetWidth(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer8GetWidthEv */
	virtual int GetHeight(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer9GetHeightEv */
	virtual void SetVideoOnly(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer12SetVideoOnlyEv */
	virtual const char  * GetMetadata(class IVideoPlayer *, const char  *); /* linkage=_ZN12IVideoPlayer11GetMetadataEPKc */
	virtual void GetSpectrum(class IVideoPlayer *, class CUtlVector<float, CUtlMemory<float, int> > *); /* linkage=_ZN12IVideoPlayer11GetSpectrumEP10CUtlVectorIf10CUtlMemoryIfiEE */
	virtual float GetAmplitude(class IVideoPlayer *); /* linkage=_ZN12IVideoPlayer12GetAmplitudeEv */
};

// <01FB2F0C> sbox/media/mediainterface.h:13
void IVideoPlayer::~IVideoPlayer()
{
} /* size: 0 */

// <01FB2EDC> sbox/media/mediainterface.h:13
inline void IVideoPlayer::~IVideoPlayer()
{
} /* size: 0 */

// <0202E114> sbox/media/mediainterface.h:41
void IVideoPlayerProvider::IVideoPlayerProvider()
{
} /* size: 0 */

// <0202E0F8> sbox/media/mediainterface.h:41
inline void IVideoPlayerProvider::IVideoPlayerProvider()
{
} /* size: 0 */

// <02029420> sbox/media/mediainterface.h:41
// member functions: 26
// member variable: 1
// vtable entries: 9
// class size: 8
class IVideoPlayerProvider {
	void IVideoPlayerProvider(IVideoPlayerProvider* , IVideoPlayerProvider& );
	void IVideoPlayerProvider(IVideoPlayerProvider* , const IVideoPlayerProvider& );
	void IVideoPlayerProvider(IVideoPlayerProvider* );
	void ~IVideoPlayerProvider(IVideoPlayerProvider* );
	int ()(void) * * _vptr.IVideoPlayerProvider; /* 0 8 */
	/* sbox/media/mediainterface.h:47 */
	virtual bool PresentRGBATexture(IVideoPlayerProvider* , uint, uint, void* , uint);
	/* sbox/media/mediainterface.h:52 */
	virtual bool PresentYUV420Texture(IVideoPlayerProvider* , uint, uint, void* , void* , void* , uint, uint, uint, bool, bool, void* , uint);
	/* sbox/media/mediainterface.h:53 */
	virtual bool InitAudioOutput(IVideoPlayerProvider* , int, int);
	/* sbox/media/mediainterface.h:54 */
	virtual void FreeAudioOutput(IVideoPlayerProvider* );
	/* sbox/media/mediainterface.h:55 */
	virtual bool WantsTextureData(IVideoPlayerProvider* );
	/* sbox/media/mediainterface.h:56 */
	virtual void OnLoaded(IVideoPlayerProvider* );
	/* sbox/media/mediainterface.h:57 */
	virtual void OnFinished(IVideoPlayerProvider* );
	/* sbox/media/mediainterface.h:58 */
	virtual void OnRepeated(IVideoPlayerProvider* );
	/* sbox/media/mediainterface.h:59 */
	virtual bool IsPlayingAudio(IVideoPlayerProvider* );
	void IVideoPlayerProvider(class IVideoPlayerProvider *, class IVideoPlayerProvider &); /* linkage=_ZN20IVideoPlayerProviderC4EOS_ */
	void IVideoPlayerProvider(class IVideoPlayerProvider *, const class IVideoPlayerProvider  &); /* linkage=_ZN20IVideoPlayerProviderC4ERKS_ */
	void IVideoPlayerProvider(class IVideoPlayerProvider *); /* linkage=_ZN20IVideoPlayerProviderC4Ev */
	void ~IVideoPlayerProvider(class IVideoPlayerProvider *); /* linkage=_ZN20IVideoPlayerProviderD4Ev */
	virtual bool PresentRGBATexture(class IVideoPlayerProvider *, uint, uint, void *, uint); /* linkage=_ZN20IVideoPlayerProvider18PresentRGBATextureEjjPvj */
	virtual bool PresentYUV420Texture(class IVideoPlayerProvider *, uint, uint, void *, void *, void *, uint, uint, uint, bool, bool, void *, uint); /* linkage=_ZN20IVideoPlayerProvider20PresentYUV420TextureEjjPvS0_S0_jjjbbS0_j */
	virtual bool InitAudioOutput(class IVideoPlayerProvider *, int, int); /* linkage=_ZN20IVideoPlayerProvider15InitAudioOutputEii */
	virtual void FreeAudioOutput(class IVideoPlayerProvider *); /* linkage=_ZN20IVideoPlayerProvider15FreeAudioOutputEv */
	virtual bool WantsTextureData(class IVideoPlayerProvider *); /* linkage=_ZN20IVideoPlayerProvider16WantsTextureDataEv */
	virtual void OnLoaded(class IVideoPlayerProvider *); /* linkage=_ZN20IVideoPlayerProvider8OnLoadedEv */
	virtual void OnFinished(class IVideoPlayerProvider *); /* linkage=_ZN20IVideoPlayerProvider10OnFinishedEv */
	virtual void OnRepeated(class IVideoPlayerProvider *); /* linkage=_ZN20IVideoPlayerProvider10OnRepeatedEv */
	virtual bool IsPlayingAudio(class IVideoPlayerProvider *); /* linkage=_ZN20IVideoPlayerProvider14IsPlayingAudioEv */
};

// <012E3624> sbox/media/mediainterface.h:62
void IVideoRecorder::IVideoRecorder()
{
} /* size: 0 */

// <012E3608> sbox/media/mediainterface.h:62
inline void IVideoRecorder::IVideoRecorder()
{
} /* size: 0 */

// <01253B92> sbox/media/mediainterface.h:62
// member functions: 18
// member variable: 1
// vtable entries: 6
// class size: 8
class IVideoRecorder {
	void IVideoRecorder(IVideoRecorder* , const IVideoRecorder& );
	void IVideoRecorder(IVideoRecorder* );
	int ()(void) * * _vptr.IVideoRecorder; /* 0 8 */
	/* sbox/media/mediainterface.h:66 */
	virtual void ~IVideoRecorder(IVideoRecorder* );
	/* sbox/media/mediainterface.h:71 */
	virtual bool Initialize(IVideoRecorder* , const char* , int, int, int, int, int, int, const char* , const char* , int, const char* , bool);
	/* sbox/media/mediainterface.h:78 */
	virtual bool Stop(IVideoRecorder* );
	/* sbox/media/mediainterface.h:79 */
	virtual bool AddVideoFrame(IVideoRecorder* , const uint8* , int64);
	/* sbox/media/mediainterface.h:80 */
	virtual bool AddVideoFrame(IVideoRecorder* , const uint8* , ImageFormat, int, int, int, int64);
	/* sbox/media/mediainterface.h:81 */
	virtual bool AddAudioSamples(IVideoRecorder* , CAudioMixDeviceBuffers* );
	/* sbox/media/mediainterface.h:82 */
	virtual bool AddAudioSamples(IVideoRecorder* , const float* , const float* , int);
	void IVideoRecorder(class IVideoRecorder *, const class IVideoRecorder  &); /* linkage=_ZN14IVideoRecorderC4ERKS_ */
	void IVideoRecorder(class IVideoRecorder *); /* linkage=_ZN14IVideoRecorderC4Ev */
	virtual void ~IVideoRecorder(class IVideoRecorder *); /* linkage=_ZN14IVideoRecorderD4Ev */
	virtual bool Initialize(class IVideoRecorder *, const char  *, int, int, int, int, int, int, const char  *, const char  *, int, const char  *, bool); /* linkage=_ZN14IVideoRecorder10InitializeEPKciiiiiiS1_S1_iS1_b */
	virtual bool Stop(class IVideoRecorder *); /* linkage=_ZN14IVideoRecorder4StopEv */
	virtual bool AddVideoFrame(class IVideoRecorder *, const uint8  *, int64); /* linkage=_ZN14IVideoRecorder13AddVideoFrameEPKhx */
	virtual bool AddVideoFrame(class IVideoRecorder *, const uint8  *, enum ImageFormat, int, int, int, int64); /* linkage=_ZN14IVideoRecorder13AddVideoFrameEPKh11ImageFormatiiix */
	virtual bool AddAudioSamples(class IVideoRecorder *, class CAudioMixDeviceBuffers *); /* linkage=_ZN14IVideoRecorder15AddAudioSamplesEP22CAudioMixDeviceBuffers */
	virtual bool AddAudioSamples(class IVideoRecorder *, const float  *, const float  *, int); /* linkage=_ZN14IVideoRecorder15AddAudioSamplesEPKfS1_i */
};

// <01FDAC8F> sbox/media/mediainterface.h:66
void IVideoRecorder::~IVideoRecorder()
{
} /* size: 0 */

// <01FDAC5F> sbox/media/mediainterface.h:66
inline void IVideoRecorder::~IVideoRecorder()
{
} /* size: 0 */

// <01FE6ADF> sbox/media/mediainterface.h:85
void IVideoSystem::IVideoSystem()
{
} /* size: 0 */

// <01FE6AC3> sbox/media/mediainterface.h:85
inline void IVideoSystem::IVideoSystem()
{
} /* size: 0 */

// <01FE1375> sbox/media/mediainterface.h:85
// member functions: 8
// member variable: 1
// class size: 8
class IVideoSystem : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void IVideoSystem(IVideoSystem* , IVideoSystem& );
	void IVideoSystem(IVideoSystem* , const IVideoSystem& );
	void IVideoSystem(IVideoSystem* );
	void ~IVideoSystem(IVideoSystem* );
	void IVideoSystem(class IVideoSystem *, class IVideoSystem &); /* linkage=_ZN12IVideoSystemC4EOS_ */
	void IVideoSystem(class IVideoSystem *, const class IVideoSystem  &); /* linkage=_ZN12IVideoSystemC4ERKS_ */
	void IVideoSystem(class IVideoSystem *); /* linkage=_ZN12IVideoSystemC4Ev */
	void ~IVideoSystem(class IVideoSystem *); /* linkage=_ZN12IVideoSystemD4Ev */
};

