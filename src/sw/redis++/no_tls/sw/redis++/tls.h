/**************************************************************************
   Copyright (c) 2020 sewenew

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 *************************************************************************/

#ifndef SEWENEW_REDISPLUSPLUS_NO_TLS_H
#define SEWENEW_REDISPLUSPLUS_NO_TLS_H

#include <hiredis.h>

namespace sw {

namespace redis {

namespace tls {

struct TlsOptions {};

struct TlsContextUPtr {};

inline TlsContextUPtr secure_connection(redisContext & /*ctx*/,
                                        const TlsOptions & /*opts*/) {
  // Do nothing
  return {};
}

inline bool enabled(const TlsOptions & /*opts*/) { return false; }

} // namespace tls

} // namespace redis

} // namespace sw

#endif // end SEWENEW_REDISPLUSPLUS_NO_TLS_H
