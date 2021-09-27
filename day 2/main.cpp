//Creating a pointer to this structure and dynamically allocating a memory for this structure. 
//Taking input to the members of the structure by using the pointer and displaying the details.

#include<bits/stdc++.h>
using namespace std;

struct Student{
    int roll;                            //struct 
        float marks;
        };
int main(){
    Student* ptr = new Student;                               
                                                                       // driven code
                                                                           cout<<"\n Enter the Enrollment Number: ";
                                                                               cin>>(*ptr).roll;  //(*ptr).roll is same as ptr->roll
                                                                                   cout<<" Enter the Marks: ";
                                                                                       cin>>(*ptr).marks;
    cout<<"\n Details Display \n";
        cout<<"\n Enrollment Number: "<<(*ptr).roll<<endl<<" Marks: "<<(*ptr).marks;
    delete ptr;
        return 0; 
        }