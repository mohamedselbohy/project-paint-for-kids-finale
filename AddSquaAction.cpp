#include "AddSquaAction.h"
#include "ApplicationManager.h"
#include "GUI/Input.h"
#include "GUI/Output.h"
#include "CSquare.h"


AddSquaAction::AddSquaAction(ApplicationManager* pApp):Action(pApp)
{
}

void AddSquaAction::ReadActionParameters()
{
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();

	pOut->PrintMessage("New Square: Click at any point");

	pIn->GetPointClicked(P1.x, P1.y);

	SquaGfxInfo.isFilled = false;	
	SquaGfxInfo.DrawClr = pOut->getCrntDrawColor();
	SquaGfxInfo.FillClr = pOut->getCrntFillColor();

	pOut->ClearStatusBar();

}
void AddSquaAction::Execute()
{
	
	ReadActionParameters();

	
	CSquare* S = new CSquare(P1, SquaGfxInfo);

	
	pManager->AddFigure(S);
}

