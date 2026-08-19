#include <iostream>
using namespace std;

class Class2;  

class Class1 {
    int value;
    
public:
    Class1(int v = 0) : value(v) {}
    
    void setValue(int v) {
        value = v;
    }
    
    int getValue() const {
        return value;
    }
    
   
    int addWithClass2(Class2 obj2);
};

class Class2 {
    int value;
    
public:
    Class2(int v = 0) : value(v) {}
    
    void setValue(int v) {
        value = v;
    }
    
    int getValue() const {
        return value;
    }
    

    friend int Class1::addWithClass2(Class2 obj2);
};

int Class1::addWithClass2(Class2 obj2) {
    return this->value + obj2.value;  
}

int main() {
    Class1 obj1(45);
    Class2 obj2(55);
    
    cout << "Object1 value: " << obj1.getValue() << endl;
    cout << "Object2 value: " << obj2.getValue() << endl;
    cout << "Sum using member function: " << obj1.addWithClass2(obj2) << endl;
    
    return 0;
}