
#ifndef JAPANESE_HOME_BUILDER_H_
#define JAPANESE_HOME_BUILDER_H_

#include "homebuildinterface.h"
#include "buildhome.h"

namespace design_pattern
{

class JapaneaseHomeBuilder : public HomeBuildInterface
{
public:
  explicit JapaneaseHomeBuilder();
  virtual ~JapaneaseHomeBuilder();

  void setStructure();
  BuildHome* getResult() { return m_buildHome; }

private:
  BuildHome* m_buildHome;
};

} // design_pattern

#endif // JAPANESE_HOME_BUILDER_H_
