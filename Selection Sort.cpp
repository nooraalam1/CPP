#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[9]={8,7,9,2,3,1,5,4,6};
    int i,j;
    for(i=0;i<9;i++){
        int max = i;

        for(j=i+1;j<9;j++){
            if(arr[j]>arr[max]){
                max=j;
            }
        }
        swap(arr[max],arr[i]);
    }


    for(i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}
