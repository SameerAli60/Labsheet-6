#include <bits/stdc++.h>
using namespace std;
int main(){
 int n; cout<<"Enter n: "; if(!(cin>>n)) return 0;
 vector<int> a(n);
 cout<<"Enter elements:\n";
 for(int i=0;i<n;i++) cin>>a[i];
 cout<<"Elements: ";
 for(int x: a) cout<<x<<' ';
 cout<<"\n";
 return 0;
}
