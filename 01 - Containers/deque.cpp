#include<iostream>
#include<queue>
using namespace std;

int main(){

    // creation
    deque<int> dq;

    // insrtion
    dq.push_back(10);
    // 10
    dq.push_back(20);
    // 10,20
    dq.push_front(100);
    // 100,10,20
    dq.push_front(200);
    // 200,100,10,20

    // front and back
    cout<<"Front : ";
    cout<<dq.front()<<endl;

    cout<<"Back : ";
    cout<<dq.back()<<endl;

    // size
    cout<<"Size : ";
    cout<<dq.size()<<endl;

    // deletion
    dq.pop_front();
    dq.pop_back();

    cout<<"Front : ";
    cout<<dq.front()<<endl;

    cout<<"Back : ";
    cout<<dq.back()<<endl;

    cout<<"Size : ";
    cout<<dq.size()<<endl;

    // empty
    if( dq.empty() == true){
        cout<<"Deque is empty"<<endl;
    }
    else{
        cout<<"Deque is not empty"<<endl;
    }

    // iterator
    deque<int>::iterator it = dq.begin();
    cout<<"Deque : ";

    while ( it != dq.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    cout<<"dq[0] : ";
    cout<<dq[0]<<endl;

    cout<<"dq[1] : ";
    cout<<dq[1]<<endl;

    cout<<"dq.at(0) : ";
    cout<<dq.at(0)<<endl;

    // clear
    dq.clear();

    cout<<"Size : ";
    cout<<dq.size()<<endl;

    // erase
    dq.erase( dq.begin(), dq.end() );

    cout<<"Size : ";
    cout<<dq.size()<<endl;

    // swap
    deque<int> dq2;
    dq.push_back(10);

    dq.swap(dq2);


    return 0;

}