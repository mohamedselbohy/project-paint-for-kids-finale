#include "AddTriaAction.h"
#include "ApplicationManager.h"

#include "GUI/Input.h"
#include "GUI/Output.h"
#include "CTriangle.h"



AddTriaAction::AddTriaAction(ApplicationManager* pApp):Action(pApp)
{
}

void AddTriaAction::ReadActionParameters()
{

	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();

	pOut->PrintMessage("New Triangle: Click at first corner");

	pIn->GetPointClicked(p1.x, p1.y);

	pOut->PrintMessage("New Triangle: Click at second corner");

	
	pIn->GetPointClicked(p2.x, p2.y);
	pOut->PrintMessage("New Triangle: Click at third corner");
	pIn->GetPointClicked(p3.x, p3.y);

	TriaGfxInfo.isFilled = false;	
	TriaGfxInfo.DrawClr = pOut->getCrntDrawColor();
	TriaGfxInfo.FillClr = pOut->getCrntFillColor();

	pOut->ClearStatusBar();
}

void AddTriaAction::Execute()
{
	ReadActionParameters();


	CTriangle* T = new CTriangle(p1,p2,p3,TriaGfxInfo);


	pManager->AddFigure(T);
}
