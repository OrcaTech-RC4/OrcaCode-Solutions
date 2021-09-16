https://open.kattis.com/problems/delimitersoup

Other valid methods (non-exhausive):

  * For subtask 1:
    * Cast array into an unordered set, iterate from 0 to 7777. Each time, check if i and 7777-i is in set. If in set, return Yes. If not, return No.
  * For subtask 2:
    * Cast array into an unordered set. Compare size of array and set. If sizes are equal, there is no duplicates. If sizes are not equal, duplicates exist.
  * For subtask 3:
    * Bin elements into map/dictionary/Counter. Find most common element.
