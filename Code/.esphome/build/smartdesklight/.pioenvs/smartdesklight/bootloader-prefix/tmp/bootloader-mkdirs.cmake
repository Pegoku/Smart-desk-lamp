# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/home/pegoku/.platformio/packages/framework-espidf/components/bootloader/subproject")
  file(MAKE_DIRECTORY "/home/pegoku/.platformio/packages/framework-espidf/components/bootloader/subproject")
endif()
file(MAKE_DIRECTORY
  "/home/pegoku/Media/Projects/Code/GitHub/Smart-desk-lamp/Code/.esphome/build/smartdesklight/.pioenvs/smartdesklight/bootloader"
  "/home/pegoku/Media/Projects/Code/GitHub/Smart-desk-lamp/Code/.esphome/build/smartdesklight/.pioenvs/smartdesklight/bootloader-prefix"
  "/home/pegoku/Media/Projects/Code/GitHub/Smart-desk-lamp/Code/.esphome/build/smartdesklight/.pioenvs/smartdesklight/bootloader-prefix/tmp"
  "/home/pegoku/Media/Projects/Code/GitHub/Smart-desk-lamp/Code/.esphome/build/smartdesklight/.pioenvs/smartdesklight/bootloader-prefix/src/bootloader-stamp"
  "/home/pegoku/Media/Projects/Code/GitHub/Smart-desk-lamp/Code/.esphome/build/smartdesklight/.pioenvs/smartdesklight/bootloader-prefix/src"
  "/home/pegoku/Media/Projects/Code/GitHub/Smart-desk-lamp/Code/.esphome/build/smartdesklight/.pioenvs/smartdesklight/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/pegoku/Media/Projects/Code/GitHub/Smart-desk-lamp/Code/.esphome/build/smartdesklight/.pioenvs/smartdesklight/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/pegoku/Media/Projects/Code/GitHub/Smart-desk-lamp/Code/.esphome/build/smartdesklight/.pioenvs/smartdesklight/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
