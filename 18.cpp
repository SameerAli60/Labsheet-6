#include <bits/stdc++.h>
using namespace std;
int main(){
 int n; cin>>n; vector<int> marks(n);
 for(int i=0;i<n;i++) cin>>marks[i];
 for(int i=0;i<n-1;i++){
 int minidx = i;
 for(int j=i+1;j<n;j++) if(marks[j] < marks[minidx]) minidx = j;
 swap(marks[i], marks[minidx]);
 }
 for(int x: marks) cout<<x<<' ';
 cout<<"\n";
 return 0;
}
