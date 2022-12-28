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
bool CTriangle::ClickedPointinsideFig(int x, int y)
{
	double A1 = 0.5 * abs((corner1.x * (corner2.y - y) + corner2.x * (y - corner1.y) + x * (corner1.y - corner2.y)));
	double A2 = 0.5 * abs((corner1.x * (corner3.y - y) + corner3.x * (y - corner1.y) + x * (corner1.y - corner3.y)));
	double A3 = 0.5 * abs((corner3.x * (corner2.y - y) + corner2.x * (y - corner3.y) + x * (corner3.y - corner2.y)));
	double A = 0.5 * abs((corner1.x * (corner2.y - corner3.y) + corner2.x * (corner3.y - corner1.y) + corner3.x * (corner1.y - corner2.y)));

	if (A == A1 + A2 + A3)
	{
		return true;
	}
	return false;
}

void CTriangle::MoveFigs(Point NewP)
{
	Point cen;
	cen.x = (corner1.x + corner2.x + corner3.x) / 3;
	cen.y = (corner1.y + corner2.y + corner3.y) / 3;

	double Difx = cen.x - NewP.x;
	double Dify = cen.y - NewP.y;

	corner1.x += Difx;
	corner1.y += Dify;
	corner2.x += Difx;
	corner2.y += Dify;
	corner3.x += Difx;
	corner3.y += Dify;
}