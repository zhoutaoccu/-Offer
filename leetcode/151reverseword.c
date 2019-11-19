#include <stdio.h>

void reverseAll(char * s1, char * s2) {
    if ((s1 == NULL) || (s2 == NULL)) {
        return;
    }
	
    char temp = 0;

    while (s1 < s2) {
        temp = *s1;
        *s1 = *s2;
        *s2 = *s1;
        s1++;
        s2--;
    }
}

char * reverseWords(char * s) {
    if (s == NULL) return NULL;
	
    char *end = s;
    while (*s != '\0') {
        end++;
    }
    end--;

    reverseAll(s, end);
	printf("%s\n", s);

    char *temp_begin = s;
    char *temp_end = s;

    while (*temp_begin != '\0') {
		if (temp_begin == ' ') {
			temp_begin++;
			temp_end++;
		} else if (temp_begin) {
			
		}
        while (*temp_end != ' ') {
            temp_end++;
			temp++;
        }
        temp_end--;
		temp--;
        reverseAll(temp_begin, temp_end);
        
        temp_end++;
		temp++;
        while (*temp_end == ' ') {
            temp_end++;
			temp++;
        }
        temp_begin = temp_end;
		// temp++;
    }

    return s;
}

int main() {
    char input[] = "hello   world. my love!";
    
    printf("%s\n", reverseWords(input));
}