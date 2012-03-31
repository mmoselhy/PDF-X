/***************************************************************************
 *   Copyright (C) 2003-2004 by Christophe Devriese                        *
 *                         <Christophe.Devriese@student.kuleuven.ac.be>    *
 *   Copyright (C) 2003 by Laurent Montel <montel@kde.org>                 *
 *   Copyright (C) 2003 by Helio Chissini de Castro                        *
 *                           <helio@conectiva.com.br>                      *
 *   Copyright (C) 2004 by Albert Astals Cid <tsdgeos@terra.es>            *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/

#ifndef QOUTPUTDEVPIXMAP_H
#define QOUTPUTDEVPIXMAP_H

#ifdef __GNUC__
#pragma interface
#endif

#include <qimage.h>

#include "QOutputDev.h"

class QOutputDevPixmap : public QOutputDev {
public:

	// Constructor.
	QOutputDevPixmap(SplashColor paperColor);

	// Destructor.
	virtual ~QOutputDevPixmap();

	//----- initialization and control

	// End a page
	virtual void endPage();

	QImage getImage() const { return m_image; };

private:
	QImage m_image;
	SplashColorPtr raw_image;
};

#endif // QOUTPUTDEVPIXMAP
