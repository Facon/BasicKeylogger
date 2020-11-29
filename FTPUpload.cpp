// FTP upload passive mode

#ifdef WIN32
#include "Socket.h"
#endif
#include <iostream>
#include <fstream>
#include "happycoders/socket/localsocket.hh"
//#include <boost/thread.hpp>

using namespace std;
//using namespace boost;

void FTPDATA();
void FTP();

int main()
{
    #ifdef WIN32
    try
    {
        FTP();

        /*
        while (1)
        {
            string l = socket.ReceiveLine();
            if (l.empty()) break;
            cout << l;
            cout.flush();
        }
        */
    }
    catch (const char* s)
    {
        cerr << s << endl;
    }
    catch (string s)
    {
        cerr << s << endl;
    }
    catch (...)
    {
        cerr << "unhandled exception\n";
    }

    system("pause");
    return 0;
    #endif
}

#ifdef WIN32
void FTPDATA()
{
    SocketClient socket_ftpdata("ftp.server.com", 20);
    string datos, TEMP;
    ifstream ilog("C:\\log_key.txt", ios::in);
    while(!ilog.eof())
    {
        ilog >> TEMP;
        datos += TEMP;
    }
    socket_ftpdata.SendBytes(datos);
    ilog.close();
}

void FTP()
{
    SocketClient socket("ftp.server.com", 21);
    string Buffer = socket.ReceiveLine();
    cout << Buffer;
    socket.SendLine("USER user");
    Buffer = socket.ReceiveLine();
    cout << Buffer;
    socket.SendLine("PASS 260890");
    Buffer = socket.ReceiveLine();
    cout << Buffer;
    socket.SendLine("OPTS UTF8 ON");
    Buffer = socket.ReceiveLine();
    cout << Buffer;
    socket.SendLine("CWD /");
    Buffer = socket.ReceiveLine();
    cout << Buffer;
    socket.SendLine("PWD");
    Buffer = socket.ReceiveLine();
    cout << Buffer;
    socket.SendLine("TYPE I");
    Buffer = socket.ReceiveLine();
    cout << Buffer;
    socket.SendLine("PASV");
    Buffer = socket.ReceiveLine();
    cout << Buffer;
    socket.SendLine("STOR log_key.txt");
    Buffer = socket.ReceiveLine();
    cout << Buffer;
    thread my_thread(&FTPDATA);
    my_thread.join();
    Buffer = socket.ReceiveLine();
    cout << Buffer;
    socket.SendLine("PASV");
    Buffer = socket.ReceiveLine();
    cout << Buffer;
    socket.SendLine("LIST");
    Buffer = socket.ReceiveLine();
    cout << Buffer;
    Buffer = socket.ReceiveLine();
    cout << Buffer;
}
#endif
