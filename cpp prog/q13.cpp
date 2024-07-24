// /*
// Question 13:
// Devise a class to manage 4 students with name, roll no and performance index pi. 
// Pi is a private variable of the student class. Our routine should inspect each 
// students pi and if any pi is below 50% then an exception should be thrown and 
// the handler should report the students name and roll number along with the pi value.
// */

// #include<iostream>
// using namespace std;

// class Student
// {
//     public:
//     string name;
//     int roll_no;
//     int pi;
//     //constructor
//     Student(int r, string n, int p)
//     {
//         roll_no = r;
//         name = n;
//         pi = p;
//     }
//     void disp()
//     {
//         cout<<"Student Details"<<endl;
//         cout<<"name: "<<name<<endl;
//         cout<<"roll number: "<<roll_no<<endl;
//         cout<<"performance index: "<<pi<<endl;
//     }
// };

// int main()
// {
//     Student s1(1, "Jack", 60);
//     Student s2(2, "John", 40);
//     Student s3(3, "James", 30);
//     Student s4(4, "Janna", 70);
//     Student *cptr;
    
//     for (int i = 0; i < 4; i++)
//     {
//         switch(i)
//         {
//             case 0: cptr = &s1;
//                 break;
//             case 1: cptr = &s2;
//                 break;
//             case 2: cptr = &s3;
//                 break;
//             case 3: cptr = &s4;
//                 break;
//         }
//         try
//         {
//             if (cptr->pi < 50)
//             {
//                 throw 0;
//             }
//         }
//         catch (int e)
//         {
//             cout<<"!!! Student has PI lower then 50%"<<endl;
//             cptr->disp();
//             cout<<endl;
//         }
//     }
//     return 0;
// }