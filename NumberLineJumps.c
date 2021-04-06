/*You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).

The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump.
The second kangaroo starts at location x2 and moves at a rate of v2 meters per jump.
You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.
For example, 
kangaroo 1 starts at x1 = 2 with a jump distance v1 = 1 and
kangaroo starts at x2 = 1 with a jump distance of v2 = 2. 
After one jump, they are both at x = 3, 
(x1 + v1 = 2 +1, x2 + v2 = 1 +2), so our answer is YES.
Input Format:
A single line of four space-separated integers denoting the respective values of x1, v1, x2, and v2.
Sample Input 1:
0 2 5 3
Sample Output 1:
NO
Explanation 1:
The second kangaroo has a starting location that is ahead (further to the right) of the first kangaroo’s starting location (i.e., x2 > x1).
Because the second kangaroo moves at a faster rate (meaning v2 > v1) and is already ahead of the first kangaroo, the first kangaroo will never be able to catch up. 
Thus, we print NO.



*/
char* kangaroo(int x1, int v1, int x2, int v2) {
    char *str1="YES";
    char *str2="NO";
    long X1=(long)x1;
    long X2=(long)x2;
    int p=0;
   if(v1>v2)
   {
       int rem= (x1-x2)%(v1-v2);
       if(rem==0)
       {
           return str1;
       }
   }
   return str2;;
}
