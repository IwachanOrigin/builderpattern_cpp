
#ifndef HOME_BUILD_INTERFACE_H_
#define HOME_BUILD_INTERFACE_H_

namespace design_pattern
{

class BuildHome;

class HomeBuildInterface
{
public:
  explicit HomeBuildInterface() = default;
  virtual ~HomeBuildInterface() = default;

  virtual void setStructure() = 0;
  virtual BuildHome* getResult() = 0;
};

} // design_pattern

#endif // HOME_BUILD_INTERFACE_H_
