/*
Userspace Virtual Filesystem

Copyright (C) 2015 Sebastian Herbord. All rights reserved.

This file is part of usvfs.

usvfs is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

usvfs is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with usvfs. If not, see <http://www.gnu.org/licenses/>.
*/
#include "directory_tree.h"


boost::filesystem::path::iterator usvfs::shared::nextIter(const boost::filesystem::path::iterator &iter
                                                          , const boost::filesystem::path::iterator &end)
{
  static boost::filesystem::path slash("/");
  static boost::filesystem::path bSlash("\\");
  static boost::filesystem::path dot(".");
  boost::filesystem::path::iterator next = iter;
  ++next;
  while (   (next != end)
            && (   (next->compare(slash) == 0)
                   || (next->compare(bSlash) == 0)
                   || (next->compare(dot) == 0))) {
    ++next;
  }
  return next;
}
