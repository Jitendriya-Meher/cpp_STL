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

    // binary search
    int target = 40;

    bool find = binary_search(arr.begin(), arr.end(), target);

    cout<<"find : "<<find<<endl;

    // lower bound
    auto lb = lower_bound( arr.begin(), arr.end(), 30);

    cout<<"lower bound : "<<*lb<<endl;

    // upper bound
    auto ub = upper_bound( arr.begin(), arr.end(), 30);

    cout<<"upper bound : "<<*ub<<endl;

    // count the occurance of a number
    cout<<"count 30 : "<<ub-lb<<endl;

    // equal range
    auto er = equal_range( arr.begin(), arr.end(), 30);

    cout<<*(er.second)<<" "<<*(er.first)<<endl;

    cout<<"count 3 : "<<(er.second)-(er.first)<<endl;

    return 0;

}