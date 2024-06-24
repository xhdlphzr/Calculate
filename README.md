# Calculate

## Version 0.2.0

Calculator using command line

## Instruction

### Input Sample

```
1 + 2
3 - 1
3 * 2
3 / 8
```

### Output Sample

```
3
2
6
0.375
```

### Explain

You can input a + b or a - b or a \* b or a / b to calculate a + b or a - b or a \* b or a / b

## To Developer

There have a make directory, in this directory, you can see two makefile: winmakefile and unimakefile.

The winmakefile is a makefile on Windows.

The unimakefile is a makefile on Mac/Linux

### Build

> If you use Windows, you can use this command to build it

```shell
make --file make\winmakefile
```

> If you use Mac/Linux, you can use this command to build it

```bash
make --file make/macmakefile
```

### Clean

> If you use Windows, you can use this command to clean it

```shell
make clean --file make\winmakefile
```

> If you use Mac/Linux, you can use this command to clean it

```bash
make clean --file make/macmakefile
```

### Install

> If you use Windows, you can use this command to install it to desktop

```shell
make install --file make\winmakefile
```

> If you use Mac, you can use this command to install it to desktop

```bash
make install --file make/macmakefile
```

### Environment

> Compiler

clang++

> build tool

make

#### Tips

if you use Windows, may be you can use MinGW or MSYS2

### Author's environment

MSYS2 - make

LLVM - clang++

# 计算器

## 版本 0.2.0

使用命令行的计算器

## 使用说明

### 输入样例

```
1 + 2
3 - 1
3 * 2
3 / 8

```

### 输出样例

```
3
2
6
0.375
3
```

### 说明

你可以输入 a + b 或 a - b 或 a \* b 或 a / b 来计算 a + b 或 a - b 或 a \* b 或 a / b

## 致开发者

这里有一个叫做 make 的目录，在这个目录下，你可以看到两个 makefile——winmakefile 和 unimakefile

这两个 makefile 功能如下：

winmakefile 是在 windows 平台下可以使用的 makefile

unimakefile 是在类 Unix 平台——Mac/Linux 下可以使用的 makefile

### 环境

> 编译器

clang++

> 生成工具

make

#### 温馨提示

如果你使用 windows，也许你可以试试 MinGW 或者 MSYS2

### 作者的环境

MSYS2 - make

LLVM - clang++
