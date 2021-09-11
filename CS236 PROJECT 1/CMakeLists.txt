cmake_minimum_required(VERSION 3.20)
project(CS236_PROJECT_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CS236_PROJECT_1
        ".idea/CS236 PROJECT 1.iml"
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        Automaton.h
        ColonAutomaton.cpp
        ColonAutomaton.h
        ColonDashAutomaton.cpp
        ColonDashAutomaton.h
        input.txt
        Lexer.cpp
        Lexer.h
        main.cpp
        Token.cpp
        Token.h)
