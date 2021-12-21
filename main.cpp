#include <iostream>
#include "Student.h"
#include "StudentFirstSession.h"
#include "StudentSecondSession.h"

int main() {
  int arr[5] = {1,2,3,4,5};
  vector<StudentSecondSession*> students;
  StudentSecondSession s("Vasya",4,364724732,32,arr);
  students.push_back(&s);
  std::cout<< getAvarageFromUniversity(students);
  std::cout<<s.getAverageMark();
  return 0;
}
