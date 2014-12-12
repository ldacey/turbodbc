#pragma once
/**
 *  @file make_environment.h
 *  @date 12.12.2014
 *  @author mkoenig
 *  @brief 
 *
 *  $LastChangedDate$
 *  $LastChangedBy$
 *  $LastChangedRevision$
 *
 */

#include "cpp_odbc/environment.h"
#include "psapp/valid_ptr.h"

namespace cpp_odbc {

/**
 * @brief Returns an environment which fires calls using the unixODBC API
 */
psapp::valid_ptr<environment> make_environment();

}
