/** 
 * @author - Nabin Nath
 * @createdOn - 2020-12-22 14:23 Hrs
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
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            ans += "0";
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            ans += "1";
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            ans += "2";
            i++;
        }
    }

    cout << ans;
}