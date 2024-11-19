# Versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.10)

# Detectar automáticamente el nombre del proyecto basado en el nombre del directorio actual
get_filename_component(PROJECT_NAME ${CMAKE_SOURCE_DIR} NAME)

# Establecer el nombre del proyecto y su versión
project(${PROJECT_NAME} VERSION 1.0)

# Configuración del estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Detectar automáticamente todos los archivos fuente en el directorio del proyecto
file(GLOB_RECURSE SOURCES "${CMAKE_SOURCE_DIR}/*.cpp" "${CMAKE_SOURCE_DIR}/*.c")

# Crear el ejecutable usando los archivos detectados
add_executable(${PROJECT_NAME} ${SOURCES})

# Opcional: incluir rutas de encabezados (headers)
include_directories(${CMAKE_SOURCE_DIR}/include)

# Opcional: añadir librerías externas
# find_package(SomeLibrary REQUIRED)
# target_link_libraries(${PROJECT_NAME} PRIVATE SomeLibrary)

# Opcional: definir directorio de salida de los binarios
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

