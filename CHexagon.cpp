#include "CHexagon.h"
CHexagon::CHexagon(Point p1, GfxInfo FigureGfxInfo) :CFigure(FigureGfxInfo)
{
	p = p1;
}

void CHexagon::Draw(Output* pOut) const
{
	pOut->Drawhexa(p, FigGfxInfo, Selected);
}
