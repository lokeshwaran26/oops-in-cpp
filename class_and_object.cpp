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
    
    Employee employee1 = Employee("jhon.M", "Stark industires", 24);
    //employee1.Name = "Jhon.M";
    //employee1.Company = "Stark industries";
    //employee1.Age = 24;
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Mark.M", "Stark industries", 34);
    //employee2.Name = "Mark.M";
    //employee2.Company = "Stark industries";
    //employee2.Age = 34;
    employee2.IntroduceYourself();


}
