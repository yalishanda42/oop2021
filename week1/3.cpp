void swap(char& c1, char& c2)
{
    char temp = c2;
    c2 = c1;
    c1 = temp;
}

void swap(char* c1, char* c2)
{
    char temp = *c2;
    *c2 = *c1;
    *c1 = temp;
}