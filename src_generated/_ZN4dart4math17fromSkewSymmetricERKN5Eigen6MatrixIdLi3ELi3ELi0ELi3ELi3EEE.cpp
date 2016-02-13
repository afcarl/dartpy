#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math17fromSkewSymmetricERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE()
{
boost::python::def("fromSkewSymmetric", static_cast<Eigen::Vector3d (*)(const Eigen::Matrix3d &)>(&dart::math::fromSkewSymmetric), (::boost::python::arg("_m")))
;}

/* footer */
