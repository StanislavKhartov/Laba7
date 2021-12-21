#ifndef GOOGLE_TESTS__STUDENTA_H_
#define GOOGLE_TESTS__STUDENTA_H_

#define SIZE 5

#include "Student.h"

class StudentSecondSession : public Student {
 private:
  StudentSecondSession(char *nameF,
                      const int courseF,
                      const int recordBookNumberF,
                      const int groupF,
                      int **marksF);
  int marks[SIZE];
 public:

  StudentSecondSession(char *nameF,
                      const int courseF,
                      const int recordBookNumberF,
                      const int groupF,
                      int marks[]);

  StudentSecondSession(StudentSecondSession &old);

  int *getMarks();

  void setMarks(const int from[]);

  friend std::ostream& operator<< (std::ostream &out, const StudentSecondSession &Student);

  double getAverageMark();

  double getAvarageFromGroup(vector<StudentSecondSession*> group, int number);

  double getAvarageFromUniversity(vector<StudentSecondSession*> group);
};

#endif //GOOGLE_TESTS__STUDENTA_H_
