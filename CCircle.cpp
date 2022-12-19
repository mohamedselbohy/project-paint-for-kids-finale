#include "CCircle.h"


CCircle::CCircle(Point c1,Point c2, GfxInfo FigureGfxInfo) :CFigure(FigureGfxInfo)
{
	p1 = c1;
	p2 = c2;
}

void CCircle::Draw(Output* pOut) const
{
	pOut->DrawCirc(p1,p2, FigGfxInfo, Selected);
}
