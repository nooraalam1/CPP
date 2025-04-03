#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[]={10,15,5,7,6};
int i,j,target = 130;
int n = sizeof(arr)/sizeof(arr[0]);

for(i=0;i<n;i++){
   for(j=i+1;j<n;j++){
    if(arr[i]+arr[j]==target){
        cout<<arr[i]<<" "<<arr[j];
        return 0;
    }

   }

}

            cout<<"Nai";
        return 0;


}
