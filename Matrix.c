#include <stdio.h>

int main(void)
{
    int A1[10][10], A2[10][10], A3[10][10], A4[10][10], A5[10][10], A6[10][10],
        r1, r2, r3, r4, r5, r6, c1, c2, c3, c4, c5, c6, result1[10][10],
        result2[10][10],result3[10][10], result4[10][10], result5[10][10],i, j, k;
    
    printf("Enter rows and columns of matrix A1: ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter rows and columns of matrix A2: ");
    scanf("%d %d", &r2, &c2);
    
    printf("Enter rows and columns of matrix A3: ");
    scanf("%d %d", &r3, &c3);
    
    printf("Enter rows and columns of matrix A4: ");
    scanf("%d %d", &r4, &c4);
    
    printf("Enter rows and columns of matrix A5: ");
    scanf("%d %d", &r5, &c5);
    
    printf("Enter rows and columns of matrix A6: ");
    scanf("%d %d", &r6, &c6);
    
    while (c1 != r2)
    {
        printf("Error! column of first matrix not equal to row of second.\n\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&r2, &c2);
    }
    
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            A1[i][j] = 1;
    
    printf("\n1. A1 : %d x %d\n", r1, c1);
    for(i = 0; i<r1; i++)
        for(j = 0; j<c1; j++){
            printf("%d ", A1[i][j]);
            if(j == c1-1) printf("\n");
        }
    
    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++)
            A2[i][j] = 1;
    
    printf("\n2. A2 : %d x %d\n", r2, c2);
    for(i = 0; i<r2; i++)
        for(j = 0; j<c2; j++){
            printf("%d ", A2[i][j]);
            if(j == c2-1) printf("\n");
        }
    
    for(i=0; i<r3; i++)
        for(j=0; j<c3; j++)
            A3[i][j] = 1;
    
    printf("\n3. A3 : %d x %d\n", r3, c3);
    for(i = 0; i<r3; i++)
        for(j = 0; j<c3; j++){
            printf("%d ", A3[i][j]);
            if(j == c3-1) printf("\n");
        }
    
    for(i=0; i<r4; i++)
        for(j=0; j<c4; j++)
            A4[i][j] = 1;
    
    printf("\n4. A4 : %d x %d\n", r4, c4);
    for(i = 0; i<r4; i++)
        for(j = 0; j<c4; j++){
            printf("%d ", A4[i][j]);
            if(j == c4-1) printf("\n");
        }
    
    for(i=0; i<r5; i++)
        for(j=0; j<c5; j++)
            A5[i][j] = 1;
    
    printf("\n5. A5 : %d x %d\n", r5, c5);
    for(i = 0; i<r5; i++)
        for(j = 0; j<c5; j++){
            printf("%d ", A5[i][j]);
            if(j == c5-1) printf("\n");
        }
    
    for(i=0; i<r6; i++)
        for(j=0; j<c6; j++)
            A6[i][j] = 1;
    
    printf("\n6. A6 : %d x %d\n", r6, c6);
    for(i = 0; i<r6; i++)
        for(j = 0; j<c6; j++){
            printf("%d ", A6[i][j]);
            if(j == c6-1) printf("\n");
        }
    
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++){
            result1[i][j] = 0;
            for(k=0; k<r2; k++)
                result1[i][j] += A1[i][k]*A2[k][j];
        }
    
    for(i=0; i<r1; i++)
        for(j=0; j<c3; j++){
            result2[i][j] = 0;
            for(k=0; k<r3; k++)
                result2[i][j] += result1[i][k]*A3[k][j];
        }
    
    for(i=0; i<r1; i++)
        for(j=0; j<c4; j++){
            result3[i][j] = 0;
            for(k=0; k<r4; k++)
                result3[i][j] += result2[i][k]*A4[k][j];
        }
    
    for(i=0; i<r1; i++)
        for(j=0; j<c5; j++){
            result4[i][j] = 0;
            for(k=0; k<r5; k++)
                result4[i][j] += result3[i][k]*A5[k][j];
        }
    
    for(i=0; i<r1; i++)
        for(j=0; j<c6; j++){
            result5[i][j] = 0;
            for(k=0; k<r6; k++)
                result5[i][j] += result4[i][k]*A6[k][j];
        }
    
    printf("\nResalut value: \n");
    
    for(i = 0; i<r1; i++)
        for(j = 0; j<c6; j++){
            printf("%d ", result5[i][j]);
            if(j == c5) printf("\n");
        }
    
    return 0;
}