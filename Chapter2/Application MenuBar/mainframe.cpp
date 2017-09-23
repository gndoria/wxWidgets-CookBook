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
	////////////////////////////////////////////////////////////////////////////
	menuBar = new wxMenuBar;/**Initialise the menuBar.*/
	this->SetMenuBar(menuBar);/**Set the frames menu bar*/

	////////////////////////////////////////////////////////////////////////////
	fileMenu = new wxMenu;/**Initialise the fileMenu*/
	
	fileMenu->Append(wxID_EXIT, _("&Quit"));/**Add a menu item with a stock id */

	////////////////////////////////////////////////////////////////////////////
	helpMenu = new wxMenu;/**Initialise the helpMenu*/

	helpMenu->Append(ID_ABOUT, _("&About	F1"));/**Add a menu item with a custom id and an accelerator of F1*/

	////////////////////////////////////////////////////////////////////////////
	menuBar->Append(fileMenu, _("&File"));/**Add the fileMenu to the menuBar*/
	menuBar->Append(helpMenu, _("&Help"));/**Add the helpMenu to the menuBar*/
}
