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
bool CCircle::ClickedPointinsideFig(int x, int y)
{
	int Maxdis = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
	int dis = sqrt(pow(p1.x - x, 2) + pow(p1.y - y, 2));
	if (dis <= Maxdis)
	{
		return true;
	}
	return false;
}