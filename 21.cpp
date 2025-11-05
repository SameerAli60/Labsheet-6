#include <bits/stdc++.h>
using namespace std;
int main(){
 int n; cin>>n; vector<int> a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 int key; cin>>key;
 int idx = -1;
 for(int i=0;i<n;i++) if(a[i] == key){ idx = i; break; }
 if(idx == -1) cout<<"Not found\n"; else cout<<"Found at "<<idx<<"\n";
 return 0;
}
