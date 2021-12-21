#include "StudentSecondSession.h"

#define SIZE 5

StudentSecondSession::StudentSecondSession(char *nameF,
                                           const int courseF,
                                           const int recordBookNumberF,
                                           const int groupF,
                                           int marksF[SIZE])
    : Student(nameF, courseF, recordBookNumberF, groupF) {
  for (int i = 0; i < SIZE; i++) {
    marks[i] = marksF[i];
  }
}

StudentSecondSession::StudentSecondSession(StudentSecondSession &old)
    : Student(old) {
  name = old.name;
  course = old.course;
  recordBookNumber = old.recordBookNumber;
  group = old.group;
  id = old.id;

}

int *StudentSecondSession::getMarks() {
  int answer[SIZE];
  for (int i = 0; i < SIZE; i++) {
    answer[i] = marks[i];
  }
  return answer;
}

void StudentSecondSession::setMarks(const int from[]) {
  for (int i = 0; i < SIZE; i++) {
    marks[i] = from[i];
  }
}

std::ostream &operator<<(std::ostream &out, const StudentSecondSession &Student) {
  out << string("Name: ") << string(Student.name) << string(" Group: ") << to_string(Student.group);
  out << string(" Course: ") << to_string(Student.course) << string(" Recordbook Number: ")
      << to_string(Student.recordBookNumber);
  out << string("Marks: ");
  for (int i = 0; i < SIZE; i++) {
    out << to_string(Student.marks[i]) << string(" ");
  }
  return out;
}

double StudentSecondSession::getAverageMark(){
  double answer;
  for(int i = 0; i<SIZE;i++){
    answer+=double(marks[i]);
  }
  return answer/SIZE;
}

double getAvarageFromGroup(vector<StudentSecondSession*> group, int number) {
  double answer;
  for (int i = 0; i < group.size(); ++i) {
    if (group[i]->getGroup() == number) {
      answer += group[i]->getAverageMark();
    }
  }
  return answer / group.size();
}

double getAvarageFromUniversity(vector<StudentSecondSession*> group){
  double answer;
  for (int i = 0; i < group.size(); ++i) {
    answer += group[i]->getAverageMark();
  }
  return answer / group.size();
}
