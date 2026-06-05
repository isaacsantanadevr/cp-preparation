#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 0, a = 0, b = 0; cin >> t;
    vector<pair<int, int>> v;

    for(int i = 0; i < t; i++){
        cin >> a >> b;
        v.push_back({a, b});
    }

    int i = 0;

    while(t--){
        int ans = v[i].second - (v[i].first % v[i].second);
        if(v[i].first % v[i].second == 0){
            cout << 0 << "\n";
        }
        else{
            cout << ans << "\n";
        }
        i++;
    }

}
