/***************************************************************************
 * Copyright (C) GFZ Potsdam                                               *
 * All rights reserved.                                                    *
 *                                                                         *
 * GNU Affero General Public License Usage                                 *
 * This file may be used under the terms of the GNU Affero                 *
 * Public License version 3.0 as published by the Free Software Foundation *
 * and appearing in the file LICENSE included in the packaging of this     *
 * file. Please review the following information to ensure the GNU Affero  *
 * Public License version 3.0 requirements will be met:                    *
 * https://www.gnu.org/licenses/agpl-3.0.html.                             *
 ***************************************************************************/


#ifndef SEISCOMP_GUI_MESSAGEBROWSER_PLUGIN_H__
#define SEISCOMP_GUI_MESSAGEBROWSER_PLUGIN_H__

#include <QtGui>

namespace Seiscomp {

namespace Client {

class Message;

}

namespace Gui {
namespace MessageMonitor {

class Plugin {
	public:
		virtual ~Plugin() {}

	public:
		virtual const char* name() const = 0;
	
		virtual QWidget* create(QWidget* parent, QObject* signaller) const = 0;
};

}
}
}

Q_DECLARE_INTERFACE(Seiscomp::Gui::MessageMonitor::Plugin,
                    "de.gfz.seiscomp.MessageMonitor.Plugin/1.0")

#endif
