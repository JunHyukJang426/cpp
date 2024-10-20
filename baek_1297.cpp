#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int D, H_rate, W_rate, H = 0, W = 0;
    cin >> D >> H_rate >> W_rate;
    double D_rate = 0;

    D_rate =  D / sqrt(pow(H_rate, 2) + pow(W_rate, 2));

    H = D_rate * H_rate;
    W = D_rate * W_rate;

    cout << H << ' ' <<  W;

    return 0;
}