#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n = 0, k = 0, sum = 0, scr = 0;

  cin >> n >> k;
  
  vector<int> v;
  
  for(int i = 0; i < n; i++){
    cin >> scr;
    v.push_back(scr);
  }
  
  sort(v.begin(), v.end(), greater<int>());
  
  for(int i = 0; i < n; i++){
    if(v[i] >= v[k - 1] && v[i] > 0){
      sum++;
    }
  }
  
  cout << sum;
}
