#pragma once
#include <iostream>


class ITimeDiscretization {
public:
  ITimeDiscretization(double tmp_i, double tmp_f);

  virtual ~ITimeDiscretization() = default;

  virtual double get_initial_time() const=0;
  virtual double get_final_time() const=0;

  virtual double get_pas() const = 0;
  virtual size_t get_nb_points() const = 0;
  virtual size_t iteration(double t) const = 0;

protected:
  // double t=0.0;
  double initial_time = 0.0;
  double final_time = 0.0;
};

class UniformTimeDiscretization : public virtual ITimeDiscretization {
public:
  UniformTimeDiscretization(double tmp_iu, double tmp_fu, size_t nombre_etape);
  ~UniformTimeDiscretization() override = default;

  double get_pas() const override;
  size_t get_nb_points() const override;
  size_t iteration(double t) const override;
  double get_initial_time() const override ;
  double get_final_time() const override;

private:
  size_t nbr_pas;
};
