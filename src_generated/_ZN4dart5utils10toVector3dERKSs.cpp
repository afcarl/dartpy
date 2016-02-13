#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils10toVector3dERKSs()
{
boost::python::def("toVector3d", static_cast<Eigen::Vector3d (*)(const std::string &)>(&dart::utils::toVector3d), (::boost::python::arg("str")))
;}

/* footer */
