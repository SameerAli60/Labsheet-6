#include <bits/stdc++.h>
using namespace std;
int main(){
 int n; cin>>n; cin.ignore(numeric_limits<streamsize>::max(), '\n');
 vector<string> names(n);
 for(int i=0;i<n;i++) getline(cin, names[i]);
 for(int i=0;i<n-1;i++){
 for(int j=0;j<n-1-i;j++){
 if(names[j] > names[j+1]) swap(names[j], names[j+1]);
 }
 }
 for(auto &s: names) cout<<s<<"\n";
 return 0;
}
