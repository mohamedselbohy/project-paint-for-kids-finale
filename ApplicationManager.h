#ifndef APPLICATION_MANAGER_H
#define APPLICATION_MANAGER_H

#include "DEFS.h"
#include "Figures\CFigure.h"
#include "GUI\input.h"
#include "GUI\output.h"
#include "SelectAction.h"
#include "StartRecAction.h"
//Main class that manages everything in the application.
class ApplicationManager
{
	enum { MaxFigCount = 200 };	//Max no of figures

private:
	int FigCount;		//Actual number of figures
	CFigure* FigList[MaxFigCount];	//List of all figures (Array of pointers)

	CFigure* SelectedFig = NULL; //Pointer to the selected figure
	bool isrecording;//boolean to determine if we're recording or not
	bool isplaying;//boolean to determine if we're playing a recording or not
	StartRecAction* recmgr;//pointer to recording class to manage recording activity
	//Pointers to Input and Output classes
	Input* pIn;
	Output* pOut;

public:
	ApplicationManager();
	~ApplicationManager();

	// -- Action-Related Functions
	//Reads the input command from the user and returns the corresponding action type
	ActionType GetUserAction() const;
	void ExecuteAction(ActionType); //Creates an action and executes it

	// -- Set And Get SelectedFig 
	void SetSelectedFig(CFigure* p);
	CFigure* GetSelectedFig() const;

	// -- Figures Management Functions
	void AddFigure(CFigure* pFig);          //Adds a new figure to the FigList
	CFigure* GetFigure(int x, int y) const; //Search for a figure given a point inside the figure

	// -- Interface Management Functions
	Input* GetInput() const; //Return pointer to the input
	Output* GetOutput() const; //Return pointer to the output
	void UpdateInterface() const;	//Redraws all the drawing window	



	// Function To make sure we select only the desired figure
	void OnlyThisFigIsSelected(CFigure* DesiredFig);
	void setrecording(bool k);
	void setPlaying(bool k);
	void DeletingFigure();
	void clearall();
	bool isclear();//to determine whether the drawing area is clear or not
	bool IsPlaying();//to tell other actions if we were recording or not
	StartRecAction* getrecmgr();

};
#endif