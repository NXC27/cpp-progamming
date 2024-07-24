// /*
// Question 2:
// Write a C++ program to swap the values of 2 numbers without using 
// the third variable, use class and take input from the user. 
// */

// #include<iostream>
// using namespace std;

// class Number
// {
//     int a, b;
//     public:
//     void getNumber()
//     {
//         cout<<"Enter 1st number: ";
//         cin>>a;
//         cout<<"Enter 2nd number: ";
//         cin>>b;
//     }
//     void dispNumber()
//     {
//         cout<<"1st number: "<<a<<endl;
//         cout<<"2nd number: "<<b<<endl;
//     }
//     void swapNumber()
//     {
//         //a = 20
//         //b = 10
//         a = a + b;  //a = 30
//         b = a - b;  //b = 30 - 10 = 20 and a = 30
//         a = a - b;
//     }
// };

// int main()
// {
//     Number number;
//     number.getNumber();
//     cout<<"### before swapping 2 numbers"<<endl;
//     number.dispNumber();
//     cout<<"### after swapping 2 numbers"<<endl;
//     number.swapNumber();
//     number.dispNumber();
    
//     return 0;
// }