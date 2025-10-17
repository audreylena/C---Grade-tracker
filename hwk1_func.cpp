#include <iostream>
#include "hwk1.h"
#include <iomanip>
using namespace std;

static float OneMean(const Student& s) {
    return (s.exam1 + s.exam2 + s.exam3) / 3.0f;
}

void Display(const Student* array, int count){
    if (count<=0){
       cout<<"No students registered"<<endl;
    }
       cout<<"ID        First name    Last name    Exam1    Exam2    Exam3    Mean"<<endl;
       cout<<"---------------------------------------------------------------"<<endl;
    for(int i=0; i<count;i++){
       cout << left<<setw(3)<< array[i].id<< " "
             << setw(15)<<array[i].first<< " "
             << setw(9)<< array[i].last << " "
             << right << setw(3)<<array[i].exam1<< " "
             << setw(10) <<array[i].exam2<<" "
             << setw(6)<<array[i].exam3<< " "
             << fixed<<setprecision(2)<<array[i].mean <<endl;
    }
}

bool Add(Student* array, int &count,int size){
     Student s;
     cout<<"Enter new student information: "<<endl;
     if (!(cin>> s.id>>s.first>>s.last>>s.exam1>>s.exam2>>s.exam3)){
        cout<<"invalid Characters"<<endl;
        cin.clear();
        cin.ignore(10000, '\n');
        return false;
     }

     else{
        s.mean = OneMean(s);
        array[count++] = s;
        cout<< "New student with id "<<s.id<<" was added"<<endl;
        return true;
     }
}
bool UpdateById(Student* array, int count, int id){

     for (int i=0; i<count; i++){
         if (array[i].id==id){
            cout<<"Enter new student info:"<<endl;
            if(!(cin>> array[i].id>>array[i].first>> array[i].last>>array[i].exam1
               >>array[i].exam2>>array[i].exam3)){
                cout<<"invalid"<<endl;
                cin.clear();
                cin.ignore(1000,'\n');
                return false;
             }

             array[i].mean=OneMean(array[i]);
             cout<<"Student's information with id "<<id<<"updated"<<endl;
             return true;
         }
     }
     cout<<"Student's information with id"<<id<<"updated"<<endl;
     return false;
}

void ComputeMeans(Student* array, int count) {
    for (int i = 0; i < count; ++i) {
        array[i].mean = OneMean(array[i]);
    }
}

float Mean(Student* array, int count){
     if(count<=0){
       return 0.0f;
     }
     float studMean;
     for(int i=0; i<count;i++){

     array[i].mean= (array[i].exam1+array[i].exam2+array[i].exam3)/3.0;
     studMean=array[i].mean;
    }
return studMean ;
}

float minMean(Student* array, int count){
      float meanMin= array[0].mean;
      for(int i=1; i<count; i++){
         if (array[i].mean< meanMin){
            meanMin= array[i].mean;
         }
      }
 return meanMin;
}


float maxMean(Student* array, int count){
      float meanMax= array[0].mean;
      for(int i=0; i<count; i++){
         if (array[i].mean> meanMax){
             meanMax= array[i].mean;
         }
      }
 return meanMax;
}
