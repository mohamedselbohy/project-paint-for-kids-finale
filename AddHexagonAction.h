#pragma once
#include "Actions/Action.h"
class AddHexagonAction : public Action
{
private:
	Point p1;
	GfxInfo HexaGfxInfo;
public:
	AddHexagonAction(ApplicationManager* pApp);
	virtual void ReadActionParameters();
	virtual void Execute();

};

