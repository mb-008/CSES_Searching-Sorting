#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, count = 0;
    while (i < n && j < m)
    {
        if (a[i] + k < b[j]) // Checks if the apartment size is bigger than the desired size of the applicant
        {
            i++;
        }
        else if (a[i] - k > b[j]) // Checks if the apartment size is smaller than the desired size of the applicant
            j++;

        else
        {
            i++;
            j++;
            count++;
        }
    }

    cout << count;
    return 0;
}