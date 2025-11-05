#include <bits/stdc++.h>
using namespace std;
int main(){
 int r,c; cin>>r>>c;
 vector<vector<int>> A(r, vector<int>(c)), B(r, vector<int>(c));
 for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>A[i][j];
 for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>B[i][j];
 vector<vector<int>> C(r, vector<int>(c));
 for(int i=0;i<r;i++) for(int j=0;j<c;j++) C[i][j] = A[i][j] + B[i][j];
 for(int i=0;i<r;i++){ for(int j=0;j<c;j++) cout<<C[i][j]<<' '; cout<<"\n"; }
 return 0;
}
