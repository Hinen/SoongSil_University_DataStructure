#pragma once

#include "../WeekManagerBase.h"
#include "Polynomial.h"

class Week2Manager : public WeekManagerBase
{
public:
	Week2Manager();
	~Week2Manager();

public:
	virtual void Main() override;

private:
	void PolynomialTest1();
};