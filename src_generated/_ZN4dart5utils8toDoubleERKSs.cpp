#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils8toDoubleERKSs()
{
boost::python::def("toDouble", static_cast<double (*)(const std::string &)>(&dart::utils::toDouble), (::boost::python::arg("str")))
;}

/* footer */
