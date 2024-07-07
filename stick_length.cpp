#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll avg = a[n / 2];
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += abs(a[i] - avg);
    }
    cout << ans << endl;
    return 0;
}