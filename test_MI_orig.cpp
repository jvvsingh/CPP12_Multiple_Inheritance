
// test_MT4.cpp

#include "Robot.h"

int
main
(int argc, char *argv[])
{
  GPS_DD gps_TLC_UCDavis   { 38.53874868013882,  -121.7542091083306 };
  Robot myRobot { "987654321", "Felix" };

  ((Person&) myRobot).host_url = "http://127.0.0.1";
  ((Thing&) myRobot).host_url = "http://127.0.0.2";
  // myRobot.host_url = "http://127.0.0.1";
  
  std::cout << &(myRobot.robot_number) << std::endl;
  std::cout << &(((Person&) myRobot).host_url) << std::endl;
  std::cout << &(((Thing&) myRobot).host_url) << std::endl;
  std::cout << &(myRobot.SSN) << std::endl;
  std::cout << &(myRobot.sequence_num) << std::endl;
  
  return 0;
}
