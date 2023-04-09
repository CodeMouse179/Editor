#ifndef CME_WINDOWSCONSOLE_HPP
#define CME_WINDOWSCONSOLE_HPP

#include "String.hpp"
#include "Singleton.hpp"

namespace cme
{
    class WindowsConsole
    {
    public:
        static bool WriteConsoleA(const std::string& s);

        static bool WriteConsoleW(const std::wstring& s);
    };
}

#endif