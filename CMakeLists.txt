cmake_minimum_required(VERSION 3.16)
project(Kardz LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

add_executable(kardz src/main.cpp src/Board.cpp src/Game.cpp)
target_link_libraries(kardz PRIVATE sfml-graphics)
target_compile_features(kardz PRIVATE cxx_std_20)

if(WIN32)
    add_custom_command(
        TARGET kardz
        COMMENT "Copy OpenAL DLL"
        PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<BOOL:${ARCH_64BITS}>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:kardz>
        VERBATIM)
endif()

install(TARGETS kardz)
