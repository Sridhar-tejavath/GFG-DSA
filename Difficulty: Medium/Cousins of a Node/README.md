<h2><a href="https://www.geeksforgeeks.org/problems/cousins-of-a-given-node/1">Cousins of a Node</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given the <strong>root </strong>of a binary tree and a <strong>node</strong>, return all cousins (not siblings) of the given node in the order of their appearance.&nbsp; </span><span style="font-size: 18px;">If no cousins exist, return [-1].</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input : </span></strong><span style="font-size: 18px;">root[] = [1, 2, 3, 4, 5, 6, 7], node = 5</span><span style="font-size: 18px;"><br>       <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/928970/Web/Other/blobid0_1779780342.png" width="212" height="136"></span>
<span style="font-size: 18px;"><strong>Output :</strong> [6, 7]</span>
<strong><span style="font-size: 18px;">Explanation :</span> </strong><span style="font-size: 18px;">Node 5 is at the same level as nodes 4, 6, and 7. <br>Among them, node 4 is a sibling of 5 since both have the same parent (2), so it is not considered a cousin. <br>Nodes 6 and 7 have a different parent (3), making them cousins of node 5. Therefore, the output is 6 7.</span>
</pre>
<pre><strong><span style="font-size: 18px;">Input:</span></strong><span style="font-size: 18px;"> root[] = [9, 5, N], node = 5</span>
<span style="font-size: 18px;">         9</span>
<span style="font-size: 18px;">        /</span>
<span style="font-size: 18px;">       5<br></span><span style="font-size: 18px;"><strong>Output :</strong> [-1]</span>
<strong><span style="font-size: 18px;">Explanation :</span> </strong><span style="font-size: 18px;">There no other nodes than 5 in the same level. So output is [-1].</span>
</pre>
<div><span style="font-size: 18px;"><strong>Constraints :</strong></span></div>
<div><span style="font-size: 18px;">1 ≤ n ≤ 10<sup>5</sup>, n is number of nodes of the tree.</span></div></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;