#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int n;
    A(int n){
        this->n = n;
    }
    void display1(){
        cout<<n<<endl;
    }
    void emni(){
        cout<<"I love you!!";
    }
};
class B{
    public:
    int n2;
    B(int n2){
        this->n2 = n2;
    }
    void display2(){
        cout<<n2<<endl;
    }
};
class Multi: public A, public B{
    public:
    Multi(int n1, int n2):A(n1), B(n2) {
        B::display2();
    }

};
int main()
{
    Multi obj(10, 20);
    obj.emni();
    return 0;
}