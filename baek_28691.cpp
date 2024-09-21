#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char club[4];

    cin >> club;

    if(strcmp(club, "M")==0)
        cout << "MatKor";
    else if(strcmp(club, "W")==0)
        cout << "WiCys";
    else if(strcmp(club, "C")==0)
        cout << "CyKor";
    else if(strcmp(club, "A")==0)
        cout << "AlKor";
    else if(strcmp(club, "$")==0)
         cout << "$clear";

    return 0;    
}