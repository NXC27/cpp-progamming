// /*
// Question 29:
// Define a base class Animal with a virtual function sound(). Create two derived 
// classes: Dog and Cat. Implement the sound() function in each derived class to 
// produce a specific sound (e.g., barking for Dog and meowing for Cat). Demonstrate 
// polymorphism by creating an array of pointers to the base class and assigning 
// objects of derived classes to it. Iterate through the array, calling the sound() 
// function for each object.
// */
// #include<iostream>
// using namespace std;

// class Animal
// {
//     public:
//     virtual void sound()
//     {
//         cout<<"Sound of animal"<<endl;
//     }
// };
// class Dog: public Animal
// {
//     public:
//     void sound()
//     {
//         cout<<"Dog's sound: baw baw"<<endl;
//     }
// };
// class Cat: public Animal
// {
//     public:
//     void sound()
//     {
//         cout<<"Cat's sound: meow meow"<<endl;
//     }
// };

// int main()
// {
//     // Animal *a1 = new Dog;
//     // Animal *a2 = new Cat;
//     Animal *a[] = {new Dog, new Cat};
//     for (int i=0; i<sizeof(a); i++)
//     {
//         a[i]->sound();
//     }
    
//     return 0;
// }