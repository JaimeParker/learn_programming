# question1 two sum

[question link](https://leetcode.cn/problems/two-sum/)

给定一个整数数组 nums和一个整数目标值 target，请你在该数组中找出和为目标值 target 的
那两个整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。

## think

using std `vector`, because the range of array is known;

search strategy: (< $O(n^2)$ )

首先应该判断是否存在这样的数，可以将数组排序，若该`target`不在最大（小）的两个元素的和的
范围内，则不存在这样的组合。

没想出来，参考标答；获得的启发是用`target - i`，配以hash map， 构造key-value对，应该
是查找是否存在对应的value；

Internally unordered_map is implemented using Hash Table, 
the key provided to map are hashed into indices of a hash table that is why the performance of data structure depends on hash function a lot but on an average, 
the cost of search, insert and delete from the hash table is O(1).

首先学习hash map，参考教程介绍hash map：
* [unordered map(cpp Ref)](https://en.cppreference.com/w/cpp/container/unordered_map)
* [CSDN hasp map](https://blog.csdn.net/qq_33216029/article/details/96470266#t6)
* [unordered map(GfG)](https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/)
