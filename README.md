# Calculate

## Reading Notice 阅读须知

If you aren't Chinese, just look at the following

如果你是一个中国人，只需往下翻阅，一直到中文版本

If you are developer, you should read To Developer

如果你是一个开发者，请你在中文版本阅读致开发者

If you aren't developer, you should read To Developer > Tips and To Developer > Environment

如果你不是一个开发者，请你阅读 致开发者 > 温馨提示 还有 致开发者 > 环境

If you are a lazy person, may be you can just read Author's environment and install it

如果你是一个懒人，也许你可以只阅读作者的环境并下载它

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
1 + 2 = 3
3 - 1 = 2
3 * 2 = 6
3 / 8 = 0.375
```

### Explain

You can input a + b or a - b or a \* b or a / b to calculate a + b or a - b or a \* b or a / b

(a is a integer and b is a integer too)

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

> If you use Mac, you can use this command to install it to /usr/local/bin

```bash
make install --file make/macmakefile
```

### Tips

If you are just a user, may be you should Build(in To Developer), Clean(also) and install(also) it

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
1 + 2 = 3
3 - 1 = 2
3 * 2 = 6
3 / 8 = 0.375
```

### 说明

你可以输入 a + b 或 a - b 或 a \* b 或 a / b 来计算 a + b 或 a - b 或 a \* b 或 a / b

(a 是一个整数并且 b 也是一个整数)

## 致开发者

这里有一个叫做 make 的目录，在这个目录下，你可以看到两个 makefile——winmakefile 和 unimakefile

这两个 makefile 功能如下：

winmakefile 是在 windows 平台下可以使用的 makefile

unimakefile 是在类 Unix 平台——Mac/Linux 下可以使用的 makefile

### 构建

> 如果你使用 Windows，你可以使用以下命令进行构建

```shell
make --file make\winmakefile
```

> 如果你使用 Mac，你可以使用以下命令进行构建

```bash
make --file make/macmakefile
```

### 清理

> 如果你使用 Windows，你可以使用以下命令进行清理

```shell
make clean --file make\winmakefile
```

> 如果你使用 Mac，你可以使用以下命令进行清理

```bash
make clean --file make/macmakefile
```

### 安装

> 如果你使用 Windows，你可以使用以下命令进行安装到桌面

```shell
make install --file make\winmakefile
```

> 如果你使用 Windows，你可以使用以下命令进行安装到/usr/local/bin

```bash
make install --file make/macmakefile
```

### 温馨提示

如果你只是一个用户，可能你需要按照以上步骤进行构建（在致开发者内）、清理（同理）并安装（同理）

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
