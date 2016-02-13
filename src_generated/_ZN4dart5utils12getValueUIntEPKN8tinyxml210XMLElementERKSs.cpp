#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils12getValueUIntEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueUInt", static_cast<unsigned int (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueUInt), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
