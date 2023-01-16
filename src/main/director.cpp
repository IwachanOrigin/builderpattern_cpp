
#include "director.h"

using namespace design_pattern;

void Director::setupBuilder(HomeBuildInterface* builder)
{
  if (!builder)
  {
    return;
  }

  builder->setStructure();
}
