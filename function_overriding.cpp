#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void display(){
        cout<<"Hello!";
    }
};
class B: public A{
    public:
    void display(){
        cout<<"Hi";
    }
};
int main()
{
    B obj;
    obj.display();
    return 0;
}