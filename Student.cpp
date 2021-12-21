#include "Student.h"

#include <string>

using namespace std;

int *copyArray(const int *from, const int size) {
  int newArr[size];
  for (int i = 0; i < size; i++) {
    newArr[i] = from[i];
  }
  return newArr;
}

Student::Student(char *nameF, const int courseF, const int recordBookNumberF, const int groupF) {
  name = nameF;
  course = courseF;
  recordBookNumber = recordBookNumberF;
  string str = nameF;
  group = groupF;
  id = id + to_string(recordBookNumberF) + '-' + str + '-' + to_string(recordBookNumberF);
}

Student::Student(const Student &old) {
  name = old.name;
  course = old.course;
  id = old.id;
  recordBookNumber = old.recordBookNumber;
  group = old.group;
}

char *Student::getName() const {
  return name;
}

string Student::getId() const {
  return id;
}

int Student::getRecordBookNumber() const {
  return recordBookNumber;
}

int Student::getCourse() const {
  return course;
}

int Student::getGroup() const {
  return group;
}
void Student::setName(char *newName) {
  name = newName;
}

void Student::setCourse(int newCourse) {
  course = newCourse;
}

void Student::setGroup(int newGroup) {
  group = newGroup;
}

std::ostream &operator<<(std::ostream &out, const Student &Student) {
  out << string("Name: ") << string(Student.name) << string(" Group: ") << to_string(Student.group);
  out << string(" Course: ") << to_string(Student.course) << string(" Recordbook Number: ")
      << to_string(Student.recordBookNumber);
  return out;
}

double getAvarageFromGroup(vector<Student> group, int number) {
  double answer;
  for (int i = 0; i < group.size(); ++i) {
    if (group[i].getGroup() == number) {
      answer += group[i].getAverageMark();
    }
  }
  return answer / group.size();
}

double getAvarageFromUniversity(vector<Student> group){
  double answer;
  for (int i = 0; i < group.size(); ++i) {
      answer += group[i].getAverageMark();
    }
  return answer / group.size();
}

