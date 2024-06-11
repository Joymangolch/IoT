#include<iostream>
#include<string>
using namespace std;

class student{
	private:
		string name;
		int rollno;
		string registration;
		char gender;
	public:
		void enter(){
			cout << "Enter your Name: ";
			cin >> name;
			cout << "Enter your Roll Number : ";
			cin >> rollno;
			cout << "Enter your Registration Number : ";
			cin >> registration;
			cout << "Enter your Gender(Male/Female) : ";
			cin >> gender;
		}
		void print(){
			cout << "Name: " << name << endl;
			cout << "Roll Number: " << rollno << endl;
			cout << "Registration Number: " << registration << endl;
			cout << "Gender: " << gender << endl;
		}
};

int main(){
	student x;
	x.enter();
	x.print();
	return 0;
}

