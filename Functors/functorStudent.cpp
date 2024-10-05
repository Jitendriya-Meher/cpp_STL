#include<iostream>
#include<vector>
using namespace std;

class Studnt{

    public:
        int marks;
        string name;

        Studnt(){}

        Studnt( int m, string name){
            this->marks = m;
            this->name = name;
        }

};

// functors
class studentComp{
    public:
        bool operator()( Studnt a, Studnt b){
            return a.marks > b.marks;
        }
};

int main(){

    Studnt s1(99,"Amit");
    Studnt s2(95,"Jiten");

    studentComp cmp;

    if( cmp(s1,s2)){
        cout<<s1.name<<" have highest marks. "<<s1.marks<<endl;
    }
    else{
        cout<<s2.name<<" have highest marks. "<<s2.marks<<endl;
    }

    return 0;

}