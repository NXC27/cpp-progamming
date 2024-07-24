// /*
// Question 3:
// Write a C++ program to find the average score of the 
// student, use class and get the inputs from the users
// */
// #include<iostream>
// using namespace std;

// class Student
// {
//     int score[5];
//     int num;
//     float avg = 0;
//     public:
//     void getScore()
//     {
//         cout<<"How many scores do you wanna enter: ";
//         cin>>num;
//         cout<<"Enter "<<num<<" recent scores"<<endl;
//         for (int i = 0; i < num; i++)
//         {
//             cin>>score[i];
//         }
//     }
//     void calcAverage()
//     {
//         for (int i = 0; i < num; i++)
//         {
//             avg += score[i];
//         }
//         avg/=num;
//         cout<<"The average score = "<<avg<<endl;
//     }
//     void dispScore()
//     {
//         cout<<"All recent scores"<<endl;
//         for (int i = 0; i < num; i++)
//         {
//             cout<<score[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main()
// {
//     Student student;
//     student.getScore();
//     student.dispScore();
//     student.calcAverage();
//     return 0;
// }
