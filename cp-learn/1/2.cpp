#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()

int32_t main() {
    fastio();
    int a, b, c;
    cin>>a>>b>>c;
    vector<int>v1;
    v1.push_back(a);
    v1.push_back(b);
    v1.push_back(c);
    vector<int>v2 = v1;
    sort(all(v2));
    for(int i=0; i<v2.size(); i++) {
        cout<<v2[i]<<endl;
    }
    cout<<endl;
    for(int i=0; i<v2.size(); i++) {
        cout<<v1[i]<<endl;
    }
}