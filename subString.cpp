#include<bits/stdc++.h>
using namespace std;

int main(){
string s = "abc";
int n = 3;
int i,j;

for(i=0;i<n;i++){
    for(j=i+1;j<=n;j++){
        cout<<s.substr(i,j-i)<<endl;

    }
}

}
