#include <iostream>
#include <string>
#include "hwk1.h"
using namespace std;



int main(){



   cout<<"+------------------------------------------------+"<<endl;
   cout<<"                                                 "<<endl;
   cout<<"                                                 "<<endl;
   cout<<"|        Computer Science and Engineering        |"<<endl;
   cout<<"                                                  "<<endl;
   cout<<"|     CSCE 10140 - Computer Science II           |"<<endl;
   cout<<"                                                  "<<endl;
   cout<<"|   Audrey Asu      ala0371   ala0371@my.unt.edu |"<<endl;
   cout<<"                                                  "<<endl;
   cout<<"+------------------------------------------------+"<<endl;


   int size=25;

   Student* student = new Student[size];



   int count=0;
   while (true) {
            cout
            << "*********************  Menu *****************************\n"
            << "| 1. Display a list of students' information            |\n"
            << "  2. Add student information                             \n"
            << "| 3. Update existing student's information              |\n"
            << "  4. Compute the mean of list of student exams           \n"
            << "| 5. Compute the minimum of the mean of the exams       |\n" 
            << "  6. Compute the maximum of the mean of the exams        \n"
            << "| 7. Exit program                                       |\n"
            << "*********************************************************\n"
            << "Choice: ";

      int option;
        if (!(cin >> option)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input.\n";
            continue;
        }

      if (option==1){
          if(count<=0){ cout<<"Empty list of students."<<endl;}
          else{ Display(student, count);}
      }
      else if (option==2){
              if(count<=0){ cout<<"Empty list of students."<<endl;}

              Add(student,count,size);
      }
      else if (option==3){
              if(count<=0){ cout<<"Empty list of students."<<endl;}

              else{
              int idpicked;
              cout<<"Please enter student id: "<<endl;
              cin>>idpicked;
              UpdateById(student,count,idpicked);
              }
      }
      else if (option==4){
              if(count<=0){ cout<<"Empty list of students."<<endl;}
              else{
              cout<<"Mean:"<<Mean(student,count)<<endl;
              }
      }
      else if (option==5){
              if(count<=0){ cout<<"Empty list of students."<<endl;}
              else{
               cout<<"Minimum mean: "<<minMean(student,count)<<endl;
              }
      }
      else if (option==6){
              if(count<=0){ cout<<"Empty list of students."<<endl;}
              else{
                cout<<"maximum mean: "<<maxMean(student,count)<<endl;
                }

      }
      else if (option==7){
              if(count<=0){ cout<<"Empty list of students."<<endl;}
              else{
              cout<<"Thank you for using this program. Goodbye!"<<endl;
              delete[] student;
              return 0;
              }
      }
      else{
      cout<<"invalid"<<endl;

      }

   }














    return 0;
}
