#include <bits/stdc++.h>
using namespace std;
#include<iomanip>// this library stored the std::setw

#define DBG ios_base::sync_with_stdio(0), cin.tie(0),cout.tie(0);

class clsEmployee {
private:
    int _ID;
    string _PHONE;
    string _FIRSTNAME;
    string _LASTNAME;
    string _EMAIL;
    string _TITLE;
    string _Department;
    double _Salary;

public:
    clsEmployee( int ID,string FIRSTNAME,string LASTNAME,string title ,string EMAIL,string PHONE,double salary , string department ){
        _ID = ID;
        _FIRSTNAME=FIRSTNAME;
        _LASTNAME=LASTNAME;
        _EMAIL=EMAIL;
        _PHONE=PHONE;
        _TITLE = title;
        _Salary = salary;
        _Department = department;
    }
    // ==================SET FUN======================
    void setFIRSTNAME(string FIRSTNAME){
        _FIRSTNAME =FIRSTNAME;
    }
    void setLASTNAME(string LASTNAME){
        _LASTNAME =LASTNAME;
    }
    void setEMAIL(string EMAIL){
        _EMAIL =EMAIL;
    }
    void setPHONE(string PHONE){
        _PHONE =PHONE;
    }
    void setTITLE(string TITLE){
        _TITLE =TITLE;
    }
    void setDepartment(string Department){
        _Department =Department;
    }
    void setSalary(double Salary){
        _Salary =Salary;
    }
    // ==================GET FUN======================
    int ID (){
        return _ID;
    }
    string FIRSTNAME(){
        return _FIRSTNAME;
    }
    string LASTNAME(){
        return _LASTNAME;
    }
    string FULLNAME(){
        return _FIRSTNAME+" "+_LASTNAME;
    }
    string EMAIL(){
        return _EMAIL;
    }
    string PHONE(){
        return _PHONE;
    }
    string TITLE(){
        return _TITLE;
    }
    string Department(){
        return _Department;
    }
    double Salary(){
        return   _Salary;
    }
    // ==================prop FUN======================
    void PrintInfo()
    {
        cout << "\nInfo!\n";
        cout << "____________________________________________" << endl;
        cout << "ID\t\t:" << _ID << endl;
        cout << "First Name\t:" << _FIRSTNAME << endl;
        cout << "Last Name\t:" << _LASTNAME << endl;
        cout << "Full Name\t:" << FULLNAME() << endl;
        cout << "Title\t\t:" << _TITLE << endl;
        cout << "Email\t\t:" << _EMAIL << endl;
        cout << "Phone\t\t:" << _PHONE << endl;
        cout << "Department\t:" << _Department << endl;
        cout << "Salary\t\t:" << _Salary << endl;
        cout << "____________________________________________" << endl;
    }
    void SendEmail(string Subject , string Body ){
        cout << "The following message sent successfully to email: " << _EMAIL << endl;
        cout << "subject: " << Subject << endl;
        cout << "Body: " << Body << endl<<endl;
    }
    void SendSMS (string Message) {
        cout << "The following SMS sent successfully to phone: " << _PHONE << endl;
        cout <<  Message <<endl;

    }
};


int main() {
    DBG

    clsEmployee Employee1 (10,"Mohammad Ali","Shikhi","devs","my@gmail.com","0098387727",15000,"Utrecht");
    Employee1.PrintInfo();
    Employee1.SendEmail("aa","hhhhh");
    Employee1.SendSMS("abcd");
    return 0;
}