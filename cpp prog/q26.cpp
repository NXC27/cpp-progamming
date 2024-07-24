// /*
// Question 26:
// We have a class of students. With name and roll no. Please create a base class 
// to hold the details of any number of students. The program should ask the user 
// for the number of students and the student details. The program should use the 
// vector container to keep all student information and iterate through them one by 
// one printing all the student details in a legible and orderly manner.
// */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// class Student
// {
//     private:
//     string name;
//     int roll_no;
//     public:
//     void get_info()
//     {
//         cout<<"name: ";
//         cin>>name;
//         cout<<"roll number: ";
//         cin>>roll_no;
//     }
//     void disp()
//     {
//         cout<<"name: "<<name<<endl;
//         cout<<"roll number: "<<roll_no<<endl;
//     }
// };

// int main()
// {
//     vector<Student> v;
//     vector<Student>::iterator i;
//     Student s;
//     int n;
    
//     cout<<"Number of student: ";
//     cin>>n;
//     for (int i=0; i<n; i++)
//     {
//         cout<<"  Student "<<(i+1)<<endl;
//         s.get_info();
//         v.push_back(s);
//     }
//     cout<<"### All students ###"<<endl;
//     i = v.begin();
//     while(i != v.end())
//     {
//         (*i).disp();
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }