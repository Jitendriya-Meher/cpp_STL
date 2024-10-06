#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    // creation
    unordered_map<string ,string> table;

    // insertion
    table["in"] = "India";
    
    table.insert( make_pair("en", "England"));

    pair<string, string> p;
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);

    // size
    cout<<"Size : ";
    cout<<table.size()<<endl;

    // clear
    // table.clear();

    cout<<"Size after clear : ";
    cout<<table.size()<<endl;

    // empty
    if( table.empty() == true){
        cout<<"Map is empty"<<endl;
    }
    else{
        cout<<"Map is not empty"<<endl;
    }

    // indexing
    cout<<"table.at('in') : ";
    cout<<table.at("in")<<endl;

    table.at("in") = "India 2.0";

    cout<<"table.at('in') : ";
    cout<<table.at("in")<<endl;

    table["in"] = "India 3.0";

    cout<<"table['in'] : ";
    cout<<table["in"]<<endl;

    // traversing using iterator
    unordered_map<string, string>::iterator it = table.begin();

    while ( it != table.end())
    {
        cout<<it->first<<" : "<<it->second<<endl;
        it++;
    }
    cout<<endl;
    
    // erase
    // table.erase("in");

    cout<<"Size : ";
    cout<<table.size()<<endl;

    // table.erase(table.begin(), table.end());

    cout<<"Size : ";
    cout<<table.size()<<endl;

    // find
    unordered_map<string, string>::iterator it1 = table.find("inn");

    if( it1 != table.end() ){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }

    // count
    if( table.count("in") == 0 ){
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key found"<<endl;
    }


    // ordered map
    cout<<endl<<"Ordered Map"<<endl;

    // creation
    map<string ,string> table1;

    // insertion
    table1["in"] = "India";
    
    table1.insert( make_pair("en", "England"));

    pair<string, string> p1;
    p1.first = "br";
    p1.second = "Brazil";
    table1.insert(p);

    // size
    cout<<"Size : ";
    cout<<table1.size()<<endl;

    // clear
    // table1.clear();

    cout<<"Size after clear : ";
    cout<<table1.size()<<endl;

    // empty
    if( table1.empty() == true){
        cout<<"Map is empty"<<endl;
    }
    else{
        cout<<"Map is not empty"<<endl;
    }

    // indexing
    cout<<"table.at('in') : ";
    cout<<table1.at("in")<<endl;

    table.at("in") = "India 2.0";

    cout<<"table.at('in') : ";
    cout<<table1.at("in")<<endl;

    table["in"] = "India 3.0";

    cout<<"table['in'] : ";
    cout<<table1["in"]<<endl;

    // traversing using iterator
    map<string, string>::iterator it2 = table1.begin();

    while ( it2 != table1.end())
    {
        cout<<it2->first<<" : "<<it2->second<<endl;
        it2++;
    }
    cout<<endl;
    
    // erase
    // table1.erase("in");

    cout<<"Size : ";
    cout<<table1.size()<<endl;

    // table.erase(table1.begin(), table1.end());

    cout<<"Size : ";
    cout<<table1.size()<<endl;

    // find
    map<string, string>::iterator it11 = table1.find("inn");

    if( it11 != table1.end() ){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }

    // count
    if( table1.count("in") == 0 ){
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key found"<<endl;
    }



    return 0;

}