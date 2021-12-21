#ifndef GOOGLE_TESTS__STUDENTFIRSTSESSION_H_
#define GOOGLE_TESTS__STUDENTFIRSTSESSION_H_

#include "Student.h"

#define SIZE 4

class StudentFirstSession : public Student {
 private:
  StudentFirstSession(char *nameF,
                      const int courseF,
                      const int recordBookNumberF,
                      const int groupF,
                      int **marksF);
  int marks[SIZE];
 public:

  StudentFirstSession(char *nameF,
                      const int courseF,
                      const int recordBookNumberF,
                      const int groupF,
                      int marks[]);

  StudentFirstSession(StudentFirstSession &old);

  int *getMarks();

  void setMarks(const int from[]);

  friend std::ostream &operator<<(std::ostream &out, const StudentFirstSession &Student);

  double getAverageMark();

  double getAvarageFromGroup(vector<StudentFirstSession*> group, int number);

  double getAvarageFromUniversity(vector<StudentFirstSession*> group);

};

#endif //GOOGLE_TESTS__STUDENTFIRSTSESSION_H_
