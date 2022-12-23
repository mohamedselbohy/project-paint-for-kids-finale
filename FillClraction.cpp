#include"FillClrAction.h"
#include "ApplicationManager.h"
#include "GUI\input.h"
#include "GUI\Output.h"

FillClrAction::FillClrAction(ApplicationManager* pApp):Action(pApp)
{
}

void FillClrAction::ReadActionParameters()
{
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();
	pOut->PrintMessage("to change the fill color please select a color from the toolbar");
	coloract = pIn->GetUserAction();
	pOut->ClearStatusBar();
}

void FillClrAction::Execute()
{
	ReadActionParameters();
	Output* pOut = pManager->GetOutput();
	switch (coloract)
	{
	case COLOR_BLACK:
		UI.FillColor = BLACK;
		pOut->PrintMessage("Black it is ! let's go draw some black stuff!!");
		break;
	case COLOR_BLUE:
		UI.FillColor = BLUE;
		pOut->PrintMessage("Blue it is ! let's go draw some blue stuff!!");
		break;
	case COLOR_GREEN:
		UI.FillColor = GREEN;
		pOut->PrintMessage("Green it is ! let's go draw some green stuff!!");
		break;
	case COLOR_ORANGE:
		UI.FillColor = ORANGE;
		pOut->PrintMessage("Orange it is ! let's go draw some orange stuff!!");
		break;
	case COLOR_RED:
		UI.FillColor = RED;
		pOut->PrintMessage("Red it is ! let's go draw some red stuff!!");
		break;
	case COLOR_YELLOW:
		UI.FillColor = YELLOW;
		pOut->PrintMessage("Yellow it is ! let's go draw some yellow stuff!!");
		break;
	case DRAW_FILLING_COLOR:
		UI.FillColor = LIGHTGOLDENRODYELLOW;
		pOut->PrintMessage("No fill! let's draw them empty!!");
		break;
	default:
		pOut->PrintMessage("That's not a color :(");
	}
}
