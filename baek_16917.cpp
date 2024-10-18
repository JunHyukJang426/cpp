// 양념 반 후라이드 반 문제

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A, B, C, X, Y;
    int total = 0;

    cin >> A >> B >> C >> X >> Y;
    
    if((A+B) <= (2*C)){
        total = (A * X) + (B * Y);
    }
    else{
        total = (C * 2 * min(X, Y)) + ((max(X, Y) - min(X, Y)) * (X > Y ? min(A, 2 * C): min(B, 2 * C)));
    }

    cout << total;
    return 0;
}