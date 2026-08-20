#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    double salary;
    string department;

public:
    void setEmployeeId(int id) {
        empId = id;
    }
    
    void setName(string n) {
        name = n;
    }
    
    void setSalary(double sal) {
        salary = sal;
    }
    
    void setDepartment(string dept) {
        department = dept;
    }
    
    
    friend void displayEmployee(Employee e);
};


void displayEmployee(Employee e) {
    
    cout << "    EMPLOYEE DETAILS           " << endl;

    cout << "Employee ID  : " << setw(21) << e.empId << endl;
    cout << "Name         : " << setw(21) << e.name << endl;
    cout << "Salary       : $" << setw(20) << fixed << setprecision(2) << e.salary << endl;
    cout << "Department   : " << setw(21) << e.department << endl;
    
}

int main() {
    Employee emp1, emp2, emp3;
    
   
    emp1.setEmployeeId(101);
    emp1.setName("John Doe");
    emp1.setSalary(55000.50);
    emp1.setDepartment("IT");
    
  
  
   
    displayEmployee(emp1);
  
    return 0;
}
