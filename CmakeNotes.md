configure_file可以将源文件拷贝到另一个位置的同时将源文件中的变量替换为变量的值。若变量未定义，则替换为空。
 configure_file(
         "${CMAKE_CURRENT_SOURCE_DIR}/config.h.in"
         "${CMAKE_CURRENT_SOURCE_DIR}/config.h"
 )
 
add_custom_command可以将自定义的规则添加到目标构建的过程中。

```cmake
# PRE_BUILD PRE_LINK POST_BUILD all after Linking
# different from what I expected, why??????
add_custom_command(TARGET ${PROJECT_NAME} PRE_BUILD
        COMMENT "pre build..." # show before the commands are executed
        VERBATIM # recommended as it enables correct behavior.
        )

add_custom_command(TARGET ${PROJECT_NAME} PRE_LINK
        COMMAND ${CMAKE_COMMAND} -E echo "pre link..."
        VERBATIM # recommended as it enables correct behavior.
        )

# copy version.h libversion after build target
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E echo "copy version.h $<TARGET_FILE_NAME:${PROJECT_NAME}>..."
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/version.h ${CMAKE_CURRENT_SOURCE_DIR}/../include
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/../lib/$<TARGET_FILE_NAME:${PROJECT_NAME}> ${CMAKE_CURRENT_SOURCE_DIR}/../bin
        VERBATIM
        )

```

option(USE_MYMATH "Use tutorial provided math implementation" ON)
// 提供一个选项是OFF或者ON，如果没有初始值被提供则默认使用OFF

install: 配置程序打包过程中的目标（TARGETS）、文件（FILES）、路径（DIRECTORY）、代码（CODE）和输出配置（EXPORT）
