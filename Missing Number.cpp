/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int nums[mx];

int main()
{
     optimize();
     long long int t,i,n,j;
     cin>>n;
     long long int c=0;
     for(i=0;i<n;i++){
          cin>>nums[i];
     }
 int total = 0;
    for (int j=0;j<32;j++) {
        int bit = 0;
        for (int i=0;i<n;i++)
            bit += (nums[i] >> j) & 1;
        total += bit*(n - bit);
    }
    cout<<total<<endl;
    }
/// ALHAMDULILLAH



