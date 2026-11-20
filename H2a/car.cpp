#include "car.h"
#include <iostream>

using namespace std;

void car::setBrand(string b)
{
    brand = b;
}

void car::setModel(string m)
{
    model = m;
}

void car::setYearModel(int y)
{
    yearModel = y;
}

void car::printData()
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << yearModel << endl;
}
car::car() {}
