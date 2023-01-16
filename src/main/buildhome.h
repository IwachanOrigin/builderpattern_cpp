
#ifndef BUILD_HOME_H_
#define BUILD_HOME_H_

#include <string>

namespace design_pattern
{

class BuildHome
{
public:
  explicit BuildHome();
  ~BuildHome() = default;

  void setPillar(std::wstring pillar) { m_pillar = pillar; }
  std::wstring getPillar() { return m_pillar; }
  void setWall(std::wstring wall) { m_wall = wall; }
  std::wstring getWall() { return m_wall; }
  void setRoof(std::wstring roof) { m_roof = roof; }
  std::wstring getRoof() { return m_roof; }

private:
  std::wstring m_pillar;
  std::wstring m_wall;
  std::wstring m_roof;
};

} // design_pattern

#endif // BUILD_HOME_H_
