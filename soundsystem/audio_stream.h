
//
// soundsystem/audio_stream.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <02401B84> soundsystem/audio_stream.h:26
// member functions: 20
// member variables: 5
// class size: 24
class CAudioResampleBuffer {
private:
	SDL_AudioStream * m_pInputBuffer; /* 0 8 */
	int m_nInputChannels; /* 8 4 */
	int m_nOutputChannels; /* 12 4 */
	SDL_AudioFormat m_inputFormat; /* 16 4 */
	SDL_AudioFormat m_outputFormat; /* 20 4 */
	/* soundsystem/audio_stream.h:34 */
	uint BytesPerInputSample(CAudioResampleBuffer* );
	/* soundsystem/audio_stream.h:35 */
	uint BytesPerOutputSample(CAudioResampleBuffer* );
	/* soundsystem/audio_stream.h:38 */
	void CAudioResampleBuffer(CAudioResampleBuffer* , int, uint, int, uint);
	/* soundsystem/audio_stream.h:39 */
	void ~CAudioResampleBuffer(CAudioResampleBuffer* );
	/* soundsystem/audio_stream.h:42 */
	void WriteSampleFrames(CAudioResampleBuffer* , const int16* , uint);
	/* soundsystem/audio_stream.h:45 */
	uint SampleFramesAvailable(CAudioResampleBuffer* );
	/* soundsystem/audio_stream.h:46 */
	uint BytesAvailable(CAudioResampleBuffer* );
	/* soundsystem/audio_stream.h:49 */
	bool ReadSampleFrames(CAudioResampleBuffer* , int16* , uint);
	/* soundsystem/audio_stream.h:52 */
	void Flush(CAudioResampleBuffer* );
	/* soundsystem/audio_stream.h:55 */
	void Clear(CAudioResampleBuffer* );
	/* <240faad> soundsystem/audio_stream.cpp:11 */
	uint BytesPerInputSample(class CAudioResampleBuffer *); /* linkage=_ZN20CAudioResampleBuffer19BytesPerInputSampleEv */
	uint BytesPerOutputSample(class CAudioResampleBuffer *); /* linkage=_ZN20CAudioResampleBuffer20BytesPerOutputSampleEv */
	void CAudioResampleBuffer(class CAudioResampleBuffer *, int, uint, int, uint); /* linkage=_ZN20CAudioResampleBufferC4Eijij */
	void ~CAudioResampleBuffer(class CAudioResampleBuffer *); /* linkage=_ZN20CAudioResampleBufferD4Ev */
	/* <240fad7> soundsystem/audio_stream.cpp:39 */
	void WriteSampleFrames(class CAudioResampleBuffer *, const int16  *, uint); /* linkage=_ZN20CAudioResampleBuffer17WriteSampleFramesEPKsj */
	/* <240fb6b> soundsystem/audio_stream.cpp:45 */
	uint SampleFramesAvailable(class CAudioResampleBuffer *); /* linkage=_ZN20CAudioResampleBuffer21SampleFramesAvailableEv */
	uint BytesAvailable(class CAudioResampleBuffer *); /* linkage=_ZN20CAudioResampleBuffer14BytesAvailableEv */
	/* <240fbeb> soundsystem/audio_stream.cpp:57 */
	bool ReadSampleFrames(class CAudioResampleBuffer *, int16 *, uint); /* linkage=_ZN20CAudioResampleBuffer16ReadSampleFramesEPsj */
	/* <240fca0> soundsystem/audio_stream.cpp:65 */
	void Flush(class CAudioResampleBuffer *); /* linkage=_ZN20CAudioResampleBuffer5FlushEv */
	/* <240fcdd> soundsystem/audio_stream.cpp:70 */
	void Clear(class CAudioResampleBuffer *); /* linkage=_ZN20CAudioResampleBuffer5ClearEv */
};

// <02425763> soundsystem/audio_stream.h:38
void CAudioResampleBuffer::CAudioResampleBuffer(int nInputChannels, uint nInputSampleRate, int nOutputChannels, uint nOutputSampleRate)
{
} /* size: 0 */

// <0242565E> soundsystem/audio_stream.h:39
void CAudioResampleBuffer::~CAudioResampleBuffer()
{
} /* size: 0 */

