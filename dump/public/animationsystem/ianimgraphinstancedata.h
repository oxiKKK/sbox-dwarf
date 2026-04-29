
//
// public/animationsystem/ianimgraphinstancedata.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <015BEAAC> ../public/animationsystem/ianimgraphinstancedata.h:19
void IAnimGraphInstanceData::IAnimGraphInstanceData()
{
} /* size: 0 */

// <015BEA90> ../public/animationsystem/ianimgraphinstancedata.h:19
inline void IAnimGraphInstanceData::IAnimGraphInstanceData()
{
} /* size: 0 */

// <015BEA79> ../public/animationsystem/ianimgraphinstancedata.h:19
void IAnimGraphInstanceData::~IAnimGraphInstanceData()
{
} /* size: 0 */

// <015BEA46> ../public/animationsystem/ianimgraphinstancedata.h:19
inline void IAnimGraphInstanceData::~IAnimGraphInstanceData()
{
} /* size: 0 */

// <015BE326> ../public/animationsystem/ianimgraphinstancedata.h:19
void IAnimGraphInstanceData::IAnimGraphInstanceData(const IAnimGraphInstanceData &)
{
} /* size: 0 */

// <015BE305> ../public/animationsystem/ianimgraphinstancedata.h:19
inline void IAnimGraphInstanceData::IAnimGraphInstanceData(const IAnimGraphInstanceData &)
{
} /* size: 0 */

// <00DF2E56> ../public/animationsystem/ianimgraphinstancedata.h:19
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 16
class IAnimGraphInstanceData : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void IAnimGraphInstanceData(IAnimGraphInstanceData* , IAnimGraphInstanceData& );
	void IAnimGraphInstanceData(IAnimGraphInstanceData* , const IAnimGraphInstanceData& );
	void IAnimGraphInstanceData(IAnimGraphInstanceData* );
	/* ../public/animationsystem/ianimgraphinstancedata.h:23 */
	virtual IAnimGraphInstanceDataPtr Clone(const IAnimGraphInstanceData* );
	/* ../public/animationsystem/ianimgraphinstancedata.h:26 */
	virtual float GetAnimTime(const IAnimGraphInstanceData* );
	virtual void ~IAnimGraphInstanceData(IAnimGraphInstanceData* );
	void IAnimGraphInstanceData(class IAnimGraphInstanceData *, class IAnimGraphInstanceData &); /* linkage=_ZN22IAnimGraphInstanceDataC4EOS_ */
	void IAnimGraphInstanceData(class IAnimGraphInstanceData *, const class IAnimGraphInstanceData  &); /* linkage=_ZN22IAnimGraphInstanceDataC4ERKS_ */
	void IAnimGraphInstanceData(class IAnimGraphInstanceData *); /* linkage=_ZN22IAnimGraphInstanceDataC4Ev */
	virtual IAnimGraphInstanceDataPtr Clone(const class IAnimGraphInstanceData  *); /* linkage=_ZNK22IAnimGraphInstanceData5CloneEv */
	virtual float GetAnimTime(const class IAnimGraphInstanceData  *); /* linkage=_ZNK22IAnimGraphInstanceData11GetAnimTimeEv */
	virtual void ~IAnimGraphInstanceData(class IAnimGraphInstanceData *); /* linkage=_ZN22IAnimGraphInstanceDataD4Ev */
};

