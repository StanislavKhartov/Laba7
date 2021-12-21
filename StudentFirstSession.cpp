#include "StudentFirstSession.h"

#define SIZE 4

using namespace std;

StudentFirstSession::StudentFirstSession(char *nameF,
                                         const int courseF,
                                         const int recordBookNumberF,
                                         const int groupF,
                                         int marksF[SIZE])
    : Student(nameF, courseF, recordBookNumberF, groupF) {
  for (int i = 0; i < SIZE; i++) {
    marks[i] = marksF[i];
  }
}

StudentFirstSession::StudentFirstSession(StudentFirstSession &old)
    : Student(old) {
  name = old.name;
  course = old.course;
  recordBookNumber = old.recordBookNumber;
  group = old.group;
  id = old.id;

}

int *StudentFirstSession::getMarks() {
  int answer[SIZE];
  for (int i = 0; i < SIZE; i++) {
    answer[i] = marks[i];
  }
  return answer;
}

void StudentFirstSession::setMarks(const int from[]) {
  for (int i = 0; i < SIZE; i++) {
    marks[i] = from[i];
  }
}

std::ostream &operator<<(std::ostream &out, const StudentFirstSession &Student) {
  out << string("Name: ") << string(Student.name) << string(" Group: ") << to_string(Student.group);
  out << string(" Course: ") << to_string(Student.course) << string(" Recordbook Number: ")
      << to_string(Student.recordBookNumber);
  out << string("Marks: ");
  for (int i = 0; i < SIZE; i++) {
    out << to_string(Student.marks[i]) << string(" ");
  }
  return out;
}

double StudentFirstSession::getAverageMark(){
  double answer;
  for(int i = 0; i<SIZE;i++){
    answer+=double(marks[i]);
  }
  return answer/SIZE;
}

double getAvarageFromGroup(vector<StudentFirstSession*> group, int number) {
  double answer;
  for (int i = 0; i < group.size(); ++i) {
    if (group[i]->getGroup() == number) {
      answer += group[i]->getAverageMark();
    }
  }
  return answer / group.size();
}

double getAvarageFromUniversity(vector<StudentFirstSession*> group){
  double answer;
  for (int i = 0; i < group.size(); ++i) {
    answer += group[i]->getAverageMark();
  }
  return answer / group.size();
}