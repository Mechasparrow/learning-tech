#include <stdio.h>
#define MAXLINE 1000

//declare our functions
int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main() 
{
    int len;
    int max;
    char line[MAXLINE]; //current line
    char longest[MAXLINE]; //longest line

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0){
        if (len > max) {
            max = len; // set the new max
            copy(longest, line); //copy the line to the longest line array
        }
    }
    if (max > 0){ // a line was found
        printf("%s", longest);
    }

    return 0;
}

int getline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim -1 && (c=getchar()) != EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i; 

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}