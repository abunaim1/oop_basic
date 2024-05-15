#include<bits/stdc++.h>
using namespace std;
class InsideMethod{
    public:
    string name;
    InsideMethod (string name){
        this->name = name;
    }
    void myMethod(){
        cout << "Hello World!"<<endl;
    }

};
class OutSideMethod{
    public:
    int number;
    OutSideMethod(int number){
        this->number = number;
    }
    string myMethod_2 ();
};
string OutSideMethod::myMethod_2(){

    return "This is outside method!!";
}
int main()
{
    InsideMethod obj("Phitron.IO");
    obj.myMethod();
    OutSideMethod obj2(22);
    string text = obj2.myMethod_2();
    cout<<text;
    return 0;
}