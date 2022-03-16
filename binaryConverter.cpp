#include <iostream>
#include <vector>

using namespace std;
    int Octet_1 {0};
    int Octet_2 {0};
    int Octet_3 {0};
    int Octet_4 {0};
    
void askForIP() {
    //asks for the IP address 
    cout << endl;
    cout << "Please enter an IPv4 octets in stages you wish me to convert: ";
    cin >> Octet_1;
    cout <<".";
    cin >> Octet_2;
    cout <<".";
    cin >> Octet_3;
    cout <<".";
    cin >> Octet_4;
    cout << endl; 
    cout <<"The IPv4 address you wish to conevrt is "<<Octet_1<<"."<<Octet_2<<"."<<Octet_3<<"."<<Octet_4<<" ias this correct?"<<endl;
}



int main () {
    //asks for IPv4 Input
    askForIP(); 
    char ynanswer = 'y';
    cout <<"y/n"<< endl;
    cin >> ynanswer ;
    if (ynanswer == 'n') {
        askForIP();
    }else {
        cout << "OKIDOKI" << endl;
    }
    string binOctet_1 = "";
    
    //the int values that the converter will check off
    int list[] = {128, 64, 32, 16, 8, 4, 2, 1};

    for (int i : list) {
        if (i - Octet_1 >= 0) {
            i = i - Octet_1; binOctet_1.append("1");
        } else {
            binOctet_1.append("0");
        }
    }
    cout << binOctet_1;


    int hnum {0};
    int list[] = {128, 64, 32, 16, 8, 4, 2, 1};
    string binOctet_1 = "";

    for (hnum = Octet_1; int i : list){
        if (hnum - i >= 0){
            hnum = hnum - i;binOctet_1.append("1"); cout << i << " i val " <<hnum<<" hnum"<<endl;
        } else {
            binOctet_1.append("0");
        }
    }
    cout << binOctet_1;
    
    
    return 0;
}