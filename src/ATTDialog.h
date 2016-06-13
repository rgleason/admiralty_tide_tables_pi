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
#include <wx/button.h>
#include <wx/colour.h>
#include <wx/datectrl.h>
#include <wx/dialog.h>
#include <wx/font.h>
#include <wx/gdicmn.h>
#include <wx/intl.h>
#include <wx/radiobut.h>
#include <wx/scrolwin.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/string.h>
#include <wx/textctrl.h>
#include <wx/xrc/xmlres.h>

///////////////////////////////////////////////////////////////////////////
class ATTCalculation;



///////////////////////////////////////////////////////////////////////////////
/// Class ATTDialog
///////////////////////////////////////////////////////////////////////////////
class ATTDialog : public wxDialog
{
private:

      
protected:
    ATTCalculation * att_calculation;
    
    
     wxBoxSizer* main_sizer;
    

    // all input elements:
    wxDatePickerCtrl * m_Date;
    wxRadioButton * m_TideSpring;
    wxRadioButton * m_TideMid;
    wxRadioButton * m_TideNipp;
    
    wxTextCtrl * m_StPName;
    wxTextCtrl * m_StPLW1T;
    wxTextCtrl * m_StPLW1H;
    wxTextCtrl * m_StPHW1T;
    wxTextCtrl * m_StPHW1H;
    wxTextCtrl * m_StPLW2T;
    wxTextCtrl * m_StPLW2H;
    wxTextCtrl * m_StPHW2T;
    wxTextCtrl * m_StPHW2H;
    
    wxTextCtrl * m_ScPName;
    wxTextCtrl * m_ScPLW1T;
    wxTextCtrl * m_ScPLW1H;
    wxTextCtrl * m_ScPHW1T;
    wxTextCtrl * m_ScPHW1H;
    wxTextCtrl * m_ScPLW2T;
    wxTextCtrl * m_ScPLW2H;
    wxTextCtrl * m_ScPHW2T;
    wxTextCtrl * m_ScPHW2H;
    
    wxStaticText* m_StPName2Label;
    wxTextCtrl * m_ScPHWT1;
    wxTextCtrl * m_ScPHWT2;
    wxTextCtrl * m_ScPHWT3;
    wxTextCtrl * m_ScPHWT4;
    
    wxTextCtrl * m_ScPLWT1;
    wxTextCtrl * m_ScPLWT2;
    wxTextCtrl * m_ScPLWT3;
    wxTextCtrl * m_ScPLWT4;
    
    wxTextCtrl * m_StPMHWS;
    wxTextCtrl * m_StPMHWN;
    wxTextCtrl * m_StPMLWS;
    wxTextCtrl * m_StPMLWN;
    wxTextCtrl * m_StPSC;
    
    wxStaticText* m_ScPName2Label;
    wxTextCtrl * m_ScPDHWT1;
    wxTextCtrl * m_ScPDHWT2;
    wxTextCtrl * m_ScPDLWT1;
    wxTextCtrl * m_ScPDLWT2;
    
    wxTextCtrl * m_ScPMHWS;
    wxTextCtrl * m_ScPMHWN;
    wxTextCtrl * m_ScPMLWS;
    wxTextCtrl * m_ScPMLWN;
    wxTextCtrl * m_ScPSC;
    
    wxButton  * m_bCalculate;
    wxButton  * m_bClose;
    wxButton  * m_bPrint;
    wxButton  * m_bSave;
    
    
    
    // Virtual event handlers, overide them in your derived class
    void OnBtnClick( wxCommandEvent& event );
    void OnClose( wxCommandEvent& event );
    void OnStPEnter( wxCommandEvent& event );
    void OnScPEnter( wxCommandEvent& event );

public:

    ATTDialog( wxWindow* parent, 
               wxWindowID id = wxID_ANY, 
               const wxString& title = _( "A.T.T. Calculation" ), 
               const wxPoint& pos = wxDefaultPosition, 
               const wxSize& size = wxDefaultSize, 
               long style = wxCAPTION | wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER );
    ~ATTDialog();
    void CreateLayout(  );
};



#endif //__ATTDIALOG_H__

