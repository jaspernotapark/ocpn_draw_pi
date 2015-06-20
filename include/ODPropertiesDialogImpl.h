/***************************************************************************
*
* Project:  OpenCPN
* Purpose:  OCPN Draw Properties Dialog support
* Author:   Jon Gough
*
***************************************************************************
*   Copyright (C) 2010 by David S. Register                               *
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
**************************************************************************/

#ifndef __ODPropertiesDialogImpl__
#define __ODPropertiesDialogImpl__

/**
@file
Subclass of ODPropertiesForm, which is generated by wxFormBuilder.
*/

#include "ODPropertiesDialogDef.h"
#include <wx/bmpcbox.h>

/** Implementing ODPropertiesForm */
class ODPropertiesDialogImpl : public ODPropertiesDialogDef
{
protected:
    // Handlers for ODPropertiesForm events.
    void OnDrawPropertiesOKClick( wxCommandEvent& event );
    void OnDrawPropertiesCancelClick( wxCommandEvent& event );
    void OnDrawPropertiesApplyClick( wxCommandEvent& event );
    
    void SaveChanges();
    
    wxSize              m_defaultClientSize;

    
public:
    /** Constructor */
    ODPropertiesDialogImpl( wxWindow* parent );
    void UpdateProperties( void );
    void SetDialogSize( void );
};

#endif // __ODPropertiesDialogImpl__
