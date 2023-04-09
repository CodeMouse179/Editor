#ifndef CME_TERMINAL_HPP
#define CME_TERMINAL_HPP

#include "String.hpp"
#include "WindowsConsole.hpp"

namespace cme
{
    typedef unsigned char color;

    class Terminal
    {
    public:
        static bool WriteUTF8String(const std::string& s);
    };
}

#endif