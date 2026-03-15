#include<stdio.h>
#include<string.h>
void printstring(char arr[]);
int countlength(char arr[]);
void salting(char password[]);
void slice(char str[],int n, int m);
int countvowels(char str[]);
void checkchar(char str[],char ch);
int main(){
    char str[] = "abhijeet";
    char ch = 'o';
    checkchar(str , ch);
    // printf("vowels are : %d",countvowels(str));
    // slice(str,3,6);
    // char password[100];
    // scanf("%s",password);
    // salting(password);

    // char str[100];
    // char ch;
    // int i;
    // while (ch != '\n')
    // {
    //     scanf("%c",&ch);
    //     str[i] = ch;
    //     i++;


    // }
    // str[i] = 0;
    // puts(str);
    
    // char name[] = "abhijet";
    // int length = strlen(name);
    // // scanf("%s",name);
    // printf("length is  %d ",length);
    return 0;
    // char name[100];
    // fgets(name,100,stdin);
    // // scanf("%s",name);
    // printf("length is  %d ",countlength(name));
    // return 0;
    // char firstname[] = "abhijeet";
    // char lastname[] = "kumar";
    // printstring(firstname);
    // printstring(lastname);
    // return 0;
}
void checkchar(char str[],char ch){
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("the character is present :)");
            return;
        }
        
    }
    printf("the character is not present :(");


    
}
int countvowels(char str[]){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
        {
            count++;
        }
    }
    return count;
}
void slice(char str[],int n, int m){
    char newstr[100];
    int j = 0;
    for (int i = n; i <= m; i++ , j++)
    {
       newstr[j] = str[i];

    }
    newstr[j] = '\0';
    puts(newstr);
    
}
void salting(char password[]){
    char salt[] = "123";
    char newpass[200];
    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);


}
int countlength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
      count++;
    }
    return count-1;
}
void printstring(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
       printf("%c",arr[i]);
    }
    printf("\n");
    
}