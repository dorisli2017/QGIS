##working log:
*05.06.2019 Monday.<br />
 *FALP algorithm:<br />
 -insert all label candidates in a priority queue with value= number of overlaps.<br />
 -insert the label with minimum value in solution.<br />
 -ignore other candidates of same point feature.<br />
 -ignore other overlapping labels.<br />
 -back to step 2.<br />
O(nlogn\*ignore()) for insertion. <br />
No weightings. <br />
 <br />
 <br />
 *Simple algorithm:<br />
-insert all label candidates in list
-iterate the list, adding all valid lables, block cooreponding neighbors.<br />
O(n\*ignore()) for insertion. <br />
Smaller label candidates, ealier insertion odering, higher priority<br />
No weightings. <br />
