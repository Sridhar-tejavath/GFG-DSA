<h2><a href="https://www.geeksforgeeks.org/problems/water-the-plants--141631/1">Pair with Close Values and Indexes</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given an integer array arr[] and integers <strong>idxDiff</strong>, <strong>valDiff</strong>. Determine whether there exists a pair of indices (i, j) such that:<br></span></p>
<ul>
<li><span style="font-size: 18px;">i != j</span></li>
<li><span style="font-size: 18px;">abs(i - j)&nbsp;≤&nbsp;indDiff</span></li>
<li><span style="font-size: 18px;">abs(arr[i] - arr[j])&nbsp;≤&nbsp;valDiff</span></li>
</ul>
<p><span style="font-size: 18px;">Return true if such a pair exists; otherwise, return false.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 2, 3, 1], idxDiff = 3, valDiff = 0
<strong>Output: </strong>true
<strong>Explanation: </strong>The pair of indices (0, 3) satisfies all the conditions: abs(0 - 3) = 3 and abs(arr[0] - arr[3]) = abs(1 - 1) = 0.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 5, 9, 1, 5, 9], idxDiff = 2, valDiff = 3
<strong>Output: </strong>false
<strong>Explanation: </strong></span><span style="font-size: 18px;">No pair of indices satisfies both the conditions.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>5</sup><br>-10<sup>9</sup> ≤ arr[i] ≤ 10<sup>9<br></sup>1 ≤ idxDiff ≤ n-1<sup><br></sup>0 ≤ valDiff ≤ 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Greedy</code>&nbsp;<code>Sorting</code>&nbsp;