// infix to prefix
#include <stdio.h>
#define M 50
#include <ctype.h>
#include <string.h>
char stk[M];
int top = -1;
void push(char ch)
{
    stk[++top] = ch;
}
char pop()
{
    return stk[top--];
}
int prec(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/' || ch == '%')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}
void intopost(char in[])
{
    char postfix[30];
    int i, j = 0;
    for (i = 0; in[i] != '\0'; i++)
    {
        if (in[i] == '(')
        {
            push(in[i]);
        }
        else if (isalpha(in[i]) > 0)
        {
            postfix[j++] = in[i];
        }
        else if (in[i] == ')')
        {
            while (stk[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop();
        }
        else
        {
            while (prec(stk[top]) > prec(in[i]))
            {
                postfix[j++] = pop();
            }
            push(in[i]);
        }
    }
    strrev(postfix);
    postfix[j] = '\0';
    printf("%s", postfix);
}
int main()
{
    char infix[30];
    printf("enter the infix expression:\n");
    scanf("%s", infix);
    strrev(infix);
    for (int i = 0; infix[i] != '\0'; i++)
    {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }
    push('(');
    strcat(infix, ")");
    intopost(infix);
    return 0;
}