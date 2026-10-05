# Install script for directory: /home/denis/Development/SailfishOS/harbour-amazfish/daemon

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
  include("/home/denis/Development/SailfishOS/harbour-amazfish/daemon/libwatchfish/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/denis/Development/SailfishOS/harbour-amazfish/daemon/Qt-AES/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/harbour-amazfishd" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/harbour-amazfishd")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/harbour-amazfishd"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/harbour-amazfishd" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/harbour-amazfishd")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/harbour-amazfishd")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/harbour-amazfishd/translations" TYPE FILE FILES
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-ar.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-be.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-cs.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-de.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-es.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-fa.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-fr.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-he.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-it.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-nb_NO.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-nl.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-pl.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-pt.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-pt_BR.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-ru.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-sv.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-ta.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-uk.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd-zh_Hans.qm"
    "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/harbour-amazfishd" TYPE FILE FILES "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/chirp.raw")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mapplauncherd/privileges.d" TYPE FILE FILES "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfishd.privileges")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/systemd/user" TYPE FILE FILES "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/harbour-amazfish.service")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/denis/Development/SailfishOS/harbour-amazfish/daemon/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
