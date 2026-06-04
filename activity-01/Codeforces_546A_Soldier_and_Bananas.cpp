#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int k = 0, n = 0, w = 0, sum = 0; cin >> k >> n >> w;
    for(int i = 0; i <= w; i++){
        sum += i;
    }
    int value = (k * sum);
    int ans = value - n;
    if(ans <= 0){
        cout << 0 << "\n";
        return 0;
    }
    cout << value - n << "\n";

}
