#include "CRectangle.h"


CRectangle::CRectangle(Point P1, Point P2, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	Corner1 = P1;
	Corner2 = P2;
}
	

void CRectangle::Draw(Output* pOut) const
{
	//Call Output::DrawRect to draw a rectangle on the screen	
	pOut->DrawRect(Corner1, Corner2, FigGfxInfo, Selected);
}
bool CRectangle::ClickedPointinsideFig(int x, int y)
{
	Point p1, p2;
	p1.x = Corner2.x;
	p1.y = Corner1.y;

	p2.x = Corner1.x;
	p2.y = Corner2.y;

	double A1 = 0.5 * abs((p2.x * (Corner2.y - y) + Corner2.x * (y - p2.y) + x * (p2.y - Corner2.y)));
	double A2 = 0.5 * abs((Corner1.x * (p1.y - y) + p1.x * (y - Corner1.y) + x * (Corner1.y - p1.y)));
	double A3 = 0.5 * abs((p1.x * (Corner2.y - y) + Corner2.x * (y - p1.y) + x * (p1.y - Corner2.y)));
	double A4 = 0.5 * abs((Corner1.x * (p2.y - y) + p2.x * (y - Corner1.y) + x * (Corner1.y - p2.y)));
	double A = abs((Corner2.x - p2.x) * (p1.y - Corner2.y));
	if (A == A1+A2+A3+A4)
	{
		return true;
	}
	return false;

}

int CRectangle::Getlen()
{
	return abs(Corner2.x - Corner1.x);
}
int CRectangle::Getwed()
{
	return abs(Corner1.y - Corner2.y);
}
void CRectangle::MoveFigs(Point NewP)
{
	double len = Getlen();
	double wed = Getwed();
	Corner1.x = NewP.x - len / 2;
	Corner1.y = NewP.y + wed / 2;
	Corner2.x = NewP.x + len / 2;
	Corner2.y = NewP.y - wed / 2;

}