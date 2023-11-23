
#include "Thing.h"

Thing::Thing
(void)
{
  this->sequence_num = 0;
}

bool
Thing::operator==
(const Thing& another)
{
  std::cout << "Thing::operator == was called\n";
  return (this->sequence_num == another.sequence_num);
}

Json::Value
Thing::dump2JSON
()
{
  Json::Value result;

  if (this->sequence_num != 0)
    {
      result["sequence number"] = this->sequence_num;
    }

  return result;
}
