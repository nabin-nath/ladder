/** 
 * @author - Nabin Nath
 * @createdOn - 2020-12-22 11:05 Hrs
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
int n; cin>>n;
int val,x_sum = 0,y_sum = 0,z_sum = 0;
int arr[n*3];
for (int i = 0; i < n*3; i++)
{
    cin>>arr[i];
}
//sum of x
for (int i = 0; i < n*3; i+=3)
{
    x_sum+=arr[i];
}
// sum of y
for (int i = 1; i < n*3; i+=3)
{
    y_sum+=arr[i];
}
//sum of z
for (int i = 2; i < n*3; i+=3)
{
    z_sum+=arr[i];
}



if(x_sum == 0 && y_sum == 0 && z_sum == 0){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}