#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils8toStringERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE()
{
boost::python::def("toString", static_cast<std::string (*)(const Eigen::Vector6d &)>(&dart::utils::toString), (::boost::python::arg("v")))
;}

/* footer */
