#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    sort(coins.begin(), coins.end());
    long long int target = 1;
    for (int i = 0; i < n; ++i)
    {
        // if the current coin is greater than the target , we found the answer
        if (coins[i] > target)
        {
            break;
        }
        // otherwise, update the target by adding the current coin
        target += coins[i];
    }
    cout << target << endl;
    return 0;
}