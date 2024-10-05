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

    int a = 10;
    int b = 20;

    // min and max
    cout<<"min : "<<min(a,b)<<endl;
    
    cout<<"max : "<<max(a,b)<<endl;


    vector<int> arr = {10,20,30,30,30,40,40,40,50,60,70,80,90};

    auto minIt = min_element(arr.begin(), arr.end());

    cout<<"min : "<<*minIt<<endl;

    auto maxIt = max_element(arr.begin(), arr.end());

    cout<<"min : "<<*maxIt<<endl;

    
    return 0;

}