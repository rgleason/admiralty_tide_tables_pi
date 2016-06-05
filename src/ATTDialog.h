/******************************************************************************
 *
 * Project:  OpenCPN
 * Purpose:  A.T.T. Calculation Plugin
 * Author:   Pavel Saviankou
 *
 ***************************************************************************
 *   Copyright (C) 2016 by Pavel Saviankou                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.         *
 ***************************************************************************
 */

#ifndef __ATTDIALOG_H__
#define __ATTDIALOG_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/scrolwin.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class ATTDialog
///////////////////////////////////////////////////////////////////////////////
class ATTDialog : public wxDialog
{
private:

      
protected:
    wxScrolledWindow* m_scrolledWindow;
    wxBoxSizer* button_sizer;

    // Virtual event handlers, overide them in your derived class
    void OnBtnClick( wxCommandEvent& event );


public:

    ATTDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _( "A.T.T. Calculation" ), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400, 450 ), long style = wxCAPTION | wxDEFAULT_DIALOG_STYLE );
    ~ATTDialog();
    void CreateButtons( const wxArrayString& labels );
    void AddButton( const wxString& label);

};

// ///////////////////////////////////////////////////////////////////////////////
// /// Class LauncherButton
// ///////////////////////////////////////////////////////////////////////////////
// class LauncherButton : public wxButton
// {
// private:
//     wxString m_command;
// 
// protected:
// 
// public:
//     LauncherButton( wxWindow *parent, wxWindowID id, const wxString &label = wxEmptyString, const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxDefaultSize, long style = 0, const wxValidator &validator = wxDefaultValidator, const wxString &name = wxButtonNameStr ) :
//         wxButton( parent, id, label, pos, size, style, validator, name ) {}
//     void SetCommand( const wxString& command )
//     {
//         m_command = command;
//     }
//     wxString GetCommand()
//     {
//         return m_command;
//     }
// 
// };


#endif //__LAUNCHERUIDIALOG_H__
