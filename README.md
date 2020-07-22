# 簡易的C++教學

在Mac上寫C++有兩種方式，一種是利用Mac本身功能強大的Xcode，另一種是學普遍的開發方法。

---

## 用Xcode寫

---

## 正統Unix寫法

基本上任何比賽一定會給你Linux (Unix)系統用，所以通常為比賽而練的程式都會從開始就在Unix系統上學（當然還有其他意識和政治因素啦。總之因為Mac本身就是Unix的分支，要用Linux的寫法開發程式並不難。

首先選定編輯器，當然可以繼續用Xcode，主要要學的其實是如何用終端執行程式，但就覺得要是要用Xcode那就直接用Xcode的生態就好了啊

### 推薦的編輯器

- VS code 最適合初學者
- vim 終端原生編輯器
- gedit Linux GUI版的編輯器

除了VS code以外的兩個我覺得都太硬核了，因為他們不會給除錯的提示，所以就先用vs code吧。從[這裡](https://code.visualstudio.com/)安裝vscode後用創建一個檔案名為main.cpp（建議存在好找的地方啦，像是桌面或文件）。

```cpp
#include <iostream>
```

會引用基礎輸入輸出的模組

```cpp
using namespace std;
```

會預設程式使用std

接著我們要把主程式放到`main`裡面

```cpp
int main() {
    //程式放這
    return 0; //這行不用動
}
```

---

# 站外資源

- [stdc++.h](https://gist.github.com/reza-ryte-club/97c39f35dab0c45a5d924dd9e50c445f)
