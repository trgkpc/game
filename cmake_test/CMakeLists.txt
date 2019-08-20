cmake_minimum_required(VERSION 3.0)

set(ROOT_DIR ${CMAKE_CURRENT_LIST_DIR}/..)
set(CARD_LIB_DIR ${ROOT_DIR}/card)
set(DRIVER_LIB_DIR ${ROOT_DIR}/driver)
set(MAIN_DIR ${ROOT_DIR}/cmake_test)

#add_include_directories(card_lib PUBLIC CARD_LIB_DIR)

file(GLOB MAIN_SOURCES
        ${MAIN_DIR}/*.cpp
        )
file(GLOB LIB_SOURCES
        ${CARD_LIB_DIR}/*.cpp
        ${DRIVER_LIB_DIR}/*.cpp
        )

add_executable(main ${MAIN_SOURCES} ${LIB_SOURCES})

