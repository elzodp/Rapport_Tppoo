#pragma once
#include "ITimeDiscretization.h"
#include <iostream>
#include <vector>




class Variable {
    friend std::ostream& operator<<(std::ostream& os, Variable const& a);
    public:
    Variable (); // constructeur vide
    Variable( ITimeDiscretization *t_n);
    
   // double print(double t);
   // double & operator() (double t_n);      // Accès à la référence 
    double & operator() (double const & it_n) ; // Accès à la valeur (recopie)
    void print();

    size_t size() const;// methode qui renvoie la taille 

    private:

    size_t n;
  
    std::vector<double> y_n;
    ITimeDiscretization *iter_n;
};

 std::ostream& operator<<(std::ostream& os, Variable const& a);

