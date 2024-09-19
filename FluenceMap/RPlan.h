#pragma once

#include <memory>
#include <string>
#include "RNode.h"

class RPlan
{
public:
	RPlan() {}
	~RPlan() {}

	size_t getNumNodes() const { return m_Nodes.size(); }
	RNode* getNode(size_t i) { return m_Nodes[i].get(); }

	bool loadCKPlan(string fn);
private:
	vector<unique_ptr<RNode>> m_Nodes;
};

