#include<iostream>
#include<queue>
using namespace std;

int main(){

    // creation 
    priority_queue<int> pq;
    // max heap

    // insertion
    pq.push(10);
    pq.push(5);
    pq.push(50);

    // top
    cout<<"Top : ";
    cout<<pq.top()<<endl;

    // size
    cout<<"Size : ";
    cout<<pq.size()<<endl;

    // deletion
    pq.pop();

    cout<<"Top : ";
    cout<<pq.top()<<endl;

    cout<<"Size : ";
    cout<<pq.size()<<endl;


    cout<<endl<<"MIN heap :"<<endl;

    //  min heap
    priority_queue<int,vector<int>,greater<int>> pq1;

    // insertion
    pq1.push(10);
    pq1.push(5);
    pq1.push(50);

     // top
    cout<<"Top : ";
    cout<<pq1.top()<<endl;

    // size
    cout<<"Size : ";
    cout<<pq1.size()<<endl;

    // deletion
    pq1.pop();

    cout<<"Top : ";
    cout<<pq.top()<<endl;

    cout<<"Size : ";
    cout<<pq1.size()<<endl;

    // swap




    return 0;

}