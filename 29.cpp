#include <bits/stdc++.h>
using namespace std;
int main(){
 int n; cin>>n; vector<int> a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 if(n==0){ cout<<"Empty\n"; return 0; }
 // For ascending sorted array largest is last element
 cout<<"Largest: "<<a[n-1]<<"\n";
 return 0;
}
