# Plus Minus

Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  **6** places after the decimal.

**Note:** This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to 10<sup>-6</sup> are acceptable.

**Example**
<br>
arr = [1,1,0,-1,-1]
There are **n = 5** elements, two positive, two negative and one zero. Their ratios are **2/5 = 0.400000**,**2/5 = 0.400000** and **1/5 = 0.200000**. Results are printed as:
<pre><code>0.400000
0.400000
0.200000
</code></pre>
**Functional Description**
<br>
Complete the plusMinus function in the editor below.<br>
plusMinus has the following parameter(s):<br>
<ul><li>int arr[n]: an array of integers</li></ul>

**Print**
<br>Print the ratios of positive, negative and zero values in the array. Each value should be printed on a separate line with  digits after the decimal. The function should not return a value.

**Input**
The first line contains an integer,_n_, the size of the array.
The second line contains _n_ space-separated integers that describe _arr[n]_.

**Constraints**

0 < n <= 10
-100 <= arr[i] <= 100

**Output Format**
**Print** the following **3** lines, each to **6** decimals:
<ol><li>proportion of positive values</li>
  <li>proportion of negative values</li>
  <li>proportion of zeros</li></ol>

**Sample Input**
<pre><code>STDIN           Function
-----           --------
6               arr[] size n = 6
-4 3 -9 0 4 1   arr = [-4, 3, -9, 0, 4, 1]
</code></pre>
