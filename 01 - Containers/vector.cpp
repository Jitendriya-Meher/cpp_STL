#include<iostream>
#include<vector>
using namespace std;

int main(){

    // creation
    vector<int> marks;
    vector<int> miles(10);
    vector<int> distances(10,0);

    cout<<*(miles.begin())<<endl;

    // insert at end
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    // size and capacity
    cout<<"size : ";
    cout<<marks.size()<<endl;

    cout<<"capacity : ";
    cout<<marks.capacity()<<endl;

    // delete at end
    marks.pop_back();

    cout<<"size : ";
    cout<<marks.size()<<endl;

    cout<<"capacity : ";
    cout<<marks.capacity()<<endl;

    // getting first and last element
    cout<<"first element : ";
    cout<<marks.front()<<endl;

    cout<<"last element : ";
    cout<<marks.back()<<endl;

    // checking for empty vector
    if( marks.empty()){
        cout<<"vector is empty"<<endl;
    }
    else{
        cout<<"vector is not empty"<<endl;
    }

    // indexing
    cout<<"marks[0] : "<<marks[0]<<endl;

    cout<<"marks[2] : "<<marks[2]<<endl;

    // invalid indexing not allowed
    // cout<<"marks[10] : "<<marks[10]<<endl;

    // at -> with bound checking
    cout<<"martks.at(0) : "<<marks.at(0)<<endl;

    cout<<"martks.at(2) : "<<marks.at(2)<<endl;

    // cout<<"martks.at(10) : "<<marks.at(10)<<endl;

    // reserve and max_size
    marks.reserve(10);

    cout<<"size : ";
    cout<<marks.size()<<endl;

    cout<<"capacity : ";
    cout<<marks.capacity()<<endl;

    cout<<"max size : ";
    cout<<marks.max_size()<<endl;
    
    // insert -> ( iter, val)
    marks.insert(marks.begin(), 90);

    cout<<"marks[0] : "<<marks.at(0)<<endl;

    // erase
    marks.erase(marks.begin(), marks.end());

    cout<<"size : ";
    cout<<marks.size()<<endl;

    cout<<"capacity : ";
    cout<<marks.capacity()<<endl;

    // clear
    marks.clear();

    cout<<"size : ";
    cout<<marks.size()<<endl;

    cout<<"capacity : ";
    cout<<marks.capacity()<<endl;

    // swap 
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {10,20,30,40,50};

    cout<<"size v1 : "<<v1.size()<<endl;
    cout<<"size v2 : "<<v2.size()<<endl;

    v1.swap(v2);

    cout<<"size v1 : "<<v1.size()<<endl;
    cout<<"size v2 : "<<v2.size()<<endl;

    // for each loop
    for ( int val : v1){
        cout<<val<<" ";
    }
    cout<<endl;

    // travesing using iterator
    vector<int>::iterator it = v1.begin();

    while( it != v1.end() ){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    // 2d vector
    // vector<vector<int>> v3 = {{1,2,3},{4,5,6}};

    vector<vector<int>> v3(5, vector<int> (4,0));
    
    cout<<"rows : "<<v3.size()<<endl;
    cout<<"cols : "<<v3[0].size()<<endl;

    return 0;

}