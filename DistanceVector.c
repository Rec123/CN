#include <stdio.h>

int main()
{
    int JA[5],JI[5],JH[5],JK[5],AG,IG,HG,KG,JG[10],a,b,c,d,i,j,Ja1,Ji1,Jh1,Jk1,min,index;
    printf("Enter the No of Delays From J to A:");
    scanf("%d",&a);
    printf("Enter the No of Delays From J to I:");
    scanf("%d",&b);
    printf("Enter the No of Delays From J to H:");
    scanf("%d",&c);
    printf("Enter the No of Delays From J to K:");
    scanf("%d",&d);
    printf("Enter the Delays From J to A:");
    for(i=0;i<a;i++){
    scanf("%d",&JA[i]);}
    printf("Enter the Delays From J to I:");
    for(i=0;i<b;i++){
    scanf("%d",&JI[i]);}
    printf("Enter the Delays From J to H:");
    for(i=0;i<c;i++){
    scanf("%d",&JH[i]);}
    printf("Enter the Delays From J to K:");
    for(i=0;i<d;i++){
    scanf("%d",&JK[i]);}
    //Getting Minimum from the Delays
    Ja1=JA[0];
    for(i=1;i<a;i++){
        if(Ja1>JA[i]){
            Ja1=JA[i];
        }
        else{
            Ja1=Ja1;
        }
    }
    Ji1=JI[0];
    for(i=1;i<b;i++){
        if(Ji1>JI[i]){
            Ji1=JI[i];
        }
        else{
            Ji1=Ji1;
        }
    }
    Jh1=JH[0];
    for(i=1;i<c;i++){
        if(Jh1>JH[i]){
            Jh1=JH[i];
        }
        else{
            Jh1=Jh1;
        }
    }
    Jk1=JK[0];
    for(i=1;i<d;i++){
        if(Jk1>JK[i]){
            Jk1=JK[i];
        }
        else{
            Jk1=Jk1;
        }
    }
    printf("Enter the Delay From A to G AG:");
    scanf("%d",&AG);
    printf("Enter the Delay From I to G IG:");
    scanf("%d",&IG);
    printf("Enter the Delay From H to G HG:");
    scanf("%d",&HG);
    printf("Enter the Delay From K to G KG:");
    scanf("%d",&KG);
    //Adding the Delays through Different paths From J to G
    JG[0]=Ja1+AG;
    JG[1]=Ji1+IG;
    JG[2]=Jh1+HG;
    JG[3]=Jk1+KG;
    //Minimum from these paths:
    min=JG[0];
    index=0;
    for(i=1;i<4;i++){
        if(min>JG[i]){
            min=JG[i];
            index=i;
        }
        else{
            min=min;
        }
    }
    printf("The Shortest path Delay is : %d",min);
    printf("/nThe Shortest path is");
    if(index==0){
        printf("J-->A && A-->G");
    }
    if(index==1){
        printf("J-->I && I-->G");
    }
    if(index==2){
        printf("J-->H && H-->G");
    }
    if(index==3){
        printf("J-->K && K-->G");
    }
    return 0;
}
