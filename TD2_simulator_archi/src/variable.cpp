#include "../include/variable.h"
#include <vector>

Variable::Variable() {
  // Constructeur vide
}

Variable::Variable(ITimeDiscretization *it_n) : iter_n(it_n) {

  y_n.resize(iter_n->get_nb_points());
}

double &Variable ::operator()(double const &t_n) {
  return y_n[iter_n->iteration(t_n)];
}

void Variable::print() {

  for (auto i : y_n) {
    std::cout << i << std::endl;
    // return i;
  }
}

std::ostream &operator<<(std::ostream &os, Variable const &a) {

  for (auto i : a.y_n) {
    os << i << "\n";
  }
  return os;
}
