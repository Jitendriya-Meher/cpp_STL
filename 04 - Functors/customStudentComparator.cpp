#include<iostream>
#include<vector>
#include<algorithm>
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
            
            if( a.marks == b.marks ){
                return a.name > b.name;
            }

            return a.marks > b.marks;
        }
};

void printArr( vector<Studnt> &arr){

    for( auto stu : arr){
        cout<<"marks = "<<stu.marks<<" : "<<stu.name<<endl;
    }
    cout<<endl;

}

int main(){

    Studnt s1(99,"Amit");
    Studnt s2(95,"Jiten");
    Studnt s3(91,"Jitendriya");
    Studnt s4(98,"Jiten 2");
    Studnt s5(98,"Jiten 3");

    vector<Studnt> arr = {s1, s2, s3, s4, s5};

    cout<<"Student Array :"<<endl;
    printArr(arr);

    // sort
    sort(arr.begin(), arr.end(), studentComp());

    cout<<"custom Sorted Student Array :"<<endl;
    printArr(arr);

    

    return 0;

}