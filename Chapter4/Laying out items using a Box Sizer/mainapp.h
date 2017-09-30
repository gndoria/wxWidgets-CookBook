/**
@author Gideon Ndoria
@license lgpl v3
@file mainapp.h
@brief The class definition of the applications mainframe
*/
#pragma once

#include <wx/wx.h>

/**
Declaration of the MainApp class
@brief This is the applications entry point.
The customary main() function is defined in app.h lines 786-809.So we don't have to write one. 
*/
class MainApp : public wxApp{
	public:
		/**
		The applications initialisation is performed in ths function
		*/
		virtual bool OnInit();
};

/**
Pay special attention to this macro and its' counterpart in mainapp.cpp
Excluding it in this declaration will make your application fail
*/
wxDECLARE_APP(MainApp);
