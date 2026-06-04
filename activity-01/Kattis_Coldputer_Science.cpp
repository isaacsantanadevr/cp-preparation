#include <iostream>
using namespace std;

int main() 
{
    int t = 0, ans = 0; cin >> t;
    for(int i = 0; i < t; i++){
        int n = 0;
        cin >> n;
        if(n < 0){
            ans++;
        }
    }
    cout << ans << "\n";
}
