////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// This file is part of SwiftGUI.                                             //
//                                                                            //
// Copyright: (c) 2015-2016 Simon Schneegans                                  //
//                                                                            //
// This software may be modified and distributed under the terms              //
// of the MIT license.  See the LICENSE file for details.                     //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef SWIFT_TYPES_HPP
#define SWIFT_TYPES_HPP

// includes  -------------------------------------------------------------------
#include <vector>
#include <functional>

namespace swift {

typedef std::function<void(int, int, int, int, bool, const char*)> DrawCallback;

namespace detail {

class Browser;
class WebViewClient;

}
}

#endif // SWIFT_TYPES_HPP
