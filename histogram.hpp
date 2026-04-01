#ifndef __HISTOGRAM__
#define __HISTOGRAM__
#include <cstring>

const unsigned MAX_SIZE = 51;

struct Histogram{
  char name[51];
  unsigned count;

  bool equals(const char* item) const{
    if(strcmp(item, name) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
  }
};

#endif 