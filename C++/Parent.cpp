#include <iostream>
#include "Parent.h"

using namespace std;


Parent::Parent ()
{
  this->x = 0.0;
  this->y = 0.0;
}


Parent::Parent (double x, double y)
{
  this->x = x;
  this->y = y;
}

Parent::~Parent()
{

}

double Parent::getX()
{
  return x;
}

void Parent::setX(double x)
{
  this->x = x;
}

double Parent::getY()
{
  return y;
}

void Parent::setY(double y)
{
  this->y = y;
}

void Parent::override ()
{
  std::cout << "override in Parent" << std::endl;
}



