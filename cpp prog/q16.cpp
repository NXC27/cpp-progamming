// /*
// Quetion 16:
// Write a C++ program that demonstrates dynamic memory allocation and resizing 
// using the realloc function. Prompt the user to enter the initial size of an array, 
// allocate memory dynamically, allow the user to input values into the array, and 
// then use the realloc function to resize the array based on user input.
// */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int q;
//     cout<<"Quantity of input numbers is: ";
//     cin>>q;
//     int *dp = new int[q];
//     cout<<"Enter values"<<endl;
//     for (int i=0; i < q; i++)
//     {
//         cin>>*(dp+i);
//     }
//     cout<<"###  All values:"<<endl;
//     for (int i=0; i < q; i++)
//     {
//         cout<<*(dp+i)<<'\t';
//     }
//     cout<<endl;
//     //should try with new quantity < old quantity
//     //                new quantity > old quantity
//     cout<<"###  Resize - new quantity is: ";
//     cin>>q;
//     int *new_dp = (int *)realloc(dp, q);
//     cout<<"All values - After resize"<<endl;
//     for (int i=0; i < q; i++)
//     {
//         cout<<*(new_dp+i)<<'\t';
//     }
    
//     return 0;
// }