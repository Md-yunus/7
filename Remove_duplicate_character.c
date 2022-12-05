#include<stdio.h>
int main()
{
    char a[100];
    fgets(a,sizeof(a),stdin);
    for(int i=0;a[i]!='\0';i++){
        for(int j=i+1;a[j]!='\0';j++){
            if(a[i]==a[j]){
                for(int k=j;a[k]!='\0';k++){
                    a[k]=a[k+1];
                }
            }
        }
    }printf("%s ",a);
    //for(int i=0;a[i]!='\0';i++){
    //printf("%s",a[i]);
    
}
