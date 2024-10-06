#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void printArr(vector<int> &arr)
{
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout<<endl;
}

class comparator{

    public:
    
    bool operator() ( int a, int b ){
        return a>b;
    }

};

int main()
{

    vector<int> arr = {20, 10, 15, 5, 30};

    cout<<"Array : ";
    printArr(arr);

    // sort 
    sort(arr.begin(), arr.end());

    cout<<"Sorted Array : ";
    printArr(arr);

    // custom sort 
    sort(arr.begin(), arr.end(), comparator());

    cout<<"Custom Sorted Array : ";
    printArr(arr);

    return 0;
}