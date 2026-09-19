<h2><a href="https://www.geeksforgeeks.org/problems/maximum-number-of-events-that-can-be-attended--170636/1">Maximum Events to be Attended</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given <strong>n</strong> events represented by the arrays <strong>start[]</strong> and <strong>end[]</strong>, where the i-th event starts on start[i] and ends on end[i], you can attend the event on any one day within the range [start[i], end[i]].&nbsp; </span><span style="font-size: 18px;">You can attend at most one event per day.</span></p>
<p><span style="font-size: 18px;">Find the maximum number of events that can be attended.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>start[] = [1, 2, 1], end[] = [1, 2, 2]
<strong>Output: </strong>2
<strong>Explanation: </strong>One possible way to attend the maximum 2 events is:
Attend the 1st event on Day 1 and 2nd event on Day 2.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>start[] = [1, 2, 3], end[] = [2, 3, 4] 
<strong>Output : </strong>3</span>
<span style="font-size: 18px;"><strong>Explanation: </strong></span><span style="font-size: 18px;">One possible way to attend all the 3 events is:
Attend the 1st event on Day 1, the 2nd event on Day 2, and the 3rd event on Day 3.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>5</sup><br>1 ≤ start[i]&nbsp;≤ end[i] ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Greedy</code>&nbsp;<code>Sorting</code>&nbsp;<code>Heap</code>&nbsp;