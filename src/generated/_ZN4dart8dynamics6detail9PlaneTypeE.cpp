#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail9PlaneTypeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::detail::PlaneType>("PlaneType")
.value("XY", dart::dynamics::detail::PlaneType::XY)
.value("YZ", dart::dynamics::detail::PlaneType::YZ)
.value("ZX", dart::dynamics::detail::PlaneType::ZX)
.value("ARBITRARY", dart::dynamics::detail::PlaneType::ARBITRARY)
;
}

/* footer */