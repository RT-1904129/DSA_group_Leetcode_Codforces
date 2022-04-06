/*
Authure-Rishabh Tripathi
Implimentation of min heap by recursion
*/

#include <iostream>
using namespace std;
typedef long long int rt;

void min_heapify(rt array[],rt index,rt heap_size){
    rt smallest ;
    rt left=2*index+1;
    rt right=2*index+2;
    if((left<heap_size)&&(array[left]<array[index])) {
        smallest=left;
}
    else   smallest=index;
    if((right<heap_size)&&(array[right]<array[smallest])) {
        smallest=right;
    }
    if(smallest!=index){
        swap(array[index],array[smallest]);
        min_heapify(array,smallest,heap_size);
    }
}

void build_min_heap(rt array[],rt size){
    rt iteration_start=(size/2) ;
    for(rt i=iteration_start-1;i>=0;--i) {
        min_heapify(array,i,size);
    }
}
int main() {
    rt a;
    cin>>a;
    rt array[a],array1[a];
    for(rt i=0;i<a;++i) {cin>>array[i];array1[i]=array[i];}
    build_min_heap(array,a);
    for(rt i=0;i<a;++i) {
        
        cout<<array[i]<<" ";
    }

    return 0;
}

/*
Authure-Rishabh Tripathi
Implimentation of max heap by recursion
*/
#include <iostream>
using namespace std;
typedef long long int rt;

void max_heapify(rt array[],rt index,rt heap_size){
    rt largest;
    rt left=2*index+1;
    rt right=2*index+2;
    if((left<heap_size)&&(array[left]>array[index])) {
        largest=left;
}
    else   largest=index;
    if((right<heap_size)&&(array[right]>array[largest])) {
        largest=right;
    }
    if(largest!=index){
        swap(array[index],array[largest]);
        max_heapify(array,largest,heap_size);
    }
}

void build_max_heap(rt array[],rt size){
    rt iteration_start=(size/2) ;
    for(rt i=iteration_start-1;i>=0;--i) {
        max_heapify(array,i,size);
    }
}
int main() {
    rt a;
    cin>>a;
    rt array[a];
    for(rt i=0;i<a;++i) cin>>array[i];
    build_max_heap(array,a);
    for(rt i=0;i<a;++i) cout<<array[i]<<" ";
    return 0;
}

