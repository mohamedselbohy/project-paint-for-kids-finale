#pragma once
#include "Actions/Action.h"
class AddSquaAction : public Action
{
private:
	Point P1; 
	GfxInfo SquaGfxInfo;
public:
	AddSquaAction(ApplicationManager* pApp);

	//Reads rectangle parameters
	virtual void ReadActionParameters();

	//Add rectangle to the ApplicationManager
	virtual void Execute();

};


