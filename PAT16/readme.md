# `中国大学MOOC-陈越、何钦铭-数据结构-起步能力自测题`
* 题目地址: https://pintia.cn/problem-sets/17/problems

## 题目 

* **第一题：打印沙漏（20 分）**  
本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印  
```
*****
 ***
  *
 ***
*****
```
所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。
给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。
### 输入格式:  
输入在一行给出1个正整数N（≤1000）和一个符号，中间以空格分隔。
### 输出格式:  
首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。  
### 输入样例:   
`19 *`
### 输出样例:  
```
*****
 ***
  *
 ***
*****
2
``` 

* **第二题：素数对猜想（20 分）**  
让我们定义d​n​​ 为：d​n​​ =p​n+1​​ −p​n​​ ，其中p​i​​ 是第i个素数。显然有d​1​​ =1，且于n>1有d​n​​ 是偶数。  
“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。  
现给定任意正整数N(<10^5)，请计算不超过N的满足猜想的素数对的个数。    
### 输入格式:  
输入在一行给出正整数N。 
### 输出格式:  
在一行中输出不超过N的满足猜想的素数对的个数。  
### 输入样例:  
`20` 
### 输出样例:  
`4`  

* **第三题：数组元素循环右移问题（20 分）**   
一个数组A中存有N（>0）个整数，在不允许使用另外数组的前提下，  
将每个整数循环向右移M（≥0）个位置，即将A中的数据由（A​0​​ A​1​​ ⋯A​N−1​​ ）变换为（A​N−M​​ ⋯A​N−1​​ A​0​​ A​1​​ ⋯A​N−M−1​​ ）  
（最后M个数循环移至最前面的M个位置）。  
如果需要考虑程序移动数据的次数尽量少，要如何设计移动的方法？  
### 输入格式:
每个输入包含一个测试用例，第1行输入N（1≤N≤100）和M（≥0）；第2行输入N个整数，之间用空格分隔。
### 输出格式:
在一行中输出循环右移M位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。
### 输入样例:
```
6 2
1 2 3 4 5 6
```
### 输出样例:
`5 6 1 2 3 4`

* **第四题：Have Fun with Numbers（20 分）**  
Notice that the number 123456789 is a 9-digit number consisting exactly the numbers from 1 to 9, with no duplication. Double it we will obtain 246913578, which happens to be another 9-digit number consisting exactly the numbers from 1 to 9, only in a different permutation. Check to see the result if we double it again!  
Now you are suppose to check if there are more numbers with this property. That is, double a given number with k digits, you are to tell if the resulting number consists of only a permutation of the digits in the original number.  
### Input Specification:
Each input contains one test case. Each case contains one positive integer with no more than 20 digits.  
### Output Specification:
For each test case, first print in a line "Yes" if doubling the input number gives a number that consists of only a permutation of the digits in the original number, or "No" if not. Then in the next line, print the doubled number.  
### Sample Input:
`1234567899`
### Sample Output:
```
Yes
2469135798
```

* **第五题：Shuffling Machine（20 分）**  
Shuffling is a procedure used to randomize a deck of playing cards. Because standard shuffling techniques are seen as weak, and in order to avoid "inside jobs" where employees collaborate with gamblers by performing inadequate shuffles, many casinos employ automatic shuffling machines. Your task is to simulate a shuffling machine.  
The machine shuffles a deck of 54 cards according to a given random order and repeats for a given number of times. It is assumed that the initial status of a card deck is in the following order:  
```
S1, S2, ..., S13, 
H1, H2, ..., H13, 
C1, C2, ..., C13, 
D1, D2, ..., D13, 
J1, J2
```  
where "S" stands for "Spade", "H" for "Heart", "C" for "Club", "D" for "Diamond", and "J" for "Joker". A given order is a permutation of distinct integers in [1, 54]. If the number at the i-th position is j, it means to move the card from position i to position j. For example, suppose we only have 5 cards: S3, H5, C1, D13 and J2. Given a shuffling order {4, 2, 5, 3, 1}, the result will be: J2, H5, D13, S3, C1. If we are to repeat the shuffling again, the result will be: C1, H5, S3, J2, D13.  

### Input Specification:  
Each input file contains one test case. For each case, the first line contains a positive integer K (≤20) which is the number of repeat times. Then the next line contains the given order. All the numbers in a line are separated by a space.  
### Output Specification:
For each test case, print the shuffling results in one line. All the cards are separated by a space, and there must be no extra space at the end of the line.  
### Sample Input:
```
2
36 52 37 38 3 39 40 53 54 41 11 12 13 42 43 44 2 4 23 24 25 26 27 6 7 8 48 49 50 51 9 10 14 15 16 5 17 18 19 1 20 21 22 28 29 30 31 32 33 34 35 45 46 47
```
### Sample Output:
```
S7 C11 C10 C12 S1 H7 H8 H9 D8 D9 S11 S12 S13 D10 D11 D12 S3 S4 S6 S10 H1 H2 C13 D2 D3 D4 H6 H3 D13 J1 J2 C1 C2 C3 C4 D1 S5 H5 H11 H12 C6 C7 C8 C9 S2 S8 S9 H10 D5 D6 D7 H4 H13 C5
```
