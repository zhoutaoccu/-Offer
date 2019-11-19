#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *myReverse(char *myStr)
{
    if (myStr == NULL) return myStr;
    int len = strlen(myStr);
    int i = 0;
    int j = len - 1;
    while (i < j) {
        char temp = *(myStr + i);
        *(myStr + i) = *(myStr + j);
        *(myStr + j) = temp;
        i++;
        j--;
    }

    return myStr;
}

char *addStrings(char * num1, char * num2)
{
    int i = strlen(num1) - 1;
    int j = strlen(num2) - 1;
    int max_len = (i > j) ? i : j;
    int carry = 0;
    int base = 0;
    char *res = (char *)malloc(((max_len + 1) + 1 + 1) * sizeof(char));

    while( (i >= 0) || (j >= 0) || carry) {
        long sum = 0;

        if(i >= 0) {
            sum += (num1[i] - '0');
            i--;
        }

        if(j >= 0) {
            sum += (num2[j] - '0');
            j--;
        }

        sum += carry; 
        carry = sum / 10;
        sum = sum % 10;
        /* 拼接数字到字符串 */
        res[base] = '0' + sum;
        base++;
    }
    res[base] = '\0';

    return myReverse(res);
}

int main()
{
    char a[100] = "1";
    char b[100] = "9";
    printf("%s\n", addStrings(a, b));

}