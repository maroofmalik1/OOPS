#include <iostream>
using std::string;
class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void InrroduceYourself()
    {
        std::cout << "Name :" << Name << std::endl;
        std::cout << "Company :" << Company << std::endl;
        std::cout << "Age :" << Age << std::endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    Employee empolyee1 = Employee("Maroof", "Amazon", 25);
    empolyee1.InrroduceYourself();

    Employee empolyee2 = Employee("Mayank", "OnlyForValues", 45);
    empolyee2.InrroduceYourself();
};