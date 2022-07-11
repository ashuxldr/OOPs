// #compile-time or static memory allocation
/*	
    -> In the static memory allocation, variables get allocated permanently, 
        till the program executes or function call finishes.
    -> Static Memory Allocation is done before program execution.
    -> It uses stack for managing the static allocation of memory
    -> fixed memory size, no memory reusability.
    -> In this memory is allocated at compile time remains from start to end of the program.
    -> Destructor is called automatically at the end of the program.

**/
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

    ~Person(){
        cout<<"Destructor"; // called automatically
    }
};


int main(){
    Person ramesh; // static memory allocation
    ramesh.name = "Ramesh singh";
    ramesh.setAge(30);

    cout<<"Name:"<<ramesh.name<<endl; // accessing name using dot(.) operator
    cout<<"Age:"<<ramesh.getAge(); //accessing getter for age using dot(.) operator

    return 0;
}