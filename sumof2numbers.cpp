#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false); // Disable the synchronization between the C and C++ standard streams
    cin.tie(NULL);                    // Untie cin from cout

    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    unordered_map<ll, int> mp;
    mp.reserve(n); // Reserve space for n elements to avoid rehashing
    for (int i = 0; i < n; ++i)
    {
        ll rem = x - a[i];
        if (mp.find(rem) != mp.end())
        {
            cout << mp[rem] + 1 << " " << i + 1 << "\n";
            return 0;
        }
        mp[a[i]] = i;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}