//
// Created by hazyparker on 22-6-20.
//

#ifndef LEETCODE_QUESTION1_H
#define LEETCODE_QUESTION1_H

#include <iostream>
#include <vector>

using namespace std;

/**
 * provide an interface
 */
void solution1();

/**
 * main process of calculating two-sum function
 * @param nums vector<int>
 * @param target int
 */
vector<int> twoSum(vector<int> &nums, int target);

bool isInRange(vector<int> &nums, int target);


#endif //LEETCODE_QUESTION1_H
