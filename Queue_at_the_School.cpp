/** 
 * @author - Nabin Nath
 * @createdOn - 2020-12-22 14:16 Hrs
 **/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n,t; cin>>n>>t;
string s; cin>>s;

for (int i = 0; i < t; i++)
{
    for (int j = 0; j < s.length(); j++)
    {
        if(s[j] == 'B' && s[j+1] == 'G'){
            s[j] = 'G'; s[j+1] = 'B'; j++;
        }
    }
    
}

cout<<s;

}