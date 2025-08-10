#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int n;
    cin>>n;
    vector<int>v(n);
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if(v[i]%2 == 0) even++;
        else odd++;

        if(v[i] > 0) pos++;
        else if(v[i] < 0) neg++;
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
}