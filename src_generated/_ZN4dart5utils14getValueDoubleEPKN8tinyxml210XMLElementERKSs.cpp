#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils14getValueDoubleEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueDouble", static_cast<double (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueDouble), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
