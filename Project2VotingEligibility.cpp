#include <iostream>
using namespace std;

int main()
{
	string name;
	cout << " Enter your first name: ";
	cin >> name;
	cout << "Enter your second name: ";
	cin >> name;
	
	string gender;
	cout << "Enter your gender: ";
	cin >> gender;
	
	string nationality;
	cout << "Enter your nationality (for example: Indian): ";
	cin >> nationality;
	
	int age;	
	cout << " Enter your age: ";
	cin >> age;
	
	if(age >= 18){
    cout << " \n You are eligible for voting";
	}
	else{
		cout << "\n You are not eligible for voting";
	}
	return 0;
}
	
	

	
