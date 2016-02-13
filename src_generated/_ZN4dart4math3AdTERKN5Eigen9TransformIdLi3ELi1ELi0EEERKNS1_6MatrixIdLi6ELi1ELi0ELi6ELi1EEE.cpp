#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math3AdTERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE()
{
boost::python::def("AdT", static_cast<Eigen::Vector6d (*)(const Eigen::Isometry3d &, const Eigen::Vector6d &)>(&dart::math::AdT), (::boost::python::arg("_T"), ::boost::python::arg("_V")))
;}

/* footer */
