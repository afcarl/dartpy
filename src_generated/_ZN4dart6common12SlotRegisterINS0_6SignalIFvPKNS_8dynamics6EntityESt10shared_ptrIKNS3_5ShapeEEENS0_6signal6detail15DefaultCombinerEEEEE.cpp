#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityESt10shared_ptrIKNS3_5ShapeEEENS0_6signal6detail15DefaultCombinerEEEEE()
{
::boost::python::class_<dart::common::SlotRegister<dart::common::Signal<void (const dart::dynamics::Entity *, std::shared_ptr<const dart::dynamics::Shape>), dart::common::signal::detail::DefaultCombiner> >, ::boost::noncopyable >("_ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityESt10shared_ptrIKNS3_5ShapeEEENS0_6signal6detail15DefaultCombinerEEEEE", boost::python::no_init)
.def(::boost::python::init<dart::common::Signal<void (const dart::dynamics::Entity *, std::shared_ptr<const dart::dynamics::Shape>), dart::common::signal::detail::DefaultCombiner>::SignalType &>((::boost::python::arg("_signal"))))
;
}

/* footer */
