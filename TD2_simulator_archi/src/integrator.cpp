#include "../include/integrator.h"
#include<iostream>
//auto f =  [](auto t){return t;};
double EulerIntegrator::update(double tmp_courant, double pas_tmp,Variable &y_n){
    double y=(y_n(tmp_courant) + pas_tmp*tmp_courant);
    double tn_1=tmp_courant + pas_tmp;
    return y_n(tn_1)=y;
}


//decltype(f)

double Runge_Kutta:: update(double tmp_courant, double pas_tmp,Variable &y_n){
    double y=y_n(tmp_courant) + pas_tmp*(pas_tmp/2+ tmp_courant);
    double tn_1=tmp_courant + pas_tmp;
    return y_n(tn_1)=y;
}