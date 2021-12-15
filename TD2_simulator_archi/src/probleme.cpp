#include "../include/integrator.h"
#include "../include/probleme.h"
#include "../include/variable.h"
#include <fstream>
#include <iostream>

Problem::Problem(Equation const &eq, ITimeDiscretization *td)
    : m_eq(eq), m_discretiz(td) {

  // Erreur !
  if (td == nullptr)
    exit(1);
}

void dump_variable(std::string const &filename, Variable const &y) {  
  std::ofstream fb(filename, std::ios::binary | std::ios::out);
  // prepare a file to read
  if (not fb.good()) {
    std::cout << "Open file " << filename << " for write failed\n";
    throw std::runtime_error("Error ");
  }
  fb << y;
}

void Problem::solve() {
  double tmp_i = m_discretiz->get_initial_time();
  //Variable y_init_euler(m_discretiz);
  //Variable y_init_rungkutta(m_discretiz);
  //auto  sol_exact = [](auto t, Variable &y) { return (t * t) / 2; };
  auto f =update_sol_exacte(double t, double  dt, Variable& y) {y(t + dt) = t * t / 2};
  Variable solution_exacte;
 f(t, dt, solution_exacte)
  Variable y_euler(m_discretiz);
  Variable y_rungkutta(m_discretiz);
  //Variable y_exacte(m_discretiz);
   //auto sol_exact=sol_exact(tmp, y_exacte);

  m_eq.compute_initial_condition(tmp_i, y_euler);
  m_eq.compute_initial_condition(tmp_i, y_init_rungkutta);
  printf("--- Les trois solutions sont dans des fichiers .dat---\n");
  for (size_t step = 0; step < m_discretiz->get_nb_points(); step++) {
    double tmp = m_discretiz->get_pas() * step;
     //sol_exact(tmp, y_exacte);
    m_eq.compute_by_integrator<EulerIntegrator>(tmp, m_discretiz->get_pas(),
                                                y_euler);
    m_eq.compute_by_integrator<Runge_Kutta>(tmp, m_discretiz->get_pas(),
                                            y_rungkutta);
     
  }

  dump_variable("euler.dat", y_euler);
  dump_variable("exacte.dat",y_exacte);
  dump_variable("rungkutta.dat", y_rungkutta);
  
}

/*double Problem::f=[] (double temps_courant,Variable &y){

};*/
/*void Problem::solve1()
{
  auto sol_exact =  [](auto t,Variable &y){return (t*t)/2;};
  double tmp_i=m_discretiz->get_initial_time() ;
  Variable y_euler(m_discretiz);
  Variable y_exacte(m_discretiz);

  m_eq.compute_initial_condition(tmp_i, y_euler);
  printf("--- Solve problem ---\n");
  for (size_t step = 1; step < m_discretiz->get_nb_points(); step++)
  {
    double tmp = m_discretiz->get_pas() * step;
    sol_exact(tmp,y_exacte);
     m_eq.compute_by_integrator<EulerIntegrator>(tmp,m_discretiz->get_pas(),
y_euler); std::cout << "--- compute_by_integrator Euler sol at time :  " << step
<< " :  " << y_euler(tmp) << std::endl;
  }
}

void Problem::solve2()
{
  double tmp_i=m_discretiz->get_initial_time() ;
  Variable y_rungkutta(m_discretiz);

  m_eq.compute_initial_condition(tmp_i, y_rungkutta);
  printf("--- Solve problem ---\n");
  for (size_t step = 1; step < m_discretiz->get_nb_points(); step++)
  {
    double tmp = m_discretiz->get_pas() * step;
     m_eq.compute_by_integrator<Runge_Kutta>(tmp,m_discretiz->get_pas(),
y_rungkutta); std::cout << "--- compute_by_integrator Runge Kutta sol at time :
" << step << " :  " << y_rungkutta(tmp)<< std::endl;
  }
}*/

/*void Problem::solve3()
{
  double tmp_i=m_discretiz->get_initial_time() ;
  Variable y_init(m_discretiz);
  m_eq.compute_initial_condition(tmp_i, y_init);
  printf("\n\n--- Solve problem ---\n");
  for (size_t step = 0; step < m_discretiz->get_nb_points(); step++)
  {
    double tmp = m_discretiz->get_pas() * step;
     m_eq.generic_compute<EulerIntegrator>(tmp,m_discretiz->get_pas(), y_init);
    std::cout << "--- compute_by_integrator Runge Kutta sol at time :  " << step
<< " :  " << y_init(tmp) << std::endl;
  }
}*/

// m_equation.compute_by_integrator<EulerIntegrator>(current_time,
// m_mesh->timestep(), y);