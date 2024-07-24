// /*
// Question 21:
// Write a c++ program that employs templates to implement an addition function 
// using two values and returning a single result. The program should accept 
// integer, float, long or double datatypes.
// */
// #include<iostream>
// using namespace std;

// template <typename T>
// T add(T a, T b)
// {
//     return a+b;
// }

// int main()
// {
//     int result1 = add<int>(2,3);
//     cout<<"addition = "<<result1<<endl;
//     float result2 = add<float>(2.132f,3.386f);
//     cout<<"addition = "<<result2<<endl;
//     long int result3 = add<long int>(200000,9999999999);
//     cout<<"addition = "<<result3<<endl;
//     double result4 = add<double>(2.3032,9.9215);
//     cout<<"addition = "<<result4<<endl;
//     return 0;
// }