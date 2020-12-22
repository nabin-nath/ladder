/** 
 * @author - Nabin Nath
 * @createdOn - 2020-12-22 14:31 Hrs
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    n++;
    while (1)
    {
        int a = n % 10; 
        int b = n / 1000;
        int c = n / 100 % 10;
        int d = n / 10 % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
            break;

        n++;
    }

    cout<<n;
}