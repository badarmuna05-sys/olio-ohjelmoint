#include "student.h"

student::student() {}

void student::setName(string n)
{
    name = n;
}

void student::setStudentNumber(int sn)
{
    studentNumber = sn;
}

void student::setAverage(double avg)
{
    average = avg;
}

string student::getName()
{
    return name;
}

int student::getStudentNumber()
{
    return studentNumber;
}

double student::getAverage()
{
    return average;
}

