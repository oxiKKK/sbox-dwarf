
//
// public/animationsystem/ianimmovementsettings.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <0131DB59> ../public/animationsystem/ianimmovementsettings.h:8
void IAnimMovementSettings::IAnimMovementSettings()
{
} /* size: 0 */

// <0131DB3D> ../public/animationsystem/ianimmovementsettings.h:8
inline void IAnimMovementSettings::IAnimMovementSettings()
{
} /* size: 0 */

// <006727FC> ../public/animationsystem/ianimmovementsettings.h:8
// member functions: 16
// member variable: 1
// vtable entries: 2
// class size: 8
class IAnimMovementSettings {
	void ~IAnimMovementSettings(IAnimMovementSettings* );
	void IAnimMovementSettings(IAnimMovementSettings* , IAnimMovementSettings& );
	void IAnimMovementSettings(IAnimMovementSettings* , const IAnimMovementSettings& );
	void IAnimMovementSettings(IAnimMovementSettings* );
	IAnimMovementSettings& operator=(IAnimMovementSettings* , IAnimMovementSettings& );
	IAnimMovementSettings& operator=(IAnimMovementSettings* , const IAnimMovementSettings& );
	int ()(void) * * _vptr.IAnimMovementSettings; /* 0 8 */
	/* ../public/animationsystem/ianimmovementsettings.h:11 */
	virtual void SetShouldCalculateSlope(IAnimMovementSettings* , bool);
	/* ../public/animationsystem/ianimmovementsettings.h:12 */
	virtual bool ShouldCalculateSlope(const IAnimMovementSettings* );
	void ~IAnimMovementSettings(class IAnimMovementSettings *); /* linkage=_ZN21IAnimMovementSettingsD4Ev */
	void IAnimMovementSettings(class IAnimMovementSettings *, class IAnimMovementSettings &); /* linkage=_ZN21IAnimMovementSettingsC4EOS_ */
	void IAnimMovementSettings(class IAnimMovementSettings *, const class IAnimMovementSettings  &); /* linkage=_ZN21IAnimMovementSettingsC4ERKS_ */
	void IAnimMovementSettings(class IAnimMovementSettings *); /* linkage=_ZN21IAnimMovementSettingsC4Ev */
	class IAnimMovementSettings & operator=(class IAnimMovementSettings *, class IAnimMovementSettings &); /* linkage=_ZN21IAnimMovementSettingsaSEOS_ */
	class IAnimMovementSettings & operator=(class IAnimMovementSettings *, const class IAnimMovementSettings  &); /* linkage=_ZN21IAnimMovementSettingsaSERKS_ */
	virtual void SetShouldCalculateSlope(class IAnimMovementSettings *, bool); /* linkage=_ZN21IAnimMovementSettings23SetShouldCalculateSlopeEb */
	virtual bool ShouldCalculateSlope(const class IAnimMovementSettings  *); /* linkage=_ZNK21IAnimMovementSettings20ShouldCalculateSlopeEv */
};

