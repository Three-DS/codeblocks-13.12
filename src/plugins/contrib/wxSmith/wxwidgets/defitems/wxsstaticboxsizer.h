/*
* This file is part of wxSmith plugin for Code::Blocks Studio
* Copyright (C) 2006-2007  Bartlomiej Swiecki
*
* wxSmith is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3 of the License, or
* (at your option) any later version.
*
* wxSmith is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with wxSmith. If not, see <http://www.gnu.org/licenses/>.
*
* $Revision: 7109 $
* $Id: wxsstaticboxsizer.h 7109 2011-04-15 11:53:16Z mortenmacfly $
* $HeadURL: http://svn.code.sf.net/p/codeblocks/code/branches/release-xx.yy/src/plugins/contrib/wxSmith/wxwidgets/defitems/wxsstaticboxsizer.h $
*/

#ifndef WXSSTATICBOXSIZER_H
#define WXSSTATICBOXSIZER_H

#include "../wxssizer.h"

class wxsStaticBoxSizer: public wxsSizer
{
    public:

        wxsStaticBoxSizer(wxsItemResData* Data);

    private:

        virtual wxSizer* OnBuildSizerPreview(wxWindow* Parent);
        virtual void OnBuildSizerCreatingCode();
        virtual void OnEnumSizerProperties(long Flags);
        virtual bool OnIsPointer() { return true; }

        long Orient;
        wxString Label;
};

#endif
