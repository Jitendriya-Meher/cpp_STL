#include<iostream>
#include<queue>
using namespace std;

int main(){

    // creation
    queue<int> q;

    // insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // q = 10 , 20, 30, 40

    // size
    cout<<"Size : ";
    cout<<q.size()<<endl;

    // front and back
    cout<<"Front : ";
    cout<<q.front()<<endl;

    cout<<"Back : ";
    cout<<q.back()<<endl;

    // deletion
    q.pop();

    cout<<"Size : ";
    cout<<q.size()<<endl;

    // empty
    if( q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }

    // traversing queue
    cout<<"queue : ";
    while ( q.empty() == false)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
    // swap 
    queue<int> q1;
    q1.push(10);
    q1.push(20);

    queue<int> q2;
    q2.push(100);
    q2.push(200);
    q2.push(300);

    cout<<"q1 : "<<q1.front()<<" -- " <<q1.back()<<endl;
    cout<<"q2 : "<<q2.front()<<" -- " <<q2.back()<<endl;

    q1.swap(q2);

    cout<<"q1 : "<<q1.front()<<" -- " <<q1.back()<<endl;
    cout<<"q2 : "<<q2.front()<<" -- " <<q2.back()<<endl;
    


    return 0;

}