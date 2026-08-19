#include <iostream>
using namespace std;
class max1;
class maxim{
    int a;
    public:
    void get1(int x){
        a=x;
    }
    friend void comp(maxim m1,max1 m2);
};
class max1{
    int b;
    public:
    void get2(int y){
        b=y;
    }
    friend void comp(maxim m1,max1 m2);
};
void comp(maxim m1,max1 m2){
    cout<<"Compairing 2 values:"<<"a:"<<m1.a<<","<<"b:"<<m2.b<<endl;
    if(m1.a > m2.b){
        cout<<"a is greater:"<<m1.a;
    }
    else{
        cout<<"b is greater:"<<m2.b;
    }
}
int main()
{
    maxim A;
    max1 B;
    A.get1(8);
    B.get2(14);
    comp(A,B);
    

    return 0;
}