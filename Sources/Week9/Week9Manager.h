#pragma once

#include "../WeekManagerBase.h"
#include <string.h>

class Week9Manager : public WeekManagerBase
{
public:
	Week9Manager() : WeekManagerBase(9) {}
	~Week9Manager() {}

public:
	virtual void Main() override;

private:
	int SumRecursion(int num);
	float SumRecursion2(int num);

	void FiboRecursionCountMain(int n);
	int FiboRecursionCount(int* countArr, int n);

	char* StrReverseRecursion(char* str);
};