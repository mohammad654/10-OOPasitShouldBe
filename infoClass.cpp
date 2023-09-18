#include<string>
#include<iostream>
#include<vector>
using namespace std;
class clsPerson {
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _PhoneNumber;
public:
	clsPerson(int ID, string FirstName, string LastName, string Email, string PhoneNumber) {
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_PhoneNumber = PhoneNumber;
	}
	int ID() {
		return _ID;
	}
	void SetFirstName(string FirstName) {
		_FirstName = FirstName;
	}
	string FirstName() {
		return _FirstName;
	}
	void SetLastName(string LastName) {
		_LastName = LastName;
	}
	string LastName() {
		return _LastName;
	}
	void SetEmail(string Email) {
		_Email = Email;
	}
	string Email() {
		return _Email;
	}
	void SetPhoneNumber(string Phone) {
		_PhoneNumber = Phone;
	}
	string PhoneNumber() {
		return _PhoneNumber;
	}
	void Print() {
		cout << "\nInfo: " << endl;
		cout << "\n________________________" << endl;
		cout << "ID       :" << _ID << endl;
		cout << "FirstName: " << _FirstName << endl;
		cout << "LastName : " << _LastName << endl;
		cout << "Full Name: " << _FirstName + " " << _LastName << endl;
		cout << "Email    : " << _Email << endl;
		cout << "Phone    : " << _PhoneNumber << endl;
		cout << "\n________________________" << endl;
	}
	void SendEmail(string sub, string body) {
		cout << "\nThe following message sente successfully to eamil : " << _Email << endl;
		cout << "Subject: " << sub << endl;
		cout << "Body: " << body << endl;
		cout << endl;
	}
	void SendSMS(string message) {
		cout << "The following SMS sent successfully to phone: " << _PhoneNumber << endl;
		cout << message << endl;
	}
};

int main() {
	clsPerson Person1(10, "Mohammad Ali", "Shikhi", "my@gmail.com", "0098387727");
	Person1.Print();

	Person1.SendEmail("Hi", "How are you?");
	Person1.SendSMS("How are you?");

	return 0;

}