/*    Copyright 2009 10gen Inc.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#pragma once

#include <fcntl.h>

namespace mongo {

    // Touch a range of pages using an OS-specific method.
    // Takes a file descriptor, offset, and length, for Linux use.
    // Additionally takes an Extent pointer for use on other platforms.
    void touch_pages( const char* buf, size_t length );
}
