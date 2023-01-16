
#include "modernhomebuilder.h"

using namespace design_pattern;

ModernHomeBuilder::ModernHomeBuilder()
  : HomeBuildInterface()
  , m_buildHome(new BuildHome())
{
}

ModernHomeBuilder::~ModernHomeBuilder()
{
  if (m_buildHome)
  {
    delete m_buildHome;
    m_buildHome = nullptr;
  }
}

void ModernHomeBuilder::setStructure()
{
  m_buildHome->setPillar("軽量鉄骨造");
  m_buildHome->setWall("コンクリート");
  m_buildHome->setRoof("コンクリート");
}

