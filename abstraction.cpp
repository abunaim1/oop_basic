#include<bits/stdc++.h>
using namespace std;
// abstract class 

class MobileUSer{
    public:
    virtual void sendSMS() = 0;
    void call(){
        cout<<"HELO";
    }
};

class User1: public MobileUSer
{
    public:
    void sendSMS (){
        cout<<"Hi i am user1";
    }
};

int main()
{
    MobileUSer *obj;

    User1 us1;

    obj = &us1;

    obj->sendSMS();

    return 0;
}

// Abstraction class hiding the implementation details and showing only the functionality to the user. 