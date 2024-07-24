// /*
// Question 24:
// Write a c++ programs which returns the sum of the elements for an array, 
// The user should be able to supply the array with n elements. 
// The elements may be either integer or float numbers.
// */

// #include<iostream>
// using namespace std;

// template<typename T>
// T sum(T *arr, int count)
// {
//     T result = 0;
//     for (int i=0; i<count; i++)
//     {
//         result += arr[i];
//     }
//     return result;
// }

// int main()
// {
//     int n,sel;
//     cout<<"Enter quantity of numbers: ";
//     cin>>n;
//     cout<<"Choose the datatype\n1. Integer type\n2. Float type"<<endl;
//     do{
//         cout<<"Your choice: ";
//         cin>>sel;
//     } while(sel<1||sel>2);
//     int iarr[n];
//     float farr[n];
//     cout<<"Enter all "<<n<<" values"<<endl;
//     switch(sel)
//     {
//         case 1: 
//             for (int i=0; i<n; i++)
//             {
//                 cin>>iarr[i];
//             }
//             cout<<"sum is "<<sum<int>(iarr, n);
//             break;
//         case 2: 
//             for (int i=0; i<n; i++)
//             {
//                 cin>>farr[i];
//             }
//             cout<<"sum is "<<sum<float>(farr, n);
//             break;
//     }
    
//     return 0;
// }