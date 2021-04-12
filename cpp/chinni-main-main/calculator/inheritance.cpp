#include<iostream>
using namespace std;
class A
{
    private:
        int a;
    public:
        void fn();
        
};
class B : public A
{
    private:
        int b;
    public:
        void fbn();
        void fn();
};
void fn()
{
    cout << "inside class A";
}
void fbn()
{
    cout << "inside class B";
}

int main()
{
    A* pa;
    B* pb;
    A av;
    B bv;
    pa = &bv;
    pa -> fn();
}