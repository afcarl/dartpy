#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils16getAttributeCharEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getAttributeChar", static_cast<char (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getAttributeChar), (::boost::python::arg("element"), ::boost::python::arg("attributeName")))
;}

/* footer */
