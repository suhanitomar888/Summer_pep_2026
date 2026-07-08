/*
floyd loop detection-
part 1->
dertect if exists
fast slow pointer approach
init fast and slow pointer at head
if slow and fast become equal then loop exists

part 2-> if loop exists, remove loop
re initialize slow at head again, keep fast at same place, move slow and fast by 1 step,  when they intersected(lets call it i), 
that will be the starting  point of loop, now to remove loop
traverse the loop and find the last node of loop and make its next as NULL
*/

// odd-even linked list
// 3756 lc
//19 lc
//86 lc
