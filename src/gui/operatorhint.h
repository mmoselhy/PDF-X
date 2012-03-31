/*
 * PDFedit - free program for PDF document manipulation.
 * Copyright (C) 2006-2009  PDFedit team: Michal Hocko,
 *                                        Jozef Misutka,
 *                                        Martin Petricek
 *                   Former team members: Miroslav Jahoda
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program (in doc/LICENSE.GPL); if not, write to the 
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, 
 * MA  02111-1307  USA
 *
 * Project is hosted on http://sourceforge.net/projects/pdfedit
 */
#ifndef __OPERATORHINT_H__
#define __OPERATORHINT_H__

#include <kernel/operatorhinter.h>

class QString;

namespace gui {

using namespace configuration;

/**
 OperatorHint - class providing wrapper around single OperatorHinter
 instance and managing its configuration
 \brief Mode controller wrapper
*/
class OperatorHint {
public:
 OperatorHinter* get();
 static OperatorHint* getInstance();
 QString hint(const QString &operatorName);
 ~OperatorHint();
private:
 OperatorHint();
};

} // namespace gui

#endif