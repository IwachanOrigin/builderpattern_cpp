
#ifndef MODERN_HOME_BUILDER_H_
#define MODERN_HOME_BUILDER_H_

#include "homebuildinterface.h"
#include "buildhome.h"

namespace design_pattern
{

class ModernHomeBuilder : public HomeBuildInterface
{
public:
  explicit ModernHomeBuilder();
  virtual ~ModernHomeBuilder();

  void setStructure();
  BuildHome* getResult() { return m_buildHome; }

private:
  BuildHome* m_buildHome;
};

} // design_pattern

#endif // MODERN_HOME_BUILDER_H_
