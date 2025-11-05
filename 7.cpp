#include <bits/stdc++.h>
using namespace std;
int main(){
 int r,c; cin>>r>>c;
 vector<vector<int>> m(r, vector<int>(c));
 for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>m[i][j];
 for(int i=0;i<r;i++){
 for(int j=0;j<c;j++) cout<<m[i][j]<<' ';
 cout<<"\n";
 }
 return 0;
}
