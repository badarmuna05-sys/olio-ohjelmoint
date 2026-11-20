#include <iostream>
#include <memory>

#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    cout << "===== CAR =====" << endl;
    car car;

    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);

    car.printData();

    cout << endl;

    cout << "===== RECTANGLE =====" << endl;
    Rectangle rect;

    rect.setWidth(5);
    rect.setHeight(3);

    cout << "Area: "
         << rect.getArea() << endl;

    cout <<"Circumference. "
         << rect.getCircum() << endl;

    cout << endl;

    cout << "===== STUDENT =====" << endl;
    unique_ptr<student> studentPtr(new student());

    studentPtr->setName("Muno");
    studentPtr->setStudentNumber(12345);
    studentPtr->setAverage(4.2);

    cout << "Name: "
         << studentPtr->getName() <<endl;

    cout << "Student number: "
         << studentPtr->getStudentNumber() << endl;

    cout << "Average: "
         << studentPtr->getAverage() << endl;

    return 0;
}
