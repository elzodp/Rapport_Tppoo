#pragma once
#include"../include/variable.h"

#include <iostream>

class Equation
{

public:
    Equation() = default;
    
    virtual ~Equation() = default;
    
    //virtual double compute(double tmp);
    virtual double compute(double tmp_courant,double pas_tmp,Variable &y_n);
    virtual void compute_initial_condition(double initial_time,Variable &y_n);
  
	template <class T>
		 double compute_by_integrator(double tmp_courant,double pas_tmp,Variable &y_n)
		{
    	 	return T::update(tmp_courant,pas_tmp,y_n);
		}
	//auto f =  [](auto time){return time;}
	template <class T,class F>
		 double generic_compute(double tmp_courant,double pas_tmp,Variable &y_n)
		{
    	 	return T::update(tmp_courant,pas_tmp,y_n);
		}


private:
    double m_i = 0.0;
    double tmp_courant=0;
    size_t pas_tmp=0;
    Variable y_n;
};
