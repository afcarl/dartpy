#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common6signal6detail18ConnectionBodyBaseE()
{
::boost::python::class_<dart::common::signal::detail::ConnectionBodyBase >("ConnectionBodyBase", boost::python::no_init)
.def(::boost::python::init<>())
.def("disconnect", static_cast<void (dart::common::signal::detail::ConnectionBodyBase::*)()>(&dart::common::signal::detail::ConnectionBodyBase::disconnect))
.def("isConnected", static_cast<bool (dart::common::signal::detail::ConnectionBodyBase::*)() const>(&dart::common::signal::detail::ConnectionBodyBase::isConnected))
;
}

/* footer */
