#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

bool allDistinct(int num) {
    string s = to_string(num);
    vector<char>v;
    for(auto it : s) v.push_back(it);
    sort(v.begin(), v.end());
    for(int i=1; i<4; i++) {
        if(v[i] == v[i-1]) return false;
    }
    return true;
}

signed main() {
    fastio();
    int n;
    cin>>n;
    int i = n+1;
    while(1) {
        if(allDistinct(i)) {
            cout<<i;
            break;
        } 
        i++;
    }
}