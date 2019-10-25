#include <stdio.h>

int lengthOfLastWord(char * s){
    int real_len = 0;
    int len= 0;
    char *temp = s;
    /* 求字符串长度 */
    while ( *(temp++) ){
        len++;
    }

    if (len <= 0) return 0;

    int j = len - 1;
    for ( j = len - 1; j >= 0; j--){
        if ((s[j] == ' ') && (real_len == 0)) continue;
        else if (s[j] == ' ') return real_len;
        real_len++;

    }
    return real_len;

}

int lengthOfLastWord_0(char * s){
    int len = 0;
    char *temp = s;
    /* 求字符串长度 */
    while ( *(temp++) ){
        len++;
    }

    if (len <= 0) return 0;
    
    while (s[len - 1] == ' '){
        len--;
        if ((len - 1) < 0) break;
    }

    if (len <= 0) return 0;

    int j = len - 1;
    for ( j = len - 1; j >= 0; j--){
        if (s[j] == ' '){
            return (len - 1 - j);
        }
    }
    if (j == -1){
        return len;
    }
    else{
        return 0;
    }

}



int main(){
    printf("%d\n", lengthOfLastWord(" "));
    return 0;
    
}