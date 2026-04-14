#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    const unsigned int nMaxHexDigits = (unsigned int)(ceil(log2(UINT32_MAX) / 4));
    long long nHexPower = 1;
    long long nDecNum = 0;
    char szLine1[256], szLine2[256];
    size_t nStrLen1, nStrLen2;
    bool bIsRightString = false;
    system("cls");
    printf("Input a hexadecimal number\r\n");
    scanf("%[^\n]", szLine1);
    sscanf(szLine1, "%[0-9Aa-Ff]", szLine2);
    nStrLen1 = strlen(szLine1);
    nStrLen2 = strlen(szLine2);
    bIsRightString = (nStrLen1 <= nMaxHexDigits) && (nStrLen1 == nStrLen2);
    if (!bIsRightString)
    {
        printf("Wrong hexadecimal number format!!!\r\n");
        getchar();
        getc(stdin);
        return 0;
    }
    for (unsigned int i = 0; i < nStrLen1; i++)
    {
        unsigned int nHexDigit = 0;
        char chHexDigit = szLine1[nStrLen1 - 1 - i];
        if (chHexDigit >= '0' && chHexDigit <= '9')
            nHexDigit = chHexDigit - '0';
        else if (chHexDigit >= 'A' && chHexDigit <= 'F')
            nHexDigit = 10 + chHexDigit - 'A';
        else if (chHexDigit >= 'a' && chHexDigit <= 'f')
            nHexDigit = 10 + chHexDigit - 'a';
        nDecNum += (nHexDigit * nHexPower);
        nHexPower *= 16;
    }
    printf("The decimal equivalent of the hexadecimal number %s is %lld\r\n", szLine1, nDecNum);
    getchar();
    getc(stdin);
    return 0;
}
