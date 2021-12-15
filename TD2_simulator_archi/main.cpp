#include "equation.h"
#include "ITimeDiscretization.h"
#include "probleme.h"
#include"variable.h"
#include <iostream>


int main() {

  /*Equation eq;
  const double debut = 0, fin = 10;
  const size_t nbr_pas = 10;
  
  ITimeDiscretization *td = new UniformTimeDiscretization(debut, fin, nbr_pas);

  Problem p(eq, td);
  p.solve();

  delete td;
  */

   Equation eq1,eq2,equ3;
  const double debut = 0, fin = 10;
  const size_t nbr_pas = 10;
  
  ITimeDiscretization *td = new UniformTimeDiscretization(debut, fin, nbr_pas);

  Problem p(eq1, td);
  p.solve();
//auto f =  [](auto t){return t;};
  delete td;

  
  /*ITimeDiscretization *tde = new UniformTimeDiscretization(debut, fin, nbr_pas);

  Problem p2(eq2, tde);
  p2.solve2();

  delete tde;
*/
  /*auto f =  [](auto t){return t/2;}
  ITimeDiscretization *tdee = new UniformTimeDiscretization(debut, fin, nbr_pas);

  Problem p3(eq3, tdee);
  p3.solve3();

  delete tdee;*/

  return 0;
}
