#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = " "; cin >> s;
    string v = "aeiou";

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for(char c : s){
        if(v.find(c) == string::npos){
            cout << "." << c;
        }
    }

}
