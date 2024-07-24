// /*
// Question 10:
// Write a C++ program that reads two floating-point numbers from the user and 
// performs division on them. Implement exception handling to catch any errors 
// that may occur during the division, such as invalid input or division by zero. 
// If an error occurs, display an appropriate error message to the user.
// */

// #include<iostream>
// using namespace std;

// int main()
// {
//     float n1, n2;
//     cout<<"Enter 1st floating-point number: ";
//     try
//     {
//         cin>>n1;
//         if (cin.fail())
//         {
//             throw 1;
//         }
//         //if no error with n1 then keep going to get n2
//         cout<<"Enter 2nd floating-point number: ";
//         try
//         {
//             cin>>n2;
//             if (cin.fail())
//             {
//                 throw 2;
//             }
//             if (n2 == 0)
//             {
//                 throw 0;
//             }
//             cout<<"division = "<<n1/n2<<endl;
//         }
//         catch (int b)
//         {
//             if (b == 0)
//             {
//                 cout<<"the 2nd number is 0"<<endl;
//             }
//             if (b == 2)
//             {
//                 cout<<"invalid 2nd input"<<endl;
//             }
//         }
//     }
//     catch (int a)
//     {
//         cout<<"Invalid 1st input"<<endl;
//     }

//     return 0;
// }