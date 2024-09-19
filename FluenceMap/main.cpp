#include "RPlan.h"

int main()
{
	auto plan = make_unique<RPlan>();
	plan->loadCKPlan("test.xml");

	return 0;
}