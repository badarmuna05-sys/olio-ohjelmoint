#ifndef CHEF_H
#define CHEF_H
#include <string>

class Chef
{
private:
    std::string name;

public:
    Chef(std::string name);
    ~Chef();

    void makeSalad();
    void makeSoup();

protected:
    std::string getChefName();
};

#endif // CHEF_H
