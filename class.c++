#include <bits/stdc++.h>
using namespace std;
class JP
{
public:
    int time;

    ~JP()
    {
        cout << "This is the destructure!!" << endl;
    }
    void display()
    {
        cout << "Hello from inside the class method" << endl;
    }
    JP(int time)
    {
        this->time = time;
        cout << "This is from constructor" << endl;
    }
};

int main()
{

    JP obj(10);
    obj.display();
    return 0;
}