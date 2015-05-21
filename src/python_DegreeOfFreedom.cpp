#include "pointers.h"
#include <dart/dynamics/dynamics.h>
#include <boost/python.hpp>
#include "util.h"

using ::boost::python::object;
using ::dart::dynamics::DegreeOfFreedom;
using ::dart::dynamics::DegreeOfFreedomPtr;

template <void (DegreeOfFreedom::*Setter)(double, double)>
void DegreeOfFreedom_SetLimits(DegreeOfFreedom *self, object limits)
{
    using ::boost::python::extract;

    (self->*Setter)(
        extract<double>(limits[0]),
        extract<double>(limits[1])
    );
}

template <std::pair<double, double> (DegreeOfFreedom::*Getter)() const>
object DegreeOfFreedom_GetLimits(DegreeOfFreedom *self)
{
    using ::boost::python::make_tuple;

    std::pair<double, double> const limits = (self->*Getter)();
    return make_tuple(limits.first, limits.second);
}

void python_DegreeOfFreedom()
{
    using namespace ::boost::python;
    using ::dart::dynamics::BodyNode;
    using ::dart::dynamics::DegreeOfFreedomPtr;
    using ::dart::dynamics::Joint;
    using ::dart::dynamics::Skeleton;
    using ::dart::dynamics::SkeletonPtr;
    using ::dart::python::util::collection_from_python;

    collection_from_python<std::vector<DegreeOfFreedomPtr> >();

    class_<DegreeOfFreedom>("DegreeOfFreedom", no_init)
        .add_property("name",
            make_function(&DegreeOfFreedom::getName,
                          return_value_policy<copy_const_reference>()))
        .add_property("is_name_preserved",
            &DegreeOfFreedom::isNamePreserved,
            &DegreeOfFreedom::preserveName)
        .add_property("index_in_joint",
            &DegreeOfFreedom::getIndexInJoint)
        .add_property("index_in_skeleton",
            &DegreeOfFreedom::getIndexInSkeleton)
        .add_property("position",
            &DegreeOfFreedom::getPosition,
            &DegreeOfFreedom::setPosition)
        .add_property("position_limits",
            &DegreeOfFreedom_GetLimits<&DegreeOfFreedom::getPositionLimits>,
            &DegreeOfFreedom_SetLimits<&DegreeOfFreedom::setPositionLimits>)
        .add_property("position_lower_limit",
            &DegreeOfFreedom::getPositionLowerLimit,
            &DegreeOfFreedom::setPositionLowerLimit)
        .add_property("position_upper_limit",
            &DegreeOfFreedom::getPositionUpperLimit,
            &DegreeOfFreedom::setPositionUpperLimit)
        .add_property("velocity",
            &DegreeOfFreedom::getVelocity,
            &DegreeOfFreedom::setVelocity)
        .add_property("velocity_limits",
            &DegreeOfFreedom_GetLimits<&DegreeOfFreedom::getVelocityLimits>,
            &DegreeOfFreedom_SetLimits<&DegreeOfFreedom::setVelocityLimits>)
        .add_property("velocity_lower_limit",
            &DegreeOfFreedom::getVelocityLowerLimit,
            &DegreeOfFreedom::setVelocityLowerLimit)
        .add_property("velocity_upper_limit",
            &DegreeOfFreedom::getVelocityUpperLimit,
            &DegreeOfFreedom::setVelocityUpperLimit)
        .add_property("acceleration",
            &DegreeOfFreedom::getAcceleration,
            &DegreeOfFreedom::setAcceleration)
        .add_property("acceleration_limits",
            &DegreeOfFreedom_GetLimits<&DegreeOfFreedom::getAccelerationLimits>,
            &DegreeOfFreedom_SetLimits<&DegreeOfFreedom::setAccelerationLimits>)
        .add_property("acceleration_lower_limit",
            &DegreeOfFreedom::getAccelerationLowerLimit,
            &DegreeOfFreedom::setAccelerationLowerLimit)
        .add_property("acceleration_upper_limit",
            &DegreeOfFreedom::getAccelerationUpperLimit,
            &DegreeOfFreedom::setAccelerationUpperLimit)
        .add_property("force",
            &DegreeOfFreedom::getForce,
            &DegreeOfFreedom::setForce)
        .add_property("force_limits",
            &DegreeOfFreedom_GetLimits<&DegreeOfFreedom::getForceLimits>,
            &DegreeOfFreedom_SetLimits<&DegreeOfFreedom::setForceLimits>)
        .add_property("force_lower_limit",
            &DegreeOfFreedom::getForceLowerLimit,
            &DegreeOfFreedom::setForceLowerLimit)
        .add_property("force_upper_limit",
            &DegreeOfFreedom::getForceUpperLimit,
            &DegreeOfFreedom::setForceUpperLimit)
        .add_property("joint",
            make_function(
                static_cast<Joint *(DegreeOfFreedom::*)()>(
                    &DegreeOfFreedom::getJoint),
                return_value_policy<reference_existing_object>()))
        .add_property("skeleton",
            static_cast<SkeletonPtr (DegreeOfFreedom::*)()>(
                &DegreeOfFreedom::getSkeleton))
        .add_property("child_body_node",
            make_function(
                static_cast<BodyNode *(DegreeOfFreedom::*)()>(
                    &DegreeOfFreedom::getChildBodyNode),
                return_value_policy<reference_existing_object>()))
        .add_property("parent_body_node",
            make_function(
                static_cast<BodyNode *(DegreeOfFreedom::*)()>(
                    &DegreeOfFreedom::getParentBodyNode),
                return_value_policy<reference_existing_object>()))
        .def("set_name", &DegreeOfFreedom::setName,
            return_value_policy<copy_const_reference>())
        ;
}
