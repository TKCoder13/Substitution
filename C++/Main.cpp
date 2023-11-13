#include <iostream>

#include "Parent.h"
#include "Child.h"

using namespace std;


void UseParent (Parent &_p)
{
  cout << "UseParent(): " << _p.getX() << " " << _p.getY() << endl;
  _p.override();
}


int main (int argc, char ** argv)
{
  Parent A(1.0, 2.0);
  Child B(1.0, 2.0);

  cout << "Parent: " << A.getX() << " " << A.getY() << endl;
  cout << " Child: " << B.getX() << " " << B.getY() << endl;
  cout << endl;

  UseParent(A);
  UseParent(B);

  A.override();
  B.override();

  return 0;
}
