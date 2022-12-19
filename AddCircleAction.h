#pragma once
#include "Actions/Action.h"
class AddCircleAction:public Action
{
private:
	Point c1;
	Point c2;
	GfxInfo CircGfxInfo;
public:
	AddCircleAction(ApplicationManager* pApp);
	virtual void ReadActionParameters();
	virtual void Execute();

};

