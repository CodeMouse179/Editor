#ifndef CME_WINDOWSCONSOLEIO_HPP
#define CME_WINDOWSCONSOLEIO_HPP

#include "String.hpp"
#include "Singleton.hpp"

namespace cme
{
    class WindowsConsoleIO : CodeMouse::Singleton<WindowsConsoleIO>
    {
    public:
        WindowsConsoleIO()
        {
        }

        int GetInputHandle()
        {
            HANDLE stdInputHandle = GetStdHandle(STD_INPUT_HANDLE);
            return (int)stdInputHandle;
        }

        int GetOutputHandle()
        {
            HANDLE stdOutputHandle = GetStdHandle(STD_OUTPUT_HANDLE);
            return (int)stdOutputHandle;
        }
    };
}

#endif