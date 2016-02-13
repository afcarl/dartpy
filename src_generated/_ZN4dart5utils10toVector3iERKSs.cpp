#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils10toVector3iERKSs()
{
boost::python::def("toVector3i", static_cast<Eigen::Vector3i (*)(const std::string &)>(&dart::utils::toVector3i), (::boost::python::arg("str")))
;}

/* footer */
