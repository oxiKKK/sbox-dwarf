
//
// fontmanager/texturedictionary.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 2
//	class: 1
//

// <00584A2F> fontmanager/texturedictionary.h:25
void ITextureDictionary::ITextureDictionary()
{
} /* size: 0 */

// <00584A12> fontmanager/texturedictionary.h:25
inline void ITextureDictionary::ITextureDictionary()
{
} /* size: 0 */

// <00563631> fontmanager/texturedictionary.h:25
// member functions: 48
// member variable: 1
// vtable entries: 20
// class size: 8
class ITextureDictionary {
	void ITextureDictionary(ITextureDictionary* , ITextureDictionary& );
	void ITextureDictionary(ITextureDictionary* , const ITextureDictionary& );
	void ITextureDictionary(ITextureDictionary* );
	void ~ITextureDictionary(ITextureDictionary* );
	int ()(void) * * _vptr.ITextureDictionary; /* 0 8 */
	/* fontmanager/texturedictionary.h:29 */
	virtual int CreateTexture(ITextureDictionary* , HRenderTexture);
	/* fontmanager/texturedictionary.h:30 */
	virtual void DestroyTexture(ITextureDictionary* , int);
	/* fontmanager/texturedictionary.h:31 */
	virtual void DestroyAllTextures(ITextureDictionary* );
	/* fontmanager/texturedictionary.h:34 */
	virtual bool IsValidId(const ITextureDictionary* , int);
	/* fontmanager/texturedictionary.h:37 */
	virtual void BindTextureToFile(ITextureDictionary* , int, const char* );
	/* fontmanager/texturedictionary.h:40 */
	virtual void BindTextureToMaterial(ITextureDictionary* , int, HMaterial, CRenderAttributes* );
	/* fontmanager/texturedictionary.h:42 */
	virtual void BindTextureToTextureHandle(ITextureDictionary* , int, HRenderTexture);
	/* fontmanager/texturedictionary.h:45 */
	virtual HMaterial GetMaterialHandle(ITextureDictionary* , int);
	/* fontmanager/texturedictionary.h:46 */
	virtual CRenderAttributes* GetMaterialSpecificRenderAttributes(ITextureDictionary* , int);
	/* fontmanager/texturedictionary.h:47 */
	virtual HRenderTexture GetTextureHandle(ITextureDictionary* , int);
	/* fontmanager/texturedictionary.h:48 */
	virtual bool GetTextureSize(ITextureDictionary* , int, int& , int& , bool);
	/* fontmanager/texturedictionary.h:49 */
	virtual void GetTextureTexCoords(ITextureDictionary* , int, float& , float& , float& , float& );
	/* fontmanager/texturedictionary.h:51 */
	virtual void SetTextureRGBA(ITextureDictionary* , const char* , int, const char* , int, int, ImageFormat);
	/* fontmanager/texturedictionary.h:52 */
	virtual void SetSubTextureRGBA(ITextureDictionary* , int, int, int, const unsigned char* , int, int);
	/* fontmanager/texturedictionary.h:54 */
	virtual int FindTextureIdForTextureFile(ITextureDictionary* , const char* );
	/* fontmanager/texturedictionary.h:58 */
	virtual bool GetTexCoordOffsetAndScale(ITextureDictionary* , int, Vector2D& , Vector2D& );
	/* fontmanager/texturedictionary.h:59 */
	virtual void SetTexCoordOffsetAndScale(ITextureDictionary* , int, const Vector2D& , const Vector2D& );
	/* fontmanager/texturedictionary.h:62 */
	virtual void ProcessDeferredResourceLoading(ITextureDictionary* );
	/* fontmanager/texturedictionary.h:66 */
	virtual void SetBatchingOptions(ITextureDictionary* , uint, uint, uint, uint);
	/* fontmanager/texturedictionary.h:69 */
	virtual void EnsureTextureIsLoaded(ITextureDictionary* , int);
	void ITextureDictionary(class ITextureDictionary *, class ITextureDictionary &); /* linkage=_ZN18ITextureDictionaryC4EOS_ */
	void ITextureDictionary(class ITextureDictionary *, const class ITextureDictionary  &); /* linkage=_ZN18ITextureDictionaryC4ERKS_ */
	void ITextureDictionary(class ITextureDictionary *); /* linkage=_ZN18ITextureDictionaryC4Ev */
	void ~ITextureDictionary(class ITextureDictionary *); /* linkage=_ZN18ITextureDictionaryD4Ev */
	virtual int CreateTexture(class ITextureDictionary *, HRenderTexture); /* linkage=_ZN18ITextureDictionary13CreateTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void DestroyTexture(class ITextureDictionary *, int); /* linkage=_ZN18ITextureDictionary14DestroyTextureEi */
	virtual void DestroyAllTextures(class ITextureDictionary *); /* linkage=_ZN18ITextureDictionary18DestroyAllTexturesEv */
	virtual bool IsValidId(const class ITextureDictionary  *, int); /* linkage=_ZNK18ITextureDictionary9IsValidIdEi */
	virtual void BindTextureToFile(class ITextureDictionary *, int, const char  *); /* linkage=_ZN18ITextureDictionary17BindTextureToFileEiPKc */
	virtual void BindTextureToMaterial(class ITextureDictionary *, int, HMaterial, class CRenderAttributes *); /* linkage=_ZN18ITextureDictionary21BindTextureToMaterialEi11CWeakHandleI29InfoForResourceTypeIMaterial2EP17CRenderAttributes */
	virtual void BindTextureToTextureHandle(class ITextureDictionary *, int, HRenderTexture); /* linkage=_ZN18ITextureDictionary26BindTextureToTextureHandleEi11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual HMaterial GetMaterialHandle(class ITextureDictionary *, int); /* linkage=_ZN18ITextureDictionary17GetMaterialHandleEi */
	virtual class CRenderAttributes * GetMaterialSpecificRenderAttributes(class ITextureDictionary *, int); /* linkage=_ZN18ITextureDictionary35GetMaterialSpecificRenderAttributesEi */
	virtual HRenderTexture GetTextureHandle(class ITextureDictionary *, int); /* linkage=_ZN18ITextureDictionary16GetTextureHandleEi */
	virtual bool GetTextureSize(class ITextureDictionary *, int, int &, int &, bool); /* linkage=_ZN18ITextureDictionary14GetTextureSizeEiRiS0_b */
	virtual void GetTextureTexCoords(class ITextureDictionary *, int, float &, float &, float &, float &); /* linkage=_ZN18ITextureDictionary19GetTextureTexCoordsEiRfS0_S0_S0_ */
	virtual void SetTextureRGBA(class ITextureDictionary *, const char  *, int, const char  *, int, int, enum ImageFormat); /* linkage=_ZN18ITextureDictionary14SetTextureRGBAEPKciS1_ii11ImageFormat */
	virtual void SetSubTextureRGBA(class ITextureDictionary *, int, int, int, const unsigned char  *, int, int); /* linkage=_ZN18ITextureDictionary17SetSubTextureRGBAEiiiPKhii */
	virtual int FindTextureIdForTextureFile(class ITextureDictionary *, const char  *); /* linkage=_ZN18ITextureDictionary27FindTextureIdForTextureFileEPKc */
	virtual bool GetTexCoordOffsetAndScale(class ITextureDictionary *, int, class Vector2D &, class Vector2D &); /* linkage=_ZN18ITextureDictionary25GetTexCoordOffsetAndScaleEiR8Vector2DS1_ */
	virtual void SetTexCoordOffsetAndScale(class ITextureDictionary *, int, const class Vector2D  &, const class Vector2D  &); /* linkage=_ZN18ITextureDictionary25SetTexCoordOffsetAndScaleEiRK8Vector2DS2_ */
	virtual void ProcessDeferredResourceLoading(class ITextureDictionary *); /* linkage=_ZN18ITextureDictionary30ProcessDeferredResourceLoadingEv */
	virtual void SetBatchingOptions(class ITextureDictionary *, uint, uint, uint, uint); /* linkage=_ZN18ITextureDictionary18SetBatchingOptionsEjjjj */
	virtual void EnsureTextureIsLoaded(class ITextureDictionary *, int); /* linkage=_ZN18ITextureDictionary21EnsureTextureIsLoadedEi */
};

