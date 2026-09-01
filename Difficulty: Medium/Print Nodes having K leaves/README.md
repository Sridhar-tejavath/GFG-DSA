<h2><a href="https://www.geeksforgeeks.org/problems/print-nodes-having-k-leaves/1">Print Nodes having K leaves</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given the <strong>root </strong>of a binary tree and an integer <strong>k</strong>,&nbsp;find all nodes whose <strong>subtree </strong>contains exactly k <strong>leaf</strong> nodes.</span></p>
<ul>
<li><span style="font-size: 18px;">Return the node values in the order they appear in <strong>postorder </strong>traversal.</span></li>
<li><span style="font-size: 18px;">If no such node exists, return <strong>[-1]</strong>.</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>root[] = [0, 1, 2],<strong> </strong>k = 1
<strong><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/928951/Web/Other/blobid0_1779706668.webp" width="135" height="82"> <br>Output: </strong>[-1]<strong>
Explanation: </strong>There is no node in this tree which has one leaf in the sub tree below it.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>root[] = [0, 1, 2, N, N, 4, N, 5, 9],<strong> </strong>k = 2
<strong><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/928951/Web/Other/blobid1_1779706690.webp" width="127" height="169"> <br>Output: </strong>[4, 2]<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/928951/Web/Other/blobid2_1779706714.webp" width="127" height="169"><strong>
Explanation: </strong>Nodes with data 2 and 4, have 2 leaves (5, 9) in the subtree below it.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n, k ≤ 2*10<sup>4</sup><br>0 ≤ data of nodes ≤ 10<sup>4</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;