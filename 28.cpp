#include <bits/stdc++.h>
using namespace std;
int binarySearch(const vector<string>& a, const string& key){
 int l=0, r=a.size()-1;
 while(l<=r){
 int m = l + (r-l)/2;
 if(a[m] == key) return m;
 else if(a[m] < key) l = m + 1;
 else r = m - 1;
 }
 return -1;
}
int main(){
 int n; cin>>n; cin.ignore();
 vector<string> a(n);
 for(int i=0;i<n;i++) getline(cin, a[i]);
 string key; getline(cin, key);
 cout<<binarySearch(a, key)<<"\n";
 return 0;
}
