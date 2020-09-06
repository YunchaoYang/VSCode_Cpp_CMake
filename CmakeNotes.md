configure_file可以将源文件拷贝到另一个位置的同时将源文件中的变量替换为变量的值。若变量未定义，则替换为空。
```
configure_file(
         "${CMAKE_CURRENT_SOURCE_DIR}/config.h.in"
         "${CMAKE_CURRENT_SOURCE_DIR}/config.h"
 )
``` 

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
install命令可以实现对工程的安装。实际上就是指定一些文件，在执行install命令的时候将其拷贝到对应的目录。这个命令可以很方便的将工程编译后的目标文件汇总将其提供给他人。
示例工程中，1使用如下命令：在执行install命令时会将工程的头文件，库文件和可执行文件拷贝到install文件中。所有安装的文件都被记录在install_manifest.txt文件中。
```cmake
#install dir prefix
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/install)
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/ DESTINATION include FILES_MATCHING PATTERN "*.h")
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib/ DESTINATION lib)
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/ DESTINATION bin)
```


[Cmake编写CmakeList.txt 语法备忘](https://blog.csdn.net/HW140701/article/details/90203141?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522159909366419724839833788%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fall.%2522%257D&request_id=159909366419724839833788&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~first_rank_ecpm_v3~pc_rank_v3-24-90203141.pc_ecpm_v3_pc_rank_v3&utm_term=cmake&spm=1018.2118.3001.4187 )

