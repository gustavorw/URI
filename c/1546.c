int main()
{

    int i = 0, j = 0, n, k, depar;

    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &k);

        for (j = 0; j < k; ++j)
        {
            scanf("%d", &depar);

            if (depar == 1)
            {
                printf("Rolien\n");
            }
            else if (depar == 2)
            {
                printf("Naej\n");
            }
            else if (depar == 3)
            {
                printf("Elehcim\n");
            }
            else if (depar == 4)
            {
                printf("Odranoel\n");
            }
        }
    }

    return 0;
}