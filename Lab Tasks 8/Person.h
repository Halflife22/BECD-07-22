#pragma once

#include <string>

using namespace std;

class Person

   {  

public:

Person();

Person(float newweight);

~Person();

//Overload the add operator

float operator + (const Person& otherPerson);

private:

float mWeight;

string FirstName;

int mMge;

};