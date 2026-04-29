
//
// public/animationsystem/animvariant.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//
//	functions: 48
//	classes: 12
//	structs: 6
//

// <011E241F> ../public/animationsystem/animvariant.h:33
// member functions: 72
// member variables: 2
// class size: 17
class CAnimVariant {
	/* ../public/animationsystem/animvariant.h:38 */
	void CAnimVariant(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:39 */
	void CAnimVariant(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:40 */
	void CAnimVariant(CAnimVariant* , AnimParamType_t);
	/* ../public/animationsystem/animvariant.h:43 */
	CAnimVariant& operator=(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:45 */
	bool operator==(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:46 */
	bool operator!=(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:65 */
	CUtlString GetString(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:66 */
	void SetFromString(CAnimVariant* , const CUtlString& );
	/* ../public/animationsystem/animvariant.h:69 */
	AnimParamType_t GetType(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:71 */
	bool IsValid(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:73 */
	void Clear(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:75 */
	void KV3TransferSave(const CAnimVariant* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animvariant.h:76 */
	void KV3TransferLoad(CAnimVariant* , CKV3TransferLoadContext* );
private:
	/* ../public/animationsystem/animvariant.h:79 */
	const void* GetValueUntyped(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:80 */
	void SetValueUntyped(CAnimVariant* , AnimParamType_t, const void* );
	uint8 m_data[16]; /* 0 16 */
	AnimParamType_t m_nType; /* 16 1 */
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<CAnimEnum>(CAnimVariant* , const CAnimEnum& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<Quaternion>(CAnimVariant* , const Quaternion& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<Vector>(CAnimVariant* , const Vector& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<float>(CAnimVariant* , const float& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<int>(CAnimVariant* , const int& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<bool>(CAnimVariant* , const bool& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<Quaternion>(CAnimVariant* , const Quaternion& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<Vector>(CAnimVariant* , const Vector& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<float>(CAnimVariant* , const float& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<int>(CAnimVariant* , const int& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<CAnimEnum>(CAnimVariant* , const CAnimEnum& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<bool>(CAnimVariant* , const bool& );
	/* ../public/animationsystem/animvariant.h:194 */
	const Quaternion& GetValue<Quaternion>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const Vector& GetValue<Vector>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const float& GetValue<float>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const int& GetValue<int>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const CAnimEnum& GetValue<CAnimEnum>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const bool& GetValue<bool>(const CAnimVariant* );
	void CAnimVariant(class CAnimVariant *); /* linkage=_ZN12CAnimVariantC4Ev */
	void CAnimVariant(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantC4ERKS_ */
	void CAnimVariant(class CAnimVariant *, enum AnimParamType_t); /* linkage=_ZN12CAnimVariantC4E15AnimParamType_t */
	class CAnimVariant & operator=(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantaSERKS_ */
	bool operator==(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVarianteqERKS_ */
	bool operator!=(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVariantneERKS_ */
	class CUtlString GetString(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant9GetStringEv */
	void SetFromString(class CAnimVariant *, const class CUtlString  &); /* linkage=_ZN12CAnimVariant13SetFromStringERK10CUtlString */
	enum AnimParamType_t GetType(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7GetTypeEv */
	bool IsValid(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7IsValidEv */
	void Clear(class CAnimVariant *); /* linkage=_ZN12CAnimVariant5ClearEv */
	/* <8b2918> ../public/animationsystem/animvariant.h:343 */
	void KV3TransferSave(const class CAnimVariant  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAnimVariant15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b434d> ../public/animationsystem/animvariant.h:380 */
	void KV3TransferLoad(class CAnimVariant *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAnimVariant15KV3TransferLoadEP23CKV3TransferLoadContext */
	const void  * GetValueUntyped(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant15GetValueUntypedEv */
	void SetValueUntyped(class CAnimVariant *, enum AnimParamType_t, const void  *); /* linkage=_ZN12CAnimVariant15SetValueUntypedE15AnimParamType_tPKv */
	void CAnimVariant<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariantC4I9CAnimEnumEERKT_ */
	void CAnimVariant<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariantC4I10QuaternionEERKT_ */
	void CAnimVariant<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariantC4I6VectorEERKT_ */
	void CAnimVariant<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariantC4IfEERKT_ */
	void CAnimVariant<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariantC4IiEERKT_ */
	void CAnimVariant<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariantC4IbEERKT_ */
	void SetValue<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariant8SetValueI10QuaternionEEvRKT_ */
	void SetValue<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariant8SetValueI6VectorEEvRKT_ */
	void SetValue<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariant8SetValueIfEEvRKT_ */
	void SetValue<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariant8SetValueIiEEvRKT_ */
	void SetValue<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariant8SetValueI9CAnimEnumEEvRKT_ */
	void SetValue<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariant8SetValueIbEEvRKT_ */
	const class Quaternion  & GetValue<Quaternion>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEERKT_v */
	const class Vector  & GetValue<Vector>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEERKT_v */
	const float  & GetValue<float>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIfEERKT_v */
	const int  & GetValue<int>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIiEERKT_v */
	const class CAnimEnum  & GetValue<CAnimEnum>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEERKT_v */
	const bool  & GetValue<bool>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIbEERKT_v */
	bool GetValue<Vector>(const class CAnimVariant  *, class Vector &); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEEbRT_ */
	bool GetValue<Quaternion>(const class CAnimVariant  *, class Quaternion &); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEEbRT_ */
	bool GetValue<int>(const class CAnimVariant  *, int &); /* linkage=_ZNK12CAnimVariant8GetValueIiEEbRT_ */
	bool GetValue<float>(const class CAnimVariant  *, float &); /* linkage=_ZNK12CAnimVariant8GetValueIfEEbRT_ */
	bool GetValue<CAnimEnum>(const class CAnimVariant  *, class CAnimEnum &); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEEbRT_ */
	bool GetValue<bool>(const class CAnimVariant  *, bool &); /* linkage=_ZNK12CAnimVariant8GetValueIbEEbRT_ */
};

// <001F2F98> ../public/animationsystem/animvariant.h:33
// member functions: 54
// member variables: 2
// class size: 17
class CAnimVariant {
	/* ../public/animationsystem/animvariant.h:38 */
	void CAnimVariant(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:39 */
	void CAnimVariant(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:40 */
	void CAnimVariant(CAnimVariant* , AnimParamType_t);
	/* ../public/animationsystem/animvariant.h:43 */
	CAnimVariant& operator=(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:45 */
	bool operator==(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:46 */
	bool operator!=(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:65 */
	CUtlString GetString(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:66 */
	void SetFromString(CAnimVariant* , const CUtlString& );
	/* ../public/animationsystem/animvariant.h:69 */
	AnimParamType_t GetType(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:71 */
	bool IsValid(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:73 */
	void Clear(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:75 */
	void KV3TransferSave(const CAnimVariant* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animvariant.h:76 */
	void KV3TransferLoad(CAnimVariant* , CKV3TransferLoadContext* );
private:
	/* ../public/animationsystem/animvariant.h:79 */
	const void* GetValueUntyped(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:80 */
	void SetValueUntyped(CAnimVariant* , AnimParamType_t, const void* );
	uint8 m_data[16]; /* 0 16 */
	AnimParamType_t m_nType; /* 16 1 */
	void CAnimVariant(class CAnimVariant *); /* linkage=_ZN12CAnimVariantC4Ev */
	void CAnimVariant(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantC4ERKS_ */
	void CAnimVariant(class CAnimVariant *, enum AnimParamType_t); /* linkage=_ZN12CAnimVariantC4E15AnimParamType_t */
	class CAnimVariant & operator=(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantaSERKS_ */
	bool operator==(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVarianteqERKS_ */
	bool operator!=(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVariantneERKS_ */
	class CUtlString GetString(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant9GetStringEv */
	void SetFromString(class CAnimVariant *, const class CUtlString  &); /* linkage=_ZN12CAnimVariant13SetFromStringERK10CUtlString */
	enum AnimParamType_t GetType(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7GetTypeEv */
	bool IsValid(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7IsValidEv */
	void Clear(class CAnimVariant *); /* linkage=_ZN12CAnimVariant5ClearEv */
	/* <8b2918> ../public/animationsystem/animvariant.h:343 */
	void KV3TransferSave(const class CAnimVariant  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAnimVariant15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b434d> ../public/animationsystem/animvariant.h:380 */
	void KV3TransferLoad(class CAnimVariant *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAnimVariant15KV3TransferLoadEP23CKV3TransferLoadContext */
	const void  * GetValueUntyped(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant15GetValueUntypedEv */
	void SetValueUntyped(class CAnimVariant *, enum AnimParamType_t, const void  *); /* linkage=_ZN12CAnimVariant15SetValueUntypedE15AnimParamType_tPKv */
	void CAnimVariant<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariantC4I9CAnimEnumEERKT_ */
	void CAnimVariant<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariantC4I10QuaternionEERKT_ */
	void CAnimVariant<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariantC4I6VectorEERKT_ */
	void CAnimVariant<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariantC4IfEERKT_ */
	void CAnimVariant<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariantC4IiEERKT_ */
	void CAnimVariant<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariantC4IbEERKT_ */
	void SetValue<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariant8SetValueI10QuaternionEEvRKT_ */
	void SetValue<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariant8SetValueI6VectorEEvRKT_ */
	void SetValue<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariant8SetValueIfEEvRKT_ */
	void SetValue<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariant8SetValueIiEEvRKT_ */
	void SetValue<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariant8SetValueI9CAnimEnumEEvRKT_ */
	void SetValue<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariant8SetValueIbEEvRKT_ */
	const class Quaternion  & GetValue<Quaternion>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEERKT_v */
	const class Vector  & GetValue<Vector>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEERKT_v */
	const float  & GetValue<float>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIfEERKT_v */
	const int  & GetValue<int>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIiEERKT_v */
	const class CAnimEnum  & GetValue<CAnimEnum>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEERKT_v */
	const bool  & GetValue<bool>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIbEERKT_v */
	bool GetValue<Vector>(const class CAnimVariant  *, class Vector &); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEEbRT_ */
	bool GetValue<Quaternion>(const class CAnimVariant  *, class Quaternion &); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEEbRT_ */
	bool GetValue<int>(const class CAnimVariant  *, int &); /* linkage=_ZNK12CAnimVariant8GetValueIiEEbRT_ */
	bool GetValue<float>(const class CAnimVariant  *, float &); /* linkage=_ZNK12CAnimVariant8GetValueIfEEbRT_ */
	bool GetValue<CAnimEnum>(const class CAnimVariant  *, class CAnimEnum &); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEEbRT_ */
	bool GetValue<bool>(const class CAnimVariant  *, bool &); /* linkage=_ZNK12CAnimVariant8GetValueIbEEbRT_ */
};

// <003DEC89> ../public/animationsystem/animvariant.h:33
// member functions: 60
// member variables: 2
// class size: 17
class CAnimVariant {
	/* ../public/animationsystem/animvariant.h:36 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../public/animationsystem/animvariant.h:38 */
	void CAnimVariant(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:39 */
	void CAnimVariant(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:40 */
	void CAnimVariant(CAnimVariant* , AnimParamType_t);
	/* ../public/animationsystem/animvariant.h:43 */
	CAnimVariant& operator=(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:45 */
	bool operator==(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:46 */
	bool operator!=(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:65 */
	CUtlString GetString(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:66 */
	void SetFromString(CAnimVariant* , const CUtlString& );
	/* ../public/animationsystem/animvariant.h:69 */
	AnimParamType_t GetType(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:71 */
	bool IsValid(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:73 */
	void Clear(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:75 */
	void KV3TransferSave(const CAnimVariant* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animvariant.h:76 */
	void KV3TransferLoad(CAnimVariant* , CKV3TransferLoadContext* );
private:
	/* ../public/animationsystem/animvariant.h:79 */
	const void* GetValueUntyped(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:80 */
	void SetValueUntyped(CAnimVariant* , AnimParamType_t, const void* );
	uint8 m_data[16]; /* 0 16 */
	AnimParamType_t m_nType; /* 16 1 */
	/* ../public/animationsystem/animvariant.h:194 */
	const Quaternion& GetValue<Quaternion>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const Vector& GetValue<Vector>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const float& GetValue<float>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const int& GetValue<int>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const CAnimEnum& GetValue<CAnimEnum>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const bool& GetValue<bool>(const CAnimVariant* );
	void CAnimVariant(class CAnimVariant *); /* linkage=_ZN12CAnimVariantC4Ev */
	void CAnimVariant(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantC4ERKS_ */
	void CAnimVariant(class CAnimVariant *, enum AnimParamType_t); /* linkage=_ZN12CAnimVariantC4E15AnimParamType_t */
	class CAnimVariant & operator=(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantaSERKS_ */
	bool operator==(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVarianteqERKS_ */
	bool operator!=(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVariantneERKS_ */
	class CUtlString GetString(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant9GetStringEv */
	void SetFromString(class CAnimVariant *, const class CUtlString  &); /* linkage=_ZN12CAnimVariant13SetFromStringERK10CUtlString */
	enum AnimParamType_t GetType(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7GetTypeEv */
	bool IsValid(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7IsValidEv */
	void Clear(class CAnimVariant *); /* linkage=_ZN12CAnimVariant5ClearEv */
	/* <8b2918> ../public/animationsystem/animvariant.h:343 */
	void KV3TransferSave(const class CAnimVariant  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAnimVariant15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b434d> ../public/animationsystem/animvariant.h:380 */
	void KV3TransferLoad(class CAnimVariant *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAnimVariant15KV3TransferLoadEP23CKV3TransferLoadContext */
	const void  * GetValueUntyped(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant15GetValueUntypedEv */
	void SetValueUntyped(class CAnimVariant *, enum AnimParamType_t, const void  *); /* linkage=_ZN12CAnimVariant15SetValueUntypedE15AnimParamType_tPKv */
	void CAnimVariant<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariantC4I9CAnimEnumEERKT_ */
	void CAnimVariant<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariantC4I10QuaternionEERKT_ */
	void CAnimVariant<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariantC4I6VectorEERKT_ */
	void CAnimVariant<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariantC4IfEERKT_ */
	void CAnimVariant<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariantC4IiEERKT_ */
	void CAnimVariant<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariantC4IbEERKT_ */
	void SetValue<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariant8SetValueI10QuaternionEEvRKT_ */
	void SetValue<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariant8SetValueI6VectorEEvRKT_ */
	void SetValue<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariant8SetValueIfEEvRKT_ */
	void SetValue<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariant8SetValueIiEEvRKT_ */
	void SetValue<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariant8SetValueI9CAnimEnumEEvRKT_ */
	void SetValue<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariant8SetValueIbEEvRKT_ */
	const class Quaternion  & GetValue<Quaternion>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEERKT_v */
	const class Vector  & GetValue<Vector>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEERKT_v */
	const float  & GetValue<float>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIfEERKT_v */
	const int  & GetValue<int>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIiEERKT_v */
	const class CAnimEnum  & GetValue<CAnimEnum>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEERKT_v */
	const bool  & GetValue<bool>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIbEERKT_v */
	bool GetValue<Vector>(const class CAnimVariant  *, class Vector &); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEEbRT_ */
	bool GetValue<Quaternion>(const class CAnimVariant  *, class Quaternion &); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEEbRT_ */
	bool GetValue<int>(const class CAnimVariant  *, int &); /* linkage=_ZNK12CAnimVariant8GetValueIiEEbRT_ */
	bool GetValue<float>(const class CAnimVariant  *, float &); /* linkage=_ZNK12CAnimVariant8GetValueIfEEbRT_ */
	bool GetValue<CAnimEnum>(const class CAnimVariant  *, class CAnimEnum &); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEEbRT_ */
	bool GetValue<bool>(const class CAnimVariant  *, bool &); /* linkage=_ZNK12CAnimVariant8GetValueIbEEbRT_ */
};

// <00D8C123> ../public/animationsystem/animvariant.h:33
// member functions: 59
// member variables: 2
// class size: 17
class CAnimVariant {
	/* ../public/animationsystem/animvariant.h:38 */
	void CAnimVariant(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:39 */
	void CAnimVariant(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:40 */
	void CAnimVariant(CAnimVariant* , AnimParamType_t);
	/* ../public/animationsystem/animvariant.h:43 */
	CAnimVariant& operator=(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:45 */
	bool operator==(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:46 */
	bool operator!=(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:65 */
	CUtlString GetString(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:66 */
	void SetFromString(CAnimVariant* , const CUtlString& );
	/* ../public/animationsystem/animvariant.h:69 */
	AnimParamType_t GetType(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:71 */
	bool IsValid(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:73 */
	void Clear(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:75 */
	void KV3TransferSave(const CAnimVariant* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animvariant.h:76 */
	void KV3TransferLoad(CAnimVariant* , CKV3TransferLoadContext* );
private:
	/* ../public/animationsystem/animvariant.h:79 */
	const void* GetValueUntyped(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:80 */
	void SetValueUntyped(CAnimVariant* , AnimParamType_t, const void* );
	uint8 m_data[16]; /* 0 16 */
	AnimParamType_t m_nType; /* 16 1 */
	/* ../public/animationsystem/animvariant.h:194 */
	const Vector& GetValue<Vector>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const float& GetValue<float>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const int& GetValue<int>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const CAnimEnum& GetValue<CAnimEnum>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const bool& GetValue<bool>(const CAnimVariant* );
	void CAnimVariant(class CAnimVariant *); /* linkage=_ZN12CAnimVariantC4Ev */
	void CAnimVariant(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantC4ERKS_ */
	void CAnimVariant(class CAnimVariant *, enum AnimParamType_t); /* linkage=_ZN12CAnimVariantC4E15AnimParamType_t */
	class CAnimVariant & operator=(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantaSERKS_ */
	bool operator==(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVarianteqERKS_ */
	bool operator!=(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVariantneERKS_ */
	class CUtlString GetString(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant9GetStringEv */
	void SetFromString(class CAnimVariant *, const class CUtlString  &); /* linkage=_ZN12CAnimVariant13SetFromStringERK10CUtlString */
	enum AnimParamType_t GetType(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7GetTypeEv */
	bool IsValid(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7IsValidEv */
	void Clear(class CAnimVariant *); /* linkage=_ZN12CAnimVariant5ClearEv */
	/* <8b2918> ../public/animationsystem/animvariant.h:343 */
	void KV3TransferSave(const class CAnimVariant  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAnimVariant15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b434d> ../public/animationsystem/animvariant.h:380 */
	void KV3TransferLoad(class CAnimVariant *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAnimVariant15KV3TransferLoadEP23CKV3TransferLoadContext */
	const void  * GetValueUntyped(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant15GetValueUntypedEv */
	void SetValueUntyped(class CAnimVariant *, enum AnimParamType_t, const void  *); /* linkage=_ZN12CAnimVariant15SetValueUntypedE15AnimParamType_tPKv */
	void CAnimVariant<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariantC4I9CAnimEnumEERKT_ */
	void CAnimVariant<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariantC4I10QuaternionEERKT_ */
	void CAnimVariant<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariantC4I6VectorEERKT_ */
	void CAnimVariant<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariantC4IfEERKT_ */
	void CAnimVariant<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariantC4IiEERKT_ */
	void CAnimVariant<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariantC4IbEERKT_ */
	void SetValue<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariant8SetValueI10QuaternionEEvRKT_ */
	void SetValue<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariant8SetValueI6VectorEEvRKT_ */
	void SetValue<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariant8SetValueIfEEvRKT_ */
	void SetValue<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariant8SetValueIiEEvRKT_ */
	void SetValue<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariant8SetValueI9CAnimEnumEEvRKT_ */
	void SetValue<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariant8SetValueIbEEvRKT_ */
	const class Quaternion  & GetValue<Quaternion>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEERKT_v */
	const class Vector  & GetValue<Vector>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEERKT_v */
	const float  & GetValue<float>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIfEERKT_v */
	const int  & GetValue<int>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIiEERKT_v */
	const class CAnimEnum  & GetValue<CAnimEnum>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEERKT_v */
	const bool  & GetValue<bool>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIbEERKT_v */
	bool GetValue<Vector>(const class CAnimVariant  *, class Vector &); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEEbRT_ */
	bool GetValue<Quaternion>(const class CAnimVariant  *, class Quaternion &); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEEbRT_ */
	bool GetValue<int>(const class CAnimVariant  *, int &); /* linkage=_ZNK12CAnimVariant8GetValueIiEEbRT_ */
	bool GetValue<float>(const class CAnimVariant  *, float &); /* linkage=_ZNK12CAnimVariant8GetValueIfEEbRT_ */
	bool GetValue<CAnimEnum>(const class CAnimVariant  *, class CAnimEnum &); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEEbRT_ */
	bool GetValue<bool>(const class CAnimVariant  *, bool &); /* linkage=_ZNK12CAnimVariant8GetValueIbEEbRT_ */
};

// <014A2A5A> ../public/animationsystem/animvariant.h:33
// member functions: 76
// member variables: 2
// class size: 17
class CAnimVariant {
	/* ../public/animationsystem/animvariant.h:38 */
	void CAnimVariant(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:39 */
	void CAnimVariant(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:40 */
	void CAnimVariant(CAnimVariant* , AnimParamType_t);
	/* ../public/animationsystem/animvariant.h:43 */
	CAnimVariant& operator=(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:45 */
	bool operator==(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:46 */
	bool operator!=(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:65 */
	CUtlString GetString(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:66 */
	void SetFromString(CAnimVariant* , const CUtlString& );
	/* ../public/animationsystem/animvariant.h:69 */
	AnimParamType_t GetType(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:71 */
	bool IsValid(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:73 */
	void Clear(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:75 */
	void KV3TransferSave(const CAnimVariant* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animvariant.h:76 */
	void KV3TransferLoad(CAnimVariant* , CKV3TransferLoadContext* );
private:
	/* ../public/animationsystem/animvariant.h:79 */
	const void* GetValueUntyped(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:80 */
	void SetValueUntyped(CAnimVariant* , AnimParamType_t, const void* );
	uint8 m_data[16]; /* 0 16 */
	AnimParamType_t m_nType; /* 16 1 */
	/* ../public/animationsystem/animvariant.h:215 */
	bool GetValue<Vector>(const CAnimVariant* , Vector& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<Vector>(CAnimVariant* , const Vector& );
	/* ../public/animationsystem/animvariant.h:215 */
	bool GetValue<Quaternion>(const CAnimVariant* , Quaternion& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<Quaternion>(CAnimVariant* , const Quaternion& );
	/* ../public/animationsystem/animvariant.h:215 */
	bool GetValue<int>(const CAnimVariant* , int& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<int>(CAnimVariant* , const int& );
	/* ../public/animationsystem/animvariant.h:215 */
	bool GetValue<float>(const CAnimVariant* , float& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<float>(CAnimVariant* , const float& );
	/* ../public/animationsystem/animvariant.h:215 */
	bool GetValue<CAnimEnum>(const CAnimVariant* , CAnimEnum& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<CAnimEnum>(CAnimVariant* , const CAnimEnum& );
	/* ../public/animationsystem/animvariant.h:215 */
	bool GetValue<bool>(const CAnimVariant* , bool& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<bool>(CAnimVariant* , const bool& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<Quaternion>(CAnimVariant* , const Quaternion& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<Vector>(CAnimVariant* , const Vector& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<float>(CAnimVariant* , const float& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<int>(CAnimVariant* , const int& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<CAnimEnum>(CAnimVariant* , const CAnimEnum& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<bool>(CAnimVariant* , const bool& );
	/* ../public/animationsystem/animvariant.h:194 */
	const Quaternion& GetValue<Quaternion>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const float& GetValue<float>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const int& GetValue<int>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const CAnimEnum& GetValue<CAnimEnum>(const CAnimVariant* );
	void CAnimVariant(class CAnimVariant *); /* linkage=_ZN12CAnimVariantC4Ev */
	void CAnimVariant(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantC4ERKS_ */
	void CAnimVariant(class CAnimVariant *, enum AnimParamType_t); /* linkage=_ZN12CAnimVariantC4E15AnimParamType_t */
	class CAnimVariant & operator=(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantaSERKS_ */
	bool operator==(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVarianteqERKS_ */
	bool operator!=(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVariantneERKS_ */
	class CUtlString GetString(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant9GetStringEv */
	void SetFromString(class CAnimVariant *, const class CUtlString  &); /* linkage=_ZN12CAnimVariant13SetFromStringERK10CUtlString */
	enum AnimParamType_t GetType(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7GetTypeEv */
	bool IsValid(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7IsValidEv */
	void Clear(class CAnimVariant *); /* linkage=_ZN12CAnimVariant5ClearEv */
	/* <8b2918> ../public/animationsystem/animvariant.h:343 */
	void KV3TransferSave(const class CAnimVariant  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAnimVariant15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b434d> ../public/animationsystem/animvariant.h:380 */
	void KV3TransferLoad(class CAnimVariant *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAnimVariant15KV3TransferLoadEP23CKV3TransferLoadContext */
	const void  * GetValueUntyped(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant15GetValueUntypedEv */
	void SetValueUntyped(class CAnimVariant *, enum AnimParamType_t, const void  *); /* linkage=_ZN12CAnimVariant15SetValueUntypedE15AnimParamType_tPKv */
	void CAnimVariant<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariantC4I9CAnimEnumEERKT_ */
	void CAnimVariant<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariantC4I10QuaternionEERKT_ */
	void CAnimVariant<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariantC4I6VectorEERKT_ */
	void CAnimVariant<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariantC4IfEERKT_ */
	void CAnimVariant<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariantC4IiEERKT_ */
	void CAnimVariant<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariantC4IbEERKT_ */
	void SetValue<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariant8SetValueI10QuaternionEEvRKT_ */
	void SetValue<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariant8SetValueI6VectorEEvRKT_ */
	void SetValue<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariant8SetValueIfEEvRKT_ */
	void SetValue<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariant8SetValueIiEEvRKT_ */
	void SetValue<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariant8SetValueI9CAnimEnumEEvRKT_ */
	void SetValue<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariant8SetValueIbEEvRKT_ */
	const class Quaternion  & GetValue<Quaternion>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEERKT_v */
	const class Vector  & GetValue<Vector>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEERKT_v */
	const float  & GetValue<float>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIfEERKT_v */
	const int  & GetValue<int>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIiEERKT_v */
	const class CAnimEnum  & GetValue<CAnimEnum>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEERKT_v */
	const bool  & GetValue<bool>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIbEERKT_v */
	bool GetValue<Vector>(const class CAnimVariant  *, class Vector &); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEEbRT_ */
	bool GetValue<Quaternion>(const class CAnimVariant  *, class Quaternion &); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEEbRT_ */
	bool GetValue<int>(const class CAnimVariant  *, int &); /* linkage=_ZNK12CAnimVariant8GetValueIiEEbRT_ */
	bool GetValue<float>(const class CAnimVariant  *, float &); /* linkage=_ZNK12CAnimVariant8GetValueIfEEbRT_ */
	bool GetValue<CAnimEnum>(const class CAnimVariant  *, class CAnimEnum &); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEEbRT_ */
	bool GetValue<bool>(const class CAnimVariant  *, bool &); /* linkage=_ZNK12CAnimVariant8GetValueIbEEbRT_ */
};

// <015092B1> ../public/animationsystem/animvariant.h:33
// member functions: 74
// member variables: 2
// class size: 17
class CAnimVariant {
	/* ../public/animationsystem/animvariant.h:38 */
	void CAnimVariant(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:39 */
	void CAnimVariant(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:40 */
	void CAnimVariant(CAnimVariant* , AnimParamType_t);
	/* ../public/animationsystem/animvariant.h:43 */
	CAnimVariant& operator=(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:45 */
	bool operator==(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:46 */
	bool operator!=(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:65 */
	CUtlString GetString(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:66 */
	void SetFromString(CAnimVariant* , const CUtlString& );
	/* ../public/animationsystem/animvariant.h:69 */
	AnimParamType_t GetType(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:71 */
	bool IsValid(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:73 */
	void Clear(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:75 */
	void KV3TransferSave(const CAnimVariant* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animvariant.h:76 */
	void KV3TransferLoad(CAnimVariant* , CKV3TransferLoadContext* );
private:
	/* ../public/animationsystem/animvariant.h:79 */
	const void* GetValueUntyped(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:80 */
	void SetValueUntyped(CAnimVariant* , AnimParamType_t, const void* );
	uint8 m_data[16]; /* 0 16 */
	AnimParamType_t m_nType; /* 16 1 */
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<Quaternion>(CAnimVariant* , const Quaternion& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<Vector>(CAnimVariant* , const Vector& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<float>(CAnimVariant* , const float& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<int>(CAnimVariant* , const int& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<CAnimEnum>(CAnimVariant* , const CAnimEnum& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<bool>(CAnimVariant* , const bool& );
	/* ../public/animationsystem/animvariant.h:215 */
	bool GetValue<Vector>(const CAnimVariant* , Vector& );
	/* ../public/animationsystem/animvariant.h:215 */
	bool GetValue<float>(const CAnimVariant* , float& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<Quaternion>(CAnimVariant* , const Quaternion& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<Vector>(CAnimVariant* , const Vector& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<float>(CAnimVariant* , const float& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<int>(CAnimVariant* , const int& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<CAnimEnum>(CAnimVariant* , const CAnimEnum& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<bool>(CAnimVariant* , const bool& );
	/* ../public/animationsystem/animvariant.h:194 */
	const Quaternion& GetValue<Quaternion>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const Vector& GetValue<Vector>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const float& GetValue<float>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const int& GetValue<int>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const CAnimEnum& GetValue<CAnimEnum>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const bool& GetValue<bool>(const CAnimVariant* );
	void CAnimVariant(class CAnimVariant *); /* linkage=_ZN12CAnimVariantC4Ev */
	void CAnimVariant(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantC4ERKS_ */
	void CAnimVariant(class CAnimVariant *, enum AnimParamType_t); /* linkage=_ZN12CAnimVariantC4E15AnimParamType_t */
	class CAnimVariant & operator=(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantaSERKS_ */
	bool operator==(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVarianteqERKS_ */
	bool operator!=(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVariantneERKS_ */
	class CUtlString GetString(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant9GetStringEv */
	void SetFromString(class CAnimVariant *, const class CUtlString  &); /* linkage=_ZN12CAnimVariant13SetFromStringERK10CUtlString */
	enum AnimParamType_t GetType(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7GetTypeEv */
	bool IsValid(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7IsValidEv */
	void Clear(class CAnimVariant *); /* linkage=_ZN12CAnimVariant5ClearEv */
	/* <8b2918> ../public/animationsystem/animvariant.h:343 */
	void KV3TransferSave(const class CAnimVariant  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAnimVariant15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b434d> ../public/animationsystem/animvariant.h:380 */
	void KV3TransferLoad(class CAnimVariant *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAnimVariant15KV3TransferLoadEP23CKV3TransferLoadContext */
	const void  * GetValueUntyped(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant15GetValueUntypedEv */
	void SetValueUntyped(class CAnimVariant *, enum AnimParamType_t, const void  *); /* linkage=_ZN12CAnimVariant15SetValueUntypedE15AnimParamType_tPKv */
	void CAnimVariant<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariantC4I9CAnimEnumEERKT_ */
	void CAnimVariant<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariantC4I10QuaternionEERKT_ */
	void CAnimVariant<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariantC4I6VectorEERKT_ */
	void CAnimVariant<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariantC4IfEERKT_ */
	void CAnimVariant<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariantC4IiEERKT_ */
	void CAnimVariant<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariantC4IbEERKT_ */
	void SetValue<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariant8SetValueI10QuaternionEEvRKT_ */
	void SetValue<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariant8SetValueI6VectorEEvRKT_ */
	void SetValue<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariant8SetValueIfEEvRKT_ */
	void SetValue<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariant8SetValueIiEEvRKT_ */
	void SetValue<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariant8SetValueI9CAnimEnumEEvRKT_ */
	void SetValue<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariant8SetValueIbEEvRKT_ */
	const class Quaternion  & GetValue<Quaternion>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEERKT_v */
	const class Vector  & GetValue<Vector>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEERKT_v */
	const float  & GetValue<float>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIfEERKT_v */
	const int  & GetValue<int>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIiEERKT_v */
	const class CAnimEnum  & GetValue<CAnimEnum>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEERKT_v */
	const bool  & GetValue<bool>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIbEERKT_v */
	bool GetValue<Vector>(const class CAnimVariant  *, class Vector &); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEEbRT_ */
	bool GetValue<Quaternion>(const class CAnimVariant  *, class Quaternion &); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEEbRT_ */
	bool GetValue<int>(const class CAnimVariant  *, int &); /* linkage=_ZNK12CAnimVariant8GetValueIiEEbRT_ */
	bool GetValue<float>(const class CAnimVariant  *, float &); /* linkage=_ZNK12CAnimVariant8GetValueIfEEbRT_ */
	bool GetValue<CAnimEnum>(const class CAnimVariant  *, class CAnimEnum &); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEEbRT_ */
	bool GetValue<bool>(const class CAnimVariant  *, bool &); /* linkage=_ZNK12CAnimVariant8GetValueIbEEbRT_ */
};

// <015F43F0> ../public/animationsystem/animvariant.h:33
// member functions: 58
// member variables: 2
// class size: 17
class CAnimVariant {
	/* ../public/animationsystem/animvariant.h:38 */
	void CAnimVariant(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:39 */
	void CAnimVariant(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:40 */
	void CAnimVariant(CAnimVariant* , AnimParamType_t);
	/* ../public/animationsystem/animvariant.h:43 */
	CAnimVariant& operator=(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:45 */
	bool operator==(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:46 */
	bool operator!=(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:65 */
	CUtlString GetString(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:66 */
	void SetFromString(CAnimVariant* , const CUtlString& );
	/* ../public/animationsystem/animvariant.h:69 */
	AnimParamType_t GetType(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:71 */
	bool IsValid(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:73 */
	void Clear(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:75 */
	void KV3TransferSave(const CAnimVariant* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animvariant.h:76 */
	void KV3TransferLoad(CAnimVariant* , CKV3TransferLoadContext* );
private:
	/* ../public/animationsystem/animvariant.h:79 */
	const void* GetValueUntyped(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:80 */
	void SetValueUntyped(CAnimVariant* , AnimParamType_t, const void* );
	uint8 m_data[16]; /* 0 16 */
	AnimParamType_t m_nType; /* 16 1 */
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<bool>(CAnimVariant* , const bool& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<float>(CAnimVariant* , const float& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<float>(CAnimVariant* , const float& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<bool>(CAnimVariant* , const bool& );
	void CAnimVariant(class CAnimVariant *); /* linkage=_ZN12CAnimVariantC4Ev */
	void CAnimVariant(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantC4ERKS_ */
	void CAnimVariant(class CAnimVariant *, enum AnimParamType_t); /* linkage=_ZN12CAnimVariantC4E15AnimParamType_t */
	class CAnimVariant & operator=(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantaSERKS_ */
	bool operator==(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVarianteqERKS_ */
	bool operator!=(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVariantneERKS_ */
	class CUtlString GetString(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant9GetStringEv */
	void SetFromString(class CAnimVariant *, const class CUtlString  &); /* linkage=_ZN12CAnimVariant13SetFromStringERK10CUtlString */
	enum AnimParamType_t GetType(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7GetTypeEv */
	bool IsValid(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7IsValidEv */
	void Clear(class CAnimVariant *); /* linkage=_ZN12CAnimVariant5ClearEv */
	/* <8b2918> ../public/animationsystem/animvariant.h:343 */
	void KV3TransferSave(const class CAnimVariant  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAnimVariant15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b434d> ../public/animationsystem/animvariant.h:380 */
	void KV3TransferLoad(class CAnimVariant *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAnimVariant15KV3TransferLoadEP23CKV3TransferLoadContext */
	const void  * GetValueUntyped(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant15GetValueUntypedEv */
	void SetValueUntyped(class CAnimVariant *, enum AnimParamType_t, const void  *); /* linkage=_ZN12CAnimVariant15SetValueUntypedE15AnimParamType_tPKv */
	void CAnimVariant<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariantC4I9CAnimEnumEERKT_ */
	void CAnimVariant<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariantC4I10QuaternionEERKT_ */
	void CAnimVariant<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariantC4I6VectorEERKT_ */
	void CAnimVariant<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariantC4IfEERKT_ */
	void CAnimVariant<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariantC4IiEERKT_ */
	void CAnimVariant<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariantC4IbEERKT_ */
	void SetValue<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariant8SetValueI10QuaternionEEvRKT_ */
	void SetValue<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariant8SetValueI6VectorEEvRKT_ */
	void SetValue<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariant8SetValueIfEEvRKT_ */
	void SetValue<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariant8SetValueIiEEvRKT_ */
	void SetValue<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariant8SetValueI9CAnimEnumEEvRKT_ */
	void SetValue<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariant8SetValueIbEEvRKT_ */
	const class Quaternion  & GetValue<Quaternion>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEERKT_v */
	const class Vector  & GetValue<Vector>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEERKT_v */
	const float  & GetValue<float>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIfEERKT_v */
	const int  & GetValue<int>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIiEERKT_v */
	const class CAnimEnum  & GetValue<CAnimEnum>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEERKT_v */
	const bool  & GetValue<bool>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIbEERKT_v */
	bool GetValue<Vector>(const class CAnimVariant  *, class Vector &); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEEbRT_ */
	bool GetValue<Quaternion>(const class CAnimVariant  *, class Quaternion &); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEEbRT_ */
	bool GetValue<int>(const class CAnimVariant  *, int &); /* linkage=_ZNK12CAnimVariant8GetValueIiEEbRT_ */
	bool GetValue<float>(const class CAnimVariant  *, float &); /* linkage=_ZNK12CAnimVariant8GetValueIfEEbRT_ */
	bool GetValue<CAnimEnum>(const class CAnimVariant  *, class CAnimEnum &); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEEbRT_ */
	bool GetValue<bool>(const class CAnimVariant  *, bool &); /* linkage=_ZNK12CAnimVariant8GetValueIbEEbRT_ */
};

// <0166ECEB> ../public/animationsystem/animvariant.h:33
// member functions: 58
// member variables: 2
// class size: 17
class CAnimVariant {
	/* ../public/animationsystem/animvariant.h:38 */
	void CAnimVariant(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:39 */
	void CAnimVariant(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:40 */
	void CAnimVariant(CAnimVariant* , AnimParamType_t);
	/* ../public/animationsystem/animvariant.h:43 */
	CAnimVariant& operator=(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:45 */
	bool operator==(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:46 */
	bool operator!=(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:65 */
	CUtlString GetString(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:66 */
	void SetFromString(CAnimVariant* , const CUtlString& );
	/* ../public/animationsystem/animvariant.h:69 */
	AnimParamType_t GetType(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:71 */
	bool IsValid(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:73 */
	void Clear(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:75 */
	void KV3TransferSave(const CAnimVariant* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animvariant.h:76 */
	void KV3TransferLoad(CAnimVariant* , CKV3TransferLoadContext* );
private:
	/* ../public/animationsystem/animvariant.h:79 */
	const void* GetValueUntyped(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:80 */
	void SetValueUntyped(CAnimVariant* , AnimParamType_t, const void* );
	uint8 m_data[16]; /* 0 16 */
	AnimParamType_t m_nType; /* 16 1 */
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<float>(CAnimVariant* , const float& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<Vector>(CAnimVariant* , const Vector& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<Vector>(CAnimVariant* , const Vector& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<float>(CAnimVariant* , const float& );
	void CAnimVariant(class CAnimVariant *); /* linkage=_ZN12CAnimVariantC4Ev */
	void CAnimVariant(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantC4ERKS_ */
	void CAnimVariant(class CAnimVariant *, enum AnimParamType_t); /* linkage=_ZN12CAnimVariantC4E15AnimParamType_t */
	class CAnimVariant & operator=(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantaSERKS_ */
	bool operator==(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVarianteqERKS_ */
	bool operator!=(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVariantneERKS_ */
	class CUtlString GetString(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant9GetStringEv */
	void SetFromString(class CAnimVariant *, const class CUtlString  &); /* linkage=_ZN12CAnimVariant13SetFromStringERK10CUtlString */
	enum AnimParamType_t GetType(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7GetTypeEv */
	bool IsValid(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7IsValidEv */
	void Clear(class CAnimVariant *); /* linkage=_ZN12CAnimVariant5ClearEv */
	/* <8b2918> ../public/animationsystem/animvariant.h:343 */
	void KV3TransferSave(const class CAnimVariant  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAnimVariant15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b434d> ../public/animationsystem/animvariant.h:380 */
	void KV3TransferLoad(class CAnimVariant *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAnimVariant15KV3TransferLoadEP23CKV3TransferLoadContext */
	const void  * GetValueUntyped(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant15GetValueUntypedEv */
	void SetValueUntyped(class CAnimVariant *, enum AnimParamType_t, const void  *); /* linkage=_ZN12CAnimVariant15SetValueUntypedE15AnimParamType_tPKv */
	void CAnimVariant<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariantC4I9CAnimEnumEERKT_ */
	void CAnimVariant<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariantC4I10QuaternionEERKT_ */
	void CAnimVariant<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariantC4I6VectorEERKT_ */
	void CAnimVariant<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariantC4IfEERKT_ */
	void CAnimVariant<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariantC4IiEERKT_ */
	void CAnimVariant<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariantC4IbEERKT_ */
	void SetValue<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariant8SetValueI10QuaternionEEvRKT_ */
	void SetValue<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariant8SetValueI6VectorEEvRKT_ */
	void SetValue<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariant8SetValueIfEEvRKT_ */
	void SetValue<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariant8SetValueIiEEvRKT_ */
	void SetValue<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariant8SetValueI9CAnimEnumEEvRKT_ */
	void SetValue<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariant8SetValueIbEEvRKT_ */
	const class Quaternion  & GetValue<Quaternion>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEERKT_v */
	const class Vector  & GetValue<Vector>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEERKT_v */
	const float  & GetValue<float>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIfEERKT_v */
	const int  & GetValue<int>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIiEERKT_v */
	const class CAnimEnum  & GetValue<CAnimEnum>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEERKT_v */
	const bool  & GetValue<bool>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIbEERKT_v */
	bool GetValue<Vector>(const class CAnimVariant  *, class Vector &); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEEbRT_ */
	bool GetValue<Quaternion>(const class CAnimVariant  *, class Quaternion &); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEEbRT_ */
	bool GetValue<int>(const class CAnimVariant  *, int &); /* linkage=_ZNK12CAnimVariant8GetValueIiEEbRT_ */
	bool GetValue<float>(const class CAnimVariant  *, float &); /* linkage=_ZNK12CAnimVariant8GetValueIfEEbRT_ */
	bool GetValue<CAnimEnum>(const class CAnimVariant  *, class CAnimEnum &); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEEbRT_ */
	bool GetValue<bool>(const class CAnimVariant  *, bool &); /* linkage=_ZNK12CAnimVariant8GetValueIbEEbRT_ */
};

// <017C5C8E> ../public/animationsystem/animvariant.h:33
// member functions: 58
// member variables: 2
// class size: 17
class CAnimVariant {
	/* ../public/animationsystem/animvariant.h:38 */
	void CAnimVariant(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:39 */
	void CAnimVariant(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:40 */
	void CAnimVariant(CAnimVariant* , AnimParamType_t);
	/* ../public/animationsystem/animvariant.h:43 */
	CAnimVariant& operator=(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:45 */
	bool operator==(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:46 */
	bool operator!=(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:65 */
	CUtlString GetString(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:66 */
	void SetFromString(CAnimVariant* , const CUtlString& );
	/* ../public/animationsystem/animvariant.h:69 */
	AnimParamType_t GetType(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:71 */
	bool IsValid(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:73 */
	void Clear(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:75 */
	void KV3TransferSave(const CAnimVariant* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animvariant.h:76 */
	void KV3TransferLoad(CAnimVariant* , CKV3TransferLoadContext* );
private:
	/* ../public/animationsystem/animvariant.h:79 */
	const void* GetValueUntyped(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:80 */
	void SetValueUntyped(CAnimVariant* , AnimParamType_t, const void* );
	uint8 m_data[16]; /* 0 16 */
	AnimParamType_t m_nType; /* 16 1 */
	/* ../public/animationsystem/animvariant.h:194 */
	const Vector& GetValue<Vector>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const float& GetValue<float>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const int& GetValue<int>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const bool& GetValue<bool>(const CAnimVariant* );
	void CAnimVariant(class CAnimVariant *); /* linkage=_ZN12CAnimVariantC4Ev */
	void CAnimVariant(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantC4ERKS_ */
	void CAnimVariant(class CAnimVariant *, enum AnimParamType_t); /* linkage=_ZN12CAnimVariantC4E15AnimParamType_t */
	class CAnimVariant & operator=(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantaSERKS_ */
	bool operator==(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVarianteqERKS_ */
	bool operator!=(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVariantneERKS_ */
	class CUtlString GetString(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant9GetStringEv */
	void SetFromString(class CAnimVariant *, const class CUtlString  &); /* linkage=_ZN12CAnimVariant13SetFromStringERK10CUtlString */
	enum AnimParamType_t GetType(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7GetTypeEv */
	bool IsValid(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7IsValidEv */
	void Clear(class CAnimVariant *); /* linkage=_ZN12CAnimVariant5ClearEv */
	/* <8b2918> ../public/animationsystem/animvariant.h:343 */
	void KV3TransferSave(const class CAnimVariant  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAnimVariant15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b434d> ../public/animationsystem/animvariant.h:380 */
	void KV3TransferLoad(class CAnimVariant *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAnimVariant15KV3TransferLoadEP23CKV3TransferLoadContext */
	const void  * GetValueUntyped(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant15GetValueUntypedEv */
	void SetValueUntyped(class CAnimVariant *, enum AnimParamType_t, const void  *); /* linkage=_ZN12CAnimVariant15SetValueUntypedE15AnimParamType_tPKv */
	void CAnimVariant<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariantC4I9CAnimEnumEERKT_ */
	void CAnimVariant<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariantC4I10QuaternionEERKT_ */
	void CAnimVariant<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariantC4I6VectorEERKT_ */
	void CAnimVariant<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariantC4IfEERKT_ */
	void CAnimVariant<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariantC4IiEERKT_ */
	void CAnimVariant<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariantC4IbEERKT_ */
	void SetValue<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariant8SetValueI10QuaternionEEvRKT_ */
	void SetValue<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariant8SetValueI6VectorEEvRKT_ */
	void SetValue<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariant8SetValueIfEEvRKT_ */
	void SetValue<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariant8SetValueIiEEvRKT_ */
	void SetValue<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariant8SetValueI9CAnimEnumEEvRKT_ */
	void SetValue<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariant8SetValueIbEEvRKT_ */
	const class Quaternion  & GetValue<Quaternion>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEERKT_v */
	const class Vector  & GetValue<Vector>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEERKT_v */
	const float  & GetValue<float>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIfEERKT_v */
	const int  & GetValue<int>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIiEERKT_v */
	const class CAnimEnum  & GetValue<CAnimEnum>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEERKT_v */
	const bool  & GetValue<bool>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIbEERKT_v */
	bool GetValue<Vector>(const class CAnimVariant  *, class Vector &); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEEbRT_ */
	bool GetValue<Quaternion>(const class CAnimVariant  *, class Quaternion &); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEEbRT_ */
	bool GetValue<int>(const class CAnimVariant  *, int &); /* linkage=_ZNK12CAnimVariant8GetValueIiEEbRT_ */
	bool GetValue<float>(const class CAnimVariant  *, float &); /* linkage=_ZNK12CAnimVariant8GetValueIfEEbRT_ */
	bool GetValue<CAnimEnum>(const class CAnimVariant  *, class CAnimEnum &); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEEbRT_ */
	bool GetValue<bool>(const class CAnimVariant  *, bool &); /* linkage=_ZNK12CAnimVariant8GetValueIbEEbRT_ */
};

// <018C3D8C> ../public/animationsystem/animvariant.h:33
// member functions: 61
// member variables: 2
// class size: 17
class CAnimVariant {
	/* ../public/animationsystem/animvariant.h:38 */
	void CAnimVariant(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:39 */
	void CAnimVariant(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:40 */
	void CAnimVariant(CAnimVariant* , AnimParamType_t);
	/* ../public/animationsystem/animvariant.h:43 */
	CAnimVariant& operator=(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:45 */
	bool operator==(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:46 */
	bool operator!=(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:65 */
	CUtlString GetString(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:66 */
	void SetFromString(CAnimVariant* , const CUtlString& );
	/* ../public/animationsystem/animvariant.h:69 */
	AnimParamType_t GetType(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:71 */
	bool IsValid(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:73 */
	void Clear(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:75 */
	void KV3TransferSave(const CAnimVariant* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animvariant.h:76 */
	void KV3TransferLoad(CAnimVariant* , CKV3TransferLoadContext* );
private:
	/* ../public/animationsystem/animvariant.h:79 */
	const void* GetValueUntyped(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:80 */
	void SetValueUntyped(CAnimVariant* , AnimParamType_t, const void* );
	uint8 m_data[16]; /* 0 16 */
	AnimParamType_t m_nType; /* 16 1 */
	/* ../public/animationsystem/animvariant.h:215 */
	bool GetValue<Quaternion>(const CAnimVariant* , Quaternion& );
	/* ../public/animationsystem/animvariant.h:215 */
	bool GetValue<Vector>(const CAnimVariant* , Vector& );
	/* ../public/animationsystem/animvariant.h:194 */
	const Vector& GetValue<Vector>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const float& GetValue<float>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const int& GetValue<int>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const CAnimEnum& GetValue<CAnimEnum>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const bool& GetValue<bool>(const CAnimVariant* );
	void CAnimVariant(class CAnimVariant *); /* linkage=_ZN12CAnimVariantC4Ev */
	void CAnimVariant(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantC4ERKS_ */
	void CAnimVariant(class CAnimVariant *, enum AnimParamType_t); /* linkage=_ZN12CAnimVariantC4E15AnimParamType_t */
	class CAnimVariant & operator=(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantaSERKS_ */
	bool operator==(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVarianteqERKS_ */
	bool operator!=(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVariantneERKS_ */
	class CUtlString GetString(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant9GetStringEv */
	void SetFromString(class CAnimVariant *, const class CUtlString  &); /* linkage=_ZN12CAnimVariant13SetFromStringERK10CUtlString */
	enum AnimParamType_t GetType(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7GetTypeEv */
	bool IsValid(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7IsValidEv */
	void Clear(class CAnimVariant *); /* linkage=_ZN12CAnimVariant5ClearEv */
	/* <8b2918> ../public/animationsystem/animvariant.h:343 */
	void KV3TransferSave(const class CAnimVariant  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAnimVariant15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b434d> ../public/animationsystem/animvariant.h:380 */
	void KV3TransferLoad(class CAnimVariant *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAnimVariant15KV3TransferLoadEP23CKV3TransferLoadContext */
	const void  * GetValueUntyped(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant15GetValueUntypedEv */
	void SetValueUntyped(class CAnimVariant *, enum AnimParamType_t, const void  *); /* linkage=_ZN12CAnimVariant15SetValueUntypedE15AnimParamType_tPKv */
	void CAnimVariant<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariantC4I9CAnimEnumEERKT_ */
	void CAnimVariant<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariantC4I10QuaternionEERKT_ */
	void CAnimVariant<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariantC4I6VectorEERKT_ */
	void CAnimVariant<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariantC4IfEERKT_ */
	void CAnimVariant<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariantC4IiEERKT_ */
	void CAnimVariant<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariantC4IbEERKT_ */
	void SetValue<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariant8SetValueI10QuaternionEEvRKT_ */
	void SetValue<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariant8SetValueI6VectorEEvRKT_ */
	void SetValue<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariant8SetValueIfEEvRKT_ */
	void SetValue<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariant8SetValueIiEEvRKT_ */
	void SetValue<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariant8SetValueI9CAnimEnumEEvRKT_ */
	void SetValue<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariant8SetValueIbEEvRKT_ */
	const class Quaternion  & GetValue<Quaternion>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEERKT_v */
	const class Vector  & GetValue<Vector>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEERKT_v */
	const float  & GetValue<float>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIfEERKT_v */
	const int  & GetValue<int>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIiEERKT_v */
	const class CAnimEnum  & GetValue<CAnimEnum>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEERKT_v */
	const bool  & GetValue<bool>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIbEERKT_v */
	bool GetValue<Vector>(const class CAnimVariant  *, class Vector &); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEEbRT_ */
	bool GetValue<Quaternion>(const class CAnimVariant  *, class Quaternion &); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEEbRT_ */
	bool GetValue<int>(const class CAnimVariant  *, int &); /* linkage=_ZNK12CAnimVariant8GetValueIiEEbRT_ */
	bool GetValue<float>(const class CAnimVariant  *, float &); /* linkage=_ZNK12CAnimVariant8GetValueIfEEbRT_ */
	bool GetValue<CAnimEnum>(const class CAnimVariant  *, class CAnimEnum &); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEEbRT_ */
	bool GetValue<bool>(const class CAnimVariant  *, bool &); /* linkage=_ZNK12CAnimVariant8GetValueIbEEbRT_ */
};

// <01A42779> ../public/animationsystem/animvariant.h:33
// member functions: 66
// member variables: 2
// class size: 17
class CAnimVariant {
	/* ../public/animationsystem/animvariant.h:38 */
	void CAnimVariant(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:39 */
	void CAnimVariant(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:40 */
	void CAnimVariant(CAnimVariant* , AnimParamType_t);
	/* ../public/animationsystem/animvariant.h:43 */
	CAnimVariant& operator=(CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:45 */
	bool operator==(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:46 */
	bool operator!=(const CAnimVariant* , const CAnimVariant& );
	/* ../public/animationsystem/animvariant.h:65 */
	CUtlString GetString(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:66 */
	void SetFromString(CAnimVariant* , const CUtlString& );
	/* ../public/animationsystem/animvariant.h:69 */
	AnimParamType_t GetType(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:71 */
	bool IsValid(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:73 */
	void Clear(CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:75 */
	void KV3TransferSave(const CAnimVariant* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animvariant.h:76 */
	void KV3TransferLoad(CAnimVariant* , CKV3TransferLoadContext* );
private:
	/* ../public/animationsystem/animvariant.h:79 */
	const void* GetValueUntyped(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:80 */
	void SetValueUntyped(CAnimVariant* , AnimParamType_t, const void* );
	uint8 m_data[16]; /* 0 16 */
	AnimParamType_t m_nType; /* 16 1 */
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<bool>(CAnimVariant* , const bool& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<CAnimEnum>(CAnimVariant* , const CAnimEnum& );
	/* ../public/animationsystem/animvariant.h:156 */
	void CAnimVariant<float>(CAnimVariant* , const float& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<float>(CAnimVariant* , const float& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<CAnimEnum>(CAnimVariant* , const CAnimEnum& );
	/* ../public/animationsystem/animvariant.h:233 */
	void SetValue<bool>(CAnimVariant* , const bool& );
	/* ../public/animationsystem/animvariant.h:194 */
	const Quaternion& GetValue<Quaternion>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const Vector& GetValue<Vector>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const float& GetValue<float>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const int& GetValue<int>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const CAnimEnum& GetValue<CAnimEnum>(const CAnimVariant* );
	/* ../public/animationsystem/animvariant.h:194 */
	const bool& GetValue<bool>(const CAnimVariant* );
	void CAnimVariant(class CAnimVariant *); /* linkage=_ZN12CAnimVariantC4Ev */
	void CAnimVariant(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantC4ERKS_ */
	void CAnimVariant(class CAnimVariant *, enum AnimParamType_t); /* linkage=_ZN12CAnimVariantC4E15AnimParamType_t */
	class CAnimVariant & operator=(class CAnimVariant *, const class CAnimVariant  &); /* linkage=_ZN12CAnimVariantaSERKS_ */
	bool operator==(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVarianteqERKS_ */
	bool operator!=(const class CAnimVariant  *, const class CAnimVariant  &); /* linkage=_ZNK12CAnimVariantneERKS_ */
	class CUtlString GetString(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant9GetStringEv */
	void SetFromString(class CAnimVariant *, const class CUtlString  &); /* linkage=_ZN12CAnimVariant13SetFromStringERK10CUtlString */
	enum AnimParamType_t GetType(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7GetTypeEv */
	bool IsValid(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant7IsValidEv */
	void Clear(class CAnimVariant *); /* linkage=_ZN12CAnimVariant5ClearEv */
	/* <8b2918> ../public/animationsystem/animvariant.h:343 */
	void KV3TransferSave(const class CAnimVariant  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAnimVariant15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b434d> ../public/animationsystem/animvariant.h:380 */
	void KV3TransferLoad(class CAnimVariant *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAnimVariant15KV3TransferLoadEP23CKV3TransferLoadContext */
	const void  * GetValueUntyped(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant15GetValueUntypedEv */
	void SetValueUntyped(class CAnimVariant *, enum AnimParamType_t, const void  *); /* linkage=_ZN12CAnimVariant15SetValueUntypedE15AnimParamType_tPKv */
	void CAnimVariant<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariantC4I9CAnimEnumEERKT_ */
	void CAnimVariant<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariantC4I10QuaternionEERKT_ */
	void CAnimVariant<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariantC4I6VectorEERKT_ */
	void CAnimVariant<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariantC4IfEERKT_ */
	void CAnimVariant<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariantC4IiEERKT_ */
	void CAnimVariant<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariantC4IbEERKT_ */
	void SetValue<Quaternion>(class CAnimVariant *, const class Quaternion  &); /* linkage=_ZN12CAnimVariant8SetValueI10QuaternionEEvRKT_ */
	void SetValue<Vector>(class CAnimVariant *, const class Vector  &); /* linkage=_ZN12CAnimVariant8SetValueI6VectorEEvRKT_ */
	void SetValue<float>(class CAnimVariant *, const float  &); /* linkage=_ZN12CAnimVariant8SetValueIfEEvRKT_ */
	void SetValue<int>(class CAnimVariant *, const int  &); /* linkage=_ZN12CAnimVariant8SetValueIiEEvRKT_ */
	void SetValue<CAnimEnum>(class CAnimVariant *, const class CAnimEnum  &); /* linkage=_ZN12CAnimVariant8SetValueI9CAnimEnumEEvRKT_ */
	void SetValue<bool>(class CAnimVariant *, const bool  &); /* linkage=_ZN12CAnimVariant8SetValueIbEEvRKT_ */
	const class Quaternion  & GetValue<Quaternion>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEERKT_v */
	const class Vector  & GetValue<Vector>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEERKT_v */
	const float  & GetValue<float>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIfEERKT_v */
	const int  & GetValue<int>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIiEERKT_v */
	const class CAnimEnum  & GetValue<CAnimEnum>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEERKT_v */
	const bool  & GetValue<bool>(const class CAnimVariant  *); /* linkage=_ZNK12CAnimVariant8GetValueIbEERKT_v */
	bool GetValue<Vector>(const class CAnimVariant  *, class Vector &); /* linkage=_ZNK12CAnimVariant8GetValueI6VectorEEbRT_ */
	bool GetValue<Quaternion>(const class CAnimVariant  *, class Quaternion &); /* linkage=_ZNK12CAnimVariant8GetValueI10QuaternionEEbRT_ */
	bool GetValue<int>(const class CAnimVariant  *, int &); /* linkage=_ZNK12CAnimVariant8GetValueIiEEbRT_ */
	bool GetValue<float>(const class CAnimVariant  *, float &); /* linkage=_ZNK12CAnimVariant8GetValueIfEEbRT_ */
	bool GetValue<CAnimEnum>(const class CAnimVariant  *, class CAnimEnum &); /* linkage=_ZNK12CAnimVariant8GetValueI9CAnimEnumEEbRT_ */
	bool GetValue<bool>(const class CAnimVariant  *, bool &); /* linkage=_ZNK12CAnimVariant8GetValueIbEEbRT_ */
};

// <0133D680> ../public/animationsystem/animvariant.h:69
inline void CAnimVariant::GetType()
{
} /* size: 0 */

// <008B121B> ../public/animationsystem/animvariant.h:73
inline void CAnimVariant::Clear()
{
} /* size: 0 */

// <01A7CBE5> ../public/animationsystem/animvariant.h:79
inline const void* CAnimVariant::GetValueUntyped()
{
} /* size: 0 */

// <00342CA8> ../public/animationsystem/animvariant.h:89
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <001F31E6> ../public/animationsystem/animvariant.h:89
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimVariant> {
	/* ../public/animationsystem/animvariant.h:89 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0133D679> ../public/animationsystem/animvariant.h:116
inline void DefaultValue(void)
{
} /* size: 0 */

// <011E29AB> ../public/animationsystem/animvariant.h:116
// member function: 1
// static member variable: 1
// struct size: 1
struct CAnimVariantInfo<bool> {
	static const enum AnimParamType_t PARAM_TYPE = 1; /* 0 0 */
	/* ../public/animationsystem/animvariant.h:116 */
	bool DefaultValue(void);
};

// <011E29E2> ../public/animationsystem/animvariant.h:117
// member function: 1
// static member variable: 1
// struct size: 1
struct CAnimVariantInfo<CAnimEnum> {
	static const enum AnimParamType_t PARAM_TYPE = 2; /* 0 0 */
	/* ../public/animationsystem/animvariant.h:117 */
	CAnimEnum DefaultValue(void);
};

// <011E2A19> ../public/animationsystem/animvariant.h:118
// member function: 1
// static member variable: 1
// struct size: 1
struct CAnimVariantInfo<int> {
	static const enum AnimParamType_t PARAM_TYPE = 3; /* 0 0 */
	/* ../public/animationsystem/animvariant.h:118 */
	int DefaultValue(void);
};

// <011E2A50> ../public/animationsystem/animvariant.h:119
// member function: 1
// static member variable: 1
// struct size: 1
struct CAnimVariantInfo<float> {
	static const enum AnimParamType_t PARAM_TYPE = 4; /* 0 0 */
	/* ../public/animationsystem/animvariant.h:119 */
	float DefaultValue(void);
};

// <011E2A87> ../public/animationsystem/animvariant.h:120
// member function: 1
// static member variable: 1
// struct size: 1
struct CAnimVariantInfo<Vector> {
	static const enum AnimParamType_t PARAM_TYPE = 5; /* 0 0 */
	/* ../public/animationsystem/animvariant.h:120 */
	Vector DefaultValue(void);
};

// <011E2ABE> ../public/animationsystem/animvariant.h:121
// member function: 1
// static member variable: 1
// struct size: 1
struct CAnimVariantInfo<Quaternion> {
	static const enum AnimParamType_t PARAM_TYPE = 6; /* 0 0 */
	/* ../public/animationsystem/animvariant.h:121 */
	Quaternion DefaultValue(void);
};

// <01A7CBAA> ../public/animationsystem/animvariant.h:126
void CAnimVariant::CAnimVariant()
{
} /* size: 0 */

// <01A7CB8E> ../public/animationsystem/animvariant.h:126
inline void CAnimVariant::CAnimVariant()
{
} /* size: 0 */

// <01A7CB72> ../public/animationsystem/animvariant.h:139
void CAnimVariant::CAnimVariant(const CAnimVariant& rhs)
{
} /* size: 0 */

// <01A7CB4A> ../public/animationsystem/animvariant.h:139
inline void CAnimVariant::CAnimVariant(const CAnimVariant& rhs)
{
} /* size: 0 */

// <01278036> ../public/animationsystem/animvariant.h:156
void CAnimVariant::CAnimVariant<bool>(const bool& v)
{
} /* size: 0 */

// <0127800C> ../public/animationsystem/animvariant.h:156
inline void CAnimVariant::CAnimVariant<bool>(const bool& v)
{
} /* size: 0 */

// <01277FE9> ../public/animationsystem/animvariant.h:156
void CAnimVariant::CAnimVariant<int>(const int& v)
{
} /* size: 0 */

// <01277FBF> ../public/animationsystem/animvariant.h:156
inline void CAnimVariant::CAnimVariant<int>(const int& v)
{
} /* size: 0 */

// <01277F9C> ../public/animationsystem/animvariant.h:156
void CAnimVariant::CAnimVariant<float>(const float& v)
{
} /* size: 0 */

// <01277F72> ../public/animationsystem/animvariant.h:156
inline void CAnimVariant::CAnimVariant<float>(const float& v)
{
} /* size: 0 */

// <01277F4F> ../public/animationsystem/animvariant.h:156
void CAnimVariant::CAnimVariant<Vector>(const Vector& v)
{
} /* size: 0 */

// <01277F25> ../public/animationsystem/animvariant.h:156
inline void CAnimVariant::CAnimVariant<Vector>(const Vector& v)
{
} /* size: 0 */

// <01277F02> ../public/animationsystem/animvariant.h:156
void CAnimVariant::CAnimVariant<Quaternion>(const Quaternion& v)
{
} /* size: 0 */

// <01277ED8> ../public/animationsystem/animvariant.h:156
inline void CAnimVariant::CAnimVariant<Quaternion>(const Quaternion& v)
{
} /* size: 0 */

// <01277EB5> ../public/animationsystem/animvariant.h:156
void CAnimVariant::CAnimVariant<CAnimEnum>(const CAnimEnum& v)
{
} /* size: 0 */

// <01277E8B> ../public/animationsystem/animvariant.h:156
inline void CAnimVariant::CAnimVariant<CAnimEnum>(const CAnimEnum& v)
{
} /* size: 0 */

// <01A7CB22> ../public/animationsystem/animvariant.h:164
inline void CAnimVariant::operator=(const CAnimVariant& rhs)
{
} /* size: 0 */

// <0127CFCA> ../public/animationsystem/animvariant.h:194
// variable: 1
inline void CAnimVariant::GetValue<bool>()
{
	{
		bool s_defaultValue; // 200
	}
} /* size: 0 */

// <0127CF96> ../public/animationsystem/animvariant.h:194
// variable: 1
inline void CAnimVariant::GetValue<CAnimEnum>()
{
	{
		CAnimEnum s_defaultValue; // 200
	}
} /* size: 0 */

// <0127CF62> ../public/animationsystem/animvariant.h:194
// variable: 1
inline void CAnimVariant::GetValue<int>()
{
	{
		int s_defaultValue; // 200
	}
} /* size: 0 */

// <0127CF2E> ../public/animationsystem/animvariant.h:194
// variable: 1
inline void CAnimVariant::GetValue<float>()
{
	{
		float s_defaultValue; // 200
	}
} /* size: 0 */

// <0127CEFA> ../public/animationsystem/animvariant.h:194
// variable: 1
inline void CAnimVariant::GetValue<Vector>()
{
	{
		Vector s_defaultValue; // 200
	}
} /* size: 0 */

// <0127CEC6> ../public/animationsystem/animvariant.h:194
// variable: 1
inline void CAnimVariant::GetValue<Quaternion>()
{
	{
		Quaternion s_defaultValue; // 200
	}
} /* size: 0 */

// <0191C1B8> ../public/animationsystem/animvariant.h:215
inline void CAnimVariant::GetValue<Vector>(Vector& value)
{
} /* size: 0 */

// <0191C18C> ../public/animationsystem/animvariant.h:215
inline void CAnimVariant::GetValue<Quaternion>(Quaternion& value)
{
} /* size: 0 */

// <01582C95> ../public/animationsystem/animvariant.h:215
inline void CAnimVariant::GetValue<float>(float& value)
{
} /* size: 0 */

// <014BBD22> ../public/animationsystem/animvariant.h:215
inline void CAnimVariant::GetValue<bool>(bool& value)
{
} /* size: 0 */

// <014BB9A6> ../public/animationsystem/animvariant.h:215
inline void CAnimVariant::GetValue<CAnimEnum>(CAnimEnum& value)
{
} /* size: 0 */

// <014BB475> ../public/animationsystem/animvariant.h:215
inline void CAnimVariant::GetValue<int>(int& value)
{
} /* size: 0 */

// <0127CE9A> ../public/animationsystem/animvariant.h:233
inline void CAnimVariant::SetValue<bool>(const bool& value)
{
} /* size: 0 */

// <0127CE6E> ../public/animationsystem/animvariant.h:233
inline void CAnimVariant::SetValue<CAnimEnum>(const CAnimEnum& value)
{
} /* size: 0 */

// <0127CE42> ../public/animationsystem/animvariant.h:233
inline void CAnimVariant::SetValue<int>(const int& value)
{
} /* size: 0 */

// <0127CE16> ../public/animationsystem/animvariant.h:233
inline void CAnimVariant::SetValue<float>(const float& value)
{
} /* size: 0 */

// <0127CDEA> ../public/animationsystem/animvariant.h:233
inline void CAnimVariant::SetValue<Vector>(const Vector& value)
{
} /* size: 0 */

// <0127CDBE> ../public/animationsystem/animvariant.h:233
inline void CAnimVariant::SetValue<Quaternion>(const Quaternion& value)
{
} /* size: 0 */

// <01A7C502> ../public/animationsystem/animvariant.h:243
// variables: 8
// function calls: 20
void CAnimVariant::GetString()
{
	const char   __FUNCTION__; // 21829
	{
		bool tmp; // 252
	}
	{
		CAnimEnum tmp; // 258
		CAnimVariant::GetValue<CAnimEnum>(); // 258
	}
	{
		int tmp; // 264
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 265
	}
	{
		float tmp; // 270
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 271
	}
	{
		Vector tmp; // 276
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 277
	}
	{
		Quaternion tmp; // 282
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 283
		CUtlString::CUtlString(
				const char* pString);  // 283
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 283
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 287
	}
	CUtlString::CUtlString(
			const char* pString);  // 248
	CUtlString::CUtlString(); // 291
} /* size: 515, variables: 1, inline expansions: 2 (37 bytes) */

// <008B2918> ../public/animationsystem/animvariant.h:343
// function calls: 103
void CAnimVariant::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 769
	SaveValue<unsigned char>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const uint8& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<unsigned char>(
					const unsigned char& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<unsigned char>(
					CKV3MemberName memberNameAndHash,
					const unsigned char& sourceValue);  // 345
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<8>(
				const char& str);  // 345
	CAnimVariant::GetValue<CAnimEnum>(); // 354
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 354
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 769
	SaveValue<unsigned char>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const uint8& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<unsigned char>(
					const unsigned char& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<unsigned char>(
					CKV3MemberName memberNameAndHash,
					const unsigned char& sourceValue);  // 354
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 772
	SaveValue<int>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const int32& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<int>(
				const int& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	CKV3TransferSaveContext::SaveValueToMember<int>(
				CKV3MemberName memberNameAndHash,
				const int& sourceValue);  // 358
	CAnimVariant::GetValue<Quaternion>(); // 370
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 370
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	SaveValue<Quaternion>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const Quaternion& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<Quaternion>(
					const Quaternion& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<Quaternion>(
					CKV3MemberName memberNameAndHash,
					const Quaternion& sourceValue);  // 370
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 350
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 766
	SaveValue<bool>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const bool& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<bool>(
				const bool& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<bool>(
				CKV3MemberName memberNameAndHash,
				const bool& sourceValue);  // 350
	CAnimVariant::KV3TransferSave(
			CKV3TransferSaveContext* pContext);  // 343
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 358
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 362
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 362
	CAnimVariant::GetValue<Vector>(); // 366
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 366
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	SaveValue<Vector>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const Vector& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<Vector>(
				const Vector& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<Vector>(
					CKV3MemberName memberNameAndHash,
					const Vector& sourceValue);  // 366
} /* size: 0, inline expansions: 103 (0 bytes) */

// <008B1187> ../public/animationsystem/animvariant.h:343
inline void CAnimVariant::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
} /* size: 0 */

// <0044BA04> ../public/animationsystem/animvariant.h:343
// function calls: 67
void CAnimVariant::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 769
	SaveValue<unsigned char>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const uint8& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<unsigned char>(
					const unsigned char& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<unsigned char>(
					CKV3MemberName memberNameAndHash,
					const unsigned char& sourceValue);  // 345
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<8>(
				const char& str);  // 345
	CAnimVariant::GetValue<CAnimEnum>(); // 354
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 354
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 769
	SaveValue<unsigned char>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const uint8& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<unsigned char>(
					const unsigned char& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<unsigned char>(
					CKV3MemberName memberNameAndHash,
					const unsigned char& sourceValue);  // 354
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 772
	SaveValue<int>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const int32& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<int>(
				const int& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3TransferSaveContext::SaveValueToMember<int>(
				CKV3MemberName memberNameAndHash,
				const int& sourceValue);  // 358
	CAnimVariant::GetValue<Quaternion>(); // 370
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 370
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	SaveValue<Quaternion>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const Quaternion& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<Quaternion>(
					const Quaternion& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<Quaternion>(
					CKV3MemberName memberNameAndHash,
					const Quaternion& sourceValue);  // 370
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 350
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 766
	SaveValue<bool>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const bool& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<bool>(
				const bool& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<bool>(
				CKV3MemberName memberNameAndHash,
				const bool& sourceValue);  // 350
	CAnimVariant::KV3TransferSave(
			CKV3TransferSaveContext* pContext);  // 343
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 358
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 362
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 362
	CAnimVariant::GetValue<Vector>(); // 366
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 366
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	SaveValue<Vector>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const Vector& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<Vector>(
				const Vector& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<Vector>(
					CKV3MemberName memberNameAndHash,
					const Vector& sourceValue);  // 366
} /* size: 921, inline expansions: 67 (2378 bytes) */

// <008B434D> ../public/animationsystem/animvariant.h:380
// variables: 7
// function calls: 153
void CAnimVariant::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	KV3Helper_StringToNumber<int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<int>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<int>(); // 184
	KeyValues3::GetValueInt(); // 769
	LoadValue<unsigned char>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				uint8& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<unsigned char>(
					unsigned char& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<int>(); // 694
		KeyValues3::GetValueAsNumeric<int>(); // 184
		KeyValues3::GetValueInt(); // 769
		LoadValue<unsigned char>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					uint8& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<unsigned char>(
						unsigned char& destValue,
						const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue,
						uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue,
						uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue);  // 384
	CAnimVariant::Clear(); // 382
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<8>(
				const char& str);  // 384
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 409
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::GetValueFloatArray<4>(
				float* pOutValues);  // 1341
	LoadValue<Quaternion>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				Quaternion& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<Quaternion>(
					Quaternion& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::GetValueFloatArray<4>(
					float* pOutValues);  // 1341
		LoadValue<Quaternion>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					Quaternion& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<Quaternion>(
						Quaternion& destValue,
						const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<Quaternion>(
					CKV3MemberName memberNameAndHash,
					Quaternion& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<Quaternion>(
					CKV3MemberName memberNameAndHash,
					Quaternion& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<Quaternion>(
					CKV3MemberName memberNameAndHash,
					Quaternion& destValue);  // 409
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 405
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::GetValueFloatArray<3>(
				float* pOutValues);  // 1341
	LoadValue<Vector>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				Vector& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<Vector>(
				Vector& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::GetValueFloatArray<3>(
					float* pOutValues);  // 1341
		LoadValue<Vector>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					Vector& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<Vector>(
					Vector& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<Vector>(
					CKV3MemberName memberNameAndHash,
					Vector& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<Vector>(
					CKV3MemberName memberNameAndHash,
					Vector& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<Vector>(
					CKV3MemberName memberNameAndHash,
					Vector& destValue);  // 405
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 401
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		KV3Helper_StringToNumber<float>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<float>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<float>(); // 199
		KeyValues3::GetValueFloat(); // 776
		LoadValue<float>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				float& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<float>(
					float& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue);  // 401
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 397
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<int>(); // 694
	KeyValues3::GetValueAsNumeric<int>(); // 184
	KeyValues3::GetValueInt(); // 772
	LoadValue<int>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			int32& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<int>(
				int& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<int>(); // 694
		KeyValues3::GetValueAsNumeric<int>(); // 184
		KeyValues3::GetValueInt(); // 772
		LoadValue<int>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				int32& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<int>(
					int& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue);  // 397
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 393
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	KV3Helper_StringToNumber<int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<int>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<int>(); // 184
	KeyValues3::GetValueInt(); // 769
	LoadValue<unsigned char>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				uint8& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<unsigned char>(
					unsigned char& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<int>(); // 694
		KeyValues3::GetValueAsNumeric<int>(); // 184
		KeyValues3::GetValueInt(); // 769
		LoadValue<unsigned char>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					uint8& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<unsigned char>(
						unsigned char& destValue,
						const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue,
						uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue,
						uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue);  // 393
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 389
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	LoadValue<bool>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			bool& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<bool>(
				bool& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		LoadValue<bool>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				bool& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<bool>(
					bool& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<bool>(
					CKV3MemberName memberNameAndHash,
					bool& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<bool>(
					CKV3MemberName memberNameAndHash,
					bool& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<bool>(
					CKV3MemberName memberNameAndHash,
					bool& destValue);  // 389
	CAnimVariant::KV3TransferLoad(
			CKV3TransferLoadContext* pContext);  // 380
} /* size: 0, inline expansions: 109 (0 bytes) */

// <008B115D> ../public/animationsystem/animvariant.h:380
inline void CAnimVariant::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
} /* size: 0 */

// <0044D6D3> ../public/animationsystem/animvariant.h:380
// variables: 7
// function calls: 123
void CAnimVariant::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	KV3Helper_StringToNumber<int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<int>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<int>(); // 184
	KeyValues3::GetValueInt(); // 769
	LoadValue<unsigned char>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				uint8& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<unsigned char>(
					unsigned char& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<int>(); // 694
		KeyValues3::GetValueAsNumeric<int>(); // 184
		KeyValues3::GetValueInt(); // 769
		LoadValue<unsigned char>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					uint8& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<unsigned char>(
						unsigned char& destValue,
						const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue,
						uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue,
						uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue);  // 384
	CAnimVariant::Clear(); // 382
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<8>(
				const char& str);  // 384
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 409
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::GetValueFloatArray<4>(
				float* pOutValues);  // 1341
	LoadValue<Quaternion>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				Quaternion& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<Quaternion>(
					Quaternion& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::GetValueFloatArray<4>(
					float* pOutValues);  // 1341
		LoadValue<Quaternion>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					Quaternion& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<Quaternion>(
						Quaternion& destValue,
						const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<Quaternion>(
					CKV3MemberName memberNameAndHash,
					Quaternion& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<Quaternion>(
					CKV3MemberName memberNameAndHash,
					Quaternion& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<Quaternion>(
					CKV3MemberName memberNameAndHash,
					Quaternion& destValue);  // 409
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 405
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::GetValueFloatArray<3>(
				float* pOutValues);  // 1341
	LoadValue<Vector>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				Vector& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<Vector>(
				Vector& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::GetValueFloatArray<3>(
					float* pOutValues);  // 1341
		LoadValue<Vector>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					Vector& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<Vector>(
					Vector& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<Vector>(
					CKV3MemberName memberNameAndHash,
					Vector& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<Vector>(
					CKV3MemberName memberNameAndHash,
					Vector& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<Vector>(
					CKV3MemberName memberNameAndHash,
					Vector& destValue);  // 405
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 401
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		KV3Helper_StringToNumber<float>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<float>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<float>(); // 199
		KeyValues3::GetValueFloat(); // 776
		LoadValue<float>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				float& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<float>(
					float& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue);  // 401
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 397
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::GetValueInt(); // 772
	LoadValue<int>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			int32& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<int>(
				int& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::GetValueInt(); // 772
		LoadValue<int>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				int32& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<int>(
					int& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue);  // 397
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 393
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::GetValueInt(); // 769
	LoadValue<unsigned char>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				uint8& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<unsigned char>(
					unsigned char& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::GetValueInt(); // 769
		LoadValue<unsigned char>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					uint8& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<unsigned char>(
						unsigned char& destValue,
						const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue,
						uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue,
						uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue);  // 393
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 389
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	LoadValue<bool>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			bool& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<bool>(
				bool& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		LoadValue<bool>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				bool& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<bool>(
					bool& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<bool>(
					CKV3MemberName memberNameAndHash,
					bool& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<bool>(
					CKV3MemberName memberNameAndHash,
					bool& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<bool>(
					CKV3MemberName memberNameAndHash,
					bool& destValue);  // 389
	CAnimVariant::KV3TransferLoad(
			CKV3TransferLoadContext* pContext);  // 380
} /* size: 1738, inline expansions: 91 (5834 bytes) */

// <01A7C4CC> ../public/animationsystem/animvariant.h:419
inline void CAnimVariant::SetValueUntyped(AnimParamType_t nType, const void* pData)
{
} /* size: 0 */

