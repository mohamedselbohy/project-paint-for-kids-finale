#include "DrawClrAction.h"
#include "ApplicationManager.h"
#include "GUI\input.h"
#include "GUI\Output.h"
DrawClrAction::DrawClrAction(ApplicationManager* pApp):Action(pApp)
{
}

void DrawClrAction::ReadActionParameters()
{
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();
	pOut->ClearStatusBar();
	pOut->PrintMessage("choose a drawing color from up there!!");
	coloract = pIn->GetUserAction();
	pOut->ClearStatusBar();
}

void DrawClrAction::Execute()
{
	Output* pOut = pManager->GetOutput();
	ReadActionParameters();
	switch (coloract)
	{
	case COLOR_BLACK:
		UI.DrawColor = BLACK;
		pOut->PrintMessage("Black it is ! let's go draw some black stuff!!");
		break;
	case COLOR_BLUE:
		UI.DrawColor = BLUE;
		pOut->PrintMessage("Blue it is ! let's go draw some blue stuff!!");
		break;
	case COLOR_GREEN:
		UI.DrawColor = GREEN;
		pOut->PrintMessage("Green it is ! let's go draw some green stuff!!");
		break;
	case COLOR_ORANGE:
		UI.DrawColor = ORANGE;
		pOut->PrintMessage("Orange it is ! let's go draw some orange stuff!!");
		break;
	case COLOR_RED:
		UI.DrawColor = RED;
		pOut->PrintMessage("Red it is ! let's go draw some red stuff!!");
		break;
	case COLOR_YELLOW:
		UI.DrawColor = YELLOW;
		pOut->PrintMessage("Yellow it is ! let's go draw some yellow stuff!!");
		break;
	default:
		pOut->PrintMessage("That's not a color :(");
	}
}
