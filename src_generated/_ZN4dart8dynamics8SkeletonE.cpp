#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics8SkeletonE()
{
::boost::python::class_<dart::dynamics::Skeleton, ::boost::noncopyable, dart::dynamics::SkeletonPtr, ::boost::python::bases<dart::common::AddonManager, dart::dynamics::MetaSkeleton, dart::dynamics::SpecializedNodeManagerForSkeleton<dart::dynamics::EndEffector> > >("Skeleton", boost::python::no_init)
.def("create", static_cast<dart::dynamics::SkeletonPtr (*)(const std::string &)>(&dart::dynamics::Skeleton::create), (::boost::python::arg("_name")))
.def("create", static_cast<dart::dynamics::SkeletonPtr (*)(const dart::dynamics::Skeleton::Properties &)>(&dart::dynamics::Skeleton::create), (::boost::python::arg("_properties")))
.def("getPtr", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::getPtr))
.def("getPtr", static_cast<dart::dynamics::ConstSkeletonPtr (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getPtr))
.def("getSkeleton", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::getSkeleton))
.def("getSkeleton", static_cast<dart::dynamics::ConstSkeletonPtr (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getSkeleton))
.def("clone", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::clone))
.def("clone", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::Skeleton::*)(const std::string &) const>(&dart::dynamics::Skeleton::clone), (::boost::python::arg("cloneName")))
.def("setConfiguration", static_cast<void (dart::dynamics::Skeleton::*)(const dart::dynamics::Skeleton::Configuration &)>(&dart::dynamics::Skeleton::setConfiguration), (::boost::python::arg("configuration")))
.def("getConfiguration", static_cast<dart::dynamics::Skeleton::Configuration (dart::dynamics::Skeleton::*)(int) const>(&dart::dynamics::Skeleton::getConfiguration), (::boost::python::arg("flags") = 255))
.def("getConfiguration", static_cast<dart::dynamics::Skeleton::Configuration (dart::dynamics::Skeleton::*)(const std::vector<std::size_t> &, int) const>(&dart::dynamics::Skeleton::getConfiguration), (::boost::python::arg("indices"), ::boost::python::arg("flags") = 255))
.def("setProperties", static_cast<void (dart::dynamics::Skeleton::*)(const dart::dynamics::Skeleton::Properties &)>(&dart::dynamics::Skeleton::setProperties), (::boost::python::arg("_properties")))
.def("getSkeletonProperties", static_cast<const dart::dynamics::Skeleton::Properties &(dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getSkeletonProperties), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setName", static_cast<const std::string &(dart::dynamics::Skeleton::*)(const std::string &)>(&dart::dynamics::Skeleton::setName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name")))
.def("getName", static_cast<const std::string &(dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("enableSelfCollision", static_cast<void (dart::dynamics::Skeleton::*)(bool)>(&dart::dynamics::Skeleton::enableSelfCollision), (::boost::python::arg("_enableAdjacentBodyCheck") = false))
.def("disableSelfCollision", static_cast<void (dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::disableSelfCollision))
.def("isEnabledSelfCollisionCheck", static_cast<bool (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::isEnabledSelfCollisionCheck))
.def("isEnabledAdjacentBodyCheck", static_cast<bool (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::isEnabledAdjacentBodyCheck))
.def("setMobile", static_cast<void (dart::dynamics::Skeleton::*)(bool)>(&dart::dynamics::Skeleton::setMobile), (::boost::python::arg("_isMobile")))
.def("isMobile", static_cast<bool (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::isMobile))
.def("setTimeStep", static_cast<void (dart::dynamics::Skeleton::*)(double)>(&dart::dynamics::Skeleton::setTimeStep), (::boost::python::arg("_timeStep")))
.def("getTimeStep", static_cast<double (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getTimeStep))
.def("setGravity", static_cast<void (dart::dynamics::Skeleton::*)(const Eigen::Vector3d &)>(&dart::dynamics::Skeleton::setGravity), (::boost::python::arg("_gravity")))
.def("getGravity", static_cast<const Eigen::Vector3d &(dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getGravity), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("incrementVersion", static_cast<std::size_t (dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::incrementVersion))
.def("getVersion", static_cast<std::size_t (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getVersion))
.def("getNumBodyNodes", static_cast<std::size_t (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getNumBodyNodes))
.def("getNumRigidBodyNodes", static_cast<std::size_t (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getNumRigidBodyNodes))
.def("getNumSoftBodyNodes", static_cast<std::size_t (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getNumSoftBodyNodes))
.def("getNumTrees", static_cast<std::size_t (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getNumTrees))
.def("getRootBodyNode", static_cast<dart::dynamics::BodyNode *(dart::dynamics::Skeleton::*)(std::size_t)>(&dart::dynamics::Skeleton::getRootBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), (::boost::python::arg("_treeIdx") = 0))
.def("getBodyNode", static_cast<dart::dynamics::BodyNode *(dart::dynamics::Skeleton::*)(std::size_t)>(&dart::dynamics::Skeleton::getBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), (::boost::python::arg("_idx")))
.def("getSoftBodyNode", static_cast<dart::dynamics::SoftBodyNode *(dart::dynamics::Skeleton::*)(std::size_t)>(&dart::dynamics::Skeleton::getSoftBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::SoftBodyNodePtr> >(), (::boost::python::arg("_idx")))
.def("getBodyNode", static_cast<dart::dynamics::BodyNode *(dart::dynamics::Skeleton::*)(const std::string &)>(&dart::dynamics::Skeleton::getBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), (::boost::python::arg("_name")))
.def("getSoftBodyNode", static_cast<dart::dynamics::SoftBodyNode *(dart::dynamics::Skeleton::*)(const std::string &)>(&dart::dynamics::Skeleton::getSoftBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::SoftBodyNodePtr> >(), (::boost::python::arg("_name")))
.def("getIndexOf", static_cast<std::size_t (dart::dynamics::Skeleton::*)(const dart::dynamics::BodyNode *, bool) const>(&dart::dynamics::Skeleton::getIndexOf), (::boost::python::arg("_bn"), ::boost::python::arg("_warning") = true))
.def("getTreeBodyNodes", static_cast<std::vector<const dart::dynamics::BodyNode *> (dart::dynamics::Skeleton::*)(std::size_t) const>(&dart::dynamics::Skeleton::getTreeBodyNodes), (::boost::python::arg("_treeIdx")))
.def("getNumJoints", static_cast<std::size_t (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getNumJoints))
.def("getJoint", static_cast<dart::dynamics::Joint *(dart::dynamics::Skeleton::*)(std::size_t)>(&dart::dynamics::Skeleton::getJoint), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), (::boost::python::arg("_idx")))
.def("getJoint", static_cast<dart::dynamics::Joint *(dart::dynamics::Skeleton::*)(const std::string &)>(&dart::dynamics::Skeleton::getJoint), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), (::boost::python::arg("_name")))
.def("getIndexOf", static_cast<std::size_t (dart::dynamics::Skeleton::*)(const dart::dynamics::Joint *, bool) const>(&dart::dynamics::Skeleton::getIndexOf), (::boost::python::arg("_joint"), ::boost::python::arg("_warning") = true))
.def("getNumDofs", static_cast<std::size_t (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getNumDofs))
.def("getDof", static_cast<dart::dynamics::DegreeOfFreedom *(dart::dynamics::Skeleton::*)(std::size_t)>(&dart::dynamics::Skeleton::getDof), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("_idx")))
.def("getDof", static_cast<dart::dynamics::DegreeOfFreedom *(dart::dynamics::Skeleton::*)(const std::string &)>(&dart::dynamics::Skeleton::getDof), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("_name")))
.def("getDofs", static_cast<std::vector<const dart::dynamics::DegreeOfFreedom *> (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getDofs))
.def("getIndexOf", static_cast<std::size_t (dart::dynamics::Skeleton::*)(const dart::dynamics::DegreeOfFreedom *, bool) const>(&dart::dynamics::Skeleton::getIndexOf), (::boost::python::arg("_dof"), ::boost::python::arg("_warning") = true))
.def("getIK", static_cast<const std::shared_ptr<dart::dynamics::WholeBodyIK> &(dart::dynamics::Skeleton::*)(bool)>(&dart::dynamics::Skeleton::getIK), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_createIfNull") = false))
.def("getOrCreateIK", static_cast<const std::shared_ptr<dart::dynamics::WholeBodyIK> &(dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::getOrCreateIK), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getIK", static_cast<std::shared_ptr<const dart::dynamics::WholeBodyIK> (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getIK))
.def("createIK", static_cast<const std::shared_ptr<dart::dynamics::WholeBodyIK> &(dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::createIK), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("clearIK", static_cast<void (dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::clearIK))
.def("getNumMarkers", static_cast<std::size_t (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getNumMarkers))
.def("getMarker", static_cast<dart::dynamics::Marker *(dart::dynamics::Skeleton::*)(const std::string &)>(&dart::dynamics::Skeleton::getMarker), ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_name")))
.def("getNumEndEffectors", static_cast<std::size_t (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getNumEndEffectors))
.def("getEndEffector", static_cast<dart::dynamics::EndEffector *(dart::dynamics::Skeleton::*)(std::size_t)>(&dart::dynamics::Skeleton::getEndEffector), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), (::boost::python::arg("index")))
.def("getNumPluralAddoName", static_cast<std::size_t (dart::dynamics::Skeleton::*)(std::size_t) const>(&dart::dynamics::Skeleton::getNumPluralAddoName), (::boost::python::arg("treeIndex")))
.def("getEndEffector", static_cast<dart::dynamics::EndEffector *(dart::dynamics::Skeleton::*)(std::size_t, std::size_t)>(&dart::dynamics::Skeleton::getEndEffector), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), (::boost::python::arg("treeIndex"), ::boost::python::arg("nodeIndex")))
.def("getEndEffector", static_cast<dart::dynamics::EndEffector *(dart::dynamics::Skeleton::*)(const std::string &)>(&dart::dynamics::Skeleton::getEndEffector), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), (::boost::python::arg("name")))
.def("integratePositions", static_cast<void (dart::dynamics::Skeleton::*)(double)>(&dart::dynamics::Skeleton::integratePositions), (::boost::python::arg("_dt")))
.def("integrateVelocities", static_cast<void (dart::dynamics::Skeleton::*)(double)>(&dart::dynamics::Skeleton::integrateVelocities), (::boost::python::arg("_dt")))
.def("getPositionDifferences", static_cast<Eigen::VectorXd (dart::dynamics::Skeleton::*)(const Eigen::VectorXd &, const Eigen::VectorXd &) const>(&dart::dynamics::Skeleton::getPositionDifferences), (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("getVelocityDifferences", static_cast<Eigen::VectorXd (dart::dynamics::Skeleton::*)(const Eigen::VectorXd &, const Eigen::VectorXd &) const>(&dart::dynamics::Skeleton::getVelocityDifferences), (::boost::python::arg("_dq2"), ::boost::python::arg("_dq1")))
.def("setState", static_cast<void (dart::dynamics::Skeleton::*)(const Eigen::VectorXd &)>(&dart::dynamics::Skeleton::setState), (::boost::python::arg("_state")))
.def("getState", static_cast<Eigen::VectorXd (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getState))
.def("getSupportCentroid", static_cast<const Eigen::Vector2d &(dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getSupportCentroid), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getSupportCentroid", static_cast<const Eigen::Vector2d &(dart::dynamics::Skeleton::*)(std::size_t) const>(&dart::dynamics::Skeleton::getSupportCentroid), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_treeIdx")))
.def("getSupportVersion", static_cast<std::size_t (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getSupportVersion))
.def("getSupportVersion", static_cast<std::size_t (dart::dynamics::Skeleton::*)(std::size_t) const>(&dart::dynamics::Skeleton::getSupportVersion), (::boost::python::arg("_treeIdx")))
.def("computeForwardKinematics", static_cast<void (dart::dynamics::Skeleton::*)(bool, bool, bool)>(&dart::dynamics::Skeleton::computeForwardKinematics), (::boost::python::arg("_updateTransforms") = true, ::boost::python::arg("_updateVels") = true, ::boost::python::arg("_updateAccs") = true))
.def("computeForwardDynamics", static_cast<void (dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::computeForwardDynamics))
.def("computeInverseDynamics", static_cast<void (dart::dynamics::Skeleton::*)(bool, bool, bool)>(&dart::dynamics::Skeleton::computeInverseDynamics), (::boost::python::arg("_withExternalForces") = false, ::boost::python::arg("_withDampingForces") = false, ::boost::python::arg("_withSpringForces") = false))
.def("clearConstraintImpulses", static_cast<void (dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::clearConstraintImpulses))
.def("updateBiasImpulse", static_cast<void (dart::dynamics::Skeleton::*)(dart::dynamics::BodyNode *)>(&dart::dynamics::Skeleton::updateBiasImpulse), (::boost::python::arg("_bodyNode")))
.def("updateBiasImpulse", static_cast<void (dart::dynamics::Skeleton::*)(dart::dynamics::BodyNode *, const Eigen::Vector6d &)>(&dart::dynamics::Skeleton::updateBiasImpulse), (::boost::python::arg("_bodyNode"), ::boost::python::arg("_imp")))
.def("updateBiasImpulse", static_cast<void (dart::dynamics::Skeleton::*)(dart::dynamics::BodyNode *, const Eigen::Vector6d &, dart::dynamics::BodyNode *, const Eigen::Vector6d &)>(&dart::dynamics::Skeleton::updateBiasImpulse), (::boost::python::arg("_bodyNode1"), ::boost::python::arg("_imp1"), ::boost::python::arg("_bodyNode2"), ::boost::python::arg("_imp2")))
.def("updateBiasImpulse", static_cast<void (dart::dynamics::Skeleton::*)(dart::dynamics::SoftBodyNode *, dart::dynamics::PointMass *, const Eigen::Vector3d &)>(&dart::dynamics::Skeleton::updateBiasImpulse), (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_pointMass"), ::boost::python::arg("_imp")))
.def("updateVelocityChange", static_cast<void (dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::updateVelocityChange))
.def("setImpulseApplied", static_cast<void (dart::dynamics::Skeleton::*)(bool)>(&dart::dynamics::Skeleton::setImpulseApplied), (::boost::python::arg("_val")))
.def("isImpulseApplied", static_cast<bool (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::isImpulseApplied))
.def("computeImpulseForwardDynamics", static_cast<void (dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::computeImpulseForwardDynamics))
.def("getJacobian", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *) const>(&dart::dynamics::Skeleton::getJacobian), (::boost::python::arg("_node")))
.def("getJacobian", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getJacobian), (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobian", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const Eigen::Vector3d &) const>(&dart::dynamics::Skeleton::getJacobian), (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobian", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getJacobian), (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getWorldJacobian", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *) const>(&dart::dynamics::Skeleton::getWorldJacobian), (::boost::python::arg("_node")))
.def("getWorldJacobian", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const Eigen::Vector3d &) const>(&dart::dynamics::Skeleton::getWorldJacobian), (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getLinearJacobian", static_cast<dart::math::LinearJacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getLinearJacobian), (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobian", static_cast<dart::math::LinearJacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getLinearJacobian), (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobian", static_cast<dart::math::AngularJacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getAngularJacobian), (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *) const>(&dart::dynamics::Skeleton::getJacobianSpatialDeriv), (::boost::python::arg("_node")))
.def("getJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getJacobianSpatialDeriv), (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const Eigen::Vector3d &) const>(&dart::dynamics::Skeleton::getJacobianSpatialDeriv), (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getJacobianSpatialDeriv), (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *) const>(&dart::dynamics::Skeleton::getJacobianClassicDeriv), (::boost::python::arg("_node")))
.def("getJacobianClassicDeriv", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getJacobianClassicDeriv), (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getJacobianClassicDeriv), (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", static_cast<dart::math::LinearJacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getLinearJacobianDeriv), (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", static_cast<dart::math::LinearJacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getLinearJacobianDeriv), (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobianDeriv", static_cast<dart::math::AngularJacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::JacobianNode *, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getAngularJacobianDeriv), (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getMass", static_cast<double (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getMass))
.def("getMassMatrix", static_cast<const Eigen::MatrixXd &(dart::dynamics::Skeleton::*)(std::size_t) const>(&dart::dynamics::Skeleton::getMassMatrix), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_treeIdx")))
.def("getMassMatrix", static_cast<const Eigen::MatrixXd &(dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getMassMatrix), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getAugMassMatrix", static_cast<const Eigen::MatrixXd &(dart::dynamics::Skeleton::*)(std::size_t) const>(&dart::dynamics::Skeleton::getAugMassMatrix), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_treeIdx")))
.def("getAugMassMatrix", static_cast<const Eigen::MatrixXd &(dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getAugMassMatrix), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getInvMassMatrix", static_cast<const Eigen::MatrixXd &(dart::dynamics::Skeleton::*)(std::size_t) const>(&dart::dynamics::Skeleton::getInvMassMatrix), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_treeIdx")))
.def("getInvMassMatrix", static_cast<const Eigen::MatrixXd &(dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getInvMassMatrix), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getInvAugMassMatrix", static_cast<const Eigen::MatrixXd &(dart::dynamics::Skeleton::*)(std::size_t) const>(&dart::dynamics::Skeleton::getInvAugMassMatrix), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_treeIdx")))
.def("getInvAugMassMatrix", static_cast<const Eigen::MatrixXd &(dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getInvAugMassMatrix), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getCoriolisForces", static_cast<const Eigen::VectorXd &(dart::dynamics::Skeleton::*)(std::size_t) const>(&dart::dynamics::Skeleton::getCoriolisForces), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_treeIdx")))
.def("getCoriolisForces", static_cast<const Eigen::VectorXd &(dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getCoriolisForces), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getGravityForces", static_cast<const Eigen::VectorXd &(dart::dynamics::Skeleton::*)(std::size_t) const>(&dart::dynamics::Skeleton::getGravityForces), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_treeIdx")))
.def("getGravityForces", static_cast<const Eigen::VectorXd &(dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getGravityForces), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getCoriolisAndGravityForces", static_cast<const Eigen::VectorXd &(dart::dynamics::Skeleton::*)(std::size_t) const>(&dart::dynamics::Skeleton::getCoriolisAndGravityForces), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_treeIdx")))
.def("getCoriolisAndGravityForces", static_cast<const Eigen::VectorXd &(dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getCoriolisAndGravityForces), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getExternalForces", static_cast<const Eigen::VectorXd &(dart::dynamics::Skeleton::*)(std::size_t) const>(&dart::dynamics::Skeleton::getExternalForces), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_treeIdx")))
.def("getExternalForces", static_cast<const Eigen::VectorXd &(dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getExternalForces), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getConstraintForces", static_cast<const Eigen::VectorXd &(dart::dynamics::Skeleton::*)(std::size_t) const>(&dart::dynamics::Skeleton::getConstraintForces), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_treeIdx")))
.def("getConstraintForces", static_cast<const Eigen::VectorXd &(dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getConstraintForces), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("clearExternalForces", static_cast<void (dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::clearExternalForces))
.def("clearInternalForces", static_cast<void (dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::clearInternalForces))
.def("notifyArticulatedInertiaUpdate", static_cast<void (dart::dynamics::Skeleton::*)(std::size_t)>(&dart::dynamics::Skeleton::notifyArticulatedInertiaUpdate), (::boost::python::arg("_treeIdx")))
.def("notifySupportUpdate", static_cast<void (dart::dynamics::Skeleton::*)(std::size_t)>(&dart::dynamics::Skeleton::notifySupportUpdate), (::boost::python::arg("_treeIdx")))
.def("getKineticEnergy", static_cast<double (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getKineticEnergy))
.def("getPotentialEnergy", static_cast<double (dart::dynamics::Skeleton::*)() const>(&dart::dynamics::Skeleton::getPotentialEnergy))
.def("getCOM", static_cast<Eigen::Vector3d (dart::dynamics::Skeleton::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getCOM), (::boost::python::arg("_withRespectTo")))
.def("getCOMSpatialVelocity", static_cast<Eigen::Vector6d (dart::dynamics::Skeleton::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getCOMSpatialVelocity), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearVelocity", static_cast<Eigen::Vector3d (dart::dynamics::Skeleton::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getCOMLinearVelocity), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMSpatialAcceleration", static_cast<Eigen::Vector6d (dart::dynamics::Skeleton::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getCOMSpatialAcceleration), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearAcceleration", static_cast<Eigen::Vector3d (dart::dynamics::Skeleton::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getCOMLinearAcceleration), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMJacobian", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getCOMJacobian), (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearJacobian", static_cast<dart::math::LinearJacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getCOMLinearJacobian), (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getCOMJacobianSpatialDeriv), (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearJacobianDeriv", static_cast<dart::math::LinearJacobian (dart::dynamics::Skeleton::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::Skeleton::getCOMLinearJacobianDeriv), (::boost::python::arg("_inCoordinatesOf")))
.def("draw", static_cast<void (dart::dynamics::Skeleton::*)(dart::renderer::RenderInterface *, const Eigen::Vector4d &, bool) const>(&dart::dynamics::Skeleton::draw), (::boost::python::arg("_ri"), ::boost::python::arg("_color"), ::boost::python::arg("_useDefaultColor") = true))
.def("drawMarkers", static_cast<void (dart::dynamics::Skeleton::*)(dart::renderer::RenderInterface *, const Eigen::Vector4d &, bool) const>(&dart::dynamics::Skeleton::drawMarkers), (::boost::python::arg("_ri"), ::boost::python::arg("_color"), ::boost::python::arg("_useDefaultColor") = true))
.def("resetUnion", static_cast<void (dart::dynamics::Skeleton::*)()>(&dart::dynamics::Skeleton::resetUnion))
.staticmethod("create")
.def_readwrite("mUnionRootSkeleton", &dart::dynamics::Skeleton::mUnionRootSkeleton)
.def_readwrite("mUnionSize", &dart::dynamics::Skeleton::mUnionSize)
.def_readwrite("mUnionIndex", &dart::dynamics::Skeleton::mUnionIndex)
;
}

/* footer */
