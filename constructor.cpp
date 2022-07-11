// #Contructor
/*	
**/
#include<iostream>
using namespace std;

class Person{

    private:
        int age; // private variable
    
    public:
        string name; // public variable
    
    Person(){ //default constructor
        name="";
        age=0;
    }
    Person(string name, int age){ // parameterised constructor
        this->name = name;
        this->age = age;
    }

    Person(Person* &temp){ // copy constructor
        this->name = temp->name;
        this->age = temp->age;
    }


    int getAge() // getter function
    {
        return age;
    }

    void setAge(int age) // setter function
    {
        this->age = age;
    }

    ~Person(){
        cout<<"Destructor"; // destructor
    }
};


int main(){
    Person* ramesh = new Person(); // dynamic memory allocation
    ramesh->name = "Ramesh singh";
    ramesh->setAge(30);

    Person* X = new Person(ramesh);

    cout<<"Name:"<<ramesh->name<<endl; // accessing name using arrow(->) operator
    cout<<"Age:"<<ramesh->getAge(); //accessing getter for age using arrow(->) operator
    
    delete ramesh;


    cout<<"Name:"<<X->name<<endl; 
    cout<<"Age:"<<X->getAge(); 
    return 0;
}