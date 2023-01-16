
#include "japaneasehomebuilder.h"

using namespace design_pattern;

JapaneaseHomeBuilder::JapaneaseHomeBuilder()
  : HomeBuildInterface()
  , m_buildHome(new BuildHome())
{
}

JapaneaseHomeBuilder::~JapaneaseHomeBuilder()
{
  if (m_buildHome)
  {
    delete m_buildHome;
    m_buildHome = nullptr;
  }
}

void JapaneaseHomeBuilder::setStructure()
{
  m_buildHome->setPillar(L"木造");
  m_buildHome->setWall(L"和風タイル張り");
  m_buildHome->setRoof(L"瓦");
}

