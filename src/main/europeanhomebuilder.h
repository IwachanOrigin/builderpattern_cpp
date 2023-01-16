
#ifndef EUROPEAN_HOME_BUILDER_H_
#define EUROPEAN_HOME_BUILDER_H_

#include "homebuildinterface.h"
#include "buildhome.h"

namespace design_pattern
{

class EuropeanHomeBuilder : public HomeBuildInterface
{
public:
  explicit EuropeanHomeBuilder();
  virtual ~EuropeanHomeBuilder();

  void setStructure();
  BuildHome* getResult() { return m_buildHome; }

private:
  BuildHome* m_buildHome;
};

} // design_pattern

#endif // EUROPEAN_HOME_BUILDER_H_
