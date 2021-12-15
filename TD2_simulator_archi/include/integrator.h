#pragma once
#include "../include/variable.h"
#include "../include/equation.h"





class EulerIntegrator{
    public:
    
    //template <class U>
    static double update(double tmp_courant, double pas_tmp,Variable &y_n);


    private:
    double tmp_courant=0;
    size_t pas_tmp=0;
    Variable y_n;
};



class Runge_Kutta{
    public:
    //template <class U>
    static double update(double tmp_courant, double pas_tmp,Variable &y_n);


    private:
    double tmp_courant=0;
    size_t pas_tmp=0;
    Variable y_n;
};