#include <bits/stdc++.h>
using namespace std;
int main(){
 const int N = 10;
 vector<int> a(N);
 for(int i=0;i<N;i++) cin>>a[i];
 int even = 0, odd = 0;
 for(int x: a) (x % 2 == 0 ? even : odd)++;
 cout<<"Even: "<<even<<", Odd: "<<odd<<"\n";
 return 0;
}
