#pragma once

#include <memory>
#include "RSegment.h"

using namespace std;

class RBeam
{
public:
	RBeam() {}
	~RBeam() {}

	size_t getNumSegments() const { return m_Segments.size(); }
	RSegment* getSegment(size_t i) { return m_Segments[i].get(); }

private:
	vector<unique_ptr<RSegment>> m_Segments;
};

