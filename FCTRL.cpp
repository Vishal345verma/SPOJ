#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int z = 5;
        int ans = 0;
        while (n / z != 0)
        {
            ans += (int)(n / z);
            z *= 5;
        }
        cout << ans << endl;
    }
    return 0;
}