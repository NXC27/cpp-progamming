// /*
// Question 14:
// We have a class of students. 4 students are there. Our program is calculating 
// the students exam scores. Our class should have a method which will get the score 
// value from user for each student and throw an exception if the score is below 50%, 
// throw an exception if any value over than 100 or less than zero is entered. 
// Exception should be thrown when any alphabet is entered. Our handler should report 
// each exception case. And report the students name, roll and score for each case.
// */

// #include<iostream>
// using namespace std;

// class Student
// {
//     private:
//     int rolll_no;
//     string name;
//     int score;
//     public:
//     //constructor
//     Student(int rn, string n, int sc)
//     {
//         rolll_no = rn;
//         name = n;
//         score = sc;
//     }
//     void set_score()
//     {
//         cout<<"enter "<<name<<"'s score: ";
//         cin>>score;
//     }
//     int get_score()
//     {
//         return score;
//     }
//     void disp()
//     {
//         cout<<"### Student Detail"<<endl;
//         cout<<"roll number: "<<rolll_no<<endl;
//         cout<<"name: "<<name<<endl;
//         cout<<"score: "<<score<<endl;
//     }
// };

// int main()
// {
//     Student s1(1, "Jack", 50);
//     Student s2(2, "John", 50);
//     Student s3(1, "James", 50);
//     Student s4(1, "Janna", 50);
//     Student *cptr;
    
//     for (int i =0; i <4; i++)
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
//             cptr->set_score();
//             if (cptr->get_score()<0)
//             {
//                 throw 0;
//             }
//             if (cptr->get_score()<50)
//             {
//                 throw 50;
//             }
//             if (cptr->get_score()>100)
//             {
//                 throw 100;
//             }
//         }
//         catch (int e)
//         {
//             if (e == 0)
//             {
//                 cout<<"score is less than 0%"<<endl;
//             }
//             if (e == 50)
//             {
//                 cout<<"score is less than 50%"<<endl;
//             }
//             if (e == 100)
//             {
//                 cout<<"score is greater than 100%"<<endl;
//             }
//             cptr->disp();
//         }
//     }
    
//     return 0;
// }