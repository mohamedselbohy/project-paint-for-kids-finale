#pragma once
#include "Actions/Action.h"
#include "Figures/CFigure.h"


class MoveAction : public Action
{
private:
	CFigure* FigToMove;
	Point p;
public:
	MoveAction(ApplicationManager* pApp);

	// Reads info of the selected figure to move it 
	virtual void ReadActionParameters();

	// moves the selected fig 
	virtual void Execute();
};
