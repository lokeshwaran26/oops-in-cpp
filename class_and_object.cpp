#include <iostream>
using namespace std;


class Employee{
    public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        cout << "Name -" << Name << endl;
        cout << "Company -" << Company << endl;
        cout << "Age -" << Age << endl;
    }
    Employee(string name , string comapany, int age){
        Name = name; 
        Company = comapany;
        Age = age;

    }
     
};

int main(){
    
    Employee employee1 = Employee("lokesh", "Astro x", 24);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("sebastian", "Astro x", 34);
    employee2.IntroduceYourself();


}
