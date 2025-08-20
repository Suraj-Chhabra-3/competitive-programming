#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

vector<int> primefactors(int& n) {
    vector<int>ans;
    for(int i=2; i<=pow(n, 0.5); i++) {
        while(n%i == 0) {
            ans.push_back(i);
            n = n/i;
        }
    }
    if(n != 1) ans.push_back(n);
    return ans;
}

signed main() {
    fastio();
    int n; cin>>n;
    int k; cin>>k;
    vector<int>v = primefactors(n);

    if(v.size() < k) {
        cout<<"-1";
    } else {
        int number = v.size()-(k-1);
        int i=0;
        int first = 1;
        while(number--) {
            first = first * v[i];
            i++;
        }
        cout<<first<<" ";
        while(i<v.size()) {
            cout<<v[i]<<" ";
            i++;
        }
    }
}