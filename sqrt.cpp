#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

vector<ll> printDivisors(ll n) {
    vector<ll> v;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                v.push_back(i);
            } else {
                v.push_back(i);
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end()); 
    return v;
}

int main() {
    ll n;  
   
    cin >> n;

    vector<ll> d = printDivisors(n);
    
    // cout << "Divisors of " << n << " are: ";
    for (ll i : d) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
