#pragma once

#include <array>
#include <vector>

using namespace std;

typedef array<double, 2>  LeafPos;

class RSegment
{
public:
	RSegment() {}
	~RSegment() {}
	
private:
	double m_MU;
	double m_Dose;
	
	vector<LeafPos> m_LeafPos;
};

