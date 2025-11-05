#include <bits/stdc++.h>
using namespace std;
int main(){
 int n; cin>>n;
 vector<int> a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 long long sum = 0;
 for(int x: a) sum += x;
 cout<<"Sum = "<<sum<<"\n";
 return 0;
}
