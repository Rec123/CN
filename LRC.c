#include <stdio.h>
int main() {
    char one[8];
    char two[8];
    char three[8];
    char four[8];
    char lrc[8];
    char computedLrc[8];
    printf("Enter the Bit Frames : \n");
    scanf("%s",&one);
    scanf("%s",&two);
    scanf("%s",&three);
    scanf("%s",&four);
    scanf("%s", &lrc);
    printf("\nComputed LRC byte pattern is : ");
    int flag = 0 ;
    for (int i = 0; i < 8; ++i) {
        int count = 0 ;
        if(one[i] == '1') count++;
        if(two[i] == '1') count++;
        if(three[i] == '1') count++;
        if(four[i] == '1') count++;
        if(lrc[i] == '1') count++;
        if(count % 2 == 0) {
            computedLrc[i] = '0';
            printf("0");
        }
        else {
            computedLrc[i] = '1';
            printf("1");
            flag = 1;
        }
     }
    if(flag == 0) printf("\nNo Error is Present in the Received Data Frames");
    else printf("\nErrors are present in the Received Data Frames");
    return 0;
}
