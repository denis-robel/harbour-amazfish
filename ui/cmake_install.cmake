# Install script for directory: /home/denis/Development/SailfishOS/harbour-amazfish/ui

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/denis/Development/SailfishOS/harbour-amazfish/ui/o2/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/harbour-amazfish-ui/translations" TYPE FILE FILES
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-ar.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-be.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-cs.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-de.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-es.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-fa.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-fr.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-he.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-it.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-nb_NO.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-nl.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-pl.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-pt.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-pt_BR.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-ru.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-sv.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-ta.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-uk.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui-zh_CN.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/harbour-amazfish-ui" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/harbour-amazfish-ui")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/harbour-amazfish-ui"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/harbour-amazfish-ui" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/harbour-amazfish-ui")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/harbour-amazfish-ui")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/108x108/apps" TYPE FILE FILES "/home/denis/Development/SailfishOS/harbour-amazfish/ui/icons/108x108/harbour-amazfish-ui.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/172x172/apps" TYPE FILE FILES "/home/denis/Development/SailfishOS/harbour-amazfish/ui/icons/172x172/harbour-amazfish-ui.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/apps" TYPE FILE FILES "/home/denis/Development/SailfishOS/harbour-amazfish/ui/icons/128x128/harbour-amazfish-ui.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/86x86/apps" TYPE FILE FILES "/home/denis/Development/SailfishOS/harbour-amazfish/ui/icons/86x86/harbour-amazfish-ui.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/scalable/apps" TYPE FILE FILES "/home/denis/Development/SailfishOS/harbour-amazfish/ui/icons/scalable/harbour-amazfish-ui.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/metainfo" TYPE FILE FILES "/home/denis/Development/SailfishOS/harbour-amazfish/ui/harbour-amazfish-ui.appdata.xml")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/denis/Development/SailfishOS/harbour-amazfish/ui/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
