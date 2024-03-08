//============================第一个程序=========================
//放在{}里的就是局部变量，放在{}外的就是整体变量
//3→字面常量   
//const→常属性   将变量变为常变量    const int num = 4  只是将变量赋予常属性
//#define 定义的标识符常量  → #difine MAX 10 此时MAX为常量
//枚举常量→ enum sex{male，female,secret};
//=========================================================
//字符串表示→%s
// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     char arr1[] = "abc";
//     char arr2[] ={'a','b','c'};
//     printf("%s\n",arr1);
//     printf("%s\n",arr2);
//     system("pause");
//     return 0;
// }
//“abc"——————→'a''b''c''\0'————→\0是字符串的结束标志
//所以正确写法是
// #include<stdio.h>

// int main()
// {
//     char arr1[] = "abc";
//     char arr2[] ={'a','b','c','\0'};
//     printf("%s\n",arr1);
//     printf("%s\n",arr2);
//     return 0;
// }







// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char arr1[] = "abc";
//     char arr2[] ={'a','b','c'};
//     printf("%d\n",strlen(arr1));——→3
//     printf("%d\n",strlen(arr2));——→随机值
//     return 0;
// }
//================================================
//'\'———→转义的作用
// #include <stdio.h> 
// int main() { 
//     char ch; 
//     printf("Please enter a character.\n"); 
//     scanf("%c", &ch); /* user inputs character */
//     printf("The code for %c is %d.\n", ch, ch); 
//     system("pause");
//     return 0; 
// } 
//==================================================
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     char ch;
//     printf("please input some words!\n");
//     while((ch = getchar())!='#')
//     putchar(ch);
//     system("pause");
//     return 0;
// }
//==================================================
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     printf("%u",sizeof(short));
//     system("pause");
//     return 0;
// }
//=====================================================
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int input;
//     printf("do you want to study hard?(1/0)\n");
//     scanf("%d",&input);
//     if(input == 1)
//     printf("you are right!\n");
//     else
//     printf("it not ok\n");
//     system("pause");
//     return 0;
// }
// =====================================================
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int line = 0;
//     while(line<20){
//         printf("wait sometime:%d\n",line);
//         line++;
//     }
//     if(line>=20)
//     printf("it is OK");
//     system("pause");
//     return 0;
//     }
//=====================================================
//（2进制）位操作
//& 按位与
//| 按位或
//^ 按位异或
