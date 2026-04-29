
//
// thirdparty/renderdoc/renderdoc_app.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	struct: 1
//

// <003D3AAA> ../thirdparty/renderdoc/renderdoc_app.h:592
// member variables: 26
// struct size: 208
struct RENDERDOC_API_1_5_0 {
	/* ../thirdparty/renderdoc/renderdoc_app.h:611 */
	union {
		pRENDERDOC_Shutdown Shutdown; /* 0 8 */
		pRENDERDOC_RemoveHooks RemoveHooks; /* 0 8 */
	};
	/* ../thirdparty/renderdoc/renderdoc_app.h:620 */
	union {
		pRENDERDOC_SetLogFilePathTemplate SetLogFilePathTemplate; /* 0 8 */
		pRENDERDOC_SetCaptureFilePathTemplate SetCaptureFilePathTemplate; /* 0 8 */
	};
	/* ../thirdparty/renderdoc/renderdoc_app.h:627 */
	union {
		pRENDERDOC_GetLogFilePathTemplate GetLogFilePathTemplate; /* 0 8 */
		pRENDERDOC_GetCaptureFilePathTemplate GetCaptureFilePathTemplate; /* 0 8 */
	};
	/* ../thirdparty/renderdoc/renderdoc_app.h:642 */
	union {
		pRENDERDOC_IsRemoteAccessConnected IsRemoteAccessConnected; /* 0 8 */
		pRENDERDOC_IsTargetControlConnected IsTargetControlConnected; /* 0 8 */
	};
	pRENDERDOC_GetAPIVersion GetAPIVersion; /* 0 8 */
	pRENDERDOC_SetCaptureOptionU32 SetCaptureOptionU32; /* 8 8 */
	pRENDERDOC_SetCaptureOptionF32 SetCaptureOptionF32; /* 16 8 */
	pRENDERDOC_GetCaptureOptionU32 GetCaptureOptionU32; /* 24 8 */
	pRENDERDOC_GetCaptureOptionF32 GetCaptureOptionF32; /* 32 8 */
	pRENDERDOC_SetFocusToggleKeys SetFocusToggleKeys; /* 40 8 */
	pRENDERDOC_SetCaptureKeys SetCaptureKeys; /* 48 8 */
	pRENDERDOC_GetOverlayBits GetOverlayBits; /* 56 8 */
	pRENDERDOC_MaskOverlayBits MaskOverlayBits; /* 64 8 */
	union {
		pRENDERDOC_Shutdown Shutdown; /* 72 8 */
		pRENDERDOC_RemoveHooks RemoveHooks; /* 72 8 */
	}; /* 72 8 */
	pRENDERDOC_UnloadCrashHandler UnloadCrashHandler; /* 80 8 */
	union {
		pRENDERDOC_SetLogFilePathTemplate SetLogFilePathTemplate; /* 88 8 */
		pRENDERDOC_SetCaptureFilePathTemplate SetCaptureFilePathTemplate; /* 88 8 */
	}; /* 88 8 */
	union {
		pRENDERDOC_GetLogFilePathTemplate GetLogFilePathTemplate; /* 96 8 */
		pRENDERDOC_GetCaptureFilePathTemplate GetCaptureFilePathTemplate; /* 96 8 */
	}; /* 96 8 */
	pRENDERDOC_GetNumCaptures GetNumCaptures; /* 104 8 */
	pRENDERDOC_GetCapture GetCapture; /* 112 8 */
	pRENDERDOC_TriggerCapture TriggerCapture; /* 120 8 */
	union {
		pRENDERDOC_IsRemoteAccessConnected IsRemoteAccessConnected; /* 128 8 */
		pRENDERDOC_IsTargetControlConnected IsTargetControlConnected; /* 128 8 */
	}; /* 128 8 */
	pRENDERDOC_LaunchReplayUI LaunchReplayUI; /* 136 8 */
	pRENDERDOC_SetActiveWindow SetActiveWindow; /* 144 8 */
	pRENDERDOC_StartFrameCapture StartFrameCapture; /* 152 8 */
	pRENDERDOC_IsFrameCapturing IsFrameCapturing; /* 160 8 */
	pRENDERDOC_EndFrameCapture EndFrameCapture; /* 168 8 */
	pRENDERDOC_TriggerMultiFrameCapture TriggerMultiFrameCapture; /* 176 8 */
	pRENDERDOC_SetCaptureFileComments SetCaptureFileComments; /* 184 8 */
	pRENDERDOC_DiscardFrameCapture DiscardFrameCapture; /* 192 8 */
	pRENDERDOC_ShowReplayUI ShowReplayUI; /* 200 8 */
};

