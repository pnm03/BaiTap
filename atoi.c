#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // printf ("Num: %c - ", input[0]);
    // TODO
    string b = NULL; // Khởi tạo chuỗi đích là NULL

    // Đảm bảo b có đủ bộ nhớ để chứa chuỗi được sao chép
    if (input != NULL) {
        int length = strlen(input) - 1;
        if (length >= 0) {
            b = malloc(length + 2); // Cấp phát bộ nhớ cho chuỗi đích
            if (b != NULL) {
                strncpy(b, input, length);
                b[length + 1] = '\0'; // Đảm bảo kết thúc chuỗi đích
            }
        }
    }
    int num = 0;
    if (strlen(b) != 0) {
        num = convert(b);
    }
    else if (strlen(b) == 0){
        num = 0;
    }
    return num*10 + (int)input[strlen(input)-1]-48;

}