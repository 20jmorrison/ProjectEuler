cmake_minimum_required(VERSION 3.26)
project(PrimeSieve)

set(CMAKE_CXX_STANDARD 17)

add_executable(PrimeSieve SieveDriver.cpp
        Eratosthenes_Sieve.h
        Eratosthenes_Sieve.cpp)
