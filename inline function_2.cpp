#include <iostream>
using namespace std;
class B;
class A 
{
    private:
    int x;
    public:
    void input()
    {
        //cout<<"enter a number:";
        cin>>x;
    }
    friend void sum(A ob1 , B ob2);
};
class B 
{
    private:
    int y;
    public:
    void input()
    {
        cin>>y;
    }
    friend void sum(A ob1,B ob2);
};
void sum(A ob1,B ob2)
{
    cout<<"sum of two given no is "<<ob1.x+ob2.y;
}
int main() {
	A obj1;
	B obj2;
	obj1.input();
	obj2.input();
	sum(obj1,obj2);
	return 0;
}