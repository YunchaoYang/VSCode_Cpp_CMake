This is a wonderful example
https://blog.csdn.net/qq_35976351/article/details/91369797

https://blog.csdn.net/zhaoxr233/article/details/90667313?biz_id=102&utm_term=VS%20code%20cmake&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-0-90667313&spm=1018.2118.3001.4187

按F7或Shirft+F7就能自动在项目文件夹下新建一个Build文件夹，并将生成目标放至Build文件夹下

In launch.json add: "preLaunchTask": "build",  
"program": "${workspaceFolder}/build/${ProjectName}", 
