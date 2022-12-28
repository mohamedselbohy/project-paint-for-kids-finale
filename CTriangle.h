#ifndef CTRIA_H
#define CTRIA_H
#include "Figures/CFigure.h"
class CTriangle : public CFigure
{
private :
	Point corner1;
	Point corner2;
	Point corner3;
public:
	CTriangle(Point p1, Point p2, Point p3, GfxInfo FigureGfxInfo);
	virtual void Draw(Output* pOut) const;
	virtual bool ClickedPointinsideFig(int x, int y);
	virtual void MoveFigs(Point NewP);
};

#endif