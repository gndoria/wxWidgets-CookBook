/**
@author Gideon Ndoria
@license lgpl v3
@file mainapp.cpp
@brief The implementation of the applications mainapp
*/

#include "mainapp.h"
#include "mainframe.h"

/**
Implementation of the MainApp classs' OnInit function
*/
bool MainApp::OnInit(){
	/**
	Initialise the MainFrame object
	You don't need to call delete on it.It will be deleted when the application exits
	*/
	MainFrame *frame = new MainFrame(_("Laying out items using a Box Sizer"));
	/**
	Show the frame
	*/
	frame->Show(true);
	return true;
}

/**
Pay special attention to this macro and its' counterpart in mainapp.h
Excluding it in this implementation will make your application fail
*/
wxIMPLEMENT_APP(MainApp);
