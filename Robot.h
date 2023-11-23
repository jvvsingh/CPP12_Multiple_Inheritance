
#ifndef _ROBOT_H_
#define _ROBOT_H_

// Robot.h

#include "Person.h"
#include "Thing.h"

using namespace std;

// MI -- 4 classes, 5 objects
// VI -- 4 classes, 4 objects

//                          Multiple Inherit   Virtual Inherit
// &(Robot::robot_number)   0x16fa832e4   #5   0x16f0b3258   #1
// &(Core::host_url) Person 0x16fa831d8   #3   0x16f0b3270   #3
// &(Core::host_url) Thing  0x16fa83158   #1   0x16f0b3270   #3
// &(Thing::sequence_num)   0x16fa831c8   #2   0x16f0b3268   #2
// &(Person::SSN)           0x16fa83248   #4   0x16f0b32e8   #4

// Multiple Inheritance (smallest address first)
// Thing-Core
// Thing-Thing
// Person-Core
// Person-Person
// Robot

// Virtual Inheritance (smallest address first)
// Robot
// Person-Person
// Person-Thing-Core
// Thing-Thing

class Robot : virtual public Thing, virtual public Person
{
private:
protected:
public:
  int robot_number;
  Robot(std::string, std::string);
  Robot(std::string, std::string, GPS_DD *);
  Robot();
  bool operator==(Robot& aRobot);
  virtual Json::Value dump2JSON();
};

#endif  /* _ROBOT_H_ */
