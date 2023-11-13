#include <iostream>
#include "Child.h"

using namespace std;


Child::Child () : Parent()
{
  this->u = 10.0;
  this->v = 10.0;
}


Child::Child (double u, double v) : Parent(u + 10, v + 10)
{
  this->u = u;
  this->v = v;
}

Child::~Child()
{

}

double Child::getU()
{
  return u;
}

void Child::setU(double u)
{
  this->u = u;
}

double Child::getV()
{
  return v;
}

void Child::setV(double v)
{
  this->v = v;
}

void Child::override ()
{
  std::cout << "override in Child" << std::endl;
}



