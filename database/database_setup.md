# MySQL 数据库环境搭建记录

## 日期
2026-09-15

## 安装环境
- 操作系统：Windows 10
- MySQL 版本：MySQL Community Server 8.0.42
- 安装方式：MySQL Installer（Custom/全部安装）
- 认证方式：Legacy Authentication Method（兼容 MySQL 5.x）
- 端口：3306
- 服务名：MySQL80

## 遇到的问题
1. 初始安装时未添加 `bin` 目录到系统环境变量，导致在 CMD 中输入 `mysql` 报“不是内部或外部命令”。
2. 解决方法：将 `C:\Program Files\MySQL\MySQL Server 8.0\bin` 手动添加到系统环境变量 Path 中。

## 验证结果
- 命令行验证成功：`mysql -u root -p` 可以正常进入 `mysql>` 提示符。
- 图形化工具 MySQL Workbench 验证成功，可正常连接 localhost:3306。

## 备注
- root 密码已记录在本地安全位置（切勿上传 GitHub）。
- 下一步计划：学习 SQL 基础语句，练习建表与查询。
