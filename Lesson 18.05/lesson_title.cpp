//Дано:
struct LessonTitle
{
    string university;
    string course;
    string week;
};
//Допишите конструктор и структуры University,
//Course, Week так, чтобы объект LessonTitle можно было создать с помощью кода:

LessonTitle title(
    University("BMSTU"),
    Course("C++"),
    Week("4th")
    );
//Но нельзя:
LectureTitle title("BMSTU", "C++", "4th");
LessonTitle title(string("BMSTU"), string("C++"), string("4th"));
LessonTitle title = {"BMSTU", "C++", "4th"};
LessonTitle title = {{"BMSTU"}, {"C++"}, {"4th"}};
LessonTitle title(
    Course("C++"),
    University("BMSTU"),
    Week("4th")
    );
