#include <bits/stdc++.h>
using namespace std;
int main(){
 int n; cin>>n; vector<int> a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 int key; cin>>key;
 int count = 0;
 for(int x: a) if(x == key) count++;
 cout<<"Occurrences: "<<count<<"\n";
 return 0;
}
