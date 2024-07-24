// /*
// Question 19:
// Write a program which will get two inputs from user, n and m. The program should 
// create two dynamic arrays to contain values ranging from 0 to n and 0 to m. Our 
// program should print the two arrays and clear the memory before terminating.
// */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, m;
//     do
//     {
//         cout<<"Enter a positive number: ";
//         cin>>n;
//     } while (n<0);
//     do
//     {
//         cout<<"Enter a positive number: ";
//         cin>>m;
//     } while (m<0);
//     //initial arrays
//     int *np = new int[n];
//     int *mp = new int[m];
//     for (int i =0; i<n; i++)
//     {
//         *(np+i) = i;
//     }
//     for (int i =0; i<m; i++)
//     {
//         *(mp+i) = i;
//     }
//     //print all values
//     cout<<"All values of 2 arrays"<<endl;
//     cout<<"First array: ";
//     for (int i =0; i<n; i++)
//     {
//         cout<<*(np+i)<<' ';
//     }
//     cout<<endl;
//     cout<<"Second array: ";
//     for (int i =0; i<m; i++)
//     {
//         cout<<*(mp+i)<<' ';
//     }
//     //release memory
//     delete[] np;
//     delete[] mp;
//     return 0;
// }