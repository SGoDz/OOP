cmake_minimum_required(VERSION 2.8)

SET( BINARY_NAME main )
SET( CMAKE_CXX_FLAGS "-g -ggdb" )

SET( SOURCES
     main.cpp
     BuilderAction.cpp
     FolderCDR.cpp
     PathCDR.cpp
)

ADD_EXECUTABLE( ${BINARY_NAME} ${SOURCES} )

