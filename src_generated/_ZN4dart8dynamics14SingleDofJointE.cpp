#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics14SingleDofJointE()
{
::boost::python::class_<dart::dynamics::SingleDofJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Joint > >("SingleDofJoint", boost::python::no_init)
.def("hasSingleDofJointAddon", static_cast<bool (dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::hasSingleDofJointAddon))
.def("setSingleDofJointAddon", static_cast<void (dart::dynamics::SingleDofJoint::*)(const dart::dynamics::SingleDofJoint::Addon *)>(&dart::dynamics::SingleDofJoint::setSingleDofJointAddon), (::boost::python::arg("addon")))
.def("eraseSingleDofJointAddon", static_cast<void (dart::dynamics::SingleDofJoint::*)()>(&dart::dynamics::SingleDofJoint::eraseSingleDofJointAddon))
.def("releaseSingleDofJointAddon", static_cast<std::unique_ptr<dart::dynamics::SingleDofJoint::Addon> (dart::dynamics::SingleDofJoint::*)()>(&dart::dynamics::SingleDofJoint::releaseSingleDofJointAddon))
.def("setProperties", static_cast<void (dart::dynamics::SingleDofJoint::*)(const dart::dynamics::SingleDofJoint::Properties &)>(&dart::dynamics::SingleDofJoint::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::dynamics::SingleDofJoint::*)(const dart::dynamics::SingleDofJoint::UniqueProperties &)>(&dart::dynamics::SingleDofJoint::setProperties), (::boost::python::arg("_properties")))
.def("getSingleDofJointProperties", static_cast<dart::dynamics::SingleDofJoint::Properties (dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getSingleDofJointProperties))
.def("copy", static_cast<void (dart::dynamics::SingleDofJoint::*)(const dart::dynamics::SingleDofJoint &)>(&dart::dynamics::SingleDofJoint::copy), (::boost::python::arg("_otherSingleDofJoint")))
.def("copy", static_cast<void (dart::dynamics::SingleDofJoint::*)(const dart::dynamics::SingleDofJoint *)>(&dart::dynamics::SingleDofJoint::copy), (::boost::python::arg("_otherSingleDofJoint")))
.def("getDof", static_cast<dart::dynamics::DegreeOfFreedom *(dart::dynamics::SingleDofJoint::*)(std::size_t)>(&dart::dynamics::SingleDofJoint::getDof), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("_index")))
.def("setDofName", static_cast<const std::string &(dart::dynamics::SingleDofJoint::*)(std::size_t, const std::string &, bool)>(&dart::dynamics::SingleDofJoint::setDofName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_index"), ::boost::python::arg("_name"), ::boost::python::arg("_preserveName") = true))
.def("preserveDofName", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, bool)>(&dart::dynamics::SingleDofJoint::preserveDofName), (::boost::python::arg("_index"), ::boost::python::arg("_preserve")))
.def("isDofNamePreserved", static_cast<bool (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::isDofNamePreserved), (::boost::python::arg("_index")))
.def("getDofName", static_cast<const std::string &(dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getDofName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_index")))
.def("getNumDofs", static_cast<std::size_t (dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getNumDofs))
.def("getIndexInSkeleton", static_cast<std::size_t (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getIndexInSkeleton), (::boost::python::arg("_index")))
.def("getIndexInTree", static_cast<std::size_t (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getIndexInTree), (::boost::python::arg("_index")))
.def("setCommand", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setCommand), (::boost::python::arg("_index"), ::boost::python::arg("_command")))
.def("getCommand", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getCommand), (::boost::python::arg("_index")))
.def("setCommands", static_cast<void (dart::dynamics::SingleDofJoint::*)(const Eigen::VectorXd &)>(&dart::dynamics::SingleDofJoint::setCommands), (::boost::python::arg("_commands")))
.def("getCommands", static_cast<Eigen::VectorXd (dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getCommands))
.def("resetCommands", static_cast<void (dart::dynamics::SingleDofJoint::*)()>(&dart::dynamics::SingleDofJoint::resetCommands))
.def("setPosition", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setPosition), (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPosition", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getPosition), (::boost::python::arg("_index")))
.def("setPositions", static_cast<void (dart::dynamics::SingleDofJoint::*)(const Eigen::VectorXd &)>(&dart::dynamics::SingleDofJoint::setPositions), (::boost::python::arg("_positions")))
.def("getPositions", static_cast<Eigen::VectorXd (dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getPositions))
.def("setPositionLowerLimit", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setPositionLowerLimit), (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionLowerLimit", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getPositionLowerLimit), (::boost::python::arg("_index")))
.def("setPositionUpperLimit", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setPositionUpperLimit), (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionUpperLimit", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getPositionUpperLimit), (::boost::python::arg("_index")))
.def("hasPositionLimit", static_cast<bool (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::hasPositionLimit), (::boost::python::arg("_index")))
.def("resetPosition", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t)>(&dart::dynamics::SingleDofJoint::resetPosition), (::boost::python::arg("_index")))
.def("resetPositions", static_cast<void (dart::dynamics::SingleDofJoint::*)()>(&dart::dynamics::SingleDofJoint::resetPositions))
.def("setInitialPosition", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setInitialPosition), (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialPosition", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getInitialPosition), (::boost::python::arg("_index")))
.def("setInitialPositions", static_cast<void (dart::dynamics::SingleDofJoint::*)(const Eigen::VectorXd &)>(&dart::dynamics::SingleDofJoint::setInitialPositions), (::boost::python::arg("_initial")))
.def("getInitialPositions", static_cast<Eigen::VectorXd (dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getInitialPositions))
.def("setVelocity", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setVelocity), (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocity", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getVelocity), (::boost::python::arg("_index")))
.def("setVelocities", static_cast<void (dart::dynamics::SingleDofJoint::*)(const Eigen::VectorXd &)>(&dart::dynamics::SingleDofJoint::setVelocities), (::boost::python::arg("_velocities")))
.def("getVelocities", static_cast<Eigen::VectorXd (dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getVelocities))
.def("setVelocityLowerLimit", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setVelocityLowerLimit), (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityLowerLimit", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getVelocityLowerLimit), (::boost::python::arg("_index")))
.def("setVelocityUpperLimit", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setVelocityUpperLimit), (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityUpperLimit", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getVelocityUpperLimit), (::boost::python::arg("_index")))
.def("resetVelocity", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t)>(&dart::dynamics::SingleDofJoint::resetVelocity), (::boost::python::arg("_index")))
.def("resetVelocities", static_cast<void (dart::dynamics::SingleDofJoint::*)()>(&dart::dynamics::SingleDofJoint::resetVelocities))
.def("setInitialVelocity", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setInitialVelocity), (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialVelocity", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getInitialVelocity), (::boost::python::arg("_index")))
.def("setInitialVelocities", static_cast<void (dart::dynamics::SingleDofJoint::*)(const Eigen::VectorXd &)>(&dart::dynamics::SingleDofJoint::setInitialVelocities), (::boost::python::arg("_initial")))
.def("getInitialVelocities", static_cast<Eigen::VectorXd (dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getInitialVelocities))
.def("setAcceleration", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setAcceleration), (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAcceleration", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getAcceleration), (::boost::python::arg("_index")))
.def("setAccelerations", static_cast<void (dart::dynamics::SingleDofJoint::*)(const Eigen::VectorXd &)>(&dart::dynamics::SingleDofJoint::setAccelerations), (::boost::python::arg("_accelerations")))
.def("getAccelerations", static_cast<Eigen::VectorXd (dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getAccelerations))
.def("resetAccelerations", static_cast<void (dart::dynamics::SingleDofJoint::*)()>(&dart::dynamics::SingleDofJoint::resetAccelerations))
.def("setAccelerationLowerLimit", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setAccelerationLowerLimit), (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationLowerLimit", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getAccelerationLowerLimit), (::boost::python::arg("_index")))
.def("setAccelerationUpperLimit", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setAccelerationUpperLimit), (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationUpperLimit", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getAccelerationUpperLimit), (::boost::python::arg("_index")))
.def("setPositionStatic", static_cast<void (dart::dynamics::SingleDofJoint::*)(const double &)>(&dart::dynamics::SingleDofJoint::setPositionStatic), (::boost::python::arg("_position")))
.def("getPositionStatic", static_cast<const double &(dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getPositionStatic), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setVelocityStatic", static_cast<void (dart::dynamics::SingleDofJoint::*)(const double &)>(&dart::dynamics::SingleDofJoint::setVelocityStatic), (::boost::python::arg("_velocity")))
.def("getVelocityStatic", static_cast<const double &(dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getVelocityStatic), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setAccelerationStatic", static_cast<void (dart::dynamics::SingleDofJoint::*)(const double &)>(&dart::dynamics::SingleDofJoint::setAccelerationStatic), (::boost::python::arg("_acceleration")))
.def("getAccelerationStatic", static_cast<const double &(dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getAccelerationStatic), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setForce", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setForce), (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForce", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t)>(&dart::dynamics::SingleDofJoint::getForce), (::boost::python::arg("_index")))
.def("setForces", static_cast<void (dart::dynamics::SingleDofJoint::*)(const Eigen::VectorXd &)>(&dart::dynamics::SingleDofJoint::setForces), (::boost::python::arg("_forces")))
.def("getForces", static_cast<Eigen::VectorXd (dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getForces))
.def("resetForces", static_cast<void (dart::dynamics::SingleDofJoint::*)()>(&dart::dynamics::SingleDofJoint::resetForces))
.def("setForceLowerLimit", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setForceLowerLimit), (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceLowerLimit", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getForceLowerLimit), (::boost::python::arg("_index")))
.def("setForceUpperLimit", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setForceUpperLimit), (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceUpperLimit", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getForceUpperLimit), (::boost::python::arg("_index")))
.def("setVelocityChange", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setVelocityChange), (::boost::python::arg("_index"), ::boost::python::arg("_velocityChange")))
.def("getVelocityChange", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getVelocityChange), (::boost::python::arg("_index")))
.def("resetVelocityChanges", static_cast<void (dart::dynamics::SingleDofJoint::*)()>(&dart::dynamics::SingleDofJoint::resetVelocityChanges))
.def("setConstraintImpulse", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setConstraintImpulse), (::boost::python::arg("_index"), ::boost::python::arg("_impulse")))
.def("getConstraintImpulse", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getConstraintImpulse), (::boost::python::arg("_index")))
.def("resetConstraintImpulses", static_cast<void (dart::dynamics::SingleDofJoint::*)()>(&dart::dynamics::SingleDofJoint::resetConstraintImpulses))
.def("integratePositions", static_cast<void (dart::dynamics::SingleDofJoint::*)(double)>(&dart::dynamics::SingleDofJoint::integratePositions), (::boost::python::arg("_dt")))
.def("integrateVelocities", static_cast<void (dart::dynamics::SingleDofJoint::*)(double)>(&dart::dynamics::SingleDofJoint::integrateVelocities), (::boost::python::arg("_dt")))
.def("getPositionDifferences", static_cast<Eigen::VectorXd (dart::dynamics::SingleDofJoint::*)(const Eigen::VectorXd &, const Eigen::VectorXd &) const>(&dart::dynamics::SingleDofJoint::getPositionDifferences), (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("getPositionDifferenceStatic", static_cast<double (dart::dynamics::SingleDofJoint::*)(double, double) const>(&dart::dynamics::SingleDofJoint::getPositionDifferenceStatic), (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("setSpringStiffness", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setSpringStiffness), (::boost::python::arg("_index"), ::boost::python::arg("_k")))
.def("getSpringStiffness", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getSpringStiffness), (::boost::python::arg("_index")))
.def("setRestPosition", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setRestPosition), (::boost::python::arg("_index"), ::boost::python::arg("_q0")))
.def("getRestPosition", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getRestPosition), (::boost::python::arg("_index")))
.def("setDampingCoefficient", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setDampingCoefficient), (::boost::python::arg("_index"), ::boost::python::arg("_d")))
.def("getDampingCoefficient", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getDampingCoefficient), (::boost::python::arg("_index")))
.def("setCoulombFriction", static_cast<void (dart::dynamics::SingleDofJoint::*)(std::size_t, double)>(&dart::dynamics::SingleDofJoint::setCoulombFriction), (::boost::python::arg("_index"), ::boost::python::arg("_friction")))
.def("getCoulombFriction", static_cast<double (dart::dynamics::SingleDofJoint::*)(std::size_t) const>(&dart::dynamics::SingleDofJoint::getCoulombFriction), (::boost::python::arg("_index")))
.def("getPotentialEnergy", static_cast<double (dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getPotentialEnergy))
.def("getBodyConstraintWrench", static_cast<Eigen::Vector6d (dart::dynamics::SingleDofJoint::*)() const>(&dart::dynamics::SingleDofJoint::getBodyConstraintWrench))
;
}

/* footer */
