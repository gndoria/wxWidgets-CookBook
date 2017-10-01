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
	
	fileMenu->Append(wxID_EXIT, _T("&Quit"), _T("Quit the application"));/**Add a menu item with a stock id and help text*/

	////////////////////////////////////////////////////////////////////////////
	helpMenu = new wxMenu;/**Initialise the helpMenu*/

	helpMenu->Append(ID_ABOUT, _T("&About	F1"), _T("Show about dialog"));/**Add a menu item with a custom id and an accelerator of F1*/

	////////////////////////////////////////////////////////////////////////////
	menuBar->Append(fileMenu, _T("&File"));/**Add the fileMenu to the menuBar*/
	menuBar->Append(helpMenu, _T("&Help"));/**Add the helpMenu to the menuBar*/

	////////////////////////////////////////////////////////////////////////////
	mainSizer = new wxBoxSizer(wxVERTICAL);/**Initialise mainsizer as an instance of a boxsizer and set its orientation*/
	this->SetSizer(mainSizer);

	mainPanel = new wxPanel(this);/**Initialise the panel and set its' parent to this window*/
	mainSizer->Add(mainPanel, wxEXPAND, wxEXPAND, 0);/**Add the panel to mainSizer and make it expand to fit the sizer and have a border of 0*/

	contentSizer = new wxBoxSizer(wxVERTICAL);/**Initialise contentSizer as an instance of a boxsizer and set its orientation.
	This is the sizer we will be adding out controlls to*/
	mainPanel->SetSizer(contentSizer);/**Set contentSizer as mainPanels' Sizer*/

	horizontalSizer = new wxBoxSizer(wxHORIZONTAL);/**Initialise a horizontal box sizer*/
	/**Sizers can be nested*/
	contentSizer->Add(horizontalSizer);

	/**Implement the buttons.Since we want to show the buttons in mainPanel, the parent must be set to mainPanel otherwise the buttons wont be 		
	displayed*/
	button1 = new wxButton(mainPanel, wxID_ANY, _T("Button&1"));
	button2 = new wxButton(mainPanel, wxID_ANY, _T("Button&2"));
	button3 = new wxButton(mainPanel, wxID_ANY, _T("Button&3"));
	button4 = new wxButton(mainPanel, wxID_ANY, _T("Button&4"));
	button5 = new wxButton(mainPanel, wxID_ANY, _T("Button&5"));
	button6 = new wxButton(mainPanel, wxID_ANY, _T("Button&6"));

	/**Add the buttons to the horizontal sizer*/
	horizontalSizer->Add(button1);
	horizontalSizer->Add(button2);
	horizontalSizer->Add(button3);

	/**Add the buttons to the vertical sizer*/
	contentSizer->Add(button4);
	contentSizer->Add(button5);
	contentSizer->Add(button6);

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
	Close();//Close the application
}

void MainFrame::onAbout(wxCommandEvent &event){
	wxMessageBox(_T("A demo application for wxWidgets 3.0 cookbook.\n© Gideon Ndoria 2017"),
		_T("About The Application"));/**Show the about dialog*/
}
