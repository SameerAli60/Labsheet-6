#include <bits/stdc++.h>
using namespace std;
int main(){
 int n; cin>>n; vector<int> a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 int key; cin>>key;
 bool present = false;
 for(int x: a) if(x == key){ present = true; break; }
 cout<<(present ? "Present\n" : "Not present\n");
 return 0;
}
