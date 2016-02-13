#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils7toFloatERKSs()
{
boost::python::def("toFloat", static_cast<float (*)(const std::string &)>(&dart::utils::toFloat), (::boost::python::arg("str")))
;}

/* footer */
