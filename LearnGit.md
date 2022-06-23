# 廖雪峰 Git 学习笔记

## git init 
初始化一个新仓库(Repository)
## git add . 
添加文件到暂存区

## git log 
查看版本信息
## git reset  回退版本

HEAD 指针指向当前版本, HEAD^ 上一个版本， HEAD~100  前100个版本。

## git  reflog
用来记录了每一次命令, 和对应的版本号

## 工作区和暂存区
    - 工作区(Working Directory)：
        就是你在电脑里能看到的目录，比如当前目录 learngit 文件夹就是一个工作区
    - 版本库(Repository)：
        工作区有一个隐藏目录 .git, 这个不算工作区, 而是Git 的一个版本库

        Git 的版本库里存了很多东西，其中最重要的就是称为stage(或者叫index)的暂存区，还有 Git 自动为我们创建的第一个分支 master, 以及指向master的第一个指针叫 HEAD

    前面讲了我们把文件往Git版本库里添加的时候，是分两步执行的：

    第一步是用git add把文件添加进去，实际上就是把文件修改添加到暂存区；

    第二步是用git commit提交更改，实际上就是把暂存区的所有内容提交到当前分支。

    因为我们创建Git版本库时，Git自动为我们创建了唯一一个master分支，所以，现在，git commit就是往master分支上提交更改。

