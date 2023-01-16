
set(MAIN_SRC
  main.cpp
  buildhome.h
  buildhome.cpp
  director.h
  director.cpp
  homebuildinterface.h
  europeanhomebuilder.h
  europeanhomebuilder.cpp
  japaneasehomebuilder.h
  japaneasehomebuilder.cpp
  modernhomebuilder.h
  modernhomebuilder.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

