// Merge sort algorithm
#include <bits/stdc++.h>
using namespace std;

long long int combine(long long *arr,int start, int mid,int end){
    long long int count=0;
    int n1 = mid - start+1;
    int n2 = end- mid;
    vector<long long int>arr1(n1);
    vector<long long int>arr2(n2);
    int k=0;
    for(int i=start ;i<=mid;i++,k++) arr1[k] = arr[i];
    k=0;
    for(int i= mid+1;i<=end;i++,k++) arr2[k] = arr[i];
    int i=0,j=0;
    k=start;
    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j]){
            arr[k] = arr1[i];
            i++;
        }
        else{
            count+=(n1-i);
//             cout<< count<<" "<<n1<<" "<<i<<"\n";
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j< n2){
        arr[k]=arr2[j];
        j++;
        k++;
    }
    return count;
}
long long int mergeSort(long long *arr,int start, int n){
    long long int count=0;
    
        if(start<n){
            int mid = (start + (n-start)/2);
            count+=mergeSort(arr,start,mid);
            count+=mergeSort(arr,mid+1,n);
            count+=combine(arr,start,mid,n);
        }
    return count;
}

long long getInversions(long long *arr, int n){

    long long int check = mergeSort(arr,0,n-1);

        
    return check;
}