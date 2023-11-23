
#include "Robot.h"

Robot::Robot(std::string arg_SSN, std::string arg_name)
  : Person(arg_SSN, arg_name), Thing()
{
}

Robot::Robot(std::string arg_SSN, std::string arg_name, GPS_DD * arg_home_ptr)
  : Person(arg_SSN, arg_name, arg_home_ptr), Thing()
{
}

Robot::Robot()
{
}

// function prototype
bool
Robot::operator==
(Robot& aRobot)
{
  return true;
}

Json::Value
Robot::dump2JSON
()
{
  Json::Value result = this->Person::dump2JSON();
  // JSON merge needed
  return result;
}
