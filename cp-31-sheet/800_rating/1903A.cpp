#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()

bool alreadysorted(int a[],int n){
    for(int j=1; j<n ; j++){
        if(a[j]<a[j-1]){
            return false;
        }
    }
    return true;
}

int32_t main() {
    fastio();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n;i++){
            cin>>arr[i];
        }
        if(alreadysorted(arr,n)){
            cout<<"yes"<<endl;
            continue;
        }
        if(k>=2){
            cout<<"yes"<<endl;
            continue;
        }
        cout<<"no"<<endl;
    }
}