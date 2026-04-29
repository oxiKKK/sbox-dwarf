
//
// public/tier0/cpumonitoring.h
//
//	referenced by: libtier0.so
//
//	struct: 1
//

// <000AF7E8> ../public/tier0/cpumonitoring.h:9
// member variables: 4
// struct size: 24
struct CPUFrequencyResults {
	double m_timeStamp; /* 0 8 */
	float m_GHz; /* 8 4 */
	float m_percentage; /* 12 4 */
	float m_lowestPercentage; /* 16 4 */
};

