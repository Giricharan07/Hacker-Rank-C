/*
You are in-charge of the cake for your niece’s birthday and have decided the cake will have one candle for each year of her total age. When she blows out the candles, she’ll only be able to blow out the tallest ones. Your task is to find out how many candles she can successfully blow out.

For example, if your niece is turning years 4 old, and the cake will have candles of height 4, 4, 1, 3, she will be able to blow out 2 candles successfully, since the tallest candles are of height 4 and there are 2 such candles.

Function Description

Complete the function birthdayCakeCandles in the editor below. It must return an integer representing the number of candles she can blow out.

birthdayCakeCandles has the following parameter(s):
ar: an array of integers representing candle heights

Input Format:
The first line contains a single integer, n, denoting the number of candles on the cake.
The second line contains n space-separated integers, where each integer i describes the height of candle i.

Constraints:
1 < n < 10^5
1 < arr[i] < 10^7

Output Format:
Return the number of candles that can be blown out on a new line.

Sample Input 0:
4
3 2 1 3
Sample Output 0:
2
Explanation 0:

We have one candle of height 1, one candle of height 2, and two candles of height 3. 
Your niece only blows out the tallest candles, meaning the candles where height = 3.
Because there are 2 such candles, we print 2 on a new line.
*/

// ** "Solution in C **

void merge(int arr[], int l, int m, int r)      //Using Merge sort for sorting the data in  O(nlogn) Time
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}
 
int birthdayCakeCandles(int candles_count, int* candles) {
 long int i, j;
 long int k=(long int)candles_count;
 int count=0; 
    mergeSort(candles, 0,candles_count-1);
    int t=candles[candles_count-1];
    for(i=0;i<candles_count;i++)
    {
        if(candles[candles_count-1]==candles[i])
        {
            count++;
        }
    }
    return count;
}
