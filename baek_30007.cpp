#include <iostream>
using namespace std;

int main(){
    int N;
    int A, B, X;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> A >> B >> X;
        int W = A * (X - 1) + B;
        cout << W << '\n';
    }
    return 0;
}