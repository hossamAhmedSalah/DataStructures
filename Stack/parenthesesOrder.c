int isMatching(char c, char c2)
{
    if(c == '(' && c2 == ')')
      return 1;
    else if (c == '{' && c2 == '}')
      return 1;
    else if (c == '[' && c2 == ']')
       return 1;
    else
        return 0;
}
int isBracketBalanced(char str[])
{
    int i = 0;
    Stack bracket;
    createStack(&bracket);
    while(str[i])
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            {
                push(&bracket, str[i]);
            }
        if(str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if(isStackEmpety(bracket))
            {
                return 0;
            }
            else if(!isMatching(pop(&bracket) , str[i] ))
            {
                return 0;

            }
        }
        i++;
    }

    isStackEmpety(bracket) ? return 1: return 0;
    

}
int main()
{
    char str[100];Stack p; createStack(&p);
  while(1)
  {

         printf("Enter various parentheses to check their order:\n");
         gets(str);
         isBracketBalanced(str)? printf("Balanced\n"): printf("Not Balanced");
         printf("\n===========================================\n");
  }







}
