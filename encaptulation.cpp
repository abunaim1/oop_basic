#include<bits/stdc++.h>
using namespace std;

class Employee{
    private:
    int salary;

    public:
    void setSalary(int s){
        salary = s;
    }
    void getSalary(){
        cout<<salary;
    }

};

int main()
{
    Employee obj;
    obj.setSalary(1000);
    obj.getSalary();
    return 0;
}



// Data and Method are binding in a single unit.
// Encaptulation = single unit(data + method)

// Two main types of encapsulation:
// I) Public Access (No Encapsulation)
// II) Private Access (Encapsulation)