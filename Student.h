#ifndef GOOGLE_TESTS__STUDENT_H_
#define GOOGLE_TESTS__STUDENT_H_

#include <string>
#include <vector>

using namespace std;

int* copyArray (const int* &from, const int size);

class Student {

 protected:
  char* name;
  int group;
  int course;
  string id;
  int recordBookNumber;

 public:

  Student(char* nameF, const int courseF, const int recordBookNumberF, const int groupF);

  Student(const Student &old);

  ~Student() = default;

  char* getName() const;

  string getId() const;

  int getRecordBookNumber() const;

  int getCourse() const;

  int getGroup() const;

  void setName(char* newName);

  void setCourse(int newCourse);

  void setGroup(int newGroup);

  void getMarks();

  friend std::ostream &operator<<(std::ostream &out, const Student &Student);

  virtual double getAverageMark(){
    return 0;
  }
};

double getAvarageFromGroup(vector<Student*> group, int number);

double getAvarageFromUniversity(vector<struct StudentSecondSession *> group);

#endif //GOOGLE_TESTS__STUDENT_H_
