// serverdatabuilder - Growtopia Server Data Builder, created with C++
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string ip;
    int port;

    // Main functions, this is where we begin
    cout << "Please enter your IP Address : " << endl;
    cin >> ip;
    cout << "Please enter your server port : " << endl;
    cin >> port;

    // A functions where we create server data files.
    string filename = "server_data.php";
    ofstream serverdata(filename);
    serverdata << "server|" + ip + "\nport|17091\ntype|1\n#maint|We'll back later\n\nbeta_server|127.0.0.1\nbeta_port|17091\n\nbeta_type|1\nmeta|localhost\nRTENDMARKERBS100";
    serverdata.close();

    cout << "Server data has been builded!" << endl;
    system("pause");
}
