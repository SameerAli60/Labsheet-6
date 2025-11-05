#include <bits/stdc++.h>
using namespace std;
int main(){
 int n; cin>>n; cin.ignore();
 vector<string> names(n);
 for(int i=0;i<n;i++) getline(cin, names[i]);
 string key; getline(cin, key);
 int idx = -1;
 for(int i=0;i<n;i++) if(names[i] == key){ idx = i; break; }
 if(idx == -1) cout<<"Not found\n"; else cout<<"Found at "<<idx<<"\n";
 return 0;
}
