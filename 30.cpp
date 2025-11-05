#include <bits/stdc++.h>
using namespace std;
bool isSortedAsc(const vector<int>& a){
 for(size_t i=1;i<a.size();++i) if(a[i] < a[i-1]) return false;
 return true;
}
int binarySearch(const vector<int>& a, int key){
 int l=0, r=a.size()-1;
 while(l<=r){
 int m = l + (r-l)/2;
 if(a[m] == key) return m;
 else if(a[m] < key) l = m + 1;
 else r = m - 1;
 }
 return -1;
}
int linearSearch(const vector<int>& a, int key){
 for(int i=0;i<(int)a.size(); ++i) if(a[i] == key) return i;
 return -1;
}
int main(){
 int n; cin>>n; vector<int> a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 int key; cin>>key;
 if(isSortedAsc(a)){
 cout<<"Array is sorted. Using Binary Search.\n";
 cout<<binarySearch(a, key)<<"\n";
 } else {
 cout<<"Array not sorted. Using Linear Search.\n";
 cout<<linearSearch(a, key)<<"\n";
 }
 return 0;
}
