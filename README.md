# 🎯 LeetCode 1512: Number of Good Pairs

An optimized C++ solution for finding identical pairs in an array. This approach abandons the traditional brute-force nested loop in favor of a **frequency counting memory array**, achieving a flawless 0ms execution time on LeetCode.

---

## 🚀 The Strategy: Trading Space for Time

The intuitive approach to this problem is to check every single number against every other number using a nested loop. However, that results in a heavily unoptimized $O(N^2)$ time complexity. 

This solution optimizes the process by walking through the array **exactly once**. 

As we iterate through the dataset, we maintain a "memory bank" (a frequency array) that tracks how many times we have seen each number. When we encounter a number we have seen before, it instantly forms a new pair with *every* previous occurrence of that number. We simply add the existing frequency to our total pair count and update our memory bank for the next iteration.

---

## 📊 Complexity Breakdown

* **Time Complexity:** $O(N)$ 
  We iterate through the input array only one time, looking up the required data in our memory bank instantly.
* **Space Complexity:** $O(1)$ 
  The frequency array is strictly bound to 101 elements (matching the problem's exact constraints). This means it uses a tiny, constant amount of auxiliary memory regardless of how massive the input array gets.
* **Performance:** Beats 100% of C++ submissions in runtime (0ms).

---

## 🛠️ Built With
* **C++** (Utilizing `std::vector` for safe memory management and fast I/O optimizations)
