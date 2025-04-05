#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
int i,j,key;
for(i=1;i<n;i++){
    j=i-1;
    key=arr[i];
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}

}

void printArray(int arr[],int n){
int i,j;
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}

int main(){
    int arr[10]={2,1,4,3,6,5,8,7,10,9};
    int n = 10;
    insertionSort(arr,n);
    printArray(arr,n);
}

