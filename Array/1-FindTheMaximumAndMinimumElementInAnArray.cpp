//------Driver Code Start------>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

//-------Code Here------
pair<long long, long long> getMinMax(long long a[], int n) ;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        pair<ll, ll> pp = getMinMax(a, n);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}

//------Driver Code Start------>
pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> h;
    long long mx=INT_MIN;
    long long mi=INT_MAX;
    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
        mi=min(mi,a[i]);
    }
    h.first = mi;
    h.second = mx;
    return h;
}