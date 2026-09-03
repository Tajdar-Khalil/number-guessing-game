#include <iostream>
#include <string>
using namespace std;

int main() {
	// a program that takes the record of students
	
	string names[5];
	int ages[5];
	float gpas[5];
	
	float totalAge = 0;
	float totalGPA = 0;
	
	// 1. Take input for 5 students
	cout << "========================================================= \n";
	cout << "|\t \tSTUDENT INFORMATION SYSTEM\t \t| \n";
	cout << "========================================================= \n";
	
	cout << "====== Enter the Details for 5 Students ======\n";
	for (int i = 0; i < 5; i++) {
		cout << "\nStudent " << (i + 1) << " Details:\n";
		
		cout << "Enter Name: ";
		cin >> names[i];
		
		cout << "Enter Age: ";
		cin >> ages[i];
		
		cout << "Enter GPA: ";
		cin >> gpas[i];
		
		// Add totals for average calculation
		totalAge = totalAge + ages[i];
		totalGPA = totalGPA + ages[i];
	}
	
	// 2.Calculate averages
	float averageAge = totalAge / 5.0;
	float averageGPA = totalGPA / 5.0;
	
	// 3. find student with highes cgpa
	int highestIndex = 0;
	for (int i = 1; i < 5; i++) {
		if (gpas[i] > gpas[highestIndex]) {
			highestIndex = i;
		}
	}
	
	//4. Display all records in formatted table
	cout << "========================================================= \n";
	cout << "Name\t\tAge\tGPA\n";
	cout << "========================================================= \n";
	
	for (int i = 0; i < 5; i++){
		cout << names[i] << "\t\t" << ages[i] << "\t" << gpas[i] << "\n";
	}
	cout << "========================================================= \n";

	//Display summary results
	cout << "\nAverage Age: " << averageAge << " years\n";
	cout << "Average GPA: " << averageGPA << "\n";
	cout << "Top Student: " << names[highestIndex] 
		<< " (GPA: " << gpas[highestIndex] << ")\n";
	
	return 0;

}

