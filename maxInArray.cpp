#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>v;
int i,n;
cout<<"Number Of Inputs: ";
cin>>n;
for(i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}

int mx=INT_MIN;
for(i=0;i<n;i++){
if(v[i]>mx)
    mx=v[i];
}
cout<<mx;
return 0;
}
