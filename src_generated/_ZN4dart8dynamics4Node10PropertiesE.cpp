#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics4Node10PropertiesE()
{
::boost::python::class_<dart::dynamics::Node::Properties, ::boost::noncopyable, ::boost::python::bases<dart::common::Extensible<dart::dynamics::Node::Properties> > >("Properties", boost::python::no_init)
;
}

/* footer */
