#include<iostream>
#include<stack>
using namespace std;

int main(){

    // creation
    stack<int> s;

    // insertion
    s.push(10);
    s.push(20);
    s.push(30);

    // size
    cout<<"Size : ";
    cout<<s.size()<<endl;

    // accessing top element
    cout<<"Top element : ";
    cout<<s.top()<<endl;

    // deletion
    s.pop();

    cout<<"Size : ";
    cout<<s.size()<<endl;

    // accessing top element
    cout<<"Top element : ";
    cout<<s.top()<<endl;

    // empty
    if( s.empty() ){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        cout<<"Stack is not empty!"<<endl;
    }

    // swap stack
    stack<int> s1;
    s1.push(10);

    stack<int> s2;
    s2.push(101);

    s1.swap(s2);

    // traverseing stack
    while ( s.empty() == false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
    
    return 0;

}