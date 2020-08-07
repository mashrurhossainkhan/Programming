#include <cstdio>
#include <cstring>
int main(){

    char str[100];
    int counter=0 , rotation1 , rotation2;


        scanf("%s",str);
        int length = strlen(str);
        rotation1 = str[0] - 'a';
        rotation2 = 'z'- str[0] + 'a'-96;
        if(rotation1 < rotation2)
            counter += rotation1;
        else
            counter += rotation2;

        for( int i=0 ; i<length-1 ; i++){
            if(str[i]>str[i+1]){
                rotation1 = str[i] - str[i+1];
                rotation2 = 'z'- str[i] + str[i+1] - 96;
            }
            else{
                rotation1 = str[i+1] - str[i];
                rotation2 = 'z'- str[i+1] + str[i] - 96;
            }
            if(rotation1 < rotation2)
                counter += rotation1;
            else
                counter += rotation2;
        }
        printf("%d\n",counter);

}
