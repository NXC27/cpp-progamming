// /*
// Question 9:

// Create a class of vehicles having the following properties, Wheels and Engine. 
// Now a separate class of vehicles named Motorcycles will be created which 
// have 2 wheels and 100 cc engine. A class of vehicles called cars will 
// have 4 wheels and 1000cc engine.

// The number of wheels and size of engine should be set at the time of object 
// creation. Please create the base vehicle class and these two inheriting classes 
// motorcycles and cars. 

// The inheriting classes should set all the values at the time of creation, also 
// print them in a legible and aesthetic manner.
// */
// #include<iostream>
// using namespace std;

// class Vehicles
// {
//     public:
//     int wheels;
//     int engine;
// };

// class Motorcycles: public Vehicles
// {
//     public:
//     Motorcycles(int a, int b)
//     {
//         wheels = a;
//         engine = b;
//         displayInfomation();
//     }
//     void displayInfomation()
//     {
//         cout<<"Number of wheels: "<<wheels<<endl;
//         cout<<"Engine power: "<<engine<<"cc"<<endl;
//     }
// };

// class Cars: public Vehicles
// {
//     public:
//     Cars(int a, int b)
//     {
//         wheels = a;
//         engine = b;
//         displayInfomation();
//     }
//     void displayInfomation()
//     {
//         cout<<"Number of wheels: "<<wheels<<endl;
//         cout<<"Engine power: "<<engine<<"cc"<<endl;
//     }
// };

// int main()
// {
//     cout<<"# Infomation of Motorcycles #"<<endl;
//     Motorcycles m(2, 100);
//     cout<<"# Infomation of Cars #"<<endl;
//     Cars c(4, 1000);
// }