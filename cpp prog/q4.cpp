// /*
// Question 4:
// Write a C++ class called "Rectangle" that has private member variables
// for length and width. Include member functions to set the length and width, 
// calculate the area and perimeter, and display the details of the rectangle.
// */

// #include<iostream>
// using namespace std;

// class Rectangle
// {
//     private:
//     int length, width;
//     public:
//     //constructor
//     Rectangle(int a, int b)
//     {
//         length = a;
//         width = b;
//     }
//     int calcArea()
//     {
//         return length*width;
//     }
//     int calcPerimeter()
//     {
//         return 2*(length+width);
//     }
//     void detailRectangle()
//     {
//         cout<<"=== Detail of Rectangle ==="<<endl;
//         cout<<"length = "<<length<<endl;
//         cout<<"width = "<<width<<endl;
//         cout<<"Area = "<<calcArea()<<endl;
//         cout<<"Perimeter = "<<calcPerimeter()<<endl;
//     }
// };

// int main()
// {
//     Rectangle rect(2,3);
//     rect.detailRectangle();
//     return 0;
// }