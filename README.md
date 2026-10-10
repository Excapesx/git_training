# git_training

简易计算器（C++），支持加、减、乘、除四则运算。Git 培训作业。

## 功能

- 加法、减法、乘法、除法
- 支持小数

## 编译与运行

```bash
mkdir -p build
g++ -std=c++17 -Wall calculator.cpp -o build/calculator
./build/calculator
```

输入 `数字 运算符 数字`（例如 `3 + 5`），按回车显示结果。

## 目录结构

- `calculator.cpp`：计算器主程序
- `README.md`：使用说明
- `.gitignore`：Git 忽略规则

## 分支开发说明

- `feature/add-sub`：加法与减法（add / subtract）
- `feature/mul-div`：乘法与除法（multiply / divide）

两个分支开发完成后合并回 `master`。
## 使用示例

请输入算式（例如 3 + 5）：3 + 5
3 + 5 = 8