
#ifndef _THING_H_
#define _THING_H_

// Thing.h

#include "ecs36b_Common.h"
#include "ecs36b_Exception.h"
#include "Core.h"

using namespace std;

class Thing : virtual public Core
{
 private:
 protected:
 public:
  
  unsigned int sequence_num;

  Thing(void);
  bool operator==(const Thing&); 
  virtual Json::Value dump2JSON();
};

#endif /* _THING_H_ */
