int main()
{
    int h1, m1, h2, m2, hc, mf;
    while (1)
    {

        scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;
        else if (h1 == h2 && m2 < m1)
        {
            mf = (23 * 60) + (60 - (m1 - m2));
            printf("%d\n", mf);
        }
        else
        {
            hc = h2 - h1;
            if (hc < 0)
            {
                hc = 24 + (h2 - h1);
            }
            mf = m2 - m1;

            if (mf < 0)
            {
                mf = 60 + (m2 - m1);
                hc--;
            }
            printf("%d\n", (hc * 60) + mf);
        }
    }

    return 0;
}
