# leetcode
My practices

## 141-Linked List Cycle
經典的 [Tortoise and Hare Algorithm](http://www.csie.ntnu.edu.tw/~u91029/Function.html#4)問題
又稱 Floyd Cycle Detection Algorithm
題意要求**找出Cycle**
因此建立兩個不同移動速度的指標，直到兩者相遇，即有Cycle。
若兩者最後皆為 NULL，則無 Cycle。

* Space Complexity：O(1)
* Time Complexity：O(M+N)
* 相關延伸：
    * 更快的做法：[Brent’s Cycle Detection Algorithm](http://www.siafoo.net/algorithm/11)
    * Space Complexity：O(1)
    * Time Complexity：O(N)

## 142-Linked List Cycle II
為 Tortoise and Hare Algorithm 延伸問題
找出**開始Cycle的位置**
按照 141 作法延續，假設有 Cycle，
作法為：
1. 烏龜回 Linked list 的起始點，兔子不動
2. 烏龜與兔子每一輪都走一步，直到相遇的該節點即為Cycle的起始點。

* [Proof](https://math.stackexchange.com/questions/913499/proof-of-floyd-cycle-chasing-tortoise-and-hare)