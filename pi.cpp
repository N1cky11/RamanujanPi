#include <iostream>
#include <math.h>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/math/constants/constants.hpp>
#include <boost/math/special_functions/factorials.hpp>
#include <iomanip>

typedef boost::multiprecision::cpp_dec_float_50 float_50 ;

void PiSum()
 {
  float_50 memNumerator{};
  float_50 memDenominator{} ;
  float_50 num ;
  float_50 pi=boost::math::constants::pi<float_50>() ;

  for(int i=0 ; i<100 ; i++) {
    memNumerator=boost::math::factorial<float_50>(4*i)*(1103+26390*i) ;
    memDenominator=pow( boost::math::factorial<float_50>(i) , 4 )*pow( 396 , 4*i ) ;
    num+=memNumerator/memDenominator ;
  }

  num=9801./(sqrt(8)*num) ;
  std::cout <<std::setprecision(50) << "num=" << num << "\n" << "pi= " << pi << "\n" ;
 }

int main(void)
{
  PiSum() ;

return 1 ;
}
