#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

    // creation
    unordered_set<int> st;
    // set<int> st;

    // insertion
    st.insert(10);
    st.insert(20);
    st.insert(1);
    st.insert(5);
    st.insert(1);

    // traversal
    // set<int>::iterator it = st.begin();
    unordered_set<int>::iterator it = st.begin();

    cout<<"Set : ";
    while ( it != st.end() )
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    // size
    cout<<"Size : ";
    cout<<st.size()<<endl;

    // clear
    // st.clear();

    cout<<"Size : ";
    cout<<st.size()<<endl;

    // empty
    if( st.empty() == true){
        cout<<"Set is empty"<<endl;
    }
    else{
        cout<<"Set is not empty"<<endl;
    }

    // erase
    // st.erase( st.begin(), st.end() );

    cout<<"Size : ";
    cout<<st.size()<<endl;

    // find
    if( st.find(10) != st.end() ){
        cout<<"Key found : "<<endl;
    }
    else{
        cout<<"Key not found : "<<endl;
    }

    // count
    if( st.count(10) != 0){
        cout<<"Key is present : "<<endl;
    }
    else{
        cout<<"Key is not present : "<<endl;
    }

    

    return 0;

}