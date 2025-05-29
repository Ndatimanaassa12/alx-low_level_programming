char *_strncat(char *dest, char *src, int n)
{
    char *p = dest;
    while (*p) p++;
    while (n-- && *src)
        *p++ = *src++;
    *p = '\0';
    return dest;
}

