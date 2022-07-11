#include<iostream>
using namespace std;

class Person{

    private:
        int age; // private variable
    
    public:
        string name; // public variable
    
    int getAge() // getter function
    {
        return age;
    }

    void setAge(int age) // setter function
    {
        this->age = age;
    }

};


int main(){
    Person ramesh; 
    ramesh.name = "Ramesh singh";
    ramesh.setAge(30);

    cout<<"Name:"<<ramesh.name<<endl;
    cout<<"Age:"<<ramesh.getAge();
    return 0;
}