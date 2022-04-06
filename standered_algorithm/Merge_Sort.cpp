// Merge sort algorithm 
#include <iostream>
typedef long long int rt;
rt count=0;
void merge(rt arr[],rt lower,rt mid ,rt upper){
    rt i=0,j=0,k=0;
    rt n1=mid-lower+1;
    rt n2=upper-mid;
    rt L[n1],R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[lower + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j]; //merge sort
    i=0;j=0;k=lower;
    while((i<n1)&(j<n2)){
        if(L[i]>R[j]){
            arr[k]=R[j];
            // count+=(mid+1-i-lower); used to count total number of inversion 
            j++;
        }
        else {
            arr[k]=L[i];
            i++;
        }
        ++k;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void func(rt arr[],rt low,rt upper){
    if(upper>low){
        rt r=low+(upper-low)/2;
        func(arr,low,r);
        func(arr,r+1,upper);
        merge(arr,low,r,upper);
    }
}
int main() {
    rt a;
    scanf("%lld",&a);
    rt g[a];
    for(rt i=0;i<a;++i) scanf("%lld",&g[i]);
    func(g,0,a-1);
    
    printf("%lld",count);
    return 0;
}
