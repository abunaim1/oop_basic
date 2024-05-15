#include<bits/stdc++.h>
using namespace std;
class Shape{
    public:
    int height, width;
    Shape(int height, int width){
        this->height = height;
        this->width = width;
        cout<<height<<" "<<width<<endl;
    }
};
class Square: public Shape{
    public:
    string name;
    Square(string name,int height, int width) : Shape(height, width){
        this->name = name;
    }
    int area (){
        int result = height * width;
        return result;
    }
};
int main()
{
    Square obj("SQUARE",10,10);
    int area = obj.area();
    cout<<obj.name<<" "<<area<<endl;
    return 0;
}