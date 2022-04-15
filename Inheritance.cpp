#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual  void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{

protected:
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
    Employee(string name , string company, int age){
        Name = name; 
        Company = company;
        Age = age;

    } 
    void AskForPromotion(){
        if (Age>30)
          cout << Name <<" got promoted " << endl;
        else
          cout << Name << "  ,Sorry no promotion for you! " << endl; 
    }
};
class Developer : public Employee{
public:
    string FavProgramingLanguage;
    Developer(string name , string company, int age, string favProgramingLanguage)
    : Employee(name,company,age)
    {
        FavProgramingLanguage = favProgramingLanguage;
    }
    void FixBug(){
        cout << Name <<" Fixed bug using " << FavProgramingLanguage <<endl;
    }
};

class Teacher : public Employee{
    public:
      string Subject;
      void PrepareLesson(){
           cout << Name << " is preparing "<< Subject << " lesson " << endl;
      }
      Teacher(string name , string company, int age, string subject)
      : Employee(name,company,age)
      {
        Subject = subject;
      }
};

int main(){
    
    
    Developer d =Developer("Lokesh", "AstroX", 18,"C++");
    Teacher t = Teacher("sebastian", "AstroX", 23,"python");
    t.PrepareLesson();

}
