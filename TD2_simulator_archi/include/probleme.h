#pragma once
#include "equation.h"
#include "ITimeDiscretization.h"
#include "variable.h"
#include <iostream>

class Problem {
public:
  Problem()=default;
  Problem(Equation const &eq, ITimeDiscretization *td);
 // double f=[] (double temps_courant,Variable &y);
  //auto Euler_exact =  [](auto t){return (t*t)/2;};
  //virtual
   void solve();
  //virtual
   void solve1();
  //virtual 
  void solve2();
  //virtual void solve3();

private:
  Equation m_eq;
  ITimeDiscretization *m_discretiz;
};
