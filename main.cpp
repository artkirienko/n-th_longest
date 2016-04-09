//
//  main.cpp
//  n-th_longest
//
//  Created by Artemy Kirienko on 05.04.16.
//  Copyright © 2016 Artemy Kirienko. All rights reserved.
//
//  Implement the function longest(array,n) where you will be given an array of
//  strings and then return the nth longest string in that array. e.g.
//  arr = ['Hello','World','Codewars','Katas'] n = 3;
//  should return 'World' because 'Codewars' length = 8 , 'Hello' length = 5,
//  so that is the 2nd longest word and then 'World' (although also word length
//  of 5, 'World' is after 'Hello' in the array). When words have the same
//  lengths, treat them in the order in which they exist in the array. Array
//  will never be empty and n > 0 always.
//

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <utility>

std::string longest(const std::vector<std::string>& arr, int n);

int main(int argc, const char * argv[]) {

// Tests:

    std::cout << "longest(['Hello','World','Codewars','Katas'], 3) should be equal to 'World'" << std::endl;
    std::vector<std::string> test_vect_1 = {"Hello", "World", "Codewars", "Katas"};
    std::string test_ans_1 = longest(test_vect_1, 3);
    std::cout << "The answer: " << test_ans_1 << std::endl;

    std::cout << "longest(['Hello','World','Codewars','Katas'], 4) should be equal to 'Katas'" << std::endl;
    std::vector<std::string> test_vect_2 = {"Hello", "World", "Codewars", "Katas"};
    std::string test_ans_2 = longest(test_vect_2, 4);
    std::cout << "The answer: " << test_ans_2 << std::endl;

    std::cout << "longest(['aa', 'bb', 'cc', 'dd', 'eee', 'b', 'f', 'ff', 'hhh', 'gggg'], 4) should be equal to 'aa'" << std::endl;
    std::vector<std::string> test_vect_3 = {"aa", "bb", "cc", "dd", "eee", "b", "f", "ff", "hhh", "gggg"};
    std::string test_ans_3 = longest(test_vect_3, 4);
    std::cout << "The answer: " << test_ans_3 << std::endl;

    std::cout << "longest(['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'k'], 1) should be equal to 'a'" << std::endl;
    std::vector<std::string> test_vect_4 = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "k"};
    std::string test_ans_4 = longest(test_vect_4, 1);
    std::cout << "The answer: " << test_ans_4 << std::endl;

    std::cout << "longest(['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'k', 'l'], 1) should be equal to 'a'" << std::endl;
    std::vector<std::string> test_vect_5 = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "k", "l"};
    std::string test_ans_5 = longest(test_vect_5, 1);
    std::cout << "The answer: " << test_ans_5 << std::endl;

    return 0;
}

std::string longest(const std::vector<std::string>& arr, int n) {
    if (arr.size() < n)
        return std::string();

    std::priority_queue<std::pair<std::pair<int, int>, std::string> > str_queue;
    for (int i = 0; i < arr.size(); ++i)
        str_queue.push(std::make_pair(std::make_pair(arr[i].size(), -i), arr[i]));

    std::pair<std::pair<int, int>, std::string> elem;
    for (int i = 0; i < n; ++i) {
        elem = str_queue.top();
        str_queue.pop();
    }

    return elem.second;
}

