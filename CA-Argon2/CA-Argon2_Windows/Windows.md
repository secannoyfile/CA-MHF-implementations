# 对于Windows系统，直接运行Argon2.exe文件

弹出如下对话：

`Please input version(10|13):`

​	输入你需要的Argon2i的版本号，有10和13两个版本

`Please input parallelism:`

`Please input memory:`

​	输入Argon2i的p参数和m参数

`Whether to generate number of interation randomly[1/0]:`

​	是否需要自动随机生成循环次数t，t$\in${1，2，3，4，5}

​	输入1，表述需要，输入0，则会有如下对话：

`Please input interations:`

自行设置参数t

`Please input password:`

`Please input salt:`

然后输入口令和salt

接下来exe文件就会针对（pwd,salt）运行Argon2i。

以password和/somesalt为例子：

`Please input version(10|13):10`
		`Please input parallelism:1`
		`Please input memory:16`
		`Whether to generate number of interation randomly[1/0]:0`
		`Please input interations:1`

`Please input password:password`

`Please input salt:somesalt`

`Test Argon2i version number: 16`
		`Hash test: $v=16 t=1, m=16, p=1, pass=password, salt=somesalt:
	Hash:     81630552b8f3b1f48cdb1992c4c678643d490b2b5eb4ff6c4b3438b5621724b2
	Encoded:  $argon2i$v=16$m=65536,t=1,p=1$c29tZXNhbHQ$gWMFUrjzsfSM2xmSxMZ4ZD1JCytetP9sSzQ4tWIXJLI`