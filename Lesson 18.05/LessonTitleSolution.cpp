#include <iostream>
#include <string>

using namespace std;

struct University {
  explicit University(const string& new_value) {
    value = new_value;
  }
  string value;
};

struct Course {
  explicit Course(const string& new_value) {
    value = new_value;
  }
  string value;
};

struct Week {
  explicit Week(const string& new_value) {
    value = new_value;
  }
  string value;
};

struct LectureTitle {
  LectureTitle(const University& new_university,
               const Course& new_course,
               const Week& new_week) {
    university= new_university.value;
    course = new_course.value;
    week = new_week.value;
  }
  string university;
  string course;
  string week;
};