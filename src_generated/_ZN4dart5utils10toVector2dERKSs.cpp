#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils10toVector2dERKSs()
{
boost::python::def("toVector2d", static_cast<Eigen::Vector2d (*)(const std::string &)>(&dart::utils::toVector2d), (::boost::python::arg("str")))
;}

/* footer */
