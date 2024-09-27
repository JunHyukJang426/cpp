#include <iostream>
using namespace std;

int main(){
    int apple1, apple2;
    int orange1, orange2;
    int cnt;

    cin >> apple1 >> orange1;
    cin >> apple2 >> orange2;
    
    cnt = (apple1 + orange2) > (apple2 + orange1) ? (apple2 + orange1) : (apple1 + orange2);

    cout << cnt;

    return 0;
}