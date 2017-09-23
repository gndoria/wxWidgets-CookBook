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
		/**
		The constructor
		@param const wxString &title The only thing we need to customise at the moment is the title
		*/
		MainFrame(const wxString &title);
};
