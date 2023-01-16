
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

  void setPillar(std::string pillar) { m_pillar = pillar; }
  std::string getPillar() { return m_pillar; }
  void setWall(std::string wall) { m_wall = wall; }
  std::string getWall() { return m_wall; }
  void setRoof(std::string roof) { m_roof = roof; }
  std::string getRoof() { return m_roof; }

private:
  std::string m_pillar;
  std::string m_wall;
  std::string m_roof;
};

} // design_pattern

#endif // BUILD_HOME_H_
