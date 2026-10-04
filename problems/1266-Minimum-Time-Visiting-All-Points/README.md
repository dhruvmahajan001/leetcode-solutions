<div align="center">

# 1266. Minimum Time Visiting All Points

![Difficulty](https://img.shields.io/badge/DIFFICULTY-Easy-00b8a3?style=for-the-badge&labelColor=1a1a2e)  ![Language](https://img.shields.io/badge/LANGUAGE-C%2B%2B-6c5ce7?style=for-the-badge&labelColor=1a1a2e)  ![Solutions](https://img.shields.io/badge/SOLUTIONS-1-6c5ce7?style=for-the-badge&labelColor=1a1a2e)  ![Date](https://img.shields.io/badge/DATE-2026--10--04-605d5d?style=for-the-badge&labelColor=1a1a2e)

[![View on LeetCode](https://img.shields.io/badge/View%20on-LeetCode-ffa116?style=flat-square&logo=leetcode&logoColor=ffa116)](https://leetcode.com/problems/minimum-time-visiting-all-points/)

</div>

---

<div align="center">

<picture>
  <source media="(prefers-color-scheme: dark)" srcset="panel-dark.svg">
  <source media="(prefers-color-scheme: light)" srcset="panel-light.svg">
  <img alt="Topics: Array, Math, Geometry — best runtime 0 ms (Beats 100%), best memory 13.7 MB (Beats 87%)" src="panel-dark.svg">
</picture>

</div>

> **New personal best** — Runtime improved on this submission.

### HOW IT WENT

| | |
|:--|:--|
| **Attempts** | first try |
| **Time to solve** | under a minute |
| **Verdicts** | ✅ Accepted |

---

### NOTES

_No notes yet._

---

### SOLUTIONS (1)

| # | File | Language | Date |
|:-:|------|:--------:|:----:|
| 1 | [sol1.cpp](./sol1.cpp) | `C++` | 2026-10-04 ← **latest** |

---

### PROBLEM DESCRIPTION

On a 2D plane, there are `n` points with integer coordinates `points[i] = [x_i, y_i]`. Return *the **minimum time** in seconds to visit all the points in the order given by *`points`.

You can move according to these rules:

	- In `1` second, you can either:

	

		move vertically by one unit,

		- move horizontally by one unit, or

		- move diagonally `sqrt(2)` units (in other words, move one unit vertically then one unit horizontally in `1` second).

	

	
	- You have to visit the points in the same order as they appear in the array.

	- You are allowed to pass through points that appear later in the order, but these do not count as visits.

 

**Example 1:**

![](https://assets.leetcode.com/uploads/2019/11/14/1626_example_1.PNG)
```

**Input:** points = [[1,1],[3,4],[-1,0]]
**Output:** 7
**Explanation: **One optimal path is **[1,1]** -> [2,2] -> [3,3] -> **[3,4] **-> [2,3] -> [1,2] -> [0,1] -> **[-1,0]**   
Time from [1,1] to [3,4] = 3 seconds 
Time from [3,4] to [-1,0] = 4 seconds
Total time = 7 seconds
```

**Example 2:**

```

**Input:** points = [[3,2],[-2,2]]
**Output:** 5

```

 

**Constraints:**

	- `points.length == n`

	- `1 <= n <= 100`

	- `points[i].length == 2`

	- `-1000 <= points[i][0], points[i][1] <= 1000`

---

<div align="center">

<sub>Auto-synced by <strong>LeetSync</strong> · Built by <a href="https://deveshsamant.in/">Devesh Samant</a></sub>

</div>
