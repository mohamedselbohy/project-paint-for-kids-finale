#include "CSquare.h"

CSquare::CSquare(Point p1, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	p = p1;
}

void CSquare::Draw(Output* pOut) const
{
	pOut->DrawSqua(p, FigGfxInfo, Selected);
}
bool CSquare::ClickedPointinsideFig(int x, int y)
{
	int dis = sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
	int Maxdis = sqrt(2 * pow(100, 2));
	if (dis <= Maxdis)
	{
		return true;
	}
	return false;
}
