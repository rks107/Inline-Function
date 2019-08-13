#include <iostream>
using namespace std;
class A 
{
    private:
    int x,y;
    public:
    void input()
    {
        //cout<<"enter a number:";
        cin>>x>>y;
    }
    friend void show(A ob);
};
void show(A ob)
{
    cout<<ob.x<<"\t"<<ob.y;
}
int main() {
	A obj;
	obj.input();
	show(obj);
	return 0;
}