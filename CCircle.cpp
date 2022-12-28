#include "CCircle.h"
#define pi 3.14

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
double CCircle::GetRadius()
{
	return sqrt(pow(p1.x - p2.x , 2)+pow(p1.y - p2.y , 2));
}
void CCircle::MoveFigs(Point NewP)
{
	double r = GetRadius();
	p1.x = NewP.x; 
	p1.y = NewP.y; 
	p2.x = p1.x + r;
	p2.y = p1.y;
}