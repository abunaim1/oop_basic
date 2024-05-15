#include<bits/stdc++.h>
using namespace std;
class Father{
    public:
    int x;
    Father(int x){
        this->x = x;
    }
    int officer(){
        return x;
    }
};

class Me : public Father{
    public:
    int y;
    Me(int y, int x): Father(x){
        this->y = y;
    }
    int yesSir (){
        int son = x + y;
        return son;
    }
};

class MyDaughter : public Me{
    public:
    int xx;
    MyDaughter (int xx, int x, int y) : Me(x, y){
        this->xx = xx;
    }
    void daughter (){
        cout<<x;
    }
};

int main()
{
    Me obj(10, 20);
    int parent = obj.officer();
    int son = obj.yesSir();
    cout<<parent<<endl<<son<<endl;

    MyDaughter obj_2(22,33,44);
    obj_2.daughter();
    
    return 0;
}