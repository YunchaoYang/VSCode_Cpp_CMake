# New VSCode try and tests

Adapted a VSCode_Cpp_Example from VoLinhTruc with some extra notes and comments


## VSCode LaTeX on Win
通过 Remote-WSL 插件连接 WSL
安装插件 LaTeX Workshop
sudo apt install texlive-full

## VSCode 命令窗口
根据首字符的不同功能：
- >默认接口。可匹配到并快捷执行 VSCode 提供的所有的接口。
- :跳转到指定行号；
- @跳转到指定符号；符号（Symbol），包括函数、变量、字段、结构等；
- @:依然是跳转到指定符号，但区别在于所有符号归类显示；
- ：跳转到指定文件。

Keyboard Shortcuts - keybindings.json
open the `keybindings.json` file from the `Command Palette (Ctrl+Shift+P)` with the Preferences: ``Open Keyboard Shortcuts (JSON)``

VScode launch.json和tasks.json文件的配置
https://blog.csdn.net/jzj_c_love/article/details/101443895?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522159905621619195188333733%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fall.%2522%257D&request_id=159905621619195188333733&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~first_rank_ecpm_v3~pc_rank_v3-4-101443895.pc_ecpm_v3_pc_rank_v3&utm_term=vs+code+tasksjson&spm=1018.2118.3001.4187

VSCode launch.json和tasks.json的变量说明
https://blog.csdn.net/wangbeibei23/article/details/106307886?biz_id=102&utm_term=vs%20code%20tasksjson&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-0-106307886&spm=1018.2118.3001.4187

VS Code 中Python 开发环境配置（Settings.json、launch.json、Tasks.json）
https://blog.csdn.net/afanyusong/article/details/78292200?biz_id=102&utm_term=vs%20code%20tasksjson&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-1-78292200&spm=1018.2118.3001.4187

VS Live Share，一个下载量接近千万的插件，能允许实时地同别人一同编辑及调试文件。与只注重结果的 Git 相比，VS Live Share 能展示同伴编辑的过程。

常见的json变量
${workspaceFolder} - the path of the folder opened in VS Code
${workspaceRootFolderName} - the name of the folder opened in VS Code without any slashes (/)
${file} - the current opened file
${relativeFile} - the current opened file relative to workspaceRoot
${fileBasename} - the current opened file’s basename
${fileBasenameNoExtension} - the current opened file’s basename with no file extension
${fileDirname} - the current opened file’s dirname
${fileExtname} - the current opened file’s extension
${cwd} - the task runner’s current working directory on startup
${lineNumber} - the current selected line number in the active file
${env:Path} - environment variables reference path
