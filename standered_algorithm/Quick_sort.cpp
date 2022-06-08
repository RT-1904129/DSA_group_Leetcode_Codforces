// Quick sort algorithm
#include <bits/stdc++.h>
using namespace std;



int partition(vector<int>&arr,int low,int high){
        int pivot = arr[high];
        int start = low -1;
        for(int i= low;i<high;i++){
            if(arr[i] < pivot){
                start++;
                swap(arr[start],arr[i]);
            }
        }
        swap(arr[start+1],arr[high]);
        return start+1;
}
void quickSort(vector<int>&arr,int low,int high){
    if(low < high){
        int pivot = partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}

int main(){
    vector<int>arr{2,3,8,4,5,7};
    int n = arr.size();
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

