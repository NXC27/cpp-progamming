// /*
// Question 30:
// Create a base class Vehicle with a virtual function displayInfo(). Derive two 
// classes: Car and Bike. Each derived class should have a constructor to initialize 
// its attributes and override the displayInfo() function to print specific information 
// about the vehicle. Use dynamic memory allocation to create an array of pointers 
// to the base class. Allow the user to input information for each vehicle, allocate 
// memory, and then display the information using the displayInfo() function.
// */

// #include<iostream>
// using namespace std;

// class Vehicle
// {
//     public:
//     virtual void displayInfo()
//     {
//         cout<<"Vehicle information"<<endl;
//     }
// };
// class Car: public Vehicle
// {
//     private:
//     string brand;
//     int price;
//     public:
//     Car(string b, int p)
//     {
//         brand = b;
//         price = p;
//     }
//     void displayInfo() override
//     {
//         cout<<"Car Information"<<endl;
//         cout<<"Brand: "<<brand<<endl;
//         cout<<"Price: "<<price<<endl;
//     }
// };
// class Bike: public Vehicle
// {
//     private:
//     string brand;
//     int price;
//     public:
//     Bike(string b, int p)
//     {
//         brand = b;
//         price = p;
//     }
//     void displayInfo() override
//     {
//         cout<<"Bike Information"<<endl;
//         cout<<"Brand: "<<brand<<endl;
//         cout<<"Price: "<<price<<endl;
//     }
// };
// int main()
// {
//     int num;
//     int sel;
//     string brand;
//     int price;
//     cout<<"Enter number of vehicle: ";
//     cin>>num;
    
//     // int *ptr = new int[20];
//     Vehicle* *vptr = new Vehicle*[num];
    
//     cout<<"Fill in information"<<endl;
    
//     for (int i=0; i<num; i++)
//     {
//         do
//         {
//             cout<<"1. Select car\n"
//                 <<"2. Select bike\n"
//                 <<"Choice: ";
//             cin>>sel;
//         } while (sel<1 && sel>2);
//         switch(sel)
//         {
//             case 1:
//                 cout<<"Car brand: ";
//                 cin>>brand;
//                 cout<<"Car price: ";
//                 cin>>price;
//                 vptr[i] = new Car(brand, price);
//                 break;
//             case 2:
//                 cout<<"Bike brand: ";
//                 cin>>brand;
//                 cout<<"Bike price: ";
//                 cin>>price;
//                 vptr[i] = new Bike(brand, price);
//                 break;
//             default:
//                 cout<<"Error | No choice"<<endl;
//                 break;
//         }
//     }
//     //displayInfo
//     cout<<"###  All Vehicles Information"<<endl;
//     for (int i=0; i<num; i++)
//     {
//         vptr[i]->displayInfo();
//     }
//     //deallocate memory
//     delete[] vptr;
    
//     return 0;
// }