#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({b, -1});
    }
    sort(v.begin(), v.end());

    int max_customers = 1;
    for (int i = 1; i < v.size(); i++)
    {
        v[i].second += v[i - 1].second;
        max_customers = max(max_customers, v[i].second);
    }
    cout << max_customers << endl;
    return 0;
}