#pragma once
#include "Actions/Action.h"
class AddTriaAction : public Action
{
private:
	Point p1, p2, p3;
	GfxInfo TriaGfxInfo;
public:
	AddTriaAction(ApplicationManager* pApp);
	virtual void ReadActionParameters();
	virtual void Execute();
};

