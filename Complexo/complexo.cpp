// Copyright 2018 Universidade Federal de Minas Gerais (UFMG)
#include <iostream>
#include "complexo.h"
#include <cmath>

#define PI 3.14159265

double Complexo::raio( double x, double y ) {
	double r;
	r = sqrt( ( pow( x, 2 ) ) + ( pow( y, 2 ) ) );
    std::cout << "raio: " << r << " y: " << y << " x: " << x << std::endl;
    return r;
}

double Complexo::theta( double x, double y ) {
	double t;
	t = atan( y/x )*180;
    std::cout << "t: " << t << " y: " << y << " x: " << x << std::endl;
	return t;
}

Complexo::Complexo() {
  real_ = 0.0;
  imag_ = 0.0;
}

Complexo::Complexo( double a ) {
  real_ = a;
  imag_ = 0.0;
}

Complexo::Complexo( double a, double b ) {
  raio_ = raio( a, b );
  theta_ = theta( a, b );
  real_ = raio_ * ( cos( theta_ ) );
  imag_ = raio_ * ( sin( theta_ ) );
}

double Complexo::real() const {
  return real_;
}

double Complexo::imag() const {
  return imag_;
}

double Complexo::raio() const {
  return raio_;
}

double Complexo::theta() const {
  return theta_;
}

bool Complexo::operator==( Complexo x ) const {
  return real_ == x.real_ && imag_ == x.imag_;
}

void Complexo::operator=( Complexo x ) {
  real_ = x.real_;
  imag_ = x.imag_;
}

double Complexo::modulo() const {
  return sqrt( real_*real_ + imag_*imag_ );
}

Complexo Complexo::conjugado() const {
  Complexo c( real_, -imag_ );
  return c;
}

Complexo Complexo::operator-() const {
  Complexo c( -real_, -imag_ );
  return c;
}

Complexo Complexo::inverso() const {
  double divisor = ( real_ * real_ ) + ( imag_ * imag_ );
  Complexo i( real_/divisor, -imag_/divisor );
  return i;
}

Complexo Complexo::operator+( Complexo y ) const {
  Complexo s( real_ + y.real_, ( imag_ + y.imag_ ) );
  return s;
}

Complexo Complexo::operator-( Complexo y ) const {
  return (*this) + -y;
}

Complexo Complexo::operator*( Complexo y ) const {
  Complexo p( ( real_*y.real_ ) - ( imag_*y.imag_ ), ( real_*y.imag_ ) + ( imag_*y.real_ ) );
  return p;
}

Complexo Complexo::operator/( Complexo y ) const {
  return (*this) * y.inverso();
}
