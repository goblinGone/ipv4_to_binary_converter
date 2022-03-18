#include <iostream>

using namespace std;

    int Octet_1 {0};
    int Octet_2 {0};
    int Octet_3 {0};
    int Octet_4 {0};
    
    int list[] = {128, 64, 32, 16, 8, 4, 2, 1};
    int list2[] = {128, 64, 32, 16, 8, 4, 2, 1};
    int list3[] = {128, 64, 32, 16, 8, 4, 2, 1};
    int list4[] = {128, 64, 32, 16, 8, 4, 2, 1};
    
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
    
    //confirm your IP entry is correct
    char ynanswer = 'y';
    cout <<"y/n"<< endl;
    cin >> ynanswer ;
    if (ynanswer == 'n') {
        askForIP();
    }else {
        cout << "OKIDOKI" << endl;
    }
    
    int hnum2 {0};
    
    string binOctet_2 = "";

    for (hnum2 = Octet_2; int i : list2){
        if (hnum2 - i >= 0){
            hnum2 = hnum2 - i;binOctet_2.append("1");
        } else {
            binOctet_2.append("0");
        }
    }

    int hnum3 {0};
    
    string binOctet_3 = "";

    for (hnum3 = Octet_3; int i : list3){
        if (hnum3 - i >= 0){
            hnum3 = hnum3 - i;binOctet_3.append("1");
        } else {
            binOctet_3.append("0");
        }
    }

    int hnum {0};
    
    string binOctet_1 = "";

    for (hnum = Octet_1; int i : list){
        if (hnum - i >= 0){
            hnum = hnum - i;binOctet_1.append("1");
        } else {
            binOctet_1.append("0");
        }
    }

    int hnum4 {0};
    
    string binOctet_4 = "";

    for (hnum4 = Octet_4; int i : list4){
        if (hnum4 - i >= 0){
            hnum4 = hnum4 - i;binOctet_4.append("1");
        } else {
            binOctet_4.append("0");
        }
    }

    cout << "The Converted IPv4 is"<<endl;
    cout << binOctet_1<<"."<<binOctet_2<<"."<<binOctet_3<<"."<<binOctet_4<<endl;
    return 0;
}