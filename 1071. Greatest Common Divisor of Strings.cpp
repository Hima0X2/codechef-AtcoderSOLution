#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string gcd(string str1,string str2)
{
    if(str1.find(str2)!=0)
    {
        return "";
    }
    else
    {
        return str1.substr(str2);
    }
}
int main()
{
    optimize();
    string str1,str2;
    cin>>str1>>str2;
    set<string> s1;
    set<string> s2;
    for(long long int i=0;i<str1.length();i++){
     s1.insert(str1[i]);
    }
     for(long long int i=0;i<str2.length();i++){
     s2.insert(str2[i]);
    }
   // string s=s1;
    //cout<<s1.find(s2)<<endl;
cout<<gcd(s1,s2)<<endl;
}


