#include <bits/stdc++.h>
using namespace std;
#include<iomanip>// this library stored the std::setw

#define DBG ios_base::sync_with_stdio(0), cin.tie(0),cout.tie(0);

class   Person{
private:
	int _ID;
	string _firstName;
	string _lastName;
	string _email;
	string _phoneNumber;
public:
        Person(int id,string firstName,string lastName,string email,string phoneNumber){
//            cout<<"Constructor "<<endl;
            _ID = id;
            _firstName = firstName;
            _lastName = lastName;
            _email = email;
            _phoneNumber = phoneNumber;
        }

       void setId(int id ){_ID=id;}
       int  getId(){return _ID;}
       void setFirstName(string firstName ){_firstName=firstName;}
       string getFirstName(){return _firstName;}
       void setLastName(string lastName ){_lastName=lastName;}
       string getLastName(){return _lastName;}
       void setEmail(string email ){_email=email;}
       string getEmail(){return _email;}
       void setPhoneNumber(string phoneNumber ){_phoneNumber=phoneNumber;}
       string getPhoneNumber(){return _phoneNumber;}
       void print() {
       		cout << "\nInfo: " << endl;
       		cout << "_____________________________________________________" << endl;
       		cout << "ID         : " << _ID << endl;
       		cout << "FirstName  : " << _firstName << endl;
       		cout << "LastName   : " << _lastName << endl;
       		cout << "Full Name  : " << _firstName + " " << _lastName << endl;
       		cout << "Email      : " << _email << endl;
       		cout << "Phone      : " << _phoneNumber << endl;
       		cout << "________________________________________________________" << endl;
       	}

        void sendEmail(string sub, string body) {
            cout << "\nThe following message sente successfully to eamil : " << _email << endl;
            cout << "Subject: " << sub << endl;
            cout << "Body: " << body << endl;
            cout << endl;
        }
        void sendSMS(string message) {
            cout << "The following SMS sent successfully to phone: " << _phoneNumber << endl;
            cout << message << endl;
        }
};

class Developer:public Person{
private:
    string _title;
    string _department;
    float _salary;
public:
    Developer(int id,string firstName,string lastName,string email,string phoneNumber,
    string title,string department,double salary)
    :Person(id,firstName,lastName,email,phoneNumber){
    _title=title;
    _department=department;
    _salary=salary;
    }

    void setTitle(string title){_title =title;}
    string getTitle(){return _title;}
    void setSalary(double salary){ _salary =salary;}
    double getSalary(){ return   _salary;}
    void setDepartment(string department){_department =department;}
    string getDepartment(){return _department;}

   void print() {

//        Person::print();
//        cout << "Devs "  << endl;
//        cout << "________________________________________________________" << endl;
//        cout << "Department : " << _department << endl;
//        cout << "Title      : " << _title << endl;
//        cout << "Salary     : " << _salary << endl;
//        cout << "________________________________________________________" << endl;
//
        cout << "\nInfo: " << endl;
        cout << "_____________________________________________________" << endl;
        cout << "ID         : " << getId() << endl;
        cout << "FirstName  : " << getFirstName() << endl;
        cout << "LastName   : " << getLastName() << endl;
        cout << "Full Name  : " << getFirstName() + " " << getLastName() << endl;
        cout << "Email      : " << getEmail() << endl;
        cout << "Phone      : " << getPhoneNumber() << endl;
        cout << "Department : " << _department << endl;
        cout << "Title      : " << _title << endl;
        cout << "Salary     : " << _salary << endl;
    }
};


int main() {

    Developer developer(10, "Mohammad Ali", "Shikhi", "my@gmail.com", "0098387727", "c++","test",35.00);
    developer.print();

    Person person1(11, "Mohammad Ali", "Shikhi", "my@gmail.com", "0098387727");
    person1.print();

//    person1.sendEmail("Hi", "How are you?");
//    person1.sendSMS("How are you?");
//    cout<<"ID = "<<person.getId()<<endl;
 return 0;
}