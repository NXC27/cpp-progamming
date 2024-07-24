// /*
// Question 20:
// Write a C++ program that employs templates to implement a generic function 
// called "swapValues" that swaps the values of two variables of any data type.
// */

// #include<iostream>
// using namespace std;

// template <typename T>
// void swapValues(T *a, T *b)
// {
//     T tmp;
//     tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

// int main()
// {
//     int n1 = 1;
//     int n2 = 2;
//     cout<<"Before swap: "<<n1<<' '<<n2<<endl;
//     swapValues<int>(&n1, &n2);
//     cout<<"After swap: "<<n1<<' '<<n2<<endl;
//     return 0;
// }