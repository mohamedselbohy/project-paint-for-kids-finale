#pragma once
#include "Figures/CFigure.h"
class CCircle :public CFigure
{
private:
	Point p1;
	Point p2;
public:
	CCircle(Point p1,Point p2, GfxInfo FigureGfxInfo);
	virtual void Draw(Output* pOut) const;
	virtual bool ClickedPointinsideFig(int x, int y);
	virtual double GetRadius();
	virtual void MoveFigs(Point NewP);
};

