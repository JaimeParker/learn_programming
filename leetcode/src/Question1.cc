//
// Created by hazyparker on 22-6-20.
//

// c++ libraries
#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <unordered_map>

// project headers
#include "Question1.h"

using namespace std;

void solution1(){
    default_random_engine  generator;
    uniform_int_distribution<int> intDistribution(0, 10000);
    int target = intDistribution(generator);

    target = 6;

    vector<int> nums;
//    int array_holder[8] = {5, 4, 7, 6, 1, 9, 5, 3};
    int array_holder[3] = {3,2,4};
    for (int & i : array_holder){
        nums.push_back(i);
    }
    cout << "original vector:" << endl;
    for (int & i : nums) cout << i << " ";
    cout << endl;

//    bool inRange = isInRange(nums, target);
//    if (inRange) twoSum(nums, target);
    twoSum(nums, target);
}

vector<int> twoSum(vector<int> &nums, int target){
    // define return
    vector<int> final;

    // create a hash map
    unordered_map<int, int> hashtable;
    for (int & i : nums){
        if (i + i != target) hashtable[i] = target - i;
    }

    // search
    int aim;
    int i;
    for (auto key : nums){
        aim = hashtable[key];
        if (hashtable.find(aim) == hashtable.end()){
            continue;  // not found
        }else{
            cout << "pair found:" << key << " and " << hashtable[key] << endl;
            break;
        }
    }

    for (i = 0; i < nums.size(); i++){
        aim = hashtable[nums[i]];
        if (hashtable.find(aim) == hashtable.end()) continue;
        else{
            final.push_back(i);
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == aim) final.push_back(j);
            }
            break;
        }
    }

    return final;
}

bool isInRange(vector<int> &nums, int target){
    bool inRange = false;

    // sort the vector
    sort(nums.begin(), nums.end());

    // is in range or not
    int length = int( nums.size() );
    if (target < nums[0] + nums[1] || target > nums[length - 1] + nums[length - 2]){
        inRange = false;
        cout << "target is not in range" << endl;
    } else{
        inRange = true;
        cout << "target is in range, proceeding calculating..." << endl;
    }

    return inRange;
}
