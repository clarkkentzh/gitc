# Git的基本操作
## git
git是分布式版本控制软件，由林纳斯.托瓦斯创作。
## git安装
1. ubuntu linux的安装方法：
```sh
$ sudo apt-get install git
```
2. Mac ox的安装方法：
```sh
$ brew install git
```
## 创建git本地仓库
```sh
$ mkdir git
$ cd git
$ mkdir c
$ cd c
$ git init
```
## 增加文件
1. 复制已有的文件到当前目录里：
```sh
$ cp ../../c/*.c .
```
2. 创建一个新的文件。
```sh
$ touch hello.c
$ vim hello.c     //输出hello world字符串的C语言的程序（代码）
$ git status      //查看当前目录的状态
$ git add hello.c //把hello.c文件加到仓库中,文件跟踪
```
## 配置用户个人信息
```sh
$ git config --global user.name "clarkkent"
$ git config --global user.email "clarkkent.z@outlook.com"
$ git config --global core.editor vim
```
## 提交文件
```sh
$ git commit     //向本地git仓库提交,跟踪文件
```
```sh
1  First commit
2
3  Init commit
```
## 查看提交信息
```sh
$ git log    //查看提交相关的信息  
```
```sh
1 第一行：commit ID
2 第二行：提交作者名字和email
3 第三行：提交的时间
4 第四行：提交的信息标题
5 第五行：提交信息具体内容
```
![](http://p1.bpimg.com/1949/24c08e02fd9b8aec.png)
## git diff
```sh
$ git diff    //查看修改的源码
$ git diff commitID1 commitID2    //两个提交版本之间做比较
```
![](http://p1.bqimg.com/1949/54ff9fc1247145fb.png)
## 删除文件
1. 删除文件后，恢复文件
```sh
$ rm -rf hello.c
$ git status
$ git checkout hello.c
```
2. 从版本库删除文件（真正删除文件）
```sh
$ git rm hello.c //或者rm hello.c
$ git status
$ git add .       //.指当前目录下的所有文件
$ git commit
```
## 版本之间的切换
```sh
$ git reset --hard commitID    //根据commitID切换版本
```
## 忽略不需要跟踪到git仓库里的文件
```sh
$ touch .gitignore
$ vim .gitignore    将要忽略的文件名写入.gitignore
$ git add .
$ git commit
```
![](http://p1.bpimg.com/1949/edd08aaf6923229a.png)

# Github的基本用法
1. 注册github账号
    * 注意不能用QQ邮箱注册
2. 创建gitc仓库
3. 从github将创建的gitc仓库克隆到本地。
```sh
$ git clone https://github.com/username
```
4. 将本地仓库与github仓库进行同步，将本地提交推送到服务器上。
```sh
$ git push prigin master
$ input username
$ input password
```
![git](http://p1.bqimg.com/1949/2ade38d06f3e0e96.png)

5. 更新本地仓库，与github仓库进行同步，将服务器提交拉取到本地。
```sh
$ git pull
```
![git h](http://p1.bpimg.com/1949/e9e33759a70a44b2.png)
# MarkDown的基本用法
## 1. 标题
```sh
# 一号标题
## 二号标题
### 三号标题
#### 四号标题
##### 五号标题
###### 六号标题
```
### 效果：
# 一号标题
## 二号标题
### 三号标题
#### 四号标题
##### 五号标题
###### 六号标题
## 2. 字体属性
```sh
*星星一个是斜体*

_下划线一个是斜体_

**星星两个是粗体**

__下划线两个是粗体__

~~是删除一行~~

_You_ **can** _commit them_
```
### 效果：
*星星一个是斜体*

_下划线一个是斜体_

**星星两个是粗体**

__下划线两个是粗体__

~~是删除一行~~

_You_ **can** _commit them_
## 3.列表
```sh
无序列表

* 第一点问题

* 第二点问题

* 第三点问题

有序列表
1. 第一点问题

2. 第二点问题

3. 第三点问题
    1. 小问题
    1. 小问题
        * 小问题
4. 第四点问题
    * 小问题
    * 小问题
        * 小问题
        * 小问题

任务列表
* [x] 第一条任务
* [ ] 第二条任务
* [ ] 第三条任务
```
### 效果：
无序列表

* 第一点问题

* 第二点问题

* 第三点问题

有序列表
1. 第一点问题

2. 第二点问题

3. 第三点问题
    1. 小问题
    1. 小问题
        * 小问题
4. 第四点问题
    * 小问题
    * 小问题
        * 小问题
        * 小问题

任务列表
* [x] 第一条任务
* [ ] 第二条任务
* [ ] 第三条任务
## 4. 网址链接
```sh
参考文献
* ["网站名"] ("网址")

图片
!["图片名"]("图片的链接")    
```
### 效果：
* [百度] (http://www.baidu.com)

![美女](https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1489502275724&di=98842843e9cb7283ebc45bdd18d25c1a&imgtype=0&src=http%3A%2F%2Fimg5.duitang.com%2Fuploads%2Fitem%2F201511%2F15%2F20151115175457_XsWGu.jpeg)
## 5. 代码示例
\```c  
#include <stdio.h>  
int main(void){  
  printf("hello world!\n");  
  return 0;  
}  
\```
### 效果：
```c
#include <stdio.h>
int main(void){
  printf("hello world!\n");
  return 0;
}
```
## 6. 表情
```sh
:dash::dash::dash::dash::dash::dash:

:smile::smile::smile::smile::smile::smile:
```
### 效果：
:dash::dash::dash::dash::dash::dash:

:smile::smile::smile::smile::smile::smile:

## 7. 表格
```sh
学号 | 姓名 | 性别
-----|------|-----
001 | 姚建  | 男
002 | 师建伟 | 男
003 | 申勇哲 | 男
004 | 武海强 | 男
005 | 刘泓良 | 男
006 | 赵宏 | 男
007 | 张琨 | 男
008 | 董俊峰 | 男
009 | 姚宝山 | 男
010 | 肖金红 | 女
011 | 黄文倩 | 女
012 | 陈鹏飞 | 男
013 | 王晓伟 | 男
014 | 马彩虹 | 女
```
### 效果：
学号 | 姓名 | 性别
-----|------|-----
001 | 姚建  | 男
002 | 师建伟 | 男
003 | 申勇哲 | 男
004 | 武海强 | 男
005 | 刘泓良 | 男
006 | 赵宏 | 男
007 | 张琨 | 男
008 | 董俊峰 | 男
009 | 姚宝山 | 男
010 | 肖金红 | 女
011 | 黄文倩 | 女
012 | 陈鹏飞 | 男
013 | 王晓伟 | 男
014 | 马彩虹 | 女
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
