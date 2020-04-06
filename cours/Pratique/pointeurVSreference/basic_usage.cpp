/*
Version pointeur
*/

int main()
{
    int age = 21;
    int *pointeurSurAge = &age;
    cout << *pointeurSurAge;
    *pointeurSurAge  = 40;
    cout << *pointeurSurAge;
    return 0;
}

/*
Version pointeur
*/

int main()
{
    int age = 21;
    int &referenceSurAge = age;
    cout << referenceSurAge;
    referenceSurAge  = 40;
    cout << referenceSurAge;
    return 0;
}
