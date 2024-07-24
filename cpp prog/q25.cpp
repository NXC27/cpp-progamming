// /*
// Question 25:
// Write a C++ program that uses the STL algorithm library to sort an array of 
// integers in ascending order. Prompt the user to enter the array elements and 
// display the sorted array using the sort function.
// */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int num;
//     int tmp;
//     vector <int> arr;
//     cout<<"Enter quantity of numbers: ";
//     cin>>num;
//     cout<<"Enter numbers"<<endl;
//     for (int i=0; i<num; i++)
//     {
//         cin>>tmp;
//         arr.push_back(tmp);
//     }
//     sort(arr.begin(), arr.end());
//     cout<<"After sorted"<<endl;
//     for (int i=0; i<arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }