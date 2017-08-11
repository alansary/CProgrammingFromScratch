#include <stdio.h>
int main(){
    char str1[20];
    printf("Enter your name: ");
    scanf("%s", &str1);
    printf("Your name is %s\n", str1);
    char *str1ptr = str1;
    while(*str1ptr != '\0'){
        printf("%c", *str1ptr);
        str1ptr++;
    }
    printf("\n");
    int i;
    for(i=0; i<20; i++)
        printf("%c", str1[i]);
    printf("\n");
    char str2[10] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("str2 = %s and the array size is %d\n", str2, sizeof(str2)/sizeof(char));
    char str3[] = "Alansary";
    printf("%s is str3 and the array size is %d\n", str3, sizeof(str3)/sizeof(char));
    char* str4 = "Mohamed Alansary"; //str4 is a pointer to an array of characters
    printf("Your name is %s\n", str4);
    //Howerever, str4 is a constant string that cannot be changed and cannot be assigned a value by scanf
    char message1[] = "Hello, World";
    char *message2 = "Hello, World";
    printf("sizeof(message1) = %d\tsizeof(message2) = %d\n", sizeof(message1), sizeof(message2));
    printf("message1: %s\tmessage2: %s\n", message1, message2);
    message1[1] = 'M';
    message2 = message1;
    printf("message1: %s\tmessage2: %s\n", message1, message2);
    char a_string[20], b_string[20];
    printf("Enter an essay:\n");
    scanf("%s%s", &a_string, &b_string);
    printf("%s%s\n", a_string, b_string);
}
