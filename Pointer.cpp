#include<bits/stdc++.h>
using namespace std;

int main(){
int x = 5;
cout<<&x<<endl; //Address
int *value ;
value = &x;
cout<<value<<endl; //Address
cout<<*value<<endl; //Value


return 0;
}
