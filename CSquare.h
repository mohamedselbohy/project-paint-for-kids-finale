#pragma once
#include "Figures/CFigure.h"
class CSquare:public CFigure
{
private:
	Point p;
public:
	CSquare(Point p1,  GfxInfo FigureGfxInfo);
	virtual void Draw(Output* pOut) const;
	virtual bool ClickedPointinsideFig(int x, int y);
};

