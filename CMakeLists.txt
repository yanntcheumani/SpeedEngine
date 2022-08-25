cmake_minimum_required(VERSION 3.23)
project(speedEngine VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.5
        COMPONENTS
        system window graphics network audio REQUIRED
        )
include_directories(Framework/incl)

set(AUDIOS Framework/src/Audio/audioManager.cpp
        Framework/src/Audio/AudioFile.cpp
        Framework/incl/Audio/StreamFile.hpp
        Framework/incl/Error/LoadSong.hpp
        Framework/incl/Error/Exception.hpp
        Framework/incl/Audio/AStreamFile.hpp Framework/incl/Audio/Audio.hpp Framework/src/Scene/Ascene.cpp Framework/incl/Scene/Ascene.hpp Framework/src/Scene/test/TestScene.cpp Framework/incl/Scene/test/TestScene.hpp)

add_executable(speedEngine main.cpp Framework/incl/Scene/IScene.hpp Framework/incl/Scene/SceneManager.hpp Framework/src/Scene/SceneManager.cpp Framework/src/Asset/AssetManager.cpp Framework/incl/Asset/AssetManager.hpp Framework/src/Event/InputManager.cpp Framework/incl/Event/InputManager.hpp ${AUDIOS} Framework/incl/Error/SceneError.hpp)
target_link_libraries(${PROJECT_NAME}
        PRIVATE sfml-window
        PRIVATE sfml-graphics
        PRIVATE sfml-audio
        )