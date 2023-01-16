
#ifndef DIRECTOR_H_
#define DIRECTOR_H_

#include "homebuildinterface.h"

namespace design_pattern
{

class Director
{
public:
  explicit Director() = default;
  ~Director() = default;

  void setupBuilder(HomeBuildInterface* builder);
};

}

#endif // DIRECTOR_H_
