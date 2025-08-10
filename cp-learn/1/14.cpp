#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    double num;
    cin>>num;
    if(num - (int)(num) == 0) {
        cout<<"int"<<" "<< (int)num;
    } else {
        cout<<"float"<<" "<<(int)num<<" "<<(double)(num - (int)(num));
    }
}