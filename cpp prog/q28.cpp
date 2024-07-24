// /*
// Question 28:
// Create a base class Shape with two private data members: width and height. 
// Implement a constructor to initialize these values and a function display () to 
// print the width and height. Derive two classes Rectangle and Triangle from Shape. 
// Each derived class should have a specific function to calculate its area.
// */
// #include<iostream>
// using namespace std;

// class Shape
// {
//     private:
//     int width;
//     int height;
//     public:
//     //constructor
//     Shape(int w, int h)
//     {
//         width = w;
//         height = h;
//     }
//     //set_width set_height
//     void set_width(int w)
//     {
//         width = w;
//     }
//     void set_height(int h)
//     {
//         height = h;
//     }
//     //get_width get_height
//     int get_width()
//     {
//         return width;
//     }
//     int get_height()
//     {
//         return height;
//     }
//     void display()
//     {
//         cout<<"Width: "<<width<<endl;
//         cout<<"Height: "<<height<<endl;
//     }
// };
// class Rectangle: public Shape
// {
//     public:
//     Rectangle(int width, int height):Shape(width, height)
//     {
        
//     }
//     int area()
//     {
//         return get_width()*get_height();
//     }
// };
// class Triangle: public Shape
// {
//     public:
//     Triangle(int width, int height):Shape(width, height)
//     {
        
//     }
//     int area()
//     {
//         return get_width()*get_height()/2;
//     }
// };

// int main()
// {
//     Rectangle rec(10,20);
//     Triangle tr(10,20);
    
//     rec.display();
//     cout<<"Area of Rectangle = "<<rec.area()<<endl;

//     tr.display();
//     cout<<"Area of Triangle = "<<tr.area()<<endl;
    
//     return 0;
// }