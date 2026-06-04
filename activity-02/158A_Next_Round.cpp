#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0, k = 0, ans = 0; cin >> n >> k;
    vector<int> v(n);
    for(auto &a : v) cin >> a;

    sort(v.begin(), v.end(), greater<int>());
  
    for(int i = 0; i < n; i++){
        if(v[i] >= v[k - 1] && v[i] > 0){
        ans++;
        }
    }
  
    cout << ans;

}
