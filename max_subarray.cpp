#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int n;
    cin >> n;
    vector<ll> value(n);
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    ll temp_sum = 0, max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        // check krenge ki next elemnt add krne se sum increase ho rha h ya nhi
        // agar increase ho rha h toh add kr denge temp mein

        if (temp_sum + value[i] >= value[i])
        {
            temp_sum += value[i];
        }
        // agar decrease ho rha h toh temp ko update kr denge ek naya sub array start kr denge
        else
        {
            temp_sum = value[i];
        }
        // max sum ko update kr denge according to new sub array sum
        max_sum = max(max_sum, temp_sum);
    }
    cout << max_sum;
    return 0;
}