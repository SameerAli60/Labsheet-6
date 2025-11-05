#include <bits/stdc++.h>
using namespace std;
int main(){
 int n; cin>>n;
 vector<int> a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 int key; cin>>key;
 int found_index = -1;
 for(int i=0;i<n;i++){
 if(a[i] == key){ found_index = i; break; }
 }
 if(found_index == -1) cout<<"Not Found\n";
 else cout<<"Found at index "<<found_index<<"\n";
 return 0;
}
