#include<iostream>
#include<string>
using namespace std;
struct Student{
	string name;
	int Rollnumber;
	string registration;
	char gender;
};
int main(){
	Student student;
	cout<<"Enter the Name of a student : ";
	cin>>student.name;
	cout<<"\nEnter the Roll Number : ";
	cin>>student.Rollnumber;
	cout<<"\nEnter the registration number : ";
	cin>>student.registration;
	cout<<"\nEnter the Gender :";
	cin>>student.gender;
	
	cout<<"\nInformation of the student\n";
	cout<<"Name : "<<student.name;
	cout<<"\nRoll Number : "<<student.Rollnumber;
	cout<<"\nRegistration Number : "<<student.registration;
	cout<<"\nGender : "<<student.gender;
	
	return 0;
}

