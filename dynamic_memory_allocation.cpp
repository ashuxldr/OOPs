// #run-time or dynamic memory allocation
/*	
    -> In the Dynamic memory allocation,  variables get allocated 
        only if your program unit gets active.
    -> Dynamic Memory Allocation is done during program execution.
    -> It uses heap for managing the dynamic allocation of memory.
    -> variable memory size, memory reusability possible.
    -> In this memory is allocated at run time and can be released at any time during the program.
    -> Destructor is called manually.
    -> arrow operator is used to reference pointers and memory address.

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
        cout<<"Destructor"; // called manually
    }
};


int main(){
    Person* ramesh = new Person(); // dynamic memory allocation
    ramesh->name = "Ramesh singh";
    ramesh->setAge(30);

    cout<<"Name:"<<ramesh->name<<endl; // accessing name using arrow(->) operator
    cout<<"Age:"<<ramesh->getAge(); //accessing getter for age using arrow(->) operator
    delete ramesh;
    return 0;
}