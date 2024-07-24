// /*
// Question 8:
// Create a class of employee having name, employee ID and a performance index (pi) 
// with years of experience(ye). The formula to calculate his pi is pi = ye * 10.
// The name, ID and pi value should not be accessible outside the class. 

// Write a program using constructors of an object which will set the employee name, 
// ID, pi value and print all the information in a legible and aesthetic manner. 
// Name, ID and ye is supplied at the time of object creation.
// */

// #include<iostream>
// using namespace std;

// class Employee
// {
//     private:
//     int eID;
//     float eYE, ePI;
//     string eName;
//     public:
//     //constructor
//     Employee(int id, string name, float ye)
//     {
//         eID = id;
//         eName = name;
//         eYE = ye;
//         ePI = 10*eYE;
//         displayEmployeeDetails();
//     }
//     void displayEmployeeDetails()
//     {
//         cout<<"   All Information"<<endl;
//         cout<<"ID number: "<<eID<<endl;
//         cout<<"Name: "<<eName<<endl;
//         cout<<"Years of Experience: "<<eYE<<endl;
//         cout<<"Performance Index: "<<ePI<<endl;
//     }
// };

// int main()
// {
//     Employee emp(12, "John", 1.521);
//     // emp.displayEmployeeDetails();
// }

