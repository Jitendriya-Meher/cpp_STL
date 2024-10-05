#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
using namespace std;

void printArr( vector<int> &arr){

    for( int val : arr ){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> arr = {10,20,30};
    
    cout<<"Array func : ";
    printArr(arr);

    // printing array using iterator
    cout<<"Array using Iterator : "<<endl;

    vector<int>::iterator it = arr.begin();

    while ( it != arr.end() )
    {
        cout<<"arr["<<( it - arr.begin() )<<"] = ";
        cout<<*it<<endl;
        it++;
    }
    
    // forward iterator
    forward_list<int> fl;
    fl.push_front(10);
    fl.push_front(20);
    fl.push_front(30);

    // traversal using iterator
    cout<<"forward list travers using iterator : ";

    forward_list<int>::iterator it2 = fl.begin();

    while ( it2 != fl.end() )
    {
        cout<<*it2<<" ";
        it2++;
    }
    cout<<endl;

    cout<<"forward list travers using iterator : ";

    it2 = fl.begin();
    while ( it2 != fl.end() )
    {
        *(it2) = *(it2) + 5;
        cout<<*it2<<" ";
        it2++;
    }
    cout<<endl;

    // try to backword moving
    // it2 = list.end();

    // while (it2 != list.begin())
    // {
    //     cout<<*it2<<" ";
    //     // -- is not possible
    //     it2--;
    // }
    

    // bi-directional iterator
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    // traverse list using iterator
    cout<<"traversing list using iterator : ";

    list<int>::iterator itl = l.begin();

    while ( itl != l.end() )
    {
        *(itl) = *(itl) + 2;
        cout<<*(itl)<<" ";
        itl++;
    }
    cout<<endl;


    cout<<"traversing list backword using iterator : ";

    itl = l.end();

    while ( itl != l.begin() )
    {
        itl--;
        *(itl) = *(itl) - 2;
        cout<<*(itl)<<" ";
    }
    cout<<endl;
    
    // random access iterator
    cout<<"Array : ";
    printArr(arr);

    // traversing using iterator
    vector<int>::iterator itv = arr.begin();

    cout<<"Array write forward : ";
    while ( itv != arr.end() )
    {
        *itv = *itv + 5;
        cout<<*itv<<" ";
        itv++;
    }
    cout<<endl;


    itv = arr.end() - 1;

    cout<<"Array write backword : ";
    while ( itv != ( arr.begin() - 1 ))
    {
        *itv = *itv - 5;
        cout<<*itv<<" ";
        itv--;
    }
    cout<<endl;


    itv = arr.end();

    cout<<"Array write backword : ";
    while ( itv != ( arr.begin()))
    {
        itv--;
        *itv = *itv - 5;
        cout<<*itv<<" ";
    }
    cout<<endl;

    // random
    arr = {10,20,30,40,50};
    cout<<"Array : ";
    printArr(arr);

    vector<int>::iterator i = arr.begin() + 3;

    cout<<"arr.begin() + 3 : "<<*i<<endl;
    

    return 0;

}