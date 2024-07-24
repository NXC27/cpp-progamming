// /*
// Question 12:
// Write a C++ program which will capture user input of two strings, 1 and 2.
// The program should capture the strings and throw exceptions on following conditions.

// String 1 contains part of string 2, string 1 is of longer length.

// String 2 contains part of string 1, string 2 is of longer length.

// String 1 and string 2 are identical.

// Every exception case should be captured and reported by exception handlers in a legible format. 
// Any other cases should not be captured or reported.
// */

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main()
// {
//     char s1[100], s2[100];
//     cout<<"Enter 1st string"<<endl;
//     cin>>s1;
//     cout<<"Enter 2nd string"<<endl;
//     cin>>s2;
//     try
//     {
//         if (strcmp(s1,s2) == 0)
//         {
//             throw 0;
//         }
//         if (strcmp(s1,s2) > 0)
//         {
//             throw 1;
//         }
//         if (strcmp(s1,s2) < 0)
//         {
//             throw 2;
//         }
//     }
//     catch (int e)
//     {
//         if (e == 0)
//         {
//             cout<<"String 1 and string 2 are identical"<<endl;
//         }
//         if (e == 1)
//         {
//             cout<<"String 1 contains part of string 2, string 1 is of longer length"<<endl;
//         }
//         if (e == 2)
//         {
//             cout<<"String 2 contains part of string 1, string 2 is of longer length"<<endl;
//         }
//     }
//     return 0;
// }