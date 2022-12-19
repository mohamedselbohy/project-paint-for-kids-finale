#include "AddCircleAction.h"
#include "ApplicationManager.h"

#include "GUI/Input.h"
#include "GUI/Output.h"
#include "CCircle.h"


AddCircleAction::AddCircleAction(ApplicationManager* pApp):Action(pApp)
{
}

void AddCircleAction::ReadActionParameters()
{
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();

	pOut->PrintMessage("New Circle: Click at the first point");

	pIn->GetPointClicked(c1.x, c1.y);

	pOut->PrintMessage("New circle: Click at the second point");


	pIn->GetPointClicked(c2.x, c2.y);

	CircGfxInfo.isFilled = false;	
	
	CircGfxInfo.DrawClr = pOut->getCrntDrawColor();
	CircGfxInfo.FillClr = pOut->getCrntFillColor();

	pOut->ClearStatusBar();

}

void AddCircleAction::Execute()
{
	ReadActionParameters();

	CCircle* C = new CCircle(c1, c2, CircGfxInfo);

	
	pManager->AddFigure(C);
}
