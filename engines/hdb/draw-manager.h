/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef HDB_DRAW_MANAGER_H
#define HDB_DRAW_MANAGER_H

#include "graphics/surface.h"

#include "hdb/hdb.h"

namespace HDB {

enum {
	kMaxSkies = 10,
};

class DrawMan {
public:

	DrawMan();

	bool init();

private:
	int _numTiles;
	bool _systemInit;

};

class Picture {
public:

	~Picture();

	Graphics::Surface load(Common::SeekableReadStream *stream);

private:

	uint _width, _height;
	char _name[64];

	Graphics::Surface _surface;

};

class Tile {
public:

	~Tile();

	Graphics::Surface load(Common::SeekableReadStream *stream);

private:
	uint32 _flags;
	char _name[64];

	Graphics::Surface _surface;
};

} // End of Namespace HDB

#endif // !HDB_DRAW_MANAGER_H