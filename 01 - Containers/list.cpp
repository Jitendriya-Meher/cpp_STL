#include<iostream>
#include<list>
using namespace std;

void print( list<int> myList){
    for( int val : myList){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){

    // creation
    list<int> myList;

    // insertion
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    print(myList);

    myList.push_front(5);
    myList.push_front(1);

    print(myList);

    // deletion
    myList.pop_front();
    myList.pop_back();

    print(myList);

    // size
    cout<<"size : ";
    cout<<myList.size()<<endl;

    // clear
    // myList.clear();

    // check empty list
    if( myList.empty()){
        cout<<"list is empty"<<endl;
    }
    else{
        cout<<"list is not empty"<<endl;
    }

    // front and back elemet
    cout<<"front element : "<<myList.front()<<endl;

    cout<<"back element : "<<myList.back()<<endl;

    // traversing using iterator
    cout<<"traversing using iterator : ";

    list<int>::iterator it = myList.begin();

    while (it!=myList.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    // remove
    myList.push_back(10);
    print(myList);

    myList.remove(10);
    print(myList);

    // swap
    list<int> l1 = {1,2,3};
    list<int> l2 = {1,2,3,4,5,6};

    cout<<"l1 : ";
    print(l1);
    cout<<"l2 : ";
    print(l2);

    l1.swap(l2);

    cout<<"l1 : ";
    print(l1);
    cout<<"l2 : ";
    print(l2);

    // insert
    print(myList);

    myList.insert( myList.begin(), 100);

    print(myList);

    myList.insert( myList.end(), 101);

    print(myList);

    // erase
    myList.erase(myList.begin(), myList.end());

    print(myList);

    cout<<"size : "<<myList.size()<<endl;
    

    return 0;

}