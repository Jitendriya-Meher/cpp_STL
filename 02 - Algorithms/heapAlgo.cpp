#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

void printArr( vector<int> &arr){
    for( auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> arr = {10,20,30,30,30,40,40,40,50,60,70,80,90};

    cout<<"Array : ";
    printArr(arr);

    // make heap
    make_heap(arr.begin(), arr.end());

    cout<<"Heap : ";
    printArr(arr);

    // push into heap
    arr.push_back(100);
    push_heap(arr.begin(), arr.end());

    cout<<"Heap push : ";
    printArr(arr);

    // pop from heap
    pop_heap(arr.begin(), arr.end());
    arr.pop_back();

    cout<<"Heap pop : ";
    printArr(arr);

    // sort heap
    sort_heap(arr.begin(), arr.end());

    cout<<"Heap Sort : ";
    printArr(arr);

    
}