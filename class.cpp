
#include <iostream>
using namespace std;
class FirstClass{
private:
    int _id=121;
    string _firstName;
    string _lastName;

public:
    void setId(int id){_id=id;}
    void setFirstName(string firstName){_firstName=firstName;}
    void setLastName(string lastName){_lastName=lastName;}

    int getId(){ return _id;}
    string getFirstName(){ return _firstName;}
    string getLastName(){return _lastName;}

    string fullName(){return _firstName+" "+_lastName;}
//    __declspec(property(get = getId, put = setId)) int Id;
//static
    static int counter;

    FirstClass(){
     cout<<"Constructor 1"<<endl;
     counter++;
    }

FirstClass(int id,string firstName,string lastName){
 cout<<"Constructor 2"<<endl;
 _id=id;
 _firstName=firstName;
 _lastName=lastName;
 counter++;
}
//copy constructor
FirstClass(FirstClass& copyConstructor){
 cout<<"Constructor 3 (copy constructor)"<<endl;
 _id=copyConstructor.getId();
 _firstName=copyConstructor.getFirstName();
 _lastName=copyConstructor.getLastName();
 counter++;
}

};
//static variable initialisation outside the class
    int FirstClass::counter = 0;

int main(){
	cout << "\n****************************************************\n\n";

        FirstClass myFirstClass;
        myFirstClass.setFirstName("Mohammad Ali");
        myFirstClass.setLastName("Shikhi");
        myFirstClass.setId(11);

        FirstClass myConstructor(10,"Mo Ali","Shikhi");
        cout<<"ID is : "<<myConstructor.getId()<<" Full name is : "<<myConstructor.fullName()<<endl;

//copy constructor
        FirstClass copyConstructor =myConstructor;
        cout<<"ID is : "<<copyConstructor.getId()<<" Full name is : "<<copyConstructor.fullName()<<endl;


        cout<<"ID is : "<<myFirstClass.getId()<<" Full name is : "<<myFirstClass.fullName()<<endl;


        cout<<"Counter "<<FirstClass::counter<<endl;

       cout << "\n\n***************************************************\n\n";
return 0;
}

