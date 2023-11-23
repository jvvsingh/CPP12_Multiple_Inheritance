
// test_allin1.cpp

class Core
{
private:
protected:
public:
  double host_url;
};

class Person: public Core
{
private:
protected:
public:
  double SSN;
};

class Thing: public Core
{
private:
protected:
public:
  double sequence_num;
};

class Robot: public Thing, public Person
{
private:
protected:
public:
  double robot_number;
};

int
main
(int argc, char *argv[])
{
  Robot myRobot {};

  // std::cout << &(myRobot.robot_number) << std::endl;
  // std::cout << &(((Person&) myRobot).host_url) << std::endl;
  // std::cout << &(((Thing&) myRobot).host_url) << std::endl;
  // std::cout << &(myRobot.SSN) << std::endl;
  // std::cout << &(myRobot.sequence_num) << std::endl;
  
  return 0;
}
