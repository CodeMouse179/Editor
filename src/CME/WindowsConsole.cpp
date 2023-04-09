#include "WindowsConsole.hpp"

namespace cme
{
    bool WindowsConsole::WriteConsoleA(const std::string& s)
    {
        return false;
    }

    bool WindowsConsole::WriteConsoleW(const std::wstring& s)
    {
        return false;
    }
}