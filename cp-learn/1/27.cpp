#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int k;
    cin>>k;
    if(k<10) {
        cout<<"21:0"<<k;
    } else if(k<60) {
        cout<<"21:"<<k;
    } else if(k<70){
        cout<<"22:0"<<(k-60); 
    } else {
        cout<<"22:"<<(k-60);
    }
}