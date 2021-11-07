cmake_minimum_required(VERSION 3.20)
project(modern-cpp-weekly)

file(GLOB FOLDERS 20*)

foreach(FOLDER ${FOLDERS})
    add_subdirectory(${FOLDER})
endforeach(FOLDER ${FOLDERS})