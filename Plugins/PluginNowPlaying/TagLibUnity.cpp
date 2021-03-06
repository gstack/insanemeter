/*
  Copyright (C) 2014 Birunthan Mohanathas

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

// TagLib unity build: This file includes several TagLib source files. By compiling all of them
// together, the build performance is greatly increased.

// The files have been separated into several TagLibUnity_*.cpp files in order help the optimizer.
// Including everything here increases the binary size.

#pragma warning(push)
#pragma warning(disable: 4244; disable: 4267)

#include "taglib\fileref.cpp"
#include "taglib\tag.cpp"
#include "taglib\tagunion.cpp"
#include "taglib\audioproperties.cpp"

#include "taglib\mpc\mpcfile.cpp"
#include "taglib\mpc\mpcproperties.cpp"

// Included here due to mismatch with toolkit\tfilestream.cpp.
#include "taglib\toolkit\tfile.cpp"

#pragma warning(pop)
