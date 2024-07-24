// /*
// Question 6:
// Create a class called "Circle" to represent a circle shape. 
// The class should have a private member variable for the radius (double).
// The class should provide the following public member functions:
// A constructor that initializes the radius.
// - double calculateArea(): Calculates and returns the area of the circle.
// - double calculateCircumference(): Calculates and returns the circumference of the circle.
// - void displayCircleDetails(): Displays the radius, area, and circumference of the circle.

// Write a program that demonstrates the usage of the Circle class. 
// Create objects of the class, input the radius of the circles, calculate the area and 
// circumference, and display the circle details.
// */

// #include<iostream>
// using namespace std;

// class Circle
// {
//     private:
//     double radius;
//     public:
//     //constructor
//     Circle(double rad):radius(rad){};
//     double calculateArea()
//     {
//         return 3.14*radius*radius;
//     }
//     double calculateCircumference()
//     {
//         return 2*3.14*radius;
//     }
//     void displayCircleDetails()
//     {
//         cout<<"   Circle Detail"<<endl;
//         cout<<"Radius: "<<radius<<endl;
//         cout<<"Area: "<<calculateArea()<<endl;
//         cout<<"Circumference: "<<calculateCircumference()<<endl;
//     }
// };

// int main()
// {
//     Circle c(2.1);
//     c.displayCircleDetails();
// }