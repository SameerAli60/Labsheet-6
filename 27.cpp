#include <bits/stdc++.h>
using namespace std;
int binarySearch(const vector<double>& a, double key){
 int l=0, r=a.size()-1;
 while(l<=r){
 int m = l + (r-l)/2;
 if(fabs(a[m] - key) < 1e-9) return m;
 else if(a[m] < key) l = m + 1;
 else r = m - 1;
 }
 return -1;
}
int main(){
 int n; cin>>n; vector<double> a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 double key; cin>>key;
 cout<<binarySearch(a, key)<<"\n";
 return 0;
}
