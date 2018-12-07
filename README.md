# awesomeCC
awesome C Compiler

![](https://img.shields.io/travis/cjhahaha/awesomeCC.svg)
![](https://img.shields.io/badge/language-c++-green.svg)
![](https://img.shields.io/badge/license-GPL-blue.svg)


## TODO

1. 语法分析

   - [ ] 函数调用处理
   - [ ] Expression-Bool
   - [x] 控制语句

      - [x] if
      - [x] else
      - [ ] else if
      - [x] while
      - [ ] do
      - [x] for


3. 其他
   - [ ] unit test
   - [ ] build test
   - [ ] 堆栈的存储区🤔
     - [ ] 内存监控🤔
     - [ ] 一块静态区（常量？简单变量？） + 一块动态区（变量）（有递归的都要动态🤔？）
       - [ ] 每个block分配一个新的存储区
   - [ ] rewrite travis.yml
   - [ ] write INSTALLATION
   - [ ] 规范化Error
   - [ ] Error精准到char pos
