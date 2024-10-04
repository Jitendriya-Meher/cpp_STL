#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printDouble( int a){
    cout<<2*a<<" ";
}

bool chechEven( int a){
    return a%2==0;
}

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

    // for each loop 
    for_each( arr.begin(), arr.end(), printDouble);

    // find function
    int target = 30;
    vector<int>::iterator it = find(arr.begin(), arr.end(), target);

    cout<<endl<<*it<<endl;

    target = 400;
    auto it2 = find(arr.begin(), arr.end(), target);

    cout<<*it2<<endl;

    // find if function
    auto even = find_if(arr.begin(), arr.end(), chechEven);

    cout<<*even<<endl;

    // count 
    int cnt = count( arr.begin(), arr.end(), 10);

    cout<<"cnt 10 = "<<cnt<<endl;
    
    // count if
    int cnt2 = count_if( arr.begin(), arr.end(), chechEven);

    cout<<"cnt even = "<<cnt2<<endl;

    // sort
    cout<<"before Sort : ";
    printArr(arr);

    sort(arr.begin(), arr.end());

    cout<<"after Sort : ";
    printArr(arr);

    // reverse 
    reverse(arr.begin(), arr.end());

    cout<<"Reverse : ";
    printArr(arr);

    // rotate 
    rotate(arr.begin(), arr.begin()+3 , arr.end());

    cout<<"Right Rotate : ";
    printArr(arr);

    rotate(arr.begin(), arr.end()-3 , arr.end());

    cout<<"Left Rotate : ";
    printArr(arr);

    // unique -> sorted array
    auto it3 = unique( arr.begin(), arr.end());

    printArr(arr);
    
    // it iterartor ke pahele saare unique elements hai
    // it ke baad saare duplicate elements hai
    arr.erase( it3, arr.end());

    cout<<"Unique : ";
    printArr(arr);

    // partition
    auto it4 = partition(arr.begin(), arr.end(), chechEven);

    printArr(arr);

    return 0;

}