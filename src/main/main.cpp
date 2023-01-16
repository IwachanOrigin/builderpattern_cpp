
#include "homebuildinterface.h"
#include "modernhomebuilder.h"
#include "europeanhomebuilder.h"
#include "japaneasehomebuilder.h"
#include "director.h"
#include <memory>
#include <iostream>

using namespace design_pattern;

int main(int argc, char* argv[])
{
  std::unique_ptr<HomeBuildInterface> homeBuilder;
  std::unique_ptr<Director> director(new Director());
  int build_type = 2;

  switch(build_type)
  {
    case 0:
    {
      homeBuilder = std::make_unique<ModernHomeBuilder>();
    }
    break;

    case 1:
    {
      homeBuilder = std::make_unique<EuropeanHomeBuilder>();
    }
    break;

    case 2:
    {
      homeBuilder = std::make_unique<JapaneaseHomeBuilder>();
    }
    break;

    default:
    {
      homeBuilder = std::make_unique<JapaneaseHomeBuilder>();
    }
    break;
  }

  director->setupBuilder(homeBuilder.get());

  BuildHome* build = homeBuilder->getResult();
  std::cout << "住宅は" << std::endl;
  std::cout << "構造が[" << build->getPillar() << "]で" << std::endl;
  std::cout << "外壁が[" << build->getPillar() << "]で" << std::endl;
  std::cout << "屋根が[" << build->getPillar() << "]です。" << std::endl;

  build = nullptr;

  return 0;
}

