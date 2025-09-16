#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    int check = 0;
    for (int i = 0; i < 5 / 2; i++)
    {
        if (arr[i] != arr[5 - i - 1])
        {
            check = 1;
            break;
        }}
        if (check == 0)
        {
            printf("palindrome");
        }
        else
        {
            printf("not palindrome");
        }
    

return 0;
}