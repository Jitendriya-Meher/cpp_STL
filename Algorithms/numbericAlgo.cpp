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

    vector<int> arr(5);
    arr[0]=10;
    arr[1]=21;
    arr[2]=30;
    arr[3]=41;
    arr[4]=10;

    cout<<"Array : ";
    printArr(arr);

    // accumulator
    int sum = accumulate(arr.begin(), arr.end(), 0);
    
    cout<<"sum = "<<sum<<endl;
    
    // inner product
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {5,6,7};

    int product = inner_product(arr1.begin(), arr1.end(), arr2.begin(), 0);

    cout<<"product = "<<product<<endl;

    // partial sum
    vector<int> result( arr.size());

    partial_sum( arr.begin(), arr.end(), result.begin());

    cout<<"Partial Sum : ";
    printArr(result);

    // iota 
    vector<int> dummy(10);

    cout<<"Dummy : ";
    printArr(dummy);

    iota( dummy.begin(), dummy.end(), 10);

    cout<<"Dummy : ";
    printArr(dummy);

    return 0;

}