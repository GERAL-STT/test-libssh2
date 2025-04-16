#include "libssh2.h"

extern "C" __declspec(dllexport) int test()
{
    auto session = libssh2_session_init();
    return 0;
}