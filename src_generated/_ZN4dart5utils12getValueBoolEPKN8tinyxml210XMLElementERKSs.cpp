#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils12getValueBoolEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueBool", static_cast<bool (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueBool), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
