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

    vector<int> arr1 = {1,2,3,4};
    vector<int> arr2 = {3,4,5,6};

    cout<<"Array 1 : ";
    printArr(arr1);

    cout<<"Array 2 : ";
    printArr(arr2);

    // union
    vector<int> unionArr;

    set_union( arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter( unionArr, unionArr.begin()));

    cout<<"Union : ";
    printArr(unionArr);

    // intersection
    vector<int> intersectionArr;

    set_intersection( arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter( intersectionArr, intersectionArr.begin()));

    cout<<"Intersection : ";
    printArr(intersectionArr);

    // set difference
    vector<int> differenceArr;

    set_difference( arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter( differenceArr, differenceArr.begin()));

    cout<<"Difference 1 : ";
    printArr(differenceArr);

    differenceArr.pop_back();
    differenceArr.pop_back();

    set_difference( arr2.begin(), arr2.end(), arr1.begin(), arr1.end(), inserter( differenceArr, differenceArr.begin()));

    cout<<"Difference 2 : ";
    printArr(differenceArr);

    // symmetric difference
    vector<int> symDif;

    set_symmetric_difference( arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter( symDif, symDif.begin()));

    cout<<"Symmetric Difference : ";
    printArr(symDif);


    return 0;
    
}