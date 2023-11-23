
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
  
  std::cout << "robot_number     " << &(myRobot.robot_number) << std::endl;
  std::cout << "Person host_url  " << &(((Person&) myRobot).host_url) << std::endl;
  std::cout << "Thing host_url   " << &(((Thing&) myRobot).host_url) << std::endl;
  std::cout << "SSN              " << &(myRobot.SSN) << std::endl;
  std::cout << "sequence_num     " << &(myRobot.sequence_num) << std::endl;

  // casting
  Core   *core_ptr;
  Person *person_ptr;
  Thing  *thing_ptr;
  Robot  *robot_ptr;

  robot_ptr = &myRobot;
  core_ptr = robot_ptr;
  person_ptr = robot_ptr;
  thing_ptr = robot_ptr;

  std::cout << "Core   Object address    => " << core_ptr   << std::endl;
  std::cout << "Person Object address    => " << person_ptr << std::endl;
  std::cout << "Thing  Object address    => " << thing_ptr  << std::endl;
  std::cout << "Robot  Object address    => " << robot_ptr  << std::endl;

  void **vtable_ptr_ptr;
  
  vtable_ptr_ptr = (void **) robot_ptr;
  std::cout << "Robot vtable_ptr         => " << *vtable_ptr_ptr << std::endl;
  vtable_ptr_ptr = (void **) person_ptr;
  std::cout << "Person vtable_ptr        => " << *vtable_ptr_ptr << std::endl;
  vtable_ptr_ptr = (void **) thing_ptr;
  std::cout << "Thing vtable_ptr         => " << *vtable_ptr_ptr << std::endl;

  void **v_ptr;
  std::cout << "\nThing\n";
  v_ptr = (void **) (*vtable_ptr_ptr);
  std::cout << "vtable Thing             => " << ((void **) (((unsigned long long) v_ptr) + 0))
	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 0))
	    << std::endl;
  std::cout << "vtable Thing             => " << ((void **) (((unsigned long long) v_ptr) + 8))
	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 8))
	    << std::endl;
  std::cout << "vtable Thing             => " << ((void **) (((unsigned long long) v_ptr) + 16))
	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 16))
	    << std::endl;
  std::cout << "vtable Thing             => " << ((void **) (((unsigned long long) v_ptr) + 24))
	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 24))
	    << std::endl;
  std::cout << "vtable Thing             => " << ((void **) (((unsigned long long) v_ptr) + 32))
	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 32))
	    << std::endl;
  std::cout << "vtable Thing             => " << ((void **) (((unsigned long long) v_ptr) + 40))
    	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 40))
	    << std::endl;
  std::cout << "vtable Thing             => " << ((void **) (((unsigned long long) v_ptr) + 48))
    	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 48))
	    << std::endl;
  std::cout << "vtable Thing             => " << ((void **) (((unsigned long long) v_ptr) + 56))
    	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 56))
	    << std::endl;
  std::cout << "vtable Thing             => " << ((void **) (((unsigned long long) v_ptr) + 64))
    	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 64))
	    << std::endl;
  std::cout << "vtable Thing             => " << ((void **) (((unsigned long long) v_ptr) + 72))
    	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 72))
	    << std::endl;
  std::cout << "vtable Thing             => " << ((void **) (((unsigned long long) v_ptr) + 80))
    	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 80))
	    << std::endl;
  std::cout << "vtable Thing             => " << ((void **) (((unsigned long long) v_ptr) + 88))
    	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 88))
	    << std::endl;
  std::cout << "vtable Thing             => " << ((void **) (((unsigned long long) v_ptr) + 96))
    	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 96))
	    << std::endl;

  std::cout << "\nPerson\n";
  vtable_ptr_ptr = (void **) person_ptr;
  v_ptr = (void **) (*vtable_ptr_ptr);
  std::cout << "vtable Person            => " << ((void **) (((unsigned long long) v_ptr) + 0))
    	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 0))
	    << std::endl;
  std::cout << "vtable Person            => " << ((void **) (((unsigned long long) v_ptr) + 8))
    	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 8))
	    << std::endl;
  std::cout << "vtable Person            => " << ((void **) (((unsigned long long) v_ptr) + 16))
    	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 16))
	    << std::endl;
  std::cout << "vtable Person            => " << ((void **) (((unsigned long long) v_ptr) + 24))
    	    << " " <<  *((void **) (((unsigned long long) v_ptr) + 24))
	    << std::endl;

  return 0;
}
