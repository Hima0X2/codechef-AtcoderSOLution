#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,a[1000000];
     string s;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     s=to_string(a[0]);
       for(i=1;i<n;i++){
          s=s+to_string(a[i]);
          if(stoi(s)%90==0){
               cout<<s<<endl;
               return 0;
          }
     }
     cout<<0<<endl;
}
