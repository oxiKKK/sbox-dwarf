
//
// public/datamodel/dmvar.h
//
//	referenced by: libengine2.so
//
//	class: 1
//

// <0613EA52> ../public/datamodel/dmvar.h:21
// member functions: 29
// member variables: 2
// class size: 16
class CDmaVar<bool> {
	/* ../public/datamodel/dmattributevar.h:800 */
	void CDmaVar(CDmaVar<bool>* );
	/* ../public/datamodel/dmattributevar.h:806 */
	void Init(CDmaVar<bool>* , CDmElement* , const char* , int);
	/* ../public/datamodel/dmattributevar.h:817 */
	void InitAndSet(CDmaVar<bool>* , CDmElement* , const char* , const bool& , int);
	/* ../public/datamodel/dmattribute.h:516 */
	void InitAndSetFromString(CDmaVar<bool>* , CDmElement* , const char* , const char* , int);
	/* ../public/datamodel/dmattributevar.h:829 */
	const bool& Set(CDmaVar<bool>* , const bool& );
	/* ../public/datamodel/dmattributevar.h:911 */
	const bool& Get(const CDmaVar<bool>* );
	/* ../public/datamodel/dmattributevar.h:906 */
	const bool& operator bool const&(const CDmaVar<bool>* );
	/* ../public/datamodel/dmattributevar.h:916 */
	const bool* operator->(const CDmaVar<bool>* );
	/* ../public/datamodel/dmattributevar.h:841 */
	const CDmaVar<bool>& operator=(CDmaVar<bool>* , const CDmaVar<bool>& );
	/* ../public/datamodel/dmattributevar.h:836 */
	const bool& operator=(CDmaVar<bool>* , const bool& );
	/* ../public/datamodel/dmattributevar.h:847 */
	const bool& operator+=(CDmaVar<bool>* , const bool& );
	/* ../public/datamodel/dmattributevar.h:852 */
	const bool& operator-=(CDmaVar<bool>* , const bool& );
	/* ../public/datamodel/dmattributevar.h:857 */
	const bool& operator/=(CDmaVar<bool>* , const bool& );
	/* ../public/datamodel/dmattributevar.h:862 */
	const bool& operator*=(CDmaVar<bool>* , const bool& );
	/* ../public/datamodel/dmattributevar.h:867 */
	const bool& operator^=(CDmaVar<bool>* , const bool& );
	/* ../public/datamodel/dmattributevar.h:872 */
	const bool& operator|=(CDmaVar<bool>* , const bool& );
	/* ../public/datamodel/dmattributevar.h:877 */
	const bool& operator&=(CDmaVar<bool>* , const bool& );
	/* ../public/datamodel/dmattributevar.h:882 */
	bool operator++(CDmaVar<bool>* );
	/* ../public/datamodel/dmattributevar.h:887 */
	bool operator--(CDmaVar<bool>* );
	/* ../public/datamodel/dmattributevar.h:892 */
	bool operator++(CDmaVar<bool>* , int);
	/* ../public/datamodel/dmattributevar.h:899 */
	bool operator--(CDmaVar<bool>* , int);
	/* ../public/datamodel/dmattributevar.h:921 */
	CDmAttribute* GetAttribute(CDmaVar<bool>* );
	/* ../public/datamodel/dmattributevar.h:927 */
	const CDmAttribute* GetAttribute(const CDmaVar<bool>* );
	/* ../public/datamodel/dmattributevar.h:933 */
	bool IsDirty(const CDmaVar<bool>* );
	class CValueProxy {
	};
	/* ../public/datamodel/dmvar.h:93 */
	CValueProxy GetProxy(CDmaVar<bool>* );
protected:
	/* ../public/datamodel/dmattributevar.h:939 */
	const bool& Value(const CDmaVar<bool>* );
	/* ../public/datamodel/dmattributevar.h:944 */
	bool& Value(CDmaVar<bool>* );
	/* ../public/datamodel/dmvar.h:23 */
	typedef StorageType_t D;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/datamodel/dmattributevar.h:959 */
	const D& Storage(const CDmaVar<bool>* );
	/* ../public/datamodel/dmattributevar.h:964 */
	D& Storage(CDmaVar<bool>* );
private:
	D m_Storage; /* 0 1 */
protected:
	CDmAttribute * m_pAttribute; /* 8 8 */
};

