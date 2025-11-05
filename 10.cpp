#include <bits/stdc++.h>
using namespace std;
int main(){
 int r1,c1; cin>>r1>>c1;
 vector<vector<int>> A(r1, vector<int>(c1));
 for(int i=0;i<r1;i++) for(int j=0;j<c1;j++) cin>>A[i][j];
 int r2,c2; cin>>r2>>c2;
 if(c1 != r2){ cout<<"Incompatible dimensions\n"; return 0; }
 vector<vector<int>> B(r2, vector<int>(c2));
 for(int i=0;i<r2;i++) for(int j=0;j<c2;j++) cin>>B[i][j];
 vector<vector<long long>> C(r1, vector<long long>(c2, 0));
 for(int i=0;i<r1;i++)
 for(int k=0;k<c1;k++)
 for(int j=0;j<c2;j++)
 C[i][j] += 1LL * A[i][k] * B[k][j];
 for(auto &row: C){ for(auto v: row) cout<<v<<' '; cout<<"\n"; }
 return 0;
}
