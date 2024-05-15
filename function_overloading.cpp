#include<bits/stdc++.h>
using namespace std;
void abc (int x){
    cout<<x<<endl;
}
void abc (int y, int z){
    cout<<z<<" "<<y<<endl;
}
void abc (string x){
    cout<<x<<endl;
}
int main()
{
    abc(10);
    abc(10,20);
    abc("hello");
    return 0;
}