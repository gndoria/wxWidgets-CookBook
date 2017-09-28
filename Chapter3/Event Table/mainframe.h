/**
@author Gideon Ndoria
@license lgpl v3
@file mainframe.h
@brief The class definition of the applications mainframe
*/

#pragma once/**A feature of c++11, used inplace of inclusion guards*/

#include <wx/wx.h>/**This header includes the most commonly used wxWidgets classes*/

/**
MainFrame class
@brief Declares the applications mainframe
*/
class MainFrame : public wxFrame{
	public:
		enum id{
			ID_ABOUT/**Id for the about menuitem*/
		};
		/**
		The constructor
		@param const wxString &title The only thing we need to customise at the moment is the title
		*/
		MainFrame(const wxString &title);
	private:
		/**Declare a pointer to the menubar object.
		We assign it to nullptr instead of {wxMenuBar *menuBar;} to prevent the copy constructor from being called*/
		wxMenuBar *menuBar = nullptr;
		wxMenu *fileMenu ,*helpMenu = nullptr;/**Declare the menus*/
		void onClose(wxCommandEvent &event);/**Declare the function to handle the close event*/
		void onAbout(wxCommandEvent &event);/**Declare the function to handle the about event*/
		wxDECLARE_EVENT_TABLE();/**Declare the event table*/
};
