int _atoi(char *s)
{
    int c = 0;
    unsigned int ni = 0;
    int min = 1;
    int isi = 0;

    while (s[c])
    {
        if (s[c] == 45)
        {
            min *= -1;
        }
        while (s[c] >= 48 && s[c] <= 57)
        {
            isi = 1;
            ni = (ni * 10) + (s[c] - '0');
            c++;
            if (isi == 1)
            {
                break;
            }
            c++;
        }
        ni *= min;
        return (ni);
    }
    
    // Add a return statement here (e.g., return 0) to handle the case when the input string is empty or doesn't contain any valid integer.
    return 0;
}

