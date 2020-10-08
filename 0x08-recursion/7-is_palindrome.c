#include "holberton.h"

/**
 * string_length - finds length of the string
 * @s: input string to check
 * Return: integer length
 */
int string_length(char *s)
{
        if (*s == '\0')
                return (0);
        return (string_length(++s) + 1);
}
/**
 * check_letters - check if numbers are equal
 * @s: input string to check length
 * @i: beginning index
 * @j: ending index
 * Return: boolean
 */
int check_letters(char *s, int i, int j)
{
        if ((j - i) < 2)
                return (s[i] == s[j] ? 1 : 0);
        if (s[i] != s[j])
                return (0);
        return (check_letters(s, ++i, --j));
}
/**
 * is_palindrome - checks if string is palindrom
 * @s: input string to check
 * Return: boolean
 */
int is_palindrome(char *s)
{
        int len = string_length(s);

        if (len < 2)
                return (1);
        return (check_letters(s, 0, --len));
}
