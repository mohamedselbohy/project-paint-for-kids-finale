#include "CTriangle.h"

CTriangle::CTriangle(Point p1, Point p2, Point p3, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	corner1 = p1;
	corner2 = p2;
	corner3 = p3;
}

void CTriangle::Draw(Output* pOut) const
{
	pOut->DrawTria(corner1, corner2, corner3, FigGfxInfo, Selected);
}
