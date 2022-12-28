#pragma once
#include "Figures/CFigure.h"
class CHexagon : public CFigure
{
private :
	Point p;
public:
	CHexagon(Point p1, GfxInfo FigureGfxInfo);
	virtual void Draw(Output* pOut) const;
	virtual bool ClickedPointinsideFig(int x, int y);
	virtual void MoveFigs(Point NewP);
};

