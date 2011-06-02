/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) 2011  <copyright holder> <email>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef DRSFILE_H
#define DRSFILE_H

#include <iostream>
#include "FileIO.h"

//------------------------------------------------------------------------------
/// Base class for .drs files
class DrsFile : public FileIO
{

public:
  //----------------------------------------------------------------------------
  /// Constructor that opens the file from a stream.
  ///
  /// @param iostr io stream
  /// @param pos start of file
  //
  DrsFile(std::iostream *iostr, std::streampos pos);
  
  //----------------------------------------------------------------------------
  /// Constructor that opens a file with given name
  ///
  /// @param file_name file to open
  //
  DrsFile(std::string file_name);
  
  //----------------------------------------------------------------------------
  /// Destructor
  //
  virtual ~DrsFile();
    
  //----------------------------------------------------------------------------
  virtual void load();
  
private:
  sf::Uint32 num_of_tables_;
  
};

#endif // DRSFILE_H
