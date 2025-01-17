cmake_minimum_required(VERSION 3.29)
project(HW4MATAM)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Events)
include_directories(Players)

add_executable(HW4MATAM
        Charachters/Character.h
        Charachters/CharacterMaker.h
        Charachters/RiskTaking.h
        Jobs/AllJobs.h
        Jobs/Archer.h
        Jobs/Fast.h
        Jobs/Job.h
        Jobs/JobMaker.h
        Jobs/Magical.h
        Jobs/Magician.h
        Jobs/Magician.h
        Jobs/Warrior.h
        Players/PlayerMaker.h
)
