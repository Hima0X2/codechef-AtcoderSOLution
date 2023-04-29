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
long long int a[mx];

int main()
{
     optimize();
      long long int t,n,p;
 unordered_map<long long int,long long int>mp;
 mp.insert({0,0});
 mp.insert({1,1});
  mp.insert({2,1});
   mp.insert({3,1});
    mp.insert({4,2});
     mp.insert({5,3});
      mp.insert({6,5});
       mp.insert({7,11});
        mp.insert({8,24});
         mp.insert({9,55});
          mp.insert({10,136});
           mp.insert({11,345});
            mp.insert({12,900});
             mp.insert({13,2412});
              mp.insert({14,6563});
               mp.insert({15,18127});
                mp.insert({16,50699});
                 mp.insert({17,143255});
                  mp.insert({18,408429});
                   mp.insert({19,1173770});
                    mp.insert({20,3396844});

    cin>>t;
    while(t--){
        cin>>n;
        p=mp[n];
        cout<<p<<endl;
    }
	return 0;
}
/// ALHAMDULILLAH



