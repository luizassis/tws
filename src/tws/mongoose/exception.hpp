/*
  Copyright (C) 2014 National Institute For Space Research (INPE) - Brazil.
 
  This file is part of the TerraLib GeoWeb Services.
 
  TerraLib GeoWeb Services is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License version 3 as
  published by the Free Software Foundation.
 
  TerraLib GeoWeb Services is distributed  "AS-IS" in the hope that it will be useful,
  but WITHOUT ANY WARRANTY OF ANY KIND; without even the implied warranty
  of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU Lesser General Public License for more details.
 
  You should have received a copy of the GNU Lesser General Public License along
  with TerraLib Web Services. See COPYING. If not, see <http://www.gnu.org/licenses/lgpl-3.0.html>.
 */

/*!
  \file tws/mongoose/exception.hpp

  \brief Specific exception types for Mongoose module.

  \author Gilberto Ribeiro de Queiroz
 */

#ifndef __TWS_MONGOOSE_EXCEPTION_HPP__
#define __TWS_MONGOOSE_EXCEPTION_HPP__

// TWS
#include "../exception.hpp"

namespace tws
{
  //! The namespace for the Mongoose module of TerraLib Web Services.
  namespace mongoose
  {

    //! The base type for exceptions from the Mongoose module.
    struct exception: virtual tws::exception { };

  }  // end namespace mongoose
}    // end namespace tws

#endif  // __TWS_MONGOOSE_EXCEPTION_HPP__
