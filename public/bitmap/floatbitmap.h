
//
// public/bitmap/floatbitmap.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 119
//	classes: 3
//	structs: 3
//

// <008660B5> ../public/bitmap/floatbitmap.h:20
// member functions: 3
// member variables: 4
// struct size: 16
struct PixRGBAF {
	/* ../public/bitmap/floatbitmap.h:22 */
	void PixRGBAF(PixRGBAF* );
	/* ../public/bitmap/floatbitmap.h:23 */
	void PixRGBAF(PixRGBAF* , const Vector4D& );
	/* ../public/bitmap/floatbitmap.h:27 */
	void PixRGBAF(PixRGBAF* , float, float, float, float);
	float Red; /* 0 4 */
	float Green; /* 4 4 */
	float Blue; /* 8 4 */
	float Alpha; /* 12 4 */
};

// <047029EB> ../public/bitmap/floatbitmap.h:22
void PixRGBAF::PixRGBAF()
{
} /* size: 0 */

// <047029D2> ../public/bitmap/floatbitmap.h:22
inline void PixRGBAF::PixRGBAF()
{
} /* size: 0 */

// <04679C75> ../public/bitmap/floatbitmap.h:37
// member variables: 4
// struct size: 4
struct PixRGBA8 {
	unsigned char Red; /* 0 1 */
	unsigned char Green; /* 1 1 */
	unsigned char Blue; /* 2 1 */
	unsigned char Alpha; /* 3 1 */
};

// <046911AE> ../public/bitmap/floatbitmap.h:55
// variable: 1
inline PixRGBA8 PixRGBAF_to_8(const PixRGBAF& f)
{
	PixRGBA8 x; // 60
} /* size: 0, variables: 1 */

// <008661A6> ../public/bitmap/floatbitmap.h:106
// member variables: 3
// struct size: 12
struct DownsampleInfo_t {
	int m_nFlags; /* 0 4 */
	float m_flAlphaThreshhold; /* 4 4 */
	float m_flAlphaHiFreqThreshhold; /* 8 4 */
};

// <0472058F> ../public/bitmap/floatbitmap.h:150
void FloatBitMap_t::~FloatBitMap_t()
{
} /* size: 0 */

// <04720572> ../public/bitmap/floatbitmap.h:150
inline void FloatBitMap_t::~FloatBitMap_t()
{
} /* size: 0 */

// <00866242> ../public/bitmap/floatbitmap.h:150
// member functions: 276
// member variable: 1
// static member variable: 1
// class size: 1,464
class FloatBitMap_t : public CSOAContainer {
public:
	/* class CSOAContainer <ancestor>; */ /* 0 1464 */
	/* ../public/bitmap/floatbitmap.h:155 */
	void FloatBitMap_t(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:156 */
	void FloatBitMap_t(FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:157 */
	void FloatBitMap_t(FloatBitMap_t* , const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:158 */
	void FloatBitMap_t(FloatBitMap_t* , const FloatBitMap_t& );
	/* ../public/bitmap/floatbitmap.h:159 */
	FloatBitMap_t& operator=(FloatBitMap_t* , const FloatBitMap_t& );
	/* ../public/bitmap/floatbitmap.h:163 */
	void FloatBitMap_t(FloatBitMap_t* , const Bitmap_t& );
	/* ../public/bitmap/floatbitmap.h:166 */
	void EncodeTo(FloatBitMap_t* , Bitmap_t* , ImageFormat, int, uint32);
	/* ../public/bitmap/floatbitmap.h:170 */
	void Init(FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:172 */
	void Init(FloatBitMap_t* , int, int, int, const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:174 */
	void Shutdown(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:178 */
	int GetAttributeMask(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:181 */
	bool HasAttributeData(const FloatBitMap_t* , FBMAttribute_t);
	/* ../public/bitmap/floatbitmap.h:184 */
	int ComputeValidAttributeList(const FloatBitMap_t* , int* );
	/* ../public/bitmap/floatbitmap.h:187 */
	bool HasData(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:194 */
	bool LoadFromFile(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:196 */
	bool LoadFromPFM(FloatBitMap_t* , const char* );
	/* ../public/bitmap/floatbitmap.h:197 */
	bool LoadFromPSD(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:198 */
	bool LoadFromTIF(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:199 */
	bool LoadFromPNG(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:200 */
	bool LoadFromJPG(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:201 */
	bool LoadFromEXR(FloatBitMap_t* , const char* );
	/* ../public/bitmap/floatbitmap.h:202 */
	bool LoadFromInMemoryEXR(FloatBitMap_t* , const void* , size_t);
	/* ../public/bitmap/floatbitmap.h:203 */
	bool LoadFromInMemoryTGA(FloatBitMap_t* , const void* , size_t);
	/* ../public/bitmap/floatbitmap.h:204 */
	bool LoadFromInMemoryPSD(FloatBitMap_t* , const void* , size_t);
	/* ../public/bitmap/floatbitmap.h:205 */
	bool LoadFromInMemoryTIF(FloatBitMap_t* , const void* , size_t);
	/* ../public/bitmap/floatbitmap.h:207 */
	void InitializeWithRandomPixelsFromAnotherFloatBM(FloatBitMap_t* , const FloatBitMap_t& );
	/* ../public/bitmap/floatbitmap.h:208 */
	void Clear(FloatBitMap_t* , float, float, float, float);
	/* ../public/bitmap/floatbitmap.h:209 */
	void LoadFromBuffer(FloatBitMap_t* , const void* , size_t, ImageFormat, FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:210 */
	void LoadFromFloatBitmap(FloatBitMap_t* , const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:211 */
	void CopyFloatBitmap(FloatBitMap_t* , const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:212 */
	void CopyFloatBitmapSubrect(FloatBitMap_t* , const FloatBitMap_t* , int, int, int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:215 */
	void SetChannel(FloatBitMap_t* , int, float);
	/* ../public/bitmap/floatbitmap.h:218 */
	void Rotate90DegreesCW(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:219 */
	void Rotate90DegreesCCW(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:220 */
	void Rotate180Degrees(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:221 */
	void MirrorHorizontally(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:222 */
	void MirrorVertically(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:227 */
	void FloatBitMap_t(FloatBitMap_t* , const char* , bool);
	/* ../public/bitmap/floatbitmap.h:228 */
	bool WriteTGAFile(const FloatBitMap_t* , const char* );
	/* ../public/bitmap/floatbitmap.h:229 */
	bool WritePFM(FloatBitMap_t* , const char* );
	/* ../public/bitmap/floatbitmap.h:230 */
	bool WriteEXR(FloatBitMap_t* , const char* , int);
	/* ../public/bitmap/floatbitmap.h:233 */
	bool WriteToBuffer(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool, uint32);
	/* ../public/bitmap/floatbitmap.h:234 */
	bool WriteToBufferDXT(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:235 */
	bool WriteToBufferRuntimeDXT(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:236 */
	bool WriteToBufferBC6H(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:237 */
	bool WriteToBufferBC7(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:238 */
	bool WriteToBufferETC(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:239 */
	bool WriteInMemoryEXR(const FloatBitMap_t* , CUtlBuffer& , int);
	/* ../public/bitmap/floatbitmap.h:242 */
	const float& ConstantValue(const FloatBitMap_t* , int);
	/* ../public/bitmap/floatbitmap.h:246 */
	float& Pixel(const FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:248 */
	float& PixelWrapped(const FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:249 */
	float& PixelClamped(const FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:250 */
	float& Alpha(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:252 */
	float& Pixel(const FloatBitMap_t* , const IntVector2D& , int);
	/* ../public/bitmap/floatbitmap.h:253 */
	float& Pixel(const FloatBitMap_t* , const IntVector3D& , int);
	/* ../public/bitmap/floatbitmap.h:257 */
	int PixelIndex(const FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:265 */
	Vector RGBPixelAsVector(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:268 */
	Vector4D RGBAPixelAsVector4D(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:271 */
	Vector RGBPixelAsVectorWrapped(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:274 */
	Vector4D RGBAPixelAsVector4DWrapped(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:277 */
	void SetRGBPixelFromVector(FloatBitMap_t* , const Vector& , int, int, int);
	/* ../public/bitmap/floatbitmap.h:280 */
	void SetRGBAPixelFromVector(FloatBitMap_t* , const Vector4D& , int, int, int);
	/* ../public/bitmap/floatbitmap.h:282 */
	PixRGBAF PixelRGBAF(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:283 */
	void WritePixelRGBAF(const FloatBitMap_t* , int, int, int, PixRGBAF);
	/* ../public/bitmap/floatbitmap.h:284 */
	void WritePixel(FloatBitMap_t* , int, int, int, int, float);
	/* ../public/bitmap/floatbitmap.h:288 */
	void ConvertGammaToLinear(FloatBitMap_t* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:289 */
	void ConvertLinearToGamma(FloatBitMap_t* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:293 */
	CSOAAttributeReference Red(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:294 */
	CSOAAttributeReference Green(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:295 */
	CSOAAttributeReference Blue(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:296 */
	CSOAAttributeReference Alpha(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:298 */
	CSOAConstAttributeReference Red(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:299 */
	CSOAConstAttributeReference Green(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:300 */
	CSOAConstAttributeReference Blue(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:301 */
	CSOAConstAttributeReference Alpha(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:306 */
	void SmartPaste(FloatBitMap_t* , const FloatBitMap_t& , int, int, uint32);
	/* ../public/bitmap/floatbitmap.h:312 */
	void Poisson(FloatBitMap_t* , FloatBitMap_t** , int, uint32);
	/* ../public/bitmap/floatbitmap.h:318 */
	void MakeTileable(FloatBitMap_t* , int);
	/* ../public/bitmap/floatbitmap.h:323 */
	void Resize2D(FloatBitMap_t* , int, int, bool);
	/* ../public/bitmap/floatbitmap.h:324 */
	void ResizeWeightedAlpha(FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:327 */
	void GetAlphaBounds(const FloatBitMap_t* , int& , int& , int& , int& , float, int);
	/* ../public/bitmap/floatbitmap.h:329 */
	void QuarterSize(FloatBitMap_t* , FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:330 */
	void QuarterSizeBlocky(FloatBitMap_t* , FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:331 */
	void QuarterSizeWithGaussian(FloatBitMap_t* , FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:334 */
	void DownsampleNiceFiltered(FloatBitMap_t* , const DownsampleInfo_t& , FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:337 */
	void RaiseToPower(FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:338 */
	void ScaleGradients(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:339 */
	void Logize(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:340 */
	void UnLogize(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:346 */
	void CompressTo8Bits(FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:348 */
	void Uncompress(FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:350 */
	Vector4D AverageColor4D(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:351 */
	Vector AverageColor(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:352 */
	float BrightestColor(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:354 */
	void NormalMapToDXT5NM(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:357 */
	void ScaleRGB(FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:360 */
	void ComputeVertexPositionsAndNormals(const FloatBitMap_t* , float, Vector** , Vector** );
	/* ../public/bitmap/floatbitmap.h:366 */
	FloatBitMap_t* ComputeSelfShadowedBumpmapFromHeightInAlphaChannel(const FloatBitMap_t* , float, float, const Vector* , int, int, uint32);
	/* ../public/bitmap/floatbitmap.h:376 */
	FloatBitMap_t* ComputeBumpmapFromHeightInAlphaChannel(const FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:382 */
	void TileableBilateralFilter(FloatBitMap_t* , int, float);
	/* ../public/bitmap/floatbitmap.h:389 */
	void EstimateDerivatives(FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:394 */
	void DrawLine(FloatBitMap_t* , int, int, int, int, int, float);
	/* ../public/bitmap/floatbitmap.h:397 */
	void DilateColorsIntoTransparentParts(FloatBitMap_t* , int);
	/* ../public/bitmap/floatbitmap.h:401 */
	void SetThreadPool(IThreadPool* );
protected:
	/* ../public/bitmap/floatbitmap.h:405 */
	bool WriteInMemoryEXRFast(const FloatBitMap_t* , CUtlBuffer& );
	/* ../public/bitmap/floatbitmap.h:407 */
	void TileableBilateralFilterPartial(FloatBitMap_t* , int, int, int, float, FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:409 */
	void QuarterSize2D(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:410 */
	void QuarterSize3D(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:411 */
	void QuarterSizeBlocky2D(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:412 */
	void QuarterSizeBlocky3D(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:414 */
	void QuarterSize2D_NP2(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:417 */
	void PackToRGBA8888_t(const FloatBitMap_t* , RGBA8888_t* , FBMAttribute_t, FBMAttribute_t, FBMAttribute_t, FBMAttribute_t);
	/* ../public/bitmap/floatbitmap.h:420 */
	void LoadFromRGBA8888BufferGammaToLinear(FloatBitMap_t* , const RGBA8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:449 */
	void WriteToBufferRGBA16161616(const FloatBitMap_t* , RGBA16161616_t* , int);
	/* ../public/bitmap/floatbitmap.h:450 */
	void WriteToBufferRG1616(const FloatBitMap_t* , RG1616_t* , int);
	/* ../public/bitmap/floatbitmap.h:451 */
	void WriteToBufferR16(const FloatBitMap_t* , R16_t* , int);
	/* ../public/bitmap/floatbitmap.h:453 */
	int CoordWrap(int, int);
	static class IThreadPool * sm_pFBMThreadPool; /* 0 0 */
	void ~FloatBitMap_t(FloatBitMap_t* );
	void FloatBitMap_t(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_tC4Ev */
	void FloatBitMap_t(class FloatBitMap_t *, int, int, int, int); /* linkage=_ZN13FloatBitMap_tC4Eiiii */
	void FloatBitMap_t(class FloatBitMap_t *, const class FloatBitMap_t  *); /* linkage=_ZN13FloatBitMap_tC4EPKS_ */
	void FloatBitMap_t(class FloatBitMap_t *, const class FloatBitMap_t  &); /* linkage=_ZN13FloatBitMap_tC4ERKS_ */
	class FloatBitMap_t & operator=(class FloatBitMap_t *, const class FloatBitMap_t  &); /* linkage=_ZN13FloatBitMap_taSERKS_ */
	void FloatBitMap_t(class FloatBitMap_t *, const class Bitmap_t  &); /* linkage=_ZN13FloatBitMap_tC4ERK8Bitmap_t */
	void EncodeTo(class FloatBitMap_t *, class Bitmap_t *, enum ImageFormat, int, uint32); /* linkage=_ZN13FloatBitMap_t8EncodeToEP8Bitmap_t11ImageFormatij */
	void Init(class FloatBitMap_t *, int, int, int, int); /* linkage=_ZN13FloatBitMap_t4InitEiiii */
	void Init(class FloatBitMap_t *, int, int, int, const class FloatBitMap_t  *); /* linkage=_ZN13FloatBitMap_t4InitEiiiPKS_ */
	void Shutdown(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t8ShutdownEv */
	int GetAttributeMask(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t16GetAttributeMaskEv */
	bool HasAttributeData(const class FloatBitMap_t  *, enum FBMAttribute_t); /* linkage=_ZNK13FloatBitMap_t16HasAttributeDataE14FBMAttribute_t */
	int ComputeValidAttributeList(const class FloatBitMap_t  *, int *); /* linkage=_ZNK13FloatBitMap_t25ComputeValidAttributeListEPi */
	bool HasData(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t7HasDataEv */
	bool LoadFromFile(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t12LoadFromFileEPKc14FBMGammaType_t */
	bool LoadFromPFM(class FloatBitMap_t *, const char  *); /* linkage=_ZN13FloatBitMap_t11LoadFromPFMEPKc */
	bool LoadFromPSD(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t11LoadFromPSDEPKc14FBMGammaType_t */
	/* <4704b14> bitmap/floatbitmap.cpp:1427 */
	bool LoadFromTIF(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t11LoadFromTIFEPKc14FBMGammaType_t */
	/* <4704b7a> bitmap/floatbitmap.cpp:1465 */
	bool LoadFromPNG(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t11LoadFromPNGEPKc14FBMGammaType_t */
	/* <4704be0> bitmap/floatbitmap.cpp:1501 */
	bool LoadFromJPG(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t11LoadFromJPGEPKc14FBMGammaType_t */
	bool LoadFromEXR(class FloatBitMap_t *, const char  *); /* linkage=_ZN13FloatBitMap_t11LoadFromEXREPKc */
	bool LoadFromInMemoryEXR(class FloatBitMap_t *, const void  *, size_t); /* linkage=_ZN13FloatBitMap_t19LoadFromInMemoryEXREPKvm */
	bool LoadFromInMemoryTGA(class FloatBitMap_t *, const void  *, size_t); /* linkage=_ZN13FloatBitMap_t19LoadFromInMemoryTGAEPKvm */
	bool LoadFromInMemoryPSD(class FloatBitMap_t *, const void  *, size_t); /* linkage=_ZN13FloatBitMap_t19LoadFromInMemoryPSDEPKvm */
	bool LoadFromInMemoryTIF(class FloatBitMap_t *, const void  *, size_t); /* linkage=_ZN13FloatBitMap_t19LoadFromInMemoryTIFEPKvm */
	void InitializeWithRandomPixelsFromAnotherFloatBM(class FloatBitMap_t *, const class FloatBitMap_t  &); /* linkage=_ZN13FloatBitMap_t44InitializeWithRandomPixelsFromAnotherFloatBMERKS_ */
	void Clear(class FloatBitMap_t *, float, float, float, float); /* linkage=_ZN13FloatBitMap_t5ClearEffff */
	void LoadFromBuffer(class FloatBitMap_t *, const void  *, size_t, enum ImageFormat, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t14LoadFromBufferEPKvm11ImageFormat14FBMGammaType_t */
	void LoadFromFloatBitmap(class FloatBitMap_t *, const class FloatBitMap_t  *); /* linkage=_ZN13FloatBitMap_t19LoadFromFloatBitmapEPKS_ */
	/* <4704d14> bitmap/floatbitmap.cpp:652 */
	void CopyFloatBitmap(class FloatBitMap_t *, const class FloatBitMap_t  *); /* linkage=_ZN13FloatBitMap_t15CopyFloatBitmapEPKS_ */
	void CopyFloatBitmapSubrect(class FloatBitMap_t *, const class FloatBitMap_t  *, int, int, int, int, int, int); /* linkage=_ZN13FloatBitMap_t22CopyFloatBitmapSubrectEPKS_iiiiii */
	void SetChannel(class FloatBitMap_t *, int, float); /* linkage=_ZN13FloatBitMap_t10SetChannelEif */
	void Rotate90DegreesCW(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t17Rotate90DegreesCWEv */
	void Rotate90DegreesCCW(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t18Rotate90DegreesCCWEv */
	void Rotate180Degrees(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t16Rotate180DegreesEv */
	void MirrorHorizontally(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t18MirrorHorizontallyEv */
	void MirrorVertically(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t16MirrorVerticallyEv */
	void FloatBitMap_t(class FloatBitMap_t *, const char  *, bool); /* linkage=_ZN13FloatBitMap_tC4EPKcb */
	bool WriteTGAFile(const class FloatBitMap_t  *, const char  *); /* linkage=_ZNK13FloatBitMap_t12WriteTGAFileEPKc */
	bool WritePFM(class FloatBitMap_t *, const char  *); /* linkage=_ZN13FloatBitMap_t8WritePFMEPKc */
	bool WriteEXR(class FloatBitMap_t *, const char  *, int); /* linkage=_ZN13FloatBitMap_t8WriteEXREPKci */
	bool WriteToBuffer(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool, uint32); /* linkage=_ZNK13FloatBitMap_t13WriteToBufferEPvm11ImageFormatbbj */
	/* <4704e96> bitmap/floatbitmap.cpp:852 */
	bool WriteToBufferDXT(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferDXTEPvm11ImageFormatbb */
	bool WriteToBufferRuntimeDXT(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t23WriteToBufferRuntimeDXTEPvm11ImageFormatbb */
	bool WriteToBufferBC6H(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferBC6HEPvm11ImageFormatbb */
	bool WriteToBufferBC7(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferBC7EPvm11ImageFormatbb */
	bool WriteToBufferETC(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferETCEPvm11ImageFormatbb */
	bool WriteInMemoryEXR(const class FloatBitMap_t  *, class CUtlBuffer &, int); /* linkage=_ZNK13FloatBitMap_t16WriteInMemoryEXRER10CUtlBufferi */
	const float  & ConstantValue(const class FloatBitMap_t  *, int); /* linkage=_ZNK13FloatBitMap_t13ConstantValueEi */
	/* <4704532> ../public/bitmap/floatbitmap.h:520 */
	float & Pixel(const class FloatBitMap_t  *, int, int, int, int); /* linkage=_ZNK13FloatBitMap_t5PixelEiiii */
	float & PixelWrapped(const class FloatBitMap_t  *, int, int, int, int); /* linkage=_ZNK13FloatBitMap_t12PixelWrappedEiiii */
	/* <470481c> ../public/bitmap/floatbitmap.h:587 */
	float & PixelClamped(const class FloatBitMap_t  *, int, int, int, int); /* linkage=_ZNK13FloatBitMap_t12PixelClampedEiiii */
	/* <47049c7> ../public/bitmap/floatbitmap.h:596 */
	float & Alpha(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t5AlphaEiii */
	float & Pixel(const class FloatBitMap_t  *, const class IntVector2D  &, int); /* linkage=_ZNK13FloatBitMap_t5PixelERK11IntVector2Di */
	float & Pixel(const class FloatBitMap_t  *, const class IntVector3D  &, int); /* linkage=_ZNK13FloatBitMap_t5PixelERK11IntVector3Di */
	int PixelIndex(const class FloatBitMap_t  *, int, int, int, int); /* linkage=_ZNK13FloatBitMap_t10PixelIndexEiiii */
	class Vector RGBPixelAsVector(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t16RGBPixelAsVectorEiii */
	class Vector4D RGBAPixelAsVector4D(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t19RGBAPixelAsVector4DEiii */
	class Vector RGBPixelAsVectorWrapped(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t23RGBPixelAsVectorWrappedEiii */
	class Vector4D RGBAPixelAsVector4DWrapped(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t26RGBAPixelAsVector4DWrappedEiii */
	void SetRGBPixelFromVector(class FloatBitMap_t *, const class Vector  &, int, int, int); /* linkage=_ZN13FloatBitMap_t21SetRGBPixelFromVectorERK6Vectoriii */
	void SetRGBAPixelFromVector(class FloatBitMap_t *, const class Vector4D  &, int, int, int); /* linkage=_ZN13FloatBitMap_t22SetRGBAPixelFromVectorERK8Vector4Diii */
	class PixRGBAF PixelRGBAF(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t10PixelRGBAFEiii */
	void WritePixelRGBAF(const class FloatBitMap_t  *, int, int, int, class PixRGBAF); /* linkage=_ZNK13FloatBitMap_t15WritePixelRGBAFEiii8PixRGBAF */
	void WritePixel(class FloatBitMap_t *, int, int, int, int, float); /* linkage=_ZN13FloatBitMap_t10WritePixelEiiiif */
	void ConvertGammaToLinear(class FloatBitMap_t *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t20ConvertGammaToLinearE14FBMGammaType_t */
	void ConvertLinearToGamma(class FloatBitMap_t *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t20ConvertLinearToGammaE14FBMGammaType_t */
	class CSOAAttributeReference Red(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t3RedEv */
	class CSOAAttributeReference Green(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t5GreenEv */
	class CSOAAttributeReference Blue(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t4BlueEv */
	class CSOAAttributeReference Alpha(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t5AlphaEv */
	class CSOAConstAttributeReference Red(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t3RedEv */
	class CSOAConstAttributeReference Green(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t5GreenEv */
	class CSOAConstAttributeReference Blue(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t4BlueEv */
	class CSOAConstAttributeReference Alpha(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t5AlphaEv */
	void SmartPaste(class FloatBitMap_t *, const class FloatBitMap_t  &, int, int, uint32); /* linkage=_ZN13FloatBitMap_t10SmartPasteERKS_iij */
	void Poisson(class FloatBitMap_t *, class FloatBitMap_t * *, int, uint32); /* linkage=_ZN13FloatBitMap_t7PoissonEPPS_ij */
	void MakeTileable(class FloatBitMap_t *, int); /* linkage=_ZN13FloatBitMap_t12MakeTileableEi */
	void Resize2D(class FloatBitMap_t *, int, int, bool); /* linkage=_ZN13FloatBitMap_t8Resize2DEiib */
	void ResizeWeightedAlpha(class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t19ResizeWeightedAlphaEii */
	void GetAlphaBounds(const class FloatBitMap_t  *, int &, int &, int &, int &, float, int); /* linkage=_ZNK13FloatBitMap_t14GetAlphaBoundsERiS0_S0_S0_fi */
	void QuarterSize(class FloatBitMap_t *, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t11QuarterSizeEPS_ */
	void QuarterSizeBlocky(class FloatBitMap_t *, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t17QuarterSizeBlockyEPS_ */
	void QuarterSizeWithGaussian(class FloatBitMap_t *, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t23QuarterSizeWithGaussianEPS_ */
	void DownsampleNiceFiltered(class FloatBitMap_t *, const class DownsampleInfo_t  &, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t22DownsampleNiceFilteredERK16DownsampleInfo_tPS_ */
	void RaiseToPower(class FloatBitMap_t *, float); /* linkage=_ZN13FloatBitMap_t12RaiseToPowerEf */
	void ScaleGradients(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t14ScaleGradientsEv */
	void Logize(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t6LogizeEv */
	void UnLogize(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t8UnLogizeEv */
	void CompressTo8Bits(class FloatBitMap_t *, float); /* linkage=_ZN13FloatBitMap_t15CompressTo8BitsEf */
	void Uncompress(class FloatBitMap_t *, float); /* linkage=_ZN13FloatBitMap_t10UncompressEf */
	class Vector4D AverageColor4D(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t14AverageColor4DEv */
	class Vector AverageColor(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t12AverageColorEv */
	float BrightestColor(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t14BrightestColorEv */
	void NormalMapToDXT5NM(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t17NormalMapToDXT5NMEv */
	void ScaleRGB(class FloatBitMap_t *, float); /* linkage=_ZN13FloatBitMap_t8ScaleRGBEf */
	void ComputeVertexPositionsAndNormals(const class FloatBitMap_t  *, float, class Vector * *, class Vector * *); /* linkage=_ZNK13FloatBitMap_t32ComputeVertexPositionsAndNormalsEfPP6VectorS2_ */
	class FloatBitMap_t * ComputeSelfShadowedBumpmapFromHeightInAlphaChannel(const class FloatBitMap_t  *, float, float, const class Vector  *, int, int, uint32); /* linkage=_ZNK13FloatBitMap_t50ComputeSelfShadowedBumpmapFromHeightInAlphaChannelEffPK6Vectoriij */
	class FloatBitMap_t * ComputeBumpmapFromHeightInAlphaChannel(const class FloatBitMap_t  *, float); /* linkage=_ZNK13FloatBitMap_t38ComputeBumpmapFromHeightInAlphaChannelEf */
	void TileableBilateralFilter(class FloatBitMap_t *, int, float); /* linkage=_ZN13FloatBitMap_t23TileableBilateralFilterEif */
	void EstimateDerivatives(class FloatBitMap_t *, int, int, int); /* linkage=_ZN13FloatBitMap_t19EstimateDerivativesEiii */
	void DrawLine(class FloatBitMap_t *, int, int, int, int, int, float); /* linkage=_ZN13FloatBitMap_t8DrawLineEiiiiif */
	void DilateColorsIntoTransparentParts(class FloatBitMap_t *, int); /* linkage=_ZN13FloatBitMap_t32DilateColorsIntoTransparentPartsEi */
	void SetThreadPool(class IThreadPool *); /* linkage=_ZN13FloatBitMap_t13SetThreadPoolEP11IThreadPool */
	bool WriteInMemoryEXRFast(const class FloatBitMap_t  *, class CUtlBuffer &); /* linkage=_ZNK13FloatBitMap_t20WriteInMemoryEXRFastER10CUtlBuffer */
	void TileableBilateralFilterPartial(class FloatBitMap_t *, int, int, int, float, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t30TileableBilateralFilterPartialEiiifPS_ */
	void QuarterSize2D(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t13QuarterSize2DEPS_ii */
	void QuarterSize3D(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t13QuarterSize3DEPS_ii */
	void QuarterSizeBlocky2D(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t19QuarterSizeBlocky2DEPS_ii */
	void QuarterSizeBlocky3D(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t19QuarterSizeBlocky3DEPS_ii */
	void QuarterSize2D_NP2(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t17QuarterSize2D_NP2EPS_ii */
	void PackToRGBA8888_t(const class FloatBitMap_t  *, class RGBA8888_t *, enum FBMAttribute_t, enum FBMAttribute_t, enum FBMAttribute_t, enum FBMAttribute_t); /* linkage=_ZNK13FloatBitMap_t16PackToRGBA8888_tEP10RGBA8888_t14FBMAttribute_tS2_S2_S2_ */
	void LoadFromRGBA8888BufferGammaToLinear(class FloatBitMap_t *, const class RGBA8888_t  *, int); /* linkage=_ZN13FloatBitMap_t35LoadFromRGBA8888BufferGammaToLinearEPK10RGBA8888_ti */
	void WriteToBufferRGBA16161616(const class FloatBitMap_t  *, class RGBA16161616_t *, int); /* linkage=_ZNK13FloatBitMap_t25WriteToBufferRGBA16161616EP14RGBA16161616_ti */
	void WriteToBufferRG1616(const class FloatBitMap_t  *, class RG1616_t *, int); /* linkage=_ZNK13FloatBitMap_t19WriteToBufferRG1616EP8RG1616_ti */
	void WriteToBufferR16(const class FloatBitMap_t  *, class R16_t *, int); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferR16EP5R16_ti */
	int CoordWrap(int, int); /* linkage=_ZN13FloatBitMap_t9CoordWrapEii */
	void ~FloatBitMap_t(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_tD4Ev */
	void WriteToBufferRGBAFloat<RGBA32323232F_t>(const class FloatBitMap_t  *, class RGBA32323232F_t *, int); /* linkage=_ZNK13FloatBitMap_t22WriteToBufferRGBAFloatI15RGBA32323232F_tEEvPT_i */
	void WriteToBufferRGBFloat<RGB323232F_t>(const class FloatBitMap_t  *, class RGB323232F_t *, int); /* linkage=_ZNK13FloatBitMap_t21WriteToBufferRGBFloatI12RGB323232F_tEEvPT_i */
	void WriteToBufferRGFloat<RG3232F_t>(const class FloatBitMap_t  *, class RG3232F_t *, int); /* linkage=_ZNK13FloatBitMap_t20WriteToBufferRGFloatI9RG3232F_tEEvPT_i */
	void WriteToBufferRFloat<R32F_t>(const class FloatBitMap_t  *, class R32F_t *, int); /* linkage=_ZNK13FloatBitMap_t19WriteToBufferRFloatI6R32F_tEEvPT_i */
	void WriteToBufferRGBAFloat16<RGBA16161616F_t>(const class FloatBitMap_t  *, class RGBA16161616F_t *, int); /* linkage=_ZNK13FloatBitMap_t24WriteToBufferRGBAFloat16I15RGBA16161616F_tEEvPT_i */
	void WriteToBufferRGFloat16<RG1616F_t>(const class FloatBitMap_t  *, class RG1616F_t *, int); /* linkage=_ZNK13FloatBitMap_t22WriteToBufferRGFloat16I9RG1616F_tEEvPT_i */
	void WriteToBufferRFloat16<R16F_t>(const class FloatBitMap_t  *, class R16F_t *, int); /* linkage=_ZNK13FloatBitMap_t21WriteToBufferRFloat16I6R16F_tEEvPT_i */
	void WriteToBufferUVLX<UVLX8888_t>(const class FloatBitMap_t  *, class UVLX8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferUVLXI10UVLX8888_tEEvPT_i */
	void WriteToBufferUVWQ<UVWQ8888_t>(const class FloatBitMap_t  *, class UVWQ8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferUVWQI10UVWQ8888_tEEvPT_i */
	void WriteToBufferUV<UV88_t>(const class FloatBitMap_t  *, class UV88_t *, int); /* linkage=_ZNK13FloatBitMap_t15WriteToBufferUVI6UV88_tEEvPT_i */
	void WriteToBufferIA<IA88_t>(const class FloatBitMap_t  *, class IA88_t *, int); /* linkage=_ZNK13FloatBitMap_t15WriteToBufferIAI6IA88_tEEvPT_i */
	void WriteToBufferI<I8_t>(const class FloatBitMap_t  *, class I8_t *, int); /* linkage=_ZNK13FloatBitMap_t14WriteToBufferII4I8_tEEvPT_i */
	void WriteToBufferRGB<BGRX8888_t>(const class FloatBitMap_t  *, class BGRX8888_t *, int); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferRGBI10BGRX8888_tEEvPT_i */
	void WriteToBufferRGB<BGR888_t>(const class FloatBitMap_t  *, class BGR888_t *, int); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferRGBI8BGR888_tEEvPT_i */
	void WriteToBufferRGB<RGB888_t>(const class FloatBitMap_t  *, class RGB888_t *, int); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferRGBI8RGB888_tEEvPT_i */
	void WriteToBufferRGBA<BGRA8888_t>(const class FloatBitMap_t  *, class BGRA8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBAI10BGRA8888_tEEvPT_i */
	void WriteToBufferRGBX<RGBA8888_t>(const class FloatBitMap_t  *, class RGBA8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBXI10RGBA8888_tEEvPT_i */
	void WriteToBufferRGBA<ABGR8888_t>(const class FloatBitMap_t  *, class ABGR8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBAI10ABGR8888_tEEvPT_i */
	void WriteToBufferRGBA<ARGB8888_t>(const class FloatBitMap_t  *, class ARGB8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBAI10ARGB8888_tEEvPT_i */
	void LoadFromBufferRFloat<R32F_t>(class FloatBitMap_t *, const class R32F_t  *, int); /* linkage=_ZN13FloatBitMap_t20LoadFromBufferRFloatI6R32F_tEEvPKT_i */
	void LoadFromBufferRGBAFloat<RGBA32323232F_t>(class FloatBitMap_t *, const class RGBA32323232F_t  *, int); /* linkage=_ZN13FloatBitMap_t23LoadFromBufferRGBAFloatI15RGBA32323232F_tEEvPKT_i */
	void LoadFromBufferRGBFloat<RGB323232F_t>(class FloatBitMap_t *, const class RGB323232F_t  *, int); /* linkage=_ZN13FloatBitMap_t22LoadFromBufferRGBFloatI12RGB323232F_tEEvPKT_i */
	void LoadFromBufferI<R16_t>(class FloatBitMap_t *, const class R16_t  *, int); /* linkage=_ZN13FloatBitMap_t15LoadFromBufferII5R16_tEEvPKT_i */
	void LoadFromBufferIA<RG1616_t>(class FloatBitMap_t *, const class RG1616_t  *, int); /* linkage=_ZN13FloatBitMap_t16LoadFromBufferIAI8RG1616_tEEvPKT_i */
	void LoadFromBufferRGBAFloat<RGBA16161616F_t>(class FloatBitMap_t *, const class RGBA16161616F_t  *, int); /* linkage=_ZN13FloatBitMap_t23LoadFromBufferRGBAFloatI15RGBA16161616F_tEEvPKT_i */
	void LoadFromBufferRGBA<RGBA16161616_t>(class FloatBitMap_t *, const class RGBA16161616_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI14RGBA16161616_tEEvPKT_i */
	void LoadFromBufferUVLX<UVLX8888_t>(class FloatBitMap_t *, const class UVLX8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferUVLXI10UVLX8888_tEEvPKT_i */
	void LoadFromBufferUVWQ<UVWQ8888_t>(class FloatBitMap_t *, const class UVWQ8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferUVWQI10UVWQ8888_tEEvPKT_i */
	void LoadFromBufferIA<IA88_t>(class FloatBitMap_t *, const class IA88_t  *, int); /* linkage=_ZN13FloatBitMap_t16LoadFromBufferIAI6IA88_tEEvPKT_i */
	void LoadFromBufferI<I8_t>(class FloatBitMap_t *, const class I8_t  *, int); /* linkage=_ZN13FloatBitMap_t15LoadFromBufferII4I8_tEEvPKT_i */
	void LoadFromBufferUV<UV88_t>(class FloatBitMap_t *, const class UV88_t  *, int); /* linkage=_ZN13FloatBitMap_t16LoadFromBufferUVI6UV88_tEEvPKT_i */
	void LoadFromBufferRGB<BGRX8888_t>(class FloatBitMap_t *, const class BGRX8888_t  *, int); /* linkage=_ZN13FloatBitMap_t17LoadFromBufferRGBI10BGRX8888_tEEvPKT_i */
	void LoadFromBufferRGB<BGR888_t>(class FloatBitMap_t *, const class BGR888_t  *, int); /* linkage=_ZN13FloatBitMap_t17LoadFromBufferRGBI8BGR888_tEEvPKT_i */
	void LoadFromBufferRGB<RGB888_t>(class FloatBitMap_t *, const class RGB888_t  *, int); /* linkage=_ZN13FloatBitMap_t17LoadFromBufferRGBI8RGB888_tEEvPKT_i */
	void LoadFromBufferRGBA<BGRA8888_t>(class FloatBitMap_t *, const class BGRA8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI10BGRA8888_tEEvPKT_i */
	void LoadFromBufferRGBA<ABGR8888_t>(class FloatBitMap_t *, const class ABGR8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI10ABGR8888_tEEvPKT_i */
	void LoadFromBufferRGBA<ARGB8888_t>(class FloatBitMap_t *, const class ARGB8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI10ARGB8888_tEEvPKT_i */
	void WriteToBufferBGRA<RGBA8888_t>(const class FloatBitMap_t  *, class RGBA8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferBGRAI10RGBA8888_tEEvPT_i */
	void WriteToBufferRGBA<RGBA8888_t>(const class FloatBitMap_t  *, class RGBA8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBAI10RGBA8888_tEEvPT_i */
	void LoadFromBufferRGBA<RGBA8888_t>(class FloatBitMap_t *, const class RGBA8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI10RGBA8888_tEEvPKT_i */
};

// <046B1846> ../public/bitmap/floatbitmap.h:150
// member functions: 316
// member variable: 1
// static member variable: 1
// class size: 1,464
class FloatBitMap_t : public CSOAContainer {
public:
	/* class CSOAContainer <ancestor>; */ /* 0 1464 */
	/* ../public/bitmap/floatbitmap.h:155 */
	void FloatBitMap_t(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:156 */
	void FloatBitMap_t(FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:157 */
	void FloatBitMap_t(FloatBitMap_t* , const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:158 */
	void FloatBitMap_t(FloatBitMap_t* , const FloatBitMap_t& );
	/* ../public/bitmap/floatbitmap.h:159 */
	FloatBitMap_t& operator=(FloatBitMap_t* , const FloatBitMap_t& );
	/* ../public/bitmap/floatbitmap.h:163 */
	void FloatBitMap_t(FloatBitMap_t* , const Bitmap_t& );
	/* ../public/bitmap/floatbitmap.h:166 */
	void EncodeTo(FloatBitMap_t* , Bitmap_t* , ImageFormat, int, uint32);
	/* ../public/bitmap/floatbitmap.h:170 */
	void Init(FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:172 */
	void Init(FloatBitMap_t* , int, int, int, const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:174 */
	void Shutdown(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:178 */
	int GetAttributeMask(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:181 */
	bool HasAttributeData(const FloatBitMap_t* , FBMAttribute_t);
	/* ../public/bitmap/floatbitmap.h:184 */
	int ComputeValidAttributeList(const FloatBitMap_t* , int* );
	/* ../public/bitmap/floatbitmap.h:187 */
	bool HasData(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:194 */
	bool LoadFromFile(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:196 */
	bool LoadFromPFM(FloatBitMap_t* , const char* );
	/* ../public/bitmap/floatbitmap.h:197 */
	bool LoadFromPSD(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:198 */
	bool LoadFromTIF(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:199 */
	bool LoadFromPNG(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:200 */
	bool LoadFromJPG(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:201 */
	bool LoadFromEXR(FloatBitMap_t* , const char* );
	/* ../public/bitmap/floatbitmap.h:202 */
	bool LoadFromInMemoryEXR(FloatBitMap_t* , const void* , size_t);
	/* ../public/bitmap/floatbitmap.h:203 */
	bool LoadFromInMemoryTGA(FloatBitMap_t* , const void* , size_t);
	/* ../public/bitmap/floatbitmap.h:204 */
	bool LoadFromInMemoryPSD(FloatBitMap_t* , const void* , size_t);
	/* ../public/bitmap/floatbitmap.h:205 */
	bool LoadFromInMemoryTIF(FloatBitMap_t* , const void* , size_t);
	/* ../public/bitmap/floatbitmap.h:207 */
	void InitializeWithRandomPixelsFromAnotherFloatBM(FloatBitMap_t* , const FloatBitMap_t& );
	/* ../public/bitmap/floatbitmap.h:208 */
	void Clear(FloatBitMap_t* , float, float, float, float);
	/* ../public/bitmap/floatbitmap.h:209 */
	void LoadFromBuffer(FloatBitMap_t* , const void* , size_t, ImageFormat, FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:210 */
	void LoadFromFloatBitmap(FloatBitMap_t* , const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:211 */
	void CopyFloatBitmap(FloatBitMap_t* , const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:212 */
	void CopyFloatBitmapSubrect(FloatBitMap_t* , const FloatBitMap_t* , int, int, int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:215 */
	void SetChannel(FloatBitMap_t* , int, float);
	/* ../public/bitmap/floatbitmap.h:218 */
	void Rotate90DegreesCW(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:219 */
	void Rotate90DegreesCCW(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:220 */
	void Rotate180Degrees(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:221 */
	void MirrorHorizontally(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:222 */
	void MirrorVertically(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:227 */
	void FloatBitMap_t(FloatBitMap_t* , const char* , bool);
	/* ../public/bitmap/floatbitmap.h:228 */
	bool WriteTGAFile(const FloatBitMap_t* , const char* );
	/* ../public/bitmap/floatbitmap.h:229 */
	bool WritePFM(FloatBitMap_t* , const char* );
	/* ../public/bitmap/floatbitmap.h:230 */
	bool WriteEXR(FloatBitMap_t* , const char* , int);
	/* ../public/bitmap/floatbitmap.h:233 */
	bool WriteToBuffer(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool, uint32);
	/* ../public/bitmap/floatbitmap.h:234 */
	bool WriteToBufferDXT(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:235 */
	bool WriteToBufferRuntimeDXT(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:236 */
	bool WriteToBufferBC6H(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:237 */
	bool WriteToBufferBC7(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:238 */
	bool WriteToBufferETC(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:239 */
	bool WriteInMemoryEXR(const FloatBitMap_t* , CUtlBuffer& , int);
	/* ../public/bitmap/floatbitmap.h:242 */
	const float& ConstantValue(const FloatBitMap_t* , int);
	/* ../public/bitmap/floatbitmap.h:246 */
	float& Pixel(const FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:248 */
	float& PixelWrapped(const FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:249 */
	float& PixelClamped(const FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:250 */
	float& Alpha(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:252 */
	float& Pixel(const FloatBitMap_t* , const IntVector2D& , int);
	/* ../public/bitmap/floatbitmap.h:253 */
	float& Pixel(const FloatBitMap_t* , const IntVector3D& , int);
	/* ../public/bitmap/floatbitmap.h:257 */
	int PixelIndex(const FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:265 */
	Vector RGBPixelAsVector(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:268 */
	Vector4D RGBAPixelAsVector4D(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:271 */
	Vector RGBPixelAsVectorWrapped(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:274 */
	Vector4D RGBAPixelAsVector4DWrapped(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:277 */
	void SetRGBPixelFromVector(FloatBitMap_t* , const Vector& , int, int, int);
	/* ../public/bitmap/floatbitmap.h:280 */
	void SetRGBAPixelFromVector(FloatBitMap_t* , const Vector4D& , int, int, int);
	/* ../public/bitmap/floatbitmap.h:282 */
	PixRGBAF PixelRGBAF(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:283 */
	void WritePixelRGBAF(const FloatBitMap_t* , int, int, int, PixRGBAF);
	/* ../public/bitmap/floatbitmap.h:284 */
	void WritePixel(FloatBitMap_t* , int, int, int, int, float);
	/* ../public/bitmap/floatbitmap.h:288 */
	void ConvertGammaToLinear(FloatBitMap_t* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:289 */
	void ConvertLinearToGamma(FloatBitMap_t* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:293 */
	CSOAAttributeReference Red(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:294 */
	CSOAAttributeReference Green(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:295 */
	CSOAAttributeReference Blue(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:296 */
	CSOAAttributeReference Alpha(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:298 */
	CSOAConstAttributeReference Red(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:299 */
	CSOAConstAttributeReference Green(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:300 */
	CSOAConstAttributeReference Blue(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:301 */
	CSOAConstAttributeReference Alpha(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:306 */
	void SmartPaste(FloatBitMap_t* , const FloatBitMap_t& , int, int, uint32);
	/* ../public/bitmap/floatbitmap.h:312 */
	void Poisson(FloatBitMap_t* , FloatBitMap_t** , int, uint32);
	/* ../public/bitmap/floatbitmap.h:318 */
	void MakeTileable(FloatBitMap_t* , int);
	/* ../public/bitmap/floatbitmap.h:323 */
	void Resize2D(FloatBitMap_t* , int, int, bool);
	/* ../public/bitmap/floatbitmap.h:324 */
	void ResizeWeightedAlpha(FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:327 */
	void GetAlphaBounds(const FloatBitMap_t* , int& , int& , int& , int& , float, int);
	/* ../public/bitmap/floatbitmap.h:329 */
	void QuarterSize(FloatBitMap_t* , FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:330 */
	void QuarterSizeBlocky(FloatBitMap_t* , FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:331 */
	void QuarterSizeWithGaussian(FloatBitMap_t* , FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:334 */
	void DownsampleNiceFiltered(FloatBitMap_t* , const DownsampleInfo_t& , FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:337 */
	void RaiseToPower(FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:338 */
	void ScaleGradients(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:339 */
	void Logize(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:340 */
	void UnLogize(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:346 */
	void CompressTo8Bits(FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:348 */
	void Uncompress(FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:350 */
	Vector4D AverageColor4D(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:351 */
	Vector AverageColor(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:352 */
	float BrightestColor(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:354 */
	void NormalMapToDXT5NM(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:357 */
	void ScaleRGB(FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:360 */
	void ComputeVertexPositionsAndNormals(const FloatBitMap_t* , float, Vector** , Vector** );
	/* ../public/bitmap/floatbitmap.h:366 */
	FloatBitMap_t* ComputeSelfShadowedBumpmapFromHeightInAlphaChannel(const FloatBitMap_t* , float, float, const Vector* , int, int, uint32);
	/* ../public/bitmap/floatbitmap.h:376 */
	FloatBitMap_t* ComputeBumpmapFromHeightInAlphaChannel(const FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:382 */
	void TileableBilateralFilter(FloatBitMap_t* , int, float);
	/* ../public/bitmap/floatbitmap.h:389 */
	void EstimateDerivatives(FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:394 */
	void DrawLine(FloatBitMap_t* , int, int, int, int, int, float);
	/* ../public/bitmap/floatbitmap.h:397 */
	void DilateColorsIntoTransparentParts(FloatBitMap_t* , int);
	/* ../public/bitmap/floatbitmap.h:401 */
	void SetThreadPool(IThreadPool* );
protected:
	/* ../public/bitmap/floatbitmap.h:405 */
	bool WriteInMemoryEXRFast(const FloatBitMap_t* , CUtlBuffer& );
	/* ../public/bitmap/floatbitmap.h:407 */
	void TileableBilateralFilterPartial(FloatBitMap_t* , int, int, int, float, FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:409 */
	void QuarterSize2D(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:410 */
	void QuarterSize3D(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:411 */
	void QuarterSizeBlocky2D(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:412 */
	void QuarterSizeBlocky3D(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:414 */
	void QuarterSize2D_NP2(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:417 */
	void PackToRGBA8888_t(const FloatBitMap_t* , RGBA8888_t* , FBMAttribute_t, FBMAttribute_t, FBMAttribute_t, FBMAttribute_t);
	/* ../public/bitmap/floatbitmap.h:420 */
	void LoadFromRGBA8888BufferGammaToLinear(FloatBitMap_t* , const RGBA8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:449 */
	void WriteToBufferRGBA16161616(const FloatBitMap_t* , RGBA16161616_t* , int);
	/* ../public/bitmap/floatbitmap.h:450 */
	void WriteToBufferRG1616(const FloatBitMap_t* , RG1616_t* , int);
	/* ../public/bitmap/floatbitmap.h:451 */
	void WriteToBufferR16(const FloatBitMap_t* , R16_t* , int);
	/* ../public/bitmap/floatbitmap.h:453 */
	int CoordWrap(int, int);
	static class IThreadPool * sm_pFBMThreadPool; /* 0 0 */
	/* ../public/bitmap/floatbitmap.h:908 */
	void WriteToBufferRGBAFloat<RGBA32323232F_t>(const FloatBitMap_t* , RGBA32323232F_t* , int);
	/* ../public/bitmap/floatbitmap.h:856 */
	void WriteToBufferRGBFloat<RGB323232F_t>(const FloatBitMap_t* , RGB323232F_t* , int);
	/* ../public/bitmap/floatbitmap.h:839 */
	void WriteToBufferRGFloat<RG3232F_t>(const FloatBitMap_t* , RG3232F_t* , int);
	/* ../public/bitmap/floatbitmap.h:874 */
	void WriteToBufferRFloat<R32F_t>(const FloatBitMap_t* , R32F_t* , int);
	/* ../public/bitmap/floatbitmap.h:944 */
	void WriteToBufferRGBAFloat16<RGBA16161616F_t>(const FloatBitMap_t* , RGBA16161616F_t* , int);
	/* ../public/bitmap/floatbitmap.h:927 */
	void WriteToBufferRGFloat16<RG1616F_t>(const FloatBitMap_t* , RG1616F_t* , int);
	/* ../public/bitmap/floatbitmap.h:963 */
	void WriteToBufferRFloat16<R16F_t>(const FloatBitMap_t* , R16F_t* , int);
	/* ../public/bitmap/floatbitmap.h:1133 */
	void WriteToBufferUVLX<UVLX8888_t>(const FloatBitMap_t* , UVLX8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:1109 */
	void WriteToBufferUVWQ<UVWQ8888_t>(const FloatBitMap_t* , UVWQ8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:1089 */
	void WriteToBufferUV<UV88_t>(const FloatBitMap_t* , UV88_t* , int);
	/* ../public/bitmap/floatbitmap.h:1066 */
	void WriteToBufferIA<IA88_t>(const FloatBitMap_t* , IA88_t* , int);
	/* ../public/bitmap/floatbitmap.h:1048 */
	void WriteToBufferI<I8_t>(const FloatBitMap_t* , I8_t* , int);
	/* ../public/bitmap/floatbitmap.h:890 */
	void WriteToBufferRGB<BGRX8888_t>(const FloatBitMap_t* , BGRX8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:890 */
	void WriteToBufferRGB<BGR888_t>(const FloatBitMap_t* , BGR888_t* , int);
	/* ../public/bitmap/floatbitmap.h:890 */
	void WriteToBufferRGB<RGB888_t>(const FloatBitMap_t* , RGB888_t* , int);
	/* ../public/bitmap/floatbitmap.h:979 */
	void WriteToBufferRGBA<BGRA8888_t>(const FloatBitMap_t* , BGRA8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:1000 */
	void WriteToBufferRGBX<RGBA8888_t>(const FloatBitMap_t* , RGBA8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:979 */
	void WriteToBufferRGBA<ABGR8888_t>(const FloatBitMap_t* , ABGR8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:979 */
	void WriteToBufferRGBA<ARGB8888_t>(const FloatBitMap_t* , ARGB8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:653 */
	void LoadFromBufferRFloat<R32F_t>(FloatBitMap_t* , const R32F_t* , int);
	/* ../public/bitmap/floatbitmap.h:688 */
	void LoadFromBufferRGBAFloat<RGBA32323232F_t>(FloatBitMap_t* , const RGBA32323232F_t* , int);
	/* ../public/bitmap/floatbitmap.h:634 */
	void LoadFromBufferRGBFloat<RGB323232F_t>(FloatBitMap_t* , const RGB323232F_t* , int);
	/* ../public/bitmap/floatbitmap.h:740 */
	void LoadFromBufferI<R16_t>(FloatBitMap_t* , const R16_t* , int);
	/* ../public/bitmap/floatbitmap.h:758 */
	void LoadFromBufferIA<RG1616_t>(FloatBitMap_t* , const RG1616_t* , int);
	/* ../public/bitmap/floatbitmap.h:688 */
	void LoadFromBufferRGBAFloat<RGBA16161616F_t>(FloatBitMap_t* , const RGBA16161616F_t* , int);
	/* ../public/bitmap/floatbitmap.h:707 */
	void LoadFromBufferRGBA<RGBA16161616_t>(FloatBitMap_t* , const RGBA16161616_t* , int);
	/* ../public/bitmap/floatbitmap.h:817 */
	void LoadFromBufferUVLX<UVLX8888_t>(FloatBitMap_t* , const UVLX8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:798 */
	void LoadFromBufferUVWQ<UVWQ8888_t>(FloatBitMap_t* , const UVWQ8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:758 */
	void LoadFromBufferIA<IA88_t>(FloatBitMap_t* , const IA88_t* , int);
	/* ../public/bitmap/floatbitmap.h:740 */
	void LoadFromBufferI<I8_t>(FloatBitMap_t* , const I8_t* , int);
	/* ../public/bitmap/floatbitmap.h:779 */
	void LoadFromBufferUV<UV88_t>(FloatBitMap_t* , const UV88_t* , int);
	/* ../public/bitmap/floatbitmap.h:669 */
	void LoadFromBufferRGB<BGRX8888_t>(FloatBitMap_t* , const BGRX8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:669 */
	void LoadFromBufferRGB<BGR888_t>(FloatBitMap_t* , const BGR888_t* , int);
	/* ../public/bitmap/floatbitmap.h:669 */
	void LoadFromBufferRGB<RGB888_t>(FloatBitMap_t* , const RGB888_t* , int);
	/* ../public/bitmap/floatbitmap.h:707 */
	void LoadFromBufferRGBA<BGRA8888_t>(FloatBitMap_t* , const BGRA8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:707 */
	void LoadFromBufferRGBA<ABGR8888_t>(FloatBitMap_t* , const ABGR8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:707 */
	void LoadFromBufferRGBA<ARGB8888_t>(FloatBitMap_t* , const ARGB8888_t* , int);
	/* bitmap/floatbitmap.cpp:3819 */
	void WriteToBufferBGRA<RGBA8888_t>(const FloatBitMap_t* , RGBA8888_t* , int);
	/* bitmap/floatbitmap.cpp:3813 */
	void WriteToBufferRGBA<RGBA8888_t>(const FloatBitMap_t* , RGBA8888_t* , int);
	/* bitmap/floatbitmap.cpp:3674 */
	void LoadFromBufferRGBA<RGBA8888_t>(FloatBitMap_t* , const RGBA8888_t* , int);
	void ~FloatBitMap_t(FloatBitMap_t* );
	void FloatBitMap_t(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_tC4Ev */
	void FloatBitMap_t(class FloatBitMap_t *, int, int, int, int); /* linkage=_ZN13FloatBitMap_tC4Eiiii */
	void FloatBitMap_t(class FloatBitMap_t *, const class FloatBitMap_t  *); /* linkage=_ZN13FloatBitMap_tC4EPKS_ */
	void FloatBitMap_t(class FloatBitMap_t *, const class FloatBitMap_t  &); /* linkage=_ZN13FloatBitMap_tC4ERKS_ */
	class FloatBitMap_t & operator=(class FloatBitMap_t *, const class FloatBitMap_t  &); /* linkage=_ZN13FloatBitMap_taSERKS_ */
	void FloatBitMap_t(class FloatBitMap_t *, const class Bitmap_t  &); /* linkage=_ZN13FloatBitMap_tC4ERK8Bitmap_t */
	void EncodeTo(class FloatBitMap_t *, class Bitmap_t *, enum ImageFormat, int, uint32); /* linkage=_ZN13FloatBitMap_t8EncodeToEP8Bitmap_t11ImageFormatij */
	void Init(class FloatBitMap_t *, int, int, int, int); /* linkage=_ZN13FloatBitMap_t4InitEiiii */
	void Init(class FloatBitMap_t *, int, int, int, const class FloatBitMap_t  *); /* linkage=_ZN13FloatBitMap_t4InitEiiiPKS_ */
	void Shutdown(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t8ShutdownEv */
	int GetAttributeMask(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t16GetAttributeMaskEv */
	bool HasAttributeData(const class FloatBitMap_t  *, enum FBMAttribute_t); /* linkage=_ZNK13FloatBitMap_t16HasAttributeDataE14FBMAttribute_t */
	int ComputeValidAttributeList(const class FloatBitMap_t  *, int *); /* linkage=_ZNK13FloatBitMap_t25ComputeValidAttributeListEPi */
	bool HasData(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t7HasDataEv */
	bool LoadFromFile(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t12LoadFromFileEPKc14FBMGammaType_t */
	bool LoadFromPFM(class FloatBitMap_t *, const char  *); /* linkage=_ZN13FloatBitMap_t11LoadFromPFMEPKc */
	bool LoadFromPSD(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t11LoadFromPSDEPKc14FBMGammaType_t */
	/* <4704b14> bitmap/floatbitmap.cpp:1427 */
	bool LoadFromTIF(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t11LoadFromTIFEPKc14FBMGammaType_t */
	/* <4704b7a> bitmap/floatbitmap.cpp:1465 */
	bool LoadFromPNG(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t11LoadFromPNGEPKc14FBMGammaType_t */
	/* <4704be0> bitmap/floatbitmap.cpp:1501 */
	bool LoadFromJPG(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t11LoadFromJPGEPKc14FBMGammaType_t */
	bool LoadFromEXR(class FloatBitMap_t *, const char  *); /* linkage=_ZN13FloatBitMap_t11LoadFromEXREPKc */
	bool LoadFromInMemoryEXR(class FloatBitMap_t *, const void  *, size_t); /* linkage=_ZN13FloatBitMap_t19LoadFromInMemoryEXREPKvm */
	bool LoadFromInMemoryTGA(class FloatBitMap_t *, const void  *, size_t); /* linkage=_ZN13FloatBitMap_t19LoadFromInMemoryTGAEPKvm */
	bool LoadFromInMemoryPSD(class FloatBitMap_t *, const void  *, size_t); /* linkage=_ZN13FloatBitMap_t19LoadFromInMemoryPSDEPKvm */
	bool LoadFromInMemoryTIF(class FloatBitMap_t *, const void  *, size_t); /* linkage=_ZN13FloatBitMap_t19LoadFromInMemoryTIFEPKvm */
	void InitializeWithRandomPixelsFromAnotherFloatBM(class FloatBitMap_t *, const class FloatBitMap_t  &); /* linkage=_ZN13FloatBitMap_t44InitializeWithRandomPixelsFromAnotherFloatBMERKS_ */
	void Clear(class FloatBitMap_t *, float, float, float, float); /* linkage=_ZN13FloatBitMap_t5ClearEffff */
	void LoadFromBuffer(class FloatBitMap_t *, const void  *, size_t, enum ImageFormat, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t14LoadFromBufferEPKvm11ImageFormat14FBMGammaType_t */
	void LoadFromFloatBitmap(class FloatBitMap_t *, const class FloatBitMap_t  *); /* linkage=_ZN13FloatBitMap_t19LoadFromFloatBitmapEPKS_ */
	/* <4704d14> bitmap/floatbitmap.cpp:652 */
	void CopyFloatBitmap(class FloatBitMap_t *, const class FloatBitMap_t  *); /* linkage=_ZN13FloatBitMap_t15CopyFloatBitmapEPKS_ */
	void CopyFloatBitmapSubrect(class FloatBitMap_t *, const class FloatBitMap_t  *, int, int, int, int, int, int); /* linkage=_ZN13FloatBitMap_t22CopyFloatBitmapSubrectEPKS_iiiiii */
	void SetChannel(class FloatBitMap_t *, int, float); /* linkage=_ZN13FloatBitMap_t10SetChannelEif */
	void Rotate90DegreesCW(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t17Rotate90DegreesCWEv */
	void Rotate90DegreesCCW(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t18Rotate90DegreesCCWEv */
	void Rotate180Degrees(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t16Rotate180DegreesEv */
	void MirrorHorizontally(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t18MirrorHorizontallyEv */
	void MirrorVertically(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t16MirrorVerticallyEv */
	void FloatBitMap_t(class FloatBitMap_t *, const char  *, bool); /* linkage=_ZN13FloatBitMap_tC4EPKcb */
	bool WriteTGAFile(const class FloatBitMap_t  *, const char  *); /* linkage=_ZNK13FloatBitMap_t12WriteTGAFileEPKc */
	bool WritePFM(class FloatBitMap_t *, const char  *); /* linkage=_ZN13FloatBitMap_t8WritePFMEPKc */
	bool WriteEXR(class FloatBitMap_t *, const char  *, int); /* linkage=_ZN13FloatBitMap_t8WriteEXREPKci */
	bool WriteToBuffer(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool, uint32); /* linkage=_ZNK13FloatBitMap_t13WriteToBufferEPvm11ImageFormatbbj */
	/* <4704e96> bitmap/floatbitmap.cpp:852 */
	bool WriteToBufferDXT(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferDXTEPvm11ImageFormatbb */
	bool WriteToBufferRuntimeDXT(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t23WriteToBufferRuntimeDXTEPvm11ImageFormatbb */
	bool WriteToBufferBC6H(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferBC6HEPvm11ImageFormatbb */
	bool WriteToBufferBC7(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferBC7EPvm11ImageFormatbb */
	bool WriteToBufferETC(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferETCEPvm11ImageFormatbb */
	bool WriteInMemoryEXR(const class FloatBitMap_t  *, class CUtlBuffer &, int); /* linkage=_ZNK13FloatBitMap_t16WriteInMemoryEXRER10CUtlBufferi */
	const float  & ConstantValue(const class FloatBitMap_t  *, int); /* linkage=_ZNK13FloatBitMap_t13ConstantValueEi */
	/* <4704532> ../public/bitmap/floatbitmap.h:520 */
	float & Pixel(const class FloatBitMap_t  *, int, int, int, int); /* linkage=_ZNK13FloatBitMap_t5PixelEiiii */
	float & PixelWrapped(const class FloatBitMap_t  *, int, int, int, int); /* linkage=_ZNK13FloatBitMap_t12PixelWrappedEiiii */
	/* <470481c> ../public/bitmap/floatbitmap.h:587 */
	float & PixelClamped(const class FloatBitMap_t  *, int, int, int, int); /* linkage=_ZNK13FloatBitMap_t12PixelClampedEiiii */
	/* <47049c7> ../public/bitmap/floatbitmap.h:596 */
	float & Alpha(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t5AlphaEiii */
	float & Pixel(const class FloatBitMap_t  *, const class IntVector2D  &, int); /* linkage=_ZNK13FloatBitMap_t5PixelERK11IntVector2Di */
	float & Pixel(const class FloatBitMap_t  *, const class IntVector3D  &, int); /* linkage=_ZNK13FloatBitMap_t5PixelERK11IntVector3Di */
	int PixelIndex(const class FloatBitMap_t  *, int, int, int, int); /* linkage=_ZNK13FloatBitMap_t10PixelIndexEiiii */
	class Vector RGBPixelAsVector(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t16RGBPixelAsVectorEiii */
	class Vector4D RGBAPixelAsVector4D(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t19RGBAPixelAsVector4DEiii */
	class Vector RGBPixelAsVectorWrapped(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t23RGBPixelAsVectorWrappedEiii */
	class Vector4D RGBAPixelAsVector4DWrapped(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t26RGBAPixelAsVector4DWrappedEiii */
	void SetRGBPixelFromVector(class FloatBitMap_t *, const class Vector  &, int, int, int); /* linkage=_ZN13FloatBitMap_t21SetRGBPixelFromVectorERK6Vectoriii */
	void SetRGBAPixelFromVector(class FloatBitMap_t *, const class Vector4D  &, int, int, int); /* linkage=_ZN13FloatBitMap_t22SetRGBAPixelFromVectorERK8Vector4Diii */
	class PixRGBAF PixelRGBAF(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t10PixelRGBAFEiii */
	void WritePixelRGBAF(const class FloatBitMap_t  *, int, int, int, class PixRGBAF); /* linkage=_ZNK13FloatBitMap_t15WritePixelRGBAFEiii8PixRGBAF */
	void WritePixel(class FloatBitMap_t *, int, int, int, int, float); /* linkage=_ZN13FloatBitMap_t10WritePixelEiiiif */
	void ConvertGammaToLinear(class FloatBitMap_t *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t20ConvertGammaToLinearE14FBMGammaType_t */
	void ConvertLinearToGamma(class FloatBitMap_t *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t20ConvertLinearToGammaE14FBMGammaType_t */
	class CSOAAttributeReference Red(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t3RedEv */
	class CSOAAttributeReference Green(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t5GreenEv */
	class CSOAAttributeReference Blue(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t4BlueEv */
	class CSOAAttributeReference Alpha(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t5AlphaEv */
	class CSOAConstAttributeReference Red(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t3RedEv */
	class CSOAConstAttributeReference Green(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t5GreenEv */
	class CSOAConstAttributeReference Blue(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t4BlueEv */
	class CSOAConstAttributeReference Alpha(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t5AlphaEv */
	void SmartPaste(class FloatBitMap_t *, const class FloatBitMap_t  &, int, int, uint32); /* linkage=_ZN13FloatBitMap_t10SmartPasteERKS_iij */
	void Poisson(class FloatBitMap_t *, class FloatBitMap_t * *, int, uint32); /* linkage=_ZN13FloatBitMap_t7PoissonEPPS_ij */
	void MakeTileable(class FloatBitMap_t *, int); /* linkage=_ZN13FloatBitMap_t12MakeTileableEi */
	void Resize2D(class FloatBitMap_t *, int, int, bool); /* linkage=_ZN13FloatBitMap_t8Resize2DEiib */
	void ResizeWeightedAlpha(class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t19ResizeWeightedAlphaEii */
	void GetAlphaBounds(const class FloatBitMap_t  *, int &, int &, int &, int &, float, int); /* linkage=_ZNK13FloatBitMap_t14GetAlphaBoundsERiS0_S0_S0_fi */
	void QuarterSize(class FloatBitMap_t *, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t11QuarterSizeEPS_ */
	void QuarterSizeBlocky(class FloatBitMap_t *, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t17QuarterSizeBlockyEPS_ */
	void QuarterSizeWithGaussian(class FloatBitMap_t *, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t23QuarterSizeWithGaussianEPS_ */
	void DownsampleNiceFiltered(class FloatBitMap_t *, const class DownsampleInfo_t  &, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t22DownsampleNiceFilteredERK16DownsampleInfo_tPS_ */
	void RaiseToPower(class FloatBitMap_t *, float); /* linkage=_ZN13FloatBitMap_t12RaiseToPowerEf */
	void ScaleGradients(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t14ScaleGradientsEv */
	void Logize(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t6LogizeEv */
	void UnLogize(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t8UnLogizeEv */
	void CompressTo8Bits(class FloatBitMap_t *, float); /* linkage=_ZN13FloatBitMap_t15CompressTo8BitsEf */
	void Uncompress(class FloatBitMap_t *, float); /* linkage=_ZN13FloatBitMap_t10UncompressEf */
	class Vector4D AverageColor4D(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t14AverageColor4DEv */
	class Vector AverageColor(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t12AverageColorEv */
	float BrightestColor(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t14BrightestColorEv */
	void NormalMapToDXT5NM(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t17NormalMapToDXT5NMEv */
	void ScaleRGB(class FloatBitMap_t *, float); /* linkage=_ZN13FloatBitMap_t8ScaleRGBEf */
	void ComputeVertexPositionsAndNormals(const class FloatBitMap_t  *, float, class Vector * *, class Vector * *); /* linkage=_ZNK13FloatBitMap_t32ComputeVertexPositionsAndNormalsEfPP6VectorS2_ */
	class FloatBitMap_t * ComputeSelfShadowedBumpmapFromHeightInAlphaChannel(const class FloatBitMap_t  *, float, float, const class Vector  *, int, int, uint32); /* linkage=_ZNK13FloatBitMap_t50ComputeSelfShadowedBumpmapFromHeightInAlphaChannelEffPK6Vectoriij */
	class FloatBitMap_t * ComputeBumpmapFromHeightInAlphaChannel(const class FloatBitMap_t  *, float); /* linkage=_ZNK13FloatBitMap_t38ComputeBumpmapFromHeightInAlphaChannelEf */
	void TileableBilateralFilter(class FloatBitMap_t *, int, float); /* linkage=_ZN13FloatBitMap_t23TileableBilateralFilterEif */
	void EstimateDerivatives(class FloatBitMap_t *, int, int, int); /* linkage=_ZN13FloatBitMap_t19EstimateDerivativesEiii */
	void DrawLine(class FloatBitMap_t *, int, int, int, int, int, float); /* linkage=_ZN13FloatBitMap_t8DrawLineEiiiiif */
	void DilateColorsIntoTransparentParts(class FloatBitMap_t *, int); /* linkage=_ZN13FloatBitMap_t32DilateColorsIntoTransparentPartsEi */
	void SetThreadPool(class IThreadPool *); /* linkage=_ZN13FloatBitMap_t13SetThreadPoolEP11IThreadPool */
	bool WriteInMemoryEXRFast(const class FloatBitMap_t  *, class CUtlBuffer &); /* linkage=_ZNK13FloatBitMap_t20WriteInMemoryEXRFastER10CUtlBuffer */
	void TileableBilateralFilterPartial(class FloatBitMap_t *, int, int, int, float, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t30TileableBilateralFilterPartialEiiifPS_ */
	void QuarterSize2D(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t13QuarterSize2DEPS_ii */
	void QuarterSize3D(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t13QuarterSize3DEPS_ii */
	void QuarterSizeBlocky2D(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t19QuarterSizeBlocky2DEPS_ii */
	void QuarterSizeBlocky3D(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t19QuarterSizeBlocky3DEPS_ii */
	void QuarterSize2D_NP2(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t17QuarterSize2D_NP2EPS_ii */
	void PackToRGBA8888_t(const class FloatBitMap_t  *, class RGBA8888_t *, enum FBMAttribute_t, enum FBMAttribute_t, enum FBMAttribute_t, enum FBMAttribute_t); /* linkage=_ZNK13FloatBitMap_t16PackToRGBA8888_tEP10RGBA8888_t14FBMAttribute_tS2_S2_S2_ */
	void LoadFromRGBA8888BufferGammaToLinear(class FloatBitMap_t *, const class RGBA8888_t  *, int); /* linkage=_ZN13FloatBitMap_t35LoadFromRGBA8888BufferGammaToLinearEPK10RGBA8888_ti */
	void WriteToBufferRGBA16161616(const class FloatBitMap_t  *, class RGBA16161616_t *, int); /* linkage=_ZNK13FloatBitMap_t25WriteToBufferRGBA16161616EP14RGBA16161616_ti */
	void WriteToBufferRG1616(const class FloatBitMap_t  *, class RG1616_t *, int); /* linkage=_ZNK13FloatBitMap_t19WriteToBufferRG1616EP8RG1616_ti */
	void WriteToBufferR16(const class FloatBitMap_t  *, class R16_t *, int); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferR16EP5R16_ti */
	int CoordWrap(int, int); /* linkage=_ZN13FloatBitMap_t9CoordWrapEii */
	void ~FloatBitMap_t(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_tD4Ev */
	void WriteToBufferRGBAFloat<RGBA32323232F_t>(const class FloatBitMap_t  *, class RGBA32323232F_t *, int); /* linkage=_ZNK13FloatBitMap_t22WriteToBufferRGBAFloatI15RGBA32323232F_tEEvPT_i */
	void WriteToBufferRGBFloat<RGB323232F_t>(const class FloatBitMap_t  *, class RGB323232F_t *, int); /* linkage=_ZNK13FloatBitMap_t21WriteToBufferRGBFloatI12RGB323232F_tEEvPT_i */
	void WriteToBufferRGFloat<RG3232F_t>(const class FloatBitMap_t  *, class RG3232F_t *, int); /* linkage=_ZNK13FloatBitMap_t20WriteToBufferRGFloatI9RG3232F_tEEvPT_i */
	void WriteToBufferRFloat<R32F_t>(const class FloatBitMap_t  *, class R32F_t *, int); /* linkage=_ZNK13FloatBitMap_t19WriteToBufferRFloatI6R32F_tEEvPT_i */
	void WriteToBufferRGBAFloat16<RGBA16161616F_t>(const class FloatBitMap_t  *, class RGBA16161616F_t *, int); /* linkage=_ZNK13FloatBitMap_t24WriteToBufferRGBAFloat16I15RGBA16161616F_tEEvPT_i */
	void WriteToBufferRGFloat16<RG1616F_t>(const class FloatBitMap_t  *, class RG1616F_t *, int); /* linkage=_ZNK13FloatBitMap_t22WriteToBufferRGFloat16I9RG1616F_tEEvPT_i */
	void WriteToBufferRFloat16<R16F_t>(const class FloatBitMap_t  *, class R16F_t *, int); /* linkage=_ZNK13FloatBitMap_t21WriteToBufferRFloat16I6R16F_tEEvPT_i */
	void WriteToBufferUVLX<UVLX8888_t>(const class FloatBitMap_t  *, class UVLX8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferUVLXI10UVLX8888_tEEvPT_i */
	void WriteToBufferUVWQ<UVWQ8888_t>(const class FloatBitMap_t  *, class UVWQ8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferUVWQI10UVWQ8888_tEEvPT_i */
	void WriteToBufferUV<UV88_t>(const class FloatBitMap_t  *, class UV88_t *, int); /* linkage=_ZNK13FloatBitMap_t15WriteToBufferUVI6UV88_tEEvPT_i */
	void WriteToBufferIA<IA88_t>(const class FloatBitMap_t  *, class IA88_t *, int); /* linkage=_ZNK13FloatBitMap_t15WriteToBufferIAI6IA88_tEEvPT_i */
	void WriteToBufferI<I8_t>(const class FloatBitMap_t  *, class I8_t *, int); /* linkage=_ZNK13FloatBitMap_t14WriteToBufferII4I8_tEEvPT_i */
	void WriteToBufferRGB<BGRX8888_t>(const class FloatBitMap_t  *, class BGRX8888_t *, int); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferRGBI10BGRX8888_tEEvPT_i */
	void WriteToBufferRGB<BGR888_t>(const class FloatBitMap_t  *, class BGR888_t *, int); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferRGBI8BGR888_tEEvPT_i */
	void WriteToBufferRGB<RGB888_t>(const class FloatBitMap_t  *, class RGB888_t *, int); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferRGBI8RGB888_tEEvPT_i */
	void WriteToBufferRGBA<BGRA8888_t>(const class FloatBitMap_t  *, class BGRA8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBAI10BGRA8888_tEEvPT_i */
	void WriteToBufferRGBX<RGBA8888_t>(const class FloatBitMap_t  *, class RGBA8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBXI10RGBA8888_tEEvPT_i */
	void WriteToBufferRGBA<ABGR8888_t>(const class FloatBitMap_t  *, class ABGR8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBAI10ABGR8888_tEEvPT_i */
	void WriteToBufferRGBA<ARGB8888_t>(const class FloatBitMap_t  *, class ARGB8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBAI10ARGB8888_tEEvPT_i */
	void LoadFromBufferRFloat<R32F_t>(class FloatBitMap_t *, const class R32F_t  *, int); /* linkage=_ZN13FloatBitMap_t20LoadFromBufferRFloatI6R32F_tEEvPKT_i */
	void LoadFromBufferRGBAFloat<RGBA32323232F_t>(class FloatBitMap_t *, const class RGBA32323232F_t  *, int); /* linkage=_ZN13FloatBitMap_t23LoadFromBufferRGBAFloatI15RGBA32323232F_tEEvPKT_i */
	void LoadFromBufferRGBFloat<RGB323232F_t>(class FloatBitMap_t *, const class RGB323232F_t  *, int); /* linkage=_ZN13FloatBitMap_t22LoadFromBufferRGBFloatI12RGB323232F_tEEvPKT_i */
	void LoadFromBufferI<R16_t>(class FloatBitMap_t *, const class R16_t  *, int); /* linkage=_ZN13FloatBitMap_t15LoadFromBufferII5R16_tEEvPKT_i */
	void LoadFromBufferIA<RG1616_t>(class FloatBitMap_t *, const class RG1616_t  *, int); /* linkage=_ZN13FloatBitMap_t16LoadFromBufferIAI8RG1616_tEEvPKT_i */
	void LoadFromBufferRGBAFloat<RGBA16161616F_t>(class FloatBitMap_t *, const class RGBA16161616F_t  *, int); /* linkage=_ZN13FloatBitMap_t23LoadFromBufferRGBAFloatI15RGBA16161616F_tEEvPKT_i */
	void LoadFromBufferRGBA<RGBA16161616_t>(class FloatBitMap_t *, const class RGBA16161616_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI14RGBA16161616_tEEvPKT_i */
	void LoadFromBufferUVLX<UVLX8888_t>(class FloatBitMap_t *, const class UVLX8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferUVLXI10UVLX8888_tEEvPKT_i */
	void LoadFromBufferUVWQ<UVWQ8888_t>(class FloatBitMap_t *, const class UVWQ8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferUVWQI10UVWQ8888_tEEvPKT_i */
	void LoadFromBufferIA<IA88_t>(class FloatBitMap_t *, const class IA88_t  *, int); /* linkage=_ZN13FloatBitMap_t16LoadFromBufferIAI6IA88_tEEvPKT_i */
	void LoadFromBufferI<I8_t>(class FloatBitMap_t *, const class I8_t  *, int); /* linkage=_ZN13FloatBitMap_t15LoadFromBufferII4I8_tEEvPKT_i */
	void LoadFromBufferUV<UV88_t>(class FloatBitMap_t *, const class UV88_t  *, int); /* linkage=_ZN13FloatBitMap_t16LoadFromBufferUVI6UV88_tEEvPKT_i */
	void LoadFromBufferRGB<BGRX8888_t>(class FloatBitMap_t *, const class BGRX8888_t  *, int); /* linkage=_ZN13FloatBitMap_t17LoadFromBufferRGBI10BGRX8888_tEEvPKT_i */
	void LoadFromBufferRGB<BGR888_t>(class FloatBitMap_t *, const class BGR888_t  *, int); /* linkage=_ZN13FloatBitMap_t17LoadFromBufferRGBI8BGR888_tEEvPKT_i */
	void LoadFromBufferRGB<RGB888_t>(class FloatBitMap_t *, const class RGB888_t  *, int); /* linkage=_ZN13FloatBitMap_t17LoadFromBufferRGBI8RGB888_tEEvPKT_i */
	void LoadFromBufferRGBA<BGRA8888_t>(class FloatBitMap_t *, const class BGRA8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI10BGRA8888_tEEvPKT_i */
	void LoadFromBufferRGBA<ABGR8888_t>(class FloatBitMap_t *, const class ABGR8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI10ABGR8888_tEEvPKT_i */
	void LoadFromBufferRGBA<ARGB8888_t>(class FloatBitMap_t *, const class ARGB8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI10ARGB8888_tEEvPKT_i */
	void WriteToBufferBGRA<RGBA8888_t>(const class FloatBitMap_t  *, class RGBA8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferBGRAI10RGBA8888_tEEvPT_i */
	void WriteToBufferRGBA<RGBA8888_t>(const class FloatBitMap_t  *, class RGBA8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBAI10RGBA8888_tEEvPT_i */
	void LoadFromBufferRGBA<RGBA8888_t>(class FloatBitMap_t *, const class RGBA8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI10RGBA8888_tEEvPKT_i */
};

// <047A0D9A> ../public/bitmap/floatbitmap.h:150
// member functions: 275
// member variable: 1
// static member variable: 1
// class size: 1,464
class FloatBitMap_t : public CSOAContainer {
public:
	/* class CSOAContainer <ancestor>; */ /* 0 1464 */
	/* ../public/bitmap/floatbitmap.h:155 */
	void FloatBitMap_t(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:156 */
	void FloatBitMap_t(FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:157 */
	void FloatBitMap_t(FloatBitMap_t* , const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:158 */
	void FloatBitMap_t(FloatBitMap_t* , const FloatBitMap_t& );
	/* ../public/bitmap/floatbitmap.h:159 */
	FloatBitMap_t& operator=(FloatBitMap_t* , const FloatBitMap_t& );
	/* ../public/bitmap/floatbitmap.h:163 */
	void FloatBitMap_t(FloatBitMap_t* , const Bitmap_t& );
	/* ../public/bitmap/floatbitmap.h:166 */
	void EncodeTo(FloatBitMap_t* , Bitmap_t* , ImageFormat, int, uint32);
	/* ../public/bitmap/floatbitmap.h:170 */
	void Init(FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:172 */
	void Init(FloatBitMap_t* , int, int, int, const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:174 */
	void Shutdown(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:178 */
	int GetAttributeMask(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:181 */
	bool HasAttributeData(const FloatBitMap_t* , FBMAttribute_t);
	/* ../public/bitmap/floatbitmap.h:184 */
	int ComputeValidAttributeList(const FloatBitMap_t* , int* );
	/* ../public/bitmap/floatbitmap.h:187 */
	bool HasData(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:194 */
	bool LoadFromFile(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:196 */
	bool LoadFromPFM(FloatBitMap_t* , const char* );
	/* ../public/bitmap/floatbitmap.h:197 */
	bool LoadFromPSD(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:198 */
	bool LoadFromTIF(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:199 */
	bool LoadFromPNG(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:200 */
	bool LoadFromJPG(FloatBitMap_t* , const char* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:201 */
	bool LoadFromEXR(FloatBitMap_t* , const char* );
	/* ../public/bitmap/floatbitmap.h:202 */
	bool LoadFromInMemoryEXR(FloatBitMap_t* , const void* , size_t);
	/* ../public/bitmap/floatbitmap.h:203 */
	bool LoadFromInMemoryTGA(FloatBitMap_t* , const void* , size_t);
	/* ../public/bitmap/floatbitmap.h:204 */
	bool LoadFromInMemoryPSD(FloatBitMap_t* , const void* , size_t);
	/* ../public/bitmap/floatbitmap.h:205 */
	bool LoadFromInMemoryTIF(FloatBitMap_t* , const void* , size_t);
	/* ../public/bitmap/floatbitmap.h:207 */
	void InitializeWithRandomPixelsFromAnotherFloatBM(FloatBitMap_t* , const FloatBitMap_t& );
	/* ../public/bitmap/floatbitmap.h:208 */
	void Clear(FloatBitMap_t* , float, float, float, float);
	/* ../public/bitmap/floatbitmap.h:209 */
	void LoadFromBuffer(FloatBitMap_t* , const void* , size_t, ImageFormat, FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:210 */
	void LoadFromFloatBitmap(FloatBitMap_t* , const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:211 */
	void CopyFloatBitmap(FloatBitMap_t* , const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:212 */
	void CopyFloatBitmapSubrect(FloatBitMap_t* , const FloatBitMap_t* , int, int, int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:215 */
	void SetChannel(FloatBitMap_t* , int, float);
	/* ../public/bitmap/floatbitmap.h:218 */
	void Rotate90DegreesCW(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:219 */
	void Rotate90DegreesCCW(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:220 */
	void Rotate180Degrees(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:221 */
	void MirrorHorizontally(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:222 */
	void MirrorVertically(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:227 */
	void FloatBitMap_t(FloatBitMap_t* , const char* , bool);
	/* ../public/bitmap/floatbitmap.h:228 */
	bool WriteTGAFile(const FloatBitMap_t* , const char* );
	/* ../public/bitmap/floatbitmap.h:229 */
	bool WritePFM(FloatBitMap_t* , const char* );
	/* ../public/bitmap/floatbitmap.h:230 */
	bool WriteEXR(FloatBitMap_t* , const char* , int);
	/* ../public/bitmap/floatbitmap.h:233 */
	bool WriteToBuffer(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool, uint32);
	/* ../public/bitmap/floatbitmap.h:234 */
	bool WriteToBufferDXT(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:235 */
	bool WriteToBufferRuntimeDXT(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:236 */
	bool WriteToBufferBC6H(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:237 */
	bool WriteToBufferBC7(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:238 */
	bool WriteToBufferETC(const FloatBitMap_t* , void* , size_t, ImageFormat, bool, bool);
	/* ../public/bitmap/floatbitmap.h:239 */
	bool WriteInMemoryEXR(const FloatBitMap_t* , CUtlBuffer& , int);
	/* ../public/bitmap/floatbitmap.h:242 */
	const float& ConstantValue(const FloatBitMap_t* , int);
	/* ../public/bitmap/floatbitmap.h:246 */
	float& Pixel(const FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:248 */
	float& PixelWrapped(const FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:249 */
	float& PixelClamped(const FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:250 */
	float& Alpha(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:252 */
	float& Pixel(const FloatBitMap_t* , const IntVector2D& , int);
	/* ../public/bitmap/floatbitmap.h:253 */
	float& Pixel(const FloatBitMap_t* , const IntVector3D& , int);
	/* ../public/bitmap/floatbitmap.h:257 */
	int PixelIndex(const FloatBitMap_t* , int, int, int, int);
	/* ../public/bitmap/floatbitmap.h:265 */
	Vector RGBPixelAsVector(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:268 */
	Vector4D RGBAPixelAsVector4D(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:271 */
	Vector RGBPixelAsVectorWrapped(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:274 */
	Vector4D RGBAPixelAsVector4DWrapped(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:277 */
	void SetRGBPixelFromVector(FloatBitMap_t* , const Vector& , int, int, int);
	/* ../public/bitmap/floatbitmap.h:280 */
	void SetRGBAPixelFromVector(FloatBitMap_t* , const Vector4D& , int, int, int);
	/* ../public/bitmap/floatbitmap.h:282 */
	PixRGBAF PixelRGBAF(const FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:283 */
	void WritePixelRGBAF(const FloatBitMap_t* , int, int, int, PixRGBAF);
	/* ../public/bitmap/floatbitmap.h:284 */
	void WritePixel(FloatBitMap_t* , int, int, int, int, float);
	/* ../public/bitmap/floatbitmap.h:288 */
	void ConvertGammaToLinear(FloatBitMap_t* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:289 */
	void ConvertLinearToGamma(FloatBitMap_t* , FBMGammaType_t);
	/* ../public/bitmap/floatbitmap.h:293 */
	CSOAAttributeReference Red(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:294 */
	CSOAAttributeReference Green(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:295 */
	CSOAAttributeReference Blue(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:296 */
	CSOAAttributeReference Alpha(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:298 */
	CSOAConstAttributeReference Red(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:299 */
	CSOAConstAttributeReference Green(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:300 */
	CSOAConstAttributeReference Blue(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:301 */
	CSOAConstAttributeReference Alpha(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:306 */
	void SmartPaste(FloatBitMap_t* , const FloatBitMap_t& , int, int, uint32);
	/* ../public/bitmap/floatbitmap.h:312 */
	void Poisson(FloatBitMap_t* , FloatBitMap_t** , int, uint32);
	/* ../public/bitmap/floatbitmap.h:318 */
	void MakeTileable(FloatBitMap_t* , int);
	/* ../public/bitmap/floatbitmap.h:323 */
	void Resize2D(FloatBitMap_t* , int, int, bool);
	/* ../public/bitmap/floatbitmap.h:324 */
	void ResizeWeightedAlpha(FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:327 */
	void GetAlphaBounds(const FloatBitMap_t* , int& , int& , int& , int& , float, int);
	/* ../public/bitmap/floatbitmap.h:329 */
	void QuarterSize(FloatBitMap_t* , FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:330 */
	void QuarterSizeBlocky(FloatBitMap_t* , FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:331 */
	void QuarterSizeWithGaussian(FloatBitMap_t* , FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:334 */
	void DownsampleNiceFiltered(FloatBitMap_t* , const DownsampleInfo_t& , FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:337 */
	void RaiseToPower(FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:338 */
	void ScaleGradients(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:339 */
	void Logize(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:340 */
	void UnLogize(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:346 */
	void CompressTo8Bits(FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:348 */
	void Uncompress(FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:350 */
	Vector4D AverageColor4D(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:351 */
	Vector AverageColor(const FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:352 */
	float BrightestColor(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:354 */
	void NormalMapToDXT5NM(FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:357 */
	void ScaleRGB(FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:360 */
	void ComputeVertexPositionsAndNormals(const FloatBitMap_t* , float, Vector** , Vector** );
	/* ../public/bitmap/floatbitmap.h:366 */
	FloatBitMap_t* ComputeSelfShadowedBumpmapFromHeightInAlphaChannel(const FloatBitMap_t* , float, float, const Vector* , int, int, uint32);
	/* ../public/bitmap/floatbitmap.h:376 */
	FloatBitMap_t* ComputeBumpmapFromHeightInAlphaChannel(const FloatBitMap_t* , float);
	/* ../public/bitmap/floatbitmap.h:382 */
	void TileableBilateralFilter(FloatBitMap_t* , int, float);
	/* ../public/bitmap/floatbitmap.h:389 */
	void EstimateDerivatives(FloatBitMap_t* , int, int, int);
	/* ../public/bitmap/floatbitmap.h:394 */
	void DrawLine(FloatBitMap_t* , int, int, int, int, int, float);
	/* ../public/bitmap/floatbitmap.h:397 */
	void DilateColorsIntoTransparentParts(FloatBitMap_t* , int);
	/* ../public/bitmap/floatbitmap.h:401 */
	void SetThreadPool(IThreadPool* );
protected:
	/* ../public/bitmap/floatbitmap.h:405 */
	bool WriteInMemoryEXRFast(const FloatBitMap_t* , CUtlBuffer& );
	/* ../public/bitmap/floatbitmap.h:407 */
	void TileableBilateralFilterPartial(FloatBitMap_t* , int, int, int, float, FloatBitMap_t* );
	/* ../public/bitmap/floatbitmap.h:409 */
	void QuarterSize2D(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:410 */
	void QuarterSize3D(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:411 */
	void QuarterSizeBlocky2D(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:412 */
	void QuarterSizeBlocky3D(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:414 */
	void QuarterSize2D_NP2(FloatBitMap_t* , FloatBitMap_t* , int, int);
	/* ../public/bitmap/floatbitmap.h:417 */
	void PackToRGBA8888_t(const FloatBitMap_t* , RGBA8888_t* , FBMAttribute_t, FBMAttribute_t, FBMAttribute_t, FBMAttribute_t);
	/* ../public/bitmap/floatbitmap.h:420 */
	void LoadFromRGBA8888BufferGammaToLinear(FloatBitMap_t* , const RGBA8888_t* , int);
	/* ../public/bitmap/floatbitmap.h:449 */
	void WriteToBufferRGBA16161616(const FloatBitMap_t* , RGBA16161616_t* , int);
	/* ../public/bitmap/floatbitmap.h:450 */
	void WriteToBufferRG1616(const FloatBitMap_t* , RG1616_t* , int);
	/* ../public/bitmap/floatbitmap.h:451 */
	void WriteToBufferR16(const FloatBitMap_t* , R16_t* , int);
	/* ../public/bitmap/floatbitmap.h:453 */
	int CoordWrap(int, int);
	static class IThreadPool * sm_pFBMThreadPool; /* 0 0 */
	void FloatBitMap_t(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_tC4Ev */
	void FloatBitMap_t(class FloatBitMap_t *, int, int, int, int); /* linkage=_ZN13FloatBitMap_tC4Eiiii */
	void FloatBitMap_t(class FloatBitMap_t *, const class FloatBitMap_t  *); /* linkage=_ZN13FloatBitMap_tC4EPKS_ */
	void FloatBitMap_t(class FloatBitMap_t *, const class FloatBitMap_t  &); /* linkage=_ZN13FloatBitMap_tC4ERKS_ */
	class FloatBitMap_t & operator=(class FloatBitMap_t *, const class FloatBitMap_t  &); /* linkage=_ZN13FloatBitMap_taSERKS_ */
	void FloatBitMap_t(class FloatBitMap_t *, const class Bitmap_t  &); /* linkage=_ZN13FloatBitMap_tC4ERK8Bitmap_t */
	void EncodeTo(class FloatBitMap_t *, class Bitmap_t *, enum ImageFormat, int, uint32); /* linkage=_ZN13FloatBitMap_t8EncodeToEP8Bitmap_t11ImageFormatij */
	void Init(class FloatBitMap_t *, int, int, int, int); /* linkage=_ZN13FloatBitMap_t4InitEiiii */
	void Init(class FloatBitMap_t *, int, int, int, const class FloatBitMap_t  *); /* linkage=_ZN13FloatBitMap_t4InitEiiiPKS_ */
	void Shutdown(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t8ShutdownEv */
	int GetAttributeMask(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t16GetAttributeMaskEv */
	bool HasAttributeData(const class FloatBitMap_t  *, enum FBMAttribute_t); /* linkage=_ZNK13FloatBitMap_t16HasAttributeDataE14FBMAttribute_t */
	int ComputeValidAttributeList(const class FloatBitMap_t  *, int *); /* linkage=_ZNK13FloatBitMap_t25ComputeValidAttributeListEPi */
	bool HasData(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t7HasDataEv */
	bool LoadFromFile(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t12LoadFromFileEPKc14FBMGammaType_t */
	bool LoadFromPFM(class FloatBitMap_t *, const char  *); /* linkage=_ZN13FloatBitMap_t11LoadFromPFMEPKc */
	bool LoadFromPSD(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t11LoadFromPSDEPKc14FBMGammaType_t */
	/* <4704b14> bitmap/floatbitmap.cpp:1427 */
	bool LoadFromTIF(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t11LoadFromTIFEPKc14FBMGammaType_t */
	/* <4704b7a> bitmap/floatbitmap.cpp:1465 */
	bool LoadFromPNG(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t11LoadFromPNGEPKc14FBMGammaType_t */
	/* <4704be0> bitmap/floatbitmap.cpp:1501 */
	bool LoadFromJPG(class FloatBitMap_t *, const char  *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t11LoadFromJPGEPKc14FBMGammaType_t */
	bool LoadFromEXR(class FloatBitMap_t *, const char  *); /* linkage=_ZN13FloatBitMap_t11LoadFromEXREPKc */
	bool LoadFromInMemoryEXR(class FloatBitMap_t *, const void  *, size_t); /* linkage=_ZN13FloatBitMap_t19LoadFromInMemoryEXREPKvm */
	bool LoadFromInMemoryTGA(class FloatBitMap_t *, const void  *, size_t); /* linkage=_ZN13FloatBitMap_t19LoadFromInMemoryTGAEPKvm */
	bool LoadFromInMemoryPSD(class FloatBitMap_t *, const void  *, size_t); /* linkage=_ZN13FloatBitMap_t19LoadFromInMemoryPSDEPKvm */
	bool LoadFromInMemoryTIF(class FloatBitMap_t *, const void  *, size_t); /* linkage=_ZN13FloatBitMap_t19LoadFromInMemoryTIFEPKvm */
	void InitializeWithRandomPixelsFromAnotherFloatBM(class FloatBitMap_t *, const class FloatBitMap_t  &); /* linkage=_ZN13FloatBitMap_t44InitializeWithRandomPixelsFromAnotherFloatBMERKS_ */
	void Clear(class FloatBitMap_t *, float, float, float, float); /* linkage=_ZN13FloatBitMap_t5ClearEffff */
	void LoadFromBuffer(class FloatBitMap_t *, const void  *, size_t, enum ImageFormat, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t14LoadFromBufferEPKvm11ImageFormat14FBMGammaType_t */
	void LoadFromFloatBitmap(class FloatBitMap_t *, const class FloatBitMap_t  *); /* linkage=_ZN13FloatBitMap_t19LoadFromFloatBitmapEPKS_ */
	/* <4704d14> bitmap/floatbitmap.cpp:652 */
	void CopyFloatBitmap(class FloatBitMap_t *, const class FloatBitMap_t  *); /* linkage=_ZN13FloatBitMap_t15CopyFloatBitmapEPKS_ */
	void CopyFloatBitmapSubrect(class FloatBitMap_t *, const class FloatBitMap_t  *, int, int, int, int, int, int); /* linkage=_ZN13FloatBitMap_t22CopyFloatBitmapSubrectEPKS_iiiiii */
	void SetChannel(class FloatBitMap_t *, int, float); /* linkage=_ZN13FloatBitMap_t10SetChannelEif */
	void Rotate90DegreesCW(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t17Rotate90DegreesCWEv */
	void Rotate90DegreesCCW(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t18Rotate90DegreesCCWEv */
	void Rotate180Degrees(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t16Rotate180DegreesEv */
	void MirrorHorizontally(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t18MirrorHorizontallyEv */
	void MirrorVertically(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t16MirrorVerticallyEv */
	void FloatBitMap_t(class FloatBitMap_t *, const char  *, bool); /* linkage=_ZN13FloatBitMap_tC4EPKcb */
	bool WriteTGAFile(const class FloatBitMap_t  *, const char  *); /* linkage=_ZNK13FloatBitMap_t12WriteTGAFileEPKc */
	bool WritePFM(class FloatBitMap_t *, const char  *); /* linkage=_ZN13FloatBitMap_t8WritePFMEPKc */
	bool WriteEXR(class FloatBitMap_t *, const char  *, int); /* linkage=_ZN13FloatBitMap_t8WriteEXREPKci */
	bool WriteToBuffer(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool, uint32); /* linkage=_ZNK13FloatBitMap_t13WriteToBufferEPvm11ImageFormatbbj */
	/* <4704e96> bitmap/floatbitmap.cpp:852 */
	bool WriteToBufferDXT(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferDXTEPvm11ImageFormatbb */
	bool WriteToBufferRuntimeDXT(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t23WriteToBufferRuntimeDXTEPvm11ImageFormatbb */
	bool WriteToBufferBC6H(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferBC6HEPvm11ImageFormatbb */
	bool WriteToBufferBC7(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferBC7EPvm11ImageFormatbb */
	bool WriteToBufferETC(const class FloatBitMap_t  *, void *, size_t, enum ImageFormat, bool, bool); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferETCEPvm11ImageFormatbb */
	bool WriteInMemoryEXR(const class FloatBitMap_t  *, class CUtlBuffer &, int); /* linkage=_ZNK13FloatBitMap_t16WriteInMemoryEXRER10CUtlBufferi */
	const float  & ConstantValue(const class FloatBitMap_t  *, int); /* linkage=_ZNK13FloatBitMap_t13ConstantValueEi */
	/* <4704532> ../public/bitmap/floatbitmap.h:520 */
	float & Pixel(const class FloatBitMap_t  *, int, int, int, int); /* linkage=_ZNK13FloatBitMap_t5PixelEiiii */
	float & PixelWrapped(const class FloatBitMap_t  *, int, int, int, int); /* linkage=_ZNK13FloatBitMap_t12PixelWrappedEiiii */
	/* <470481c> ../public/bitmap/floatbitmap.h:587 */
	float & PixelClamped(const class FloatBitMap_t  *, int, int, int, int); /* linkage=_ZNK13FloatBitMap_t12PixelClampedEiiii */
	/* <47049c7> ../public/bitmap/floatbitmap.h:596 */
	float & Alpha(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t5AlphaEiii */
	float & Pixel(const class FloatBitMap_t  *, const class IntVector2D  &, int); /* linkage=_ZNK13FloatBitMap_t5PixelERK11IntVector2Di */
	float & Pixel(const class FloatBitMap_t  *, const class IntVector3D  &, int); /* linkage=_ZNK13FloatBitMap_t5PixelERK11IntVector3Di */
	int PixelIndex(const class FloatBitMap_t  *, int, int, int, int); /* linkage=_ZNK13FloatBitMap_t10PixelIndexEiiii */
	class Vector RGBPixelAsVector(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t16RGBPixelAsVectorEiii */
	class Vector4D RGBAPixelAsVector4D(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t19RGBAPixelAsVector4DEiii */
	class Vector RGBPixelAsVectorWrapped(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t23RGBPixelAsVectorWrappedEiii */
	class Vector4D RGBAPixelAsVector4DWrapped(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t26RGBAPixelAsVector4DWrappedEiii */
	void SetRGBPixelFromVector(class FloatBitMap_t *, const class Vector  &, int, int, int); /* linkage=_ZN13FloatBitMap_t21SetRGBPixelFromVectorERK6Vectoriii */
	void SetRGBAPixelFromVector(class FloatBitMap_t *, const class Vector4D  &, int, int, int); /* linkage=_ZN13FloatBitMap_t22SetRGBAPixelFromVectorERK8Vector4Diii */
	class PixRGBAF PixelRGBAF(const class FloatBitMap_t  *, int, int, int); /* linkage=_ZNK13FloatBitMap_t10PixelRGBAFEiii */
	void WritePixelRGBAF(const class FloatBitMap_t  *, int, int, int, class PixRGBAF); /* linkage=_ZNK13FloatBitMap_t15WritePixelRGBAFEiii8PixRGBAF */
	void WritePixel(class FloatBitMap_t *, int, int, int, int, float); /* linkage=_ZN13FloatBitMap_t10WritePixelEiiiif */
	void ConvertGammaToLinear(class FloatBitMap_t *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t20ConvertGammaToLinearE14FBMGammaType_t */
	void ConvertLinearToGamma(class FloatBitMap_t *, enum FBMGammaType_t); /* linkage=_ZN13FloatBitMap_t20ConvertLinearToGammaE14FBMGammaType_t */
	class CSOAAttributeReference Red(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t3RedEv */
	class CSOAAttributeReference Green(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t5GreenEv */
	class CSOAAttributeReference Blue(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t4BlueEv */
	class CSOAAttributeReference Alpha(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t5AlphaEv */
	class CSOAConstAttributeReference Red(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t3RedEv */
	class CSOAConstAttributeReference Green(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t5GreenEv */
	class CSOAConstAttributeReference Blue(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t4BlueEv */
	class CSOAConstAttributeReference Alpha(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t5AlphaEv */
	void SmartPaste(class FloatBitMap_t *, const class FloatBitMap_t  &, int, int, uint32); /* linkage=_ZN13FloatBitMap_t10SmartPasteERKS_iij */
	void Poisson(class FloatBitMap_t *, class FloatBitMap_t * *, int, uint32); /* linkage=_ZN13FloatBitMap_t7PoissonEPPS_ij */
	void MakeTileable(class FloatBitMap_t *, int); /* linkage=_ZN13FloatBitMap_t12MakeTileableEi */
	void Resize2D(class FloatBitMap_t *, int, int, bool); /* linkage=_ZN13FloatBitMap_t8Resize2DEiib */
	void ResizeWeightedAlpha(class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t19ResizeWeightedAlphaEii */
	void GetAlphaBounds(const class FloatBitMap_t  *, int &, int &, int &, int &, float, int); /* linkage=_ZNK13FloatBitMap_t14GetAlphaBoundsERiS0_S0_S0_fi */
	void QuarterSize(class FloatBitMap_t *, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t11QuarterSizeEPS_ */
	void QuarterSizeBlocky(class FloatBitMap_t *, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t17QuarterSizeBlockyEPS_ */
	void QuarterSizeWithGaussian(class FloatBitMap_t *, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t23QuarterSizeWithGaussianEPS_ */
	void DownsampleNiceFiltered(class FloatBitMap_t *, const class DownsampleInfo_t  &, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t22DownsampleNiceFilteredERK16DownsampleInfo_tPS_ */
	void RaiseToPower(class FloatBitMap_t *, float); /* linkage=_ZN13FloatBitMap_t12RaiseToPowerEf */
	void ScaleGradients(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t14ScaleGradientsEv */
	void Logize(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t6LogizeEv */
	void UnLogize(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t8UnLogizeEv */
	void CompressTo8Bits(class FloatBitMap_t *, float); /* linkage=_ZN13FloatBitMap_t15CompressTo8BitsEf */
	void Uncompress(class FloatBitMap_t *, float); /* linkage=_ZN13FloatBitMap_t10UncompressEf */
	class Vector4D AverageColor4D(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t14AverageColor4DEv */
	class Vector AverageColor(const class FloatBitMap_t  *); /* linkage=_ZNK13FloatBitMap_t12AverageColorEv */
	float BrightestColor(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t14BrightestColorEv */
	void NormalMapToDXT5NM(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t17NormalMapToDXT5NMEv */
	void ScaleRGB(class FloatBitMap_t *, float); /* linkage=_ZN13FloatBitMap_t8ScaleRGBEf */
	void ComputeVertexPositionsAndNormals(const class FloatBitMap_t  *, float, class Vector * *, class Vector * *); /* linkage=_ZNK13FloatBitMap_t32ComputeVertexPositionsAndNormalsEfPP6VectorS2_ */
	class FloatBitMap_t * ComputeSelfShadowedBumpmapFromHeightInAlphaChannel(const class FloatBitMap_t  *, float, float, const class Vector  *, int, int, uint32); /* linkage=_ZNK13FloatBitMap_t50ComputeSelfShadowedBumpmapFromHeightInAlphaChannelEffPK6Vectoriij */
	class FloatBitMap_t * ComputeBumpmapFromHeightInAlphaChannel(const class FloatBitMap_t  *, float); /* linkage=_ZNK13FloatBitMap_t38ComputeBumpmapFromHeightInAlphaChannelEf */
	void TileableBilateralFilter(class FloatBitMap_t *, int, float); /* linkage=_ZN13FloatBitMap_t23TileableBilateralFilterEif */
	void EstimateDerivatives(class FloatBitMap_t *, int, int, int); /* linkage=_ZN13FloatBitMap_t19EstimateDerivativesEiii */
	void DrawLine(class FloatBitMap_t *, int, int, int, int, int, float); /* linkage=_ZN13FloatBitMap_t8DrawLineEiiiiif */
	void DilateColorsIntoTransparentParts(class FloatBitMap_t *, int); /* linkage=_ZN13FloatBitMap_t32DilateColorsIntoTransparentPartsEi */
	void SetThreadPool(class IThreadPool *); /* linkage=_ZN13FloatBitMap_t13SetThreadPoolEP11IThreadPool */
	bool WriteInMemoryEXRFast(const class FloatBitMap_t  *, class CUtlBuffer &); /* linkage=_ZNK13FloatBitMap_t20WriteInMemoryEXRFastER10CUtlBuffer */
	void TileableBilateralFilterPartial(class FloatBitMap_t *, int, int, int, float, class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_t30TileableBilateralFilterPartialEiiifPS_ */
	void QuarterSize2D(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t13QuarterSize2DEPS_ii */
	void QuarterSize3D(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t13QuarterSize3DEPS_ii */
	void QuarterSizeBlocky2D(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t19QuarterSizeBlocky2DEPS_ii */
	void QuarterSizeBlocky3D(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t19QuarterSizeBlocky3DEPS_ii */
	void QuarterSize2D_NP2(class FloatBitMap_t *, class FloatBitMap_t *, int, int); /* linkage=_ZN13FloatBitMap_t17QuarterSize2D_NP2EPS_ii */
	void PackToRGBA8888_t(const class FloatBitMap_t  *, class RGBA8888_t *, enum FBMAttribute_t, enum FBMAttribute_t, enum FBMAttribute_t, enum FBMAttribute_t); /* linkage=_ZNK13FloatBitMap_t16PackToRGBA8888_tEP10RGBA8888_t14FBMAttribute_tS2_S2_S2_ */
	void LoadFromRGBA8888BufferGammaToLinear(class FloatBitMap_t *, const class RGBA8888_t  *, int); /* linkage=_ZN13FloatBitMap_t35LoadFromRGBA8888BufferGammaToLinearEPK10RGBA8888_ti */
	void WriteToBufferRGBA16161616(const class FloatBitMap_t  *, class RGBA16161616_t *, int); /* linkage=_ZNK13FloatBitMap_t25WriteToBufferRGBA16161616EP14RGBA16161616_ti */
	void WriteToBufferRG1616(const class FloatBitMap_t  *, class RG1616_t *, int); /* linkage=_ZNK13FloatBitMap_t19WriteToBufferRG1616EP8RG1616_ti */
	void WriteToBufferR16(const class FloatBitMap_t  *, class R16_t *, int); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferR16EP5R16_ti */
	int CoordWrap(int, int); /* linkage=_ZN13FloatBitMap_t9CoordWrapEii */
	void ~FloatBitMap_t(class FloatBitMap_t *); /* linkage=_ZN13FloatBitMap_tD4Ev */
	void WriteToBufferRGBAFloat<RGBA32323232F_t>(const class FloatBitMap_t  *, class RGBA32323232F_t *, int); /* linkage=_ZNK13FloatBitMap_t22WriteToBufferRGBAFloatI15RGBA32323232F_tEEvPT_i */
	void WriteToBufferRGBFloat<RGB323232F_t>(const class FloatBitMap_t  *, class RGB323232F_t *, int); /* linkage=_ZNK13FloatBitMap_t21WriteToBufferRGBFloatI12RGB323232F_tEEvPT_i */
	void WriteToBufferRGFloat<RG3232F_t>(const class FloatBitMap_t  *, class RG3232F_t *, int); /* linkage=_ZNK13FloatBitMap_t20WriteToBufferRGFloatI9RG3232F_tEEvPT_i */
	void WriteToBufferRFloat<R32F_t>(const class FloatBitMap_t  *, class R32F_t *, int); /* linkage=_ZNK13FloatBitMap_t19WriteToBufferRFloatI6R32F_tEEvPT_i */
	void WriteToBufferRGBAFloat16<RGBA16161616F_t>(const class FloatBitMap_t  *, class RGBA16161616F_t *, int); /* linkage=_ZNK13FloatBitMap_t24WriteToBufferRGBAFloat16I15RGBA16161616F_tEEvPT_i */
	void WriteToBufferRGFloat16<RG1616F_t>(const class FloatBitMap_t  *, class RG1616F_t *, int); /* linkage=_ZNK13FloatBitMap_t22WriteToBufferRGFloat16I9RG1616F_tEEvPT_i */
	void WriteToBufferRFloat16<R16F_t>(const class FloatBitMap_t  *, class R16F_t *, int); /* linkage=_ZNK13FloatBitMap_t21WriteToBufferRFloat16I6R16F_tEEvPT_i */
	void WriteToBufferUVLX<UVLX8888_t>(const class FloatBitMap_t  *, class UVLX8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferUVLXI10UVLX8888_tEEvPT_i */
	void WriteToBufferUVWQ<UVWQ8888_t>(const class FloatBitMap_t  *, class UVWQ8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferUVWQI10UVWQ8888_tEEvPT_i */
	void WriteToBufferUV<UV88_t>(const class FloatBitMap_t  *, class UV88_t *, int); /* linkage=_ZNK13FloatBitMap_t15WriteToBufferUVI6UV88_tEEvPT_i */
	void WriteToBufferIA<IA88_t>(const class FloatBitMap_t  *, class IA88_t *, int); /* linkage=_ZNK13FloatBitMap_t15WriteToBufferIAI6IA88_tEEvPT_i */
	void WriteToBufferI<I8_t>(const class FloatBitMap_t  *, class I8_t *, int); /* linkage=_ZNK13FloatBitMap_t14WriteToBufferII4I8_tEEvPT_i */
	void WriteToBufferRGB<BGRX8888_t>(const class FloatBitMap_t  *, class BGRX8888_t *, int); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferRGBI10BGRX8888_tEEvPT_i */
	void WriteToBufferRGB<BGR888_t>(const class FloatBitMap_t  *, class BGR888_t *, int); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferRGBI8BGR888_tEEvPT_i */
	void WriteToBufferRGB<RGB888_t>(const class FloatBitMap_t  *, class RGB888_t *, int); /* linkage=_ZNK13FloatBitMap_t16WriteToBufferRGBI8RGB888_tEEvPT_i */
	void WriteToBufferRGBA<BGRA8888_t>(const class FloatBitMap_t  *, class BGRA8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBAI10BGRA8888_tEEvPT_i */
	void WriteToBufferRGBX<RGBA8888_t>(const class FloatBitMap_t  *, class RGBA8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBXI10RGBA8888_tEEvPT_i */
	void WriteToBufferRGBA<ABGR8888_t>(const class FloatBitMap_t  *, class ABGR8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBAI10ABGR8888_tEEvPT_i */
	void WriteToBufferRGBA<ARGB8888_t>(const class FloatBitMap_t  *, class ARGB8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBAI10ARGB8888_tEEvPT_i */
	void LoadFromBufferRFloat<R32F_t>(class FloatBitMap_t *, const class R32F_t  *, int); /* linkage=_ZN13FloatBitMap_t20LoadFromBufferRFloatI6R32F_tEEvPKT_i */
	void LoadFromBufferRGBAFloat<RGBA32323232F_t>(class FloatBitMap_t *, const class RGBA32323232F_t  *, int); /* linkage=_ZN13FloatBitMap_t23LoadFromBufferRGBAFloatI15RGBA32323232F_tEEvPKT_i */
	void LoadFromBufferRGBFloat<RGB323232F_t>(class FloatBitMap_t *, const class RGB323232F_t  *, int); /* linkage=_ZN13FloatBitMap_t22LoadFromBufferRGBFloatI12RGB323232F_tEEvPKT_i */
	void LoadFromBufferI<R16_t>(class FloatBitMap_t *, const class R16_t  *, int); /* linkage=_ZN13FloatBitMap_t15LoadFromBufferII5R16_tEEvPKT_i */
	void LoadFromBufferIA<RG1616_t>(class FloatBitMap_t *, const class RG1616_t  *, int); /* linkage=_ZN13FloatBitMap_t16LoadFromBufferIAI8RG1616_tEEvPKT_i */
	void LoadFromBufferRGBAFloat<RGBA16161616F_t>(class FloatBitMap_t *, const class RGBA16161616F_t  *, int); /* linkage=_ZN13FloatBitMap_t23LoadFromBufferRGBAFloatI15RGBA16161616F_tEEvPKT_i */
	void LoadFromBufferRGBA<RGBA16161616_t>(class FloatBitMap_t *, const class RGBA16161616_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI14RGBA16161616_tEEvPKT_i */
	void LoadFromBufferUVLX<UVLX8888_t>(class FloatBitMap_t *, const class UVLX8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferUVLXI10UVLX8888_tEEvPKT_i */
	void LoadFromBufferUVWQ<UVWQ8888_t>(class FloatBitMap_t *, const class UVWQ8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferUVWQI10UVWQ8888_tEEvPKT_i */
	void LoadFromBufferIA<IA88_t>(class FloatBitMap_t *, const class IA88_t  *, int); /* linkage=_ZN13FloatBitMap_t16LoadFromBufferIAI6IA88_tEEvPKT_i */
	void LoadFromBufferI<I8_t>(class FloatBitMap_t *, const class I8_t  *, int); /* linkage=_ZN13FloatBitMap_t15LoadFromBufferII4I8_tEEvPKT_i */
	void LoadFromBufferUV<UV88_t>(class FloatBitMap_t *, const class UV88_t  *, int); /* linkage=_ZN13FloatBitMap_t16LoadFromBufferUVI6UV88_tEEvPKT_i */
	void LoadFromBufferRGB<BGRX8888_t>(class FloatBitMap_t *, const class BGRX8888_t  *, int); /* linkage=_ZN13FloatBitMap_t17LoadFromBufferRGBI10BGRX8888_tEEvPKT_i */
	void LoadFromBufferRGB<BGR888_t>(class FloatBitMap_t *, const class BGR888_t  *, int); /* linkage=_ZN13FloatBitMap_t17LoadFromBufferRGBI8BGR888_tEEvPKT_i */
	void LoadFromBufferRGB<RGB888_t>(class FloatBitMap_t *, const class RGB888_t  *, int); /* linkage=_ZN13FloatBitMap_t17LoadFromBufferRGBI8RGB888_tEEvPKT_i */
	void LoadFromBufferRGBA<BGRA8888_t>(class FloatBitMap_t *, const class BGRA8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI10BGRA8888_tEEvPKT_i */
	void LoadFromBufferRGBA<ABGR8888_t>(class FloatBitMap_t *, const class ABGR8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI10ABGR8888_tEEvPKT_i */
	void LoadFromBufferRGBA<ARGB8888_t>(class FloatBitMap_t *, const class ARGB8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI10ARGB8888_tEEvPKT_i */
	void WriteToBufferBGRA<RGBA8888_t>(const class FloatBitMap_t  *, class RGBA8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferBGRAI10RGBA8888_tEEvPT_i */
	void WriteToBufferRGBA<RGBA8888_t>(const class FloatBitMap_t  *, class RGBA8888_t *, int); /* linkage=_ZNK13FloatBitMap_t17WriteToBufferRGBAI10RGBA8888_tEEvPT_i */
	void LoadFromBufferRGBA<RGBA8888_t>(class FloatBitMap_t *, const class RGBA8888_t  *, int); /* linkage=_ZN13FloatBitMap_t18LoadFromBufferRGBAI10RGBA8888_tEEvPKT_i */
};

// <047188D6> ../public/bitmap/floatbitmap.h:156
void FloatBitMap_t::FloatBitMap_t(int nWidth, int nHeight, int nDepth, int nAttributeMask)
{
} /* size: 0 */

// <0470294C> ../public/bitmap/floatbitmap.h:257
// variable: 1
inline void FloatBitMap_t::PixelIndex(int x, int y, int z, int nComp)
{
	int nChannels; // 259
} /* size: 0, variables: 1 */

// <04702933> ../public/bitmap/floatbitmap.h:298
inline void FloatBitMap_t::Red()
{
} /* size: 0 */

// <0470291A> ../public/bitmap/floatbitmap.h:299
inline void FloatBitMap_t::Green()
{
} /* size: 0 */

// <04702901> ../public/bitmap/floatbitmap.h:300
inline void FloatBitMap_t::Blue()
{
} /* size: 0 */

// <047028E8> ../public/bitmap/floatbitmap.h:301
inline void FloatBitMap_t::Alpha()
{
} /* size: 0 */

// <047028D1> ../public/bitmap/floatbitmap.h:461
void FloatBitMap_t::FloatBitMap_t()
{
} /* size: 0 */

// <047028B5> ../public/bitmap/floatbitmap.h:461
inline void FloatBitMap_t::FloatBitMap_t()
{
} /* size: 0 */

// <047BD0BF> ../public/bitmap/floatbitmap.h:468
// variable: 1
inline void FloatBitMap_t::GetAttributeMask()
{
	int nMask; // 470
} /* size: 0, variables: 1 */

// <04702769> ../public/bitmap/floatbitmap.h:468
// variable: 1
// function calls: 4
void FloatBitMap_t::GetAttributeMask()
{
	int nMask; // 470
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 471
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 473
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 475
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 477
} /* size: 14, variables: 1, inline expansions: 4 (6 bytes) */

// <04702733> ../public/bitmap/floatbitmap.h:485
// variable: 1
inline void FloatBitMap_t::ComputeValidAttributeList(int* pIndex)
{
	int nCount; // 487
} /* size: 0, variables: 1 */

// <013532B6> ../public/bitmap/floatbitmap.h:507
inline void CoordWrap(int nC, int nLimit)
{
} /* size: 0 */

// <047BCFF6> ../public/bitmap/floatbitmap.h:520
// variables: 5
inline void FloatBitMap_t::Pixel(int x, int y, int z, int comp)
{
	const char   __FUNCTION__; // 4722
	CUnalignedPointer<float> pData; // 535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 530
	}
} /* size: 0, variables: 2 */

// <047205A6> ../public/bitmap/floatbitmap.h:520
// variables: 5
inline void FloatBitMap_t::Pixel(int x, int y, int z, int comp)
{
	const char   __FUNCTION__; // 31653
	CUnalignedPointer<float> pData; // 535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 530
	}
} /* size: 0, variables: 2 */

// <04704532> ../public/bitmap/floatbitmap.h:520
// variable: 1
// function calls: 11
void FloatBitMap_t::Pixel(int x, int y, int z, int comp)
{
	CUnalignedPointer<float> pData; // 535
	CSOAContainer::NumCols(); // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	CSOAContainer::NumSlices(); // 526
	CSOAContainer::NumRows(); // 529
	{
	}
	CSOAContainer::NumSlices(); // 530
	{
	}
	_CUnalignedPointer_Base<float>::_Initialize(
			float* pOriginal);  // 145
	CUnalignedPointer<float>::CUnalignedPointer(
				Pointer_t pOriginal);  // 535
} /* size: 553, variables: 1, inline expansions: 11 (161 bytes) */

// <0470261E> ../public/bitmap/floatbitmap.h:520
// variables: 5
inline void FloatBitMap_t::Pixel(int x, int y, int z, int comp)
{
	const char   __FUNCTION__; // 48551
	CUnalignedPointer<float> pData; // 535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 530
	}
} /* size: 0, variables: 2 */

// <046910B7> ../public/bitmap/floatbitmap.h:520
// variables: 5
inline void FloatBitMap_t::Pixel(int x, int y, int z, int comp)
{
	const char   __FUNCTION__; // 44551
	CUnalignedPointer<float> pData; // 535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 530
	}
} /* size: 0, variables: 2 */

// <013531ED> ../public/bitmap/floatbitmap.h:520
// variables: 5
inline void FloatBitMap_t::Pixel(int x, int y, int z, int comp)
{
	const char   __FUNCTION__; // 46646
	CUnalignedPointer<float> pData; // 535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 530
	}
} /* size: 0, variables: 2 */

// <00FCCC5D> ../public/bitmap/floatbitmap.h:520
// variables: 5
inline void FloatBitMap_t::Pixel(int x, int y, int z, int comp)
{
	const char   __FUNCTION__; // 62860
	CUnalignedPointer<float> pData; // 535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 530
	}
} /* size: 0, variables: 2 */

// <00F18D19> ../public/bitmap/floatbitmap.h:520
// variables: 5
inline void FloatBitMap_t::Pixel(int x, int y, int z, int comp)
{
	const char   __FUNCTION__; // 59851
	CUnalignedPointer<float> pData; // 535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 530
	}
} /* size: 0, variables: 2 */

// <00EFAD91> ../public/bitmap/floatbitmap.h:520
// variables: 5
inline void FloatBitMap_t::Pixel(int x, int y, int z, int comp)
{
	const char   __FUNCTION__; // 11213
	CUnalignedPointer<float> pData; // 535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 530
	}
} /* size: 0, variables: 2 */

// <00E8982A> ../public/bitmap/floatbitmap.h:520
// variables: 5
inline void FloatBitMap_t::Pixel(int x, int y, int z, int comp)
{
	const char   __FUNCTION__; // 7213
	CUnalignedPointer<float> pData; // 535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 530
	}
} /* size: 0, variables: 2 */

// <0067E6EA> ../public/bitmap/floatbitmap.h:520
// variables: 5
inline void FloatBitMap_t::Pixel(int x, int y, int z, int comp)
{
	const char   __FUNCTION__; // 39750
	CUnalignedPointer<float> pData; // 535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 530
	}
} /* size: 0, variables: 2 */

// <005CA7A6> ../public/bitmap/floatbitmap.h:520
// variables: 5
inline void FloatBitMap_t::Pixel(int x, int y, int z, int comp)
{
	const char   __FUNCTION__; // 36741
	CUnalignedPointer<float> pData; // 535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 530
	}
} /* size: 0, variables: 2 */

// <0053B2B7> ../public/bitmap/floatbitmap.h:520
// variables: 5
inline void FloatBitMap_t::Pixel(int x, int y, int z, int comp)
{
	const char   __FUNCTION__; // 49639
	CUnalignedPointer<float> pData; // 535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 530
	}
} /* size: 0, variables: 2 */

// <047025F5> ../public/bitmap/floatbitmap.h:539
inline void FloatBitMap_t::ConstantValue(int comp)
{
} /* size: 0 */

// <013531A3> ../public/bitmap/floatbitmap.h:544
inline void FloatBitMap_t::PixelWrapped(int x, int y, int z, int comp)
{
} /* size: 0 */

// <01353163> ../public/bitmap/floatbitmap.h:552
inline void FloatBitMap_t::RGBPixelAsVector(int nX, int nY, int nZ)
{
} /* size: 0 */

// <0470481C> ../public/bitmap/floatbitmap.h:587
// function calls: 6
void FloatBitMap_t::PixelClamped(int x, int y, int z, int comp)
{
	CSOAContainer::NumCols(); // 590
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 590
	CSOAContainer::NumRows(); // 591
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 591
	CSOAContainer::NumSlices(); // 592
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 592
} /* size: 0, inline expansions: 6 (0 bytes) */

// <047025AB> ../public/bitmap/floatbitmap.h:587
inline void FloatBitMap_t::PixelClamped(int x, int y, int z, int comp)
{
} /* size: 0 */

// <047049C7> ../public/bitmap/floatbitmap.h:596
// function calls: 3
void FloatBitMap_t::Alpha(int x, int y, int z)
{
	CSOAContainer::NumCols(); // 598
	{
	}
	CSOAContainer::NumRows(); // 599
	{
	}
	CSOAContainer::NumSlices(); // 600
	{
	}
} /* size: 0, inline expansions: 3 (0 bytes) */

// <047024B0> ../public/bitmap/floatbitmap.h:596
// variables: 4
inline void FloatBitMap_t::Alpha(int x, int y, int z)
{
	const char   __FUNCTION__; // 48551
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 598
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 599
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 600
	}
} /* size: 0, variables: 1 */

// <0135306A> ../public/bitmap/floatbitmap.h:596
// variables: 4
inline void FloatBitMap_t::Alpha(int x, int y, int z)
{
	const char   __FUNCTION__; // 46646
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 598
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 599
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 600
	}
} /* size: 0, variables: 1 */

// <00EFAC23> ../public/bitmap/floatbitmap.h:596
// variables: 4
inline void FloatBitMap_t::Alpha(int x, int y, int z)
{
	const char   __FUNCTION__; // 11213
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 598
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 599
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 600
	}
} /* size: 0, variables: 1 */

// <04702402> ../public/bitmap/floatbitmap.h:604
// variables: 5
inline void FloatBitMap_t::PixelRGBAF(int x, int y, int z)
{
	const char   __FUNCTION__; // 48676
	PixRGBAF RetPix; // 610
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 606
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 607
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 608
	}
} /* size: 0, variables: 2 */

// <04691000> ../public/bitmap/floatbitmap.h:604
// variables: 5
inline void FloatBitMap_t::PixelRGBAF(int x, int y, int z)
{
	const char   __FUNCTION__; // 44593
	PixRGBAF RetPix; // 610
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 606
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 607
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 608
	}
} /* size: 0, variables: 2 */

// <00EFAB75> ../public/bitmap/floatbitmap.h:604
// variables: 5
inline void FloatBitMap_t::PixelRGBAF(int x, int y, int z)
{
	const char   __FUNCTION__; // 11338
	PixRGBAF RetPix; // 610
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 606
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 607
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 608
	}
} /* size: 0, variables: 2 */

// <00E89773> ../public/bitmap/floatbitmap.h:604
// variables: 5
inline void FloatBitMap_t::PixelRGBAF(int x, int y, int z)
{
	const char   __FUNCTION__; // 7255
	PixRGBAF RetPix; // 610
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 606
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 607
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 608
	}
} /* size: 0, variables: 2 */

// <0053B200> ../public/bitmap/floatbitmap.h:604
// variables: 5
inline void FloatBitMap_t::PixelRGBAF(int x, int y, int z)
{
	const char   __FUNCTION__; // 49681
	PixRGBAF RetPix; // 610
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 606
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 607
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 608
	}
} /* size: 0, variables: 2 */

// <047023B8> ../public/bitmap/floatbitmap.h:618
inline void FloatBitMap_t::WritePixelRGBAF(int x, int y, int z, PixRGBAF value)
{
} /* size: 0 */

// <046D76CC> ../public/bitmap/floatbitmap.h:634
// variables: 5
// function calls: 28
void FloatBitMap_t::LoadFromBufferRGBFloat<RGB323232F_t>(const RGB323232F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48995
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 636
	}
	{
		int z; // 637
		{
			int y; // 639
			{
				int x; // 641
				CSOAContainer::NumCols(); // 641
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 643
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 644
			}
			CSOAContainer::NumRows(); // 639
		}
		CSOAContainer::NumSlices(); // 637
	}
	CSOAContainer::NumCols(); // 636
	CSOAContainer::NumRows(); // 636
	CSOAContainer::NumSlices(); // 636
} /* size: 881, variables: 1, inline expansions: 3 (3 bytes) */

// <00ECFE3F> ../public/bitmap/floatbitmap.h:634
// variables: 5
// function calls: 28
void FloatBitMap_t::LoadFromBufferRGBFloat<RGB323232F_t>(const RGB323232F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11657
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 636
	}
	{
		int z; // 637
		{
			int y; // 639
			{
				int x; // 641
				CSOAContainer::NumCols(); // 641
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 643
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 644
			}
			CSOAContainer::NumRows(); // 639
		}
		CSOAContainer::NumSlices(); // 637
	}
	CSOAContainer::NumCols(); // 636
	CSOAContainer::NumRows(); // 636
	CSOAContainer::NumSlices(); // 636
} /* size: 881, variables: 1, inline expansions: 3 (3 bytes) */

// <046D6CF7> ../public/bitmap/floatbitmap.h:653
// variables: 5
void FloatBitMap_t::LoadFromBufferRFloat<R32F_t>(const R32F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48941
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 655
	}
	{
		int z; // 656
		{
			int y; // 658
			{
				int x; // 660
			}
		}
	}
} /* size: 0, variables: 1 */

// <00ECF46A> ../public/bitmap/floatbitmap.h:653
// variables: 5
void FloatBitMap_t::LoadFromBufferRFloat<R32F_t>(const R32F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11603
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 655
	}
	{
		int z; // 656
		{
			int y; // 658
			{
				int x; // 660
			}
		}
	}
} /* size: 0, variables: 1 */

// <00580EF7> ../public/bitmap/floatbitmap.h:653
// variables: 5
void FloatBitMap_t::LoadFromBufferRFloat<R32F_t>(const R32F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 54029
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 655
	}
	{
		int z; // 656
		{
			int y; // 658
			{
				int x; // 660
			}
		}
	}
} /* size: 0, variables: 1 */

// <046DC19A> ../public/bitmap/floatbitmap.h:669
// variables: 5
// function calls: 31
void FloatBitMap_t::LoadFromBufferRGB<RGB888_t>(const RGB888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48860
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		int z; // 672
		{
			int y; // 674
			{
				int x; // 676
				CSOAContainer::NumCols(); // 676
				RGB888_t::RToFloat(); // 678
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 678
				RGB888_t::GToFloat(); // 679
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 679
				RGB888_t::BToFloat(); // 680
			}
			CSOAContainer::NumRows(); // 674
		}
		CSOAContainer::NumSlices(); // 672
	}
	CSOAContainer::NumCols(); // 671
	CSOAContainer::NumRows(); // 671
	CSOAContainer::NumSlices(); // 671
} /* size: 985, variables: 1, inline expansions: 3 (3 bytes) */

// <046DAEA0> ../public/bitmap/floatbitmap.h:669
// variables: 5
// function calls: 31
void FloatBitMap_t::LoadFromBufferRGB<BGRX8888_t>(const BGRX8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48860
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		int z; // 672
		{
			int y; // 674
			{
				int x; // 676
				CSOAContainer::NumCols(); // 676
				BGRX8888_t::RToFloat(); // 678
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 678
				BGRX8888_t::GToFloat(); // 679
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 679
				BGRX8888_t::BToFloat(); // 680
			}
			CSOAContainer::NumRows(); // 674
		}
		CSOAContainer::NumSlices(); // 672
	}
	CSOAContainer::NumCols(); // 671
	CSOAContainer::NumRows(); // 671
	CSOAContainer::NumSlices(); // 671
} /* size: 1028, variables: 1, inline expansions: 3 (3 bytes) */

// <00ED490D> ../public/bitmap/floatbitmap.h:669
// variables: 5
// function calls: 31
void FloatBitMap_t::LoadFromBufferRGB<RGB888_t>(const RGB888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11522
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		int z; // 672
		{
			int y; // 674
			{
				int x; // 676
				CSOAContainer::NumCols(); // 676
				RGB888_t::RToFloat(); // 678
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 678
				RGB888_t::GToFloat(); // 679
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 679
				RGB888_t::BToFloat(); // 680
			}
			CSOAContainer::NumRows(); // 674
		}
		CSOAContainer::NumSlices(); // 672
	}
	CSOAContainer::NumCols(); // 671
	CSOAContainer::NumRows(); // 671
	CSOAContainer::NumSlices(); // 671
} /* size: 985, variables: 1, inline expansions: 3 (3 bytes) */

// <00ED3613> ../public/bitmap/floatbitmap.h:669
// variables: 5
// function calls: 31
void FloatBitMap_t::LoadFromBufferRGB<BGRX8888_t>(const BGRX8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11522
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		int z; // 672
		{
			int y; // 674
			{
				int x; // 676
				CSOAContainer::NumCols(); // 676
				BGRX8888_t::RToFloat(); // 678
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 678
				BGRX8888_t::GToFloat(); // 679
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 679
				BGRX8888_t::BToFloat(); // 680
			}
			CSOAContainer::NumRows(); // 674
		}
		CSOAContainer::NumSlices(); // 672
	}
	CSOAContainer::NumCols(); // 671
	CSOAContainer::NumRows(); // 671
	CSOAContainer::NumSlices(); // 671
} /* size: 1028, variables: 1, inline expansions: 3 (3 bytes) */

// <0058639A> ../public/bitmap/floatbitmap.h:669
// variables: 5
// function calls: 31
void FloatBitMap_t::LoadFromBufferRGB<RGB888_t>(const RGB888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 53948
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		int z; // 672
		{
			int y; // 674
			{
				int x; // 676
				CSOAContainer::NumCols(); // 676
				RGB888_t::RToFloat(); // 678
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 678
				RGB888_t::GToFloat(); // 679
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 679
				RGB888_t::BToFloat(); // 680
			}
			CSOAContainer::NumRows(); // 674
		}
		CSOAContainer::NumSlices(); // 672
	}
	CSOAContainer::NumCols(); // 671
	CSOAContainer::NumRows(); // 671
	CSOAContainer::NumSlices(); // 671
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <005850A0> ../public/bitmap/floatbitmap.h:669
// variables: 5
// function calls: 31
void FloatBitMap_t::LoadFromBufferRGB<BGRX8888_t>(const BGRX8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 53948
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		int z; // 672
		{
			int y; // 674
			{
				int x; // 676
				CSOAContainer::NumCols(); // 676
				BGRX8888_t::RToFloat(); // 678
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 678
				BGRX8888_t::GToFloat(); // 679
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 679
				BGRX8888_t::BToFloat(); // 680
			}
			CSOAContainer::NumRows(); // 674
		}
		CSOAContainer::NumSlices(); // 672
	}
	CSOAContainer::NumCols(); // 671
	CSOAContainer::NumRows(); // 671
	CSOAContainer::NumSlices(); // 671
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <046D928C> ../public/bitmap/floatbitmap.h:688
// variables: 29
// function calls: 18
void FloatBitMap_t::LoadFromBufferRGBAFloat<RGBA16161616F_t>(const RGBA16161616F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 49022
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 690
	}
	{
		int z; // 691
		{
			int y; // 693
			{
				int x; // 695
				CSOAContainer::NumCols(); // 695
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				IsInfinity(union float16bits in); // 631
				Convert16bitFloatTo32bits(short unsigned int input); // 676
				float16_with_assign::operator float(); // 698
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 676
				float16_with_assign::operator float(); // 699
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 676
				float16_with_assign::operator float(); // 700
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 676
				float16_with_assign::operator float(); // 697
			}
			CSOAContainer::NumRows(); // 693
		}
		CSOAContainer::NumSlices(); // 691
	}
	CSOAContainer::NumCols(); // 690
	CSOAContainer::NumRows(); // 690
	CSOAContainer::NumSlices(); // 690
} /* size: 1126, variables: 1, inline expansions: 3 (3 bytes) */

// <046D6DB7> ../public/bitmap/floatbitmap.h:688
// variables: 5
// function calls: 28
void FloatBitMap_t::LoadFromBufferRGBAFloat<RGBA32323232F_t>(const RGBA32323232F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 49022
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 690
	}
	{
		int z; // 691
		{
			int y; // 693
			{
				int x; // 695
				CSOAContainer::NumCols(); // 695
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 697
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 698
			}
			CSOAContainer::NumRows(); // 693
		}
		CSOAContainer::NumSlices(); // 691
	}
	CSOAContainer::NumCols(); // 690
	CSOAContainer::NumRows(); // 690
	CSOAContainer::NumSlices(); // 690
} /* size: 838, variables: 1, inline expansions: 3 (3 bytes) */

// <00ED19FF> ../public/bitmap/floatbitmap.h:688
// variables: 29
// function calls: 18
void FloatBitMap_t::LoadFromBufferRGBAFloat<RGBA16161616F_t>(const RGBA16161616F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11684
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 690
	}
	{
		int z; // 691
		{
			int y; // 693
			{
				int x; // 695
				CSOAContainer::NumCols(); // 695
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				IsInfinity(union float16bits in); // 631
				Convert16bitFloatTo32bits(short unsigned int input); // 676
				float16_with_assign::operator float(); // 698
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 676
				float16_with_assign::operator float(); // 699
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 676
				float16_with_assign::operator float(); // 700
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 676
				float16_with_assign::operator float(); // 697
			}
			CSOAContainer::NumRows(); // 693
		}
		CSOAContainer::NumSlices(); // 691
	}
	CSOAContainer::NumCols(); // 690
	CSOAContainer::NumRows(); // 690
	CSOAContainer::NumSlices(); // 690
} /* size: 1126, variables: 1, inline expansions: 3 (3 bytes) */

// <00ECF52A> ../public/bitmap/floatbitmap.h:688
// variables: 5
// function calls: 28
void FloatBitMap_t::LoadFromBufferRGBAFloat<RGBA32323232F_t>(const RGBA32323232F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11684
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 690
	}
	{
		int z; // 691
		{
			int y; // 693
			{
				int x; // 695
				CSOAContainer::NumCols(); // 695
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 697
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 698
			}
			CSOAContainer::NumRows(); // 693
		}
		CSOAContainer::NumSlices(); // 691
	}
	CSOAContainer::NumCols(); // 690
	CSOAContainer::NumRows(); // 690
	CSOAContainer::NumSlices(); // 690
} /* size: 838, variables: 1, inline expansions: 3 (3 bytes) */

// <0058348C> ../public/bitmap/floatbitmap.h:688
// variables: 29
// function calls: 18
void FloatBitMap_t::LoadFromBufferRGBAFloat<RGBA16161616F_t>(const RGBA16161616F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 54110
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 690
	}
	{
		int z; // 691
		{
			int y; // 693
			{
				int x; // 695
				CSOAContainer::NumCols(); // 695
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				IsInfinity(union float16bits in); // 631
				Convert16bitFloatTo32bits(short unsigned int input); // 676
				float16_with_assign::operator float(); // 698
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 676
				float16_with_assign::operator float(); // 699
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 676
				float16_with_assign::operator float(); // 700
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 676
				float16_with_assign::operator float(); // 697
			}
			CSOAContainer::NumRows(); // 693
		}
		CSOAContainer::NumSlices(); // 691
	}
	CSOAContainer::NumCols(); // 690
	CSOAContainer::NumRows(); // 690
	CSOAContainer::NumSlices(); // 690
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00580FB7> ../public/bitmap/floatbitmap.h:688
// variables: 5
// function calls: 28
void FloatBitMap_t::LoadFromBufferRGBAFloat<RGBA32323232F_t>(const RGBA32323232F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 54110
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 690
	}
	{
		int z; // 691
		{
			int y; // 693
			{
				int x; // 695
				CSOAContainer::NumCols(); // 695
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 697
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 698
			}
			CSOAContainer::NumRows(); // 693
		}
		CSOAContainer::NumSlices(); // 691
	}
	CSOAContainer::NumCols(); // 690
	CSOAContainer::NumRows(); // 690
	CSOAContainer::NumSlices(); // 690
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <046DCD1A> ../public/bitmap/floatbitmap.h:707
// variables: 9
void FloatBitMap_t::LoadFromBufferRGBA<ARGB8888_t>(const ARGB8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48887
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 709
	}
	{
		int z; // 710
		{
			int y; // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				{
					int x; // 718
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <046D991F> ../public/bitmap/floatbitmap.h:707
// variables: 9
void FloatBitMap_t::LoadFromBufferRGBA<RGBA16161616_t>(const RGBA16161616_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48887
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 709
	}
	{
		int z; // 710
		{
			int y; // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				{
					int x; // 718
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <00ED548D> ../public/bitmap/floatbitmap.h:707
// variables: 9
void FloatBitMap_t::LoadFromBufferRGBA<ARGB8888_t>(const ARGB8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11549
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 709
	}
	{
		int z; // 710
		{
			int y; // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				{
					int x; // 718
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <00ED2092> ../public/bitmap/floatbitmap.h:707
// variables: 9
void FloatBitMap_t::LoadFromBufferRGBA<RGBA16161616_t>(const RGBA16161616_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11549
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 709
	}
	{
		int z; // 710
		{
			int y; // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				{
					int x; // 718
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <00586F1A> ../public/bitmap/floatbitmap.h:707
// variables: 9
void FloatBitMap_t::LoadFromBufferRGBA<ARGB8888_t>(const ARGB8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 53975
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 709
	}
	{
		int z; // 710
		{
			int y; // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				{
					int x; // 718
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <00583B1F> ../public/bitmap/floatbitmap.h:707
// variables: 9
void FloatBitMap_t::LoadFromBufferRGBA<RGBA16161616_t>(const RGBA16161616_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 53975
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 709
	}
	{
		int z; // 710
		{
			int y; // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				{
					int x; // 718
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <046DA4BC> ../public/bitmap/floatbitmap.h:740
// variables: 5
// function calls: 29
void FloatBitMap_t::LoadFromBufferI<I8_t>(const I8_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48806
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 742
	}
	{
		int z; // 743
		{
			int y; // 745
			{
				int x; // 747
				CSOAContainer::NumCols(); // 747
				I8_t::IToFloat(); // 750
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 750
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 749
			}
			CSOAContainer::NumRows(); // 745
		}
		CSOAContainer::NumSlices(); // 743
	}
	CSOAContainer::NumCols(); // 742
	CSOAContainer::NumRows(); // 742
	CSOAContainer::NumSlices(); // 742
} /* size: 867, variables: 1, inline expansions: 3 (3 bytes) */

// <046D7FD5> ../public/bitmap/floatbitmap.h:740
// variables: 5
// function calls: 29
void FloatBitMap_t::LoadFromBufferI<R16_t>(const R16_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48806
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 742
	}
	{
		int z; // 743
		{
			int y; // 745
			{
				int x; // 747
				CSOAContainer::NumCols(); // 747
				R16_t::IToFloat(); // 750
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 750
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 749
			}
			CSOAContainer::NumRows(); // 745
		}
		CSOAContainer::NumSlices(); // 743
	}
	CSOAContainer::NumCols(); // 742
	CSOAContainer::NumRows(); // 742
	CSOAContainer::NumSlices(); // 742
} /* size: 875, variables: 1, inline expansions: 3 (3 bytes) */

// <00ED2C2F> ../public/bitmap/floatbitmap.h:740
// variables: 5
// function calls: 29
void FloatBitMap_t::LoadFromBufferI<I8_t>(const I8_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11468
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 742
	}
	{
		int z; // 743
		{
			int y; // 745
			{
				int x; // 747
				CSOAContainer::NumCols(); // 747
				I8_t::IToFloat(); // 750
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 750
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 749
			}
			CSOAContainer::NumRows(); // 745
		}
		CSOAContainer::NumSlices(); // 743
	}
	CSOAContainer::NumCols(); // 742
	CSOAContainer::NumRows(); // 742
	CSOAContainer::NumSlices(); // 742
} /* size: 867, variables: 1, inline expansions: 3 (3 bytes) */

// <00ED0748> ../public/bitmap/floatbitmap.h:740
// variables: 5
// function calls: 29
void FloatBitMap_t::LoadFromBufferI<R16_t>(const R16_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11468
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 742
	}
	{
		int z; // 743
		{
			int y; // 745
			{
				int x; // 747
				CSOAContainer::NumCols(); // 747
				R16_t::IToFloat(); // 750
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 750
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 749
			}
			CSOAContainer::NumRows(); // 745
		}
		CSOAContainer::NumSlices(); // 743
	}
	CSOAContainer::NumCols(); // 742
	CSOAContainer::NumRows(); // 742
	CSOAContainer::NumSlices(); // 742
} /* size: 875, variables: 1, inline expansions: 3 (3 bytes) */

// <005846BC> ../public/bitmap/floatbitmap.h:740
// variables: 5
// function calls: 29
void FloatBitMap_t::LoadFromBufferI<I8_t>(const I8_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 53894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 742
	}
	{
		int z; // 743
		{
			int y; // 745
			{
				int x; // 747
				CSOAContainer::NumCols(); // 747
				I8_t::IToFloat(); // 750
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 750
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 749
			}
			CSOAContainer::NumRows(); // 745
		}
		CSOAContainer::NumSlices(); // 743
	}
	CSOAContainer::NumCols(); // 742
	CSOAContainer::NumRows(); // 742
	CSOAContainer::NumSlices(); // 742
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <005821D5> ../public/bitmap/floatbitmap.h:740
// variables: 5
// function calls: 29
void FloatBitMap_t::LoadFromBufferI<R16_t>(const R16_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 53894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 742
	}
	{
		int z; // 743
		{
			int y; // 745
			{
				int x; // 747
				CSOAContainer::NumCols(); // 747
				R16_t::IToFloat(); // 750
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 750
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 749
			}
			CSOAContainer::NumRows(); // 745
		}
		CSOAContainer::NumSlices(); // 743
	}
	CSOAContainer::NumCols(); // 742
	CSOAContainer::NumRows(); // 742
	CSOAContainer::NumSlices(); // 742
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <046D9B4F> ../public/bitmap/floatbitmap.h:758
// variables: 5
// function calls: 30
void FloatBitMap_t::LoadFromBufferIA<IA88_t>(const IA88_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48833
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 760
	}
	{
		int z; // 761
		{
			int y; // 763
			{
				int x; // 765
				CSOAContainer::NumCols(); // 765
				IA88_t::IToFloat(); // 768
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 768
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 767
				IA88_t::AToFloat(); // 769
			}
			CSOAContainer::NumRows(); // 763
		}
		CSOAContainer::NumSlices(); // 761
	}
	CSOAContainer::NumCols(); // 760
	CSOAContainer::NumRows(); // 760
	CSOAContainer::NumSlices(); // 760
} /* size: 903, variables: 1, inline expansions: 3 (3 bytes) */

// <046D8919> ../public/bitmap/floatbitmap.h:758
// variables: 5
// function calls: 30
void FloatBitMap_t::LoadFromBufferIA<RG1616_t>(const RG1616_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48833
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 760
	}
	{
		int z; // 761
		{
			int y; // 763
			{
				int x; // 765
				CSOAContainer::NumCols(); // 765
				RG1616_t::IToFloat(); // 768
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 768
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 767
				RG1616_t::AToFloat(); // 769
			}
			CSOAContainer::NumRows(); // 763
		}
		CSOAContainer::NumSlices(); // 761
	}
	CSOAContainer::NumCols(); // 760
	CSOAContainer::NumRows(); // 760
	CSOAContainer::NumSlices(); // 760
} /* size: 903, variables: 1, inline expansions: 3 (3 bytes) */

// <00ED22C2> ../public/bitmap/floatbitmap.h:758
// variables: 5
// function calls: 30
void FloatBitMap_t::LoadFromBufferIA<IA88_t>(const IA88_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11495
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 760
	}
	{
		int z; // 761
		{
			int y; // 763
			{
				int x; // 765
				CSOAContainer::NumCols(); // 765
				IA88_t::IToFloat(); // 768
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 768
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 767
				IA88_t::AToFloat(); // 769
			}
			CSOAContainer::NumRows(); // 763
		}
		CSOAContainer::NumSlices(); // 761
	}
	CSOAContainer::NumCols(); // 760
	CSOAContainer::NumRows(); // 760
	CSOAContainer::NumSlices(); // 760
} /* size: 903, variables: 1, inline expansions: 3 (3 bytes) */

// <00ED108C> ../public/bitmap/floatbitmap.h:758
// variables: 5
// function calls: 30
void FloatBitMap_t::LoadFromBufferIA<RG1616_t>(const RG1616_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11495
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 760
	}
	{
		int z; // 761
		{
			int y; // 763
			{
				int x; // 765
				CSOAContainer::NumCols(); // 765
				RG1616_t::IToFloat(); // 768
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 768
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 767
				RG1616_t::AToFloat(); // 769
			}
			CSOAContainer::NumRows(); // 763
		}
		CSOAContainer::NumSlices(); // 761
	}
	CSOAContainer::NumCols(); // 760
	CSOAContainer::NumRows(); // 760
	CSOAContainer::NumSlices(); // 760
} /* size: 903, variables: 1, inline expansions: 3 (3 bytes) */

// <046DAE06> ../public/bitmap/floatbitmap.h:779
// variables: 4
void FloatBitMap_t::LoadFromBufferUV<UV88_t>(const UV88_t* pBuffer, int nPixelCount)
{
	float fl2O255; // 781
	{
		int z; // 782
		{
			int y; // 784
			{
				int x; // 786
			}
		}
	}
} /* size: 0, variables: 1 */

// <046D9AB5> ../public/bitmap/floatbitmap.h:798
// variables: 4
void FloatBitMap_t::LoadFromBufferUVWQ<UVWQ8888_t>(const UVWQ8888_t* pBuffer, int nPixelCount)
{
	float fl2O255; // 800
	{
		int z; // 801
		{
			int y; // 803
			{
				int x; // 805
			}
		}
	}
} /* size: 0, variables: 1 */

// <046D9A15> ../public/bitmap/floatbitmap.h:817
// variables: 4
void FloatBitMap_t::LoadFromBufferUVLX<UVLX8888_t>(const UVLX8888_t* pBuffer, int nPixelCount)
{
	float flOO255; // 819
	{
		int z; // 820
		{
			int y; // 822
			{
				int x; // 824
			}
		}
	}
} /* size: 0, variables: 1 */

// <046D0708> ../public/bitmap/floatbitmap.h:839
// variables: 5
void FloatBitMap_t::WriteToBufferRGFloat<RG3232F_t>(RG3232F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48941
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 841
	}
	{
		int z; // 842
		{
			int y; // 844
			{
				int x; // 846
			}
		}
	}
} /* size: 0, variables: 1 */

// <00EC8E7B> ../public/bitmap/floatbitmap.h:839
// variables: 5
void FloatBitMap_t::WriteToBufferRGFloat<RG3232F_t>(RG3232F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11603
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 841
	}
	{
		int z; // 842
		{
			int y; // 844
			{
				int x; // 846
			}
		}
	}
} /* size: 0, variables: 1 */

// <0057A908> ../public/bitmap/floatbitmap.h:839
// variables: 5
void FloatBitMap_t::WriteToBufferRGFloat<RG3232F_t>(RG3232F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 54029
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 841
	}
	{
		int z; // 842
		{
			int y; // 844
			{
				int x; // 846
			}
		}
	}
} /* size: 0, variables: 1 */

// <046CFE4E> ../public/bitmap/floatbitmap.h:856
// variables: 5
// function calls: 28
void FloatBitMap_t::WriteToBufferRGBFloat<RGB323232F_t>(RGB323232F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48968
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 858
	}
	{
		int z; // 859
		{
			int y; // 861
			{
				int x; // 863
				CSOAContainer::NumCols(); // 863
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 865
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 866
			}
			CSOAContainer::NumRows(); // 861
		}
		CSOAContainer::NumSlices(); // 859
	}
	CSOAContainer::NumCols(); // 858
	CSOAContainer::NumRows(); // 858
	CSOAContainer::NumSlices(); // 858
} /* size: 813, variables: 1, inline expansions: 3 (3 bytes) */

// <00EC85C1> ../public/bitmap/floatbitmap.h:856
// variables: 5
// function calls: 28
void FloatBitMap_t::WriteToBufferRGBFloat<RGB323232F_t>(RGB323232F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11630
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 858
	}
	{
		int z; // 859
		{
			int y; // 861
			{
				int x; // 863
				CSOAContainer::NumCols(); // 863
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 865
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 866
			}
			CSOAContainer::NumRows(); // 861
		}
		CSOAContainer::NumSlices(); // 859
	}
	CSOAContainer::NumCols(); // 858
	CSOAContainer::NumRows(); // 858
	CSOAContainer::NumSlices(); // 858
} /* size: 813, variables: 1, inline expansions: 3 (3 bytes) */

// <0057A04E> ../public/bitmap/floatbitmap.h:856
// variables: 5
// function calls: 28
void FloatBitMap_t::WriteToBufferRGBFloat<RGB323232F_t>(RGB323232F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 54056
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 858
	}
	{
		int z; // 859
		{
			int y; // 861
			{
				int x; // 863
				CSOAContainer::NumCols(); // 863
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 865
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 866
			}
			CSOAContainer::NumRows(); // 861
		}
		CSOAContainer::NumSlices(); // 859
	}
	CSOAContainer::NumCols(); // 858
	CSOAContainer::NumRows(); // 858
	CSOAContainer::NumSlices(); // 858
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <046D07C2> ../public/bitmap/floatbitmap.h:874
// variables: 5
void FloatBitMap_t::WriteToBufferRFloat<R32F_t>(R32F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48914
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 876
	}
	{
		int z; // 877
		{
			int y; // 879
			{
				int x; // 881
			}
		}
	}
} /* size: 0, variables: 1 */

// <00EC8F35> ../public/bitmap/floatbitmap.h:874
// variables: 5
void FloatBitMap_t::WriteToBufferRFloat<R32F_t>(R32F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11576
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 876
	}
	{
		int z; // 877
		{
			int y; // 879
			{
				int x; // 881
			}
		}
	}
} /* size: 0, variables: 1 */

// <0057A9C2> ../public/bitmap/floatbitmap.h:874
// variables: 5
void FloatBitMap_t::WriteToBufferRFloat<R32F_t>(R32F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 54002
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 876
	}
	{
		int z; // 877
		{
			int y; // 879
			{
				int x; // 881
			}
		}
	}
} /* size: 0, variables: 1 */

// <046D41C5> ../public/bitmap/floatbitmap.h:890
// variables: 5
// function calls: 34
void FloatBitMap_t::WriteToBufferRGB<RGB888_t>(RGB888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48833
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 892
	}
	{
		int z; // 893
		{
			int y; // 895
			{
				int x; // 897
				CSOAContainer::NumCols(); // 897
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 899
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 899
				RGB888_t::RFromFloat(
						float x);  // 899
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 900
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 900
				RGB888_t::GFromFloat(
						float x);  // 900
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 901
				RGB888_t::BFromFloat(
						float x);  // 901
			}
			CSOAContainer::NumRows(); // 895
		}
		CSOAContainer::NumSlices(); // 893
	}
	CSOAContainer::NumCols(); // 892
	CSOAContainer::NumRows(); // 892
	CSOAContainer::NumSlices(); // 892
} /* size: 983, variables: 1, inline expansions: 3 (3 bytes) */

// <046D2DF9> ../public/bitmap/floatbitmap.h:890
// variables: 5
// function calls: 34
void FloatBitMap_t::WriteToBufferRGB<BGRX8888_t>(BGRX8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48833
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 892
	}
	{
		int z; // 893
		{
			int y; // 895
			{
				int x; // 897
				CSOAContainer::NumCols(); // 897
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 899
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 899
				BGRX8888_t::RFromFloat(
						float f);  // 899
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 900
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 900
				BGRX8888_t::GFromFloat(
						float f);  // 900
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 901
				BGRX8888_t::BFromFloat(
						float f);  // 901
			}
			CSOAContainer::NumRows(); // 895
		}
		CSOAContainer::NumSlices(); // 893
	}
	CSOAContainer::NumCols(); // 892
	CSOAContainer::NumRows(); // 892
	CSOAContainer::NumSlices(); // 892
} /* size: 1015, variables: 1, inline expansions: 3 (3 bytes) */

// <00ECC938> ../public/bitmap/floatbitmap.h:890
// variables: 5
// function calls: 34
void FloatBitMap_t::WriteToBufferRGB<RGB888_t>(RGB888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11495
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 892
	}
	{
		int z; // 893
		{
			int y; // 895
			{
				int x; // 897
				CSOAContainer::NumCols(); // 897
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 899
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 899
				RGB888_t::RFromFloat(
						float x);  // 899
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 900
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 900
				RGB888_t::GFromFloat(
						float x);  // 900
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 901
				RGB888_t::BFromFloat(
						float x);  // 901
			}
			CSOAContainer::NumRows(); // 895
		}
		CSOAContainer::NumSlices(); // 893
	}
	CSOAContainer::NumCols(); // 892
	CSOAContainer::NumRows(); // 892
	CSOAContainer::NumSlices(); // 892
} /* size: 983, variables: 1, inline expansions: 3 (3 bytes) */

// <00ECB56C> ../public/bitmap/floatbitmap.h:890
// variables: 5
// function calls: 34
void FloatBitMap_t::WriteToBufferRGB<BGRX8888_t>(BGRX8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11495
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 892
	}
	{
		int z; // 893
		{
			int y; // 895
			{
				int x; // 897
				CSOAContainer::NumCols(); // 897
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 899
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 899
				BGRX8888_t::RFromFloat(
						float f);  // 899
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 900
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 900
				BGRX8888_t::GFromFloat(
						float f);  // 900
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 901
				BGRX8888_t::BFromFloat(
						float f);  // 901
			}
			CSOAContainer::NumRows(); // 895
		}
		CSOAContainer::NumSlices(); // 893
	}
	CSOAContainer::NumCols(); // 892
	CSOAContainer::NumRows(); // 892
	CSOAContainer::NumSlices(); // 892
} /* size: 1015, variables: 1, inline expansions: 3 (3 bytes) */

// <046CF565> ../public/bitmap/floatbitmap.h:908
// variables: 5
// function calls: 28
void FloatBitMap_t::WriteToBufferRGBAFloat<RGBA32323232F_t>(RGBA32323232F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48995
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 910
	}
	{
		int z; // 911
		{
			int y; // 913
			{
				int x; // 915
				CSOAContainer::NumCols(); // 915
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 917
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 918
			}
			CSOAContainer::NumRows(); // 913
		}
		CSOAContainer::NumSlices(); // 911
	}
	CSOAContainer::NumCols(); // 910
	CSOAContainer::NumRows(); // 910
	CSOAContainer::NumSlices(); // 910
} /* size: 792, variables: 1, inline expansions: 3 (3 bytes) */

// <00EC7CD8> ../public/bitmap/floatbitmap.h:908
// variables: 5
// function calls: 28
void FloatBitMap_t::WriteToBufferRGBAFloat<RGBA32323232F_t>(RGBA32323232F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11657
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 910
	}
	{
		int z; // 911
		{
			int y; // 913
			{
				int x; // 915
				CSOAContainer::NumCols(); // 915
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 917
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 918
			}
			CSOAContainer::NumRows(); // 913
		}
		CSOAContainer::NumSlices(); // 911
	}
	CSOAContainer::NumCols(); // 910
	CSOAContainer::NumRows(); // 910
	CSOAContainer::NumSlices(); // 910
} /* size: 792, variables: 1, inline expansions: 3 (3 bytes) */

// <046D123D> ../public/bitmap/floatbitmap.h:927
// variables: 5
// function calls: 30
void FloatBitMap_t::WriteToBufferRGFloat16<RG1616F_t>(RG1616F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48995
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 929
	}
	{
		int z; // 930
		{
			int y; // 932
			{
				int x; // 934
				CSOAContainer::NumCols(); // 934
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 936
				float16::SetFloat(
					float in);  // 936
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumCols(); // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 937
				float16::SetFloat(
					float in);  // 937
			}
			CSOAContainer::NumRows(); // 932
		}
		CSOAContainer::NumSlices(); // 930
	}
	CSOAContainer::NumCols(); // 929
	CSOAContainer::NumRows(); // 929
	CSOAContainer::NumSlices(); // 929
} /* size: 758, variables: 1, inline expansions: 3 (3 bytes) */

// <00EC99B0> ../public/bitmap/floatbitmap.h:927
// variables: 5
// function calls: 30
void FloatBitMap_t::WriteToBufferRGFloat16<RG1616F_t>(RG1616F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11657
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 929
	}
	{
		int z; // 930
		{
			int y; // 932
			{
				int x; // 934
				CSOAContainer::NumCols(); // 934
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 936
				float16::SetFloat(
					float in);  // 936
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumCols(); // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 937
				float16::SetFloat(
					float in);  // 937
			}
			CSOAContainer::NumRows(); // 932
		}
		CSOAContainer::NumSlices(); // 930
	}
	CSOAContainer::NumCols(); // 929
	CSOAContainer::NumRows(); // 929
	CSOAContainer::NumSlices(); // 929
} /* size: 758, variables: 1, inline expansions: 3 (3 bytes) */

// <046D0856> ../public/bitmap/floatbitmap.h:944
// variables: 5
// function calls: 32
void FloatBitMap_t::WriteToBufferRGBAFloat16<RGBA16161616F_t>(RGBA16161616F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 49049
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 946
	}
	{
		int z; // 947
		{
			int y; // 949
			{
				int x; // 951
				CSOAContainer::NumCols(); // 951
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 953
				float16::SetFloat(
					float in);  // 953
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 954
				float16::SetFloat(
					float in);  // 954
				float16::SetFloat(
					float in);  // 955
				float16::SetFloat(
					float in);  // 956
			}
			CSOAContainer::NumRows(); // 949
		}
		CSOAContainer::NumSlices(); // 947
	}
	CSOAContainer::NumCols(); // 946
	CSOAContainer::NumRows(); // 946
	CSOAContainer::NumSlices(); // 946
} /* size: 838, variables: 1, inline expansions: 3 (3 bytes) */

// <00EC8FC9> ../public/bitmap/floatbitmap.h:944
// variables: 5
// function calls: 32
void FloatBitMap_t::WriteToBufferRGBAFloat16<RGBA16161616F_t>(RGBA16161616F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11711
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 946
	}
	{
		int z; // 947
		{
			int y; // 949
			{
				int x; // 951
				CSOAContainer::NumCols(); // 951
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 953
				float16::SetFloat(
					float in);  // 953
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 954
				float16::SetFloat(
					float in);  // 954
				float16::SetFloat(
					float in);  // 955
				float16::SetFloat(
					float in);  // 956
			}
			CSOAContainer::NumRows(); // 949
		}
		CSOAContainer::NumSlices(); // 947
	}
	CSOAContainer::NumCols(); // 946
	CSOAContainer::NumRows(); // 946
	CSOAContainer::NumSlices(); // 946
} /* size: 838, variables: 1, inline expansions: 3 (3 bytes) */

// <0057AA56> ../public/bitmap/floatbitmap.h:944
// variables: 5
// function calls: 32
void FloatBitMap_t::WriteToBufferRGBAFloat16<RGBA16161616F_t>(RGBA16161616F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 54137
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 946
	}
	{
		int z; // 947
		{
			int y; // 949
			{
				int x; // 951
				CSOAContainer::NumCols(); // 951
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 953
				float16::SetFloat(
					float in);  // 953
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 954
				float16::SetFloat(
					float in);  // 954
				float16::SetFloat(
					float in);  // 955
				float16::SetFloat(
					float in);  // 956
			}
			CSOAContainer::NumRows(); // 949
		}
		CSOAContainer::NumSlices(); // 947
	}
	CSOAContainer::NumCols(); // 946
	CSOAContainer::NumRows(); // 946
	CSOAContainer::NumSlices(); // 946
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <046D1B48> ../public/bitmap/floatbitmap.h:963
// variables: 5
void FloatBitMap_t::WriteToBufferRFloat16<R16F_t>(R16F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48968
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		int z; // 966
		{
			int y; // 968
			{
				int x; // 970
			}
		}
	}
} /* size: 0, variables: 1 */

// <00ECA2BB> ../public/bitmap/floatbitmap.h:963
// variables: 5
void FloatBitMap_t::WriteToBufferRFloat16<R16F_t>(R16F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11630
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		int z; // 966
		{
			int y; // 968
			{
				int x; // 970
			}
		}
	}
} /* size: 0, variables: 1 */

// <0057BD48> ../public/bitmap/floatbitmap.h:963
// variables: 5
void FloatBitMap_t::WriteToBufferRFloat16<R16F_t>(R16F_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 54056
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		int z; // 966
		{
			int y; // 968
			{
				int x; // 970
			}
		}
	}
} /* size: 0, variables: 1 */

// <046D643F> ../public/bitmap/floatbitmap.h:979
// variables: 5
// function calls: 24
void FloatBitMap_t::WriteToBufferRGBA<ARGB8888_t>(ARGB8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48860
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 981
	}
	{
		int z; // 982
		{
			int y; // 984
			{
				int x; // 986
				CSOAContainer::NumCols(); // 986
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 988
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 988
				ARGB8888_t::RFromFloat(
						float x);  // 988
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 989
				ARGB8888_t::GFromFloat(
						float x);  // 989
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 990
				ARGB8888_t::BFromFloat(
						float x);  // 990
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 991
				ARGB8888_t::AFromFloat(
						float x);  // 991
			}
			CSOAContainer::NumRows(); // 984
		}
		CSOAContainer::NumSlices(); // 982
	}
	CSOAContainer::NumCols(); // 981
	CSOAContainer::NumRows(); // 981
	CSOAContainer::NumSlices(); // 981
} /* size: 776, variables: 1, inline expansions: 3 (3 bytes) */

// <00ECEBB2> ../public/bitmap/floatbitmap.h:979
// variables: 5
// function calls: 24
void FloatBitMap_t::WriteToBufferRGBA<ARGB8888_t>(ARGB8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11522
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 981
	}
	{
		int z; // 982
		{
			int y; // 984
			{
				int x; // 986
				CSOAContainer::NumCols(); // 986
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 988
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 988
				ARGB8888_t::RFromFloat(
						float x);  // 988
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 989
				ARGB8888_t::GFromFloat(
						float x);  // 989
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 990
				ARGB8888_t::BFromFloat(
						float x);  // 990
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 991
				ARGB8888_t::AFromFloat(
						float x);  // 991
			}
			CSOAContainer::NumRows(); // 984
		}
		CSOAContainer::NumSlices(); // 982
	}
	CSOAContainer::NumCols(); // 981
	CSOAContainer::NumRows(); // 981
	CSOAContainer::NumSlices(); // 981
} /* size: 776, variables: 1, inline expansions: 3 (3 bytes) */

// <0058063F> ../public/bitmap/floatbitmap.h:979
// variables: 5
// function calls: 24
void FloatBitMap_t::WriteToBufferRGBA<ARGB8888_t>(ARGB8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 53948
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 981
	}
	{
		int z; // 982
		{
			int y; // 984
			{
				int x; // 986
				CSOAContainer::NumCols(); // 986
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 988
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 988
				ARGB8888_t::RFromFloat(
						float x);  // 988
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 989
				ARGB8888_t::GFromFloat(
						float x);  // 989
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 990
				ARGB8888_t::BFromFloat(
						float x);  // 990
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 991
				ARGB8888_t::AFromFloat(
						float x);  // 991
			}
			CSOAContainer::NumRows(); // 984
		}
		CSOAContainer::NumSlices(); // 982
	}
	CSOAContainer::NumCols(); // 981
	CSOAContainer::NumRows(); // 981
	CSOAContainer::NumSlices(); // 981
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <046D52E8> ../public/bitmap/floatbitmap.h:1000
// variables: 5
// function calls: 35
void FloatBitMap_t::WriteToBufferRGBX<RGBA8888_t>(RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48860
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1002
	}
	{
		int z; // 1003
		{
			int y; // 1005
			{
				int x; // 1007
				CSOAContainer::NumCols(); // 1007
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 1009
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1009
				RGBA8888_t::RFromFloat(
						float x);  // 1009
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1010
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 1010
				RGBA8888_t::GFromFloat(
						float x);  // 1010
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 1011
				RGBA8888_t::BFromFloat(
						float x);  // 1011
				RGBA8888_t::AFrom10Bit(
						int a10);  // 1012
			}
			CSOAContainer::NumRows(); // 1005
		}
		CSOAContainer::NumSlices(); // 1003
	}
	CSOAContainer::NumCols(); // 1002
	CSOAContainer::NumRows(); // 1002
	CSOAContainer::NumSlices(); // 1002
} /* size: 1021, variables: 1, inline expansions: 3 (3 bytes) */

// <00ECDA5B> ../public/bitmap/floatbitmap.h:1000
// variables: 5
// function calls: 35
void FloatBitMap_t::WriteToBufferRGBX<RGBA8888_t>(RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11522
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1002
	}
	{
		int z; // 1003
		{
			int y; // 1005
			{
				int x; // 1007
				CSOAContainer::NumCols(); // 1007
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 1009
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1009
				RGBA8888_t::RFromFloat(
						float x);  // 1009
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1010
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 1010
				RGBA8888_t::GFromFloat(
						float x);  // 1010
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 1011
				RGBA8888_t::BFromFloat(
						float x);  // 1011
				RGBA8888_t::AFrom10Bit(
						int a10);  // 1012
			}
			CSOAContainer::NumRows(); // 1005
		}
		CSOAContainer::NumSlices(); // 1003
	}
	CSOAContainer::NumCols(); // 1002
	CSOAContainer::NumRows(); // 1002
	CSOAContainer::NumSlices(); // 1002
} /* size: 1021, variables: 1, inline expansions: 3 (3 bytes) */

// <0057F4E8> ../public/bitmap/floatbitmap.h:1000
// variables: 5
// function calls: 35
void FloatBitMap_t::WriteToBufferRGBX<RGBA8888_t>(RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 53948
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1002
	}
	{
		int z; // 1003
		{
			int y; // 1005
			{
				int x; // 1007
				CSOAContainer::NumCols(); // 1007
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 1009
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1009
				RGBA8888_t::RFromFloat(
						float x);  // 1009
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1010
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 1010
				RGBA8888_t::GFromFloat(
						float x);  // 1010
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 1011
				RGBA8888_t::BFromFloat(
						float x);  // 1011
				RGBA8888_t::AFrom10Bit(
						int a10);  // 1012
			}
			CSOAContainer::NumRows(); // 1005
		}
		CSOAContainer::NumSlices(); // 1003
	}
	CSOAContainer::NumCols(); // 1002
	CSOAContainer::NumRows(); // 1002
	CSOAContainer::NumSlices(); // 1002
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <046D2486> ../public/bitmap/floatbitmap.h:1048
// variables: 7
// function calls: 31
void FloatBitMap_t::WriteToBufferI<I8_t>(I8_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48779
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1050
	}
	{
		int z; // 1051
		{
			int y; // 1053
			{
				int x; // 1055
				{
					float i; // 1057
					int c; // 1058
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 1057
					CSOAContainer::NumCols(); // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					CSOAContainer::NumRows(); // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 1057
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 1059
					ConvertFrom10Bit<8>(int x); // 615
					I8_t::IFrom10Bit(
							int i10);  // 1059
				}
				CSOAContainer::NumCols(); // 1055
			}
			CSOAContainer::NumRows(); // 1053
		}
		CSOAContainer::NumSlices(); // 1051
	}
	CSOAContainer::NumCols(); // 1050
	CSOAContainer::NumRows(); // 1050
	CSOAContainer::NumSlices(); // 1050
} /* size: 898, variables: 1, inline expansions: 3 (3 bytes) */

// <00ECABF9> ../public/bitmap/floatbitmap.h:1048
// variables: 7
// function calls: 31
void FloatBitMap_t::WriteToBufferI<I8_t>(I8_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1050
	}
	{
		int z; // 1051
		{
			int y; // 1053
			{
				int x; // 1055
				{
					float i; // 1057
					int c; // 1058
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 1057
					CSOAContainer::NumCols(); // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					CSOAContainer::NumRows(); // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 1057
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 1059
					ConvertFrom10Bit<8>(int x); // 615
					I8_t::IFrom10Bit(
							int i10);  // 1059
				}
				CSOAContainer::NumCols(); // 1055
			}
			CSOAContainer::NumRows(); // 1053
		}
		CSOAContainer::NumSlices(); // 1051
	}
	CSOAContainer::NumCols(); // 1050
	CSOAContainer::NumRows(); // 1050
	CSOAContainer::NumSlices(); // 1050
} /* size: 898, variables: 1, inline expansions: 3 (3 bytes) */

// <0057C686> ../public/bitmap/floatbitmap.h:1048
// variables: 7
// function calls: 31
void FloatBitMap_t::WriteToBufferI<I8_t>(I8_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 53867
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1050
	}
	{
		int z; // 1051
		{
			int y; // 1053
			{
				int x; // 1055
				{
					float i; // 1057
					int c; // 1058
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 1057
					CSOAContainer::NumCols(); // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					CSOAContainer::NumRows(); // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 1057
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 1059
					ConvertFrom10Bit<8>(int x); // 615
					I8_t::IFrom10Bit(
							int i10);  // 1059
				}
				CSOAContainer::NumCols(); // 1055
			}
			CSOAContainer::NumRows(); // 1053
		}
		CSOAContainer::NumSlices(); // 1051
	}
	CSOAContainer::NumCols(); // 1050
	CSOAContainer::NumRows(); // 1050
	CSOAContainer::NumSlices(); // 1050
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <046D1D7F> ../public/bitmap/floatbitmap.h:1066
// variables: 7
// function calls: 22
void FloatBitMap_t::WriteToBufferIA<IA88_t>(IA88_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 48806
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1068
	}
	{
		int z; // 1069
		{
			int y; // 1071
			{
				int x; // 1073
				{
					float i; // 1075
					int c; // 1076
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 1075
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 1077
					ConvertFrom10Bit<8>(int x); // 631
					IA88_t::IFrom10Bit(
							int i10);  // 1077
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 1079
					ConvertFrom10Bit<8>(int x); // 632
					IA88_t::AFrom10Bit(
							int a10);  // 1079
				}
				CSOAContainer::NumCols(); // 1073
			}
			CSOAContainer::NumRows(); // 1071
		}
		CSOAContainer::NumSlices(); // 1069
	}
	CSOAContainer::NumCols(); // 1068
	CSOAContainer::NumRows(); // 1068
	CSOAContainer::NumSlices(); // 1068
} /* size: 682, variables: 1, inline expansions: 3 (3 bytes) */

// <00ECA4F2> ../public/bitmap/floatbitmap.h:1066
// variables: 7
// function calls: 22
void FloatBitMap_t::WriteToBufferIA<IA88_t>(IA88_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11468
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1068
	}
	{
		int z; // 1069
		{
			int y; // 1071
			{
				int x; // 1073
				{
					float i; // 1075
					int c; // 1076
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 1075
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 1077
					ConvertFrom10Bit<8>(int x); // 631
					IA88_t::IFrom10Bit(
							int i10);  // 1077
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 1079
					ConvertFrom10Bit<8>(int x); // 632
					IA88_t::AFrom10Bit(
							int a10);  // 1079
				}
				CSOAContainer::NumCols(); // 1073
			}
			CSOAContainer::NumRows(); // 1071
		}
		CSOAContainer::NumSlices(); // 1069
	}
	CSOAContainer::NumCols(); // 1068
	CSOAContainer::NumRows(); // 1068
	CSOAContainer::NumSlices(); // 1068
} /* size: 682, variables: 1, inline expansions: 3 (3 bytes) */

// <0057BF7F> ../public/bitmap/floatbitmap.h:1066
// variables: 7
// function calls: 22
void FloatBitMap_t::WriteToBufferIA<IA88_t>(IA88_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 53894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1068
	}
	{
		int z; // 1069
		{
			int y; // 1071
			{
				int x; // 1073
				{
					float i; // 1075
					int c; // 1076
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 1075
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 1077
					ConvertFrom10Bit<8>(int x); // 631
					IA88_t::IFrom10Bit(
							int i10);  // 1077
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 1079
					ConvertFrom10Bit<8>(int x); // 632
					IA88_t::AFrom10Bit(
							int a10);  // 1079
				}
				CSOAContainer::NumCols(); // 1073
			}
			CSOAContainer::NumRows(); // 1071
		}
		CSOAContainer::NumSlices(); // 1069
	}
	CSOAContainer::NumCols(); // 1068
	CSOAContainer::NumRows(); // 1068
	CSOAContainer::NumSlices(); // 1068
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <046D1D06> ../public/bitmap/floatbitmap.h:1089
// variables: 5
void FloatBitMap_t::WriteToBufferUV<UV88_t>(UV88_t* pBuffer, int nPixelCount)
{
	int c; // 1091
	float fl255O2; // 1092
	{
		int z; // 1093
		{
			int y; // 1095
			{
				int x; // 1097
			}
		}
	}
} /* size: 0, variables: 2 */

// <046D1C87> ../public/bitmap/floatbitmap.h:1109
// variables: 5
void FloatBitMap_t::WriteToBufferUVWQ<UVWQ8888_t>(UVWQ8888_t* pBuffer, int nPixelCount)
{
	int c; // 1111
	float fl255O2; // 1112
	{
		int z; // 1113
		{
			int y; // 1115
			{
				int x; // 1117
			}
		}
	}
} /* size: 0, variables: 2 */

// <046D1C08> ../public/bitmap/floatbitmap.h:1133
// variables: 5
void FloatBitMap_t::WriteToBufferUVLX<UVLX8888_t>(UVLX8888_t* pBuffer, int nPixelCount)
{
	int c; // 1135
	float fl255O2; // 1136
	{
		int z; // 1137
		{
			int y; // 1139
			{
				int x; // 1141
			}
		}
	}
} /* size: 0, variables: 2 */

