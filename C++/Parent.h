#pragma once

#include <iostream>


using namespace std;

// -- inherit from the interface
class Parent 
{
public: // -- methods (member functions)
  Parent();  // -- default constructor
  Parent(double x, double y);
  ~Parent(); // -- destructor 

  double getX();
  void setX(double x);
  double getY();
  void setY(double y);
  /* virtual */ void override();

private: 

public: // -- attributes (member variables)

private:
  double x, y;

};


