#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics13MultiDofJointILm3EEE()
{
::boost::python::class_<dart::dynamics::MultiDofJoint<3>, ::boost::noncopyable, dart::dynamics::MultiDofJoint<3> *, ::boost::python::bases<dart::dynamics::Joint, dart::common::SpecializedAddonManager<dart::dynamics::detail::MultiDofJointAddon<3> > > >("_ZN4dart8dynamics13MultiDofJointILm3EEE", boost::python::no_init)
.def("hasMultiDofJointAddon", static_cast<bool (dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::hasMultiDofJointAddon))
.def("eraseMultiDofJointAddon", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)()>(&dart::dynamics::MultiDofJoint<3>::eraseMultiDofJointAddon))
.def("releaseMultiDofJointAddon", static_cast<std::unique_ptr<dart::dynamics::MultiDofJoint<3>::Addon> (dart::dynamics::MultiDofJoint<3>::*)()>(&dart::dynamics::MultiDofJoint<3>::releaseMultiDofJointAddon))
.def("setProperties", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const dart::dynamics::MultiDofJoint<3>::Properties &)>(&dart::dynamics::MultiDofJoint<3>::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const dart::dynamics::MultiDofJoint<3>::UniqueProperties &)>(&dart::dynamics::MultiDofJoint<3>::setProperties), (::boost::python::arg("_properties")))
.def("getMultiDofJointProperties", static_cast<dart::dynamics::MultiDofJoint<3>::Properties (dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getMultiDofJointProperties))
.def("copy", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const dart::dynamics::MultiDofJoint<3UL> &)>(&dart::dynamics::MultiDofJoint<3>::copy), (::boost::python::arg("_otherJoint")))
.def("copy", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const dart::dynamics::MultiDofJoint<3UL> *)>(&dart::dynamics::MultiDofJoint<3>::copy), (::boost::python::arg("_otherJoint")))
.def("getDof", static_cast<dart::dynamics::DegreeOfFreedom *(dart::dynamics::MultiDofJoint<3>::*)(std::size_t)>(&dart::dynamics::MultiDofJoint<3>::getDof), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("index")))
.def("getNumDofs", static_cast<std::size_t (dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getNumDofs))
.def("setDofName", static_cast<const std::string &(dart::dynamics::MultiDofJoint<3>::*)(std::size_t, const std::string &, bool)>(&dart::dynamics::MultiDofJoint<3>::setDofName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_index"), ::boost::python::arg("_name"), ::boost::python::arg("_preserveName")))
.def("preserveDofName", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, bool)>(&dart::dynamics::MultiDofJoint<3>::preserveDofName), (::boost::python::arg("_index"), ::boost::python::arg("_preserve")))
.def("isDofNamePreserved", static_cast<bool (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::isDofNamePreserved), (::boost::python::arg("_index")))
.def("getDofName", static_cast<const std::string &(dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getDofName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_index")))
.def("getIndexInSkeleton", static_cast<std::size_t (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getIndexInSkeleton), (::boost::python::arg("_index")))
.def("getIndexInTree", static_cast<std::size_t (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getIndexInTree), (::boost::python::arg("_index")))
.def("setCommand", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setCommand), (::boost::python::arg("_index"), ::boost::python::arg("_command")))
.def("getCommand", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getCommand), (::boost::python::arg("_index")))
.def("setCommands", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const Eigen::VectorXd &)>(&dart::dynamics::MultiDofJoint<3>::setCommands), (::boost::python::arg("_commands")))
.def("getCommands", static_cast<Eigen::VectorXd (dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getCommands))
.def("resetCommands", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)()>(&dart::dynamics::MultiDofJoint<3>::resetCommands))
.def("setPosition", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setPosition), (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPosition", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getPosition), (::boost::python::arg("_index")))
.def("setPositions", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const Eigen::VectorXd &)>(&dart::dynamics::MultiDofJoint<3>::setPositions), (::boost::python::arg("_positions")))
.def("getPositions", static_cast<Eigen::VectorXd (dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getPositions))
.def("setPositionLowerLimit", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setPositionLowerLimit), (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionLowerLimit", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getPositionLowerLimit), (::boost::python::arg("_index")))
.def("setPositionUpperLimit", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setPositionUpperLimit), (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionUpperLimit", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getPositionUpperLimit), (::boost::python::arg("_index")))
.def("hasPositionLimit", static_cast<bool (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::hasPositionLimit), (::boost::python::arg("_index")))
.def("resetPosition", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t)>(&dart::dynamics::MultiDofJoint<3>::resetPosition), (::boost::python::arg("_index")))
.def("resetPositions", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)()>(&dart::dynamics::MultiDofJoint<3>::resetPositions))
.def("setInitialPosition", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setInitialPosition), (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialPosition", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getInitialPosition), (::boost::python::arg("_index")))
.def("setInitialPositions", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const Eigen::VectorXd &)>(&dart::dynamics::MultiDofJoint<3>::setInitialPositions), (::boost::python::arg("_initial")))
.def("getInitialPositions", static_cast<Eigen::VectorXd (dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getInitialPositions))
.def("setVelocity", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setVelocity), (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocity", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getVelocity), (::boost::python::arg("_index")))
.def("setVelocities", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const Eigen::VectorXd &)>(&dart::dynamics::MultiDofJoint<3>::setVelocities), (::boost::python::arg("_velocities")))
.def("getVelocities", static_cast<Eigen::VectorXd (dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getVelocities))
.def("setVelocityLowerLimit", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setVelocityLowerLimit), (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityLowerLimit", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getVelocityLowerLimit), (::boost::python::arg("_index")))
.def("setVelocityUpperLimit", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setVelocityUpperLimit), (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityUpperLimit", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getVelocityUpperLimit), (::boost::python::arg("_index")))
.def("resetVelocity", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t)>(&dart::dynamics::MultiDofJoint<3>::resetVelocity), (::boost::python::arg("_index")))
.def("resetVelocities", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)()>(&dart::dynamics::MultiDofJoint<3>::resetVelocities))
.def("setInitialVelocity", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setInitialVelocity), (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialVelocity", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getInitialVelocity), (::boost::python::arg("_index")))
.def("setInitialVelocities", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const Eigen::VectorXd &)>(&dart::dynamics::MultiDofJoint<3>::setInitialVelocities), (::boost::python::arg("_initial")))
.def("getInitialVelocities", static_cast<Eigen::VectorXd (dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getInitialVelocities))
.def("setAcceleration", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setAcceleration), (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAcceleration", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getAcceleration), (::boost::python::arg("_index")))
.def("setAccelerations", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const Eigen::VectorXd &)>(&dart::dynamics::MultiDofJoint<3>::setAccelerations), (::boost::python::arg("_accelerations")))
.def("getAccelerations", static_cast<Eigen::VectorXd (dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getAccelerations))
.def("resetAccelerations", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)()>(&dart::dynamics::MultiDofJoint<3>::resetAccelerations))
.def("setAccelerationLowerLimit", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setAccelerationLowerLimit), (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationLowerLimit", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getAccelerationLowerLimit), (::boost::python::arg("_index")))
.def("setAccelerationUpperLimit", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setAccelerationUpperLimit), (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationUpperLimit", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getAccelerationUpperLimit), (::boost::python::arg("_index")))
.def("setPositionsStatic", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const dart::dynamics::MultiDofJoint<3>::Vector &)>(&dart::dynamics::MultiDofJoint<3>::setPositionsStatic), (::boost::python::arg("_positions")))
.def("getPositionsStatic", static_cast<const dart::dynamics::MultiDofJoint<3>::Vector &(dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getPositionsStatic), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setVelocitiesStatic", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const dart::dynamics::MultiDofJoint<3>::Vector &)>(&dart::dynamics::MultiDofJoint<3>::setVelocitiesStatic), (::boost::python::arg("_velocities")))
.def("getVelocitiesStatic", static_cast<const dart::dynamics::MultiDofJoint<3>::Vector &(dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getVelocitiesStatic), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setAccelerationsStatic", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const dart::dynamics::MultiDofJoint<3>::Vector &)>(&dart::dynamics::MultiDofJoint<3>::setAccelerationsStatic), (::boost::python::arg("_accels")))
.def("getAccelerationsStatic", static_cast<const dart::dynamics::MultiDofJoint<3>::Vector &(dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getAccelerationsStatic), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setForce", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setForce), (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForce", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t)>(&dart::dynamics::MultiDofJoint<3>::getForce), (::boost::python::arg("_index")))
.def("setForces", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(const Eigen::VectorXd &)>(&dart::dynamics::MultiDofJoint<3>::setForces), (::boost::python::arg("_forces")))
.def("getForces", static_cast<Eigen::VectorXd (dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getForces))
.def("resetForces", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)()>(&dart::dynamics::MultiDofJoint<3>::resetForces))
.def("setForceLowerLimit", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setForceLowerLimit), (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceLowerLimit", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getForceLowerLimit), (::boost::python::arg("_index")))
.def("setForceUpperLimit", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setForceUpperLimit), (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceUpperLimit", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getForceUpperLimit), (::boost::python::arg("_index")))
.def("setVelocityChange", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setVelocityChange), (::boost::python::arg("_index"), ::boost::python::arg("_velocityChange")))
.def("getVelocityChange", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getVelocityChange), (::boost::python::arg("_index")))
.def("resetVelocityChanges", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)()>(&dart::dynamics::MultiDofJoint<3>::resetVelocityChanges))
.def("setConstraintImpulse", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setConstraintImpulse), (::boost::python::arg("_index"), ::boost::python::arg("_impulse")))
.def("getConstraintImpulse", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getConstraintImpulse), (::boost::python::arg("_index")))
.def("resetConstraintImpulses", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)()>(&dart::dynamics::MultiDofJoint<3>::resetConstraintImpulses))
.def("integratePositions", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(double)>(&dart::dynamics::MultiDofJoint<3>::integratePositions), (::boost::python::arg("_dt")))
.def("integrateVelocities", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(double)>(&dart::dynamics::MultiDofJoint<3>::integrateVelocities), (::boost::python::arg("_dt")))
.def("getPositionDifferences", static_cast<Eigen::VectorXd (dart::dynamics::MultiDofJoint<3>::*)(const Eigen::VectorXd &, const Eigen::VectorXd &) const>(&dart::dynamics::MultiDofJoint<3>::getPositionDifferences), (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("getPositionDifferencesStatic", static_cast<Eigen::Matrix<double, 3UL, 1> (dart::dynamics::MultiDofJoint<3>::*)(const dart::dynamics::MultiDofJoint<3>::Vector &, const dart::dynamics::MultiDofJoint<3>::Vector &) const>(&dart::dynamics::MultiDofJoint<3>::getPositionDifferencesStatic), (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("setSpringStiffness", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setSpringStiffness), (::boost::python::arg("_index"), ::boost::python::arg("_k")))
.def("getSpringStiffness", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getSpringStiffness), (::boost::python::arg("_index")))
.def("setRestPosition", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setRestPosition), (::boost::python::arg("_index"), ::boost::python::arg("_q0")))
.def("getRestPosition", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getRestPosition), (::boost::python::arg("_index")))
.def("setDampingCoefficient", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setDampingCoefficient), (::boost::python::arg("_index"), ::boost::python::arg("_d")))
.def("getDampingCoefficient", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getDampingCoefficient), (::boost::python::arg("_index")))
.def("setCoulombFriction", static_cast<void (dart::dynamics::MultiDofJoint<3>::*)(std::size_t, double)>(&dart::dynamics::MultiDofJoint<3>::setCoulombFriction), (::boost::python::arg("_index"), ::boost::python::arg("_friction")))
.def("getCoulombFriction", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)(std::size_t) const>(&dart::dynamics::MultiDofJoint<3>::getCoulombFriction), (::boost::python::arg("_index")))
.def("getPotentialEnergy", static_cast<double (dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getPotentialEnergy))
.def("getBodyConstraintWrench", static_cast<Eigen::Vector6d (dart::dynamics::MultiDofJoint<3>::*)() const>(&dart::dynamics::MultiDofJoint<3>::getBodyConstraintWrench))
.add_static_property("NumDofs", ::boost::python::make_getter(dart::dynamics::MultiDofJoint<3>::NumDofs))
;
}

/* footer */
