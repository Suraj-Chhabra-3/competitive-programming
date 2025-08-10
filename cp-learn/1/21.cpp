#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

bool isPrime(int n) {
    vector<int>ans;
    for(int i=1; i<=pow(n, 0.5); i++) {
        if(n%i == 0) {
            ans.push_back(i);
            if(n/i != i) ans.push_back(n/i); 
        }
    }
    return (ans.size() == 2);
}
signed main() {
    fastio();
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        if(isPrime(i)) cout<<i<<" ";
    }
}