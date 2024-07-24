// /*
// Question 1:
// Write a program to check whether the given number is palindrome or not. 
// Make use of pure C++ standard I/O functions and header. 
// */
// #include <iostream>
// using namespace std;

// string isPalindrome(int num)
// {
//     int rev = 0;
//     int tmp = num;
//     while(tmp != 0)
//     {
//         rev = rev*10 + tmp%10;
//         tmp /= 10;
//     }
    
//     if (rev == num)
//     {
//         return "the given number is palindrome";
//     }
//     else
//     {
//         return "the given number is not palindrome";
//     }
// }

// int main()
// {
//     int number;
//     cout<<"Enter a number: "<<endl;
//     cin>>number;
//     cout<<isPalindrome(number)<<endl;
    
//     return 0;
// }