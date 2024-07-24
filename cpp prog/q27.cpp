// /*
// Question 27:
// We have a class of employees with details such as name and Id no. Please create 
// a base class for any number of employees and use a list container to contain all 
// employee info. Our program should ask for total no of employees then each employee 
// detail and store them, also purse through the list from the end to print each 
// employee detail in a legible and orderly manner.
// */

// #include<iostream>
// #include<list>
// #include<algorithm>
// using namespace std;

// class Employee
// {
//     private:
//     string name;
//     int id;
//     public:
//     void get_info()
//     {
//         // cout<<"    Get Employee Infomation"<<endl;
//         cout<<"Name: ";
//         cin>>name;
//         cout<<"ID: ";
//         cin>>id;
//     }
//     void disp()
//     {
//         // cout<<"    Employee Detail"<<endl;
//         cout<<"Name: "<<name<<endl;
//         cout<<"ID: "<<id<<endl;
//     }
// };

// int main()
// {
//     int num;
//     list<Employee> ls;
//     list<Employee>::iterator it;
//     Employee emp;
//     cout<<"Enter number of employees: ";
//     cin>>num;
//     for (int i=0; i<num; i++)
//     {
//         cout<<"Fill in infomation of employee number "<<i<<endl;
//         emp.get_info();
//         ls.push_back(emp);
//     }
//     //display all employees
//     cout<<"All Employees Infomation"<<endl;
//     it = ls.begin();
//     while(it != ls.end())
//     {
//         (*it).disp();
//         it++;
//     }
//     return 0;
// }