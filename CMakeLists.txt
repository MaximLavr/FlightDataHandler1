cmake_minimum_required(VERSION 3.14)

project(FlightDataHandler C CXX)
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/glfw)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/glew)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/FreeImage)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libpng/1.6.37)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0)

add_executable(FlightDataHandler
        ${CMAKE_CURRENT_SOURCE_DIR}/Application/app.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Application/UI/button.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Application/Map/map_part.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Application/Map/map.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Application/Utils/CoordsConverter.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Application/Utils/coords_converter2.cpp

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/engine.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/sparky.h


        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/utils/timestep.h

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/maths/maths.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/maths/vec3.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/maths/vec2.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/maths/vec4.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/maths/mat4.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/maths/rectangle.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/maths/aabb.cpp

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/physics/physics.cpp

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/utils/fileutils.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/utils/timer.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/utils/imageLoad.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/utils/stringutils.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/utils/colorTransformer.h

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/audio/sound_manager.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/audio/sound.cpp

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/shadow.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/ray.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/particle.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/window.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/light.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/lightsetup.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/camera.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/shader.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/font.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/font_manager.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/buffers/buffer.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/buffers/indexbuffer.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/buffers/vertexarray.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/batchrenderer2d.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/sprite.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/layers/layer.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/layers/group.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/texture.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/texture.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/label.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/label.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/texture_manager.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/texture.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/renderer2d.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/src/graphics/renderable2d.h

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/freetype_headers.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/freetype-gl/common.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/freetype-gl/freetype-gl.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/freetype-gl/opengl.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/freetype-gl/platform.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/freetype-gl/platform.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/freetype-gl/texture-atlas.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/freetype-gl/texture-atlas.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/freetype-gl/texture-font.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/freetype-gl/texture-font.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/freetype-gl/vec234.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/freetype-gl/vector.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/freetype-gl/vector.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/include/freetype/freetype.h

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/gorilla-audio/include/gorilla/ga_internal.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/gorilla-audio/src/ga_stream.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/gorilla-audio/src/ga.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/gorilla-audio/include/gorilla/ga.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/gorilla-audio/src/gau.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/gorilla-audio/include/gorilla/gau.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/gorilla-audio/src/common/gc_common.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/gorilla-audio/include/gorilla/common/gc_common.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/gorilla-audio/src/common/gc_thread.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/gorilla-audio/include/gorilla/common/gc_thread.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/gorilla-audio/include/gorilla/common/gc_types.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/gorilla-audio/src/devices/ga_openal.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/gorilla-audio/include/gorilla/devices/ga_openal.h

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/include/vorbis/codec.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/include/vorbis/vorbisenc.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/include/vorbis/vorbisfile.h

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/books/coupled/res_books_stereo.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/books/floor/floor_books.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/books/uncoupled/res_books_uncoupled.h

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/floor_all.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/psych_8.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/psych_11.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/psych_16.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/psych_44.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/residue_8.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/residue_16.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/residue_44.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/residue_44u.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/setup_8.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/setup_11.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/setup_16.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/setup_22.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/setup_32.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/setup_44.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/setup_44u.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/modes/setup_X.h

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/analysis.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/backends.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/barkmel.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/bitrate.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/bitrate.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/block.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/codebook.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/codebook.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/codec_internal.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/envelope.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/envelope.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/floor0.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/floor1.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/highlevel.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/info.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/lookup.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/lookup.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/lookup_data.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/lpc.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/lpc.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/lsp.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/lsp.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/mapping0.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/mdct.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/mdct.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/misc.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/os.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/psy.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/psy.h

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/registry.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/registry.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/res0.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/scales.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/sharedbook.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/smallft.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/smallft.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/synthesis.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/tone.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/vorbisenc.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/vorbisfile.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/window.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libvorbis/lib/window.h

        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libogg/include/ogg/config_types.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libogg/include/ogg/ogg.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libogg/include/ogg/os_types.h
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libogg/src/bitwise.c
        ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libogg/src/framing.c
        )

target_include_directories(FlightDataHandler PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/FreeImage/Source)
target_include_directories(FlightDataHandler PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/freetype-2.10.0/include)
target_include_directories(FlightDataHandler PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/box2d/2.4.1/include)
target_include_directories(FlightDataHandler PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/boost/1.81.0_1/include)
target_include_directories(FlightDataHandler PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/imagemagick/7.1.1-7/include/ImageMagick-7/Magick++)
target_include_directories(FlightDataHandler PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/imagemagick/7.1.1-7/include/ImageMagick-7/MagickCore)
target_include_directories(FlightDataHandler PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/imagemagick/7.1.1-7/include/ImageMagick-7/MagickWand)
target_include_directories(FlightDataHandler PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/imagemagick/7.1.1-7/include/ImageMagick-7)
target_include_directories(FlightDataHandler PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/opencv/4.7.0_3/include/opencv4)
target_include_directories(FlightDataHandler PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/curl/8.0.1/include)


target_link_libraries(FlightDataHandler glfw)
target_link_libraries(FlightDataHandler libglew_static)
target_link_libraries(FlightDataHandler FreeImage)
target_link_libraries(FlightDataHandler freetype)
target_link_libraries(FlightDataHandler ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/openal-soft/1.22.2/lib/libopenal.dylib)
target_link_libraries(FlightDataHandler ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/libpng/1.6.37/lib/libpng16.a)
target_link_libraries(FlightDataHandler ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/box2d/2.4.1/lib/libbox2d.a)
target_link_libraries(FlightDataHandler ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/curl/8.0.1/lib/libcurl.4.dylib)
target_link_libraries(FlightDataHandler ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/imagemagick/7.1.1-7/lib/libMagick++-7.Q16HDRI.5.dylib)
target_link_libraries(FlightDataHandler ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/imagemagick/7.1.1-7/lib/libMagick++-7.Q16HDRI.dylib)
target_link_libraries(FlightDataHandler ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/imagemagick/7.1.1-7/lib/libMagick++-7.Q16HDRI.dylib)
target_link_libraries(FlightDataHandler ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/imagemagick/7.1.1-7/lib/libMagickCore-7.Q16HDRI.dylib)
target_link_libraries(FlightDataHandler ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/imagemagick/7.1.1-7/lib/libMagickWand-7.Q16HDRI.10.dylib)
target_link_libraries(FlightDataHandler ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/imagemagick/7.1.1-7/lib/libMagickWand-7.Q16HDRI.dylib)

target_link_libraries(FlightDataHandler ${CMAKE_CURRENT_SOURCE_DIR}/SparkyEngine/lib/imagemagick/7.1.1-7/lib/libMagickWand-7.Q16HDRI.dylib)

find_package(curl REQUIRED)
find_package(imagemagick REQUIRED)
find_package(OpenCV REQUIRED)

target_link_libraries(FlightDataHandler ${OpenCV_LIBS})

if (APPLE)
    target_link_libraries(FlightDataHandler "-framework OpenGL")
endif()
