char *_strcat(char *dest, char *src)
{
    char *p = dest;
    while (*p) p++;
    while ((*p++ = *src++));
    return dest;
}

