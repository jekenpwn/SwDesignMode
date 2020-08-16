cmake_minimum_required (VERSION 2.6)

project (designmode_observer)
# The source files 
set(SRCS_DIR src/PublicSubject.cpp  src/WechatObserver.cpp designmode_observer.cpp)
# The header files
include_directories(inc)

set(CMAKE_CXX_FLAGS  "-g -std=c++11")
add_executable(designmode_observer ${SRCS_DIR})
