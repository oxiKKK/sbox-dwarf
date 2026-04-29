
//
// public/datamodel/dmvariant.h
//
//	referenced by: libengine2.so
//
//	class: 1
//

// <0613E895> ../public/datamodel/dmvariant.h:25
// member functions: 10
// member variables: 2
// class size: 68
class CDmVariant {
	/* ../public/datamodel/dmvariant.h:28 */
	void CDmVariant(CDmVariant* , DmAttributeType_t);
	/* ../public/datamodel/dmvariant.h:34 */
	void CDmVariant(CDmVariant* , const CDmAttribute* );
	/* ../public/datamodel/dmvariant.h:36 */
	void ~CDmVariant(CDmVariant* );
	/* ../public/datamodel/dmvariant.h:41 */
	CDmVariant& operator=(CDmVariant* , const CDmVariant& );
	/* ../public/datamodel/dmvariant.h:95 */
	void SetValueFromAttribute(CDmVariant* , const CDmAttribute* );
	/* ../public/datamodel/dmvariant.h:97 */
	DmAttributeType_t GetType(const CDmVariant* );
	/* ../public/datamodel/dmvariant.h:98 */
	const void* GetValueUntyped(const CDmVariant* );
	/* ../public/datamodel/dmvariant.h:99 */
	void SetValueUntyped(CDmVariant* , DmAttributeType_t, const void* );
private:
	/* ../public/datamodel/dmvariant.h:117 */
	void Construct(CDmVariant* );
	/* ../public/datamodel/dmvariant.h:118 */
	void Destruct(CDmVariant* );
	DmAttributeType_t m_type; /* 0 4 */
	char m_data[64]; /* 4 64 */
};

