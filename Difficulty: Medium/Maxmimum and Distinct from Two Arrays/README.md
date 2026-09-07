<h2><a href="https://www.geeksforgeeks.org/problems/maximize-the-array3340/1">Maxmimum and Distinct from Two Arrays</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given two arrays <strong>a[] </strong>and <strong>b[]</strong> of size <strong>n</strong>. Create an array of the same size using the elements from both the arrays such that the new array formed contains <strong>n greatest </strong>but <strong>unique </strong>elements of both the arrays. The order of elements should follow the below rules.</span></p>
<ul>
<li><span style="font-size: 18px;">All elements of second array appear before first array.</span></li>
<li><span style="font-size: 18px;">The order of appearance of elements is kept same in output as in input.</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Note:</strong> The input array will be given in such way, that every time it is possible to make a new arr by maintaing the given conditions.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> a[] = [2, 4, 3], b[] = [5, 6, 1] 
<strong>Output:</strong> [5, 6, 4] 
<strong>Explanation:</strong> As 5, 6 and 4 are maximum elements from two arrays giving second array higher priority. <br>Order of elements is same in output as in input.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> a[] = [7, 4, 8, 0, 1], b[] = [9, 10, 2, 3, 6] 
<strong>Output:</strong> [9, 10, 6, 7, 8]
<strong>Explanation:</strong> As 9, 10, 6, 7 and 8 are maximum elements from two arrays giving second array higher priority. <br>Order of elements is same in output as in input.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>5</sup><br>0 ≤ a[i], b[i] ≤ 10<sup>9</sup><br></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Heap</code>&nbsp;