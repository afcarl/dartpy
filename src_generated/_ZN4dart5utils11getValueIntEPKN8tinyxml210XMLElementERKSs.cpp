#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils11getValueIntEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueInt", static_cast<int (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueInt), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
