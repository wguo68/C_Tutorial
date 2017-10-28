## sublime配置MinGW搭建C/C++编程环境,并解决控制台汉字输出乱码问题

当安装好MinGW和sublime text后，执行下面2个动作：

1. 按照菜单Tools——>Build System ——>New Build System新建一个“Build System”，其中输出下面内容：

```
{
  "cmd": ["gcc","-fexec-charset=GBK", "${file}", "-o","${file_path}/${file_base_name}"],
  "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:?(.*)$",
  "working_dir": "${file_path}",
  "encoding":"cp936",
  "selector": "source.c",
  "variants":
  [
    {
      "name": "Run",
       "cmd": ["cmd","/C","start","cmd","/c", "${file_path}/${file_base_name}.exe &pause"]
    }
  ]
}
```

将该“Build System”保存为比如“C.sublime-build”到“.../Packages/User/”路径下：Packages/User/C.sublime-build

2. 重启sublime，在Tools——>Build System 选择C


当要编译或运行C程序时，可以“Ctrl + Shift + B”。在弹出菜单中选择“C”表示编译，选择“C-Run”表示运行！

当然如果要编译c++程序，可以将gcc换成g++.
