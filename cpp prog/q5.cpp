// /*
// Question 5:
// Create a class called "Employee" to represent an employee's information. 
// The class should have private member variables for:
// - Employee ID (integer)
// - Employee name (string)
// - Salary (double)

// The class should provide the following public member functions:
// Include 
// - void getEmployeeInfo() a member function to get the employee details from the user
// - void calculateYearlySalary(): Calculates and stores the yearly salary of the employee (assuming 12 months in a year).
// - void displayEmployeeDetails(): Displays the employee's ID, name, monthly salary, and yearly salary.

// Write a program that demonstrates the usage of the Employee class. 
// Create objects of the class, input the employee details and monthly salary, 
// calculate the yearly salary, and display the employee details.
// */

// #include<iostream>
// using namespace std;

// class Employee
// {
//     private:
//     int empId;
//     string empName;
//     double empSalary[13];
//     public:
//     void getEmployeeInfo()
//     {
//         cout<<"   Information "<<endl;
//         cout<<"Enter ID: ";
//         cin>>empId;
//         cout<<"Enter Name: ";
//         cin>>empName;
//         cout<<"Enter Monthly Salary from 1 to 12"<<endl;
//         for (int i =0; i <12; i++)
//         {
//             cin>>empSalary[i];
//         }
//     }
//     void calculateYearlySalary()
//     {
//         empSalary[13] = 0;
//         for (int i =0; i<12; i++)
//         {
//             empSalary[13] += empSalary[i];
//         }
//         empSalary[13]/=12;
//     }
//     void displayEmployeeDetails()
//     {
//         cout<<"   All Information"<<endl;
//         cout<<"ID number: "<<empId<<endl;
//         cout<<"Name: "<<empName<<endl;
//         cout<<"Monthly Salary from Jan to Dec"<<endl;
//         for (int i=0; i<12; i++)
//         {
//             cout<<empSalary[i]<<"\t";
//         }
//         cout<<endl;
//         cout<<"Yearly Salary: "<<empSalary[13];
//     }
// };

// int main()
// {
//     Employee emp;
//     emp.getEmployeeInfo();
//     emp.calculateYearlySalary();
//     emp.displayEmployeeDetails();
//     return 0;
// }
