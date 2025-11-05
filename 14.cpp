#include <bits/stdc++.h>
using namespace std;
int main(){
 int n; cin>>n; vector<int> a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 for(int i=0;i<n-1;i++){
 int maxidx = i;
 for(int j=i+1;j<n;j++) if(a[j] > a[maxidx]) maxidx = j;
 swap(a[i], a[maxidx]);
 }
 for(int x: a) cout<<x<<' ';
 cout<<"\n";
 return 0;
}
