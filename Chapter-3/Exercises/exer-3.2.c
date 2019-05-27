#include <stdio.h>
 
void escape(char s[], char t[]) {

    int i;
    int c;

    c = 0;
    for (i = 0; s[i] != '\0'; i++) {
        printf("%c\n", s[i]);

        switch (s[i]) {
            case '\n':
                t[c] = '\\';
                c++;
                t[c] = 'n';
                i++;
                break;
            default:     
                t[c] = s[c];
                
                break;    
        }

        c++;

    }
    t[i+1] = '\0';

    return;
}

int main(void) {

    char output[1000];
    char input[6] = "he\nlo";
    escape(input, output);

    printf("%s\n", output);

    return 0;
}