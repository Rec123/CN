#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
    int i, j,count;
    unsigned long long int nl;
    char str[100];
    printf("Enter the bit string:  ");
    gets(str);
    for (i=0;i<strlen(str);i++) {
        count=0;

        for (j=i;j<=(i+5);j++) {
            if(str[j]=='1') {
                count++;
            }
        }

        if(count==6) {
            nl=strlen(str)+2;
            for (;nl>=(i+5);nl--) {
                str[nl]=str[nl-1];
            }
            str[i+5]='0';
            i=i+7;
        }
    }
    puts(str);
}
