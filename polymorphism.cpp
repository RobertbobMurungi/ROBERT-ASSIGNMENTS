#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee
{
protected:
    string name;
    int id;
    double salary;

public:
    void getEmployee() 
    {
        cout << "Enter employee name: "; 
        cin >> name; 

        cout << "Enter employee ID: "; 
        cin >> id; 

        cout << "Enter basic salary: "; 
        cin >> salary; 
    }

    void showEmployee() 
    {
        cout << "Name: " << name << endl;  
        cout << "Employee ID: " << id << endl; 
        cout << "Basic Salary: " << salary << endl;  
    }
};

// Derived class
class Manager : public Employee
{
private:
    double allowance;

public:
    void getManager()
    {
        getEmployee();

        cout << "Enter manager allowance: "; 
        cin >> allowance; 
    }

    void displayManager() 
    {
        cout << "\nMANAGER DETAILS" << endl; 

        showEmployee(); 

        cout << "Allowance: " << allowance << endl; 
        cout << "Gross Salary: "
             << salary + allowance << endl; 
    }
};

// Another derived class
class Technician : public Employee 
{
private:
    int overtimeHours; 
    double overtimeRate; 

public:
    void getTechnician() 
    {
        getEmployee();

        cout << "Enter overtime hours: "; 
        cin >> overtimeHours;

        cout << "Enter overtime rate: ";
        cin >> overtimeRate;
    }

    void displayTechnician()
    {
        cout << "\nTECHNICIAN DETAILS" << endl; 

        showEmployee();

        double overtimePay; 

        overtimePay = overtimeHours * overtimeRate;

        cout << "Overtime Pay: "
             << overtimePay << endl;

        cout << "Gross Salary: "
             << salary + overtimePay << endl;
    }
};

int main()
{
    Manager m; 
    Technician t; 

    cout << "ENTER MANAGER DETAILS" << endl; 
    m.getManager();

    cout << "\nENTER TECHNICIAN DETAILS" << endl; 
    t.getTechnician();

    m.displayManager(); 
    t.displayTechnician(); 

    return 0;  
}