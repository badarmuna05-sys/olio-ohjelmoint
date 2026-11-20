#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;

class student
{
private:
    string name;
    int studentNumber;
    double average;

public:
    student();

    void setName(string n);
    void setStudentNumber(int sn);
    void setAverage(double avg);

    string getName();
    int getStudentNumber();
    double getAverage();
};

#endif // STUDENT_H
