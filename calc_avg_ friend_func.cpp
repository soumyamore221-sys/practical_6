#include <iostream>
using namespace std;
class avg2;
class avg3;
class avg1{
    int a;
    public:
    void get1(){
        cout<<"Enter a number:";
        cin>>a;
    }
    friend int average(avg1 m1,avg2 m2,avg3 m3);
};
class avg2{
    int b;
    public:
    void get2(){
        cout<<"Enter second number:";
        cin>>b;
    }
    friend int average(avg1 m1,avg2 m2,avg3 m3);
};
class avg3{
    int c;
    public:
    void get3(){
        cout<<"Enter third  number:";
        cin>>c;
    }
    friend int average(avg1 m1,avg2 m2,avg3 m3);
};
int average(avg1 m1,avg2 m2,avg3 m3){
   int res;
   res=(m1.a+m2.b+m3.c)/3;
   return res;
}
int main()
{
    avg1 A;
    avg2 B;
    avg3 C;
    A.get1();
    B.get2();
    C.get3();
    cout<<"average of 3 numbers:"<<average(A,B,C);
    

    return 0;
}