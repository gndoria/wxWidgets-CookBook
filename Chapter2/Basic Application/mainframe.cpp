/**
@author Gideon Ndoria
@license lgpl v3
@file mainframe.cpp
@brief The implementation of the applications mainframe
*/
#include "mainframe.h"

/**
Implement the applications main frame
*/
MainFrame::MainFrame(const wxString &title)
	: wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE){
	Center();/**Place the applications frame at the center of the screen*/
}
