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
    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        cnt += v[i].second;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}