// /*
// Question 18:
// Write a program which will get an input n from user in positive numbers, create 
// an array of elements having n elements and values same as the index of the element, 
// dynamically. 0th index element value should be 0. The program should print the 
// array and clear out the heap space before terminating.
// */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     do
//     {
//         cout<<"Enter a positive number: ";
//         cin>>n;
//     } while (n<0);
//     int *p = new int[n];
//     for (int i=0; i<n; i++)
//     {
//         *(p+i) = i;
//     }
//     cout<<"Print array"<<endl;
//     for (int i=0; i<n; i++)
//     {
//         cout<<*(p+i)<<' ';
//     }
//     delete[] p;
//     return 0;
// }