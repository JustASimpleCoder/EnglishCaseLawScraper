cmake_minimum_required(VERSION 3.0.0)
project(main VERSION 0.1.0)

include_directories(
  C:/Users/Jacob Cohen/vcpkg/installed/x64-windows/include
)

LINK_DIRECTORIES(
  C:/Users/Jacob Cohen/vcpkg/installed/x64-windows/lib
)

set(CMAKE_PREFIX_PATH "C:/Users/Jacob Cohen/vcpkg/installed/x64-windows")
# Use vcpkg toolchain file
set(CMAKE_TOOLCHAIN_FILE "C:/Users/Jacob Cohen/vcpkg/scripts/buildsystems/vcpkg.cmake")

add_executable(main main.cpp)
target_compile_features(main PRIVATE cxx_std_20)

find_package(cpr CONFIG REQUIRED)
target_link_libraries(main PRIVATE cpr::cpr)

find_package(LibXml2 REQUIRED)
target_link_libraries(main PRIVATE LibXml2::LibXml2)

cmake_minimum_required(VERSION 3.10)  # You can increase the minimum version
project(main VERSION 0.1.0)