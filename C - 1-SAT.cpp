#include<bits/stdc++.h>
using namespace std;
int main()
{
      long long int n,i;
                cin>>n;
                set<string>s;
                set<string>t;
                for(i=0;i<n;i++){
                    string x;
                    cin>>x;
                    if(x[0]=='!'){
                        x=x.substr(1);
                        s.insert(x);
                    }
                    else{
                        t.insert(x);
                    }
                }
                for(auto u : s){
                    if(t.count(u)){
                        cout<<u<<endl;
                        return 0;
                    }
                }
     cout<<"satisfiable\n";
}

