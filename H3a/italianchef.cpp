#include "italianchef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(string name)
    : Chef(name)
{
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << getChefName()
         << " destruktori" << endl;
}

void ItalianChef::makePasta()
{
    cout << "ItalianChef "
         << getChefName()
         << " makes pasta" << endl;
}

string ItalianChef::getName()
{
    return getChefName();
}
