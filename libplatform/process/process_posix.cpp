#include "libplatform/impl.h"

namespace mp4v2 { namespace platform { namespace process {

///////////////////////////////////////////////////////////////////////////////

int32_t
getpid()
{
    return ::getpid();
}

///////////////////////////////////////////////////////////////////////////////

}}} // namespace mp4v2::platform::process
