cmake_minimum_required(VERSION 3.20)
project(CS236_PROJECT_1)

set(CMAKE_CXX_STANDARD 23)

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
        CommaAutomaton.h
        AddAutomata.h
        CommentAutomata.h
        EternalCommentAutomata.h
        EternalStringAutomata.h
        FactsAutomata.h
        IdAutomata.h
        LeftParenAutomata.h
        RightParenAutomata.h
        MultiplyAutomata.h
        PeriodAutomata.h
        QueriesAutomata.h
        QuestionAutomata.h
        RulesAutomata.h
        SchemesAutomata.h
        StringAutomata.h
        input.txt
        Lexer.cpp
        Lexer.h
        main.cpp
        Token.cpp
        Token.h)
