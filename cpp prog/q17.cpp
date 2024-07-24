// /*
// Question 17:
// We have a sequence of data coming over a port. The method to get the data is 
// //================================
// @brief: Rdata returns the port data.

// Input: char* data , A data array pointer is supplied.

// Output: an integer number signifying the number of data bytes available.
// //================================

// int Rdata(char* data) ;

// Write a program which will allot a new array separate from the supplied pointer 
// dynamically from the number of bytes (using keyword new) and copy the bytes 
// from *data to our newly created array.
// */

// #include<iostream>
// using namespace std;

// char arr[100];

// int Rdata(char *data)
// {
//     int i = 0;
//     while (*data)
//     {
//         arr[i] = *data;
//         data++;
//         i++;
//     }
//     return i;
// }

// int main()
// {
//     char a[100] = "NguyenXuanChu";
//     int byt = Rdata(a);
//     // int byt = Rdata((char *)"NguyenXuanChu");
//     cout<<"byte = "<<byt<<endl;
//     char *cp = new char[byt];
//     //write data from array to dynamic memory
//     for (int i=0; i < byt; i++)
//     {
//         *(cp+i) = arr[i];
//     }
//     cout<<"All value in dynamic memory"<<endl;
//     for (int i=0; i < byt; i++)
//     {
//         cout<<*(cp+i);
//     }
    
//     return 0;
// }