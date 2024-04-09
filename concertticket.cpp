#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    int price[n];
    int customer[m];
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> customer[i];
    }

    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(price[i]);
    }
    for (int i = 0; i < m; i++)
    {
        auto it = s.upper_bound(customer[i]);
        if (it == s.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            it--;
            cout << *it << endl;
            s.erase(it);
        }
    }
    return 0;
}