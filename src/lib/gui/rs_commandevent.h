/****************************************************************************
**
** This file is part of the CADuntu project, a 2D CAD program
**
** Copyright (C) 2010 R. van Twisk (caduntu@rvt.dds.nl)
** Copyright (C) 2001-2003 RibbonSoft. All rights reserved.
**
**
** This file may be distributed and/or modified under the terms of the
** GNU General Public License version 2 as published by the Free Software 
** Foundation and appearing in the file gpl-2.0.txt included in the
** packaging of this file.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
**
** This copyright notice MUST APPEAR in all copies of the script!  
**
**********************************************************************/


#ifndef RS_COMMANDEVENT_H
#define RS_COMMANDEVENT_H

/**
 * Command Events.
 */
class RS_CommandEvent {
public:
    /**
	 * Creates a new command event that is not yet accepted.
	 *
	 * @param cmd the command that was triggered.
	 */
    RS_CommandEvent(const RS_String& cmd) {
        this->cmd = cmd;
		accepted = false;
    }
 
    /**
	 * @return the command that was triggered, usually by
	 * the user.
	 */
    RS_String getCommand() {
        return cmd;
    }

    /**
	 * Sets the event state to accepted.
	 */
	void accept() {
		accepted = true;
	}

    /**
	 * @return Whether the event was already accepted or not.
	 */
	bool isAccepted() {
		return accepted;
	}
 
protected:
    RS_String cmd;
	bool accepted;
};

#endif