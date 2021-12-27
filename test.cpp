#include "gtest/gtest.h"

#include "Student.h"

#include "StudentFirstSession.h"

#include "StudentSecondSession.h"

TEST(Student, GetAverage1){
  Student s ("Galya", 1, 2, 24629 );
  ASSERT_EQ(s.getAverageMark(), 0);
}

TEST(Student, GetAverage2){
  Student s ("Galya", 232, 2, 232 );
  ASSERT_EQ(s.getAverageMark(), 0);
}

TEST(Student, GetAverage3){
  Student s ("Galya", 32, 32457385783, 244292 );
  ASSERT_EQ(s.getAverageMark(), 0);
}

TEST(StudentFirstSession, GetAverage1){
  int arr[5] = {1,2,3,4,5};
  StudentFirstSession s ("Galya", 32, 32457385783, 244292, arr);
  ASSERT_EQ(s.getAverageMark(), 3);
}

TEST(StudentFirstSession, GetAverage2){
  int arr[5] = {0,0,0,0,0};
  StudentFirstSession s ("Galya", 32, 32457385783, 244292, arr);
  ASSERT_EQ(s.getAverageMark(), 0);
}

TEST(StudentFirstSession, GetAverage3){
  int arr[5] = {1,4,5,6,2};
  StudentFirstSession s ("Galya", 32, 32457385783, 244292, arr);
  ASSERT_EQ(s.getAverageMark(), 3.6);
}

TEST(StudentSecondSession, GetAverage1){
  int arr[6] = {1,2,3,4,5,6};
  StudentSecondSession s ("Galya", 32, 32457385783, 244292, arr);
  ASSERT_EQ(s.getAverageMark(), 3.5);
}

TEST(StudentSecondSession, GetAverage2){
  int arr[6] = {0,0,0,0,0,0};
  StudentSecondSession s ("Galya", 32, 32457385783, 244292, arr);
  ASSERT_EQ(s.getAverageMark(), 0);
}

TEST(StudentSecondSession, GetAverage3){
  int arr[6] = {1,4,5,6,2,0};
  StudentSecondSession s ("Galya", 32, 32457385783, 244292, arr);
  ASSERT_EQ(s.getAverageMark(), 3);
}


TEST(Student, GetAverageFromUniversity){
  int arr[6] = {1,4,5,6,2,0};
  vector<Student*> university;
  StudentSecondSession s1 ("Galya", 32, 32457385783, 244292, arr);
  StudentSecondSession s2 ("Galya", 32, 32457385783, 244292, arr);
  StudentSecondSession s3 ("Galya", 32, 32457385783, 244292, arr);
  StudentSecondSession s4 ("Galya", 32, 32457385783, 244292, arr);
  StudentSecondSession s5 ("Galya", 32, 32457385783, 244292, arr);
  university.push_back(&s1);
  university.push_back(&s2);
  university.push_back(&s3);
  university.push_back(&s4);
  university.push_back(&s5);
  ASSERT_EQ(university.getAverageFromUniversity(), 3);
}







