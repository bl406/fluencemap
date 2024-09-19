#pragma once

#include <memory>
#include "RBeam.h"

class RNode
{
public:
	RNode() {}
	~RNode() {}

	size_t getNumBeams() const { return m_Beams.size(); }
	RBeam* getBeam(size_t i) { return m_Beams[i].get(); }

private:	
	vector<unique_ptr<RBeam>> m_Beams;
};

