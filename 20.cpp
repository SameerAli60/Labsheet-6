#include <bits/stdc++.h>
using namespace std;
vector<int> bubbleSort(vector<int> a){
 int n=a.size();
 for(int i=0;i<n-1;i++) for(int j=0;j<n-1-i;j++) if(a[j]>a[j+1]) swap(a[j],a[j+1]);
 return a;
}
vector<int> selectionSort(vector<int> a){
 int n=a.size();
 for(int i=0;i<n-1;i++){
 int minidx = i;
 for(int j=i+1;j<n;j++) if(a[j] < a[minidx]) minidx = j;
 swap(a[i], a[minidx]);
 }
 return a;
}
int main(){
 int n; cin>>n; vector<int> arr(n);
 for(int i=0;i<n;i++) cin>>arr[i];
 auto b = bubbleSort(arr);
 auto s = selectionSort(arr);
 cout<<"Bubble: "; for(int x:b) cout<<x<<' '; cout<<"\nSelection: "; for(int x:s) cout<<x<<' '; c cout<<"Equal results? "<<(b==s ? "Yes":"No")<<"\n";
 return 0;
}
