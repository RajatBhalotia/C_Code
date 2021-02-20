#include<stdio.h>
void main(){
FILE *fp_original,*fp_copy;
char original[100],copy[100],data[10];
printf("n");
//The path of the image which is to be copied
printf("Enter the path of the image to be copied");
scanf("%s",original);
//The path where the copy image would be the name which u want to give to copied image should be given
printf("Enter the path where the copied image should be store ");
scanf("%s",copy);
fp_original=fopen(original,"rb");
if(fp_original==NULL){
    printf("Image is not found");
    exit(1);
}
fp_copy=fopen(copy,"wb");
if(fp_copy==NULL){
    printf("File can't be opened");
}
while(fread(original,100,1,fp_original)!=0){
    fwrite(original,100,1,fp_copy);

}
fclose(fp_original);
fclose(fp_copy);

}
