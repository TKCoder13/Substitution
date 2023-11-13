#pragma once

#include <iostream>

#include "Parent.h"

using namespace std;

// -- inherit from the interface
class Child : public Parent
{
public: // -- methods (member functions)
  Child();  // -- default constructor
  Child(double u, double v);
  ~Child(); // -- destructor 

  double getU();
  void setU(double u);
  double getV();
  void setV(double v);
  void override();

private: 

public: // -- attributes (member variables)

private:
  double u, v;

};


