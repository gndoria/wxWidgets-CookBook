/**
@author Gideon Ndoria
@license lgpl v3
@file mainframe.cpp
@brief The implementation of the applications mainframe
*/
#include "mainframe.h"
#include <wx/aboutdlg.h>/**This header is not included in wx.h.It declares wxAboutDialogInfo and  wxAboutBox*/

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
	
	fileMenu->Append(wxID_EXIT, _("&Quit"), _("Quit the application"));/**Add a menu item with a stock id and help text*/

	////////////////////////////////////////////////////////////////////////////
	helpMenu = new wxMenu;/**Initialise the helpMenu*/

	helpMenu->Append(ID_ABOUT, _("&About	F1"), _("Show about dialog"));/**Add a menu item with a custom id and an accelerator of F1*/

	////////////////////////////////////////////////////////////////////////////
	menuBar->Append(fileMenu, _("&File"));/**Add the fileMenu to the menuBar*/
	menuBar->Append(helpMenu, _("&Help"));/**Add the helpMenu to the menuBar*/

	////////////////////////////////////////////////////////////////////////////
	CreateStatusBar();/**Create the status bar*/

}

/**Implement the event table
Take special notes of the signatures
*/
wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
	EVT_MENU(wxID_EXIT, MainFrame::onClose)/**Handle the Quit menu event*/
	EVT_MENU(ID_ABOUT, MainFrame::onAbout)/**Handle the Quit menu event*/
wxEND_EVENT_TABLE()

void MainFrame::onClose(wxCommandEvent &event){
	Close();
}

void MainFrame::onAbout(wxCommandEvent &event){
    wxAboutDialogInfo about;/**Declare an about dialog info*/
    about.SetName(_("A programm with an event table"));/**Set the name*/
    about.SetVersion(_("0.1 Alpha"));/**Set the version*/
    about.SetDescription(_("This program demonstrates how to handle events using an event table."));/**Set the description*/
    about.SetCopyright(_("(C) 2017 Gideon Ndoria <gndoria@gmail.com>"));/**Set the copyright*/
    wxAboutBox(about, this);/**Show the about dialog*/
}
