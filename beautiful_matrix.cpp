/** 
 * @author - Nabin Nath
 * @createdOn - 2020-12-22 09:40 Hrs
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
int a[5][5];
int pos_i , pos_j;
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        cin>>a[i][j];
        if(a[i][j]){
            pos_i = i; pos_j = j;
        }
    }
    
}

int ans = abs(2-pos_i) + abs(2-pos_j);
cout<<ans;


}