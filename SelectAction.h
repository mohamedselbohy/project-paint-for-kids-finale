#pragma once
#include "Actions/Action.h"

class SelectAction : public Action
{
private:
	Point p1;
	GfxInfo SelectGfxInfo;
public:
	SelectAction(ApplicationManager* pApp);

	//Reads rectangle parameters
	virtual void ReadActionParameters();

	//Add rectangle to the ApplicationManager
	virtual void Execute();

};

