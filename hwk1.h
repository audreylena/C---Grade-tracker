
#ifndef HWK1_H
#define HWK1_H
#include <string>

//Student Structure
struct Student{
          int id;
          std::string first;
          std::string last;
          int exam1;
          int exam2;
          int exam3;
          float mean;

};


//Functions that alter the array 
void Display(const Student* array,int count);
bool Add(Student* array, int &count, int size);
bool UpdateById(Student* array, int count,int id);

//Funtions that perform calculations
float Mean(Student* array, int count);
float minMean(Student* array, int count);
float maxMean(Student* array, int count);



#endif
