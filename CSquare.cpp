#include "CSquare.h"

CSquare::CSquare(Point p1, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	p = p1;
}

void CSquare::Draw(Output* pOut) const
{
	pOut->DrawSqua(p, FigGfxInfo, Selected);
}
