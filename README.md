## LeadingtoOffer
- 采用my_OJ项目模板生成，用于OJ刷题和笔试。
> 1.新建项目->Visual C++->Windows桌面->Windows桌面向导->控制台应用程序+空项目+去掉标头+去掉SDL。  
> 2.添加main.cpp包含一些常用头文件和常用输入模块。  
> 3.添加input.txt用于输入文件自动读取。  
> 4.项目->导出模板->选择my_OJ项目->设置说明+添加图片->完成。  
> 5.`C:\Users\zhout\Documents\Visual Studio 2017\Templates\ProjectTemplates`出现my_OJ.zip模板文件，解压后发现没有main.cpp  
> 6.将main.cpp文件复制到此目录，修改MyTemplate.vstemplate文件，添加`<ProjectItem ReplaceParameters="false" TargetFileName="main.cpp">main.cpp</ProjectItem>`,然后选择所有模板文件，右键添加到my_OJ.zip然后剪切到项目模板文件夹，替换原有文件。  
> PS：因为模板压缩包进去直接是文件，所有要选择模板具体文件压缩，而不是文件夹压缩。

LeetCode项目模板制作方法同上。
现在处于代码起步阶段，故将两者归为当下一个代码仓库。
LeetCode
========

LeetCode solutions in C++ 11 and Python3.

|NO.|Title|Solution|Note|Difficulty|Tag|
|---|-----|--------|----|----------|---|
|001|[Two Sum](https://leetcode.com/problems/two-sum)|[C++](001.%20Two%20Sum/main.cpp) [Python](001.%20Two%20Sum/solution.py)|[Note](000.%20Two%20Sum)|Easy|`Mapping`|
|461|[Hamming Distance](https://leetcode.com/problems/hamming-distance/description/)|[C++](461.%20Hamming%20Distance/main.cpp) [Python](461.%20Hamming%20Distance/solution.py)|[Note](461.%20Hamming%20Distance/README.md)|Easy|`Bit computation`|
|002|[Add Two Numbers](https://leetcode.com/problems/add-two-numbers/description/)|[C++](002.%20Add%20Two%20Numbers/main.cpp) [Python](002.%20Add%20Two%20Numbers/solution.py)|[Note](002.%20Add%20Two%20Numbers/README.md)|Medium|`Linked List`|