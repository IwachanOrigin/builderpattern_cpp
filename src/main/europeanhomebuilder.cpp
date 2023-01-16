
#include "europeanhomebuilder.h"

using namespace design_pattern;

EuropeanHomeBuilder::EuropeanHomeBuilder()
  : HomeBuildInterface()
  , m_buildHome(new BuildHome())
{
}

EuropeanHomeBuilder::~EuropeanHomeBuilder()
{
  if (m_buildHome)
  {
    delete m_buildHome;
    m_buildHome = nullptr;
  }
}

void EuropeanHomeBuilder::setStructure()
{
  m_buildHome->setPillar("木造");
  m_buildHome->setWall("サイディング");
  m_buildHome->setRoof("スレート葺き");
}

