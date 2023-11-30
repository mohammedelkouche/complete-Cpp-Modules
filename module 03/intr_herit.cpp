#include <iostream>


// class Person
class Person
{
    private :
        std::string name;
        int age;
        std::string address;
    public :
        std::string  getName();
        void setName(std::string n);
        int getAge();
        void setAge(int a);
        Person();
        ~Person();
};

std::string Person::getName()
{
    return name;
}
void Person::setName(std::string n)
{
    name = n;
}
int Person::getAge()
{
    return age;
}
void Person::setAge(int n)
{
    age = n;
}
Person::Person(){}
Person::~Person(){}

// class Student

class Student:public Person
{
    private :
        float grade;
        int age;
        static int counter;
    public :
        int getCounter();
        Student();
        ~Student();
};

Student::Student(){}
Student::~Student(){}

int main()
{
    Student one;

    one.setName("amin");
    std::cout << one.getName() << std::endl;
    return(0);
}