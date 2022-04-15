#include <iostream>
using namespace std;


class Employee{

private:

    string Name;
    string Company;
    int Age;

public:
    
    void setName(string name){
        Name = name;
    }
    string getName(){ 
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){ 
        return Company;
    }
    void setAge(int age){
        if (age>=18)
        Age = age;
    }
    int getAge(){ 
        return Age;
    }
 
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
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Mark.M", "Stark industries", 34);
    employee2.IntroduceYourself();

    employee1.setAge(12);
    cout << employee1.getName() << " is " << employee1.getAge() << endl;
    

}
