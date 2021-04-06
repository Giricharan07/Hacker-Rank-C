/*
Given a time in 12 -hour AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.

Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):
s: a string representing time in 12-hour format
Input Format:
A single string s containing a time in 12-hour clock format (i.e.: hh:mm:ssAM or hh:mm:ssPM), where 01 < hh < 12 and 00 < mm,ss < 59.

Constraints:
All input times are valid
Output Format:
Convert and print the given time in 24-hour format, where 00 < hh < 23.

Sample Input 0:
07:05:45PM
Sample Output 0:
19:05:45

*/

//** " Solution in C " **

char* timeConversion(char* s) {
    if (s[8]=='P') {
        if(s[0]=='1' && s[1]=='2')
        {
            s[8]='\0';
            s[9]='\0';
            return s;
        }
    }
     if(s[8]=='A')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]='0';
            s[1]='0';
        }
    }
    if(s[8]=='P')
    {
        if (s[1]==8 || s[1]==9 || s[0]==1) {
            s[0]=s[0]+1;
        }
        s[0]=s[0]+1;
        s[1]=s[1]+2;
    }   
    s[8]='\0';
    s[9]='\0';
    return s;
}
