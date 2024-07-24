// /*
// Question 11:
// Write a C++ program that reads a sequence of integers from the user until a 
// negative number is entered. Implement exception handling to catch any errors 
// that may occur during the input process, such as non-integer values. If an error 
// occurs, display an appropriate error message and discard the invalid input. Once 
// the input is complete, calculate and display the sum of the entered integers.
// */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[100];
//     int sum = 0;
//     int i;
    
//     cout<<"Enter integer number until having negative number"<<endl;
//     for (i = 0; i < 100; i++)
//     {
//         try
//         {
//             cin>>arr[i];
//             if (cin.fail())
//             {
//                 throw 0;
//             }
//             if (arr[i] < 0)
//             {
//                 for (int j = 0; j <= i; j++)
//                 {
//                     sum += arr[j];
//                     // cout<<"sum = "<<sum<<endl;
//                 }
//                 cout<<"You have entered a negative number"<<endl;
//                 cout<<"Sum of all valid numbers = "<<sum<<endl;
//                 break;
//             }
//         }
//         catch(int e)
//         {
//             cout<<"Invalid input "<<endl;
//             cin.clear();
//             cin.ignore(100, '\n');
//             if (i > 0)
//             {
//                 --i;
//             }
//             else
//             {
//                 i = -1;
//             }
//         }
//     }
//     return 0;
// }