#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_19UniversalJointAddonEEEvPT_()
{
boost::python::def("JointPropertyUpdate", static_cast<void (*)(dart::dynamics::detail::UniversalJointAddon *)>(&dart::dynamics::detail::JointPropertyUpdate), (::boost::python::arg("addon")))
;}

/* footer */
